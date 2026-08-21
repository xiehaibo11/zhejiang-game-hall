package com.xiaomi.push;

import android.content.Context;

final class ea implements Runnable {
    final int a;
    final Context a;
    final String a;
    final String b;

    ea(Context context, String str, int i, String str2) {
        this.a = context;
        this.a = str;
        this.a = i;
        this.b = str2;
    }

    @Override
    public void run() {
        dz.c(this.a, this.a, this.a, this.b);
    }
}
