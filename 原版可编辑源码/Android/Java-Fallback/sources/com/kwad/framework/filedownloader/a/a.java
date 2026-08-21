package com.kwad.framework.filedownloader.a;

public final class a implements com.kwad.framework.filedownloader.f.c.a {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final int H(long r3) {
            r2 = this;
            r0 = 1048576(0x100000, double:5.180654E-318)
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 >= 0) goto L9
            r3 = 1
            return r3
        L9:
            r0 = 5242880(0x500000, double:2.590327E-317)
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 >= 0) goto L12
            r3 = 2
            return r3
        L12:
            r0 = 52428800(0x3200000, double:2.5903269E-316)
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 >= 0) goto L1b
            r3 = 3
            return r3
        L1b:
            r0 = 104857600(0x6400000, double:5.1806538E-316)
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 >= 0) goto L24
            r3 = 4
            return r3
        L24:
            r3 = 5
            return r3
    }
}
