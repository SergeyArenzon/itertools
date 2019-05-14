#ifndef UNTITLED_RANGE_HPP
#define UNTITLED_RANGE_HPP

#endif //UNTITLED_RANGE_HPP
#include <bits/stdc++.h>
#include <iostream>
#pragma once
namespace itertools {
    template<typename T>
    class Range {
    public:
        T _begin, _end;

        Range(T& begin, T& end) {
            _begin=begin;
            _end=end;
        }
        class iterator {
        private:
            T it;
        public:
            iterator(){
                it=NULL;
            }
            iterator(T pointer) {
                it = pointer;
            }

            T operator*() const {
                return it;
            }

            bool operator==(const T &other) const {
                return it == other;
            }

            const iterator operator++(int) {
                iterator tmp = *this;
                it = it++;
                return tmp;
            }

            iterator &operator++() {
                it++;
                return *this;
            }

            bool operator!=(const iterator &other) const {
                return it != other.it;
            }


        };

        iterator begin() {
            return iterator(_begin);
        }

        iterator end() {
            return iterator(_end);
        }
    };


    template<typename T> Range <T>
    range(T a, T b) {
        return Range<T>(a, b);


    }

}