package com.xiaomi.push;

public abstract class jp {
    public jp() {
            r0 = this;
            r0.<init>()
            return
    }

    public int a() {
            r1 = this;
            r0 = 0
            return r0
    }

    public abstract int a(byte[] r1, int r2, int r3);

    public void a(int r1) {
            r0 = this;
            return
    }

    public abstract void a(byte[] r1, int r2, int r3);

    public byte[] a() {
            r1 = this;
            r0 = 0
            return r0
    }

    public int b() {
            r1 = this;
            r0 = -1
            return r0
    }

    public int b(byte[] r4, int r5, int r6) {
            r3 = this;
            r0 = 0
        L1:
            if (r0 >= r6) goto L33
            int r1 = r5 + r0
            int r2 = r6 - r0
            int r1 = r3.a(r4, r1, r2)
            if (r1 <= 0) goto Lf
            int r0 = r0 + r1
            goto L1
        Lf:
            com.xiaomi.push.jq r4 = new com.xiaomi.push.jq
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "Cannot read. Remote side has closed. Tried to read "
            r5.append(r1)
            r5.append(r6)
            java.lang.String r6 = " bytes, but only got "
            r5.append(r6)
            r5.append(r0)
            java.lang.String r6 = " bytes."
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r4.<init>(r5)
            throw r4
        L33:
            return r0
    }
}
