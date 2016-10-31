#include <iostream>
#include "Pupil1.h"

int main()
{
    Pupil pupil;

    std::string name;
    std::string second_name;

   
    //std::cout << "Name: ";//Èìÿ ñ êëàâèàòóðû
    //getline(std::cin, name);

    //std::cout << "Second name: ";//Ôàìèëèÿ ñ êëàâèàòóðû
    //getline(std::cin, second_name);
	std::cin>>name;
	std::cin>>second_name;
	
    pupil.setName(name);//Ñîçðàíåíèå èìåíè è ôàìèëèè
    pupil.setSecondName(second_name);

    int scores[5];//Îöåíêè
    int sum = 0;//Ñóììà îöåíîê 

    // Ââîä îöåíîê
    for (int i = 0; i < 5; ++i) {
        std::cout << "Score " << i+1 << ": ";
        std::cin >> scores[i];
        sum += scores[i];// Ñëîæåíèå 
    }   
    pupil.setScores(scores);//Ñîõðàíåíèå îöåíîê 
    float medium_mark = sum / 5.0;// Ïîäñ÷åò ñðåäíåé îöåíêè
    pupil.setMediumMark(medium_mark);// Ñðåäíÿÿ îöåíêà
    std::cout << "Medium mark of " << pupil.getName() << " "
         << pupil.getSecondName() << " is "
         << pupil.getMediumMark() << std::endl;//Èòîã äàííûõ ïî ñòóäåíòó

    return 0;
}
