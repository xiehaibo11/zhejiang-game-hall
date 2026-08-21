package com.loc;

public final class fp {
    protected static java.lang.String I;
    protected static java.lang.String K;
    protected java.util.ArrayList<com.loc.fa> A;
    protected java.util.ArrayList<com.loc.fa> B;
    protected java.lang.String C;
    protected java.lang.String D;
    protected java.util.ArrayList<com.loc.eg> E;
    protected java.lang.String F;
    protected java.lang.String G;
    protected byte[] H;
    protected java.lang.String J;
    protected java.lang.String L;
    protected java.lang.String M;
    protected java.lang.String N;
    protected int O;
    final int P;
    private byte[] Q;
    private int R;
    private java.util.List<com.loc.fc> S;
    private java.util.List<com.loc.fa> T;
    public java.lang.String a;
    protected short b;
    protected java.lang.String c;
    protected java.lang.String d;
    protected java.lang.String e;
    protected java.lang.String f;
    protected java.lang.String g;
    public java.lang.String h;
    public java.lang.String i;
    protected java.lang.String j;
    protected java.lang.String k;
    protected java.lang.String l;
    protected java.lang.String m;
    protected java.lang.String n;
    protected java.lang.String o;
    protected java.lang.String p;
    protected java.lang.String q;
    protected java.lang.String r;
    protected java.lang.String s;
    protected java.lang.String t;
    protected java.lang.String u;
    protected java.lang.String v;
    protected java.lang.String w;
    protected java.lang.String x;
    protected java.lang.String y;
    protected int z;

    static {
            return
    }

    public fp() {
            r3 = this;
            r3.<init>()
            java.lang.String r0 = "1"
            r3.a = r0
            r0 = 0
            r3.b = r0
            r1 = 0
            r3.c = r1
            r3.d = r1
            r3.e = r1
            r3.f = r1
            r3.g = r1
            r3.h = r1
            r3.i = r1
            r3.j = r1
            r3.k = r1
            r3.l = r1
            r3.m = r1
            r3.n = r1
            r3.o = r1
            r3.p = r1
            r3.q = r1
            r3.r = r1
            r3.s = r1
            r3.t = r1
            r3.u = r1
            r3.v = r1
            r3.w = r1
            r3.x = r1
            r3.y = r1
            r3.z = r0
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r3.A = r2
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r3.B = r2
            r3.C = r1
            r3.D = r1
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r3.E = r2
            r3.F = r1
            r3.G = r1
            r3.H = r1
            r3.Q = r1
            r3.R = r0
            r3.J = r1
            r3.L = r1
            r3.M = r1
            r3.N = r1
            r3.O = r0
            r3.S = r1
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.List r0 = java.util.Collections.synchronizedList(r0)
            r3.T = r0
            r0 = 3
            r3.P = r0
            return
    }

    private static int a(java.lang.String r3, byte[] r4, int r5) {
            r0 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L21
            if (r1 == 0) goto La
            r4[r5] = r0     // Catch: java.lang.Throwable -> L21
            goto L2b
        La:
            java.lang.String r1 = "GBK"
            byte[] r3 = r3.getBytes(r1)     // Catch: java.lang.Throwable -> L21
            int r1 = r3.length     // Catch: java.lang.Throwable -> L21
            r2 = 127(0x7f, float:1.78E-43)
            if (r1 <= r2) goto L17
            r1 = 127(0x7f, float:1.78E-43)
        L17:
            byte r2 = (byte) r1     // Catch: java.lang.Throwable -> L21
            r4[r5] = r2     // Catch: java.lang.Throwable -> L21
            int r5 = r5 + 1
            java.lang.System.arraycopy(r3, r0, r4, r5, r1)     // Catch: java.lang.Throwable -> L21
            int r5 = r5 + r1
            goto L2d
        L21:
            r3 = move-exception
            java.lang.String r1 = "Req"
            java.lang.String r2 = "copyContentWithByteLen"
            com.loc.fr.a(r3, r1, r2)
            r4[r5] = r0
        L2b:
            int r5 = r5 + 1
        L2d:
            return r5
    }

    private static void a(com.loc.fa r9, java.util.List<com.loc.fa> r10) {
            if (r9 == 0) goto L6a
            if (r10 != 0) goto L5
            goto L6a
        L5:
            int r0 = r10.size()
            if (r0 != 0) goto Lf
            r10.add(r9)
            return
        Lf:
            r1 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r3 = 0
            r4 = -1
            r5 = -1
        L17:
            if (r3 >= r0) goto L52
            java.lang.Object r6 = r10.get(r3)
            com.loc.fa r6 = (com.loc.fa) r6
            java.lang.String r7 = r9.c()
            if (r7 == 0) goto L42
            java.lang.String r7 = r9.c()
            java.lang.String r8 = r6.c()
            boolean r7 = r7.equals(r8)
            if (r7 == 0) goto L42
            int r3 = r9.s
            int r5 = r6.s
            if (r3 == r5) goto L53
            long r7 = r9.t
            r6.t = r7
            int r3 = r9.s
            r6.s = r3
            goto L53
        L42:
            long r7 = r6.t
            long r1 = java.lang.Math.min(r1, r7)
            long r6 = r6.t
            int r8 = (r1 > r6 ? 1 : (r1 == r6 ? 0 : -1))
            if (r8 != 0) goto L4f
            r5 = r3
        L4f:
            int r3 = r3 + 1
            goto L17
        L52:
            r4 = r5
        L53:
            if (r4 < 0) goto L6a
            r3 = 3
            if (r0 >= r3) goto L5c
            r10.add(r9)
            return
        L5c:
            long r5 = r9.t
            int r3 = (r5 > r1 ? 1 : (r5 == r1 ? 0 : -1))
            if (r3 <= 0) goto L6a
            if (r4 >= r0) goto L6a
            r10.remove(r4)
            r10.add(r9)
        L6a:
            return
    }

    private void a(java.util.ArrayList<com.loc.fa> r3, java.util.ArrayList<com.loc.fa> r4) {
            r2 = this;
            if (r4 == 0) goto L26
            int r0 = r4.size()
            if (r0 <= 0) goto L26
            java.util.Iterator r4 = r4.iterator()
        Lc:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L26
            java.lang.Object r0 = r4.next()
            com.loc.fa r0 = (com.loc.fa) r0
            boolean r1 = r0.r
            if (r1 == 0) goto Lc
            boolean r1 = r0.n
            if (r1 == 0) goto Lc
            java.util.List<com.loc.fa> r3 = r2.T
            a(r0, r3)
            return
        L26:
            if (r3 == 0) goto L3a
            int r4 = r3.size()
            if (r4 <= 0) goto L3a
            r4 = 0
            java.lang.Object r3 = r3.get(r4)
            com.loc.fa r3 = (com.loc.fa) r3
            java.util.List<com.loc.fa> r4 = r2.T
            a(r3, r4)
        L3a:
            return
    }

    private byte[] a(java.lang.String r7) {
            r6 = this;
            java.lang.String r0 = ":"
            java.lang.String[] r0 = r7.split(r0)
            r1 = 6
            byte[] r2 = new byte[r1]
            r3 = 0
            if (r0 == 0) goto Lf
            int r4 = r0.length     // Catch: java.lang.Throwable -> L3e
            if (r4 == r1) goto L1b
        Lf:
            java.lang.String[] r0 = new java.lang.String[r1]     // Catch: java.lang.Throwable -> L3e
            r4 = 0
        L12:
            if (r4 >= r1) goto L1b
            java.lang.String r5 = "0"
            r0[r4] = r5     // Catch: java.lang.Throwable -> L3e
            int r4 = r4 + 1
            goto L12
        L1b:
            r1 = 0
        L1c:
            int r4 = r0.length     // Catch: java.lang.Throwable -> L3e
            if (r1 >= r4) goto L54
            r4 = r0[r1]     // Catch: java.lang.Throwable -> L3e
            int r4 = r4.length()     // Catch: java.lang.Throwable -> L3e
            r5 = 2
            if (r4 <= r5) goto L30
            r4 = r0[r1]     // Catch: java.lang.Throwable -> L3e
            java.lang.String r4 = r4.substring(r3, r5)     // Catch: java.lang.Throwable -> L3e
            r0[r1] = r4     // Catch: java.lang.Throwable -> L3e
        L30:
            r4 = r0[r1]     // Catch: java.lang.Throwable -> L3e
            r5 = 16
            int r4 = java.lang.Integer.parseInt(r4, r5)     // Catch: java.lang.Throwable -> L3e
            byte r4 = (byte) r4     // Catch: java.lang.Throwable -> L3e
            r2[r1] = r4     // Catch: java.lang.Throwable -> L3e
            int r1 = r1 + 1
            goto L1c
        L3e:
            r0 = move-exception
            java.lang.String r7 = java.lang.String.valueOf(r7)
            java.lang.String r1 = "getMacBa "
            java.lang.String r7 = r1.concat(r7)
            java.lang.String r1 = "Req"
            com.loc.fr.a(r0, r1, r7)
            java.lang.String r7 = "00:00:00:00:00:00"
            byte[] r2 = r6.a(r7)
        L54:
            return r2
    }

    private void b() {
            r5 = this;
            r0 = 27
            java.lang.String[] r1 = new java.lang.String[r0]
            java.lang.String r2 = r5.a
            r3 = 0
            r1[r3] = r2
            java.lang.String r2 = r5.c
            r4 = 1
            r1[r4] = r2
            java.lang.String r2 = r5.d
            r4 = 2
            r1[r4] = r2
            java.lang.String r2 = r5.e
            r4 = 3
            r1[r4] = r2
            java.lang.String r2 = r5.f
            r4 = 4
            r1[r4] = r2
            java.lang.String r2 = r5.g
            r4 = 5
            r1[r4] = r2
            java.lang.String r2 = r5.h
            r4 = 6
            r1[r4] = r2
            java.lang.String r2 = r5.i
            r4 = 7
            r1[r4] = r2
            java.lang.String r2 = r5.l
            r4 = 8
            r1[r4] = r2
            java.lang.String r2 = r5.m
            r4 = 9
            r1[r4] = r2
            java.lang.String r2 = r5.n
            r4 = 10
            r1[r4] = r2
            java.lang.String r2 = r5.o
            r4 = 11
            r1[r4] = r2
            java.lang.String r2 = r5.p
            r4 = 12
            r1[r4] = r2
            java.lang.String r2 = r5.q
            r4 = 13
            r1[r4] = r2
            java.lang.String r2 = r5.r
            r4 = 14
            r1[r4] = r2
            java.lang.String r2 = r5.s
            r4 = 15
            r1[r4] = r2
            java.lang.String r2 = r5.t
            r4 = 16
            r1[r4] = r2
            java.lang.String r2 = r5.u
            r4 = 17
            r1[r4] = r2
            java.lang.String r2 = r5.v
            r4 = 18
            r1[r4] = r2
            java.lang.String r2 = r5.w
            r4 = 19
            r1[r4] = r2
            java.lang.String r2 = r5.x
            r4 = 20
            r1[r4] = r2
            java.lang.String r2 = r5.D
            r4 = 21
            r1[r4] = r2
            java.lang.String r2 = r5.F
            r4 = 22
            r1[r4] = r2
            java.lang.String r2 = r5.G
            r4 = 23
            r1[r4] = r2
            java.lang.String r2 = com.loc.fp.I
            r4 = 24
            r1[r4] = r2
            java.lang.String r2 = r5.M
            r4 = 25
            r1[r4] = r2
            java.lang.String r2 = r5.N
            r4 = 26
            r1[r4] = r2
            r2 = 0
        L9f:
            if (r2 >= r0) goto Lb0
            r4 = r1[r2]
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 == 0) goto Lad
            java.lang.String r4 = ""
            r1[r2] = r4
        Lad:
            int r2 = r2 + 1
            goto L9f
        Lb0:
            java.lang.String r0 = r5.j
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r1 = "2"
            java.lang.String r2 = "0"
            if (r0 == 0) goto Lbf
        Lbc:
            r5.j = r2
            goto Ld0
        Lbf:
            java.lang.String r0 = r5.j
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto Ld0
            java.lang.String r0 = r5.j
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto Ld0
            goto Lbc
        Ld0:
            java.lang.String r0 = r5.k
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r4 = "1"
            if (r0 == 0) goto Ldd
        Lda:
            r5.k = r2
            goto Lee
        Ldd:
            java.lang.String r0 = r5.k
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto Lee
            java.lang.String r0 = r5.k
            boolean r0 = r4.equals(r0)
            if (r0 != 0) goto Lee
            goto Lda
        Lee:
            java.lang.String r0 = r5.y
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Lf9
        Lf6:
            r5.y = r2
            goto L10a
        Lf9:
            java.lang.String r0 = r5.y
            boolean r0 = r4.equals(r0)
            if (r0 != 0) goto L10a
            java.lang.String r0 = r5.y
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L10a
            goto Lf6
        L10a:
            int r0 = r5.z
            boolean r0 = com.loc.fb.a(r0)
            if (r0 != 0) goto L114
            r5.z = r3
        L114:
            byte[] r0 = r5.H
            if (r0 != 0) goto L11c
            byte[] r0 = new byte[r3]
            r5.H = r0
        L11c:
            return
    }

    public final void a(android.content.Context r19, boolean r20, boolean r21, com.loc.fb r22, com.loc.ff r23, android.net.ConnectivityManager r24, java.lang.String r25, com.loc.fd r26) {
            r18 = this;
            r1 = r18
            java.lang.String r2 = com.loc.l.f(r19)
            int r3 = com.loc.fz.d()
            r0 = r25
            r1.J = r0
            r4 = 0
            r1.S = r4
            if (r21 != 0) goto L18
            java.lang.String r0 = "UC_nlp_20131029"
            java.lang.String r5 = "BKZCHMBBSSUK7U8GLUKHBB56CCFF78U"
            goto L1c
        L18:
            java.lang.String r0 = "api_serverSDK_130905"
            java.lang.String r5 = "S128DF1572465B890OE3F7A13167KLEI"
        L1c:
            r6 = r5
            r5 = r0
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            int r8 = r22.g()
            int r0 = r22.h()
            android.telephony.TelephonyManager r9 = r22.i()
            java.util.ArrayList r10 = r22.c()
            java.util.ArrayList r11 = r22.d()
            java.util.ArrayList r12 = r23.e()
            java.lang.String r13 = "1"
            r14 = 2
            java.lang.String r15 = "0"
            if (r0 != r14) goto L44
            r4 = r13
            goto L45
        L44:
            r4 = r15
        L45:
            java.lang.String r14 = "Aps"
            if (r9 == 0) goto L9a
            java.lang.String r0 = com.loc.fr.g
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L5e
            java.lang.String r0 = com.loc.o.k()     // Catch: java.lang.Throwable -> L58
            com.loc.fr.g = r0     // Catch: java.lang.Throwable -> L58
            goto L5e
        L58:
            r0 = move-exception
            java.lang.String r9 = "getApsReq part4"
            com.loc.fr.a(r0, r14, r9)
        L5e:
            java.lang.String r0 = com.loc.fr.g
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r9 = "888888888888888"
            r16 = r13
            r13 = 29
            if (r0 == 0) goto L72
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 >= r13) goto L72
            com.loc.fr.g = r9
        L72:
            java.lang.String r0 = com.loc.fr.h
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L89
            java.lang.String r0 = com.loc.o.n()     // Catch: java.lang.Throwable -> L81 java.lang.SecurityException -> L88
            com.loc.fr.h = r0     // Catch: java.lang.Throwable -> L81 java.lang.SecurityException -> L88
            goto L89
        L81:
            r0 = move-exception
            java.lang.String r13 = "getApsReq part2"
            com.loc.fr.a(r0, r14, r13)
            goto L89
        L88:
        L89:
            java.lang.String r0 = com.loc.fr.h
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L9c
            int r0 = android.os.Build.VERSION.SDK_INT
            r13 = 29
            if (r0 >= r13) goto L9c
            com.loc.fr.h = r9
            goto L9c
        L9a:
            r16 = r13
        L9c:
            android.net.NetworkInfo r0 = r24.getActiveNetworkInfo()     // Catch: java.lang.Throwable -> La1
            goto La9
        La1:
            r0 = move-exception
            r9 = r0
            java.lang.String r0 = "getApsReq part"
            com.loc.fr.a(r9, r14, r0)
            r0 = 0
        La9:
            boolean r9 = r23.a(r24)
            int r0 = com.loc.fz.a(r0)
            r13 = -1
            java.lang.String r14 = ""
            if (r0 == r13) goto Lc2
            java.lang.String r0 = com.loc.fz.a(r24)
            if (r9 == 0) goto Lbf
            java.lang.String r13 = "2"
            goto Lc4
        Lbf:
            r13 = r16
            goto Lc4
        Lc2:
            r0 = r14
            r13 = r0
        Lc4:
            r16 = r7
            r7 = r8 & 4
            r17 = r8
            r8 = 4
            if (r7 != r8) goto Lde
            boolean r7 = r11.isEmpty()
            if (r7 != 0) goto Lde
            java.util.ArrayList<com.loc.fa> r7 = r1.B
            r7.clear()
            java.util.ArrayList<com.loc.fa> r7 = r1.B
            r7.addAll(r11)
            goto Le3
        Lde:
            java.util.ArrayList<com.loc.fa> r7 = r1.B
            r7.clear()
        Le3:
            java.util.ArrayList<com.loc.fa> r7 = r1.A
            r7.clear()
            java.util.ArrayList<com.loc.fa> r7 = r1.A
            r7.addAll(r10)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            boolean r8 = r23.k()
            if (r8 == 0) goto L157
            if (r9 == 0) goto L148
            android.net.wifi.WifiInfo r8 = r23.m()
            boolean r9 = com.loc.ff.a(r8)
            if (r9 == 0) goto L148
            java.lang.String r9 = r8.getBSSID()
            r7.append(r9)
            java.lang.String r9 = ","
            r7.append(r9)
            int r11 = r8.getRssi()
            r10 = -128(0xffffffffffffff80, float:NaN)
            if (r11 >= r10) goto L11a
        L118:
            r11 = 0
            goto L11f
        L11a:
            r10 = 127(0x7f, float:1.78E-43)
            if (r11 <= r10) goto L11f
            goto L118
        L11f:
            r7.append(r11)
            r7.append(r9)
            java.lang.String r9 = r8.getSSID()
            r10 = 32
            java.lang.String r8 = r8.getSSID()     // Catch: java.lang.Exception -> L137
            java.lang.String r11 = "UTF-8"
            byte[] r8 = r8.getBytes(r11)     // Catch: java.lang.Exception -> L137
            int r8 = r8.length     // Catch: java.lang.Exception -> L137
            goto L139
        L137:
            r8 = 32
        L139:
            if (r8 < r10) goto L13d
            java.lang.String r9 = "unkwn"
        L13d:
            java.lang.String r8 = "*"
            java.lang.String r10 = "."
            java.lang.String r8 = r9.replace(r8, r10)
            r7.append(r8)
        L148:
            if (r12 == 0) goto L161
            java.util.ArrayList<com.loc.eg> r8 = r1.E
            if (r8 == 0) goto L161
            r8.clear()
            java.util.ArrayList<com.loc.eg> r8 = r1.E
            r8.addAll(r12)
            goto L161
        L157:
            r23.g()
            java.util.ArrayList<com.loc.eg> r8 = r1.E
            if (r8 == 0) goto L161
            r8.clear()
        L161:
            r8 = 0
            r1.b = r8
            if (r20 != 0) goto L16c
            r8 = 0
            r9 = 2
            r8 = r8 | r9
            short r8 = (short) r8
            r1.b = r8
        L16c:
            r1.c = r5
            r1.d = r6
            java.lang.String r5 = android.os.Build.MODEL
            r1.f = r5
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r6 = "android"
            r5.<init>(r6)
            java.lang.String r6 = android.os.Build.VERSION.RELEASE
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r1.g = r5
            java.lang.String r5 = com.loc.fz.b(r19)
            r1.h = r5
            r1.i = r4
            r1.j = r15
            r1.k = r15
            r1.l = r15
            r1.m = r15
            r1.n = r15
            r1.o = r2
            java.lang.String r2 = com.loc.fr.g
            r1.p = r2
            java.lang.String r2 = com.loc.fr.h
            r1.q = r2
            java.lang.String r2 = java.lang.String.valueOf(r3)
            r1.s = r2
            java.lang.String r2 = com.loc.fz.i(r19)
            r1.t = r2
            java.lang.String r2 = "6.4.0"
            r1.v = r2
            r2 = 0
            r1.w = r2
            r1.u = r14
            r1.x = r0
            r1.y = r13
            r2 = r17
            r1.z = r2
            java.lang.String r0 = r22.l()
            r1.C = r0
            java.lang.String r0 = com.loc.ff.p()
            r1.F = r0
            java.lang.String r0 = r7.toString()
            r1.D = r0
            long r2 = com.loc.fz.b()
            long r4 = r23.q()
            long r2 = r2 - r4
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 / r4
            int r0 = (int) r2
            r1.O = r0
            java.lang.String r0 = com.loc.fp.I     // Catch: java.lang.Throwable -> L1ee
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L1ee
            if (r0 == 0) goto L1ee
            java.lang.String r0 = com.loc.o.f(r19)     // Catch: java.lang.Throwable -> L1ee
            com.loc.fp.I = r0     // Catch: java.lang.Throwable -> L1ee
        L1ee:
            java.lang.String r0 = com.loc.fp.K     // Catch: java.lang.Throwable -> L1fc
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L1fc
            if (r0 == 0) goto L1fc
            java.lang.String r0 = com.loc.o.a(r19)     // Catch: java.lang.Throwable -> L1fc
            com.loc.fp.K = r0     // Catch: java.lang.Throwable -> L1fc
        L1fc:
            java.lang.String r0 = r1.M     // Catch: java.lang.Throwable -> L20a
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L20a
            if (r0 == 0) goto L20a
            java.lang.String r0 = com.loc.o.f()     // Catch: java.lang.Throwable -> L20a
            r1.M = r0     // Catch: java.lang.Throwable -> L20a
        L20a:
            java.lang.String r0 = r1.N     // Catch: java.lang.Throwable -> L218
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L218
            if (r0 == 0) goto L218
            java.lang.String r0 = com.loc.o.e(r19)     // Catch: java.lang.Throwable -> L218
            r1.N = r0     // Catch: java.lang.Throwable -> L218
        L218:
            java.util.ArrayList<com.loc.fa> r0 = r1.B     // Catch: java.lang.Throwable -> L22c
            java.util.ArrayList<com.loc.eg> r2 = r1.E     // Catch: java.lang.Throwable -> L22c
            r3 = r26
            java.util.List r0 = r3.a(r0, r2)     // Catch: java.lang.Throwable -> L22c
            r1.S = r0     // Catch: java.lang.Throwable -> L22c
            java.util.ArrayList<com.loc.fa> r0 = r1.A     // Catch: java.lang.Throwable -> L22c
            java.util.ArrayList<com.loc.fa> r2 = r1.B     // Catch: java.lang.Throwable -> L22c
            r1.a(r0, r2)     // Catch: java.lang.Throwable -> L22c
            goto L230
        L22c:
            r0 = move-exception
            r0.printStackTrace()
        L230:
            int r0 = r16.length()
            r2 = r16
            r3 = 0
            r2.delete(r3, r0)
            int r0 = r7.length()
            r7.delete(r3, r0)
            return
    }

    public final byte[] a() {
            r30 = this;
            r1 = r30
            java.lang.String r2 = "Req"
            r30.b()
            r3 = 2
            byte[] r4 = new byte[r3]
            r5 = 4
            byte[] r6 = new byte[r5]
            byte[] r0 = r1.H
            r7 = 4096(0x1000, float:5.74E-42)
            r8 = 1
            if (r0 == 0) goto L17
            int r0 = r0.length
            int r0 = r0 + r8
            int r7 = r7 + r0
        L17:
            byte[] r0 = r1.Q
            if (r0 == 0) goto L1f
            int r9 = r1.R
            if (r7 <= r9) goto L25
        L1f:
            byte[] r0 = new byte[r7]
            r1.Q = r0
            r1.R = r7
        L25:
            r7 = r0
            java.lang.String r0 = r1.a
            byte r0 = com.loc.fz.g(r0)
            r9 = 0
            r7[r9] = r0
            short r0 = r1.b
            r10 = 0
            byte[] r0 = com.loc.fz.a(r0, r10)
            int r11 = r0.length
            java.lang.System.arraycopy(r0, r9, r7, r8, r11)
            int r0 = r0.length
            int r0 = r0 + r8
            java.lang.String r11 = r1.c
            int r0 = a(r11, r7, r0)
            java.lang.String r11 = r1.d
            int r0 = a(r11, r7, r0)
            java.lang.String r11 = r1.o
            int r0 = a(r11, r7, r0)
            java.lang.String r11 = r1.e
            int r0 = a(r11, r7, r0)
            java.lang.String r11 = r1.f
            int r0 = a(r11, r7, r0)
            java.lang.String r11 = r1.g
            int r0 = a(r11, r7, r0)
            java.lang.String r11 = r1.u
            int r0 = a(r11, r7, r0)
            java.lang.String r11 = r1.h
            int r0 = a(r11, r7, r0)
            java.lang.String r11 = r1.p
            int r0 = a(r11, r7, r0)
            java.lang.String r11 = r1.q
            int r11 = a(r11, r7, r0)
            java.lang.String r0 = r1.t     // Catch: java.lang.Throwable -> L96
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L96
            if (r0 == 0) goto L83
            r7[r11] = r9     // Catch: java.lang.Throwable -> L96
            goto L9e
        L83:
            java.lang.String r0 = r1.t     // Catch: java.lang.Throwable -> L96
            byte[] r0 = r1.a(r0)     // Catch: java.lang.Throwable -> L96
            int r12 = r0.length     // Catch: java.lang.Throwable -> L96
            byte r12 = (byte) r12     // Catch: java.lang.Throwable -> L96
            r7[r11] = r12     // Catch: java.lang.Throwable -> L96
            int r11 = r11 + 1
            int r12 = r0.length     // Catch: java.lang.Throwable -> L96
            java.lang.System.arraycopy(r0, r9, r7, r11, r12)     // Catch: java.lang.Throwable -> L96
            int r0 = r0.length     // Catch: java.lang.Throwable -> L96
            int r11 = r11 + r0
            goto L9f
        L96:
            r0 = move-exception
            java.lang.String r12 = "buildV4Dot219"
            com.loc.fr.a(r0, r2, r12)
            r7[r11] = r9
        L9e:
            int r11 = r11 + r8
        L9f:
            java.lang.String r0 = r1.v
            int r0 = a(r0, r7, r11)
            java.lang.String r11 = r1.w
            int r0 = a(r11, r7, r0)
            java.lang.String r11 = com.loc.fp.I
            int r0 = a(r11, r7, r0)
            java.lang.String r11 = com.loc.fp.K
            int r0 = a(r11, r7, r0)
            java.lang.String r11 = r1.x
            int r0 = a(r11, r7, r0)
            java.lang.String r11 = r1.y
            byte r11 = java.lang.Byte.parseByte(r11)
            r7[r0] = r11
            int r0 = r0 + r8
            java.lang.String r11 = r1.j
            byte r11 = java.lang.Byte.parseByte(r11)
            r7[r0] = r11
            int r0 = r0 + r8
            int r11 = r1.z
            r12 = r11 & 3
            byte r11 = (byte) r11
            r7[r0] = r11
            int r0 = r0 + r8
            r11 = -128(0xffffffffffffff80, float:NaN)
            r15 = 1000(0x3e8, double:4.94E-321)
            r17 = 0
            r5 = 127(0x7f, float:1.78E-43)
            if (r12 == r8) goto Le8
            if (r12 != r3) goto Le4
            goto Le8
        Le4:
            r21 = r6
            goto L323
        Le8:
            java.util.ArrayList<com.loc.fa> r13 = r1.A
            int r13 = r13.size()
            if (r13 <= 0) goto Lfb
            java.util.ArrayList<com.loc.fa> r13 = r1.A
            java.lang.Object r13 = r13.get(r9)
            com.loc.fa r13 = (com.loc.fa) r13
            int r13 = r13.a
            goto Lfc
        Lfb:
            r13 = 0
        Lfc:
            byte[] r13 = com.loc.fz.a(r13, r10)
            int r14 = r13.length
            java.lang.System.arraycopy(r13, r9, r7, r0, r14)
            int r13 = r13.length
            int r0 = r0 + r13
            if (r12 != r8) goto L164
            java.util.ArrayList<com.loc.fa> r13 = r1.A
            int r13 = r13.size()
            if (r13 <= 0) goto L11b
            java.util.ArrayList<com.loc.fa> r13 = r1.A
            java.lang.Object r13 = r13.get(r9)
            com.loc.fa r13 = (com.loc.fa) r13
            int r13 = r13.b
            goto L11c
        L11b:
            r13 = 0
        L11c:
            byte[] r13 = com.loc.fz.a(r13, r10)
            int r14 = r13.length
            java.lang.System.arraycopy(r13, r9, r7, r0, r14)
            int r13 = r13.length
            int r0 = r0 + r13
            java.util.ArrayList<com.loc.fa> r13 = r1.A
            int r13 = r13.size()
            if (r13 <= 0) goto L139
            java.util.ArrayList<com.loc.fa> r13 = r1.A
            java.lang.Object r13 = r13.get(r9)
            com.loc.fa r13 = (com.loc.fa) r13
            int r13 = r13.c
            goto L13a
        L139:
            r13 = 0
        L13a:
            byte[] r13 = com.loc.fz.a(r13, r10)
            int r14 = r13.length
            java.lang.System.arraycopy(r13, r9, r7, r0, r14)
            int r13 = r13.length
            int r0 = r0 + r13
            java.util.ArrayList<com.loc.fa> r13 = r1.A
            int r13 = r13.size()
            if (r13 <= 0) goto L157
            java.util.ArrayList<com.loc.fa> r13 = r1.A
            java.lang.Object r13 = r13.get(r9)
            com.loc.fa r13 = (com.loc.fa) r13
            int r13 = r13.d
            goto L158
        L157:
            r13 = 0
        L158:
            byte[] r13 = com.loc.fz.b(r13, r10)
            int r14 = r13.length
            java.lang.System.arraycopy(r13, r9, r7, r0, r14)
            int r13 = r13.length
        L161:
            int r0 = r0 + r13
            goto L1fd
        L164:
            if (r12 != r3) goto L1fd
            java.util.ArrayList<com.loc.fa> r13 = r1.A
            int r13 = r13.size()
            if (r13 <= 0) goto L179
            java.util.ArrayList<com.loc.fa> r13 = r1.A
            java.lang.Object r13 = r13.get(r9)
            com.loc.fa r13 = (com.loc.fa) r13
            int r13 = r13.h
            goto L17a
        L179:
            r13 = 0
        L17a:
            byte[] r13 = com.loc.fz.a(r13, r10)
            int r14 = r13.length
            java.lang.System.arraycopy(r13, r9, r7, r0, r14)
            int r13 = r13.length
            int r0 = r0 + r13
            java.util.ArrayList<com.loc.fa> r13 = r1.A
            int r13 = r13.size()
            if (r13 <= 0) goto L197
            java.util.ArrayList<com.loc.fa> r13 = r1.A
            java.lang.Object r13 = r13.get(r9)
            com.loc.fa r13 = (com.loc.fa) r13
            int r13 = r13.i
            goto L198
        L197:
            r13 = 0
        L198:
            byte[] r13 = com.loc.fz.a(r13, r10)
            int r14 = r13.length
            java.lang.System.arraycopy(r13, r9, r7, r0, r14)
            int r13 = r13.length
            int r0 = r0 + r13
            java.util.ArrayList<com.loc.fa> r13 = r1.A
            int r13 = r13.size()
            if (r13 <= 0) goto L1b5
            java.util.ArrayList<com.loc.fa> r13 = r1.A
            java.lang.Object r13 = r13.get(r9)
            com.loc.fa r13 = (com.loc.fa) r13
            int r13 = r13.j
            goto L1b6
        L1b5:
            r13 = 0
        L1b6:
            byte[] r13 = com.loc.fz.a(r13, r10)
            int r14 = r13.length
            java.lang.System.arraycopy(r13, r9, r7, r0, r14)
            int r13 = r13.length
            int r0 = r0 + r13
            java.util.ArrayList<com.loc.fa> r13 = r1.A
            int r13 = r13.size()
            if (r13 <= 0) goto L1d3
            java.util.ArrayList<com.loc.fa> r13 = r1.A
            java.lang.Object r13 = r13.get(r9)
            com.loc.fa r13 = (com.loc.fa) r13
            int r13 = r13.g
            goto L1d4
        L1d3:
            r13 = 0
        L1d4:
            byte[] r13 = com.loc.fz.b(r13, r10)
            int r14 = r13.length
            java.lang.System.arraycopy(r13, r9, r7, r0, r14)
            int r13 = r13.length
            int r0 = r0 + r13
            java.util.ArrayList<com.loc.fa> r13 = r1.A
            int r13 = r13.size()
            if (r13 <= 0) goto L1f1
            java.util.ArrayList<com.loc.fa> r13 = r1.A
            java.lang.Object r13 = r13.get(r9)
            com.loc.fa r13 = (com.loc.fa) r13
            int r13 = r13.f
            goto L1f2
        L1f1:
            r13 = 0
        L1f2:
            byte[] r13 = com.loc.fz.b(r13, r10)
            int r14 = r13.length
            java.lang.System.arraycopy(r13, r9, r7, r0, r14)
            int r13 = r13.length
            goto L161
        L1fd:
            java.util.ArrayList<com.loc.fa> r13 = r1.A
            int r13 = r13.size()
            if (r13 <= 0) goto L210
            java.util.ArrayList<com.loc.fa> r13 = r1.A
            java.lang.Object r13 = r13.get(r9)
            com.loc.fa r13 = (com.loc.fa) r13
            int r13 = r13.k
            goto L211
        L210:
            r13 = 0
        L211:
            if (r13 <= r5) goto L215
        L213:
            r13 = 0
            goto L218
        L215:
            if (r13 >= r11) goto L218
            goto L213
        L218:
            byte r13 = (byte) r13
            r7[r0] = r13
            int r0 = r0 + r8
            java.util.ArrayList<com.loc.fa> r13 = r1.A
            int r13 = r13.size()
            if (r13 <= 0) goto L237
            long r13 = com.loc.fz.b()
            java.util.ArrayList<com.loc.fa> r11 = r1.A
            java.lang.Object r11 = r11.get(r9)
            com.loc.fa r11 = (com.loc.fa) r11
            r21 = r6
            long r5 = r11.t
            long r13 = r13 - r5
            long r13 = r13 / r15
            goto L23b
        L237:
            r21 = r6
            r13 = r17
        L23b:
            r5 = 65535(0xffff, double:3.23786E-319)
            int r11 = (r13 > r5 ? 1 : (r13 == r5 ? 0 : -1))
            if (r11 <= 0) goto L243
            r13 = r5
        L243:
            int r11 = (r13 > r17 ? 1 : (r13 == r17 ? 0 : -1))
            if (r11 >= 0) goto L249
            r13 = r17
        L249:
            int r11 = (int) r13
            byte[] r11 = com.loc.fz.a(r11, r4)
            int r13 = r11.length
            java.lang.System.arraycopy(r11, r9, r7, r0, r13)
            int r0 = r0 + r3
            if (r12 != r8) goto L31c
            java.util.ArrayList<com.loc.fa> r11 = r1.A
            int r11 = r11.size()
            if (r11 != 0) goto L261
            r7[r0] = r9
            goto L321
        L261:
            java.util.ArrayList<com.loc.fa> r11 = r1.A
            int r11 = r11.size()
            byte r12 = (byte) r11
            r7[r0] = r12
            int r0 = r0 + 1
            r12 = 0
        L26d:
            if (r12 >= r11) goto L323
            java.util.ArrayList<com.loc.fa> r13 = r1.A
            int r13 = r13.size()
            if (r13 <= 0) goto L282
            java.util.ArrayList<com.loc.fa> r13 = r1.A
            java.lang.Object r13 = r13.get(r12)
            com.loc.fa r13 = (com.loc.fa) r13
            int r13 = r13.c
            goto L283
        L282:
            r13 = 0
        L283:
            byte[] r13 = com.loc.fz.a(r13, r10)
            int r14 = r13.length
            java.lang.System.arraycopy(r13, r9, r7, r0, r14)
            int r13 = r13.length
            int r0 = r0 + r13
            java.util.ArrayList<com.loc.fa> r13 = r1.A
            int r13 = r13.size()
            if (r13 <= 0) goto L2a0
            java.util.ArrayList<com.loc.fa> r13 = r1.A
            java.lang.Object r13 = r13.get(r12)
            com.loc.fa r13 = (com.loc.fa) r13
            int r13 = r13.d
            goto L2a1
        L2a0:
            r13 = 0
        L2a1:
            byte[] r13 = com.loc.fz.b(r13, r10)
            int r14 = r13.length
            java.lang.System.arraycopy(r13, r9, r7, r0, r14)
            int r13 = r13.length
            int r0 = r0 + r13
            java.util.ArrayList<com.loc.fa> r13 = r1.A
            int r13 = r13.size()
            if (r13 <= 0) goto L2be
            java.util.ArrayList<com.loc.fa> r13 = r1.A
            java.lang.Object r13 = r13.get(r12)
            com.loc.fa r13 = (com.loc.fa) r13
            int r13 = r13.k
            goto L2bf
        L2be:
            r13 = 0
        L2bf:
            r14 = 127(0x7f, float:1.78E-43)
            if (r13 <= r14) goto L2c5
        L2c3:
            r13 = 0
            goto L2ca
        L2c5:
            r14 = -128(0xffffffffffffff80, float:NaN)
            if (r13 >= r14) goto L2ca
            goto L2c3
        L2ca:
            byte r13 = (byte) r13
            r7[r0] = r13
            int r0 = r0 + r8
            java.lang.String r13 = com.loc.fr.a
            java.lang.Double r13 = java.lang.Double.valueOf(r13)
            double r13 = r13.doubleValue()
            r19 = 4617540697942969549(0x4014cccccccccccd, double:5.2)
            int r22 = (r13 > r19 ? 1 : (r13 == r19 ? 0 : -1))
            if (r22 < 0) goto L314
            java.util.ArrayList<com.loc.fa> r13 = r1.A
            int r13 = r13.size()
            if (r13 <= 0) goto L2fa
            long r13 = com.loc.fz.b()
            java.util.ArrayList<com.loc.fa> r10 = r1.A
            java.lang.Object r10 = r10.get(r9)
            com.loc.fa r10 = (com.loc.fa) r10
            long r8 = r10.t
            long r13 = r13 - r8
            long r13 = r13 / r15
            goto L2fc
        L2fa:
            r13 = r17
        L2fc:
            int r8 = (r13 > r5 ? 1 : (r13 == r5 ? 0 : -1))
            if (r8 <= 0) goto L301
            r13 = r5
        L301:
            int r8 = (r13 > r17 ? 1 : (r13 == r17 ? 0 : -1))
            if (r8 >= 0) goto L307
            r13 = r17
        L307:
            int r8 = (int) r13
            byte[] r8 = com.loc.fz.a(r8, r4)
            int r9 = r8.length
            r10 = 0
            java.lang.System.arraycopy(r8, r10, r7, r0, r9)
            int r8 = r8.length
            int r0 = r0 + r8
            goto L315
        L314:
            r10 = 0
        L315:
            int r12 = r12 + 1
            r8 = 1
            r9 = 0
            r10 = 0
            goto L26d
        L31c:
            r10 = 0
            if (r12 != r3) goto L323
            r7[r0] = r10
        L321:
            int r0 = r0 + 1
        L323:
            java.lang.String r5 = r1.C
            java.lang.String r6 = "GBK"
            r8 = 8
            if (r5 == 0) goto L346
            int r9 = r1.z
            r9 = r9 & r8
            if (r9 != r8) goto L346
            byte[] r5 = r5.getBytes(r6)     // Catch: java.lang.Exception -> L346
            int r9 = r5.length     // Catch: java.lang.Exception -> L346
            r10 = 60
            int r9 = java.lang.Math.min(r9, r10)     // Catch: java.lang.Exception -> L346
            byte r10 = (byte) r9     // Catch: java.lang.Exception -> L346
            r7[r0] = r10     // Catch: java.lang.Exception -> L346
            int r0 = r0 + 1
            r10 = 0
            java.lang.System.arraycopy(r5, r10, r7, r0, r9)     // Catch: java.lang.Exception -> L346
            int r0 = r0 + r9
            goto L34b
        L346:
            r5 = 0
            r7[r0] = r5
            r5 = 1
            int r0 = r0 + r5
        L34b:
            java.util.ArrayList<com.loc.fa> r5 = r1.B
            int r9 = r5.size()
            int r10 = r1.z
            r11 = 4
            r10 = r10 & r11
            r23 = 4617653287933653811(0x4015333333333333, double:5.3)
            r14 = 5
            r12 = 3
            if (r10 != r11) goto L547
            if (r9 <= 0) goto L547
            r10 = 0
            r5.get(r10)
            byte r10 = (byte) r9
            r7[r0] = r10
            r10 = 1
            int r0 = r0 + r10
            r11 = 0
        L36a:
            if (r11 >= r9) goto L543
            java.lang.Object r13 = r5.get(r11)
            com.loc.fa r13 = (com.loc.fa) r13
            int r15 = r13.l
            if (r15 == r10) goto L426
            int r10 = r13.l
            if (r10 == r12) goto L426
            int r10 = r13.l
            r15 = 4
            if (r10 != r15) goto L381
            goto L426
        L381:
            int r10 = r13.l
            if (r10 != r3) goto L3df
            int r10 = r13.l
            byte r10 = (byte) r10
            boolean r15 = r13.n
            if (r15 == 0) goto L38f
            r10 = r10 | 8
            byte r10 = (byte) r10
        L38f:
            r7[r0] = r10
            int r0 = r0 + 1
            int r10 = r13.a
            byte[] r10 = com.loc.fz.a(r10, r4)
            int r15 = r10.length
            r3 = 0
            java.lang.System.arraycopy(r10, r3, r7, r0, r15)
            int r10 = r10.length
            int r0 = r0 + r10
            int r10 = r13.h
            byte[] r10 = com.loc.fz.a(r10, r4)
            int r15 = r10.length
            java.lang.System.arraycopy(r10, r3, r7, r0, r15)
            int r10 = r10.length
            int r0 = r0 + r10
            int r10 = r13.i
            byte[] r10 = com.loc.fz.a(r10, r4)
            int r15 = r10.length
            java.lang.System.arraycopy(r10, r3, r7, r0, r15)
            int r10 = r10.length
            int r0 = r0 + r10
            int r10 = r13.j
            byte[] r10 = com.loc.fz.a(r10, r4)
            int r15 = r10.length
            java.lang.System.arraycopy(r10, r3, r7, r0, r15)
            int r10 = r10.length
            int r0 = r0 + r10
            int r10 = r13.g
            r15 = r21
            byte[] r10 = com.loc.fz.b(r10, r15)
            int r12 = r10.length
            java.lang.System.arraycopy(r10, r3, r7, r0, r12)
            int r10 = r10.length
            int r0 = r0 + r10
            int r10 = r13.f
            byte[] r10 = com.loc.fz.b(r10, r15)
            int r12 = r10.length
            java.lang.System.arraycopy(r10, r3, r7, r0, r12)
            int r3 = r10.length
            int r0 = r0 + r3
            goto L424
        L3df:
            r15 = r21
            int r3 = r13.l
            if (r3 != r14) goto L424
            int r3 = r13.l
            byte r3 = (byte) r3
            boolean r10 = r13.n
            if (r10 == 0) goto L3ef
            r3 = r3 | 8
            byte r3 = (byte) r3
        L3ef:
            r7[r0] = r3
            int r0 = r0 + 1
            int r3 = r13.a
            byte[] r3 = com.loc.fz.a(r3, r4)
            int r10 = r3.length
            r12 = 0
            java.lang.System.arraycopy(r3, r12, r7, r0, r10)
            int r3 = r3.length
            int r0 = r0 + r3
            int r3 = r13.b
            byte[] r3 = com.loc.fz.a(r3, r4)
            int r10 = r3.length
            java.lang.System.arraycopy(r3, r12, r7, r0, r10)
            int r3 = r3.length
            int r0 = r0 + r3
            int r3 = r13.c
            byte[] r3 = com.loc.fz.a(r3, r4)
            int r10 = r3.length
            java.lang.System.arraycopy(r3, r12, r7, r0, r10)
            int r3 = r3.length
            int r0 = r0 + r3
            r10 = r15
            long r14 = r13.e
            byte[] r14 = com.loc.fz.a(r14)
            java.lang.System.arraycopy(r14, r12, r7, r0, r8)
            int r0 = r0 + r8
            goto L467
        L424:
            r10 = r15
            goto L467
        L426:
            r10 = r21
            int r12 = r13.l
            byte r12 = (byte) r12
            boolean r14 = r13.n
            if (r14 == 0) goto L432
            r12 = r12 | 8
            byte r12 = (byte) r12
        L432:
            r7[r0] = r12
            int r0 = r0 + 1
            int r12 = r13.a
            byte[] r12 = com.loc.fz.a(r12, r4)
            int r14 = r12.length
            r15 = 0
            java.lang.System.arraycopy(r12, r15, r7, r0, r14)
            int r12 = r12.length
            int r0 = r0 + r12
            int r12 = r13.b
            byte[] r12 = com.loc.fz.a(r12, r4)
            int r14 = r12.length
            java.lang.System.arraycopy(r12, r15, r7, r0, r14)
            int r12 = r12.length
            int r0 = r0 + r12
            int r12 = r13.c
            byte[] r12 = com.loc.fz.a(r12, r4)
            int r14 = r12.length
            java.lang.System.arraycopy(r12, r15, r7, r0, r14)
            int r12 = r12.length
            int r0 = r0 + r12
            int r12 = r13.d
            byte[] r12 = com.loc.fz.b(r12, r10)
            int r14 = r12.length
            java.lang.System.arraycopy(r12, r15, r7, r0, r14)
            int r12 = r12.length
            int r0 = r0 + r12
        L467:
            int r12 = r13.k
            r14 = 99
            r15 = 127(0x7f, float:1.78E-43)
            if (r12 <= r15) goto L472
        L46f:
            r12 = 99
            goto L477
        L472:
            r15 = -128(0xffffffffffffff80, float:NaN)
            if (r12 >= r15) goto L477
            goto L46f
        L477:
            byte r12 = (byte) r12
            r7[r0] = r12
            r12 = 1
            int r0 = r0 + r12
            long r14 = com.loc.fz.b()
            r29 = r9
            long r8 = r13.t
            long r14 = r14 - r8
            r8 = 1000(0x3e8, double:4.94E-321)
            long r14 = r14 / r8
            int r8 = (int) r14
            short r8 = (short) r8
            byte[] r8 = com.loc.fz.a(r8, r4)
            int r9 = r8.length
            r14 = 0
            java.lang.System.arraycopy(r8, r14, r7, r0, r9)
            int r8 = r8.length
            int r0 = r0 + r8
            int r8 = r13.l
            r9 = 32767(0x7fff, float:4.5916E-41)
            r14 = 3
            if (r8 == r14) goto L4e8
            int r8 = r13.l
            r14 = 4
            if (r8 == r14) goto L4e8
            int r8 = r13.l
            r3 = 5
            if (r8 != r3) goto L4a7
            goto L4e8
        L4a7:
            int r8 = r13.l
            r14 = 1
            if (r8 != r14) goto L533
            java.lang.String r8 = com.loc.fr.a
            java.lang.Double r8 = java.lang.Double.valueOf(r8)
            double r14 = r8.doubleValue()
            int r8 = (r14 > r23 ? 1 : (r14 == r23 ? 0 : -1))
            if (r8 < 0) goto L533
            int r8 = r13.o
            if (r8 <= r9) goto L4c0
            r8 = 32767(0x7fff, float:4.5916E-41)
        L4c0:
            if (r8 >= 0) goto L4c3
            goto L4c4
        L4c3:
            r9 = r8
        L4c4:
            byte[] r8 = com.loc.fz.a(r9, r4)
            int r9 = r8.length
            r14 = 0
            java.lang.System.arraycopy(r8, r14, r7, r0, r9)
            int r8 = r8.length
            int r0 = r0 + r8
            int r8 = r13.p
            byte[] r8 = com.loc.fz.b(r8, r10)
            int r9 = r8.length
            java.lang.System.arraycopy(r8, r14, r7, r0, r9)
            int r8 = r8.length
            int r0 = r0 + r8
            int r8 = r13.q
            byte[] r8 = com.loc.fz.b(r8, r10)
            int r9 = r8.length
            java.lang.System.arraycopy(r8, r14, r7, r0, r9)
            int r8 = r8.length
        L4e6:
            int r0 = r0 + r8
            goto L533
        L4e8:
            java.lang.String r8 = com.loc.fr.a
            java.lang.Double r8 = java.lang.Double.valueOf(r8)
            double r14 = r8.doubleValue()
            r25 = 4617315517961601024(0x4014000000000000, double:5.0)
            int r8 = (r14 > r25 ? 1 : (r14 == r25 ? 0 : -1))
            if (r8 < 0) goto L533
            int r8 = r13.o
            if (r8 <= r9) goto L4fe
            r8 = 32767(0x7fff, float:4.5916E-41)
        L4fe:
            if (r8 >= 0) goto L501
            goto L502
        L501:
            r9 = r8
        L502:
            byte[] r8 = com.loc.fz.a(r9, r4)
            int r9 = r8.length
            r14 = 0
            java.lang.System.arraycopy(r8, r14, r7, r0, r9)
            int r8 = r8.length
            int r0 = r0 + r8
            java.lang.String r8 = com.loc.fr.a
            java.lang.Double r8 = java.lang.Double.valueOf(r8)
            double r8 = r8.doubleValue()
            int r15 = (r8 > r23 ? 1 : (r8 == r23 ? 0 : -1))
            if (r15 < 0) goto L533
            int r8 = r13.p
            byte[] r8 = com.loc.fz.b(r8, r10)
            int r9 = r8.length
            java.lang.System.arraycopy(r8, r14, r7, r0, r9)
            int r8 = r8.length
            int r0 = r0 + r8
            int r8 = r13.q
            byte[] r8 = com.loc.fz.b(r8, r10)
            int r9 = r8.length
            java.lang.System.arraycopy(r8, r14, r7, r0, r9)
            int r8 = r8.length
            goto L4e6
        L533:
            int r11 = r11 + 1
            r21 = r10
            r9 = r29
            r3 = 2
            r8 = 8
            r10 = 1
            r12 = 3
            r14 = 5
            r15 = 1000(0x3e8, double:4.94E-321)
            goto L36a
        L543:
            r10 = r21
            r5 = 1
            goto L54e
        L547:
            r10 = r21
            r5 = 0
            r7[r0] = r5
            r5 = 1
            int r0 = r0 + r5
        L54e:
            java.lang.String r8 = r1.D
            boolean r8 = android.text.TextUtils.isEmpty(r8)
            if (r8 != 0) goto L5ff
            java.lang.String r8 = r1.D
            int r8 = r8.length()
            if (r8 != 0) goto L560
            goto L5ff
        L560:
            r7[r0] = r5
            int r8 = r0 + 1
            java.lang.String r0 = r1.D     // Catch: java.lang.Throwable -> L5de
            java.lang.String r5 = ","
            java.lang.String[] r5 = r0.split(r5)     // Catch: java.lang.Throwable -> L5de
            r9 = 0
            r0 = r5[r9]     // Catch: java.lang.Throwable -> L5de
            byte[] r0 = r1.a(r0)     // Catch: java.lang.Throwable -> L5de
            int r11 = r0.length     // Catch: java.lang.Throwable -> L5de
            java.lang.System.arraycopy(r0, r9, r7, r8, r11)     // Catch: java.lang.Throwable -> L5de
            int r0 = r0.length     // Catch: java.lang.Throwable -> L5de
            int r8 = r8 + r0
            r9 = 2
            r0 = r5[r9]     // Catch: java.lang.Throwable -> L592
            byte[] r0 = r0.getBytes(r6)     // Catch: java.lang.Throwable -> L592
            int r9 = r0.length     // Catch: java.lang.Throwable -> L592
            r11 = 127(0x7f, float:1.78E-43)
            if (r9 <= r11) goto L587
            r9 = 127(0x7f, float:1.78E-43)
        L587:
            byte r11 = (byte) r9     // Catch: java.lang.Throwable -> L592
            r7[r8] = r11     // Catch: java.lang.Throwable -> L592
            int r8 = r8 + 1
            r11 = 0
            java.lang.System.arraycopy(r0, r11, r7, r8, r9)     // Catch: java.lang.Throwable -> L592
            int r8 = r8 + r9
            goto L59d
        L592:
            r0 = move-exception
            java.lang.String r9 = "buildV4Dot214"
            com.loc.fr.a(r0, r2, r9)     // Catch: java.lang.Throwable -> L5de
            r9 = 0
            r7[r8] = r9     // Catch: java.lang.Throwable -> L5de
            int r8 = r8 + 1
        L59d:
            r9 = 1
            r0 = r5[r9]     // Catch: java.lang.Throwable -> L5de
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Throwable -> L5de
            r5 = 127(0x7f, float:1.78E-43)
            if (r0 <= r5) goto L5aa
        L5a8:
            r0 = 0
            goto L5af
        L5aa:
            r5 = -128(0xffffffffffffff80, float:NaN)
            if (r0 >= r5) goto L5af
            goto L5a8
        L5af:
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> L5de
            byte r0 = java.lang.Byte.parseByte(r0)     // Catch: java.lang.Throwable -> L5de
            r7[r8] = r0     // Catch: java.lang.Throwable -> L5de
            int r8 = r8 + 1
            java.lang.String r0 = com.loc.fr.a     // Catch: java.lang.Throwable -> L5de
            java.lang.Double r0 = java.lang.Double.valueOf(r0)     // Catch: java.lang.Throwable -> L5de
            double r13 = r0.doubleValue()     // Catch: java.lang.Throwable -> L5de
            r19 = 4617540697942969549(0x4014cccccccccccd, double:5.2)
            int r0 = (r13 > r19 ? 1 : (r13 == r19 ? 0 : -1))
            if (r0 < 0) goto L5db
            int r0 = r1.O     // Catch: java.lang.Throwable -> L5de
            byte[] r0 = com.loc.fz.a(r0, r4)     // Catch: java.lang.Throwable -> L5de
            int r5 = r0.length     // Catch: java.lang.Throwable -> L5de
            r9 = 0
            java.lang.System.arraycopy(r0, r9, r7, r8, r5)     // Catch: java.lang.Throwable -> L5de
            int r0 = r0.length     // Catch: java.lang.Throwable -> L5de
            int r8 = r8 + r0
        L5db:
            r2 = 1
            r5 = 0
            goto L605
        L5de:
            r0 = move-exception
            java.lang.String r5 = "buildV4Dot216"
            com.loc.fr.a(r0, r2, r5)
            java.lang.String r0 = "00:00:00:00:00:00"
            byte[] r0 = r1.a(r0)
            int r2 = r0.length
            r5 = 0
            java.lang.System.arraycopy(r0, r5, r7, r8, r2)
            int r0 = r0.length
            int r8 = r8 + r0
            r7[r8] = r5
            r2 = 1
            int r8 = r8 + r2
            java.lang.String r0 = "0"
            byte r0 = java.lang.Byte.parseByte(r0)
            r7[r8] = r0
            int r8 = r8 + r2
            goto L605
        L5ff:
            r2 = 1
            r5 = 0
            r7[r0] = r5
            int r8 = r0 + 1
        L605:
            java.util.ArrayList<com.loc.eg> r0 = r1.E
            int r9 = r0.size()
            r11 = 25
            int r9 = java.lang.Math.min(r9, r11)
            if (r9 != 0) goto L619
            r7[r8] = r5
            int r8 = r8 + r2
            r3 = 0
            goto L6c9
        L619:
            byte r5 = (byte) r9
            r7[r8] = r5
            int r8 = r8 + r2
            int r2 = com.loc.fz.c()
            r5 = 17
            if (r2 < r5) goto L627
            r2 = 1
            goto L628
        L627:
            r2 = 0
        L628:
            if (r2 == 0) goto L634
            long r13 = com.loc.fz.b()
            r17 = 1000(0x3e8, double:4.94E-321)
            long r13 = r13 / r17
            r17 = r13
        L634:
            r5 = 0
        L635:
            if (r5 >= r9) goto L6b8
            java.lang.Object r13 = r0.get(r5)
            com.loc.eg r13 = (com.loc.eg) r13
            long r14 = r13.a
            java.lang.String r14 = com.loc.eg.a(r14)
            byte[] r14 = r1.a(r14)
            int r15 = r14.length
            r3 = 0
            java.lang.System.arraycopy(r14, r3, r7, r8, r15)
            int r3 = r14.length
            int r8 = r8 + r3
            java.lang.String r3 = r13.b     // Catch: java.lang.Exception -> L663
            byte[] r3 = r3.getBytes(r6)     // Catch: java.lang.Exception -> L663
            int r14 = r3.length     // Catch: java.lang.Exception -> L663
            byte r14 = (byte) r14     // Catch: java.lang.Exception -> L663
            r7[r8] = r14     // Catch: java.lang.Exception -> L663
            int r8 = r8 + 1
            int r14 = r3.length     // Catch: java.lang.Exception -> L663
            r15 = 0
            java.lang.System.arraycopy(r3, r15, r7, r8, r14)     // Catch: java.lang.Exception -> L663
            int r3 = r3.length     // Catch: java.lang.Exception -> L663
            int r8 = r8 + r3
            r3 = 1
            goto L668
        L663:
            r3 = 0
            r7[r8] = r3
            r3 = 1
            int r8 = r8 + r3
        L668:
            int r14 = r13.c
            r15 = 127(0x7f, float:1.78E-43)
            if (r14 <= r15) goto L672
            r14 = 0
            r15 = -128(0xffffffffffffff80, float:NaN)
            goto L677
        L672:
            r15 = -128(0xffffffffffffff80, float:NaN)
            if (r14 >= r15) goto L677
            r14 = 0
        L677:
            java.lang.String r14 = java.lang.String.valueOf(r14)
            byte r14 = java.lang.Byte.parseByte(r14)
            r7[r8] = r14
            int r8 = r8 + r3
            if (r2 == 0) goto L694
            long r11 = r13.f
            r27 = 1000(0x3e8, double:4.94E-321)
            long r11 = r11 / r27
            long r11 = r17 - r11
            int r12 = (int) r11
            if (r12 >= 0) goto L690
            goto L694
        L690:
            r11 = 65535(0xffff, float:9.1834E-41)
            goto L698
        L694:
            r11 = 65535(0xffff, float:9.1834E-41)
            r12 = 0
        L698:
            if (r12 <= r11) goto L69d
            r12 = 65535(0xffff, float:9.1834E-41)
        L69d:
            byte[] r11 = com.loc.fz.a(r12, r4)
            int r12 = r11.length
            r3 = 0
            java.lang.System.arraycopy(r11, r3, r7, r8, r12)
            int r11 = r11.length
            int r8 = r8 + r11
            int r11 = r13.d
            byte[] r11 = com.loc.fz.a(r11, r4)
            int r12 = r11.length
            java.lang.System.arraycopy(r11, r3, r7, r8, r12)
            int r11 = r11.length
            int r8 = r8 + r11
            int r5 = r5 + 1
            goto L635
        L6b8:
            r3 = 0
            java.lang.String r0 = r1.F
            int r0 = java.lang.Integer.parseInt(r0)
            byte[] r0 = com.loc.fz.a(r0, r4)
            int r2 = r0.length
            java.lang.System.arraycopy(r0, r3, r7, r8, r2)
            int r0 = r0.length
            int r8 = r8 + r0
        L6c9:
            r7[r8] = r3
            r2 = 1
            int r8 = r8 + r2
            java.lang.String r0 = r1.G     // Catch: java.lang.Throwable -> L6f5
            if (r0 != 0) goto L6d4
            r7[r8] = r3     // Catch: java.lang.Throwable -> L6f5
            goto L6f9
        L6d4:
            java.lang.String r0 = r1.G     // Catch: java.lang.Throwable -> L6f5
            byte[] r0 = r0.getBytes(r6)     // Catch: java.lang.Throwable -> L6f5
            int r2 = r0.length     // Catch: java.lang.Throwable -> L6f5
            r3 = 127(0x7f, float:1.78E-43)
            if (r2 <= r3) goto L6e0
            r0 = 0
        L6e0:
            if (r0 != 0) goto L6e7
            r2 = 0
            r7[r8] = r2     // Catch: java.lang.Throwable -> L6f5
            r2 = 1
            goto L6f9
        L6e7:
            int r2 = r0.length     // Catch: java.lang.Throwable -> L6f5
            byte r2 = (byte) r2     // Catch: java.lang.Throwable -> L6f5
            r7[r8] = r2     // Catch: java.lang.Throwable -> L6f5
            int r8 = r8 + 1
            int r2 = r0.length     // Catch: java.lang.Throwable -> L6f5
            r3 = 0
            java.lang.System.arraycopy(r0, r3, r7, r8, r2)     // Catch: java.lang.Throwable -> L6f5
            int r0 = r0.length     // Catch: java.lang.Throwable -> L6f5
            int r8 = r8 + r0
            goto L6fa
        L6f5:
            r2 = 0
            r7[r8] = r2
            r2 = 1
        L6f9:
            int r8 = r8 + r2
        L6fa:
            r2 = 2
            byte[] r0 = new byte[r2]
            r0 = {x0948: FILL_ARRAY_DATA , data: [0, 0} // fill-array
            java.lang.String r2 = r1.J     // Catch: java.lang.Throwable -> L728
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L728
            if (r2 != 0) goto L712
            java.lang.String r0 = r1.J     // Catch: java.lang.Throwable -> L728
            int r0 = r0.length()     // Catch: java.lang.Throwable -> L728
            byte[] r0 = com.loc.fz.a(r0, r4)     // Catch: java.lang.Throwable -> L728
        L712:
            r3 = 2
            r5 = 0
            java.lang.System.arraycopy(r0, r5, r7, r8, r3)     // Catch: java.lang.Throwable -> L728
            int r8 = r8 + r3
            if (r2 != 0) goto L726
            java.lang.String r0 = r1.J     // Catch: java.lang.Throwable -> L726
            byte[] r0 = r0.getBytes(r6)     // Catch: java.lang.Throwable -> L726
            int r2 = r0.length     // Catch: java.lang.Throwable -> L726
            java.lang.System.arraycopy(r0, r5, r7, r8, r2)     // Catch: java.lang.Throwable -> L726
            int r0 = r0.length     // Catch: java.lang.Throwable -> L726
            int r8 = r8 + r0
        L726:
            r2 = 2
            goto L72a
        L728:
            r2 = 2
            int r8 = r8 + r2
        L72a:
            r3 = 0
            byte[] r0 = com.loc.fz.a(r3, r4)     // Catch: java.lang.Throwable -> L732
            java.lang.System.arraycopy(r0, r3, r7, r8, r2)     // Catch: java.lang.Throwable -> L732
        L732:
            int r8 = r8 + r2
            byte[] r0 = new byte[r2]
            r0 = {x094e: FILL_ARRAY_DATA , data: [0, 0} // fill-array
            java.lang.System.arraycopy(r0, r3, r7, r8, r2)     // Catch: java.lang.Throwable -> L73b
        L73b:
            int r8 = r8 + r2
            byte[] r0 = r1.H
            if (r0 == 0) goto L742
            int r0 = r0.length
            goto L743
        L742:
            r0 = 0
        L743:
            r2 = 0
            byte[] r2 = com.loc.fz.a(r0, r2)
            int r3 = r2.length
            r5 = 0
            java.lang.System.arraycopy(r2, r5, r7, r8, r3)
            int r2 = r2.length
            int r8 = r8 + r2
            if (r0 <= 0) goto L75b
            byte[] r0 = r1.H
            int r2 = r0.length
            java.lang.System.arraycopy(r0, r5, r7, r8, r2)
            byte[] r0 = r1.H
            int r0 = r0.length
            int r8 = r8 + r0
        L75b:
            java.lang.String r0 = com.loc.fr.a
            java.lang.Double r0 = java.lang.Double.valueOf(r0)
            double r2 = r0.doubleValue()
            r5 = 4617315517961601024(0x4014000000000000, double:5.0)
            int r0 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r0 < 0) goto L860
            java.util.List<com.loc.fa> r0 = r1.T
            if (r0 == 0) goto L774
            int r0 = r0.size()
            goto L775
        L774:
            r0 = 0
        L775:
            byte r2 = (byte) r0
            r7[r8] = r2
            int r8 = r8 + 1
            byte[] r2 = new byte[r8]
            r3 = 0
            java.lang.System.arraycopy(r7, r3, r2, r3, r8)
            if (r0 <= 0) goto L85a
            java.util.List<com.loc.fa> r0 = r1.T     // Catch: java.lang.Throwable -> L852
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L852
            r3 = r8
        L789:
            boolean r5 = r0.hasNext()     // Catch: java.lang.Throwable -> L852
            if (r5 == 0) goto L850
            java.lang.Object r5 = r0.next()     // Catch: java.lang.Throwable -> L852
            com.loc.fa r5 = (com.loc.fa) r5     // Catch: java.lang.Throwable -> L852
            int r6 = r5.l     // Catch: java.lang.Throwable -> L852
            r9 = 1
            if (r6 == r9) goto L80d
            int r6 = r5.l     // Catch: java.lang.Throwable -> L852
            r11 = 3
            if (r6 == r11) goto L80d
            int r6 = r5.l     // Catch: java.lang.Throwable -> L852
            r12 = 4
            if (r6 != r12) goto L7a5
            goto L80d
        L7a5:
            int r6 = r5.l     // Catch: java.lang.Throwable -> L852
            r12 = 2
            if (r6 != r12) goto L7df
            int r6 = r5.l     // Catch: java.lang.Throwable -> L852
            byte r6 = (byte) r6     // Catch: java.lang.Throwable -> L852
            boolean r12 = r5.n     // Catch: java.lang.Throwable -> L852
            if (r12 == 0) goto L7b4
            r6 = r6 | 8
            byte r6 = (byte) r6     // Catch: java.lang.Throwable -> L852
        L7b4:
            r7[r3] = r6     // Catch: java.lang.Throwable -> L852
            int r3 = r3 + 1
            int r6 = r5.h     // Catch: java.lang.Throwable -> L852
            byte[] r6 = com.loc.fz.a(r6, r4)     // Catch: java.lang.Throwable -> L852
            int r12 = r6.length     // Catch: java.lang.Throwable -> L852
            r13 = 0
            java.lang.System.arraycopy(r6, r13, r7, r3, r12)     // Catch: java.lang.Throwable -> L852
            int r6 = r6.length     // Catch: java.lang.Throwable -> L852
            int r3 = r3 + r6
            int r6 = r5.i     // Catch: java.lang.Throwable -> L852
            byte[] r6 = com.loc.fz.a(r6, r4)     // Catch: java.lang.Throwable -> L852
            int r12 = r6.length     // Catch: java.lang.Throwable -> L852
            java.lang.System.arraycopy(r6, r13, r7, r3, r12)     // Catch: java.lang.Throwable -> L852
            int r6 = r6.length     // Catch: java.lang.Throwable -> L852
            int r3 = r3 + r6
            int r6 = r5.j     // Catch: java.lang.Throwable -> L852
            byte[] r6 = com.loc.fz.a(r6, r4)     // Catch: java.lang.Throwable -> L852
            int r12 = r6.length     // Catch: java.lang.Throwable -> L852
            java.lang.System.arraycopy(r6, r13, r7, r3, r12)     // Catch: java.lang.Throwable -> L852
            int r6 = r6.length     // Catch: java.lang.Throwable -> L852
            int r3 = r3 + r6
            r13 = 5
            goto L835
        L7df:
            int r6 = r5.l     // Catch: java.lang.Throwable -> L852
            r13 = 5
            if (r6 != r13) goto L835
            int r6 = r5.l     // Catch: java.lang.Throwable -> L852
            byte r6 = (byte) r6     // Catch: java.lang.Throwable -> L852
            boolean r12 = r5.n     // Catch: java.lang.Throwable -> L852
            if (r12 == 0) goto L7ee
            r6 = r6 | 8
            byte r6 = (byte) r6     // Catch: java.lang.Throwable -> L852
        L7ee:
            r7[r3] = r6     // Catch: java.lang.Throwable -> L852
            int r3 = r3 + 1
            int r6 = r5.c     // Catch: java.lang.Throwable -> L852
            byte[] r6 = com.loc.fz.a(r6, r4)     // Catch: java.lang.Throwable -> L852
            int r12 = r6.length     // Catch: java.lang.Throwable -> L852
            r15 = 0
            java.lang.System.arraycopy(r6, r15, r7, r3, r12)     // Catch: java.lang.Throwable -> L852
            int r6 = r6.length     // Catch: java.lang.Throwable -> L852
            int r3 = r3 + r6
            long r11 = r5.e     // Catch: java.lang.Throwable -> L852
            byte[] r6 = com.loc.fz.a(r11)     // Catch: java.lang.Throwable -> L852
            r11 = 8
            java.lang.System.arraycopy(r6, r15, r7, r3, r11)     // Catch: java.lang.Throwable -> L852
            int r3 = r3 + 8
            goto L835
        L80d:
            r13 = 5
            int r6 = r5.l     // Catch: java.lang.Throwable -> L852
            byte r6 = (byte) r6     // Catch: java.lang.Throwable -> L852
            boolean r11 = r5.n     // Catch: java.lang.Throwable -> L852
            if (r11 == 0) goto L818
            r6 = r6 | 8
            byte r6 = (byte) r6     // Catch: java.lang.Throwable -> L852
        L818:
            r7[r3] = r6     // Catch: java.lang.Throwable -> L852
            int r3 = r3 + 1
            int r6 = r5.c     // Catch: java.lang.Throwable -> L852
            byte[] r6 = com.loc.fz.a(r6, r4)     // Catch: java.lang.Throwable -> L852
            int r11 = r6.length     // Catch: java.lang.Throwable -> L852
            r15 = 0
            java.lang.System.arraycopy(r6, r15, r7, r3, r11)     // Catch: java.lang.Throwable -> L852
            int r6 = r6.length     // Catch: java.lang.Throwable -> L852
            int r3 = r3 + r6
            int r6 = r5.d     // Catch: java.lang.Throwable -> L852
            byte[] r6 = com.loc.fz.b(r6, r10)     // Catch: java.lang.Throwable -> L852
            int r11 = r6.length     // Catch: java.lang.Throwable -> L852
            java.lang.System.arraycopy(r6, r15, r7, r3, r11)     // Catch: java.lang.Throwable -> L852
            int r6 = r6.length     // Catch: java.lang.Throwable -> L852
            int r3 = r3 + r6
        L835:
            long r17 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L852
            long r5 = r5.t     // Catch: java.lang.Throwable -> L852
            long r17 = r17 - r5
            r5 = 1000(0x3e8, double:4.94E-321)
            long r12 = r17 / r5
            int r13 = (int) r12     // Catch: java.lang.Throwable -> L852
            short r12 = (short) r13     // Catch: java.lang.Throwable -> L852
            byte[] r12 = com.loc.fz.a(r12, r4)     // Catch: java.lang.Throwable -> L852
            int r13 = r12.length     // Catch: java.lang.Throwable -> L852
            r15 = 0
            java.lang.System.arraycopy(r12, r15, r7, r3, r13)     // Catch: java.lang.Throwable -> L852
            int r12 = r12.length     // Catch: java.lang.Throwable -> L852
            int r3 = r3 + r12
            goto L789
        L850:
            r8 = r3
            goto L85a
        L852:
            r3 = 0
            java.lang.System.arraycopy(r2, r3, r7, r3, r8)
            int r0 = r8 + (-1)
            r7[r0] = r3
        L85a:
            java.lang.String r0 = r1.M
            int r8 = a(r0, r7, r8)
        L860:
            java.lang.String r0 = com.loc.fr.a
            java.lang.Double r0 = java.lang.Double.valueOf(r0)
            double r2 = r0.doubleValue()
            r5 = 4617540697942969549(0x4014cccccccccccd, double:5.2)
            int r0 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r0 < 0) goto L910
            java.util.List<com.loc.fc> r0 = r1.S
            if (r0 != 0) goto L879
            r0 = 0
            goto L87d
        L879:
            int r0 = r0.size()
        L87d:
            byte r2 = (byte) r0
            r7[r8] = r2
            int r8 = r8 + 1
            if (r0 <= 0) goto L910
            java.util.List<com.loc.fc> r0 = r1.S
            java.util.Iterator r0 = r0.iterator()
        L88a:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L910
            java.lang.Object r2 = r0.next()
            com.loc.fc r2 = (com.loc.fc) r2
            long r5 = java.lang.System.currentTimeMillis()
            long r12 = r2.d
            long r5 = r5 - r12
            int r3 = (int) r5
            int r3 = r3 / 1000
            r5 = 65535(0xffff, float:9.1834E-41)
            if (r3 <= r5) goto L8a8
            r3 = 65535(0xffff, float:9.1834E-41)
        L8a8:
            byte[] r3 = com.loc.fz.a(r3, r4)
            r5 = 2
            r6 = 0
            java.lang.System.arraycopy(r3, r6, r7, r8, r5)
            int r8 = r8 + 2
            double r12 = r2.c
            r17 = 4711630319722168320(0x416312d000000000, double:1.0E7)
            double r12 = r12 * r17
            long r12 = java.lang.Math.round(r12)
            int r3 = (int) r12
            byte[] r3 = com.loc.fz.b(r3, r10)
            r5 = 4
            java.lang.System.arraycopy(r3, r6, r7, r8, r5)
            int r8 = r8 + r5
            double r12 = r2.b
            double r12 = r12 * r17
            long r12 = java.lang.Math.round(r12)
            int r3 = (int) r12
            byte[] r3 = com.loc.fz.b(r3, r10)
            java.lang.System.arraycopy(r3, r6, r7, r8, r5)
            int r8 = r8 + r5
            int r3 = r2.e
            float r3 = (float) r3
            r6 = 1199570688(0x477fff00, float:65535.0)
            int r6 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r6 <= 0) goto L8e8
            r3 = 1199570688(0x477fff00, float:65535.0)
        L8e8:
            int r3 = (int) r3
            byte[] r3 = com.loc.fz.a(r3, r4)
            r6 = 2
            r9 = 0
            java.lang.System.arraycopy(r3, r9, r7, r8, r6)
            int r8 = r8 + r6
            int r3 = r2.a
            int r3 = r3 << 13
            int r6 = r2.g
            int r6 = r6 << 6
            r3 = r3 | r6
            int r2 = r2.h
            r2 = r2 | r3
            r3 = 65535(0xffff, float:9.1834E-41)
            r2 = r2 & r3
            short r2 = (short) r2
            byte[] r2 = com.loc.fz.a(r2, r4)
            r6 = 2
            r9 = 0
            java.lang.System.arraycopy(r2, r9, r7, r8, r6)
            int r8 = r8 + r6
            goto L88a
        L910:
            java.lang.String r0 = com.loc.fr.a
            java.lang.Double r0 = java.lang.Double.valueOf(r0)
            double r2 = r0.doubleValue()
            int r0 = (r2 > r23 ? 1 : (r2 == r23 ? 0 : -1))
            if (r0 < 0) goto L924
            java.lang.String r0 = r1.N
            int r8 = a(r0, r7, r8)
        L924:
            byte[] r0 = new byte[r8]
            r2 = 0
            java.lang.System.arraycopy(r7, r2, r0, r2, r8)
            java.util.zip.CRC32 r3 = new java.util.zip.CRC32
            r3.<init>()
            r3.update(r0)
            long r3 = r3.getValue()
            byte[] r3 = com.loc.fz.a(r3)
            int r4 = r8 + 8
            byte[] r4 = new byte[r4]
            java.lang.System.arraycopy(r0, r2, r4, r2, r8)
            r5 = 8
            java.lang.System.arraycopy(r3, r2, r4, r8, r5)
            return r4
    }
}
