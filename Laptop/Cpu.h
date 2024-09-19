#ifndef CPU_H
#define CPU_H
#define _CRT_SECURE_NO_WARNINGS
class Cpu {
private:
    char name[50];
    double price;
public:
    Cpu(const char* name, double price);
    const char* getName() const;
    double getPrice() const;
};

#endif
