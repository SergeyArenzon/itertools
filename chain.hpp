//
// Created by sergey on 5/12/19.
//

#ifndef C__AS5_CHAIN_HPP
#define C__AS5_CHAIN_HPP

#endif //C__AS5_CHAIN_HPP

namespace itertools {

    template<typename T, typename P>
    class Chain {
    private:
        T itemT;
        P itemP;



        template<typename M, typename L>
        class iterator{
        public:
            M Mit;
            L Lit;

        };

    public:
        Chain(T begin, P end) : itemT(begin), itemP(end) {}
        auto begin() {
            return itemT.begin();
        }
        auto end() {
            return itemT.end();
        }
    };
    template <typename T, typename P>
    Chain<T,P>
    chain(T x, P y) {
         return(Chain<T, P>(x, y));
    }
}






