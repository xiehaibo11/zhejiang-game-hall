package com.igexin.push.d;

public class f implements com.igexin.push.d.i {
    public f() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public long a() {
            r8 = this;
            long r0 = java.lang.System.currentTimeMillis()
            boolean r0 = com.igexin.push.util.a.a(r0)
            boolean r1 = com.igexin.push.util.a.a()
            boolean r2 = com.igexin.push.util.a.f()
            com.igexin.push.core.d.i = r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "NormalModel|isPushOn = "
            r2.append(r3)
            boolean r3 = com.igexin.push.core.d.k
            r2.append(r3)
            java.lang.String r3 = " checkIsSilentTime = "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r3 = " isBlockEndTime = "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r3 = " isNetworkAvailable = "
            r2.append(r3)
            boolean r3 = com.igexin.push.core.d.i
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r3 = 0
            java.lang.Object[] r4 = new java.lang.Object[r3]
            com.igexin.b.a.c.b.a(r2, r4)
            boolean r2 = com.igexin.push.core.d.i
            r4 = 1200000(0x124f80, double:5.92879E-318)
            if (r2 == 0) goto La4
            boolean r2 = com.igexin.push.core.d.k
            if (r2 == 0) goto La4
            if (r0 != 0) goto La4
            if (r1 != 0) goto L55
            goto La4
        L55:
            long r0 = com.igexin.push.core.d.F
            r6 = 0
            int r0 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r0 > 0) goto L62
            r0 = 100
        L5f:
            com.igexin.push.core.d.F = r0
            goto L83
        L62:
            long r0 = com.igexin.push.core.d.F
            r6 = 10000(0x2710, double:4.9407E-320)
            int r0 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r0 > 0) goto L70
            long r0 = com.igexin.push.core.d.F
            r6 = 500(0x1f4, double:2.47E-321)
        L6e:
            long r0 = r0 + r6
            goto L5f
        L70:
            long r0 = com.igexin.push.core.d.F
            r6 = 30000(0x7530, double:1.4822E-319)
            int r0 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r0 > 0) goto L7d
            long r0 = com.igexin.push.core.d.F
            r6 = 1500(0x5dc, double:7.41E-321)
            goto L6e
        L7d:
            long r0 = com.igexin.push.core.d.F
            r6 = 120000(0x1d4c0, double:5.9288E-319)
            goto L6e
        L83:
            long r0 = com.igexin.push.core.d.F
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 <= 0) goto L8b
            com.igexin.push.core.d.F = r4
        L8b:
            long r0 = com.igexin.push.core.d.F
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "NormalModel|after add auto reconnect delay time = "
            r2.append(r4)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.Object[] r3 = new java.lang.Object[r3]
            com.igexin.b.a.c.b.a(r2, r3)
            return r0
        La4:
            java.lang.Object[] r0 = new java.lang.Object[r3]
            java.lang.String r1 = "NormalModel|reconnect stop, interval= 20min ++++"
            com.igexin.b.a.c.b.a(r1, r0)
            return r4
    }
}
