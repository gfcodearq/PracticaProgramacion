# include <iostream>
using namespace std ;
int main ()
{
	bool ok = (3.0 * (0.1 / 3.0)) == ((3.0 * 0.1) / 3.0);
	cout << " Resultado de (3.0 * (0.1 / 3.0)) == ((3.0 * 0.1) / 3.0): "
		<< boolalpha << ok << endl ;
}

//....................................................................................................................................
// El t i p o DOUBLE u t i l i z a una r e p r e s ent ac i on INEXACTA y FINITA, por l o
// que se produce pe rdida de p r e c i s i on en l a s ope rac ione s de coma
// f l o t a n t e , de t a l forma que podra suceder que dos v a l o r e s que
// matematicamente son i g u a l e s sean computacionalmente l i g e rament e
// d i f e r e n t e s (un v a l o r decimal muy peque~no ) y por l o tanto l a
// comparacion de i gualdad (==) ent r e numeros r e a l e s no produzca
// l o s r e s u l t a d o s esperados . Por l o tanto , l o s numeros r e a l e s nunca se
// de b e ran de b e ran comparar por igualdad , s ino mediante una
// operacion s imi l a r a : ( abs ( x..y ) < 1e..9) , que simplemente comprueba
// s i dos numeros r e a l e s e s tan l o s su f i c i ent ement e cercanos .
//
// En e s t e ejemplo concreto , e l r e s u l t a d o matematico d e b e r a s e r TRUE,
// pero a l r e a l i z a r s e en e l ordenador , donde e l numero de d g i t o s de c imal es
// es l imi tado , l a operacion 0.1 /3 .0 produce como r e s u l t a d o 0.033333 p e r i o d i c o
// que a l mu l t i p l i c a r s e por 3.0 da como r e s u l t a d o de l a primera sub e xpr e s ion
// 0.099999 pe r iodi co , mientras que en l a segunda sub e xpr e s ion , 3.0 * 0.1 da
// como r e s u l t a d o 0.3 , que a l d i v i d i r s e ent r e 3.0 e l r e s u l t a d o f i n a l es 0.1 ,
// que es d i f e r e n t e de 0.099999 pe r iodi co , por l o que e l r e s u l t a d o de l a
// comparacion f i n a l es FALSE
