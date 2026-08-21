package com.igexin.assist.action;

class a implements java.lang.Runnable {
    final java.lang.String a;
    final boolean b;
    final com.igexin.assist.action.MessageManger c;

    a(com.igexin.assist.action.MessageManger r1, java.lang.String r2, boolean r3) {
            r0 = this;
            r0.c = r1
            r0.a = r2
            r0.b = r3
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r3 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = com.igexin.push.core.d.h
            boolean r0 = r0.get()
            if (r0 == 0) goto L11
            com.igexin.assist.action.MessageManger r0 = r3.c
            java.lang.String r1 = r3.a
            boolean r2 = r3.b
            com.igexin.assist.action.MessageManger.a(r0, r1, r2)
        L11:
            return
    }
}
