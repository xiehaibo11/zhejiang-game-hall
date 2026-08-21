package com.tencent.bugly.proguard;

public final class au {
    private static com.tencent.bugly.proguard.au a;
    private com.tencent.bugly.proguard.ac b;
    private com.tencent.bugly.proguard.aa c;
    private com.tencent.bugly.proguard.as d;
    private android.content.Context e;



    static {
            return
    }

    private au(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            com.tencent.bugly.proguard.at r0 = com.tencent.bugly.proguard.at.a()
            if (r0 != 0) goto La
            return
        La:
            com.tencent.bugly.proguard.ac r1 = com.tencent.bugly.proguard.ac.a()
            r2.b = r1
            com.tencent.bugly.proguard.aa r1 = com.tencent.bugly.proguard.aa.a(r3)
            r2.c = r1
            com.tencent.bugly.proguard.as r0 = r0.s
            r2.d = r0
            r2.e = r3
            com.tencent.bugly.proguard.ak r3 = com.tencent.bugly.proguard.ak.a()
            com.tencent.bugly.proguard.au$1 r0 = new com.tencent.bugly.proguard.au$1
            r0.<init>(r2)
            r3.a(r0)
            return
    }

    static com.tencent.bugly.proguard.au a() {
            com.tencent.bugly.proguard.au r0 = com.tencent.bugly.proguard.au.a
            return r0
    }

    public static com.tencent.bugly.proguard.au a(android.content.Context r1) {
            com.tencent.bugly.proguard.au r0 = com.tencent.bugly.proguard.au.a
            if (r0 != 0) goto Lb
            com.tencent.bugly.proguard.au r0 = new com.tencent.bugly.proguard.au
            r0.<init>(r1)
            com.tencent.bugly.proguard.au.a = r0
        Lb:
            com.tencent.bugly.proguard.au r1 = com.tencent.bugly.proguard.au.a
            return r1
    }

    static void a(com.tencent.bugly.proguard.au r3) {
            r0 = 0
            java.lang.Object[] r1 = new java.lang.Object[r0]
            java.lang.String r2 = "[ExtraCrashManager] Trying to notify Bugly agents."
            com.tencent.bugly.proguard.al.c(r2, r1)
            java.lang.String r1 = "com.tencent.bugly.agent.GameAgent"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L22
            java.lang.String r2 = "com.tencent.bugly"
            com.tencent.bugly.proguard.aa r3 = r3.c     // Catch: java.lang.Throwable -> L22
            r3.getClass()     // Catch: java.lang.Throwable -> L22
            java.lang.String r3 = "sdkPackageName"
            com.tencent.bugly.proguard.ap.a(r1, r3, r2)     // Catch: java.lang.Throwable -> L22
            java.lang.String r3 = "[ExtraCrashManager] Bugly game agent has been notified."
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L22
            com.tencent.bugly.proguard.al.c(r3, r1)     // Catch: java.lang.Throwable -> L22
            return
        L22:
            java.lang.Object[] r3 = new java.lang.Object[r0]
            java.lang.String r0 = "[ExtraCrashManager] no game agent"
            com.tencent.bugly.proguard.al.a(r0, r3)
            return
    }

    static void a(com.tencent.bugly.proguard.au r16, java.lang.Thread r17, int r18, java.lang.String r19, java.lang.String r20, java.lang.String r21, java.util.Map r22) {
            r0 = r16
            r1 = r18
            r2 = r19
            r3 = r20
            r4 = r21
            r5 = r22
            java.lang.String r6 = "[ExtraCrashManager] Successfully handled."
            if (r17 != 0) goto L15
            java.lang.Thread r7 = java.lang.Thread.currentThread()
            goto L17
        L15:
            r7 = r17
        L17:
            r8 = 4
            r9 = 6
            r10 = 8
            r11 = 5
            r12 = 1
            r13 = 0
            if (r1 == r8) goto L3a
            if (r1 == r11) goto L37
            if (r1 == r9) goto L37
            if (r1 == r10) goto L34
            java.lang.Object[] r0 = new java.lang.Object[r12]
            java.lang.Integer r1 = java.lang.Integer.valueOf(r18)
            r0[r13] = r1
            java.lang.String r1 = "[ExtraCrashManager] Unknown extra crash type: %d"
            com.tencent.bugly.proguard.al.d(r1, r0)
            return
        L34:
            java.lang.String r8 = "H5"
            goto L3c
        L37:
            java.lang.String r8 = "Cocos"
            goto L3c
        L3a:
            java.lang.String r8 = "Unity"
        L3c:
            java.lang.Object[] r14 = new java.lang.Object[r12]
            r14[r13] = r8
            java.lang.String r15 = "[ExtraCrashManager] %s Crash Happen"
            com.tencent.bugly.proguard.al.e(r15, r14)
            com.tencent.bugly.proguard.ac r14 = r0.b     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            boolean r14 = r14.b()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            if (r14 != 0) goto L54
            java.lang.String r14 = "[ExtraCrashManager] There is no remote strategy, but still store it."
            java.lang.Object[] r15 = new java.lang.Object[r13]     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            com.tencent.bugly.proguard.al.d(r14, r15)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
        L54:
            com.tencent.bugly.proguard.ac r14 = r0.b     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            com.tencent.bugly.crashreport.common.strategy.StrategyBean r14 = r14.c()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            boolean r15 = r14.f     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.String r12 = "\n"
            if (r15 != 0) goto La9
            com.tencent.bugly.proguard.ac r15 = r0.b     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            boolean r15 = r15.b()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            if (r15 == 0) goto La9
            java.lang.String r1 = "[ExtraCrashManager] Crash report was closed by remote. Will not upload to Bugly , print local for helpful!"
            java.lang.Object[] r5 = new java.lang.Object[r13]     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            com.tencent.bugly.proguard.al.e(r1, r5)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.String r1 = com.tencent.bugly.proguard.ap.a()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            com.tencent.bugly.proguard.aa r0 = r0.c     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.String r0 = r0.d     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.String r5 = r7.getName()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r7.<init>()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r7.append(r2)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r7.append(r12)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r7.append(r3)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r7.append(r12)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r7.append(r4)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.String r2 = r7.toString()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r3 = 0
            r16 = r8
            r17 = r1
            r18 = r0
            r19 = r5
            r20 = r2
            r21 = r3
            com.tencent.bugly.proguard.as.a(r16, r17, r18, r19, r20, r21)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.Object[] r0 = new java.lang.Object[r13]
            com.tencent.bugly.proguard.al.e(r6, r0)
            return
        La9:
            java.lang.String r15 = "[ExtraCrashManager] %s report is disabled."
            if (r1 == r11) goto Lc5
            if (r1 == r9) goto Lc5
            if (r1 == r10) goto Lb3
        Lb1:
            r9 = 1
            goto Ld7
        Lb3:
            boolean r9 = r14.l     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            if (r9 != 0) goto Lb1
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r0[r13] = r8     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            com.tencent.bugly.proguard.al.e(r15, r0)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.Object[] r0 = new java.lang.Object[r13]
            com.tencent.bugly.proguard.al.e(r6, r0)
            return
        Lc5:
            boolean r9 = r14.k     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            if (r9 != 0) goto Lb1
            r9 = 1
            java.lang.Object[] r0 = new java.lang.Object[r9]     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r0[r13] = r8     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            com.tencent.bugly.proguard.al.e(r15, r0)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.Object[] r0 = new java.lang.Object[r13]
            com.tencent.bugly.proguard.al.e(r6, r0)
            return
        Ld7:
            if (r1 != r10) goto Lda
            goto Ldb
        Lda:
            r11 = r1
        Ldb:
            com.tencent.bugly.crashreport.crash.CrashDetailBean r1 = new com.tencent.bugly.crashreport.crash.CrashDetailBean     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.<init>()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            long r14 = com.tencent.bugly.proguard.ab.j()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.C = r14     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            long r14 = com.tencent.bugly.proguard.ab.f()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.D = r14     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            long r14 = com.tencent.bugly.proguard.ab.l()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.E = r14     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            com.tencent.bugly.proguard.aa r10 = r0.c     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            long r14 = r10.k()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.F = r14     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            com.tencent.bugly.proguard.aa r10 = r0.c     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            long r14 = r10.j()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.G = r14     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            com.tencent.bugly.proguard.aa r10 = r0.c     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            long r14 = r10.l()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.H = r14     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            android.content.Context r10 = r0.e     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            long r14 = com.tencent.bugly.proguard.ab.b(r10)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.I = r14     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            long r14 = com.tencent.bugly.proguard.ab.g()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.J = r14     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            long r14 = com.tencent.bugly.proguard.ab.h()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.K = r14     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.b = r11     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            com.tencent.bugly.proguard.aa r10 = r0.c     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.String r10 = r10.g()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.e = r10     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            com.tencent.bugly.proguard.aa r10 = r0.c     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.String r10 = r10.o     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.f = r10     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            com.tencent.bugly.proguard.aa r10 = r0.c     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.String r10 = r10.q()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.g = r10     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            com.tencent.bugly.proguard.aa r10 = r0.c     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.String r10 = r10.f()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.m = r10     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.String r10 = java.lang.String.valueOf(r19)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.n = r10     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.String r10 = java.lang.String.valueOf(r20)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.o = r10     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.String r10 = ""
            if (r4 == 0) goto L159
            java.lang.String[] r11 = r4.split(r12)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            int r14 = r11.length     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            if (r14 <= 0) goto L157
            r10 = r11[r13]     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
        L157:
            r11 = r4
            goto L15a
        L159:
            r11 = r10
        L15a:
            r1.p = r10     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.q = r11     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            long r10 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.r = r10     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.String r10 = r1.q     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            byte[] r10 = r10.getBytes()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.String r10 = com.tencent.bugly.proguard.ap.c(r10)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.u = r10     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            com.tencent.bugly.proguard.aa r10 = r0.c     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            boolean r10 = r10.Q     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            int r11 = com.tencent.bugly.proguard.at.h     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.util.Map r10 = com.tencent.bugly.proguard.ap.a(r10, r11)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.z = r10     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            com.tencent.bugly.proguard.aa r10 = r0.c     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.String r10 = r10.d     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.A = r10     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r10.<init>()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.String r11 = r7.getName()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r10.append(r11)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.String r11 = "("
            r10.append(r11)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            long r14 = r7.getId()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r10.append(r14)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.String r11 = ")"
            r10.append(r11)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.B = r10     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            com.tencent.bugly.proguard.aa r10 = r0.c     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.String r10 = r10.s()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.L = r10     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            com.tencent.bugly.proguard.aa r10 = r0.c     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.util.Map r10 = r10.p()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.h = r10     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            com.tencent.bugly.proguard.aa r10 = r0.c     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            long r10 = r10.a     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.Q = r10     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            com.tencent.bugly.proguard.aa r10 = r0.c     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            boolean r10 = r10.a()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.R = r10     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            com.tencent.bugly.proguard.aa r10 = r0.c     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            int r10 = r10.z()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.U = r10     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            com.tencent.bugly.proguard.aa r10 = r0.c     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            int r10 = r10.x     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.V = r10     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            com.tencent.bugly.proguard.aa r10 = r0.c     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.util.Map r10 = r10.t()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.W = r10     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            com.tencent.bugly.proguard.aa r10 = r0.c     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.util.Map r10 = r10.y()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.X = r10     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            byte[] r10 = com.tencent.bugly.proguard.ao.a()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.y = r10     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.util.Map<java.lang.String, java.lang.String> r10 = r1.S     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            if (r10 != 0) goto L1f2
            java.util.LinkedHashMap r10 = new java.util.LinkedHashMap     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r10.<init>()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r1.S = r10     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
        L1f2:
            if (r5 == 0) goto L1f9
            java.util.Map<java.lang.String, java.lang.String> r10 = r1.S     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r10.putAll(r5)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
        L1f9:
            java.lang.String r5 = com.tencent.bugly.proguard.ap.a()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            com.tencent.bugly.proguard.aa r10 = r0.c     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.String r10 = r10.d     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.String r7 = r7.getName()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r11.<init>()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r11.append(r2)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r11.append(r12)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r11.append(r3)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r11.append(r12)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r11.append(r4)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            java.lang.String r2 = r11.toString()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r17 = r8
            r18 = r5
            r19 = r10
            r20 = r7
            r21 = r2
            r22 = r1
            com.tencent.bugly.proguard.as.a(r17, r18, r19, r20, r21, r22)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            com.tencent.bugly.proguard.as r2 = r0.d     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            com.tencent.bugly.proguard.at r3 = com.tencent.bugly.proguard.at.a()     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            boolean r3 = r3.C     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            if (r3 != 0) goto L237
            goto L238
        L237:
            r9 = 0
        L238:
            boolean r2 = r2.a(r1, r9)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            if (r2 != 0) goto L243
            com.tencent.bugly.proguard.as r0 = r0.d     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
            r0.b(r1, r13)     // Catch: java.lang.Throwable -> L249 java.lang.Throwable -> L24b
        L243:
            java.lang.Object[] r0 = new java.lang.Object[r13]
            com.tencent.bugly.proguard.al.e(r6, r0)
            return
        L249:
            r0 = move-exception
            goto L25b
        L24b:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)     // Catch: java.lang.Throwable -> L249
            if (r1 != 0) goto L255
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L249
        L255:
            java.lang.Object[] r0 = new java.lang.Object[r13]
            com.tencent.bugly.proguard.al.e(r6, r0)
            return
        L25b:
            java.lang.Object[] r1 = new java.lang.Object[r13]
            com.tencent.bugly.proguard.al.e(r6, r1)
            throw r0
    }

    public static void a(java.lang.Thread r9, int r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, java.util.Map<java.lang.String, java.lang.String> r14) {
            com.tencent.bugly.proguard.ak r0 = com.tencent.bugly.proguard.ak.a()
            com.tencent.bugly.proguard.au$2 r8 = new com.tencent.bugly.proguard.au$2
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r7 = r14
            r1.<init>(r2, r3, r4, r5, r6, r7)
            r0.a(r8)
            return
    }
}
