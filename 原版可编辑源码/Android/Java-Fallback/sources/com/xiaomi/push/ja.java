package com.xiaomi.push;

public class ja {
    private com.xiaomi.push.jf a;
    private final com.xiaomi.push.jm a;
    private final java.io.ByteArrayOutputStream a;

    public ja() {
            r1 = this;
            com.xiaomi.push.jb$a r0 = new com.xiaomi.push.jb$a
            r0.<init>()
            r1.<init>(r0)
            return
    }

    public ja(com.xiaomi.push.jh r3) {
            r2 = this;
            r2.<init>()
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            r2.a = r0
            com.xiaomi.push.jm r0 = new com.xiaomi.push.jm
            java.io.ByteArrayOutputStream r1 = r2.a
            r0.<init>(r1)
            r2.a = r0
            com.xiaomi.push.jf r3 = r3.a(r0)
            r2.a = r3
            return
    }

    public byte[] a(com.xiaomi.push.iu r2) {
            r1 = this;
            java.io.ByteArrayOutputStream r0 = r1.a
            r0.reset()
            com.xiaomi.push.jf r0 = r1.a
            r2.b(r0)
            java.io.ByteArrayOutputStream r2 = r1.a
            byte[] r2 = r2.toByteArray()
            return r2
    }
}
