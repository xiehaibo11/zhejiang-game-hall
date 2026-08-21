package com.igexin.push.a.a;

public class a implements com.igexin.push.f.b.c {
    private long a;

    public a() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.a = r0
            return
    }

    @Override
    public void a() {
            r2 = this;
            android.os.Message r0 = android.os.Message.obtain()
            int r1 = com.igexin.push.core.CoreConsts.h
            r0.what = r1
            com.igexin.push.core.c r1 = com.igexin.push.core.c.a()
            r1.a(r0)
            return
    }

    @Override
    public void a(long r1) {
            r0 = this;
            r0.a = r1
            return
    }

    @Override
    public boolean b() {
            r4 = this;
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r4.a
            long r0 = r0 - r2
            r2 = 360000(0x57e40, double:1.778636E-318)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            return r0
    }
}
