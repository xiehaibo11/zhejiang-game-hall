package com.xiaomi.push;

class ap extends android.os.Handler {
    final com.xiaomi.push.ao a;

    ap(com.xiaomi.push.ao r1, android.os.Looper r2) {
            r0 = this;
            r0.a = r1
            r0.<init>(r2)
            return
    }

    @Override
    public void handleMessage(android.os.Message r4) {
            r3 = this;
            java.lang.Object r0 = r4.obj
            com.xiaomi.push.ao$b r0 = (com.xiaomi.push.ao.b) r0
            int r1 = r4.what
            if (r1 != 0) goto Lc
            r0.a()
            goto L14
        Lc:
            int r1 = r4.what
            r2 = 1
            if (r1 != r2) goto L14
            r0.c()
        L14:
            super.handleMessage(r4)
            return
    }
}
