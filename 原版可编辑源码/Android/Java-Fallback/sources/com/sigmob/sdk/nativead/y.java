package com.sigmob.sdk.nativead;

public class y extends android.os.Handler {
    static final int b = 87108;
    long c;
    boolean d;

    public y() {
            r2 = this;
            r2.<init>()
            r0 = 100
            r2.c = r0
            r0 = 1
            r2.d = r0
            return
    }

    public y(android.os.Looper r3) {
            r2 = this;
            r2.<init>(r3)
            r0 = 100
            r2.c = r0
            r3 = 1
            r2.d = r3
            return
    }

    public void a() {
            r3 = this;
            long r0 = r3.c
            r2 = 87108(0x15444, float:1.22064E-40)
            r3.sendEmptyMessageDelayed(r2, r0)
            return
    }

    public void a(boolean r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public boolean b() {
            r1 = this;
            boolean r0 = r1.d
            return r0
    }
}
