package com.tkay.core.common;

import com.tkay.core.common.j;

public abstract class f<T extends com.tkay.core.common.j> {
    private final java.lang.String a;
    protected android.content.Context b;
    protected java.lang.String c;
    protected java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.h> d;
    protected int e;
    protected boolean f;
    protected java.lang.String g;
    protected int h;
    protected com.tkay.core.common.b.a i;
    protected com.tkay.core.common.g j;
    double k;
    java.lang.String l;
    private long m;
    private long n;
    private boolean o;
    private long p;
    private boolean q;
    private java.util.List<com.tkay.core.common.b.a> r;
    private java.lang.Object s;


    final class 2 implements java.lang.Runnable {
        final com.tkay.core.common.j a;
        final java.lang.String b;
        final com.tkay.core.common.b.a c;
        final android.content.Context d;
        final int[] e;
        final java.lang.String f;
        final java.util.Map g;
        final com.tkay.core.common.f h;


        2(com.tkay.core.common.f r1, com.tkay.core.common.j r2, java.lang.String r3, com.tkay.core.common.b.a r4, android.content.Context r5, int[] r6, java.lang.String r7, java.util.Map r8) {
                r0 = this;
                r0.h = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.d = r5
                r0.e = r6
                r0.f = r7
                r0.g = r8
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r21 = this;
                r7 = r21
                com.tkay.core.common.f r8 = r7.h
                monitor-enter(r8)
                com.tkay.core.common.f r0 = r7.h     // Catch: java.lang.Throwable -> L354
                boolean r0 = r0.e()     // Catch: java.lang.Throwable -> L354
                if (r0 == 0) goto L15
                com.tkay.core.common.j r0 = r7.a     // Catch: java.lang.Throwable -> L354
                int r0 = r0.d     // Catch: java.lang.Throwable -> L354
                if (r0 == 0) goto L15
                monitor-exit(r8)     // Catch: java.lang.Throwable -> L354
                return
            L15:
                com.tkay.core.common.f r0 = r7.h     // Catch: java.lang.Throwable -> L354
                boolean r0 = r0.i()     // Catch: java.lang.Throwable -> L354
                if (r0 != 0) goto L26
                com.tkay.core.common.j r0 = r7.a     // Catch: java.lang.Throwable -> L354
                int r0 = r0.d     // Catch: java.lang.Throwable -> L354
                r1 = 5
                if (r0 != r1) goto L26
                monitor-exit(r8)     // Catch: java.lang.Throwable -> L354
                return
            L26:
                com.tkay.core.common.f r0 = r7.h     // Catch: java.lang.Throwable -> L354
                boolean r0 = r0.j()     // Catch: java.lang.Throwable -> L354
                if (r0 == 0) goto L50
                com.tkay.core.common.j r0 = r7.a     // Catch: java.lang.Throwable -> L354
                int r0 = r0.d     // Catch: java.lang.Throwable -> L354
                if (r0 != 0) goto L50
                java.lang.String r0 = "tkay"
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L354
                java.lang.String r2 = "PlacementId("
                r1.<init>(r2)     // Catch: java.lang.Throwable -> L354
                java.lang.String r2 = r7.b     // Catch: java.lang.Throwable -> L354
                r1.append(r2)     // Catch: java.lang.Throwable -> L354
                java.lang.String r2 = ") the load api calls are not allowed in Auto-load mode"
                r1.append(r2)     // Catch: java.lang.Throwable -> L354
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L354
                android.util.Log.e(r0, r1)     // Catch: java.lang.Throwable -> L354
                monitor-exit(r8)     // Catch: java.lang.Throwable -> L354
                return
            L50:
                com.tkay.core.common.f r0 = r7.h     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.b.a r1 = r7.c     // Catch: java.lang.Throwable -> L354
                r0.a(r1)     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.j r0 = r7.a     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.f r1 = r7.h     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.b.a r1 = r1.i     // Catch: java.lang.Throwable -> L354
                r0.f = r1     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.j r0 = r7.a     // Catch: java.lang.Throwable -> L354
                int r0 = r0.d     // Catch: java.lang.Throwable -> L354
                r1 = 4
                r2 = 1
                if (r0 == r1) goto L6c
                com.tkay.core.common.f r0 = r7.h     // Catch: java.lang.Throwable -> L354
                r0.h = r2     // Catch: java.lang.Throwable -> L354
                goto L73
            L6c:
                com.tkay.core.common.f r0 = r7.h     // Catch: java.lang.Throwable -> L354
                int r3 = r0.h     // Catch: java.lang.Throwable -> L354
                int r3 = r3 + r2
                r0.h = r3     // Catch: java.lang.Throwable -> L354
            L73:
                com.tkay.core.common.f r0 = r7.h     // Catch: java.lang.Throwable -> L354
                r0.k()     // Catch: java.lang.Throwable -> L354
                java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L354
                java.lang.String r3 = "PlacementId("
                r0.<init>(r3)     // Catch: java.lang.Throwable -> L354
                java.lang.String r3 = r7.b     // Catch: java.lang.Throwable -> L354
                r0.append(r3)     // Catch: java.lang.Throwable -> L354
                java.lang.String r3 = ") start load type:"
                r0.append(r3)     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.j r3 = r7.a     // Catch: java.lang.Throwable -> L354
                int r3 = r3.d     // Catch: java.lang.Throwable -> L354
                r0.append(r3)     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L354
                android.content.Context r3 = r7.d     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L354
                java.lang.String r4 = r4.o()     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L354
                java.lang.String r5 = r5.p()     // Catch: java.lang.Throwable -> L354
                r0.a(r3, r4, r5)     // Catch: java.lang.Throwable -> L354
                android.content.Context r0 = r7.d     // Catch: java.lang.Throwable -> L354
                java.lang.String r5 = com.tkay.core.common.l.g.a(r0)     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.j r0 = r7.a     // Catch: java.lang.Throwable -> L354
                r0.a = r5     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.f r0 = r7.h     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.j r3 = r7.a     // Catch: java.lang.Throwable -> L354
                java.lang.String r3 = r3.a     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.b.a r4 = r7.c     // Catch: java.lang.Throwable -> L354
                r0.a(r3, r4)     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L354
                android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> L354
                r3 = 0
                if (r0 == 0) goto L2fb
                com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L354
                java.lang.String r0 = r0.o()     // Catch: java.lang.Throwable -> L354
                boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L354
                if (r0 != 0) goto L2fb
                com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L354
                java.lang.String r0 = r0.p()     // Catch: java.lang.Throwable -> L354
                boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L354
                if (r0 != 0) goto L2fb
                java.lang.String r0 = r7.b     // Catch: java.lang.Throwable -> L354
                boolean r0 = com.tkay.core.common.l.h.a(r0)     // Catch: java.lang.Throwable -> L354
                if (r0 == 0) goto Lef
                goto L2fb
            Lef:
                com.tkay.core.common.f r0 = r7.h     // Catch: java.lang.Throwable -> L354
                boolean r0 = r0.g()     // Catch: java.lang.Throwable -> L354
                if (r0 == 0) goto L113
                java.lang.String r0 = "tkay"
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L354
                java.lang.String r2 = "Placement("
                r1.<init>(r2)     // Catch: java.lang.Throwable -> L354
                java.lang.String r2 = r7.b     // Catch: java.lang.Throwable -> L354
                r1.append(r2)     // Catch: java.lang.Throwable -> L354
                java.lang.String r2 = ") is loading."
                r1.append(r2)     // Catch: java.lang.Throwable -> L354
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L354
                android.util.Log.i(r0, r1)     // Catch: java.lang.Throwable -> L354
                monitor-exit(r8)     // Catch: java.lang.Throwable -> L354
                return
            L113:
                android.content.Context r0 = r7.d     // Catch: java.lang.Throwable -> L354
                android.content.Context r4 = r0.getApplicationContext()     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L354
                java.lang.String r0 = r0.o()     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.b.m r6 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L354
                java.lang.String r18 = r6.p()     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.b.m r6 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L354
                boolean r6 = r6.u()     // Catch: java.lang.Throwable -> L354
                if (r6 == 0) goto L136
                r9 = 0
            L134:
                r15 = r9
                goto L141
            L136:
                com.tkay.core.c.e r9 = com.tkay.core.c.e.a(r4)     // Catch: java.lang.Throwable -> L354
                java.lang.String r10 = r7.b     // Catch: java.lang.Throwable -> L354
                com.tkay.core.c.d r9 = r9.a(r10)     // Catch: java.lang.Throwable -> L354
                goto L134
            L141:
                if (r15 == 0) goto L148
                java.lang.String r9 = r15.V()     // Catch: java.lang.Throwable -> L354
                goto L14a
            L148:
                java.lang.String r9 = ""
            L14a:
                r19 = r9
                java.lang.String r10 = r7.b     // Catch: java.lang.Throwable -> L354
                java.lang.String r11 = ""
                java.lang.String r13 = ""
                if (r15 == 0) goto L159
                int r9 = r15.m()     // Catch: java.lang.Throwable -> L354
                goto L15a
            L159:
                r9 = -1
            L15a:
                r14 = r9
                com.tkay.core.common.j r9 = r7.a     // Catch: java.lang.Throwable -> L354
                int r12 = r9.d     // Catch: java.lang.Throwable -> L354
                int[] r9 = r7.e     // Catch: java.lang.Throwable -> L354
                r16 = r9[r3]     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.j r9 = r7.a     // Catch: java.lang.Throwable -> L354
                java.util.Map<java.lang.String, java.lang.Object> r9 = r9.g     // Catch: java.lang.Throwable -> L354
                r17 = r9
                r9 = r5
                r20 = r12
                r12 = r15
                r1 = r15
                r15 = r20
                com.tkay.core.common.f.d r9 = com.tkay.core.common.l.s.a(r9, r10, r11, r12, r13, r14, r15, r16, r17)     // Catch: java.lang.Throwable -> L354
                java.lang.String r10 = r7.f     // Catch: java.lang.Throwable -> L354
                r9.z(r10)     // Catch: java.lang.Throwable -> L354
                java.util.Map r10 = r7.g     // Catch: java.lang.Throwable -> L354
                if (r10 == 0) goto L182
                java.util.Map r10 = r7.g     // Catch: java.lang.Throwable -> L354
                r9.a(r10)     // Catch: java.lang.Throwable -> L354
            L182:
                if (r1 != 0) goto L1c1
                if (r6 != 0) goto L1c1
                com.tkay.core.common.j r6 = r7.a     // Catch: java.lang.Throwable -> L354
                java.lang.String r6 = r6.c     // Catch: java.lang.Throwable -> L354
                boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L354
                if (r6 == 0) goto L196
                com.tkay.core.common.j r6 = r7.a     // Catch: java.lang.Throwable -> L354
                com.tkay.core.api.TYMediationRequestInfo r6 = r6.b     // Catch: java.lang.Throwable -> L354
                if (r6 == 0) goto L1c1
            L196:
                java.lang.String r6 = "tkay"
                java.lang.String r10 = "request default adsource for splash."
                android.util.Log.i(r6, r10)     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.f r6 = r7.h     // Catch: java.lang.Throwable -> L354
                java.lang.String r10 = r7.b     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.j r11 = r7.a     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.b.a r12 = r7.c     // Catch: java.lang.Throwable -> L354
                boolean r6 = r6.a(r10, r5, r11, r12)     // Catch: java.lang.Throwable -> L354
                if (r6 == 0) goto L1c1
                android.content.Context r1 = r7.d     // Catch: java.lang.Throwable -> L354
                com.tkay.core.c.e r9 = com.tkay.core.c.e.a(r1)     // Catch: java.lang.Throwable -> L354
                r10 = 0
                java.lang.String r13 = r7.b     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.j r1 = r7.a     // Catch: java.lang.Throwable -> L354
                java.util.Map<java.lang.String, java.lang.Object> r14 = r1.g     // Catch: java.lang.Throwable -> L354
                r15 = 0
                r11 = r0
                r12 = r18
                r9.a(r10, r11, r12, r13, r14, r15)     // Catch: java.lang.Throwable -> L354
                monitor-exit(r8)     // Catch: java.lang.Throwable -> L354
                return
            L1c1:
                com.tkay.core.common.f r6 = r7.h     // Catch: java.lang.Throwable -> L354
                int r6 = r6.e     // Catch: java.lang.Throwable -> L354
                if (r6 != r2) goto L20a
                com.tkay.core.common.f r6 = r7.h     // Catch: java.lang.Throwable -> L354
                boolean r6 = r6.d()     // Catch: java.lang.Throwable -> L354
                if (r6 != 0) goto L20a
                com.tkay.core.common.a r6 = com.tkay.core.common.a.a()     // Catch: java.lang.Throwable -> L354
                android.content.Context r10 = r7.d     // Catch: java.lang.Throwable -> L354
                java.lang.String r11 = r7.b     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.f.a r6 = r6.a(r10, r11)     // Catch: java.lang.Throwable -> L354
                if (r6 == 0) goto L20a
                com.tkay.core.common.x r0 = com.tkay.core.common.x.a()     // Catch: java.lang.Throwable -> L354
                java.lang.String r1 = r7.b     // Catch: java.lang.Throwable -> L354
                r0.a(r1, r5)     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.f r0 = r7.h     // Catch: java.lang.Throwable -> L354
                r0.h()     // Catch: java.lang.Throwable -> L354
                r9.a(r3)     // Catch: java.lang.Throwable -> L354
                r0 = 4
                r9.z(r0)     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.k.a r0 = com.tkay.core.common.k.a.a(r4)     // Catch: java.lang.Throwable -> L354
                r1 = 10
                r0.a(r1, r9)     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.k.a r0 = com.tkay.core.common.k.a.a(r4)     // Catch: java.lang.Throwable -> L354
                r1 = 12
                r0.a(r1, r9)     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.f r0 = r7.h     // Catch: java.lang.Throwable -> L354
                r0.f = r3     // Catch: java.lang.Throwable -> L354
                monitor-exit(r8)     // Catch: java.lang.Throwable -> L354
                return
            L20a:
                if (r1 == 0) goto L259
                com.tkay.core.common.f r6 = r7.h     // Catch: java.lang.Throwable -> L354
                boolean r6 = com.tkay.core.common.f.c(r6)     // Catch: java.lang.Throwable -> L354
                if (r6 == 0) goto L259
                long r10 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.f r6 = r7.h     // Catch: java.lang.Throwable -> L354
                long r12 = com.tkay.core.common.f.d(r6)     // Catch: java.lang.Throwable -> L354
                long r10 = r10 - r12
                r12 = 0
                int r6 = (r10 > r12 ? 1 : (r10 == r12 ? 0 : -1))
                if (r6 <= 0) goto L259
                long r12 = r1.ak()     // Catch: java.lang.Throwable -> L354
                int r6 = (r10 > r12 ? 1 : (r10 == r12 ? 0 : -1))
                if (r6 >= 0) goto L259
                java.lang.String r0 = "2008"
                java.lang.String r1 = ""
                java.lang.String r4 = ""
                com.tkay.core.api.AdError r0 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r1, r4)     // Catch: java.lang.Throwable -> L354
                r1 = 7
                r9.z(r1)     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.f r1 = r7.h     // Catch: java.lang.Throwable -> L354
                boolean r1 = com.tkay.core.common.f.e(r1)     // Catch: java.lang.Throwable -> L354
                if (r1 != 0) goto L244
                r3 = r2
            L244:
                com.tkay.core.common.f r1 = r7.h     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.e r4 = new com.tkay.core.common.e     // Catch: java.lang.Throwable -> L354
                java.lang.String r5 = r0.printStackTrace()     // Catch: java.lang.Throwable -> L354
                r4.<init>(r0, r5)     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.f.a(r1, r3, r9, r4)     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.f r0 = r7.h     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.f.a(r0, r2)     // Catch: java.lang.Throwable -> L354
                monitor-exit(r8)     // Catch: java.lang.Throwable -> L354
                return
            L259:
                com.tkay.core.common.f r6 = r7.h     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.f.f(r6)     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.f r6 = r7.h     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.f.g(r6)     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.f r6 = r7.h     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.f.a(r6, r3)     // Catch: java.lang.Throwable -> L354
                if (r1 == 0) goto L295
                com.tkay.core.a.b r3 = com.tkay.core.a.b.a()     // Catch: java.lang.Throwable -> L354
                java.lang.String r6 = r7.b     // Catch: java.lang.Throwable -> L354
                boolean r3 = r3.a(r4, r6, r1)     // Catch: java.lang.Throwable -> L354
                if (r3 == 0) goto L295
                java.lang.String r0 = "2009"
                java.lang.String r1 = ""
                java.lang.String r3 = ""
                com.tkay.core.api.AdError r0 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r1, r3)     // Catch: java.lang.Throwable -> L354
                r1 = 8
                r9.z(r1)     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.f r1 = r7.h     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.e r3 = new com.tkay.core.common.e     // Catch: java.lang.Throwable -> L354
                java.lang.String r4 = r0.printStackTrace()     // Catch: java.lang.Throwable -> L354
                r3.<init>(r0, r4)     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.f.a(r1, r2, r9, r3)     // Catch: java.lang.Throwable -> L354
                monitor-exit(r8)     // Catch: java.lang.Throwable -> L354
                return
            L295:
                com.tkay.core.common.f r3 = r7.h     // Catch: java.lang.Throwable -> L354
                boolean r3 = r3.e()     // Catch: java.lang.Throwable -> L354
                if (r3 == 0) goto L2b9
                java.lang.String r0 = "tkay"
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L354
                java.lang.String r2 = "Placement("
                r1.<init>(r2)     // Catch: java.lang.Throwable -> L354
                java.lang.String r2 = r7.b     // Catch: java.lang.Throwable -> L354
                r1.append(r2)     // Catch: java.lang.Throwable -> L354
                java.lang.String r2 = ") is loading."
                r1.append(r2)     // Catch: java.lang.Throwable -> L354
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L354
                android.util.Log.i(r0, r1)     // Catch: java.lang.Throwable -> L354
                monitor-exit(r8)     // Catch: java.lang.Throwable -> L354
                return
            L2b9:
                com.tkay.core.common.f r3 = r7.h     // Catch: java.lang.Throwable -> L354
                r3.f = r2     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.f r2 = r7.h     // Catch: java.lang.Throwable -> L354
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.h> r2 = r2.d     // Catch: java.lang.Throwable -> L354
                java.util.Collection r2 = r2.values()     // Catch: java.lang.Throwable -> L354
                java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L354
            L2c9:
                boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L354
                if (r3 == 0) goto L2d9
                java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.h r3 = (com.tkay.core.common.h) r3     // Catch: java.lang.Throwable -> L354
                r3.f()     // Catch: java.lang.Throwable -> L354
                goto L2c9
            L2d9:
                android.content.Context r2 = r7.d     // Catch: java.lang.Throwable -> L354
                com.tkay.core.c.e r10 = com.tkay.core.c.e.a(r2)     // Catch: java.lang.Throwable -> L354
                java.lang.String r13 = r7.b     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.j r2 = r7.a     // Catch: java.lang.Throwable -> L354
                java.util.Map<java.lang.String, java.lang.Object> r14 = r2.g     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.f$2$1 r15 = new com.tkay.core.common.f$2$1     // Catch: java.lang.Throwable -> L354
                r11 = r1
                r1 = r15
                r2 = r21
                r3 = r9
                r6 = r19
                r1.<init>(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L354
                r9 = r10
                r10 = r11
                r11 = r0
                r12 = r18
                r9.a(r10, r11, r12, r13, r14, r15)     // Catch: java.lang.Throwable -> L354
                monitor-exit(r8)     // Catch: java.lang.Throwable -> L354
                return
            L2fb:
                java.lang.String r0 = "3002"
                java.lang.String r1 = ""
                java.lang.String r2 = ""
                com.tkay.core.api.AdError r0 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r1, r2)     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.f r1 = r7.h     // Catch: java.lang.Throwable -> L354
                r1.a(r0)     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L354
                boolean r0 = r0.z()     // Catch: java.lang.Throwable -> L354
                if (r0 == 0) goto L34e
                java.lang.String r0 = "tkay"
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L354
                java.lang.String r2 = "Please check these params in your code (AppId: "
                r1.<init>(r2)     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L354
                java.lang.String r2 = r2.o()     // Catch: java.lang.Throwable -> L354
                r1.append(r2)     // Catch: java.lang.Throwable -> L354
                java.lang.String r2 = ", AppKey: "
                r1.append(r2)     // Catch: java.lang.Throwable -> L354
                com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L354
                java.lang.String r2 = r2.p()     // Catch: java.lang.Throwable -> L354
                r1.append(r2)     // Catch: java.lang.Throwable -> L354
                java.lang.String r2 = ", PlacementId: "
                r1.append(r2)     // Catch: java.lang.Throwable -> L354
                java.lang.String r2 = r7.b     // Catch: java.lang.Throwable -> L354
                r1.append(r2)     // Catch: java.lang.Throwable -> L354
                java.lang.String r2 = ")"
                r1.append(r2)     // Catch: java.lang.Throwable -> L354
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L354
                android.util.Log.e(r0, r1)     // Catch: java.lang.Throwable -> L354
            L34e:
                com.tkay.core.common.f r0 = r7.h     // Catch: java.lang.Throwable -> L354
                r0.f = r3     // Catch: java.lang.Throwable -> L354
                monitor-exit(r8)     // Catch: java.lang.Throwable -> L354
                return
            L354:
                r0 = move-exception
                monitor-exit(r8)
                throw r0
        }
    }

    final class 3 implements java.lang.Runnable {
        final android.content.Context a;
        final com.tkay.core.common.j b;
        final java.lang.String c;
        final java.lang.String d;
        final com.tkay.core.c.d e;
        final boolean f;
        final java.util.List g;
        final com.tkay.core.common.f.d h;
        final com.tkay.core.common.f.am i;
        final com.tkay.core.common.f.ae j;
        final java.util.List k;
        final java.util.List l;
        final com.tkay.core.common.f m;


        3(com.tkay.core.common.f r1, android.content.Context r2, com.tkay.core.common.j r3, java.lang.String r4, java.lang.String r5, com.tkay.core.c.d r6, boolean r7, java.util.List r8, com.tkay.core.common.f.d r9, com.tkay.core.common.f.am r10, com.tkay.core.common.f.ae r11, java.util.List r12, java.util.List r13) {
                r0 = this;
                r0.m = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.d = r5
                r0.e = r6
                r0.f = r7
                r0.g = r8
                r0.h = r9
                r0.i = r10
                r0.j = r11
                r0.k = r12
                r0.l = r13
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r3 = this;
                java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lc4
                com.tkay.core.common.f.ag r0 = new com.tkay.core.common.f.ag     // Catch: java.lang.Throwable -> Lc4
                r0.<init>()     // Catch: java.lang.Throwable -> Lc4
                android.content.Context r1 = r3.a     // Catch: java.lang.Throwable -> Lc4
                r0.b = r1     // Catch: java.lang.Throwable -> Lc4
                com.tkay.core.common.j r1 = r3.b     // Catch: java.lang.Throwable -> Lc4
                r0.c = r1     // Catch: java.lang.Throwable -> Lc4
                java.lang.String r1 = r3.c     // Catch: java.lang.Throwable -> Lc4
                r0.d = r1     // Catch: java.lang.Throwable -> Lc4
                java.lang.String r1 = r3.d     // Catch: java.lang.Throwable -> Lc4
                r0.e = r1     // Catch: java.lang.Throwable -> Lc4
                com.tkay.core.c.d r1 = r3.e     // Catch: java.lang.Throwable -> Lc4
                int r1 = r1.Y()     // Catch: java.lang.Throwable -> Lc4
                r0.f = r1     // Catch: java.lang.Throwable -> Lc4
                com.tkay.core.c.d r1 = r3.e     // Catch: java.lang.Throwable -> Lc4
                long r1 = r1.I()     // Catch: java.lang.Throwable -> Lc4
                r0.g = r1     // Catch: java.lang.Throwable -> Lc4
                com.tkay.core.c.d r1 = r3.e     // Catch: java.lang.Throwable -> Lc4
                long r1 = r1.A()     // Catch: java.lang.Throwable -> Lc4
                r0.h = r1     // Catch: java.lang.Throwable -> Lc4
                com.tkay.core.c.d r1 = r3.e     // Catch: java.lang.Throwable -> Lc4
                long r1 = r1.j()     // Catch: java.lang.Throwable -> Lc4
                r0.i = r1     // Catch: java.lang.Throwable -> Lc4
                com.tkay.core.common.i.a()     // Catch: java.lang.Throwable -> Lc4
                com.tkay.core.c.d r1 = r3.e     // Catch: java.lang.Throwable -> Lc4
                boolean r2 = r3.f     // Catch: java.lang.Throwable -> Lc4
                java.lang.String r1 = com.tkay.core.common.i.a(r1, r2)     // Catch: java.lang.Throwable -> Lc4
                r0.m = r1     // Catch: java.lang.Throwable -> Lc4
                com.tkay.core.common.i.a()     // Catch: java.lang.Throwable -> Lc4
                com.tkay.core.c.d r1 = r3.e     // Catch: java.lang.Throwable -> Lc4
                java.lang.String r1 = com.tkay.core.common.i.a(r1)     // Catch: java.lang.Throwable -> Lc4
                r0.p = r1     // Catch: java.lang.Throwable -> Lc4
                com.tkay.core.common.i.a()     // Catch: java.lang.Throwable -> Lc4
                com.tkay.core.c.d r1 = r3.e     // Catch: java.lang.Throwable -> Lc4
                java.lang.String r1 = com.tkay.core.common.i.b(r1)     // Catch: java.lang.Throwable -> Lc4
                r0.q = r1     // Catch: java.lang.Throwable -> Lc4
                java.util.List r1 = r3.g     // Catch: java.lang.Throwable -> Lc4
                r0.j = r1     // Catch: java.lang.Throwable -> Lc4
                com.tkay.core.c.d r1 = r3.e     // Catch: java.lang.Throwable -> Lc4
                r0.o = r1     // Catch: java.lang.Throwable -> Lc4
                com.tkay.core.common.f.d r1 = r3.h     // Catch: java.lang.Throwable -> Lc4
                r0.t = r1     // Catch: java.lang.Throwable -> Lc4
                com.tkay.core.common.f.am r1 = r3.i     // Catch: java.lang.Throwable -> Lc4
                r0.x = r1     // Catch: java.lang.Throwable -> Lc4
                com.tkay.core.common.f.ae r1 = r3.j     // Catch: java.lang.Throwable -> Lc4
                r0.y = r1     // Catch: java.lang.Throwable -> Lc4
                com.tkay.core.common.v r1 = com.tkay.core.common.v.a()     // Catch: java.lang.Throwable -> Lc4
                com.tkay.core.common.f r2 = r3.m     // Catch: java.lang.Throwable -> Lc4
                java.lang.String r2 = r2.c     // Catch: java.lang.Throwable -> Lc4
                java.util.Map r1 = r1.b(r2)     // Catch: java.lang.Throwable -> Lc4
                r0.r = r1     // Catch: java.lang.Throwable -> Lc4
                java.util.List r1 = r3.k     // Catch: java.lang.Throwable -> Lc4
                int r1 = r1.size()     // Catch: java.lang.Throwable -> Lc4
                if (r1 <= 0) goto L90
                java.util.List r1 = r3.k     // Catch: java.lang.Throwable -> Lc4
                r2 = 0
                java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> Lc4
                com.tkay.core.common.f.aj r1 = (com.tkay.core.common.f.aj) r1     // Catch: java.lang.Throwable -> Lc4
                r0.u = r1     // Catch: java.lang.Throwable -> Lc4
            L90:
                java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Lc4
                r1.<init>()     // Catch: java.lang.Throwable -> Lc4
                java.util.List r2 = r3.l     // Catch: java.lang.Throwable -> Lc4
                if (r2 == 0) goto L9e
                java.util.List r2 = r3.l     // Catch: java.lang.Throwable -> Lc4
                r1.addAll(r2)     // Catch: java.lang.Throwable -> Lc4
            L9e:
                r0.k = r1     // Catch: java.lang.Throwable -> Lc4
                boolean r1 = r3.f     // Catch: java.lang.Throwable -> Lc4
                r0.n = r1     // Catch: java.lang.Throwable -> Lc4
                com.tkay.core.common.j r1 = r3.b     // Catch: java.lang.Throwable -> Lc4
                int r1 = r1.d     // Catch: java.lang.Throwable -> Lc4
                r2 = 8
                if (r1 != r2) goto Laf
                r1 = 7
                r0.v = r1     // Catch: java.lang.Throwable -> Lc4
            Laf:
                com.tkay.core.b.h r1 = new com.tkay.core.b.h     // Catch: java.lang.Throwable -> Lc4
                r1.<init>(r0)     // Catch: java.lang.Throwable -> Lc4
                boolean r0 = com.tkay.core.api.TYSDK.isNetworkLogDebug()     // Catch: java.lang.Throwable -> Lc4
                r1.a(r0)     // Catch: java.lang.Throwable -> Lc4
                com.tkay.core.common.f$3$1 r0 = new com.tkay.core.common.f$3$1     // Catch: java.lang.Throwable -> Lc4
                r0.<init>(r3)     // Catch: java.lang.Throwable -> Lc4
                r1.a(r0)     // Catch: java.lang.Throwable -> Lc4
                return
            Lc4:
                com.tkay.core.common.f r0 = r3.m
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.h> r0 = r0.d
                java.lang.String r1 = r3.c
                java.lang.Object r0 = r0.get(r1)
                com.tkay.core.common.h r0 = (com.tkay.core.common.h) r0
                if (r0 == 0) goto Ld5
                r0.e()
            Ld5:
                return
        }
    }

    final class 4 implements java.lang.Runnable {
        final com.tkay.core.api.TYBaseAdAdapter a;
        final double b;
        final java.lang.String c;
        final com.tkay.core.common.f d;

        4(com.tkay.core.common.f r1, com.tkay.core.api.TYBaseAdAdapter r2, double r3, java.lang.String r5) {
                r0 = this;
                r0.d = r1
                r0.a = r2
                r0.b = r3
                r0.c = r5
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r6 = this;
                com.tkay.core.api.TYBaseAdAdapter r0 = r6.a
                com.tkay.core.common.f.d r0 = r0.getTrackingInfo()
                com.tkay.core.api.TYBaseAdAdapter r1 = r6.a
                com.tkay.core.common.f.aj r1 = r1.getUnitGroupInfo()
                if (r0 == 0) goto L74
                if (r1 != 0) goto L11
                goto L74
            L11:
                boolean r2 = r1.j()
                if (r2 == 0) goto L18
                return
            L18:
                java.lang.String r2 = r0.Y()
                java.lang.String r3 = "2"
                boolean r2 = android.text.TextUtils.equals(r2, r3)
                if (r2 != 0) goto L74
                java.lang.String r2 = r0.Y()
                java.lang.String r3 = "4"
                boolean r2 = android.text.TextUtils.equals(r2, r3)
                if (r2 == 0) goto L31
                goto L74
            L31:
                com.tkay.core.common.f r2 = r6.d
                double r2 = r2.k
                double r4 = r6.b
                int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
                if (r2 <= 0) goto L48
                com.tkay.core.common.f r2 = r6.d
                java.lang.String r2 = r2.l
                java.lang.String r3 = r6.c
                boolean r2 = r2.equals(r3)
                if (r2 == 0) goto L48
                return
            L48:
                int r2 = r0.H()
                r3 = 35
                if (r2 != r3) goto L51
                return
            L51:
                com.tkay.core.common.f r2 = r6.d
                double r3 = r6.b
                r2.k = r3
                com.tkay.core.common.f r2 = r6.d
                java.lang.String r3 = r6.c
                r2.l = r3
                com.tkay.core.common.f r2 = r6.d
                com.tkay.core.common.g r2 = r2.j
                if (r2 == 0) goto L6f
                com.tkay.core.common.f r2 = r6.d
                com.tkay.core.common.g r2 = r2.j
                r2.cancel()
                com.tkay.core.common.f r2 = r6.d
                r3 = 0
                r2.j = r3
            L6f:
                com.tkay.core.common.f r2 = r6.d
                com.tkay.core.common.f.a(r2, r1, r0)
            L74:
                return
        }
    }



    public f(android.content.Context r5, java.lang.String r6) {
            r4 = this;
            r4.<init>()
            java.lang.Class r0 = r4.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r4.a = r0
            r0 = 0
            r4.e = r0
            java.lang.String r1 = ""
            r4.g = r1
            r4.q = r0
            r0 = 1
            r4.h = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r4.s = r0
            com.tkay.core.common.f$1 r0 = new com.tkay.core.common.f$1
            r0.<init>(r4)
            r4.i = r0
            r2 = 0
            r4.k = r2
            r4.l = r1
            android.content.Context r5 = r5.getApplicationContext()
            r4.b = r5
            r4.c = r6
            java.util.concurrent.ConcurrentHashMap r5 = new java.util.concurrent.ConcurrentHashMap
            r6 = 5
            r5.<init>(r6)
            r4.d = r5
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()
            android.content.Context r5 = r5.f()
            if (r5 != 0) goto L50
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()
            android.content.Context r6 = r4.b
            r5.a(r6)
        L50:
            return
    }

    static long a(com.tkay.core.common.f r0, long r1) {
            r0.n = r1
            return r1
    }

    static java.lang.Object a(com.tkay.core.common.f r0) {
            java.lang.Object r0 = r0.s
            return r0
    }

    protected static java.lang.String a(com.tkay.core.common.f.i r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.b
            r0.append(r1)
            java.lang.String r1 = r3.c
            r0.append(r1)
            int r3 = r3.f
            r0.append(r3)
            long r1 = java.lang.System.currentTimeMillis()
            r0.append(r1)
            java.lang.String r3 = r0.toString()
            return r3
    }

    private void a(int r16, com.tkay.core.c.d r17, java.util.List<com.tkay.core.common.f.aj> r18, java.util.List<com.tkay.core.common.f.aj> r19, java.util.List<com.tkay.core.common.f.aj> r20, java.util.List<com.tkay.core.common.f.aj> r21, java.util.List<com.tkay.core.common.f.aj> r22, java.util.List<com.tkay.core.common.f.aj> r23, java.util.List<com.tkay.core.common.f.aj> r24, com.tkay.core.common.f.ad r25, com.tkay.core.common.f.d r26) {
            r15 = this;
            r0 = r24
            r9 = r26
            int r1 = r18.size()
            int r2 = r19.size()
            int r1 = r1 + r2
            int r2 = r20.size()
            int r1 = r1 + r2
            java.util.concurrent.atomic.AtomicInteger r10 = new java.util.concurrent.atomic.AtomicInteger
            r10.<init>(r1)
            java.util.Iterator r11 = r18.iterator()
        L1b:
            boolean r1 = r11.hasNext()
            if (r1 == 0) goto L4a
            java.lang.Object r1 = r11.next()
            r12 = r1
            com.tkay.core.common.f.aj r12 = (com.tkay.core.common.f.aj) r12
            java.lang.String r4 = r26.W()
            r1 = r15
            r2 = r16
            r3 = r17
            r5 = r26
            r6 = r25
            r7 = r12
            r8 = r10
            boolean r1 = r1.a(r2, r3, r4, r5, r6, r7, r8)
            if (r1 == 0) goto L44
            r12.b()
            r0.add(r12)
            goto L1b
        L44:
            r13 = r21
            r13.add(r12)
            goto L1b
        L4a:
            r13 = r21
            java.util.Iterator r11 = r19.iterator()
        L50:
            boolean r1 = r11.hasNext()
            if (r1 == 0) goto L7f
            java.lang.Object r1 = r11.next()
            r12 = r1
            com.tkay.core.common.f.aj r12 = (com.tkay.core.common.f.aj) r12
            java.lang.String r4 = r26.W()
            r1 = r15
            r2 = r16
            r3 = r17
            r5 = r26
            r6 = r25
            r7 = r12
            r8 = r10
            boolean r1 = r1.a(r2, r3, r4, r5, r6, r7, r8)
            if (r1 == 0) goto L79
            r12.b()
            r0.add(r12)
            goto L50
        L79:
            r14 = r22
            r14.add(r12)
            goto L50
        L7f:
            r14 = r22
            java.util.Iterator r11 = r20.iterator()
        L85:
            boolean r1 = r11.hasNext()
            if (r1 == 0) goto Lb4
            java.lang.Object r1 = r11.next()
            r12 = r1
            com.tkay.core.common.f.aj r12 = (com.tkay.core.common.f.aj) r12
            java.lang.String r4 = r26.W()
            r1 = r15
            r2 = r16
            r3 = r17
            r5 = r26
            r6 = r25
            r7 = r12
            r8 = r10
            boolean r1 = r1.a(r2, r3, r4, r5, r6, r7, r8)
            if (r1 == 0) goto Lae
            r12.b()
            r0.add(r12)
            goto L85
        Lae:
            r1 = r23
            r1.add(r12)
            goto L85
        Lb4:
            r1 = r23
            int r0 = r21.size()
            if (r0 > 0) goto Le9
            int r0 = r22.size()
            if (r0 > 0) goto Le9
            int r0 = r23.size()
            if (r0 > 0) goto Le9
            r0 = 6
            r9.z(r0)
            int r0 = r10.get()
            if (r0 != 0) goto Ld7
            r0 = 10
            r9.z(r0)
        Ld7:
            java.lang.String r0 = ""
            java.lang.String r1 = "4005"
            com.tkay.core.api.AdError r0 = com.tkay.core.api.ErrorCode.getErrorCode(r1, r0, r0)
            com.tkay.core.common.e r1 = new com.tkay.core.common.e
            java.lang.String r2 = r0.printStackTrace()
            r1.<init>(r0, r2)
            throw r1
        Le9:
            return
    }

    private void a(android.content.Context r25, java.lang.String r26, java.lang.String r27, com.tkay.core.c.d r28, com.tkay.core.common.f.d r29, T r30) {
            r24 = this;
            r15 = r24
            r0 = r26
            r13 = r27
            r14 = r28
            r12 = r29
            r11 = r30
            com.tkay.core.common.a r1 = com.tkay.core.common.a.a()
            java.lang.String r2 = r15.c
            r1.a(r2, r13, r14)
            java.lang.String r1 = r28.ag()
            java.lang.String r2 = r28.ah()
            java.util.List r4 = com.tkay.core.c.d.a(r1, r2)
            java.lang.String r16 = r28.ai()
            java.lang.String r17 = r28.D()
            java.lang.String r18 = r28.aj()
            java.lang.String r19 = r28.B()
            java.lang.String r20 = r28.t()
            java.lang.String r21 = r28.ap()
            java.lang.String r22 = r28.aq()
            java.util.List r5 = com.tkay.core.c.d.a(r16, r17, r18, r19, r20, r21, r22)
            java.lang.String r1 = r28.o()
            java.util.List r1 = com.tkay.core.c.d.c(r1)
            java.lang.String r2 = r28.h()
            java.util.List r6 = com.tkay.core.c.d.d(r2)
            r10 = 0
            if (r1 == 0) goto L67
            int r2 = r1.size()
            r3 = r10
        L59:
            if (r3 >= r2) goto L67
            java.lang.Object r7 = r1.get(r3)
            com.tkay.core.common.f.aj r7 = (com.tkay.core.common.f.aj) r7
            com.tkay.core.common.l.g.a(r4, r7, r10)
            int r3 = r3 + 1
            goto L59
        L67:
            boolean r1 = r28.ay()     // Catch: java.lang.Throwable -> L2a3 com.tkay.core.common.e -> L2ac
            r2 = 5
            java.lang.String r8 = ""
            if (r1 == 0) goto L289
            if (r4 == 0) goto L7f
            int r1 = r4.size()     // Catch: java.lang.Throwable -> L79 com.tkay.core.common.e -> L2ac
            if (r1 != 0) goto L91
            goto L7f
        L79:
            r0 = move-exception
            r10 = r12
            r1 = r15
            r4 = 1
            goto L2a8
        L7f:
            if (r5 == 0) goto L87
            int r1 = r5.size()     // Catch: java.lang.Throwable -> L79 com.tkay.core.common.e -> L2ac
            if (r1 != 0) goto L91
        L87:
            if (r6 == 0) goto L263
            int r1 = r6.size()     // Catch: com.tkay.core.common.e -> L25f java.lang.Throwable -> L2a3
            if (r1 != 0) goto L91
            goto L263
        L91:
            com.tkay.core.a.a r1 = com.tkay.core.a.a.a(r25)     // Catch: com.tkay.core.common.e -> L25f java.lang.Throwable -> L2a3
            com.tkay.core.common.f.ad r7 = r1.a(r0)     // Catch: com.tkay.core.common.e -> L25f java.lang.Throwable -> L2a3
            long r1 = r28.ac()     // Catch: com.tkay.core.common.e -> L25f java.lang.Throwable -> L2a3
            long r16 = r28.ad()     // Catch: com.tkay.core.common.e -> L25f java.lang.Throwable -> L2a3
            if (r7 == 0) goto La6
            int r3 = r7.d     // Catch: java.lang.Throwable -> L79 com.tkay.core.common.e -> L2ac
            goto La7
        La6:
            r3 = r10
        La7:
            if (r7 == 0) goto Lac
            int r10 = r7.c     // Catch: java.lang.Throwable -> L79 com.tkay.core.common.e -> L2ac
            goto Lad
        Lac:
            r10 = 0
        Lad:
            r19 = -1
            int r21 = (r1 > r19 ? 1 : (r1 == r19 ? 0 : -1))
            if (r21 == 0) goto Lbb
            long r9 = (long) r10
            int r1 = (r9 > r1 ? 1 : (r9 == r1 ? 0 : -1))
            if (r1 >= 0) goto Lb9
            goto Lbb
        Lb9:
            r9 = 1
            goto Lc5
        Lbb:
            int r1 = (r16 > r19 ? 1 : (r16 == r19 ? 0 : -1))
            if (r1 == 0) goto Le2
            long r1 = (long) r3
            int r1 = (r1 > r16 ? 1 : (r1 == r16 ? 0 : -1))
            if (r1 >= 0) goto Lb9
            goto Le2
        Lc5:
            r12.z(r9)     // Catch: java.lang.Throwable -> Ld6 com.tkay.core.common.e -> Ldc
            com.tkay.core.common.e r0 = new com.tkay.core.common.e     // Catch: java.lang.Throwable -> Ld6 com.tkay.core.common.e -> Ldc
            java.lang.String r1 = "2003"
            com.tkay.core.api.AdError r1 = com.tkay.core.api.ErrorCode.getErrorCode(r1, r8, r8)     // Catch: java.lang.Throwable -> Ld6 com.tkay.core.common.e -> Ldc
            java.lang.String r2 = "Capping."
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> Ld6 com.tkay.core.common.e -> Ldc
            throw r0     // Catch: java.lang.Throwable -> Ld6 com.tkay.core.common.e -> Ldc
        Ld6:
            r0 = move-exception
            r4 = r9
            r10 = r12
            r1 = r15
            goto L2a8
        Ldc:
            r0 = move-exception
            r4 = r9
            r10 = r12
            r1 = r15
            goto L2b0
        Le2:
            r9 = 1
            com.tkay.core.a.c.a()     // Catch: java.lang.Throwable -> L257 com.tkay.core.common.e -> L25b
            java.lang.String r1 = r29.W()     // Catch: java.lang.Throwable -> L257 com.tkay.core.common.e -> L25b
            boolean r1 = com.tkay.core.a.c.a(r1, r14)     // Catch: java.lang.Throwable -> L257 com.tkay.core.common.e -> L25b
            if (r1 != 0) goto L242
            java.util.ArrayList r10 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L257 com.tkay.core.common.e -> L25b
            r1 = 3
            r10.<init>(r1)     // Catch: java.lang.Throwable -> L257 com.tkay.core.common.e -> L25b
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L257 com.tkay.core.common.e -> L25b
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L257 com.tkay.core.common.e -> L25b
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L257 com.tkay.core.common.e -> L25b
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L257 com.tkay.core.common.e -> L25b
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L257 com.tkay.core.common.e -> L25b
            r9 = 2
            r1.<init>(r9)     // Catch: com.tkay.core.common.e -> L25f java.lang.Throwable -> L2a3
            int r9 = r11.d     // Catch: com.tkay.core.common.e -> L25f java.lang.Throwable -> L2a3
            r16 = r1
            r1 = r24
            r17 = r2
            r2 = r9
            r9 = r3
            r3 = r28
            r19 = r7
            r7 = r9
            r23 = r8
            r8 = r17
            r0 = r9
            r13 = 1
            r9 = r16
            r18 = r10
            r11 = r19
            r12 = r29
            r1.a(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)     // Catch: java.lang.Throwable -> L236 com.tkay.core.common.e -> L23c
            java.util.ArrayList r12 = new java.util.ArrayList
            r12.<init>(r13)
            r10 = r29
            r9 = r17
            r15.a(r0, r9, r10, r12)
            r1 = r16
            r15.a(r0, r1, r10, r12)
            java.util.List r0 = com.tkay.core.common.l.g.a(r0)
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r2.addAll(r0)
            r3 = r18
            r2.addAll(r3)
            com.tkay.core.common.x r3 = com.tkay.core.common.x.a()
            r6 = r26
            r5 = r27
            r4 = r13
            r3.a(r6, r5, r14, r2)
            int r2 = r12.size()
            if (r2 <= 0) goto L15c
            r8 = r4
            goto L15d
        L15c:
            r8 = 0
        L15d:
            if (r8 != 0) goto L16e
            int r2 = r9.size()
            if (r2 != 0) goto L16e
            com.tkay.core.common.x r2 = com.tkay.core.common.x.a()
            r2.a(r6, r5)
            r2 = r4
            goto L16f
        L16e:
            r2 = 0
        L16f:
            if (r2 == 0) goto L190
            int r3 = r0.size()
            if (r3 != 0) goto L190
            int r3 = r1.size()
            if (r3 != 0) goto L190
            java.lang.String r0 = "4005"
            r1 = r23
            com.tkay.core.api.AdError r0 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r1, r1)
            r1 = 6
            r10.z(r1)
            r15.a(r4, r10, r0)
            r3 = 0
            r15.f = r3
            return
        L190:
            r3 = 0
            com.tkay.core.a.b r7 = com.tkay.core.a.b.a()
            android.content.Context r11 = r15.b
            r7.b(r11, r6, r14)
            r10.a(r4)
            android.content.Context r4 = r15.b
            com.tkay.core.common.k.a r4 = com.tkay.core.common.k.a.a(r4)
            r7 = 10
            r4.a(r7, r10)
            com.tkay.core.common.v r4 = com.tkay.core.common.v.a()
            java.lang.String r7 = r15.c
            java.util.Map r4 = r4.b(r7)
            android.content.Context r7 = r15.b
            com.tkay.core.common.y r7 = com.tkay.core.common.y.a(r7)
            java.util.Map<java.lang.String, com.tkay.core.common.f.am> r11 = r7.a
            if (r11 == 0) goto L1c5
            java.util.Map<java.lang.String, com.tkay.core.common.f.am> r7 = r7.a
            java.lang.Object r7 = r7.remove(r6)
            com.tkay.core.common.f.am r7 = (com.tkay.core.common.f.am) r7
            goto L1c6
        L1c5:
            r7 = 0
        L1c6:
            r11 = r7
            android.content.Context r7 = r15.b
            com.tkay.core.common.w r7 = com.tkay.core.common.w.a(r7)
            com.tkay.core.common.f.ae r13 = r7.a(r6, r5)
            r7 = r30
            com.tkay.core.common.h r3 = r15.a(r7)
            r3.h = r4
            r3.i = r10
            r3.a(r7)
            com.tkay.core.common.b.b r4 = r7.e
            r3.a(r4)
            r3.R = r1
            r15.g = r5
            com.tkay.core.common.m.g r1 = new com.tkay.core.common.m.g
            r1.<init>()
            r1.a = r6
            r1.b = r5
            r1.c = r14
            r1.d = r0
            r1.e = r2
            int r4 = r29.S()
            r1.f = r4
            r1.g = r11
            r1.h = r13
            r3.a(r1)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.h> r1 = r15.d
            r1.put(r5, r3)
            r3.b()
            r1 = 0
            r15.f = r1
            if (r2 != 0) goto L235
            com.tkay.core.common.l.b.a r4 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.f$3 r3 = new com.tkay.core.common.f$3
            r1 = r3
            r2 = r24
            r15 = r3
            r3 = r25
            r16 = r15
            r15 = r4
            r4 = r30
            r5 = r27
            r6 = r26
            r7 = r28
            r10 = r29
            r14 = r12
            r12 = r13
            r13 = r14
            r14 = r0
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14)
            r0 = r16
            r15.b(r0)
        L235:
            return
        L236:
            r0 = move-exception
            r10 = r29
            r4 = r13
            goto L2a6
        L23c:
            r0 = move-exception
            r10 = r29
            r4 = r13
            goto L2a0
        L242:
            r1 = r8
            r4 = r9
            r10 = r12
            r0 = 2
            r10.z(r0)     // Catch: java.lang.Throwable -> L29d com.tkay.core.common.e -> L29f
            com.tkay.core.common.e r0 = new com.tkay.core.common.e     // Catch: java.lang.Throwable -> L29d com.tkay.core.common.e -> L29f
            java.lang.String r2 = "2004"
            com.tkay.core.api.AdError r1 = com.tkay.core.api.ErrorCode.getErrorCode(r2, r1, r1)     // Catch: java.lang.Throwable -> L29d com.tkay.core.common.e -> L29f
            java.lang.String r2 = "Pacing."
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L29d com.tkay.core.common.e -> L29f
            throw r0     // Catch: java.lang.Throwable -> L29d com.tkay.core.common.e -> L29f
        L257:
            r0 = move-exception
            r4 = r9
            r10 = r12
            goto L2a6
        L25b:
            r0 = move-exception
            r4 = r9
            r10 = r12
            goto L2a0
        L25f:
            r0 = move-exception
            r10 = r12
            r4 = 1
            goto L2a0
        L263:
            r1 = r8
            r10 = r12
            r4 = 1
            r10.z(r2)     // Catch: java.lang.Throwable -> L29d com.tkay.core.common.e -> L29f
            int r0 = r28.i()     // Catch: java.lang.Throwable -> L29d com.tkay.core.common.e -> L29f
            java.lang.String r2 = "No Adsource."
            if (r0 != r4) goto L27d
            com.tkay.core.common.e r0 = new com.tkay.core.common.e     // Catch: java.lang.Throwable -> L29d com.tkay.core.common.e -> L29f
            java.lang.String r3 = "4009"
            com.tkay.core.api.AdError r1 = com.tkay.core.api.ErrorCode.getErrorCode(r3, r1, r1)     // Catch: java.lang.Throwable -> L29d com.tkay.core.common.e -> L29f
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L29d com.tkay.core.common.e -> L29f
            throw r0     // Catch: java.lang.Throwable -> L29d com.tkay.core.common.e -> L29f
        L27d:
            com.tkay.core.common.e r0 = new com.tkay.core.common.e     // Catch: java.lang.Throwable -> L29d com.tkay.core.common.e -> L29f
            java.lang.String r3 = "4004"
            com.tkay.core.api.AdError r1 = com.tkay.core.api.ErrorCode.getErrorCode(r3, r1, r1)     // Catch: java.lang.Throwable -> L29d com.tkay.core.common.e -> L29f
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L29d com.tkay.core.common.e -> L29f
            throw r0     // Catch: java.lang.Throwable -> L29d com.tkay.core.common.e -> L29f
        L289:
            r1 = r8
            r10 = r12
            r4 = 1
            r10.z(r2)     // Catch: java.lang.Throwable -> L29d com.tkay.core.common.e -> L29f
            com.tkay.core.common.e r0 = new com.tkay.core.common.e     // Catch: java.lang.Throwable -> L29d com.tkay.core.common.e -> L29f
            java.lang.String r2 = "4003"
            com.tkay.core.api.AdError r1 = com.tkay.core.api.ErrorCode.getErrorCode(r2, r1, r1)     // Catch: java.lang.Throwable -> L29d com.tkay.core.common.e -> L29f
            java.lang.String r2 = "Strategy is close."
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L29d com.tkay.core.common.e -> L29f
            throw r0     // Catch: java.lang.Throwable -> L29d com.tkay.core.common.e -> L29f
        L29d:
            r0 = move-exception
            goto L2a6
        L29f:
            r0 = move-exception
        L2a0:
            r1 = r24
            goto L2b0
        L2a3:
            r0 = move-exception
            r10 = r12
            r4 = 1
        L2a6:
            r1 = r24
        L2a8:
            r1.a(r4, r10, r0)
            return
        L2ac:
            r0 = move-exception
            r10 = r12
            r1 = r15
            r4 = 1
        L2b0:
            r1.a(r4, r10, r0)
            return
    }

    private void a(com.tkay.core.api.TYBaseAdAdapter r9, java.lang.String r10, double r11) {
            r8 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.core.common.f$4 r7 = new com.tkay.core.common.f$4
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r11
            r6 = r10
            r1.<init>(r2, r3, r4, r6)
            r0.a(r7)
            return
    }

    private static void a(com.tkay.core.c.d r7, com.tkay.core.common.f.ad r8, com.tkay.core.common.f.d r9) {
            long r0 = r7.ac()
            long r2 = r7.ad()
            r7 = 0
            if (r8 == 0) goto Le
            int r4 = r8.d
            goto Lf
        Le:
            r4 = r7
        Lf:
            if (r8 == 0) goto L13
            int r7 = r8.c
        L13:
            r5 = -1
            int r8 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r8 == 0) goto L1e
            long r7 = (long) r7
            int r7 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r7 >= 0) goto L28
        L1e:
            int r7 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r7 == 0) goto L3c
            long r7 = (long) r4
            int r7 = (r7 > r2 ? 1 : (r7 == r2 ? 0 : -1))
            if (r7 >= 0) goto L28
            goto L3c
        L28:
            r7 = 1
            r9.z(r7)
            com.tkay.core.common.e r7 = new com.tkay.core.common.e
            java.lang.String r8 = ""
            java.lang.String r9 = "2003"
            com.tkay.core.api.AdError r8 = com.tkay.core.api.ErrorCode.getErrorCode(r9, r8, r8)
            java.lang.String r9 = "Capping."
            r7.<init>(r8, r9)
            throw r7
        L3c:
            return
    }

    private static void a(com.tkay.core.c.d r1, com.tkay.core.common.f.d r2) {
            boolean r1 = r1.ay()
            if (r1 == 0) goto L7
            return
        L7:
            r1 = 5
            r2.z(r1)
            com.tkay.core.common.e r1 = new com.tkay.core.common.e
            java.lang.String r2 = ""
            java.lang.String r0 = "4003"
            com.tkay.core.api.AdError r2 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r2, r2)
            java.lang.String r0 = "Strategy is close."
            r1.<init>(r2, r0)
            throw r1
    }

    private void a(com.tkay.core.c.d r11, java.lang.String r12, java.lang.String r13) {
            r10 = this;
            java.lang.String r0 = r11.ag()
            java.lang.String r1 = r11.ah()
            java.util.List r0 = com.tkay.core.c.d.a(r0, r1)
            java.lang.String r1 = r11.ai()
            java.lang.String r2 = r11.D()
            java.lang.String r3 = r11.aj()
            java.lang.String r4 = r11.B()
            java.lang.String r5 = r11.t()
            java.lang.String r6 = r11.ap()
            java.lang.String r7 = r11.aq()
            java.util.List r1 = com.tkay.core.c.d.a(r1, r2, r3, r4, r5, r6, r7)
            java.lang.String r2 = r11.h()
            java.util.List r2 = com.tkay.core.c.d.d(r2)
            r1.addAll(r2)
            java.lang.String r2 = r11.o()
            java.util.List r2 = com.tkay.core.c.d.c(r2)
            r3 = 0
            r4 = 1
            if (r2 == 0) goto L56
            int r5 = r2.size()
            r6 = r3
        L48:
            if (r6 >= r5) goto L56
            java.lang.Object r7 = r2.get(r6)
            com.tkay.core.common.f.aj r7 = (com.tkay.core.common.f.aj) r7
            com.tkay.core.common.l.g.a(r0, r7, r4)
            int r6 = r6 + 1
            goto L48
        L56:
            if (r1 == 0) goto L5d
            int r2 = r1.size()
            goto L5e
        L5d:
            r2 = r3
        L5e:
            if (r2 <= 0) goto Lc7
            java.util.Iterator r1 = r1.iterator()
        L64:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto Lc7
            java.lang.Object r2 = r1.next()
            com.tkay.core.common.f.aj r2 = (com.tkay.core.common.f.aj) r2
            com.tkay.core.common.a r5 = com.tkay.core.common.a.a()
            com.tkay.core.common.f.a r5 = r5.a(r13, r2)
            r6 = 3
            if (r5 == 0) goto L8a
            com.tkay.core.api.TYBaseAdAdapter r5 = r5.e()     // Catch: java.lang.Exception -> L8a
            com.tkay.core.common.f.aj r5 = r5.getUnitGroupInfo()     // Catch: java.lang.Exception -> L8a
            r2.a(r5, r3, r6, r4)     // Catch: java.lang.Exception -> L8a
            com.tkay.core.common.l.g.a(r0, r2, r4)     // Catch: java.lang.Exception -> L8a
            goto L64
        L8a:
            com.tkay.core.b.c r5 = com.tkay.core.b.c.a()
            com.tkay.core.common.f.l r5 = r5.a(r2)
            if (r5 == 0) goto L9c
            r6 = 2
            r2.a(r5, r3, r6, r4)
            com.tkay.core.common.l.g.a(r0, r2, r4)
            goto L64
        L9c:
            boolean r5 = android.text.TextUtils.isEmpty(r12)
            if (r5 != 0) goto L64
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.h> r5 = r10.d
            java.lang.Object r5 = r5.get(r12)
            com.tkay.core.common.h r5 = (com.tkay.core.common.h) r5
            r7 = 0
            if (r5 == 0) goto Lbe
            java.lang.String r8 = r2.t()
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r9 = r5.D
            if (r9 == 0) goto Lbe
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r5 = r5.D
            java.lang.Object r5 = r5.get(r8)
            r7 = r5
            com.tkay.core.common.f.aj r7 = (com.tkay.core.common.f.aj) r7
        Lbe:
            if (r7 == 0) goto L64
            r2.a(r7, r3, r6, r4)
            com.tkay.core.common.l.g.a(r0, r2, r4)
            goto L64
        Lc7:
            com.tkay.core.common.x r1 = com.tkay.core.common.x.a()
            r1.a(r13, r12, r11, r0)
            return
    }

    private static void a(com.tkay.core.c.d r0, java.util.List r1, java.util.List r2, java.util.List r3, com.tkay.core.common.f.d r4) {
            if (r1 == 0) goto L8
            int r1 = r1.size()
            if (r1 != 0) goto L19
        L8:
            if (r2 == 0) goto L10
            int r1 = r2.size()
            if (r1 != 0) goto L19
        L10:
            if (r3 == 0) goto L1a
            int r1 = r3.size()
            if (r1 != 0) goto L19
            goto L1a
        L19:
            return
        L1a:
            r1 = 5
            r4.z(r1)
            int r0 = r0.i()
            r1 = 1
            java.lang.String r2 = "No Adsource."
            java.lang.String r3 = ""
            if (r0 != r1) goto L35
            com.tkay.core.common.e r0 = new com.tkay.core.common.e
            java.lang.String r1 = "4009"
            com.tkay.core.api.AdError r1 = com.tkay.core.api.ErrorCode.getErrorCode(r1, r3, r3)
            r0.<init>(r1, r2)
            throw r0
        L35:
            com.tkay.core.common.e r0 = new com.tkay.core.common.e
            java.lang.String r1 = "4004"
            com.tkay.core.api.AdError r1 = com.tkay.core.api.ErrorCode.getErrorCode(r1, r3, r3)
            r0.<init>(r1, r2)
            throw r0
    }

    private void a(com.tkay.core.common.f.aj r9, com.tkay.core.common.f.d r10) {
            r8 = this;
            com.tkay.core.common.g r7 = new com.tkay.core.common.g
            long r1 = r9.p()
            long r3 = r9.p()
            r0 = r7
            r5 = r9
            r6 = r10
            r0.<init>(r1, r3, r5, r6)
            r8.j = r7
            r7.start()
            return
    }

    static void a(com.tkay.core.common.f r24, android.content.Context r25, java.lang.String r26, java.lang.String r27, com.tkay.core.c.d r28, com.tkay.core.common.f.d r29, com.tkay.core.common.j r30) {
            r13 = r24
            r0 = r26
            r14 = r27
            r15 = r28
            r12 = r29
            r11 = r30
            com.tkay.core.common.a r1 = com.tkay.core.common.a.a()
            java.lang.String r2 = r13.c
            r1.a(r2, r14, r15)
            java.lang.String r1 = r28.ag()
            java.lang.String r2 = r28.ah()
            java.util.List r4 = com.tkay.core.c.d.a(r1, r2)
            java.lang.String r16 = r28.ai()
            java.lang.String r17 = r28.D()
            java.lang.String r18 = r28.aj()
            java.lang.String r19 = r28.B()
            java.lang.String r20 = r28.t()
            java.lang.String r21 = r28.ap()
            java.lang.String r22 = r28.aq()
            java.util.List r5 = com.tkay.core.c.d.a(r16, r17, r18, r19, r20, r21, r22)
            java.lang.String r1 = r28.o()
            java.util.List r1 = com.tkay.core.c.d.c(r1)
            java.lang.String r2 = r28.h()
            java.util.List r6 = com.tkay.core.c.d.d(r2)
            r10 = 0
            if (r1 == 0) goto L67
            int r2 = r1.size()
            r3 = r10
        L59:
            if (r3 >= r2) goto L67
            java.lang.Object r7 = r1.get(r3)
            com.tkay.core.common.f.aj r7 = (com.tkay.core.common.f.aj) r7
            com.tkay.core.common.l.g.a(r4, r7, r10)
            int r3 = r3 + 1
            goto L59
        L67:
            boolean r1 = r28.ay()     // Catch: java.lang.Throwable -> L28e com.tkay.core.common.e -> L295
            r2 = 5
            java.lang.String r8 = ""
            if (r1 == 0) goto L276
            if (r4 == 0) goto L78
            int r1 = r4.size()     // Catch: java.lang.Throwable -> L28e com.tkay.core.common.e -> L295
            if (r1 != 0) goto L8a
        L78:
            if (r5 == 0) goto L80
            int r1 = r5.size()     // Catch: java.lang.Throwable -> L28e com.tkay.core.common.e -> L295
            if (r1 != 0) goto L8a
        L80:
            if (r6 == 0) goto L250
            int r1 = r6.size()     // Catch: java.lang.Throwable -> L28e com.tkay.core.common.e -> L295
            if (r1 != 0) goto L8a
            goto L250
        L8a:
            com.tkay.core.a.a r1 = com.tkay.core.a.a.a(r25)     // Catch: java.lang.Throwable -> L28e com.tkay.core.common.e -> L295
            com.tkay.core.common.f.ad r7 = r1.a(r0)     // Catch: java.lang.Throwable -> L28e com.tkay.core.common.e -> L295
            long r1 = r28.ac()     // Catch: java.lang.Throwable -> L28e com.tkay.core.common.e -> L295
            long r16 = r28.ad()     // Catch: java.lang.Throwable -> L28e com.tkay.core.common.e -> L295
            if (r7 == 0) goto L9f
            int r3 = r7.d     // Catch: java.lang.Throwable -> L28e com.tkay.core.common.e -> L295
            goto La0
        L9f:
            r3 = r10
        La0:
            if (r7 == 0) goto La5
            int r10 = r7.c     // Catch: java.lang.Throwable -> L28e com.tkay.core.common.e -> L295
            goto La6
        La5:
            r10 = 0
        La6:
            r19 = -1
            int r21 = (r1 > r19 ? 1 : (r1 == r19 ? 0 : -1))
            if (r21 == 0) goto Lb4
            long r9 = (long) r10
            int r1 = (r9 > r1 ? 1 : (r9 == r1 ? 0 : -1))
            if (r1 >= 0) goto Lb2
            goto Lb4
        Lb2:
            r9 = 1
            goto Lbe
        Lb4:
            int r1 = (r16 > r19 ? 1 : (r16 == r19 ? 0 : -1))
            if (r1 == 0) goto Lcf
            long r1 = (long) r3
            int r1 = (r1 > r16 ? 1 : (r1 == r16 ? 0 : -1))
            if (r1 >= 0) goto Lb2
            goto Lcf
        Lbe:
            r12.z(r9)     // Catch: java.lang.Throwable -> L248 com.tkay.core.common.e -> L24c
            com.tkay.core.common.e r0 = new com.tkay.core.common.e     // Catch: java.lang.Throwable -> L248 com.tkay.core.common.e -> L24c
            java.lang.String r1 = "2003"
            com.tkay.core.api.AdError r1 = com.tkay.core.api.ErrorCode.getErrorCode(r1, r8, r8)     // Catch: java.lang.Throwable -> L248 com.tkay.core.common.e -> L24c
            java.lang.String r2 = "Capping."
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L248 com.tkay.core.common.e -> L24c
            throw r0     // Catch: java.lang.Throwable -> L248 com.tkay.core.common.e -> L24c
        Lcf:
            r9 = 1
            com.tkay.core.a.c.a()     // Catch: java.lang.Throwable -> L248 com.tkay.core.common.e -> L24c
            java.lang.String r1 = r29.W()     // Catch: java.lang.Throwable -> L248 com.tkay.core.common.e -> L24c
            boolean r1 = com.tkay.core.a.c.a(r1, r15)     // Catch: java.lang.Throwable -> L248 com.tkay.core.common.e -> L24c
            if (r1 != 0) goto L233
            java.util.ArrayList r10 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L248 com.tkay.core.common.e -> L24c
            r1 = 3
            r10.<init>(r1)     // Catch: java.lang.Throwable -> L248 com.tkay.core.common.e -> L24c
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L248 com.tkay.core.common.e -> L24c
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L248 com.tkay.core.common.e -> L24c
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L248 com.tkay.core.common.e -> L24c
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L248 com.tkay.core.common.e -> L24c
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L248 com.tkay.core.common.e -> L24c
            r9 = 2
            r1.<init>(r9)     // Catch: java.lang.Throwable -> L28e com.tkay.core.common.e -> L295
            int r9 = r11.d     // Catch: java.lang.Throwable -> L28e com.tkay.core.common.e -> L295
            r16 = r1
            r1 = r24
            r17 = r2
            r2 = r9
            r9 = r3
            r3 = r28
            r19 = r7
            r7 = r9
            r23 = r8
            r8 = r17
            r0 = r9
            r14 = 1
            r9 = r16
            r18 = r10
            r11 = r19
            r12 = r29
            r1.a(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)     // Catch: java.lang.Throwable -> L227 com.tkay.core.common.e -> L22d
            java.util.ArrayList r12 = new java.util.ArrayList
            r12.<init>(r14)
            r10 = r29
            r9 = r17
            r13.a(r0, r9, r10, r12)
            r1 = r16
            r13.a(r0, r1, r10, r12)
            java.util.List r0 = com.tkay.core.common.l.g.a(r0)
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r2.addAll(r0)
            r3 = r18
            r2.addAll(r3)
            com.tkay.core.common.x r3 = com.tkay.core.common.x.a()
            r6 = r26
            r5 = r27
            r4 = r14
            r3.a(r6, r5, r15, r2)
            int r2 = r12.size()
            if (r2 <= 0) goto L149
            r8 = r4
            goto L14a
        L149:
            r8 = 0
        L14a:
            if (r8 != 0) goto L15b
            int r2 = r9.size()
            if (r2 != 0) goto L15b
            com.tkay.core.common.x r2 = com.tkay.core.common.x.a()
            r2.a(r6, r5)
            r2 = r4
            goto L15c
        L15b:
            r2 = 0
        L15c:
            if (r2 == 0) goto L17d
            int r3 = r0.size()
            if (r3 != 0) goto L17d
            int r3 = r1.size()
            if (r3 != 0) goto L17d
            java.lang.String r0 = "4005"
            r1 = r23
            com.tkay.core.api.AdError r0 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r1, r1)
            r1 = 6
            r10.z(r1)
            r13.a(r4, r10, r0)
            r3 = 0
            r13.f = r3
            return
        L17d:
            r3 = 0
            com.tkay.core.a.b r7 = com.tkay.core.a.b.a()
            android.content.Context r11 = r13.b
            r7.b(r11, r6, r15)
            r10.a(r4)
            android.content.Context r4 = r13.b
            com.tkay.core.common.k.a r4 = com.tkay.core.common.k.a.a(r4)
            r7 = 10
            r4.a(r7, r10)
            com.tkay.core.common.v r4 = com.tkay.core.common.v.a()
            java.lang.String r7 = r13.c
            java.util.Map r4 = r4.b(r7)
            android.content.Context r7 = r13.b
            com.tkay.core.common.y r7 = com.tkay.core.common.y.a(r7)
            java.util.Map<java.lang.String, com.tkay.core.common.f.am> r11 = r7.a
            if (r11 == 0) goto L1b2
            java.util.Map<java.lang.String, com.tkay.core.common.f.am> r7 = r7.a
            java.lang.Object r7 = r7.remove(r6)
            com.tkay.core.common.f.am r7 = (com.tkay.core.common.f.am) r7
            goto L1b3
        L1b2:
            r7 = 0
        L1b3:
            r11 = r7
            android.content.Context r7 = r13.b
            com.tkay.core.common.w r7 = com.tkay.core.common.w.a(r7)
            com.tkay.core.common.f.ae r14 = r7.a(r6, r5)
            r7 = r30
            com.tkay.core.common.h r3 = r13.a(r7)
            r3.h = r4
            r3.i = r10
            r3.a(r7)
            com.tkay.core.common.b.b r4 = r7.e
            r3.a(r4)
            r3.R = r1
            r13.g = r5
            com.tkay.core.common.m.g r1 = new com.tkay.core.common.m.g
            r1.<init>()
            r1.a = r6
            r1.b = r5
            r1.c = r15
            r1.d = r0
            r1.e = r2
            int r4 = r29.S()
            r1.f = r4
            r1.g = r11
            r1.h = r14
            r3.a(r1)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.h> r1 = r13.d
            r1.put(r5, r3)
            r3.b()
            r1 = 0
            r13.f = r1
            if (r2 != 0) goto L226
            com.tkay.core.common.l.b.a r4 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.f$3 r3 = new com.tkay.core.common.f$3
            r1 = r3
            r2 = r24
            r13 = r3
            r3 = r25
            r15 = r4
            r4 = r30
            r5 = r27
            r6 = r26
            r7 = r28
            r10 = r29
            r16 = r12
            r12 = r14
            r14 = r13
            r13 = r16
            r16 = r15
            r15 = r14
            r14 = r0
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14)
            r0 = r16
            r0.b(r15)
        L226:
            return
        L227:
            r0 = move-exception
            r10 = r29
            r4 = r14
            goto L291
        L22d:
            r0 = move-exception
            r10 = r29
            r4 = r14
            goto L298
        L233:
            r1 = r8
            r4 = r9
            r10 = r12
            r0 = 2
            r10.z(r0)     // Catch: java.lang.Throwable -> L28a com.tkay.core.common.e -> L28c
            com.tkay.core.common.e r0 = new com.tkay.core.common.e     // Catch: java.lang.Throwable -> L28a com.tkay.core.common.e -> L28c
            java.lang.String r2 = "2004"
            com.tkay.core.api.AdError r1 = com.tkay.core.api.ErrorCode.getErrorCode(r2, r1, r1)     // Catch: java.lang.Throwable -> L28a com.tkay.core.common.e -> L28c
            java.lang.String r2 = "Pacing."
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L28a com.tkay.core.common.e -> L28c
            throw r0     // Catch: java.lang.Throwable -> L28a com.tkay.core.common.e -> L28c
        L248:
            r0 = move-exception
            r4 = r9
            r10 = r12
            goto L291
        L24c:
            r0 = move-exception
            r4 = r9
            r10 = r12
            goto L298
        L250:
            r1 = r8
            r10 = r12
            r4 = 1
            r10.z(r2)     // Catch: java.lang.Throwable -> L28a com.tkay.core.common.e -> L28c
            int r0 = r28.i()     // Catch: java.lang.Throwable -> L28a com.tkay.core.common.e -> L28c
            java.lang.String r2 = "No Adsource."
            if (r0 != r4) goto L26a
            com.tkay.core.common.e r0 = new com.tkay.core.common.e     // Catch: java.lang.Throwable -> L28a com.tkay.core.common.e -> L28c
            java.lang.String r3 = "4009"
            com.tkay.core.api.AdError r1 = com.tkay.core.api.ErrorCode.getErrorCode(r3, r1, r1)     // Catch: java.lang.Throwable -> L28a com.tkay.core.common.e -> L28c
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L28a com.tkay.core.common.e -> L28c
            throw r0     // Catch: java.lang.Throwable -> L28a com.tkay.core.common.e -> L28c
        L26a:
            com.tkay.core.common.e r0 = new com.tkay.core.common.e     // Catch: java.lang.Throwable -> L28a com.tkay.core.common.e -> L28c
            java.lang.String r3 = "4004"
            com.tkay.core.api.AdError r1 = com.tkay.core.api.ErrorCode.getErrorCode(r3, r1, r1)     // Catch: java.lang.Throwable -> L28a com.tkay.core.common.e -> L28c
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L28a com.tkay.core.common.e -> L28c
            throw r0     // Catch: java.lang.Throwable -> L28a com.tkay.core.common.e -> L28c
        L276:
            r1 = r8
            r10 = r12
            r4 = 1
            r10.z(r2)     // Catch: java.lang.Throwable -> L28a com.tkay.core.common.e -> L28c
            com.tkay.core.common.e r0 = new com.tkay.core.common.e     // Catch: java.lang.Throwable -> L28a com.tkay.core.common.e -> L28c
            java.lang.String r2 = "4003"
            com.tkay.core.api.AdError r1 = com.tkay.core.api.ErrorCode.getErrorCode(r2, r1, r1)     // Catch: java.lang.Throwable -> L28a com.tkay.core.common.e -> L28c
            java.lang.String r2 = "Strategy is close."
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L28a com.tkay.core.common.e -> L28c
            throw r0     // Catch: java.lang.Throwable -> L28a com.tkay.core.common.e -> L28c
        L28a:
            r0 = move-exception
            goto L291
        L28c:
            r0 = move-exception
            goto L298
        L28e:
            r0 = move-exception
            r10 = r12
            r4 = 1
        L291:
            r13.a(r4, r10, r0)
            return
        L295:
            r0 = move-exception
            r10 = r12
            r4 = 1
        L298:
            r13.a(r4, r10, r0)
            return
    }

    static void a(com.tkay.core.common.f r10, com.tkay.core.c.d r11, java.lang.String r12, java.lang.String r13) {
            java.lang.String r0 = r11.ag()
            java.lang.String r1 = r11.ah()
            java.util.List r0 = com.tkay.core.c.d.a(r0, r1)
            java.lang.String r1 = r11.ai()
            java.lang.String r2 = r11.D()
            java.lang.String r3 = r11.aj()
            java.lang.String r4 = r11.B()
            java.lang.String r5 = r11.t()
            java.lang.String r6 = r11.ap()
            java.lang.String r7 = r11.aq()
            java.util.List r1 = com.tkay.core.c.d.a(r1, r2, r3, r4, r5, r6, r7)
            java.lang.String r2 = r11.h()
            java.util.List r2 = com.tkay.core.c.d.d(r2)
            r1.addAll(r2)
            java.lang.String r2 = r11.o()
            java.util.List r2 = com.tkay.core.c.d.c(r2)
            r3 = 0
            r4 = 1
            if (r2 == 0) goto L56
            int r5 = r2.size()
            r6 = r3
        L48:
            if (r6 >= r5) goto L56
            java.lang.Object r7 = r2.get(r6)
            com.tkay.core.common.f.aj r7 = (com.tkay.core.common.f.aj) r7
            com.tkay.core.common.l.g.a(r0, r7, r4)
            int r6 = r6 + 1
            goto L48
        L56:
            if (r1 == 0) goto L5d
            int r2 = r1.size()
            goto L5e
        L5d:
            r2 = r3
        L5e:
            if (r2 <= 0) goto Lc7
            java.util.Iterator r1 = r1.iterator()
        L64:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto Lc7
            java.lang.Object r2 = r1.next()
            com.tkay.core.common.f.aj r2 = (com.tkay.core.common.f.aj) r2
            com.tkay.core.common.a r5 = com.tkay.core.common.a.a()
            com.tkay.core.common.f.a r5 = r5.a(r13, r2)
            r6 = 3
            if (r5 == 0) goto L8a
            com.tkay.core.api.TYBaseAdAdapter r5 = r5.e()     // Catch: java.lang.Exception -> L8a
            com.tkay.core.common.f.aj r5 = r5.getUnitGroupInfo()     // Catch: java.lang.Exception -> L8a
            r2.a(r5, r3, r6, r4)     // Catch: java.lang.Exception -> L8a
            com.tkay.core.common.l.g.a(r0, r2, r4)     // Catch: java.lang.Exception -> L8a
            goto L64
        L8a:
            com.tkay.core.b.c r5 = com.tkay.core.b.c.a()
            com.tkay.core.common.f.l r5 = r5.a(r2)
            if (r5 == 0) goto L9c
            r6 = 2
            r2.a(r5, r3, r6, r4)
            com.tkay.core.common.l.g.a(r0, r2, r4)
            goto L64
        L9c:
            boolean r5 = android.text.TextUtils.isEmpty(r12)
            if (r5 != 0) goto L64
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.h> r5 = r10.d
            java.lang.Object r5 = r5.get(r12)
            com.tkay.core.common.h r5 = (com.tkay.core.common.h) r5
            r7 = 0
            if (r5 == 0) goto Lbe
            java.lang.String r8 = r2.t()
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r9 = r5.D
            if (r9 == 0) goto Lbe
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r5 = r5.D
            java.lang.Object r5 = r5.get(r8)
            r7 = r5
            com.tkay.core.common.f.aj r7 = (com.tkay.core.common.f.aj) r7
        Lbe:
            if (r7 == 0) goto L64
            r2.a(r7, r3, r6, r4)
            com.tkay.core.common.l.g.a(r0, r2, r4)
            goto L64
        Lc7:
            com.tkay.core.common.x r10 = com.tkay.core.common.x.a()
            r10.a(r13, r12, r11, r0)
            return
    }

    static void a(com.tkay.core.common.f r8, com.tkay.core.common.f.aj r9, com.tkay.core.common.f.d r10) {
            com.tkay.core.common.g r7 = new com.tkay.core.common.g
            long r1 = r9.p()
            long r3 = r9.p()
            r0 = r7
            r5 = r9
            r6 = r10
            r0.<init>(r1, r3, r5, r6)
            r8.j = r7
            r7.start()
            return
    }

    static void a(com.tkay.core.common.f r1, com.tkay.core.common.f.d r2, com.tkay.core.api.AdError r3) {
            r0 = 1
            r1.a(r0, r2, r3)
            return
    }

    static void a(com.tkay.core.common.f r0, boolean r1, com.tkay.core.common.f.d r2, java.lang.Throwable r3) {
            r0.a(r1, r2, r3)
            return
    }

    private void a(java.util.List<com.tkay.core.common.f.aj> r12, java.util.List<com.tkay.core.common.f.aj> r13, com.tkay.core.common.f.d r14, java.util.List<com.tkay.core.common.f.aj> r15) {
            r11 = this;
            int r0 = r13.size()
            r1 = 1
            int r0 = r0 - r1
            r2 = 0
            r3 = r2
        L8:
            r4 = 7
            if (r0 < 0) goto L7c
            java.lang.Object r5 = r13.get(r0)
            com.tkay.core.common.f.aj r5 = (com.tkay.core.common.f.aj) r5
            boolean r6 = r5.Z()
            if (r6 == 0) goto L1a
            r15.add(r5)
        L1a:
            int r6 = r5.m()
            r7 = 2
            if (r6 == r7) goto L79
            com.tkay.core.common.a r6 = com.tkay.core.common.a.a()
            java.lang.String r8 = r11.c
            com.tkay.core.common.f.a r6 = r6.a(r8, r5)
            r8 = 0
            if (r6 == 0) goto L3b
            com.tkay.core.api.TYBaseAdAdapter r6 = r6.e()
            com.tkay.core.common.f.aj r6 = r6.getUnitGroupInfo()
            r8 = 3
            r5.a(r6, r2, r8, r1)
            r8 = r5
        L3b:
            if (r8 != 0) goto L6a
            com.tkay.core.b.c r6 = com.tkay.core.b.c.a()     // Catch: java.lang.Throwable -> L6a
            com.tkay.core.common.f.l r6 = r6.a(r5)     // Catch: java.lang.Throwable -> L6a
            if (r6 == 0) goto L52
            boolean r9 = r6.a()     // Catch: java.lang.Throwable -> L6a
            if (r9 != 0) goto L52
            r5.a(r6, r2, r7, r1)     // Catch: java.lang.Throwable -> L6a
            r8 = r5
            goto L6a
        L52:
            if (r6 == 0) goto L6a
            com.tkay.core.common.f.q r7 = new com.tkay.core.common.f.q     // Catch: java.lang.Throwable -> L6a
            r7.<init>()     // Catch: java.lang.Throwable -> L6a
            r7.a = r1     // Catch: java.lang.Throwable -> L6a
            double r9 = r6.getSortPrice()     // Catch: java.lang.Throwable -> L6a
            r7.b = r9     // Catch: java.lang.Throwable -> L6a
            r7.e = r14     // Catch: java.lang.Throwable -> L6a
            r7.c = r5     // Catch: java.lang.Throwable -> L6a
            r7.d = r5     // Catch: java.lang.Throwable -> L6a
            r6.a(r7, r1)     // Catch: java.lang.Throwable -> L6a
        L6a:
            if (r8 == 0) goto L79
            int r6 = r5.l()     // Catch: java.lang.Exception -> L79
            if (r6 != r4) goto L73
            r3 = r1
        L73:
            r13.remove(r0)     // Catch: java.lang.Exception -> L79
            com.tkay.core.common.l.g.a(r12, r5, r2)     // Catch: java.lang.Exception -> L79
        L79:
            int r0 = r0 + (-1)
            goto L8
        L7c:
            if (r3 == 0) goto L97
            int r12 = r13.size()
            int r12 = r12 - r1
        L83:
            if (r12 < 0) goto L97
            java.lang.Object r14 = r13.get(r12)
            com.tkay.core.common.f.aj r14 = (com.tkay.core.common.f.aj) r14
            int r14 = r14.l()
            if (r14 != r4) goto L94
            r13.remove(r12)
        L94:
            int r12 = r12 + (-1)
            goto L83
        L97:
            return
    }

    private void a(boolean r2, com.tkay.core.common.f.d r3, com.tkay.core.api.AdError r4) {
            r1 = this;
            r0 = 0
            r1.f = r0
            r1.a(r4)
            r3.a(r0)
            if (r2 == 0) goto L19
            android.content.Context r2 = r1.b
            com.tkay.core.common.k.a r2 = com.tkay.core.common.k.a.a(r2)
            r0 = 10
            r2.a(r0, r3)
            com.tkay.core.common.k.c.a(r3, r4)
        L19:
            return
    }

    private void a(boolean r3, com.tkay.core.common.f.d r4, java.lang.Throwable r5) {
            r2 = this;
            boolean r0 = r5 instanceof com.tkay.core.common.e
            if (r0 == 0) goto L9
            com.tkay.core.common.e r5 = (com.tkay.core.common.e) r5
            com.tkay.core.api.AdError r5 = r5.a
            goto L15
        L9:
            java.lang.String r5 = r5.getMessage()
            java.lang.String r0 = "9999"
            java.lang.String r1 = ""
            com.tkay.core.api.AdError r5 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r1, r5)
        L15:
            r2.a(r3, r4, r5)
            return
    }

    private boolean a(int r16, com.tkay.core.c.d r17, java.lang.String r18, com.tkay.core.common.f.d r19, com.tkay.core.common.f.ad r20, com.tkay.core.common.f.aj r21, java.util.concurrent.atomic.AtomicInteger r22) {
            r15 = this;
            r0 = r15
            r1 = r20
            r4 = r21
            com.tkay.core.common.f.d r8 = r19.N()
            r2 = 0
            com.tkay.core.common.l.s.a(r8, r4, r2, r2)
            if (r1 == 0) goto L18
            java.lang.String r3 = r21.t()
            com.tkay.core.common.f.ad$a r1 = r1.a(r3)
            goto L19
        L18:
            r1 = 0
        L19:
            if (r1 == 0) goto L1f
            int r3 = r1.e
            r5 = r3
            goto L20
        L1f:
            r5 = r2
        L20:
            if (r1 == 0) goto L26
            int r1 = r1.d
            r6 = r1
            goto L27
        L26:
            r6 = r2
        L27:
            int r1 = r21.e()
            java.lang.String r7 = "2003"
            r3 = -5
            r9 = -1
            r10 = 2
            java.lang.String r11 = "Out of Cap"
            java.lang.String r12 = ""
            r13 = 1
            if (r1 == r9) goto L56
            int r1 = r21.e()
            if (r6 < r1) goto L56
            r4.g(r3)
            r4.h(r11)
            java.lang.String r3 = "Out of Cap"
            r1 = r18
            r2 = r19
            r4 = r21
            com.tkay.core.common.l.n.a(r1, r2, r3, r4, r5, r6)
            com.tkay.core.api.AdError r1 = com.tkay.core.api.ErrorCode.getErrorCode(r7, r12, r11)
            com.tkay.core.common.k.c.a(r8, r10, r1)
            return r13
        L56:
            int r1 = r21.f()
            if (r1 == r9) goto L7b
            int r1 = r21.f()
            if (r5 < r1) goto L7b
            r4.g(r3)
            r4.h(r11)
            java.lang.String r3 = "Out of Cap"
            r1 = r18
            r2 = r19
            r4 = r21
            com.tkay.core.common.l.n.a(r1, r2, r3, r4, r5, r6)
            com.tkay.core.api.AdError r1 = com.tkay.core.api.ErrorCode.getErrorCode(r7, r12, r11)
            com.tkay.core.common.k.c.a(r8, r10, r1)
            return r13
        L7b:
            com.tkay.core.a.c r1 = com.tkay.core.a.c.a()
            r3 = r18
            boolean r1 = r1.a(r3, r4)
            r7 = -6
            if (r1 == 0) goto La7
            r4.g(r7)
            java.lang.String r7 = "Out of Pacing"
            r4.h(r7)
            java.lang.String r9 = "Out of Pacing"
            r1 = r18
            r2 = r19
            r3 = r9
            r4 = r21
            com.tkay.core.common.l.n.a(r1, r2, r3, r4, r5, r6)
            r1 = 3
            java.lang.String r2 = "2004"
            com.tkay.core.api.AdError r2 = com.tkay.core.api.ErrorCode.getErrorCode(r2, r12, r7)
            com.tkay.core.common.k.c.a(r8, r1, r2)
            return r13
        La7:
            com.tkay.core.common.c r1 = com.tkay.core.common.c.a()
            boolean r1 = r1.a(r4)
            java.lang.String r9 = "2007"
            r11 = 4
            if (r1 == 0) goto Ld0
            r4.g(r7)
            java.lang.String r7 = "Request fail in pacing"
            r4.h(r7)
            java.lang.String r10 = "Request fail in pacing"
            r1 = r18
            r2 = r19
            r3 = r10
            r4 = r21
            com.tkay.core.common.l.n.a(r1, r2, r3, r4, r5, r6)
            com.tkay.core.api.AdError r1 = com.tkay.core.api.ErrorCode.getErrorCode(r9, r12, r7)
            com.tkay.core.common.k.c.a(r8, r11, r1)
            return r13
        Ld0:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            java.lang.String r7 = r0.c
            java.util.List r7 = r1.l(r7)
            r1 = -8
            if (r7 == 0) goto L106
            java.lang.String r14 = r21.t()
            boolean r14 = r7.contains(r14)
            if (r14 == 0) goto L106
            r4.g(r1)
            java.lang.String r9 = "Request fail in filter list"
            r4.h(r9)
            java.lang.String r10 = "Request fail in filter list"
            r1 = r18
            r2 = r19
            r3 = r10
            r4 = r21
            com.tkay.core.common.l.n.a(r1, r2, r3, r4, r5, r6, r7)
            r1 = 5
            java.lang.String r2 = "2010"
            com.tkay.core.api.AdError r2 = com.tkay.core.api.ErrorCode.getErrorCode(r2, r12, r9)
            com.tkay.core.common.k.c.a(r8, r1, r2)
            return r13
        L106:
            com.tkay.core.common.b.m r7 = com.tkay.core.common.b.m.a()
            java.lang.String r14 = r0.c
            java.util.List r7 = r7.m(r14)
            if (r7 == 0) goto L140
            int r14 = r21.c()
            java.lang.String r14 = java.lang.String.valueOf(r14)
            boolean r14 = r7.contains(r14)
            if (r14 == 0) goto L140
            r4.g(r1)
            java.lang.String r9 = "Filter by network firm id."
            r4.h(r9)
            java.lang.String r10 = "Filter by network firm id."
            r1 = r18
            r2 = r19
            r3 = r10
            r4 = r21
            com.tkay.core.common.l.n.a(r1, r2, r3, r4, r5, r6, r7)
            r1 = 9
            java.lang.String r2 = "2013"
            com.tkay.core.api.AdError r2 = com.tkay.core.api.ErrorCode.getErrorCode(r2, r12, r9)
            com.tkay.core.common.k.c.a(r8, r1, r2)
            return r13
        L140:
            boolean r7 = r21.j()
            if (r7 == 0) goto L1ac
            com.tkay.core.common.c r7 = com.tkay.core.common.c.a()
            boolean r7 = r7.b(r4)
            r14 = -7
            if (r7 == 0) goto L16d
            r4.g(r14)
            java.lang.String r7 = "Bid fail in pacing"
            r4.h(r7)
            java.lang.String r10 = "Bid fail in pacing"
            r1 = r18
            r2 = r19
            r3 = r10
            r4 = r21
            com.tkay.core.common.l.n.a(r1, r2, r3, r4, r5, r6)
            com.tkay.core.api.AdError r1 = com.tkay.core.api.ErrorCode.getErrorCode(r9, r12, r7)
            com.tkay.core.common.k.c.a(r8, r11, r1)
            return r13
        L16d:
            int r7 = r21.W()
            if (r7 == r13) goto L1ac
            int r7 = r21.l()
            if (r7 != r10) goto L1ac
            com.tkay.core.common.v r7 = com.tkay.core.common.v.a()
            java.lang.String r9 = r0.c
            com.tkay.core.common.f.c r7 = r7.c(r9)
            if (r7 == 0) goto L1ac
            boolean r7 = r7.a(r4)
            if (r7 == 0) goto L1ac
            r4.g(r14)
            java.lang.String r7 = "Can't Load On Showing"
            r4.h(r7)
            java.lang.String r8 = "Can't Load On Showing"
            r1 = r18
            r2 = r19
            r3 = r8
            r4 = r21
            com.tkay.core.common.l.n.a(r1, r2, r3, r4, r5, r6)
            r1 = 7
            java.lang.String r2 = "2011"
            com.tkay.core.api.AdError r2 = com.tkay.core.api.ErrorCode.getErrorCode(r2, r12, r7)
            r7 = r19
            com.tkay.core.common.k.c.a(r7, r1, r2)
            return r13
        L1ac:
            r7 = r19
            com.tkay.core.common.c r9 = com.tkay.core.common.c.a()
            r10 = r16
            r11 = r17
            boolean r9 = r9.a(r10, r11, r4)
            if (r9 == 0) goto L1df
            r22.decrementAndGet()
            r4.g(r1)
            java.lang.String r9 = "Error Code Request fail in pacing"
            r4.h(r9)
            java.lang.String r10 = "Error Code Request fail in pacing"
            r1 = r18
            r2 = r19
            r3 = r10
            r4 = r21
            com.tkay.core.common.l.n.a(r1, r2, r3, r4, r5, r6)
            r1 = 10
            java.lang.String r2 = "2014"
            com.tkay.core.api.AdError r2 = com.tkay.core.api.ErrorCode.getErrorCode(r2, r12, r9)
            com.tkay.core.common.k.c.a(r8, r1, r2)
            return r13
        L1df:
            return r2
    }

    static boolean a(com.tkay.core.common.f r0, boolean r1) {
            r0.q = r1
            return r1
    }

    private boolean a(boolean r23, boolean r24, java.util.Map<java.lang.String, java.lang.Object> r25) {
            r22 = this;
            r0 = r22
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            com.tkay.core.c.e r1 = com.tkay.core.c.e.a(r1)
            java.lang.String r2 = r0.c
            com.tkay.core.c.d r1 = r1.a(r2)
            java.lang.String r2 = r0.g
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            java.lang.String r3 = ""
            if (r2 == 0) goto L20
            r12 = r3
            goto L23
        L20:
            java.lang.String r2 = r0.g
            r12 = r2
        L23:
            if (r1 != 0) goto L31
            android.content.Context r1 = r0.b
            com.tkay.core.c.e r1 = com.tkay.core.c.e.a(r1)
            java.lang.String r2 = r0.c
            com.tkay.core.c.d r1 = r1.a(r2)
        L31:
            r2 = 1
            if (r1 != 0) goto L64
            java.lang.String r14 = r0.c
            r16 = 0
            r18 = -1
            r19 = 0
            r20 = 0
            java.lang.String r13 = ""
            java.lang.String r15 = ""
            java.lang.String r17 = ""
            r21 = r25
            com.tkay.core.common.f.d r4 = com.tkay.core.common.l.s.a(r13, r14, r15, r16, r17, r18, r19, r20, r21)
            if (r23 == 0) goto L51
            r1 = 4
            com.tkay.core.common.k.c.a(r4, r1, r3, r12)
            goto L63
        L51:
            if (r24 == 0) goto L63
            r5 = 0
            r6 = 4
            r7 = -1
            r9 = -1
            r13 = 0
            java.lang.String r8 = ""
            java.lang.String r10 = ""
            java.lang.String r11 = ""
            java.lang.String r14 = ""
            com.tkay.core.common.k.c.a(r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14)
        L63:
            return r2
        L64:
            com.tkay.core.a.c.a()
            java.lang.String r4 = r0.c
            boolean r4 = com.tkay.core.a.c.a(r4, r1)
            if (r4 == 0) goto La1
            java.lang.String r14 = r0.c
            int r18 = r1.m()
            r19 = 0
            r20 = 0
            java.lang.String r13 = ""
            java.lang.String r15 = ""
            java.lang.String r17 = ""
            r16 = r1
            r21 = r25
            com.tkay.core.common.f.d r4 = com.tkay.core.common.l.s.a(r13, r14, r15, r16, r17, r18, r19, r20, r21)
            if (r23 == 0) goto L8e
            r1 = 3
            com.tkay.core.common.k.c.a(r4, r1, r3, r12)
            goto La0
        L8e:
            if (r24 == 0) goto La0
            r5 = 0
            r6 = 3
            r7 = -1
            r9 = -1
            r13 = 0
            java.lang.String r8 = ""
            java.lang.String r10 = ""
            java.lang.String r11 = ""
            java.lang.String r14 = ""
            com.tkay.core.common.k.c.a(r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14)
        La0:
            return r2
        La1:
            android.content.Context r4 = r0.b
            com.tkay.core.a.a r4 = com.tkay.core.a.a.a(r4)
            java.lang.String r5 = r0.c
            boolean r4 = r4.a(r1, r5)
            if (r4 == 0) goto Le1
            java.lang.String r14 = r0.c
            int r18 = r1.m()
            r19 = 0
            r20 = 0
            java.lang.String r13 = ""
            java.lang.String r15 = ""
            java.lang.String r17 = ""
            r16 = r1
            r21 = r25
            com.tkay.core.common.f.d r4 = com.tkay.core.common.l.s.a(r13, r14, r15, r16, r17, r18, r19, r20, r21)
            if (r23 == 0) goto Lce
            r1 = 2
            com.tkay.core.common.k.c.a(r4, r1, r3, r12)
            goto Le0
        Lce:
            if (r24 == 0) goto Le0
            r5 = 0
            r6 = 2
            r7 = -1
            r9 = -1
            r13 = 0
            java.lang.String r8 = ""
            java.lang.String r10 = ""
            java.lang.String r11 = ""
            java.lang.String r14 = ""
            com.tkay.core.common.k.c.a(r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14)
        Le0:
            return r2
        Le1:
            r1 = 0
            return r1
    }

    static java.util.List b(com.tkay.core.common.f r0) {
            java.util.List<com.tkay.core.common.b.a> r0 = r0.r
            return r0
    }

    private static void b(com.tkay.core.c.d r1, com.tkay.core.common.f.d r2) {
            com.tkay.core.a.c.a()
            java.lang.String r0 = r2.W()
            boolean r1 = com.tkay.core.a.c.a(r0, r1)
            if (r1 != 0) goto Le
            return
        Le:
            r1 = 2
            r2.z(r1)
            com.tkay.core.common.e r1 = new com.tkay.core.common.e
            java.lang.String r2 = ""
            java.lang.String r0 = "2004"
            com.tkay.core.api.AdError r2 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r2, r2)
            java.lang.String r0 = "Pacing."
            r1.<init>(r2, r0)
            throw r1
    }

    static boolean c(com.tkay.core.common.f r0) {
            boolean r0 = r0.o
            return r0
    }

    static long d(com.tkay.core.common.f r2) {
            long r0 = r2.p
            return r0
    }

    static boolean e(com.tkay.core.common.f r0) {
            boolean r0 = r0.q
            return r0
    }

    static boolean f(com.tkay.core.common.f r1) {
            r0 = 0
            r1.o = r0
            return r0
    }

    static long g(com.tkay.core.common.f r2) {
            r0 = 0
            r2.p = r0
            return r0
    }

    public com.tkay.core.api.TYAdStatusInfo a(android.content.Context r5, java.util.Map<java.lang.String, java.lang.Object> r6) {
            r4 = this;
            boolean r0 = r4.e()
            r1 = 0
            r2 = 1
            com.tkay.core.common.f.a r5 = r4.a(r5, r2, r1, r6)
            if (r5 == 0) goto L26
            com.tkay.core.api.BaseAd r6 = r5.f()
            com.tkay.core.api.TYBaseAdAdapter r3 = r5.e()
            if (r6 == 0) goto L1b
            com.tkay.core.common.b.i r6 = com.tkay.core.common.b.i.a(r6)
            goto L27
        L1b:
            if (r3 == 0) goto L26
            com.tkay.core.api.TYBaseAdAdapter r6 = r5.e()
            com.tkay.core.common.b.i r6 = com.tkay.core.common.b.i.a(r6)
            goto L27
        L26:
            r6 = 0
        L27:
            com.tkay.core.api.TYAdStatusInfo r3 = new com.tkay.core.api.TYAdStatusInfo
            if (r5 == 0) goto L2c
            r1 = r2
        L2c:
            r3.<init>(r0, r1, r6)
            return r3
    }

    public com.tkay.core.common.f.a a(android.content.Context r7, boolean r8, boolean r9, java.util.Map<java.lang.String, java.lang.Object> r10) {
            r6 = this;
            boolean r0 = r6.a(r9, r8, r10)
            if (r0 == 0) goto L8
            r7 = 0
            return r7
        L8:
            com.tkay.core.common.a r0 = com.tkay.core.common.a.a()
            java.lang.String r2 = r6.c
            r1 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            com.tkay.core.common.f.a r7 = r0.a(r1, r2, r3, r4, r5)
            return r7
    }

    public abstract com.tkay.core.common.h a(T r1);

    protected abstract java.lang.String a();

    public final java.util.List<com.tkay.core.api.TYAdInfo> a(android.content.Context r10) {
            r9 = this;
            r0 = 0
            r1 = 0
            boolean r0 = r9.a(r0, r0, r1)
            if (r0 == 0) goto L9
            return r1
        L9:
            com.tkay.core.common.a r2 = com.tkay.core.common.a.a()
            java.lang.String r4 = r9.c
            r5 = 0
            r6 = 0
            r7 = 1
            r8 = 0
            r3 = r10
            java.util.List r10 = r2.a(r3, r4, r5, r6, r7, r8)
            if (r10 == 0) goto L5b
            int r0 = r10.size()
            if (r0 <= 0) goto L5b
            java.util.ArrayList r0 = new java.util.ArrayList
            r2 = 3
            r0.<init>(r2)
            java.util.Iterator r10 = r10.iterator()
        L2a:
            boolean r2 = r10.hasNext()
            if (r2 == 0) goto L5a
            java.lang.Object r2 = r10.next()
            com.tkay.core.common.f.a r2 = (com.tkay.core.common.f.a) r2
            if (r2 == 0) goto L3d
            com.tkay.core.api.BaseAd r3 = r2.f()
            goto L3e
        L3d:
            r3 = r1
        L3e:
            if (r2 == 0) goto L45
            com.tkay.core.api.TYBaseAdAdapter r2 = r2.e()
            goto L46
        L45:
            r2 = r1
        L46:
            if (r3 == 0) goto L50
            com.tkay.core.common.b.i r2 = com.tkay.core.common.b.i.a(r3)
            r0.add(r2)
            goto L2a
        L50:
            if (r2 == 0) goto L2a
            com.tkay.core.common.b.i r2 = com.tkay.core.common.b.i.a(r2)
            r0.add(r2)
            goto L2a
        L5a:
            return r0
        L5b:
            return r1
    }

    protected final void a(android.content.Context r12, java.lang.String r13, java.lang.String r14, T r15, com.tkay.core.common.b.a r16) {
            r11 = this;
            r3 = r14
            r2 = r15
            com.tkay.core.common.v r0 = com.tkay.core.common.v.a()
            java.util.Map r8 = r0.b(r14)
            r0 = 1
            int[] r6 = new int[r0]
            r0 = 0
            r6[r0] = r0
            java.lang.String r1 = "ofm_tid_key"
            boolean r4 = r8.containsKey(r1)
            if (r4 == 0) goto L24
            java.lang.Object r1 = r8.get(r1)     // Catch: java.lang.Throwable -> L24
            java.lang.Integer r1 = (java.lang.Integer) r1     // Catch: java.lang.Throwable -> L24
            int r1 = r1.intValue()     // Catch: java.lang.Throwable -> L24
            r6[r0] = r1     // Catch: java.lang.Throwable -> L24
        L24:
            int r0 = r2.d
            if (r0 == 0) goto L2d
            int r0 = r2.d
            r1 = 3
            if (r0 != r1) goto L3d
        L2d:
            java.lang.Throwable r0 = new java.lang.Throwable
            r0.<init>()
            java.lang.StackTraceElement[] r0 = r0.getStackTrace()
            com.tkay.core.common.v r1 = com.tkay.core.common.v.a()
            r1.a(r14, r0)
        L3d:
            com.tkay.core.common.l.b.a r9 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.f$2 r10 = new com.tkay.core.common.f$2
            r0 = r10
            r1 = r11
            r2 = r15
            r3 = r14
            r4 = r16
            r5 = r12
            r7 = r13
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            r9.a(r10)
            return
    }

    public final void a(com.tkay.core.api.AdError r2) {
            r1 = this;
            com.tkay.core.common.b.a r0 = r1.i
            if (r0 == 0) goto L7
            r0.onAdLoadFail(r2)
        L7:
            return
    }

    public final void a(com.tkay.core.common.b.a r5) {
            r4 = this;
            java.lang.Object r0 = r4.s
            monitor-enter(r0)
            java.util.List<com.tkay.core.common.b.a> r1 = r4.r     // Catch: java.lang.Throwable -> L32
            if (r1 != 0) goto Le
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L32
            r1.<init>()     // Catch: java.lang.Throwable -> L32
            r4.r = r1     // Catch: java.lang.Throwable -> L32
        Le:
            if (r5 != 0) goto L12
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
            return
        L12:
            r1 = 0
            java.util.List<com.tkay.core.common.b.a> r2 = r4.r     // Catch: java.lang.Throwable -> L32
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L32
        L19:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L32
            if (r3 == 0) goto L29
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L32
            com.tkay.core.common.b.a r3 = (com.tkay.core.common.b.a) r3     // Catch: java.lang.Throwable -> L32
            if (r3 != r5) goto L19
            r1 = 1
            goto L19
        L29:
            if (r1 != 0) goto L30
            java.util.List<com.tkay.core.common.b.a> r1 = r4.r     // Catch: java.lang.Throwable -> L32
            r1.add(r5)     // Catch: java.lang.Throwable -> L32
        L30:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
            return
        L32:
            r5 = move-exception
            monitor-exit(r0)
            throw r5
    }

    public final void a(com.tkay.core.common.f.a r1) {
            r0 = this;
            boolean r1 = r1.c()
            if (r1 == 0) goto L9
            r1 = 0
            r0.e = r1
        L9:
            return
    }

    public final void a(java.lang.String r4) {
            r3 = this;
            android.content.Context r0 = r3.b
            com.tkay.core.c.e r0 = com.tkay.core.c.e.a(r0)
            java.lang.String r1 = r3.c
            com.tkay.core.c.d r0 = r0.a(r1)
            java.lang.String r0 = r0.V()
            boolean r4 = android.text.TextUtils.equals(r4, r0)
            r0 = 0
            if (r4 == 0) goto L29
            r4 = 1
            r3.e = r4
            long r1 = java.lang.System.currentTimeMillis()
            r3.m = r1
            r3.o = r0
            r1 = 0
            r3.p = r1
            r3.q = r0
            return
        L29:
            r3.e = r0
            return
    }

    public final void a(java.lang.String r2, double r3, com.tkay.core.common.f.aj r5) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.h> r0 = r1.d
            java.lang.Object r2 = r0.get(r2)
            com.tkay.core.common.h r2 = (com.tkay.core.common.h) r2
            if (r2 == 0) goto Ld
            r2.a(r3, r5)
        Ld:
            return
    }

    public void a(java.lang.String r1, com.tkay.core.common.b.a r2) {
            r0 = this;
            return
    }

    public final boolean a(com.tkay.core.api.TYAdStatusInfo r5) {
            r4 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.c.e r0 = com.tkay.core.c.e.a(r0)
            java.lang.String r1 = r4.c
            com.tkay.core.c.d r0 = r0.a(r1)
            int r1 = r4.e
            r2 = 0
            r3 = 1
            if (r1 != r3) goto L27
            boolean r1 = r4.d()
            if (r1 != 0) goto L27
            if (r5 == 0) goto L27
            boolean r5 = r5.isReady()
            if (r5 == 0) goto L27
            return r2
        L27:
            boolean r5 = r4.j()
            if (r5 != 0) goto L37
            if (r0 == 0) goto L36
            int r5 = r0.W()
            if (r5 != r3) goto L36
            goto L37
        L36:
            return r2
        L37:
            return r3
    }

    public boolean a(java.lang.String r1, java.lang.String r2, T r3, com.tkay.core.common.b.a r4) {
            r0 = this;
            r1 = 0
            return r1
    }

    public final void b() {
            r2 = this;
            android.content.Context r0 = r2.b
            com.tkay.core.c.e r0 = com.tkay.core.c.e.a(r0)
            java.lang.String r1 = r2.c
            com.tkay.core.c.d r0 = r0.b(r1)
            boolean r1 = r2.o
            if (r1 != 0) goto L1b
            if (r0 == 0) goto L1b
            r0 = 1
            r2.o = r0
            long r0 = java.lang.System.currentTimeMillis()
            r2.p = r0
        L1b:
            return
    }

    protected void b(com.tkay.core.api.AdError r1) {
            r0 = this;
            return
    }

    public final void b(java.lang.String r2) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.h> r0 = r1.d
            r0.remove(r2)
            return
    }

    public final com.tkay.core.common.h c(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L8
            r2 = 0
            return r2
        L8:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.h> r0 = r1.d
            java.lang.Object r2 = r0.get(r2)
            com.tkay.core.common.h r2 = (com.tkay.core.common.h) r2
            return r2
    }

    protected final boolean c() {
            r4 = this;
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r4.p
            long r0 = r0 - r2
            r2 = 2000(0x7d0, double:9.88E-321)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto Lf
            r0 = 1
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public final void d(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L7
            return
        L7:
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.f$6 r1 = new com.tkay.core.common.f$6
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    public final boolean d() {
            r4 = this;
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r4.m
            long r0 = r0 - r2
            long r2 = r4.n
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto Lf
            r0 = 1
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public final boolean e() {
            r3 = this;
            boolean r0 = r3.f
            r1 = 1
            if (r0 == 0) goto L6
            return r1
        L6:
            java.lang.String r0 = r3.g
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L21
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.h> r0 = r3.d
            java.lang.String r2 = r3.g
            java.lang.Object r0 = r0.get(r2)
            com.tkay.core.common.h r0 = (com.tkay.core.common.h) r0
            if (r0 == 0) goto L21
            boolean r0 = r0.c()
            if (r0 != 0) goto L21
            return r1
        L21:
            r0 = 0
            return r0
    }

    public final void f() {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.core.common.f$5 r1 = new com.tkay.core.common.f$5
            r1.<init>(r2)
            r0.a(r1)
            return
    }

    public boolean g() {
            r1 = this;
            r0 = 0
            return r0
    }

    public final void h() {
            r1 = this;
            com.tkay.core.common.b.a r0 = r1.i
            if (r0 == 0) goto L7
            r0.onAdLoaded()
        L7:
            return
    }

    public boolean i() {
            r1 = this;
            java.lang.String r0 = r1.g
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto La
            r0 = 1
            return r0
        La:
            r0 = 0
            return r0
    }

    protected boolean j() {
            r1 = this;
            r0 = 0
            return r0
    }

    protected void k() {
            r0 = this;
            return
    }

    protected void l() {
            r0 = this;
            return
    }
}
