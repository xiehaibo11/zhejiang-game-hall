package com.loc;

public final class fm {
    private static com.loc.fm b;
    com.loc.bo a;
    private android.content.Context c;
    private int d;
    private boolean e;
    private int f;

    static {
            return
    }

    private fm(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.c = r0
            int r0 = com.loc.fr.i
            r1.d = r0
            r0 = 0
            r1.e = r0
            r1.f = r0
            com.loc.q r0 = com.loc.q.a()     // Catch: java.lang.Throwable -> L18
            r0.a(r2)     // Catch: java.lang.Throwable -> L18
        L18:
            r1.c = r2
            com.loc.bo r2 = com.loc.bo.a()
            r1.a = r2
            return
    }

    public static com.loc.fm a(android.content.Context r1) {
            com.loc.fm r0 = com.loc.fm.b
            if (r0 != 0) goto Lb
            com.loc.fm r0 = new com.loc.fm
            r0.<init>(r1)
            com.loc.fm.b = r0
        Lb:
            com.loc.fm r1 = com.loc.fm.b
            return r1
    }

    public final com.loc.bu a(com.loc.fn r2) throws java.lang.Throwable {
            r1 = this;
            boolean r0 = r1.e
            if (r0 == 0) goto L9
            com.loc.bt$c r0 = com.loc.bt.c.b
            r2.a(r0)
        L9:
            com.loc.bu r2 = com.loc.bo.a(r2)
            return r2
    }

    public final com.loc.fn a(android.content.Context r11, byte[] r12, java.lang.String r13, java.lang.String r14, boolean r15) {
            r10 = this;
            java.lang.String r0 = "1"
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> L107
            r2 = 16
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L107
            com.loc.fn r3 = new com.loc.fn     // Catch: java.lang.Throwable -> L107
            com.loc.w r4 = com.loc.fr.c()     // Catch: java.lang.Throwable -> L107
            r3.<init>(r11, r4)     // Catch: java.lang.Throwable -> L107
            java.lang.String r4 = "Content-Type"
            java.lang.String r5 = "application/octet-stream"
            r1.put(r4, r5)     // Catch: java.lang.Throwable -> L108
            java.lang.String r4 = "Accept-Encoding"
            java.lang.String r5 = "gzip"
            r1.put(r4, r5)     // Catch: java.lang.Throwable -> L108
            java.lang.String r4 = "gzipped"
            r1.put(r4, r0)     // Catch: java.lang.Throwable -> L108
            java.lang.String r4 = "Connection"
            java.lang.String r5 = "Keep-Alive"
            r1.put(r4, r5)     // Catch: java.lang.Throwable -> L108
            java.lang.String r4 = "User-Agent"
            java.lang.String r5 = "AMAP_Location_SDK_Android 6.4.0"
            r1.put(r4, r5)     // Catch: java.lang.Throwable -> L108
            java.lang.String r4 = "KEY"
            java.lang.String r5 = com.loc.l.f(r11)     // Catch: java.lang.Throwable -> L108
            r1.put(r4, r5)     // Catch: java.lang.Throwable -> L108
            java.lang.String r4 = "enginever"
            java.lang.String r5 = com.loc.fr.a     // Catch: java.lang.Throwable -> L108
            r1.put(r4, r5)     // Catch: java.lang.Throwable -> L108
            java.lang.String r4 = com.loc.n.a()     // Catch: java.lang.Throwable -> L108
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L108
            java.lang.String r6 = "key="
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L108
            java.lang.String r6 = com.loc.l.f(r11)     // Catch: java.lang.Throwable -> L108
            r5.append(r6)     // Catch: java.lang.Throwable -> L108
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L108
            java.lang.String r5 = com.loc.n.a(r11, r4, r5)     // Catch: java.lang.Throwable -> L108
            java.lang.String r6 = "ts"
            r1.put(r6, r4)     // Catch: java.lang.Throwable -> L108
            java.lang.String r4 = "scode"
            r1.put(r4, r5)     // Catch: java.lang.Throwable -> L108
            java.lang.String r4 = com.loc.fr.a     // Catch: java.lang.Throwable -> L108
            java.lang.Double r4 = java.lang.Double.valueOf(r4)     // Catch: java.lang.Throwable -> L108
            double r4 = r4.doubleValue()     // Catch: java.lang.Throwable -> L108
            r6 = 4617653287933653811(0x4015333333333333, double:5.3)
            int r8 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r8 < 0) goto L81
            java.lang.String r4 = "aps_s_src"
            java.lang.String r5 = "openapi"
            r1.put(r4, r5)     // Catch: java.lang.Throwable -> L108
        L81:
            java.lang.String r4 = "encr"
            r1.put(r4, r0)     // Catch: java.lang.Throwable -> L108
            r3.b(r1)     // Catch: java.lang.Throwable -> L108
            java.lang.String r0 = "loc"
            if (r15 != 0) goto L8f
            java.lang.String r0 = "locf"
        L8f:
            r1 = 1
            r3.c(r1)     // Catch: java.lang.Throwable -> L108
            java.util.Locale r4 = java.util.Locale.US     // Catch: java.lang.Throwable -> L108
            java.lang.String r5 = "platform=Android&sdkversion=%s&product=%s&loc_channel=%s"
            r6 = 3
            java.lang.Object[] r7 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L108
            r8 = 0
            java.lang.String r9 = "6.4.0"
            r7[r8] = r9     // Catch: java.lang.Throwable -> L108
            r7[r1] = r0     // Catch: java.lang.Throwable -> L108
            java.lang.Integer r0 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L108
            r6 = 2
            r7[r6] = r0     // Catch: java.lang.Throwable -> L108
            java.lang.String r0 = java.lang.String.format(r4, r5, r7)     // Catch: java.lang.Throwable -> L108
            r3.b(r0)     // Catch: java.lang.Throwable -> L108
            r3.b(r15)     // Catch: java.lang.Throwable -> L108
            r3.c(r13)     // Catch: java.lang.Throwable -> L108
            r3.d(r14)     // Catch: java.lang.Throwable -> L108
            byte[] r12 = com.loc.fz.a(r12)     // Catch: java.lang.Throwable -> L108
            r3.c(r12)     // Catch: java.lang.Throwable -> L108
            java.net.Proxy r11 = com.loc.v.a(r11)     // Catch: java.lang.Throwable -> L108
            r3.a(r11)     // Catch: java.lang.Throwable -> L108
            java.util.HashMap r11 = new java.util.HashMap     // Catch: java.lang.Throwable -> L108
            r11.<init>(r2)     // Catch: java.lang.Throwable -> L108
            java.lang.String r12 = "output"
            java.lang.String r13 = "bin"
            r11.put(r12, r13)     // Catch: java.lang.Throwable -> L108
            java.lang.String r12 = "policy"
            java.lang.String r13 = "3103"
            r11.put(r12, r13)     // Catch: java.lang.Throwable -> L108
            int r12 = r10.f     // Catch: java.lang.Throwable -> L108
            java.lang.String r13 = "custom"
            if (r12 == 0) goto Le3
            if (r12 == r1) goto Led
            if (r12 == r6) goto Le7
        Le3:
            r11.remove(r13)     // Catch: java.lang.Throwable -> L108
            goto Lf0
        Le7:
            java.lang.String r12 = "language:en"
        Le9:
            r11.put(r13, r12)     // Catch: java.lang.Throwable -> L108
            goto Lf0
        Led:
            java.lang.String r12 = "language:cn"
            goto Le9
        Lf0:
            r3.a(r11)     // Catch: java.lang.Throwable -> L108
            int r11 = r10.d     // Catch: java.lang.Throwable -> L108
            r3.a(r11)     // Catch: java.lang.Throwable -> L108
            int r11 = r10.d     // Catch: java.lang.Throwable -> L108
            r3.b(r11)     // Catch: java.lang.Throwable -> L108
            boolean r11 = r10.e     // Catch: java.lang.Throwable -> L108
            if (r11 == 0) goto L108
            com.loc.bt$c r11 = com.loc.bt.c.b     // Catch: java.lang.Throwable -> L108
            r3.a(r11)     // Catch: java.lang.Throwable -> L108
            goto L108
        L107:
            r3 = 0
        L108:
            return r3
    }

    public final java.lang.String a(android.content.Context r9, double r10, double r12) {
            r8 = this;
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Throwable -> L100
            r1 = 16
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L100
            com.loc.fn r2 = new com.loc.fn     // Catch: java.lang.Throwable -> L100
            com.loc.w r3 = com.loc.fr.c()     // Catch: java.lang.Throwable -> L100
            r2.<init>(r9, r3)     // Catch: java.lang.Throwable -> L100
            r0.clear()     // Catch: java.lang.Throwable -> L100
            java.lang.String r3 = "Content-Type"
            java.lang.String r4 = "application/x-www-form-urlencoded"
            r0.put(r3, r4)     // Catch: java.lang.Throwable -> L100
            java.lang.String r3 = "Connection"
            java.lang.String r4 = "Keep-Alive"
            r0.put(r3, r4)     // Catch: java.lang.Throwable -> L100
            java.lang.String r3 = "User-Agent"
            java.lang.String r4 = "AMAP_Location_SDK_Android 6.4.0"
            r0.put(r3, r4)     // Catch: java.lang.Throwable -> L100
            java.util.HashMap r3 = new java.util.HashMap     // Catch: java.lang.Throwable -> L100
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L100
            java.lang.String r1 = "custom"
            java.lang.String r4 = "26260A1F00020002"
            r3.put(r1, r4)     // Catch: java.lang.Throwable -> L100
            java.lang.String r1 = "key"
            java.lang.String r4 = com.loc.l.f(r9)     // Catch: java.lang.Throwable -> L100
            r3.put(r1, r4)     // Catch: java.lang.Throwable -> L100
            int r1 = r8.f     // Catch: java.lang.Throwable -> L100
            r4 = 2
            r5 = 1
            java.lang.String r6 = "language"
            if (r1 == 0) goto L49
            if (r1 == r5) goto L53
            if (r1 == r4) goto L4d
        L49:
            r3.remove(r6)     // Catch: java.lang.Throwable -> L100
            goto L56
        L4d:
            java.lang.String r1 = "en"
        L4f:
            r3.put(r6, r1)     // Catch: java.lang.Throwable -> L100
            goto L56
        L53:
            java.lang.String r1 = "zh-CN"
            goto L4f
        L56:
            java.lang.String r1 = "curLocationType"
            android.content.Context r6 = r8.c     // Catch: java.lang.Throwable -> L100
            boolean r6 = com.loc.fz.m(r6)     // Catch: java.lang.Throwable -> L100
            if (r6 == 0) goto L63
            java.lang.String r6 = "coarseLoc"
            goto L65
        L63:
            java.lang.String r6 = "fineLoc"
        L65:
            r3.put(r1, r6)     // Catch: java.lang.Throwable -> L100
            java.lang.String r1 = com.loc.n.a()     // Catch: java.lang.Throwable -> L100
            java.lang.String r6 = com.loc.x.b(r3)     // Catch: java.lang.Throwable -> L100
            java.lang.String r6 = com.loc.n.a(r9, r1, r6)     // Catch: java.lang.Throwable -> L100
            java.lang.String r7 = "ts"
            r3.put(r7, r1)     // Catch: java.lang.Throwable -> L100
            java.lang.String r1 = "scode"
            r3.put(r1, r6)     // Catch: java.lang.Throwable -> L100
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L100
            java.lang.String r6 = "output=json&radius=1000&extensions=all&location="
            r1.<init>(r6)     // Catch: java.lang.Throwable -> L100
            r1.append(r12)     // Catch: java.lang.Throwable -> L100
            java.lang.String r12 = ","
            r1.append(r12)     // Catch: java.lang.Throwable -> L100
            r1.append(r10)     // Catch: java.lang.Throwable -> L100
            java.lang.String r10 = r1.toString()     // Catch: java.lang.Throwable -> L100
            java.lang.String r11 = "UTF-8"
            byte[] r10 = r10.getBytes(r11)     // Catch: java.lang.Throwable -> L100
            r2.b(r10)     // Catch: java.lang.Throwable -> L100
            r10 = 0
            r2.c(r10)     // Catch: java.lang.Throwable -> L100
            r2.b(r5)     // Catch: java.lang.Throwable -> L100
            java.util.Locale r11 = java.util.Locale.US     // Catch: java.lang.Throwable -> L100
            java.lang.String r12 = "platform=Android&sdkversion=%s&product=%s&loc_channel=%s"
            r13 = 3
            java.lang.Object[] r1 = new java.lang.Object[r13]     // Catch: java.lang.Throwable -> L100
            java.lang.String r6 = "6.4.0"
            r1[r10] = r6     // Catch: java.lang.Throwable -> L100
            java.lang.String r10 = "loc"
            r1[r5] = r10     // Catch: java.lang.Throwable -> L100
            java.lang.Integer r10 = java.lang.Integer.valueOf(r13)     // Catch: java.lang.Throwable -> L100
            r1[r4] = r10     // Catch: java.lang.Throwable -> L100
            java.lang.String r10 = java.lang.String.format(r11, r12, r1)     // Catch: java.lang.Throwable -> L100
            r2.b(r10)     // Catch: java.lang.Throwable -> L100
            r2.a(r3)     // Catch: java.lang.Throwable -> L100
            r2.b(r0)     // Catch: java.lang.Throwable -> L100
            java.net.Proxy r9 = com.loc.v.a(r9)     // Catch: java.lang.Throwable -> L100
            r2.a(r9)     // Catch: java.lang.Throwable -> L100
            int r9 = com.loc.fr.i     // Catch: java.lang.Throwable -> L100
            r2.a(r9)     // Catch: java.lang.Throwable -> L100
            int r9 = com.loc.fr.i     // Catch: java.lang.Throwable -> L100
            r2.b(r9)     // Catch: java.lang.Throwable -> L100
            java.lang.String r9 = "http://restsdk.amap.com/v3/geocode/regeo"
            java.lang.String r10 = "http://dualstack-arestapi.amap.com/v3/geocode/regeo"
            r2.d(r10)     // Catch: java.lang.Throwable -> Lf8
            r2.c(r9)     // Catch: java.lang.Throwable -> Lf8
            boolean r9 = r8.e     // Catch: java.lang.Throwable -> Lf8
            if (r9 == 0) goto Lea
            com.loc.bt$c r9 = com.loc.bt.c.b     // Catch: java.lang.Throwable -> Lf8
            r2.a(r9)     // Catch: java.lang.Throwable -> Lf8
        Lea:
            com.loc.bu r9 = com.loc.bo.a(r2)     // Catch: java.lang.Throwable -> Lf8
            java.lang.String r10 = new java.lang.String     // Catch: java.lang.Throwable -> Lf8
            byte[] r9 = r9.a     // Catch: java.lang.Throwable -> Lf8
            java.lang.String r11 = "utf-8"
            r10.<init>(r9, r11)     // Catch: java.lang.Throwable -> Lf8
            goto L101
        Lf8:
            r9 = move-exception
            java.lang.String r10 = "LocNetManager"
            java.lang.String r11 = "post"
            com.loc.fr.a(r9, r10, r11)     // Catch: java.lang.Throwable -> L100
        L100:
            r10 = 0
        L101:
            return r10
    }

    public final void a(long r1, boolean r3, int r4) {
            r0 = this;
            r0.e = r3     // Catch: java.lang.Throwable -> Lf
            java.lang.Long r1 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Throwable -> Lf
            int r1 = r1.intValue()     // Catch: java.lang.Throwable -> Lf
            r0.d = r1     // Catch: java.lang.Throwable -> Lf
            r0.f = r4     // Catch: java.lang.Throwable -> Lf
            return
        Lf:
            r1 = move-exception
            java.lang.String r2 = "LocNetManager"
            java.lang.String r3 = "setOption"
            com.loc.fr.a(r1, r2, r3)
            return
    }
}
