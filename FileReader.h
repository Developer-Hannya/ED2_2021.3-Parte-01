#ifndef FILEREADER_H_INCLUDED
#define FILEREADER_H_INCLUDED

class FileReader {

    public:
        FileReader(string n, string m); // construtor
        ~FileReader(); // destrutor
        void info(); // operacoes
        float getNota();
        string getNome();
        void setNota(float valor);
        bool verificaAprovado();

    private:
        string nome; // dados
        string matricula;
        float nota;
};

#endif // FILEREADER_H_INCLUDED
