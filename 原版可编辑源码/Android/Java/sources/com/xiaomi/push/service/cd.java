package com.xiaomi.push.service;

import android.app.Notification;
import android.content.Context;
import com.xiaomi.push.al;

final class cd extends al.a {
    final int a;
    final Notification a;
    final Context a;
    final String a;
    final String b;

    cd(int i, String str, Context context, String str2, Notification notification) {
        this.a = i;
        this.a = str;
        this.a = context;
        this.b = str2;
        this.a = notification;
    }

    @Override
    public String a() {
        return cc.b(this.a, this.a);
    }

    @Override
    public void run() {
        cc.c(this.a, this.b, this.a, this.a, this.a);
    }
}
