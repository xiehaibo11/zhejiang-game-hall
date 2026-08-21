package com.xiaomi.push;

public class jn extends com.xiaomi.push.jp {
    private int a;
    private com.xiaomi.push.ix a;

    public jn(int r2) {
            r1 = this;
            r1.<init>()
            com.xiaomi.push.ix r0 = new com.xiaomi.push.ix
            r0.<init>(r2)
            r1.a = r0
            return
    }

    @Override
    public int a(byte[] r4, int r5, int r6) {
            r3 = this;
            com.xiaomi.push.ix r0 = r3.a
            byte[] r0 = r0.a()
            com.xiaomi.push.ix r1 = r3.a
            int r1 = r1.a()
            int r2 = r3.a
            int r1 = r1 - r2
            if (r6 <= r1) goto L1a
            com.xiaomi.push.ix r6 = r3.a
            int r6 = r6.a()
            int r1 = r3.a
            int r6 = r6 - r1
        L1a:
            if (r6 <= 0) goto L26
            int r1 = r3.a
            java.lang.System.arraycopy(r0, r1, r4, r5, r6)
            int r4 = r3.a
            int r4 = r4 + r6
            r3.a = r4
        L26:
            return r6
    }

    @Override
    public void a(byte[] r2, int r3, int r4) {
            r1 = this;
            com.xiaomi.push.ix r0 = r1.a
            r0.write(r2, r3, r4)
            return
    }

    public int a_() {
            r1 = this;
            com.xiaomi.push.ix r0 = r1.a
            int r0 = r0.size()
            return r0
    }
}
