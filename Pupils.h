#include <string>

class Pupils {
    public:
        void set_name(std::string pupil_name)//��������� �����
        {
            name = pupil_name;
        }
        
        std::string get_name()//��������� �����
        {
            return name;
        }
        void set_second_name(std::string pupil_second_name)//��������� �������
        {
            second_name = pupil_last_name;
        }
        std::string get_second_name()//��������� �������
        {
            return second_name;
        }
        void set_scores(int pupil_scores[])//��������� ������
        {
            for (int i = 0; i < 5; ++i) {
                scores[i] = pupil_scores[i];
            }
        }
        void set_medium_mark(float mark)//������� ���� 
        {
            medium_mark = mark;
        }
        float get_medium_mark()//��������� �������� ����� 
        {
            return medium_mark;
        }

    private:
        int scores[5];//������
        float average_mark; //������� ������
        std::string name;//���
        std::string last_name;//�������
};

