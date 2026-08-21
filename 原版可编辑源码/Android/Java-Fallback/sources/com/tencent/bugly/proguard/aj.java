package com.tencent.bugly.proguard;

public final class aj implements java.lang.Runnable {
    protected int a;
    protected long b;
    protected long c;
    private int d;
    private int e;
    private final android.content.Context f;
    private final int g;
    private final byte[] h;
    private final com.tencent.bugly.proguard.aa i;
    private final com.tencent.bugly.proguard.ac j;
    private final com.tencent.bugly.proguard.af k;
    private final com.tencent.bugly.proguard.ai l;
    private final int m;
    private final com.tencent.bugly.proguard.ah n;
    private final com.tencent.bugly.proguard.ah o;
    private java.lang.String p;
    private final java.lang.String q;
    private final java.util.Map<java.lang.String, java.lang.String> r;
    private boolean s;

    public aj(android.content.Context r5, int r6, int r7, byte[] r8, java.lang.String r9, java.lang.String r10, com.tencent.bugly.proguard.ah r11, int r12, int r13, boolean r14) {
            r4 = this;
            r4.<init>()
            r0 = 2
            r4.d = r0
            r0 = 30000(0x7530, float:4.2039E-41)
            r4.e = r0
            r0 = 0
            r4.p = r0
            r1 = 0
            r4.a = r1
            r2 = 0
            r4.b = r2
            r4.c = r2
            r4.s = r1
            r4.f = r5
            com.tencent.bugly.proguard.aa r1 = com.tencent.bugly.proguard.aa.a(r5)
            r4.i = r1
            r4.h = r8
            com.tencent.bugly.proguard.ac r8 = com.tencent.bugly.proguard.ac.a()
            r4.j = r8
            com.tencent.bugly.proguard.af r8 = com.tencent.bugly.proguard.af.a
            if (r8 != 0) goto L33
            com.tencent.bugly.proguard.af r8 = new com.tencent.bugly.proguard.af
            r8.<init>(r5)
            com.tencent.bugly.proguard.af.a = r8
        L33:
            com.tencent.bugly.proguard.af r5 = com.tencent.bugly.proguard.af.a
            r4.k = r5
            com.tencent.bugly.proguard.ai r5 = com.tencent.bugly.proguard.ai.a()
            r4.l = r5
            r4.m = r6
            r4.p = r9
            r4.q = r10
            r4.n = r11
            com.tencent.bugly.proguard.ai r5 = r4.l
            com.tencent.bugly.proguard.ah r5 = r5.a
            r4.o = r5
            r4.g = r7
            if (r12 <= 0) goto L51
            r4.d = r12
        L51:
            if (r13 <= 0) goto L55
            r4.e = r13
        L55:
            r4.s = r14
            r4.r = r0
            return
    }

    public aj(android.content.Context r12, int r13, int r14, byte[] r15, java.lang.String r16, java.lang.String r17, com.tencent.bugly.proguard.ah r18, boolean r19) {
            r11 = this;
            r8 = 2
            r9 = 30000(0x7530, float:4.2039E-41)
            r0 = r11
            r1 = r12
            r2 = r13
            r3 = r14
            r4 = r15
            r5 = r16
            r6 = r17
            r7 = r18
            r10 = r19
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
            return
    }

    private android.util.Pair<java.lang.Boolean, java.lang.Boolean> a(java.util.Map<java.lang.String, java.lang.String> r8) {
            r7 = this;
            java.lang.String r0 = "status"
            r1 = 1
            r2 = 0
            if (r8 == 0) goto L50
            int r3 = r8.size()
            if (r3 != 0) goto Ld
            goto L50
        Ld:
            boolean r3 = r8.containsKey(r0)
            java.lang.String r4 = "[Upload] Headers does not contain %s"
            if (r3 != 0) goto L1d
            java.lang.Object[] r3 = new java.lang.Object[r1]
            r3[r2] = r0
            com.tencent.bugly.proguard.al.d(r4, r3)
            goto L57
        L1d:
            java.lang.String r3 = "Bugly-Version"
            boolean r5 = r8.containsKey(r3)
            if (r5 != 0) goto L2d
            java.lang.Object[] r5 = new java.lang.Object[r1]
            r5[r2] = r3
            com.tencent.bugly.proguard.al.d(r4, r5)
            goto L57
        L2d:
            java.lang.Object r3 = r8.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            java.lang.String r4 = "bugly"
            boolean r4 = r3.contains(r4)
            if (r4 != 0) goto L45
            java.lang.Object[] r4 = new java.lang.Object[r1]
            r4[r2] = r3
            java.lang.String r3 = "[Upload] Bugly version is not valid: %s"
            com.tencent.bugly.proguard.al.d(r3, r4)
            goto L57
        L45:
            java.lang.Object[] r4 = new java.lang.Object[r1]
            r4[r2] = r3
            java.lang.String r3 = "[Upload] Bugly version from headers is: %s"
            com.tencent.bugly.proguard.al.c(r3, r4)
            r3 = 1
            goto L58
        L50:
            java.lang.Object[] r3 = new java.lang.Object[r2]
            java.lang.String r4 = "[Upload] Headers is empty."
            com.tencent.bugly.proguard.al.d(r4, r3)
        L57:
            r3 = 0
        L58:
            r4 = 2
            if (r3 != 0) goto Lba
            java.lang.Object[] r0 = new java.lang.Object[r4]
            int r3 = android.os.Process.myPid()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r0[r2] = r3
            int r3 = android.os.Process.myTid()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r0[r1] = r3
            java.lang.String r3 = "[Upload] Headers from server is not valid, just try again (pid=%d | tid=%d)."
            com.tencent.bugly.proguard.al.c(r3, r0)
            java.lang.String r0 = "[Upload] Failed to upload for no status header."
            a(r0)
            if (r8 == 0) goto Lab
            java.util.Set r8 = r8.entrySet()
            java.util.Iterator r8 = r8.iterator()
        L85:
            boolean r3 = r8.hasNext()
            if (r3 == 0) goto Lab
            java.lang.Object r3 = r8.next()
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3
            java.lang.Object[] r5 = new java.lang.Object[r4]
            java.lang.Object r6 = r3.getKey()
            r5[r2] = r6
            java.lang.Object r3 = r3.getValue()
            r5[r1] = r3
            java.lang.String r3 = "[key]: %s, [value]: %s"
            java.lang.String r3 = java.lang.String.format(r3, r5)
            java.lang.Object[] r5 = new java.lang.Object[r2]
            com.tencent.bugly.proguard.al.c(r3, r5)
            goto L85
        Lab:
            java.lang.Object[] r8 = new java.lang.Object[r2]
            com.tencent.bugly.proguard.al.c(r0, r8)
            android.util.Pair r8 = new android.util.Pair
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
            java.lang.Boolean r1 = java.lang.Boolean.TRUE
            r8.<init>(r0, r1)
            return r8
        Lba:
            r3 = -1
            java.lang.Object r8 = r8.get(r0)     // Catch: java.lang.Throwable -> L106
            java.lang.String r8 = (java.lang.String) r8     // Catch: java.lang.Throwable -> L106
            int r3 = java.lang.Integer.parseInt(r8)     // Catch: java.lang.Throwable -> L106
            java.lang.String r8 = "[Upload] Status from server is %d (pid=%d | tid=%d)."
            r0 = 3
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L106
            java.lang.Integer r5 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L106
            r0[r2] = r5     // Catch: java.lang.Throwable -> L106
            int r5 = android.os.Process.myPid()     // Catch: java.lang.Throwable -> L106
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L106
            r0[r1] = r5     // Catch: java.lang.Throwable -> L106
            int r5 = android.os.Process.myTid()     // Catch: java.lang.Throwable -> L106
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L106
            r0[r4] = r5     // Catch: java.lang.Throwable -> L106
            com.tencent.bugly.proguard.al.c(r8, r0)     // Catch: java.lang.Throwable -> L106
            if (r3 == 0) goto Lfe
            java.lang.String r8 = java.lang.String.valueOf(r3)
            java.lang.String r0 = "status of server is "
            java.lang.String r8 = r0.concat(r8)
            r7.a(r2, r1, r8)
            android.util.Pair r8 = new android.util.Pair
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
            r8.<init>(r0, r0)
            return r8
        Lfe:
            android.util.Pair r8 = new android.util.Pair
            java.lang.Boolean r0 = java.lang.Boolean.TRUE
            r8.<init>(r0, r0)
            return r8
        L106:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r0 = "[Upload] Failed to upload for format of status header is invalid: "
            r8.<init>(r0)
            java.lang.String r0 = java.lang.Integer.toString(r3)
            r8.append(r0)
            java.lang.String r8 = r8.toString()
            a(r8)
            android.util.Pair r8 = new android.util.Pair
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
            java.lang.Boolean r1 = java.lang.Boolean.TRUE
            r8.<init>(r0, r1)
            return r8
    }

    private android.util.Pair<java.lang.Boolean, java.lang.Boolean> a(byte[] r5, java.util.Map<java.lang.String, java.lang.String> r6) {
            r4 = this;
            if (r5 != 0) goto L11
            java.lang.String r5 = "Failed to upload for no response!"
            a(r5)
            android.util.Pair r5 = new android.util.Pair
            java.lang.Boolean r6 = java.lang.Boolean.FALSE
            java.lang.Boolean r0 = java.lang.Boolean.TRUE
            r5.<init>(r6, r0)
            return r5
        L11:
            r0 = 1
            java.lang.Object[] r1 = new java.lang.Object[r0]
            int r2 = r5.length
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3 = 0
            r1[r3] = r2
            java.lang.String r2 = "[Upload] Received %d bytes"
            com.tencent.bugly.proguard.al.c(r2, r1)
            int r5 = r5.length
            if (r5 != 0) goto L5c
            java.lang.String r5 = "response data from server is empty"
            r4.a(r3, r0, r5)
            if (r6 == 0) goto L54
            java.util.Set r5 = r6.entrySet()
            java.util.Iterator r5 = r5.iterator()
        L33:
            boolean r6 = r5.hasNext()
            if (r6 == 0) goto L54
            java.lang.Object r6 = r5.next()
            java.util.Map$Entry r6 = (java.util.Map.Entry) r6
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.Object r2 = r6.getKey()
            r1[r3] = r2
            java.lang.Object r6 = r6.getValue()
            r1[r0] = r6
            java.lang.String r6 = "[Upload] HTTP headers from server: key = %s, value = %s"
            com.tencent.bugly.proguard.al.c(r6, r1)
            goto L33
        L54:
            android.util.Pair r5 = new android.util.Pair
            java.lang.Boolean r6 = java.lang.Boolean.FALSE
            r5.<init>(r6, r6)
            return r5
        L5c:
            android.util.Pair r5 = new android.util.Pair
            java.lang.Boolean r6 = java.lang.Boolean.TRUE
            r5.<init>(r6, r6)
            return r5
    }

    private static void a(java.lang.String r4) {
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 1
            java.lang.Integer r2 = java.lang.Integer.valueOf(r1)
            r3 = 0
            r0[r3] = r2
            r0[r1] = r4
            java.lang.String r4 = "[Upload] Failed to upload(%d): %s"
            com.tencent.bugly.proguard.al.e(r4, r0)
            return
    }

    private void a(boolean r5, int r6, java.lang.String r7) {
            r4 = this;
            int r0 = r4.g
            r1 = 630(0x276, float:8.83E-43)
            if (r0 == r1) goto L1a
            r1 = 640(0x280, float:8.97E-43)
            if (r0 == r1) goto L17
            r1 = 830(0x33e, float:1.163E-42)
            if (r0 == r1) goto L1a
            r1 = 840(0x348, float:1.177E-42)
            if (r0 == r1) goto L17
            java.lang.String r0 = java.lang.String.valueOf(r0)
            goto L1c
        L17:
            java.lang.String r0 = "userinfo"
            goto L1c
        L1a:
            java.lang.String r0 = "crash"
        L1c:
            r1 = 1
            r2 = 0
            if (r5 == 0) goto L2a
            java.lang.Object[] r6 = new java.lang.Object[r1]
            r6[r2] = r0
            java.lang.String r0 = "[Upload] Success: %s"
            com.tencent.bugly.proguard.al.a(r0, r6)
            goto L3d
        L2a:
            r3 = 3
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            r3[r2] = r6
            r3[r1] = r0
            r6 = 2
            r3[r6] = r7
            java.lang.String r6 = "[Upload] Failed to upload(%d) %s: %s"
            com.tencent.bugly.proguard.al.e(r6, r3)
        L3d:
            long r0 = r4.b
            long r2 = r4.c
            long r0 = r0 + r2
            r2 = 0
            int r6 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r6 <= 0) goto L5d
            com.tencent.bugly.proguard.ai r6 = r4.l
            boolean r0 = r4.s
            long r0 = r6.a(r0)
            long r2 = r4.b
            long r0 = r0 + r2
            long r2 = r4.c
            long r0 = r0 + r2
            com.tencent.bugly.proguard.ai r6 = r4.l
            boolean r2 = r4.s
            r6.a(r0, r2)
        L5d:
            com.tencent.bugly.proguard.ah r6 = r4.n
            if (r6 == 0) goto L64
            r6.a(r5, r7)
        L64:
            com.tencent.bugly.proguard.ah r6 = r4.o
            if (r6 == 0) goto L6b
            r6.a(r5, r7)
        L6b:
            return
    }

    private static boolean a(com.tencent.bugly.proguard.br r7, com.tencent.bugly.proguard.aa r8, com.tencent.bugly.proguard.ac r9) {
            r0 = 0
            if (r7 != 0) goto Lb
            java.lang.Object[] r7 = new java.lang.Object[r0]
            java.lang.String r8 = "resp == null!"
            com.tencent.bugly.proguard.al.d(r8, r7)
            return r0
        Lb:
            byte r1 = r7.a
            r2 = 1
            if (r1 == 0) goto L20
            java.lang.Object[] r8 = new java.lang.Object[r2]
            byte r7 = r7.a
            java.lang.Byte r7 = java.lang.Byte.valueOf(r7)
            r8[r0] = r7
            java.lang.String r7 = "resp result error %d"
            com.tencent.bugly.proguard.al.e(r7, r8)
            return r0
        L20:
            java.lang.String r1 = r7.g     // Catch: java.lang.Throwable -> L51
            boolean r1 = com.tencent.bugly.proguard.ap.b(r1)     // Catch: java.lang.Throwable -> L51
            if (r1 != 0) goto L55
            com.tencent.bugly.proguard.aa r1 = com.tencent.bugly.proguard.aa.b()     // Catch: java.lang.Throwable -> L51
            java.lang.String r1 = r1.i()     // Catch: java.lang.Throwable -> L51
            java.lang.String r3 = r7.g     // Catch: java.lang.Throwable -> L51
            boolean r1 = r1.equals(r3)     // Catch: java.lang.Throwable -> L51
            if (r1 != 0) goto L55
            com.tencent.bugly.proguard.w r1 = com.tencent.bugly.proguard.w.a()     // Catch: java.lang.Throwable -> L51
            int r3 = com.tencent.bugly.proguard.ac.a     // Catch: java.lang.Throwable -> L51
            java.lang.String r4 = "device"
            java.lang.String r5 = r7.g     // Catch: java.lang.Throwable -> L51
            java.lang.String r6 = "UTF-8"
            byte[] r5 = r5.getBytes(r6)     // Catch: java.lang.Throwable -> L51
            r1.a(r3, r4, r5, r2)     // Catch: java.lang.Throwable -> L51
            java.lang.String r1 = r7.g     // Catch: java.lang.Throwable -> L51
            r8.d(r1)     // Catch: java.lang.Throwable -> L51
            goto L55
        L51:
            r1 = move-exception
            com.tencent.bugly.proguard.al.a(r1)
        L55:
            long r3 = r7.e
            r8.m = r3
            int r8 = r7.b
            r1 = 510(0x1fe, float:7.15E-43)
            if (r8 != r1) goto L92
            byte[] r8 = r7.c
            if (r8 != 0) goto L73
            java.lang.Object[] r8 = new java.lang.Object[r2]
            int r7 = r7.b
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)
            r8[r0] = r7
            java.lang.String r7 = "[Upload] Strategy data is null. Response cmd: %d"
            com.tencent.bugly.proguard.al.e(r7, r8)
            return r0
        L73:
            byte[] r8 = r7.c
            java.lang.Class<com.tencent.bugly.proguard.bt> r1 = com.tencent.bugly.proguard.bt.class
            com.tencent.bugly.proguard.m r8 = com.tencent.bugly.proguard.ae.a(r8, r1)
            com.tencent.bugly.proguard.bt r8 = (com.tencent.bugly.proguard.bt) r8
            if (r8 != 0) goto L8f
            java.lang.Object[] r8 = new java.lang.Object[r2]
            int r7 = r7.b
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)
            r8[r0] = r7
            java.lang.String r7 = "[Upload] Failed to decode strategy from server. Response cmd: %d"
            com.tencent.bugly.proguard.al.e(r7, r8)
            return r0
        L8f:
            r9.a(r8)
        L92:
            return r2
    }

    private static java.lang.String b(java.lang.String r4) {
            boolean r0 = com.tencent.bugly.proguard.ap.b(r4)
            if (r0 == 0) goto L7
            return r4
        L7:
            java.lang.String r0 = "%s?aid=%s"
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L1f
            r2 = 0
            r1[r2] = r4     // Catch: java.lang.Throwable -> L1f
            r2 = 1
            java.util.UUID r3 = java.util.UUID.randomUUID()     // Catch: java.lang.Throwable -> L1f
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L1f
            r1[r2] = r3     // Catch: java.lang.Throwable -> L1f
            java.lang.String r4 = java.lang.String.format(r0, r1)     // Catch: java.lang.Throwable -> L1f
            return r4
        L1f:
            r0 = move-exception
            com.tencent.bugly.proguard.al.a(r0)
            return r4
    }

    public final void a(long r3) {
            r2 = this;
            int r0 = r2.a
            int r0 = r0 + 1
            r2.a = r0
            long r0 = r2.b
            long r0 = r0 + r3
            r2.b = r0
            return
    }

    public final void b(long r3) {
            r2 = this;
            long r0 = r2.c
            long r0 = r0 + r3
            r2.c = r0
            return
    }

    @Override
    public final void run() {
            r11 = this;
            r0 = 0
            r11.a = r0     // Catch: java.lang.Throwable -> L1e9
            r1 = 0
            r11.b = r1     // Catch: java.lang.Throwable -> L1e9
            r11.c = r1     // Catch: java.lang.Throwable -> L1e9
            android.content.Context r1 = r11.f     // Catch: java.lang.Throwable -> L1e9
            java.lang.String r1 = com.tencent.bugly.proguard.ab.c(r1)     // Catch: java.lang.Throwable -> L1e9
            if (r1 != 0) goto L14
            java.lang.String r1 = "network is not available"
            goto L41
        L14:
            byte[] r1 = r11.h     // Catch: java.lang.Throwable -> L1e9
            if (r1 == 0) goto L3f
            byte[] r1 = r11.h     // Catch: java.lang.Throwable -> L1e9
            int r1 = r1.length     // Catch: java.lang.Throwable -> L1e9
            if (r1 != 0) goto L1e
            goto L3f
        L1e:
            android.content.Context r1 = r11.f     // Catch: java.lang.Throwable -> L1e9
            if (r1 == 0) goto L3c
            com.tencent.bugly.proguard.aa r1 = r11.i     // Catch: java.lang.Throwable -> L1e9
            if (r1 == 0) goto L3c
            com.tencent.bugly.proguard.ac r1 = r11.j     // Catch: java.lang.Throwable -> L1e9
            if (r1 == 0) goto L3c
            com.tencent.bugly.proguard.af r1 = r11.k     // Catch: java.lang.Throwable -> L1e9
            if (r1 != 0) goto L2f
            goto L3c
        L2f:
            com.tencent.bugly.proguard.ac r1 = r11.j     // Catch: java.lang.Throwable -> L1e9
            com.tencent.bugly.crashreport.common.strategy.StrategyBean r1 = r1.c()     // Catch: java.lang.Throwable -> L1e9
            if (r1 != 0) goto L3a
            java.lang.String r1 = "illegal local strategy"
            goto L41
        L3a:
            r1 = 0
            goto L41
        L3c:
            java.lang.String r1 = "illegal access error"
            goto L41
        L3f:
            java.lang.String r1 = "request package is empty!"
        L41:
            if (r1 == 0) goto L47
            r11.a(r0, r0, r1)     // Catch: java.lang.Throwable -> L1e9
            return
        L47:
            byte[] r1 = r11.h     // Catch: java.lang.Throwable -> L1e9
            byte[] r1 = com.tencent.bugly.proguard.ap.a(r1)     // Catch: java.lang.Throwable -> L1e9
            if (r1 != 0) goto L55
            java.lang.String r1 = "failed to zip request body"
            r11.a(r0, r0, r1)     // Catch: java.lang.Throwable -> L1e9
            return
        L55:
            java.util.HashMap r2 = new java.util.HashMap     // Catch: java.lang.Throwable -> L1e9
            r3 = 10
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1e9
            java.lang.String r3 = "tls"
            java.lang.String r4 = "1"
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L1e9
            java.lang.String r3 = "prodId"
            com.tencent.bugly.proguard.aa r4 = r11.i     // Catch: java.lang.Throwable -> L1e9
            java.lang.String r4 = r4.e()     // Catch: java.lang.Throwable -> L1e9
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L1e9
            java.lang.String r3 = "bundleId"
            com.tencent.bugly.proguard.aa r4 = r11.i     // Catch: java.lang.Throwable -> L1e9
            java.lang.String r4 = r4.c     // Catch: java.lang.Throwable -> L1e9
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L1e9
            java.lang.String r3 = "appVer"
            com.tencent.bugly.proguard.aa r4 = r11.i     // Catch: java.lang.Throwable -> L1e9
            java.lang.String r4 = r4.o     // Catch: java.lang.Throwable -> L1e9
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L1e9
            java.util.Map<java.lang.String, java.lang.String> r3 = r11.r     // Catch: java.lang.Throwable -> L1e9
            if (r3 == 0) goto L89
            java.util.Map<java.lang.String, java.lang.String> r3 = r11.r     // Catch: java.lang.Throwable -> L1e9
            r2.putAll(r3)     // Catch: java.lang.Throwable -> L1e9
        L89:
            java.lang.String r3 = "cmd"
            int r4 = r11.g     // Catch: java.lang.Throwable -> L1e9
            java.lang.String r4 = java.lang.Integer.toString(r4)     // Catch: java.lang.Throwable -> L1e9
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L1e9
            java.lang.String r3 = "platformId"
            r4 = 1
            java.lang.String r5 = java.lang.Byte.toString(r4)     // Catch: java.lang.Throwable -> L1e9
            r2.put(r3, r5)     // Catch: java.lang.Throwable -> L1e9
            java.lang.String r3 = "sdkVer"
            com.tencent.bugly.proguard.aa r5 = r11.i     // Catch: java.lang.Throwable -> L1e9
            java.lang.String r5 = r5.h     // Catch: java.lang.Throwable -> L1e9
            r2.put(r3, r5)     // Catch: java.lang.Throwable -> L1e9
            java.lang.String r3 = "strategylastUpdateTime"
            com.tencent.bugly.proguard.ac r5 = r11.j     // Catch: java.lang.Throwable -> L1e9
            com.tencent.bugly.crashreport.common.strategy.StrategyBean r5 = r5.c()     // Catch: java.lang.Throwable -> L1e9
            long r5 = r5.o     // Catch: java.lang.Throwable -> L1e9
            java.lang.String r5 = java.lang.Long.toString(r5)     // Catch: java.lang.Throwable -> L1e9
            r2.put(r3, r5)     // Catch: java.lang.Throwable -> L1e9
            com.tencent.bugly.proguard.ai r3 = r11.l     // Catch: java.lang.Throwable -> L1e9
            int r5 = r11.m     // Catch: java.lang.Throwable -> L1e9
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L1e9
            r3.a(r5, r6)     // Catch: java.lang.Throwable -> L1e9
            java.lang.String r3 = r11.p     // Catch: java.lang.Throwable -> L1e9
            com.tencent.bugly.proguard.ac r5 = r11.j     // Catch: java.lang.Throwable -> L1e9
            r5.c()     // Catch: java.lang.Throwable -> L1e9
            r6 = r3
            r3 = 0
            r5 = 0
        Lcd:
            int r7 = r3 + 1
            int r8 = r11.d     // Catch: java.lang.Throwable -> L1e9
            if (r3 >= r8) goto L1e3
            if (r7 <= r4) goto Lf9
            java.lang.String r3 = "[Upload] Failed to upload last time, wait and try(%d) again."
            java.lang.Object[] r5 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L1e9
            java.lang.Integer r8 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Throwable -> L1e9
            r5[r0] = r8     // Catch: java.lang.Throwable -> L1e9
            com.tencent.bugly.proguard.al.d(r3, r5)     // Catch: java.lang.Throwable -> L1e9
            int r3 = r11.e     // Catch: java.lang.Throwable -> L1e9
            long r8 = (long) r3     // Catch: java.lang.Throwable -> L1e9
            com.tencent.bugly.proguard.ap.b(r8)     // Catch: java.lang.Throwable -> L1e9
            int r3 = r11.d     // Catch: java.lang.Throwable -> L1e9
            if (r7 != r3) goto Lf9
            java.lang.String r3 = "[Upload] Use the back-up url at the last time: %s"
            java.lang.Object[] r5 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L1e9
            java.lang.String r6 = r11.q     // Catch: java.lang.Throwable -> L1e9
            r5[r0] = r6     // Catch: java.lang.Throwable -> L1e9
            com.tencent.bugly.proguard.al.d(r3, r5)     // Catch: java.lang.Throwable -> L1e9
            java.lang.String r6 = r11.q     // Catch: java.lang.Throwable -> L1e9
        Lf9:
            java.lang.String r3 = "[Upload] Send %d bytes"
            java.lang.Object[] r5 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L1e9
            int r8 = r1.length     // Catch: java.lang.Throwable -> L1e9
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L1e9
            r5[r0] = r8     // Catch: java.lang.Throwable -> L1e9
            com.tencent.bugly.proguard.al.c(r3, r5)     // Catch: java.lang.Throwable -> L1e9
            java.lang.String r6 = b(r6)     // Catch: java.lang.Throwable -> L1e9
            java.lang.String r3 = "[Upload] Upload to %s with cmd %d (pid=%d | tid=%d)."
            r5 = 4
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L1e9
            r5[r0] = r6     // Catch: java.lang.Throwable -> L1e9
            int r8 = r11.g     // Catch: java.lang.Throwable -> L1e9
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L1e9
            r5[r4] = r8     // Catch: java.lang.Throwable -> L1e9
            int r8 = android.os.Process.myPid()     // Catch: java.lang.Throwable -> L1e9
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L1e9
            r9 = 2
            r5[r9] = r8     // Catch: java.lang.Throwable -> L1e9
            r8 = 3
            int r10 = android.os.Process.myTid()     // Catch: java.lang.Throwable -> L1e9
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.Throwable -> L1e9
            r5[r8] = r10     // Catch: java.lang.Throwable -> L1e9
            com.tencent.bugly.proguard.al.c(r3, r5)     // Catch: java.lang.Throwable -> L1e9
            com.tencent.bugly.proguard.af r3 = r11.k     // Catch: java.lang.Throwable -> L1e9
            byte[] r3 = r3.a(r6, r1, r11, r2)     // Catch: java.lang.Throwable -> L1e9
            com.tencent.bugly.proguard.af r5 = r11.k     // Catch: java.lang.Throwable -> L1e9
            java.util.Map<java.lang.String, java.lang.String> r5 = r5.c     // Catch: java.lang.Throwable -> L1e9
            android.util.Pair r8 = r11.a(r3, r5)     // Catch: java.lang.Throwable -> L1e9
            java.lang.Object r10 = r8.first     // Catch: java.lang.Throwable -> L1e9
            java.lang.Boolean r10 = (java.lang.Boolean) r10     // Catch: java.lang.Throwable -> L1e9
            boolean r10 = r10.booleanValue()     // Catch: java.lang.Throwable -> L1e9
            if (r10 != 0) goto L155
            java.lang.Object r3 = r8.second     // Catch: java.lang.Throwable -> L1e9
            java.lang.Boolean r3 = (java.lang.Boolean) r3     // Catch: java.lang.Throwable -> L1e9
            boolean r3 = r3.booleanValue()     // Catch: java.lang.Throwable -> L1e9
            goto L1dc
        L155:
            android.util.Pair r5 = r11.a(r5)     // Catch: java.lang.Throwable -> L1e9
            java.lang.Object r8 = r5.first     // Catch: java.lang.Throwable -> L1e9
            java.lang.Boolean r8 = (java.lang.Boolean) r8     // Catch: java.lang.Throwable -> L1e9
            boolean r8 = r8.booleanValue()     // Catch: java.lang.Throwable -> L1e9
            if (r8 != 0) goto L16d
            java.lang.Object r3 = r5.second     // Catch: java.lang.Throwable -> L1e9
            java.lang.Boolean r3 = (java.lang.Boolean) r3     // Catch: java.lang.Throwable -> L1e9
            boolean r3 = r3.booleanValue()     // Catch: java.lang.Throwable -> L1e9
            goto L1dc
        L16d:
            byte[] r5 = com.tencent.bugly.proguard.ap.b(r3)     // Catch: java.lang.Throwable -> L1e9
            if (r5 == 0) goto L174
            r3 = r5
        L174:
            com.tencent.bugly.proguard.br r3 = com.tencent.bugly.proguard.ae.a(r3)     // Catch: java.lang.Throwable -> L1e9
            if (r3 != 0) goto L187
            java.lang.String r3 = "failed to decode response package"
            r11.a(r0, r4, r3)     // Catch: java.lang.Throwable -> L1e9
            android.util.Pair r3 = new android.util.Pair     // Catch: java.lang.Throwable -> L1e9
            java.lang.Boolean r5 = java.lang.Boolean.FALSE     // Catch: java.lang.Throwable -> L1e9
            r3.<init>(r5, r5)     // Catch: java.lang.Throwable -> L1e9
            goto L1c8
        L187:
            java.lang.String r5 = "[Upload] Response cmd is: %d, length of sBuffer is: %d"
            java.lang.Object[] r8 = new java.lang.Object[r9]     // Catch: java.lang.Throwable -> L1e9
            int r10 = r3.b     // Catch: java.lang.Throwable -> L1e9
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.Throwable -> L1e9
            r8[r0] = r10     // Catch: java.lang.Throwable -> L1e9
            byte[] r10 = r3.c     // Catch: java.lang.Throwable -> L1e9
            if (r10 != 0) goto L199
            r10 = 0
            goto L19c
        L199:
            byte[] r10 = r3.c     // Catch: java.lang.Throwable -> L1e9
            int r10 = r10.length     // Catch: java.lang.Throwable -> L1e9
        L19c:
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.Throwable -> L1e9
            r8[r4] = r10     // Catch: java.lang.Throwable -> L1e9
            com.tencent.bugly.proguard.al.c(r5, r8)     // Catch: java.lang.Throwable -> L1e9
            com.tencent.bugly.proguard.aa r5 = r11.i     // Catch: java.lang.Throwable -> L1e9
            com.tencent.bugly.proguard.ac r8 = r11.j     // Catch: java.lang.Throwable -> L1e9
            boolean r3 = a(r3, r5, r8)     // Catch: java.lang.Throwable -> L1e9
            if (r3 != 0) goto L1bc
            java.lang.String r3 = "failed to process response package"
            r11.a(r0, r9, r3)     // Catch: java.lang.Throwable -> L1e9
            android.util.Pair r3 = new android.util.Pair     // Catch: java.lang.Throwable -> L1e9
            java.lang.Boolean r5 = java.lang.Boolean.FALSE     // Catch: java.lang.Throwable -> L1e9
            r3.<init>(r5, r5)     // Catch: java.lang.Throwable -> L1e9
            goto L1c8
        L1bc:
            java.lang.String r3 = "successfully uploaded"
            r11.a(r4, r9, r3)     // Catch: java.lang.Throwable -> L1e9
            android.util.Pair r3 = new android.util.Pair     // Catch: java.lang.Throwable -> L1e9
            java.lang.Boolean r5 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L1e9
            r3.<init>(r5, r5)     // Catch: java.lang.Throwable -> L1e9
        L1c8:
            java.lang.Object r5 = r3.first     // Catch: java.lang.Throwable -> L1e9
            java.lang.Boolean r5 = (java.lang.Boolean) r5     // Catch: java.lang.Throwable -> L1e9
            boolean r5 = r5.booleanValue()     // Catch: java.lang.Throwable -> L1e9
            if (r5 != 0) goto L1db
            java.lang.Object r3 = r3.second     // Catch: java.lang.Throwable -> L1e9
            java.lang.Boolean r3 = (java.lang.Boolean) r3     // Catch: java.lang.Throwable -> L1e9
            boolean r3 = r3.booleanValue()     // Catch: java.lang.Throwable -> L1e9
            goto L1dc
        L1db:
            r3 = 0
        L1dc:
            if (r3 == 0) goto L1e2
            r3 = r7
            r5 = 1
            goto Lcd
        L1e2:
            return
        L1e3:
            java.lang.String r1 = "failed after many attempts"
            r11.a(r0, r5, r1)     // Catch: java.lang.Throwable -> L1e9
            return
        L1e9:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto L1f3
            r0.printStackTrace()
        L1f3:
            return
    }
}
