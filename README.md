# Automated Plant Irigation
Acest proiect are ca principal obiectiv automatizarea procesului de irigatie al plantelor. Proiectul este doar un prototip, si are la baza o pompa de apa care, pe baza unei achizitii de date de la un senzor, “stie” cand trebuie sau cand nu trebuie sa ude o planta.

## Descrierea domeniului

Domeniul ales a fost cel al agriculturii, unde prin avansarea tehnologiei, se doreste cat mai mult control asupra tuturor sarcinilor dintr-o anumita activitate agricola.

## Descrierea solutiei propuse

Solutia noastra vizeaza udarea in mod automat a plantelor, cu foarte putina interventie umana si luarea deciziilor pe baza nevoilor optime ale plantei. Este necesara o minima interventie umana la reumplerea rezervorului.

## Descrierea functiilor
1. Functia **setup()**: 

Aici se efectueaza setarea modurilor pinilor pe care ii vom folosi in program.

3. Functia **loop()**: 

In aceasta functie se afla logica programului: 
- Achizitia de date de la cei doi senzori
- Actionarea pompei de apa
- Controlul alarmei
- Afisarea pe LCD a textului

## Prezentarea functionalitatilor:

*Senzorul de umiditate* este introdus in pamantul plantei, si are rolul de achizitie a datelor de catre placa de dezvoltare. Prin el, se decide daca planta are nevoie sau nu de apa, masurand umiditatea solului de la senzor. Astfel nu este nevoie ca cineva sa porneasca sau sa opreasca pompa. 

*Senzorul de nivel* ne avertizeaza cand nu mai exista apa in rezervor, fiind inserat in rezervor alaturi de pompa de apa. Rolul acestui senzor este de a lasa motorul sa absoarba cat de multa apa se poate, pana la nivelul gurii de admisie, unde procesul se opreste pentru a nu trage in gol mai departe motorul pompei, care se poate supraincalzi si defecta.

Daca pompa nu s-ar opri la un moment dat, ar incepe sa traga aer cand se termina apa si se va supraincalzi motorul, care ulterior e posibil sa nu mai functioneze. Pentru a relua procesul, se reumple rezervorul. 

*Pompa de apa* are la baza un motor DC. O data cu pornirea ei, motorul va incepe sa functioneze, creand efectul de absorbtie la gura de admisie, astfel pompa absorbind apa si eliminand-o ulterior prin gura de evacuare la care vom atasa un tub de cauciuc. 

Pompa este alimentata direct de la sursa de 5V, insa este controlata de un pin digital din placuta. Controlul acesteia este realizat cu ajutorul unui *tranzistor bipolar NPN* folosit pe post de switch. 

Daca planta are nevoie de apa, se porneste pompa, generand prin baza tranzistorului tensiune de la pinul de control, colectorul fiind conectat la sursa de alimentare, ulterior curentul iesind prin emitor si intrand direct in pompa de apa. 

Daca planta este destul de udata, pompa se opreste deoarece pinul de control nu genereaza tensiune. Asadar tranzistorul ramane blocat si pompa oprita. 

Am implementat de asemenea si un *ecran LCD* care afiseaza starile procesului. Prin acesta putem monitoriza mereu daca planta necesita apa sau nu si de asemenea daca rezervorul ramane fara suficienta apa. Contrastul ecranului poate fi modificat dupa dorinta prin intermediul potentiometrului. 

*Dioda* se conecteaza cu anodul la masa si catodul la intrarea curentului in motor, pentru prevenirea fenomenului de curent invers caracteristic motoarelor de curent continuu. 

Daca dioda ar fi lipsit, curentul invers ar fi intrat inapoi in circuit, mai exact in firele conectate la ecranul LCD, acesta realizand afisari eronate cu caractere random drept rezultat al fenomenului. 

Placuta este alimentata la o *baterie* de 9V prin intermediul regulatorului de tensiune al placii Arduino (Vin avand nevoie de o tensiune de peste 6.2V si in modul cel mai ideal o tensiune de 9-12V). De asemenea, montajul poate fi alimentat printr-un cablu USB direct de la priza.

## Proiecte inspiratie


1. [https://littlebirdelectronics.com.au/guides/4/automatic-plant-watering-with-arduinol](https://littlebirdelectronics.com.au/guides/4/automatic-plant-watering-with-arduinol "https://littlebirdelectronics.com.au/guides/4/automatic-plant-watering-with-arduinol")
Un ghid pentru conectarea corecta a placutei Arduino, si programarea ei sa monitorizeze nivelul de umiditate al solului.

2. [https://www.instructables.com/Arduino-Plant-Watering-System/](https://www.instructables.com/Arduino-Plant-Watering-System/ "https://www.instructables.com/Arduino-Plant-Watering-System/")

Un proiect explicat detaliat, cu informatii importante despre conectarea pieselor in sistem.

3. [https://all3dp.com/2/arduino-watering-system-plant-irrigation-project/](https://all3dp.com/2/arduino-watering-system-plant-irrigation-project/ "https://all3dp.com/2/arduino-watering-system-plant-irrigation-project/")

O lista de proiecte similare, pentru a ne inspira in ce directie dorim sa mergem cu proiectul, si a vedea mai multe tipuri de implementari/ metode.

Fotografie cu sistemul fizic

https://drive.google.com/file/d/1JjNN5J7rqB9Y7VEqI2ETJJCZhXCpOuPM/view?usp=share_link

Fotografie cu schema electrica

https://drive.google.com/file/d/1pBTtXYBoKVpl2ghW-xNlZd-EVJemro_j/view?usp=share_link