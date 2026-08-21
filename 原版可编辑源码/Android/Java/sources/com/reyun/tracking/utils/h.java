package com.reyun.tracking.utils;

import android.content.Context;
import android.content.SharedPreferences;

final class h implements Runnable {
    final Context a;
    final String b;
    final String c;
    final String d;

    h(Context context, String str, String str2, String str3) {
        this.a = context;
        this.b = str;
        this.c = str2;
        this.d = str3;
    }

    @Override
    public void run() {
        Context context = this.a;
        if (context == null) {
            return;
        }
        try {
            SharedPreferences.Editor editorEdit = context.getSharedPreferences(this.b, 0).edit();
            editorEdit.putString(this.c, this.d);
            editorEdit.commit();
        } catch (Exception unused) {
        }
    }
}
