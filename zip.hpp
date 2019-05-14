//
// Created by sergey on 5/12/19.
//

#ifndef C__AS5_ZIP_HPP
#define C__AS5_ZIP_HPP

#endif //C__AS5_ZIP_HPP
namespace itertools {

    template<typename T, typename P>
    class Zip {
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
        Zip(T begin, P end) : Tit(begin), Pit(end) {}
        auto begin() { return Tit.begin(); }
        auto end() { return Tit.end(); }
    };
    template <typename T, typename P>
    Zip<T,P>
    zip(T x, P y) {
        return(Zip<T, P>(x, y));
    }
}






