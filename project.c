#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 50
#define MAX_TEAMS 10

// ----- Structures -----
typedef struct {
    int id;
    char name[30];
    int age;
    char sport[20];
    char team[20];
} Player;

typedef struct {
    int id;
    char name[30];
    char sport[20];
} Team;

// ----- Global Arrays -----
Player players[MAX_PLAYERS];
Team teams[MAX_TEAMS];

int playerCount = 0;
int teamCount = 0;

// ----- Functions -----
void addPlayer() {
    if (playerCount >= MAX_PLAYERS) {
        printf("Player limit reached!\n");
        return;
    }

    Player p;
    p.id = playerCount + 1;

    printf("Enter Player Name: ");
    scanf(" %[^\n]", p.name);

    printf("Enter Age: ");
    scanf("%d", &p.age);

    printf("Enter Sport: ");
    scanf(" %[^\n]", p.sport);

    printf("Enter Team: ");
    scanf(" %[^\n]", p.team);

    players[playerCount++] = p;
    printf("Player Added Successfully!\n");
}

void viewPlayers() {
    if (playerCount == 0) {
        printf("No players available.\n");
        return;
    }

    printf("\n---- Player List ----\n");
    for (int i = 0; i < playerCount; i++) {
        printf("ID: %d | Name: %s | Age: %d | Sport: %s | Team: %s\n",
               players[i].id, players[i].name, players[i].age,
               players[i].sport, players[i].team);
    }
}

void addTeam() {
    if (teamCount >= MAX_TEAMS) {
        printf("Team limit reached!\n");
        return;
    }

    Team t;
    t.id = teamCount + 1;

    printf("Enter Team Name: ");
    scanf(" %[^\n]", t.name);

    printf("Enter Sport: ");
    scanf(" %[^\n]", t.sport);

    teams[teamCount++] = t;
    printf("Team Added Successfully!\n");
}

void viewTeams() {
    if (teamCount == 0) {
        printf("No teams available.\n");
        return;
    }

    printf("\n---- Team List ----\n");
    for (int i = 0; i < teamCount; i++) {
        printf("ID: %d | Name: %s | Sport: %s\n",
               teams[i].id, teams[i].name, teams[i].sport);
    }
}

void menu() {
    printf("\n===== Sports Management System =====\n");
    printf("1. Add Player\n");
    printf("2. View Players\n");
    printf("3. Add Team\n");
    printf("4. View Teams\n");
    printf("5. Exit\n");
    printf("Choose an option: ");
}

int main() {
    int choice;

    while (1) {
        menu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addPlayer();
                break;
            case 2:
                viewPlayers();
                break;
            case 3:
                addTeam();
                break;
            case 4:
                viewTeams();
                break;
            case 5:
                printf("Exiting System...\n");
                return 0;
            default:
                printf("Invalid Option! Try Again.\n");
        }
    }
}
