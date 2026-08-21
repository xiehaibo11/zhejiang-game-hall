package com.vivo.push;

final class c implements android.os.Handler.Callback {
    final com.vivo.push.b a;

    c(com.vivo.push.b r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public final boolean handleMessage(android.os.Message r5) {
            r4 = this;
            java.lang.String r0 = "AidlManager"
            if (r5 != 0) goto Lb
            java.lang.String r5 = "handleMessage error : msg is null"
            com.vivo.push.util.p.a(r0, r5)
            r5 = 0
            return r5
        Lb:
            int r1 = r5.what
            r2 = 2
            r3 = 1
            if (r1 == r3) goto L3f
            if (r1 == r2) goto L2c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "unknow msg what ["
            r1.<init>(r2)
            int r5 = r5.what
            r1.append(r5)
            java.lang.String r5 = "]"
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            com.vivo.push.util.p.b(r0, r5)
            goto L55
        L2c:
            com.vivo.push.b r5 = r4.a
            java.util.concurrent.atomic.AtomicInteger r5 = com.vivo.push.b.a(r5)
            int r5 = r5.get()
            r0 = 4
            if (r5 != r0) goto L50
            com.vivo.push.b r5 = r4.a
            com.vivo.push.b.c(r5)
            goto L50
        L3f:
            java.lang.String r5 = "In connect, bind core service time out"
            com.vivo.push.util.p.a(r0, r5)
            com.vivo.push.b r5 = r4.a
            java.util.concurrent.atomic.AtomicInteger r5 = com.vivo.push.b.a(r5)
            int r5 = r5.get()
            if (r5 != r2) goto L55
        L50:
            com.vivo.push.b r5 = r4.a
            com.vivo.push.b.b(r5)
        L55:
            return r3
    }
}
