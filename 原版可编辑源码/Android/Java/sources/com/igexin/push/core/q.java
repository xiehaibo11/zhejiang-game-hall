package com.igexin.push.core;

import android.content.ContentValues;

class q implements Runnable {
    final ContentValues a;
    final String b;
    final n c;

    q(n nVar, ContentValues contentValues, String str) {
        this.c = nVar;
        this.a = contentValues;
        this.b = str;
    }

    @Override
    public void run() {
        c.a().k().a("message", this.a, new String[]{"taskid"}, new String[]{this.b});
    }
}
