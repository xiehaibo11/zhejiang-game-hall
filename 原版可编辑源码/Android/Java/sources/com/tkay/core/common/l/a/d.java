package com.tkay.core.common.l.a;

import android.os.SystemClock;

final class d<T> {
    final T a;
    long b = SystemClock.uptimeMillis();

    private d(T t) {
        this.a = t;
    }
}
