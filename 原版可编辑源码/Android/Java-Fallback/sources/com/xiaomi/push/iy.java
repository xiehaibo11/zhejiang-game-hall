package com.xiaomi.push;

public class iy {
    private final com.xiaomi.push.jf a;
    private final com.xiaomi.push.jo a;

    public iy() {
            r1 = this;
            com.xiaomi.push.jb$a r0 = new com.xiaomi.push.jb$a
            r0.<init>()
            r1.<init>(r0)
            return
    }

    public iy(com.xiaomi.push.jh r2) {
            r1 = this;
            r1.<init>()
            com.xiaomi.push.jo r0 = new com.xiaomi.push.jo
            r0.<init>()
            r1.a = r0
            com.xiaomi.push.jf r2 = r2.a(r0)
            r1.a = r2
            return
    }

    public void a(com.xiaomi.push.iu r2, byte[] r3) {
            r1 = this;
            com.xiaomi.push.jo r0 = r1.a     // Catch: java.lang.Throwable -> L10
            r0.a(r3)     // Catch: java.lang.Throwable -> L10
            com.xiaomi.push.jf r3 = r1.a     // Catch: java.lang.Throwable -> L10
            r2.a(r3)     // Catch: java.lang.Throwable -> L10
            com.xiaomi.push.jf r2 = r1.a
            r2.k()
            return
        L10:
            r2 = move-exception
            com.xiaomi.push.jf r3 = r1.a
            r3.k()
            throw r2
    }
}
