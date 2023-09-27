#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

    char str[7];
    printf("Enter a string to convert to ASCII(6-letters max): ");
    fgets(str, 7, stdin);


    typedef struct {
        char symbols[5][25];
    } letters;


    letters A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, Y, X, W, Z;
    
    strcpy(A.symbols[0], "          ");
    strcpy(A.symbols[1], "    _/_/_/");
    strcpy(A.symbols[2], " _/    _/ ");
    strcpy(A.symbols[3], "_/    _/  ");
    strcpy(A.symbols[4], " _/_/_/   ");   

    strcpy(B.symbols[0], "   _/     ");
    strcpy(B.symbols[1], "  _/_/_/  ");
    strcpy(B.symbols[2], " _/    _/ ");
    strcpy(B.symbols[3], " _/    _/ ");
    strcpy(B.symbols[4], "_/_/_/    ");   

    strcpy(C.symbols[0], "          ");
    strcpy(C.symbols[1], "   _/_/_/ ");
    strcpy(C.symbols[2], "_/        ");
    strcpy(C.symbols[3], "_/        ");
    strcpy(C.symbols[4], " _/_/_/   ");   
    
    strcpy(D.symbols[0], "         _/");
    strcpy(D.symbols[1], "    _/_/_/ ");
    strcpy(D.symbols[2], " _/    _/  ");
    strcpy(D.symbols[3], "_/    _/   ");
    strcpy(D.symbols[4], " _/_/_/    ");
  
    strcpy(E.symbols[0], "         ");
    strcpy(E.symbols[1], "    _/_/ ");
    strcpy(E.symbols[2], " _/_/_/_/");
    strcpy(E.symbols[3], "_/       ");
    strcpy(E.symbols[4], " _/_/_/  "); 

    strcpy(F.symbols[0], "      _/_/");
    strcpy(F.symbols[1], "   _/     ");
    strcpy(F.symbols[2], "_/_/_/_/  ");
    strcpy(F.symbols[3], " _/       ");
    strcpy(F.symbols[4], "_/        ");   

    strcpy(G.symbols[0], "   _/_/_/ ");
    strcpy(G.symbols[1], " _/    _/ ");
    strcpy(G.symbols[2], " _/_/_/   ");
    strcpy(G.symbols[3], "    _/    ");
    strcpy(G.symbols[4], "_/_/      "); 

    strcpy(H.symbols[0], "    _/    ");
    strcpy(H.symbols[1], "   _/_/_/ ");
    strcpy(H.symbols[2], "  _/    _/");
    strcpy(H.symbols[3], " _/    _/ ");
    strcpy(H.symbols[4], "_/    _/  "); 

    strcpy(I.symbols[0], "   _/");
    strcpy(I.symbols[1], "     ");
    strcpy(I.symbols[2], "  _/ ");
    strcpy(I.symbols[3], " _/  ");
    strcpy(I.symbols[4], "_/   ");  

    strcpy(J.symbols[0], "      _/");
    strcpy(J.symbols[1], "        ");
    strcpy(J.symbols[2], "    _/  ");
    strcpy(J.symbols[3], "   _/   ");
    strcpy(J.symbols[4], "_/      "); 

    strcpy(K.symbols[0], "    _/    ");
    strcpy(K.symbols[1], "   _/  _/ ");
    strcpy(K.symbols[2], "  _/_/    ");
    strcpy(K.symbols[3], " _/  _/   ");
    strcpy(K.symbols[4], "_/    _/  "); 

    strcpy(L.symbols[0], "    _/");
    strcpy(L.symbols[1], "   _/ ");
    strcpy(L.symbols[2], "  _/ ");
    strcpy(L.symbols[3], " _/  ");
    strcpy(L.symbols[4], "_/   "); 

    strcpy(M.symbols[0], "                ");
    strcpy(M.symbols[1], "   _/_/_/  _/_/ ");
    strcpy(M.symbols[2], "  _/    _/    _/");
    strcpy(M.symbols[3], " _/    _/    _/ "); 
    strcpy(M.symbols[4], "_/    _/    _/  ");

    strcpy(N.symbols[0], "             ");
    strcpy(N.symbols[1], "   _/_/_/    ");
    strcpy(N.symbols[2], "  _/    _/   ");
    strcpy(N.symbols[3], " _/    _/    "); 
    strcpy(N.symbols[4], "_/    _/     ");

    strcpy(O.symbols[0], "         ");
    strcpy(O.symbols[1], "   _/_/  ");
    strcpy(O.symbols[2], "_/    _/ ");
    strcpy(O.symbols[3], "_/    _/ "); 
    strcpy(O.symbols[4], " _/_/    ");

    strcpy(P.symbols[0], "    _/_/_/  ");
    strcpy(P.symbols[1], "   _/    _/ ");
    strcpy(P.symbols[2], "  _/_/_/    ");
    strcpy(P.symbols[3], " _/         "); 
    strcpy(P.symbols[4], "_/          ");

    strcpy(Q.symbols[0], "    _/_/_/  ");
    strcpy(Q.symbols[1], "  _/    _/  ");
    strcpy(Q.symbols[2], "   _/_/_/   ");
    strcpy(Q.symbols[3], "      _/    "); 
    strcpy(Q.symbols[4], "     _/     ");

    strcpy(R.symbols[0], "         ");
    strcpy(R.symbols[1], "_/  _/_/ ");
    strcpy(R.symbols[2], "_/_/     ");
    strcpy(R.symbols[3], "_/       ");
    strcpy(R.symbols[4], "_/       "); 

    strcpy(S.symbols[0], "           ");
    strcpy(S.symbols[1], "    _/_/_/ ");
    strcpy(S.symbols[2], " _/_/      ");
    strcpy(S.symbols[3], "     _/_/  "); 
    strcpy(S.symbols[4], "_/_/_/     ");

    strcpy(T.symbols[0], "      _/     ");
    strcpy(T.symbols[1], "   _/_/_/_/ ");
    strcpy(T.symbols[2], "    _/      ");
    strcpy(T.symbols[3], "   _/       "); 
    strcpy(T.symbols[4], "    _/_/    ");

    strcpy(U.symbols[0], "             ");
    strcpy(U.symbols[1], "   _/    _/  ");
    strcpy(U.symbols[2], "  _/    _/   ");
    strcpy(U.symbols[3], " _/    _/    "); 
    strcpy(U.symbols[4], "  _/_/_/     ");

    strcpy(V.symbols[0], "             ");
    strcpy(V.symbols[1], "  _/     _/  ");
    strcpy(V.symbols[2], "  _/     _/  ");
    strcpy(V.symbols[3], "   _/  _/    "); 
    strcpy(V.symbols[4], "    _/       ");

    strcpy(W.symbols[0], "                       ");
    strcpy(W.symbols[1], "  _/       _/       _/ ");
    strcpy(W.symbols[2], " _/       _/       _/  ");
    strcpy(W.symbols[3], "   _/  _/   _/   _/    "); 
    strcpy(W.symbols[4], "    _/       _/        ");

    strcpy(X.symbols[0], "            ");
    strcpy(X.symbols[1], "  _/     _/ ");
    strcpy(X.symbols[2], "    _/_/    ");
    strcpy(X.symbols[3], "  _/   _/   "); 
    strcpy(X.symbols[4], " _/    _/   ");

    strcpy(Y.symbols[0], "   _/     _/ ");
    strcpy(Y.symbols[1], "  _/     _/  ");
    strcpy(Y.symbols[2], "    _/_/_/   ");
    strcpy(Y.symbols[3], "       _/    "); 
    strcpy(Y.symbols[4], "    _/_/     ");

    strcpy(Z.symbols[0], "           ");
    strcpy(Z.symbols[1], "  _/_/_/_/ ");
    strcpy(Z.symbols[2], "     _/    ");
    strcpy(Z.symbols[3], "   _/      "); 
    strcpy(Z.symbols[4], " _/_/_/_/  ");



    int str_length = strlen(str);

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < str_length; j++) {
            char buffer[255] = "\0";
            switch(str[j]) {
                case 'a':
                    strcat(buffer, A.symbols[i]);
                    break;
                case 'b':
                    strcat(buffer, B.symbols[i]);
                    break;
                case 'c':
                    strcat(buffer, C.symbols[i]);
                    break;
                case 'd':
                    strcat(buffer, D.symbols[i]);
                    break;
                case 'e':
                    strcat(buffer, E.symbols[i]);
                    break;
                case 'f':
                    strcat(buffer, F.symbols[i]);
                    break;
                case 'g':
                    strcat(buffer, G.symbols[i]);
                    break;
                case 'h':
                    strcat(buffer, H.symbols[i]);
                    break;
                case 'i':
                    strcat(buffer, I.symbols[i]);
                    break;
                case 'j':
                    strcat(buffer, J.symbols[i]);
                    break;
                case 'k':
                    strcat(buffer, K.symbols[i]);
                    break;
                case 'l':
                    strcat(buffer, L.symbols[i]);
                    break;
                case 'm':
                    strcat(buffer, M.symbols[i]);
                    break;
                case 'n':
                    strcat(buffer, N.symbols[i]);
                    break;
                case 'o':
                    strcat(buffer, O.symbols[i]);
                    break;
                case 'p':
                    strcat(buffer, P.symbols[i]);
                    break;
                case 'q':
                    strcat(buffer, Q.symbols[i]);
                    break;
                case 'r':
                    strcat(buffer, R.symbols[i]);
                    break;
                case 's':
                    strcat(buffer, S.symbols[i]);
                    break;
                case 't':
                    strcat(buffer, T.symbols[i]);
                    break;
                case 'u':
                    strcat(buffer, U.symbols[i]);
                    break;
                case 'v':
                    strcat(buffer, V.symbols[i]);
                    break;
                case 'w':
                    strcat(buffer, W.symbols[i]);
                    break;
                case 'x':
                    strcat(buffer, X.symbols[i]);
                    break;
                case 'y':
                    strcat(buffer, Y.symbols[i]);
                    break;
                case 'z':
                    strcat(buffer, Z.symbols[i]);
                    break;
            }
            printf("%s  ", buffer);
        }
        printf("\n");
    }
    return 0;
}

