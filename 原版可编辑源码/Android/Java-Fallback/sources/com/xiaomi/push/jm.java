package com.xiaomi.push;

public class jm extends com.xiaomi.push.jp {
    protected java.io.InputStream a;
    protected java.io.OutputStream a;

    protected jm() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.a = r0
            return
    }

    public jm(java.io.OutputStream r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.a = r0
            r1.a = r2
            return
    }

    @Override
    public int a(byte[] r2, int r3, int r4) {
            r1 = this;
            java.io.InputStream r0 = r1.a
            if (r0 == 0) goto L1a
            int r2 = r0.read(r2, r3, r4)     // Catch: java.io.IOException -> L12
            if (r2 < 0) goto Lb
            return r2
        Lb:
            com.xiaomi.push.jq r2 = new com.xiaomi.push.jq
            r3 = 4
            r2.<init>(r3)
            throw r2
        L12:
            r2 = move-exception
            com.xiaomi.push.jq r3 = new com.xiaomi.push.jq
            r4 = 0
            r3.<init>(r4, r2)
            throw r3
        L1a:
            com.xiaomi.push.jq r2 = new com.xiaomi.push.jq
            r3 = 1
            java.lang.String r4 = "Cannot read from null inputStream"
            r2.<init>(r3, r4)
            throw r2
    }

    @Override
    public void a(byte[] r2, int r3, int r4) {
            r1 = this;
            java.io.OutputStream r0 = r1.a
            if (r0 == 0) goto L10
            r0.write(r2, r3, r4)     // Catch: java.io.IOException -> L8
            return
        L8:
            r2 = move-exception
            com.xiaomi.push.jq r3 = new com.xiaomi.push.jq
            r4 = 0
            r3.<init>(r4, r2)
            throw r3
        L10:
            com.xiaomi.push.jq r2 = new com.xiaomi.push.jq
            r3 = 1
            java.lang.String r4 = "Cannot write to null outputStream"
            r2.<init>(r3, r4)
            throw r2
    }
}
