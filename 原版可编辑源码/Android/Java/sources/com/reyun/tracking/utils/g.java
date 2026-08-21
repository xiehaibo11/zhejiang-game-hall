package com.reyun.tracking.utils;

import android.content.Context;
import android.content.SharedPreferences;

final class g implements Runnable {
    final Context a;
    final String b;
    final String c;
    final long d;

    g(Context context, String str, String str2, long j) {
        this.a = context;
        this.b = str;
        this.c = str2;
        this.d = j;
    }

    @Override
    public void run() {
        Context context = this.a;
        if (context == null) {
            return;
        }
        try {
            SharedPreferences.Editor editorEdit = context.getSharedPreferences(this.b, 0).edit();
            editorEdit.putLong(this.c, this.d);
            editorEdit.commit();
        } catch (Exception unused) {
        }
    }
}
