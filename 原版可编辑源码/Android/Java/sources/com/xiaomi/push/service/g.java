package com.xiaomi.push.service;

import android.util.SparseArray;

final class g extends SparseArray<Integer> {
    g(int i) {
        super(i);
        put(1, 32);
        put(2, 16);
        put(4, 8);
        put(8, 4);
        put(16, 2);
    }
}
