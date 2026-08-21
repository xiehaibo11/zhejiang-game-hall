package com.tkay.basead.a;

public final class b {
    public static final int A = 27;
    public static final int B = 28;
    public static final int C = 29;
    public static final int D = 30;
    public static final int E = 31;
    public static final int F = 32;
    public static final int G = 33;
    public static final int H = 34;
    public static final int I = 35;
    public static final int a = 1;
    public static final int b = 2;
    public static final int c = 3;
    public static final int d = 4;
    public static final int e = 5;
    public static final int f = 6;
    public static final int g = 7;
    public static final int h = 8;
    public static final int i = 9;
    public static final int j = 10;
    public static final int k = 11;
    public static final int l = 12;
    public static final int m = 13;
    public static final int n = 14;
    public static final int o = 15;
    public static final int p = 16;
    public static final int q = 17;
    public static final int r = 18;
    public static final int s = 19;
    public static final int t = 20;
    public static final int u = 21;
    public static final int v = 22;
    public static final int w = 23;
    public static final int x = 24;
    public static final int y = 25;
    public static final int z = 26;



    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(int r1, com.tkay.core.common.f.h r2, com.tkay.basead.c.i r3) {
            boolean r0 = r2.L()
            if (r0 == 0) goto L7
            return
        L7:
            com.tkay.basead.a.b$2 r0 = new com.tkay.basead.a.b$2
            r0.<init>(r2, r1, r3)
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            android.os.Looper r2 = android.os.Looper.myLooper()
            if (r1 == r2) goto L1a
            r0.run()
            return
        L1a:
            com.tkay.core.common.l.b.a r1 = com.tkay.core.common.l.b.a.a()
            r1.a(r0)
            return
    }

    private static void a(com.tkay.core.common.f.h r3) {
            boolean r0 = r3 instanceof com.tkay.core.common.f.f
            if (r0 == 0) goto L5d
            com.tkay.core.common.f.f r3 = (com.tkay.core.common.f.f) r3
            int r0 = r3.c()
            r1 = 1
            if (r0 != r1) goto L5d
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            android.content.Context r0 = r0.getApplicationContext()
            java.lang.String r1 = r3.B()
            boolean r0 = com.tkay.core.common.l.h.a(r0, r1)
            java.lang.String r1 = ",packagename:"
            if (r0 == 0) goto L45
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "check offer installed(Apk Install Broadcast):true,dsp offerid:"
            r0.<init>(r2)
            java.lang.String r2 = r3.U()
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = r3.B()
            r0.append(r1)
            com.tkay.core.common.a.b r0 = com.tkay.core.common.a.b.a()
            r0.c(r3)
            return
        L45:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "check offer installed(Apk Install Broadcast):false,dsp offerid:"
            r0.<init>(r2)
            java.lang.String r2 = r3.U()
            r0.append(r2)
            r0.append(r1)
            java.lang.String r3 = r3.B()
            r0.append(r3)
        L5d:
            return
    }

    public static boolean a(int r3, com.tkay.core.common.f.j r4) {
            r0 = 0
            r1 = 1
            if (r3 == r1) goto L25
            r2 = 2
            if (r3 == r2) goto L25
            r2 = 3
            if (r3 == r2) goto L25
            r2 = 4
            if (r3 == r2) goto L25
            r2 = 5
            if (r3 == r2) goto L25
            r2 = 8
            if (r3 == r2) goto L25
            r2 = 9
            if (r3 == r2) goto L1d
            r2 = 35
            if (r3 == r2) goto L25
            goto L2c
        L1d:
            int r3 = r4.d()
            if (r3 != r1) goto L2c
        L23:
            r0 = r1
            goto L2c
        L25:
            int r3 = r4.c()
            if (r3 != r1) goto L2c
            goto L23
        L2c:
            return r0
    }

    public static boolean a(android.content.Context r2, com.tkay.core.common.f.h r3) {
            java.lang.String r0 = r3.z()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 0
            if (r0 != 0) goto L17
            java.lang.String r0 = r3.z()
            boolean r0 = com.tkay.core.basead.a.a.a(r2, r0, r1)
            if (r0 == 0) goto L17
            r2 = 1
            return r2
        L17:
            java.lang.String r0 = r3.B()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2a
            java.lang.String r3 = r3.B()
            boolean r2 = com.tkay.basead.a.c.a(r2, r3)
            return r2
        L2a:
            return r1
    }

    public static boolean a(android.content.Context r10, com.tkay.core.common.f.i r11, com.tkay.core.common.f.h r12, com.tkay.basead.c.d r13, java.lang.String r14, com.tkay.core.common.g.b r15) {
            r0 = 0
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L2d
            com.tkay.core.api.IExHandler r2 = r1.b()     // Catch: java.lang.Throwable -> L2d
            if (r13 == 0) goto L16
            java.lang.String r1 = r13.c     // Catch: java.lang.Throwable -> L2d
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L2d
            if (r1 != 0) goto L16
            java.lang.String r13 = r13.c     // Catch: java.lang.Throwable -> L2d
            goto L18
        L16:
            java.lang.String r13 = ""
        L18:
            r7 = r13
            if (r2 == 0) goto L2d
            android.content.Context r3 = r10.getApplicationContext()     // Catch: java.lang.Throwable -> L2d
            com.tkay.basead.a.b$1 r8 = new com.tkay.basead.a.b$1     // Catch: java.lang.Throwable -> L2d
            r8.<init>(r12, r3)     // Catch: java.lang.Throwable -> L2d
            r4 = r11
            r5 = r12
            r6 = r14
            r9 = r15
            r2.handleOfferClick(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L2d
            r10 = 1
            return r10
        L2d:
            return r0
    }

    public static boolean a(android.content.Context r2, java.lang.String r3) {
            r0 = 0
            if (r2 == 0) goto L15
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 == 0) goto La
            goto L15
        La:
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Throwable -> L15
            r1 = 8192(0x2000, float:1.148E-41)
            r2.getApplicationInfo(r3, r1)     // Catch: java.lang.Throwable -> L15
            r2 = 1
            return r2
        L15:
            return r0
    }

    private static boolean a(com.tkay.core.common.f.h r3, com.tkay.core.common.f.j r4) {
            boolean r0 = r3 instanceof com.tkay.core.common.f.f
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L14
            boolean r3 = r4 instanceof com.tkay.core.common.f.aa
            if (r3 == 0) goto L21
            com.tkay.core.common.f.aa r4 = (com.tkay.core.common.f.aa) r4
            int r3 = r4.Y()
            if (r3 != r2) goto L21
        L12:
            r1 = r2
            goto L21
        L14:
            boolean r4 = r3 instanceof com.tkay.core.common.f.r
            if (r4 == 0) goto L21
            com.tkay.core.common.f.r r3 = (com.tkay.core.common.f.r) r3
            int r3 = r3.O()
            if (r3 != r2) goto L21
            goto L12
        L21:
            return r1
    }
}
