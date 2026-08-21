package com.xiaomi.push;

class ft extends java.lang.Thread {
    final com.xiaomi.push.fs a;

    ft(com.xiaomi.push.fs r1, java.lang.String r2) {
            r0 = this;
            r0.a = r1
            r0.<init>(r2)
            return
    }

    @Override
    public void run() {
            r3 = this;
            com.xiaomi.push.fs r0 = r3.a     // Catch: java.lang.Exception -> La
            com.xiaomi.push.fn r0 = com.xiaomi.push.fs.a(r0)     // Catch: java.lang.Exception -> La
            r0.a()     // Catch: java.lang.Exception -> La
            goto L12
        La:
            r0 = move-exception
            com.xiaomi.push.fs r1 = r3.a
            r2 = 9
            r1.c(r2, r0)
        L12:
            return
    }
}
