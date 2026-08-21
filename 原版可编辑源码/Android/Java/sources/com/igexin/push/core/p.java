package com.igexin.push.core;

import android.content.ContentValues;

class p implements Runnable {
    final ContentValues a;
    final n b;

    p(n nVar, ContentValues contentValues) {
        this.b = nVar;
        this.a = contentValues;
    }

    @Override
    public void run() {
        c.a().k().a("message", this.a);
    }
}
