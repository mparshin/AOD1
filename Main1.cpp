#include <iostream>
#include "Pupil1.h"

int main()
{
    Pupil1 pupil;

    std::string name;
    std::string second_name;

   
    //std::cout << "Name: ";//��� � ����������
    //getline(std::cin, name);

    //std::cout << "Second name: ";//������� � ����������
    //getline(std::cin, second_name);
	std::cin>>name;
	std::cin>>second_name;
	
    pupil.setName(name);//���������� ����� � �������
    pupil.setSecondName(second_name);

    int scores[5];//������
    int sum = 0;//����� ������ 

    // ���� ������
    for (int i = 0; i < 5; ++i) {
        std::cout << "Score " << i+1 << ": ";
        std::cin >> scores[i];
        sum += scores[i];// �������� 
    }   
    pupil.setScores(scores);//���������� ������ 
    float medium_mark = sum / 5.0;// ������� ������� ������
    pupil.setMediumMark(medium_mark);// ������� ������
    std::cout << "Medium mark of " << pupil.getName() << " "
         << pupil.getSecondName() << " is "
         << pupil.getMediumMark() << std::endl;//���� ������ �� ��������

    return 0;
}
