#include <iostream> //插入项目头文件

using namespace std; // 定义新的作用域

class PersonClass //创建普通人类型
{
    //创建输入普通人信息的函数
public:
    PersonClass()
    {
        cout << "Please input a name" << endl;
        getline(cin, name); //输入姓名
        cout << "Hello"
             << "," << name << endl; //打招呼
    }
    //创建用于告别的析构函数
    ~PersonClass() { cout << "Byebye"
                          << "," << name << endl; }
    //普通人的自我介绍
    virtual void Introduction() { cout << "My name is"
                                       << " " << name << endl; }

protected:
    string name; //添加私人信息
};

class TalentClass : public PersonClass //天才继承人类的共有部分
{                                      //创建用于告别的析构函数
public:
    ~TalentClass() { cout << "Byebye,talent"
                          << " " << name << endl,
                     money = 100; }
    //天才的自我介绍
    void Introduction() override { cout << "My name is"
                                        << " " << name << ",I'm talent" << endl; }
    //展示天才财产
    void ShowMoney() { cout << "I have"
                            << " money"
                            << " RMB" << endl; }

private:
    int money; //天才私人信息
};

// int main()
// {
//     PersonClass *person = new PersonClass;//分配堆内存并定义普通人类型的指针变量
//     person->Introduction();//普通人自我介绍
//     delete person;//执行析构函数后释放堆内存

//     PersonClass *talent = new TalentClass;//给定义为普通人类型的指针变量分配天才类型的堆内存
//     talent->Introduction();//天才自我介绍
//     delete talent;//执行析构函数后释放堆内存

//     return 0; //成功执行返回0
// }

int main()
{
    while (true)
    {
        size_t type;
        cin >> type;
        if (cin.fail())
            cin.clear();
        cin.sync(); //判断输入数据类型

        PersonClass *someone; //定义人类型的指针
        switch (type)
        {
        case 1:
        {
            someone = new PersonClass;
            break;
        }
        case 2:
        {
            someone = new TalentClass;
            break;
        }
        case 3:
            return 0;
        default:
        {
            cout << "Input error,please try again" << endl;
            continue;
        } //进行类型选择
        }
        someone->Introduction(); //自我介绍
        delete someone;          //释放内存并执行析构函数
    }
    return 0;
}