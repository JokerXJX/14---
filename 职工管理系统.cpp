#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include"WorkerManager.h"
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
int main()
{
	//���Դ���
	/*Worker* worker = NULL;
	worker = new Employee(1, "����", 1);
	worker->showInfo();
	delete worker;

	worker = new Manager(2, "����", 2);
	worker->showInfo();
	delete worker;

	worker = new Boss(3, "����", 3);
	worker->showInfo();
	delete worker;*/

	//ʵ���������߶���
	WorkerManager wm;
	int choice = 0;//�洢�û�ѡ��
	while (true)
	{
		//���ò˵���Ա����
		wm.ShowMenu();
		cout << "����������ѡ��" << endl;
		cin >> choice;//����ѡ��
		switch (choice)
		{
		case 0://�˳�ϵͳ
			wm.ExitSystem();
			break;
		case 1://����ְ��
			wm.Add_Emp();
			break;
		case 2://��ʾְ��
			wm.Show_Emp();
			break;
		case 3://ɾ��ְ��
			wm.Del_Emp();
			break; 
		case 4://�޸�ְ��
			wm.Mod_Emp();
			break;
		case 5://����ְ��
			wm.Find_Emp();
			break;
		case 6://����ְ��
			wm.Sort_Emp();
			break;
		case 7://����ĵ�

			break;
		default:
			system("cls");//����
			break;
		}
	}
	
	system("pause");
	return 0;
}