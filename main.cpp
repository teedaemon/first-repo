#include <iostream>
#include <string> 
using namespace std; 

int main() {
     const int NUM_QUESTIONS = 20;

    string questions[NUM_QUESTIONS] = {
        "Auf einer Party bist du eher...",
        "Bei Entscheidungen gehst du eher nach...",
        "Am Wochenende bist du am liebsten...",
        "Du planst deinen Tag eher...",
        "In einer Gruppe übernimmst du eher...",
        "Bei neuen Ideen bist du eher...",
        "Konflikte gehst du eher an, indem du...",
        "Dein Arbeitsstil ist eher...",
        "Du triffst Entscheidungen eher...",
        "In deiner Freizeit bist du eher...",
        "Bei Stress reagierst du eher...",
        "Du lernst am liebsten...",
        "Deine Energie tankst du eher...",
        "Bei Meetings/Gruppenarbeit bist du eher...",
        "Regeln befolgst du eher...",
        "Veränderungen begegnest du eher...",
        "Du triffst dich lieber mit...",
        "Dein Zimmer/Schreibtisch ist eher...",
        "Bei Problemen denkst du eher...",
        "Deine Zukunft planst du eher..."
    };

    string optionA[NUM_QUESTIONS] = {
        "Mittendrin und redest mit vielen Leuten",
        "Logik und Fakten",
        "Draussen unterwegs, aktiv",
        "Spontan, wie es sich ergibt",
        "Die Führung",
        "Sofort begeistert",
        "Direkt ansprichst",
        "Chaotisch-kreativ",
        "Schnell und intuitiv",
        "Mit vielen Leuten unterwegs",
        "Redest mit anderen darüber",
        "Durch Ausprobieren",
        "Unter Menschen",
        "Redest viel",
        "Streng nach Vorschrift",
        "Offen und neugierig",
        "Vielen verschiedenen Leuten",
        "Chaotisch, aber kreativ",
        "Praktisch und konkret",
        "Locker, ohne festen Plan"
    };

    string optionB[NUM_QUESTIONS] = {
        "Lieber mit 1-2 Personen im ruhigen Eck",
        "Gefühl und Bauchgefühl",
        "Zuhause, entspannt",
        "Mit klarer Struktur/Liste",
        "Lieber die Umsetzung im Hintergrund",
        "Erst skeptisch, dann abwägend",
        "Erstmal drüber nachdenkst",
        "Strukturiert-organisiert",
        "Nach reiflicher Überlegung",
        "Lieber allein oder zu zweit",
        "Ziehst dich zurück",
        "Durch genaues Lesen/Verstehen",
        "Beim Alleinsein",
        "Hörst lieber zu",
        "Flexibel, wenn's Sinn ergibt",
        "Eher vorsichtig",
        "Wenigen engen Freunden",
        "Ordentlich und aufgeräumt",
        "Theoretisch und abstrakt",
        "Mit klarem, langfristigem Plan"
    };

    string types[] = {
        "Der Anführer - sehr extrovertiert, direkt, entscheidungsfreudig", 
        "Der Abenteurer - extrovertiert, spontan, energiegeladen", 
        "DerAusgleicher - Mischung aus beidem, flexibel", 
        "Der Denker - introvertiert, strukturiert, reflektiert", 
        "Der Stratege - sehr introvertiert, analytisch, planvoll"
    };

    int countA = 0;
    char answer;

    cout << "=== Personality Type Quiz ===" << endl;
    cout << "Beantworte jede Frage mit 'a' oder 'b'.\n" << endl;

    for (int i = 0; i < NUM_QUESTIONS; i++) {
        cout << (i + 1) << ". " << questions[i] << endl;
        cout << "   a) " << optionA[i] << endl;
        cout << "   b) " << optionB[i] << endl;
        cout << "> ";
        cin >> answer;

        if(answer == 'a') {
            countA++;
        } 
    }

    cout << "=== Ergebnis ===" << endl;
    cout << "A-Antworten: " << countA << endl;

    string type; 

    if(countA >= 17) {
        type = types[0];
    } else if (countA >= 12) {
        type = types[1];
    } else if (countA >= 9) {
        type = types[2];
    } else if (countA >= 4) {
        type = types[3];
    } else {
        type = types[4];
    }

    cout << "Dein Persönlichkeitstyp: " << type << endl;

    return 0;
}