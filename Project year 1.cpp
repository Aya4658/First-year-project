#include <stdio.h>
#include <string.h>
#include <stdlib.h>



//GEASTION ETUDIANTS___________________



struct date{
    int jour; // 1 > 31
    int mois; // 1 > 12
    int annee;
};

struct Module{
    float note;
    struct date Date;
};

struct etudiant{
    int NumUni; // unique
    char nom[30]; 
    int age;
    int anneEtud;
    struct Module Francais;
    struct Module Archi;
    struct Module math;
    struct Module ProgC;
    struct Module Anglais;
};

void addEtu(etudiant *&Tet,int &Long){
	int cp=0,i;
	
	if(Long==0){
	Tet=(etudiant*)malloc(sizeof(etudiant));	
	}else{
	 
		Tet=(etudiant* )realloc(Tet,sizeof(etudiant)*(Long+1));
	}
	if (Tet != NULL){
		printf("Entrer le nom de l'etudiant");
		scanf("%s",Tet[Long].nom);
		printf("Entrer le numero unique d'etudiant:");
		do{
			cp=0;
			scanf("%d",&Tet[Long].NumUni);
			for(i=0;i<Long;i++){
				if(Tet[Long].NumUni==Tet[i].NumUni){
					cp++;
				}
			}
		}while(cp!=0);
		
		printf("Entrer l'age:");
		scanf("%d",&Tet[Long].age);
		
		printf("Entrez la note de Francais");
		scanf("%f",&Tet[Long].Francais.note);
		
		printf("La date Examen? Entrez jour puis mois puis annee");
		scanf("%d",&Tet[Long].Francais.Date.jour);
		scanf("%d",&Tet[Long].Francais.Date.mois);
		scanf("%d",&Tet[Long].Francais.Date.annee);
		
		printf("Entrez la note d'architecture");
		scanf("%f",&Tet[Long].Archi.note);
		
		printf("La date Examen? Entrez jour puis mois puis annee");
		scanf("%d",&Tet[Long].Archi.Date.jour);
		scanf("%d",&Tet[Long].Archi.Date.mois);
		scanf("%d",&Tet[Long].Archi.Date.annee);
		
		
		printf("Entrez la note de Programmation C");
		scanf("%f",&Tet[Long].ProgC.note);
		
		printf("La date Examen? Entrez jour puis mois puis annee");
		scanf("%d",&Tet[Long].ProgC.Date.jour);
		scanf("%d",&Tet[Long].ProgC.Date.mois);
		scanf("%d",&Tet[Long].ProgC.Date.annee);
		
		
		printf("Entrez la note de math");
		scanf("%f",&Tet[Long].math.note);
		
		printf("La date Examen? Entrez jour puis mois puis annee");
		scanf("%d",&Tet[Long].math.Date.jour);
		scanf("%d",&Tet[Long].math.Date.mois);
		scanf("%d",&Tet[Long].math.Date.annee);
		
		
		printf("Entrez la note d'Anglais");
		scanf("%f",&Tet[Long].Anglais.note);
		
		printf("La date Examen? Entrez jour puis mois puis annee");
		scanf("%d",&Tet[Long].Anglais.Date.jour);
		scanf("%d",&Tet[Long].Anglais.Date.mois);
		scanf("%d",&Tet[Long].Anglais.Date.annee);
	}else{
		printf("Erreur d'allocation de memoire \n");
	}
	Long++;
}




int rechercheNum(etudiant *Tet,int Long){
	int NumT,i;
	
	printf("Entrer un numero unique d'etudiant");
	scanf("%d",&NumT);
	for (i=0;i<Long;i++){
		if(NumT==Tet[i].NumUni){
			return i;
		}
	}
	printf("Etudiant non trouve");
}

void lister(etudiant *Tet,int Long){
	int i;
	for(i=0;i<Long;i++){
		printf("Nom d'etudiant: %s \t Numero unique: %d \t Age d'etudiant: %d \t Annee d'etude",Tet[i].nom,Tet[i].NumUni,Tet[i].age,Tet[i].anneEtud);
	}
}

void ModifEtu(etudiant *Tet,int Long){
	int pos=-1;
	
	pos=rechercheNum(Tet,Long);
	
	if(pos==-1){
		printf("Etudiant non trouve");
	}else{
		printf("Entrer le nom de l'etudiant");
		scanf("%s",Tet[pos].nom);

		printf("Entrer l'age:");
		scanf("%d",&Tet[pos].age);
	}
	
}

void SuppEtu(etudiant *&Tet,int &Long){
	int pos=-1,i;
	
	pos=rechercheNum(Tet,Long);
	
	if(pos==-1){
		printf("Etudiant non trouve");
	}else{
		for(i=0;i<Long;i++){
			Tet[i]=Tet[i+1];
		}
		Tet=(etudiant* )realloc(Tet,sizeof(etudiant)*(Long-1));
		Long--;
	}
}

//GESTION NOTES_____________________

void ModifNotes(etudiant *Tet,int Long){
	int pos=-1;
	
	pos=rechercheNum(Tet,Long);
	
	if(pos==-1){
		printf("Etudiant non trouve");
	}else{
		printf("Entrez la note de Francais");
		scanf("%f",&Tet[pos].Francais.note);
		
		printf("La date Examen? Entrez jour puis mois puis annee");
		scanf("%d",&Tet[pos].Francais.Date.jour);
		scanf("%d",&Tet[pos].Francais.Date.mois);
		scanf("%d",&Tet[pos].Francais.Date.annee);
		
		printf("Entrez la note d'architecture");
		scanf("%f",&Tet[pos].Archi.note);
		
		printf("La date Examen? Entrez jour puis mois puis annee");
		scanf("%d",&Tet[pos].Archi.Date.jour);
		scanf("%d",&Tet[pos].Archi.Date.mois);
		scanf("%d",&Tet[pos].Archi.Date.annee);
		
		
		printf("Entrez la note de Programmation C");
		scanf("%f",&Tet[pos].ProgC.note);
		
		printf("La date Examen? Entrez jour puis mois puis annee");
		scanf("%d",&Tet[pos].ProgC.Date.jour);
		scanf("%d",&Tet[pos].ProgC.Date.mois);
		scanf("%d",&Tet[pos].ProgC.Date.annee);
		
		
		printf("Entrez la note de math");
		scanf("%f",&Tet[pos].math.note);
		
		printf("La date Examen? Entrez jour puis mois puis annee");
		scanf("%d",&Tet[pos].math.Date.jour);
		scanf("%d",&Tet[pos].math.Date.mois);
		scanf("%d",&Tet[pos].math.Date.annee);
		
		
		printf("Entrez la note d'Anglais");
		scanf("%f",&Tet[pos].Anglais.note);
		
		printf("La date Examen? Entrez jour puis mois puis annee");
		scanf("%d",&Tet[pos].Anglais.Date.jour);
		scanf("%d",&Tet[pos].Anglais.Date.mois);
		scanf("%d",&Tet[pos].Anglais.Date.annee);
	}
	
}

void ListerNotesAn(etudiant *Tet,int Long){
	int AnET,i;
	printf ("Entrez l'annee d'etude dont vous voulez lister le notes des etudiants");
	scanf("%d",AnET);
	
	for(i=0;i<Long;i++){
		if(AnET==Tet[i].anneEtud){
			printf("Les notes des etudiants de l'annee %d",AnET);
			printf("Nom Etudiant: %s \t Numero unique: %s \t Note Francais: %f \t Note Architecture: %f \t Note Anglais: %s \t Note Programmation C: %f \t Note Math: %f",Tet[i].nom,Tet[i].NumUni,Tet[i].Francais.note,Tet[i].Archi.note,Tet[i].Anglais.note,Tet[i].ProgC.note,Tet[i].math.note);	
		}
	}
}

void CalculMoy(etudiant *Tet,int Long){
	int pos=-1,M=0,S=0,Nmath,Neng,Nfr,Narch,Nprog;
	
	
	printf ("Calculer la moyenne de notes d'un etudiant");
	pos=rechercheNum(Tet,Long);
	
	if(pos==-1){
		printf("Etudiant non trouve");
	}else{
		Nmath=(Tet[pos].math.note)*4;
		Neng=(Tet[pos].Anglais.note)*2;
		Nfr=(Tet[pos].Francais.note)*2;
		Narch=(Tet[pos].Archi.note)*3;
		Nprog=(Tet[pos].ProgC.note)*5;
		
		S=Nmath+Neng+Nfr+Narch+Nprog;
		
		M=S/16;
		
		printf("La moyenne des notes d'etudiant %s est: %d",Tet[pos].nom,M);
	}
}
//_____________________________


void MainMenu(){
	printf("\n1)Gestions d'etudiants \n2)Gestions Notes \n3)Quitter \n \n");
	printf("Choisissez un choix:");
}

void MenuEtud(){
	printf("\n1)Ajouter etudiant \n2)Modifier etudiant \n3)Supprimer etudiant \n4)Lister les etudiants \n5)Gestions Notes \n");
	printf("Choisissez un choix:");
}

void GestNotes(){
	printf("\n1)Modifier note d'etudiant \n3)Lister les notes d'etudiant \n3)Calcul Moyenne \n");
	printf("Choisissez un choix:");
}

//Texte

	void chargerTet_txt(const char *TableauEtudiants, etudiant *&Tet, int &Long) {
    FILE *file = fopen(TableauEtudiants, "r");
    Long = 0;
    if (file == NULL) {
        fprintf(stderr, "Erreur d'ouverture du fichier\n");
        return;
    }

    Tet = (struct etudiant*)malloc(sizeof(struct etudiant));  

    

    while (fscanf(file, "%s %d %d %f %d %d %d %f %d %d %d %f %d %d %d %f %d %d %d %f %d %d %d",
            &Tet[Long].nom, &Tet[Long].NumUni, &Tet[Long].age, &Tet[Long].Francais.note, &Tet[Long].Francais.Date.jour, &Tet[Long].Francais.Date.mois,
            &Tet[Long].Francais.Date.annee, &Tet[Long].Archi.note, &Tet[Long].Archi.Date.jour, &Tet[Long].Archi.Date.mois, &Tet[Long].Archi.Date.annee,
            &Tet[Long].ProgC.note, &Tet[Long].ProgC.Date.jour, &Tet[Long].ProgC.Date.mois, &Tet[Long].ProgC.Date.annee, &Tet[Long].math.note,
            &Tet[Long].math.Date.jour, &Tet[Long].math.Date.mois, &Tet[Long].math.Date.annee, &Tet[Long].Anglais.note, &Tet[Long].Anglais.Date.jour,
            &Tet[Long].Anglais.Date.mois, &Tet[Long].Anglais.Date.annee) != EOF) {
        

        Tet = (struct etudiant *)realloc(Tet, sizeof(struct etudiant) * (Long + 1));
        Long++;
    }

    fclose(file);
}

   
   void sauvegarderTet_txt(const char *TableauEtudiants,int Long,etudiant *&Tet ) {
    FILE *file = fopen(TableauEtudiants, "w");
    int i;
    if (file == NULL) {
        fprintf(stderr, "Erreur d'ouverture du fichier\n");
        return;
    }

    for (int i = 0; i < Long; i++) {
        fprintf(file, "%s %d %d %f %d %d %d %f %d %d %d %f %d %d %d %f %d %d %d",
				&Tet[Long].nom,&Tet[Long].NumUni,&Tet[Long].age,&Tet[Long].Francais.note,&Tet[Long].Francais.Date.jour,&Tet[Long].Francais.Date.mois,
				&Tet[Long].Francais.Date.annee,&Tet[Long].Archi.note,&Tet[Long].Archi.Date.jour,&Tet[Long].Archi.Date.mois,&Tet[Long].Archi.Date.annee,
				&Tet[Long].ProgC.note,&Tet[Long].ProgC.Date.jour,&Tet[Long].ProgC.Date.mois,&Tet[Long].ProgC.Date.annee,&Tet[Long].math.note,
				&Tet[Long].math.Date.jour,&Tet[Long].math.Date.mois,&Tet[Long].math.Date.annee,&Tet[Long].Anglais.note,&Tet[Long].Anglais.Date.jour,
				&Tet[Long].Anglais.Date.mois,&Tet[Long].Anglais.Date.annee);
    }
    fclose(file);
}


//Binaire

void chargerTet_bin(char filebin_name[10], etudiant *Tet, int Long) {
    
    
    FILE *filebin = fopen(filebin_name, "rb");
    
    if (filebin == NULL) {
        fprintf(stderr, "Erreur d'ouverture du fichier\n");
        return;
    }
    fread(&Long, sizeof(int), 1, filebin);
    fread(Tet, sizeof(etudiant), Long, filebin);
    fclose(filebin);
    
}

void sauvegarderTet_bin(char filebin_name[10], etudiant *Tet, int Long ) {
    
    FILE *filebin = fopen(filebin_name, "wb");
    if (filebin == NULL) {
        fprintf(stderr, "Erreur d'ouverture du fichier\n");
        return;
    }
	fwrite(&Long, sizeof(int), 1, filebin);
    fwrite(Tet, sizeof(etudiant), Long, filebin);
    fclose(filebin);
    
}




  main(){
	etudiant *Tet;
	int Long=0;
	int choix;
	char filebin_name[10];
	const char *TableauEtudiants = "TabEtu.txt";  
    
    
    	chargerTet_txt(TableauEtudiants, Tet, Long) ;
    	chargerTet_bin(filebin_name,Tet,Long);
	
		
    
    
    printf("Les donnees sont sauvergardees autoumatiquement dans un fichier texte et un autre binaire");
    
    printf("Voulez vous charger les anciens donnes? cliquez sur 1 si vous les avez deja sauvegardes: ");
    scanf("%d",&choix);
    if (choix==1){
    chargerTet_txt(TableauEtudiants, Tet, Long) ;
    chargerTet_bin(filebin_name,Tet,Long);
	}
    
	MainMenu();
	
	scanf("%d",&choix);
	switch(choix){do{
	
            case 1: MenuEtud();
            			
						scanf("%d",&choix);
            			switch(choix){
            			case 1: addEtu(Tet,Long);
            			break;
            			case 2: ModifEtu(Tet,Long);
            			break;
            			case 3: SuppEtu(Tet,Long);
            			break;
            			case 4: lister(Tet,Long);
            			break;
            			case 5: GestNotes();
            					printf("Entrer un choix:");
								scanf("%d",&choix);
            					switch(choix){
            						case 1: ModifNotes(Tet,Long);
            						break;
            						case 2: ListerNotesAn(Tet,Long);
            						break;
            						case 3: CalculMoy(Tet,Long);
            						break;
            						default:
                            		printf("Choix non valide. Veuillez réessayer.\n");
								}
							
						default:
                        printf("Choix non valide. Veuillez réessayer.\n");
						}
			break;		
			case 2:GestNotes();
					
					scanf("%d",&choix);
            		switch(choix){
          			case 1: ModifNotes(Tet,Long);
            		break;
            		case 2: ListerNotesAn(Tet,Long);
            		break;
            		case 3: CalculMoy(Tet,Long);
            		break;
					default:
                  	printf("Choix non valide, veuillez réessayer.\n");
					}
			        default:
                	printf("Choix non valide, veuillez réessayer.\n");
            }while(choix!=3);
	}
	
	sauvegarderTet_txt(TableauEtudiants,Long,Tet);
	sauvegarderTet_bin(filebin_name,Tet,Long);
	
	free(Tet);
	
}