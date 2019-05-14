//
// Created by sergey on 5/12/19.
//

#ifndef C__AS5_PRODUCT_HPP
#define C__AS5_PRODUCT_HPP

#endif //C__AS5_PRODUCT_HPP

namespace itertools {

    template<typename T, typename P>
    class Product {
    private:
        T Tit;
        P Pit;


        template<typename M, typename L>
        class iterator{
        public:
            M Mit;
            L Lit;

        };

    public:
        Product(T begin, P end) : Tit(begin), Pit(end) {}
        auto begin() { return Tit.begin(); }
        auto end() { return Tit.end(); }
    };
    template <typename T, typename P>
    Product<T,P>
    product(T x, P y) {
        return(Product<T, P>(x, y));
    }
}






