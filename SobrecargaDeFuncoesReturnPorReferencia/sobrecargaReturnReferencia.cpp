    #include <iostream>

void mult(int a, int b, int& resultado){
  resultado = a*b;
 }
void mult(float a, float b, float& resultado){
   resultado =  a/b;
 }
void mult(double a, double b, double& resultado){
    resultado =  (a>b)? a : b;
}

main()
{
       int      i_a, i_b, i_resuldado;
       float    f_a, f_b, f_resuldado;
       double   d_a, d_b, d_resuldado;

       std:: cout << "Digite dois valores inteiros para serem multiplicados: \n";
       std:: cin >> i_a >> i_b;
       mult(i_a, i_b,i_resuldado);
       std:: cout << i_a <<"*"<< i_b << "= "<< i_resuldado << "\n\n\n";


       std:: cout << "Digite dois valores para serem divididos: \n";
       std:: cin >> f_a >> f_b;
       mult(f_a, f_b, f_resuldado);
       std:: cout << f_a <<"/"<< f_b << "= "<< f_resuldado << "\n\n\n";

       std:: cout << "Digite dois valores para saber qual tem maior valor: \n";
       std:: cin >> d_a >> d_b;
       if( d_a == d_b)
           std:: cout << "Os valores " << d_a << " e " << d_b << " sao iguais!!!\n\n\n";
       else{
       mult(d_a, d_b, d_resuldado);
       std:: cout << d_a <<" e "<< d_b << " o maior eh: "<< d_resuldado << "\n\n\n";
        }
}
