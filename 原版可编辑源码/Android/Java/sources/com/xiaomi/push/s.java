package com.xiaomi.push;

import android.content.SharedPreferences;

class s implements Runnable {
    final r a;
    final String a;
    final String b;
    final String c;

    s(r rVar, String str, String str2, String str3) {
        this.a = rVar;
        this.a = str;
        this.b = str2;
        this.c = str3;
    }

    @Override
    public void run() {
        SharedPreferences.Editor editorEdit = this.a.a.getSharedPreferences(this.a, 4).edit();
        editorEdit.putString(this.b, this.c);
        editorEdit.commit();
    }
}
