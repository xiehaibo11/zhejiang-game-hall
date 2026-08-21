package com.tencent.open.utils;

public final class o implements java.lang.Cloneable {
    private int a;

    public o(int r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public o(byte[] r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public o(byte[] r3, int r4) {
            r2 = this;
            r2.<init>()
            int r0 = r4 + 1
            r0 = r3[r0]
            int r0 = r0 << 8
            r1 = 65280(0xff00, float:9.1477E-41)
            r0 = r0 & r1
            r2.a = r0
            r3 = r3[r4]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r0 = r0 + r3
            r2.a = r0
            return
    }

    public byte[] a() {
            r4 = this;
            r0 = 2
            byte[] r0 = new byte[r0]
            int r1 = r4.a
            r2 = r1 & 255(0xff, float:3.57E-43)
            byte r2 = (byte) r2
            r3 = 0
            r0[r3] = r2
            r2 = 65280(0xff00, float:9.1477E-41)
            r1 = r1 & r2
            int r1 = r1 >> 8
            byte r1 = (byte) r1
            r2 = 1
            r0[r2] = r1
            return r0
    }

    public int b() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public boolean equals(java.lang.Object r3) {
            r2 = this;
            r0 = 0
            if (r3 == 0) goto L13
            boolean r1 = r3 instanceof com.tencent.open.utils.o
            if (r1 != 0) goto L8
            goto L13
        L8:
            int r1 = r2.a
            com.tencent.open.utils.o r3 = (com.tencent.open.utils.o) r3
            int r3 = r3.b()
            if (r1 != r3) goto L13
            r0 = 1
        L13:
            return r0
    }

    public int hashCode() {
            r1 = this;
            int r0 = r1.a
            return r0
    }
}
