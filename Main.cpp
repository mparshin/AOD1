#include <iostream>
#include "Pupils.h"

int main()
{
    Pupils pupil;

    std::string name;
    std::string second_name;

   
    std::cout << "Name: ";//��� � ����������
    getline(std::cin, name);

    
    std::cout << "Second name: ";//������� � ����������
    getline(std::cin, second_name);

    pupil.set_name(name);//���������� ����� � �������
    pupil.set_second_name(second_name);

    int scores[5];//������
    int sum = 0;//����� ������ 

    // ���� ������
    for (int i = 0; i < 5; ++i) {
        std::cout << "Score " << i+1 << ": ";
        std::cin >> scores[i];
        sum += scores[i];// �������� 
    }

    
    pupil.set_scores(scores);//���������� ������ 
    float medium_mark = sum / 5.0;// ������� ������� ������
    pupil.set_medium_mark(medium_mark);// ������� ������
    std::cout << "Medium mark of " << pupil.get_name() << " "
         << pupil.get_second_name() << " is "
         << pupil.get_medium_mark() << std::endl;//���� ������ �� ��������

    return 0;
}
