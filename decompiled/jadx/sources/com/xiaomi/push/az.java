package com.xiaomi.push;

import android.content.Context;

/* JADX INFO: loaded from: classes4.dex */
class az {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static int f8047a;

    public static au a(Context context) {
        if (m.m574a()) {
            f8047a = 1;
            return new ay(context);
        }
        if (as.a(context)) {
            f8047a = 2;
            return new as(context);
        }
        if (bb.a(context)) {
            f8047a = 4;
            return new bb(context);
        }
        if (bf.a(context)) {
            f8047a = 5;
            return new bf(context);
        }
        if (ax.a(context)) {
            f8047a = 3;
            return new av(context);
        }
        f8047a = 0;
        return new be();
    }
}
