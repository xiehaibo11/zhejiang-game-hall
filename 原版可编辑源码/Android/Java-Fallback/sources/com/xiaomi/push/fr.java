package com.xiaomi.push;

public final class fr extends com.xiaomi.push.fl {
    public fr() {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "PING"
            r1 = 0
            r2.a(r0, r1)
            java.lang.String r0 = "0"
            r2.a(r0)
            r0 = 0
            r2.a(r0)
            return
    }

    @Override
    java.nio.ByteBuffer a(java.nio.ByteBuffer r2) {
            r1 = this;
            byte[] r0 = r1.a()
            int r0 = r0.length
            if (r0 != 0) goto L8
            return r2
        L8:
            java.nio.ByteBuffer r2 = super.a(r2)
            return r2
    }

    @Override
    public int c() {
            r1 = this;
            byte[] r0 = r1.a()
            int r0 = r0.length
            if (r0 != 0) goto L9
            r0 = 0
            return r0
        L9:
            int r0 = super.c()
            return r0
    }
}
