package com.igexin.push.d.c;

public class h extends com.igexin.push.d.c.c {
    public byte a;
    public byte b;

    public h() {
            r1 = this;
            r1.<init>()
            r0 = 97
            r1.i = r0
            return
    }

    @Override
    public void a(byte[] r2) {
            r1 = this;
            r0 = 0
            r0 = r2[r0]
            r1.a = r0
            r0 = 1
            r2 = r2[r0]
            r1.b = r2
            return
    }

    @Override
    public byte[] c() {
            r3 = this;
            r0 = 2
            byte[] r0 = new byte[r0]
            byte r1 = r3.a
            r2 = 0
            r0[r2] = r1
            byte r1 = r3.b
            r2 = 1
            r0[r2] = r1
            return r0
    }
}
