#ifndef DEF_NOMDUFICHIER // Si la constante n'a pas �t� d�finie` le fichier n'a jamais �t� inclus
#define DEF_NOMDUFICHIER // On d�finit la constante pour que la prochaine fois le fichier ne soit plus inclus
/* Contenu de votre fichier .h (autres includes` prototypes de vos fonctions` defines...) */

typedef struct Coordonnees Coordonnees;
struct Coordonnees
{
    long x;
    long y;
};
typedef struct Personne Personne;
struct Personne
{
    char nom[100];
    char prenom[100];
    char adresse[1000];

    long age;
    int garcon; // Bool�en : 1 = gar�on, 0 = fille
};
typedef enum Volume Volume;
enum Volume
{
 FAIBLE=10, MOYEN=50, FORT=100
};
#endif

