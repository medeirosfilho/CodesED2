class No 
{
private:
    /* Aqui vão as informações do nó, no nosso caso usaremos apenas um inteiro como chave,
    mas poderíamos usar qualquer outra informação junto com as chaves como strings, boleanos etc... */
    int chave;    
    // Ponteiros do tipo Nó para as sub-arvores direitas e esquerdas respectivamentes
    No *esq;
    No *dir;
    
public:
    /*  Aqui criaremos um construtor para o nó que seta o valor da chave e inicializa os ponteiros
        das sub-arvores como null. OBS: Note que usarei nullptr em vez de NULL, se não utilizar o c++11 essa keyword 
        não funcionará. */
    No ( int chave )
    {
        this->chave = chave;    // seta a chave
        esq = nullptr;          // inicializa a sub-arvore esquerda como null.
        dir = nullptr;          // inicializa a sub-arvore direita como null.
    }
    
    // METODOS GETS E SETTERS.
    int getChave()
    {
        return chave;    
    }
    
    No* getEsq()
    {
        return esq;
    }
    
    No* getDir()
    {
        return dir;
    }
    
    void setEsq( No* esq )
    {
        this->esq = esq;
    }
    
    void setDir( No* dir )
    {
        this->dir = dir;
    }
};
