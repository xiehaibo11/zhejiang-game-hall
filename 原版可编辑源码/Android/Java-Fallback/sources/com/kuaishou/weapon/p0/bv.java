package com.kuaishou.weapon.p0;

public class bv {
    private static final byte[] d = null;
    private android.content.Context a;
    private boolean b;
    private int c;

    static {
            r0 = 0
            byte[] r0 = new byte[r0]
            com.kuaishou.weapon.p0.bv.d = r0
            return
    }

    public bv(android.content.Context r1, int r2, boolean r3) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r3
            r0.c = r2
            return
    }

    public java.lang.String a(java.lang.String r5) {
            r4 = this;
            r0 = 0
            byte[] r1 = com.kuaishou.weapon.p0.bv.d     // Catch: java.lang.Throwable -> L2b
            monitor-enter(r1)     // Catch: java.lang.Throwable -> L2b
            com.kuaishou.weapon.p0.cl r2 = new com.kuaishou.weapon.p0.cl     // Catch: java.lang.Throwable -> L28
            java.lang.String r3 = com.kuaishou.weapon.p0.cj.j     // Catch: java.lang.Throwable -> L28
            r2.<init>(r5, r3)     // Catch: java.lang.Throwable -> L28
            android.content.Context r5 = r4.a     // Catch: java.lang.Throwable -> L28
            org.json.JSONObject r5 = r2.a(r5)     // Catch: java.lang.Throwable -> L28
            if (r5 != 0) goto L15
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L28
            return r0
        L15:
            org.json.JSONObject r2 = r4.a()     // Catch: java.lang.Throwable -> L28
            if (r2 != 0) goto L1d
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L28
            return r0
        L1d:
            java.lang.String r3 = "module_section"
            r5.put(r3, r2)     // Catch: java.lang.Throwable -> L28
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L28
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L28
            return r5
        L28:
            r5 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L28
            throw r5     // Catch: java.lang.Throwable -> L2b
        L2b:
            return r0
    }

    public org.json.JSONObject a() {
            r16 = this;
            r0 = r16
            r1 = 0
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L583
            r2.<init>()     // Catch: java.lang.Throwable -> L583
            android.content.Context r3 = r0.a     // Catch: java.lang.Throwable -> L583
            java.lang.String r4 = "re_po_rt"
            com.kuaishou.weapon.p0.h r3 = com.kuaishou.weapon.p0.h.a(r3, r4)     // Catch: java.lang.Throwable -> L583
            java.lang.String r4 = "a1_p_s_p_s"
            boolean r4 = r3.e(r4)     // Catch: java.lang.Throwable -> L583
            java.lang.String r5 = "a1_p_s_p_s_c_b"
            boolean r5 = r3.e(r5)     // Catch: java.lang.Throwable -> L583
            java.lang.String r6 = "11006"
            r7 = 0
            r8 = 1
            if (r4 == 0) goto L24
            r9 = r8
            goto L25
        L24:
            r9 = r7
        L25:
            r2.put(r6, r9)     // Catch: java.lang.Throwable -> L583
            java.lang.String r6 = "11029"
            if (r5 == 0) goto L2e
            r9 = r8
            goto L2f
        L2e:
            r9 = r7
        L2f:
            r2.put(r6, r9)     // Catch: java.lang.Throwable -> L583
            java.lang.String r6 = "plc001_c_ccl_ie"
            int r6 = r3.b(r6, r8)     // Catch: java.lang.Throwable -> L583
            java.lang.String r9 = "RISK"
            if (r6 != r8) goto La4
            if (r4 != 0) goto L40
            if (r5 == 0) goto La4
        L40:
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> L583
            java.lang.String r6 = com.kuaishou.weapon.p0.bg.a(r6)     // Catch: java.lang.Throwable -> L583
            boolean r10 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L583
            if (r10 != 0) goto L5b
            boolean r10 = r6.startsWith(r9)     // Catch: java.lang.Throwable -> L583
            if (r10 != 0) goto L5b
            java.lang.String r10 = "01001"
            java.lang.String r6 = com.kuaishou.weapon.p0.f.a(r6)     // Catch: java.lang.Throwable -> L583
            r2.put(r10, r6)     // Catch: java.lang.Throwable -> L583
        L5b:
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> L583
            java.lang.String r6 = com.kuaishou.weapon.p0.bg.c(r6)     // Catch: java.lang.Throwable -> L583
            boolean r10 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L583
            if (r10 != 0) goto L72
            boolean r10 = r6.startsWith(r9)     // Catch: java.lang.Throwable -> L583
            if (r10 != 0) goto L72
            java.lang.String r10 = "01003"
            r2.put(r10, r6)     // Catch: java.lang.Throwable -> L583
        L72:
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> L583
            java.lang.String r6 = com.kuaishou.weapon.p0.bg.b(r6, r7)     // Catch: java.lang.Throwable -> L583
            boolean r7 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L583
            if (r7 != 0) goto L89
            boolean r7 = r6.startsWith(r9)     // Catch: java.lang.Throwable -> L583
            if (r7 != 0) goto L89
            java.lang.String r7 = "01019"
            r2.put(r7, r6)     // Catch: java.lang.Throwable -> L583
        L89:
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> L583
            java.lang.String r6 = com.kuaishou.weapon.p0.bg.b(r6, r8)     // Catch: java.lang.Throwable -> L583
            boolean r7 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L583
            if (r7 != 0) goto La4
            boolean r7 = r6.startsWith(r9)     // Catch: java.lang.Throwable -> L583
            if (r7 != 0) goto La4
            java.lang.String r7 = "01004"
            java.lang.String r6 = com.kuaishou.weapon.p0.f.a(r6)     // Catch: java.lang.Throwable -> L583
            r2.put(r7, r6)     // Catch: java.lang.Throwable -> L583
        La4:
            java.lang.String r6 = "plc001_c_ccl_d"
            int r6 = r3.b(r6, r8)     // Catch: java.lang.Throwable -> L583
            if (r6 != r8) goto Lc7
            if (r4 != 0) goto Lb0
            if (r5 == 0) goto Lc7
        Lb0:
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> L583
            java.lang.String r7 = com.kuaishou.weapon.p0.bg.f(r7)     // Catch: java.lang.Throwable -> L583
            boolean r10 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L583
            if (r10 != 0) goto Lc7
            boolean r10 = r7.startsWith(r9)     // Catch: java.lang.Throwable -> L583
            if (r10 != 0) goto Lc7
            java.lang.String r10 = "01013"
            r2.put(r10, r7)     // Catch: java.lang.Throwable -> L583
        Lc7:
            java.lang.String r7 = "plc001_c_ccl_is"
            int r7 = r3.b(r7, r8)     // Catch: java.lang.Throwable -> L583
            if (r7 != r8) goto Lea
            if (r4 != 0) goto Ld3
            if (r5 == 0) goto Lea
        Ld3:
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> L583
            java.lang.String r7 = com.kuaishou.weapon.p0.bg.d(r7)     // Catch: java.lang.Throwable -> L583
            boolean r10 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L583
            if (r10 != 0) goto Lea
            boolean r10 = r7.startsWith(r9)     // Catch: java.lang.Throwable -> L583
            if (r10 != 0) goto Lea
            java.lang.String r10 = "01007"
            r2.put(r10, r7)     // Catch: java.lang.Throwable -> L583
        Lea:
            java.lang.String r7 = "plc001_c_ccl_ic"
            int r7 = r3.b(r7, r8)     // Catch: java.lang.Throwable -> L583
            if (r7 != r8) goto L101
            if (r4 != 0) goto Lf6
            if (r5 == 0) goto L101
        Lf6:
            java.lang.String r7 = "01011"
            android.content.Context r10 = r0.a     // Catch: java.lang.Throwable -> L583
            java.lang.String r10 = com.kuaishou.weapon.p0.bg.e(r10)     // Catch: java.lang.Throwable -> L583
            r2.put(r7, r10)     // Catch: java.lang.Throwable -> L583
        L101:
            java.lang.String r7 = ""
            if (r4 != 0) goto L107
            if (r5 == 0) goto L12b
        L107:
            java.lang.String r10 = com.kuaishou.weapon.p0.bg.g()     // Catch: java.lang.Throwable -> L583
            boolean r11 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> L583
            java.lang.String r12 = "07005"
            if (r11 != 0) goto L11d
            boolean r11 = r10.startsWith(r9)     // Catch: java.lang.Throwable -> L583
            if (r11 != 0) goto L11d
        L119:
            r2.put(r12, r10)     // Catch: java.lang.Throwable -> L583
            goto L122
        L11d:
            if (r10 != 0) goto L119
            r2.put(r12, r7)     // Catch: java.lang.Throwable -> L583
        L122:
            java.lang.String r10 = "07006"
            java.lang.String r11 = com.kuaishou.weapon.p0.bg.f()     // Catch: java.lang.Throwable -> L583
            r2.put(r10, r11)     // Catch: java.lang.Throwable -> L583
        L12b:
            java.lang.String r10 = "plc001_c_ccl_btm"
            int r3 = r3.b(r10, r8)     // Catch: java.lang.Throwable -> L583
            if (r3 != r8) goto L14e
            if (r4 != 0) goto L137
            if (r5 == 0) goto L14e
        L137:
            android.content.Context r3 = r0.a     // Catch: java.lang.Throwable -> L583
            java.lang.String r3 = com.kuaishou.weapon.p0.bg.p(r3)     // Catch: java.lang.Throwable -> L583
            boolean r10 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L583
            if (r10 != 0) goto L14e
            boolean r9 = r3.startsWith(r9)     // Catch: java.lang.Throwable -> L583
            if (r9 != 0) goto L14e
            java.lang.String r9 = "01016"
            r2.put(r9, r3)     // Catch: java.lang.Throwable -> L583
        L14e:
            if (r4 != 0) goto L152
            if (r5 == 0) goto L186
        L152:
            double r3 = com.kuaishou.weapon.p0.bg.a()     // Catch: java.lang.Exception -> L186 java.lang.Throwable -> L583
            r9 = 0
            int r5 = (r3 > r9 ? 1 : (r3 == r9 ? 0 : -1))
            if (r5 <= 0) goto L16d
            java.lang.String r5 = "09002"
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L186 java.lang.Throwable -> L583
            r11.<init>()     // Catch: java.lang.Exception -> L186 java.lang.Throwable -> L583
            r11.append(r3)     // Catch: java.lang.Exception -> L186 java.lang.Throwable -> L583
            java.lang.String r3 = r11.toString()     // Catch: java.lang.Exception -> L186 java.lang.Throwable -> L583
            r2.put(r5, r3)     // Catch: java.lang.Exception -> L186 java.lang.Throwable -> L583
        L16d:
            double r3 = com.kuaishou.weapon.p0.bg.b()     // Catch: java.lang.Exception -> L186 java.lang.Throwable -> L583
            int r5 = (r3 > r9 ? 1 : (r3 == r9 ? 0 : -1))
            if (r5 <= 0) goto L186
            java.lang.String r5 = "09003"
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L186 java.lang.Throwable -> L583
            r9.<init>()     // Catch: java.lang.Exception -> L186 java.lang.Throwable -> L583
            r9.append(r3)     // Catch: java.lang.Exception -> L186 java.lang.Throwable -> L583
            java.lang.String r3 = r9.toString()     // Catch: java.lang.Exception -> L186 java.lang.Throwable -> L583
            r2.put(r5, r3)     // Catch: java.lang.Exception -> L186 java.lang.Throwable -> L583
        L186:
            java.lang.String r3 = "11013"
            android.content.Context r4 = r0.a     // Catch: java.lang.Throwable -> L583
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L583
            java.lang.String r4 = com.kuaishou.weapon.p0.bw.a(r4)     // Catch: java.lang.Throwable -> L583
            r5 = 2
            int r4 = java.lang.Integer.parseInt(r4, r5)     // Catch: java.lang.Throwable -> L583
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L583
            java.lang.String r3 = "11012"
            android.content.Context r4 = r0.a     // Catch: java.lang.Throwable -> L583
            java.lang.String r4 = com.kuaishou.weapon.p0.bw.b(r4)     // Catch: java.lang.Throwable -> L583
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L583
            java.lang.String r3 = "11011"
            android.content.Context r4 = r0.a     // Catch: java.lang.Throwable -> L583
            java.lang.String r4 = com.kuaishou.weapon.p0.bg.w(r4)     // Catch: java.lang.Throwable -> L583
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L583
            java.lang.String r3 = "11202"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.Fp()     // Catch: java.lang.Throwable -> L38b
            int r4 = com.kuaishou.weapon.p0.bg.b(r4)     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11203"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.Fy()     // Catch: java.lang.Throwable -> L38b
            int r4 = com.kuaishou.weapon.p0.bg.b(r4)     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11204"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.Fw()     // Catch: java.lang.Throwable -> L38b
            int r4 = com.kuaishou.weapon.p0.bg.b(r4)     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11205"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.getDeviceId()     // Catch: java.lang.Throwable -> L38b
            int r4 = com.kuaishou.weapon.p0.bg.b(r4)     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11206"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.getIccId()     // Catch: java.lang.Throwable -> L38b
            int r4 = com.kuaishou.weapon.p0.bg.b(r4)     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11207"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.Fo()     // Catch: java.lang.Throwable -> L38b
            int r4 = com.kuaishou.weapon.p0.bg.b(r4)     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11208"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.Fr()     // Catch: java.lang.Throwable -> L38b
            int r4 = com.kuaishou.weapon.p0.bg.b(r4)     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11209"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.Fs()     // Catch: java.lang.Throwable -> L38b
            int r4 = com.kuaishou.weapon.p0.bg.b(r4)     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11210"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.Ft()     // Catch: java.lang.Throwable -> L38b
            int r4 = com.kuaishou.weapon.p0.bg.b(r4)     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11211"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.getIp()     // Catch: java.lang.Throwable -> L38b
            int r4 = com.kuaishou.weapon.p0.bg.b(r4)     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11212"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.getLocation()     // Catch: java.lang.Throwable -> L38b
            int r4 = com.kuaishou.weapon.p0.bg.b(r4)     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11213"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.getOaid()     // Catch: java.lang.Throwable -> L38b
            int r4 = com.kuaishou.weapon.p0.bg.b(r4)     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11214"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.Fq()     // Catch: java.lang.Throwable -> L38b
            int r4 = com.kuaishou.weapon.p0.bg.b(r4)     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11215"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.Fv()     // Catch: java.lang.Throwable -> L38b
            int r4 = com.kuaishou.weapon.p0.bg.b(r4)     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11216"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.Fu()     // Catch: java.lang.Throwable -> L38b
            int r4 = com.kuaishou.weapon.p0.bg.b(r4)     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11301"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.Fz()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = com.kuaishou.weapon.p0.bg.c(r4)     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11302"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.getSdkVersion()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = com.kuaishou.weapon.p0.bg.c(r4)     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11303"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.getAppId()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = com.kuaishou.weapon.p0.bg.c(r4)     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11104"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.Fw()     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11105"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.getDeviceId()     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11106"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.getIccId()     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11107"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.Fo()     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11108"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.Fr()     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11109"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.Fs()     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11110"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.Ft()     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11111"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.getIp()     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11112"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.getLocation()     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11113"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.getOaid()     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11114"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.Fq()     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11115"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.Fv()     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
            java.lang.String r3 = "11116"
            com.kwad.sdk.f.b r4 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L38b
            java.lang.String r4 = r4.Fu()     // Catch: java.lang.Throwable -> L38b
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L38b
        L38b:
            android.content.Context r3 = r0.a     // Catch: java.lang.Throwable -> L583
            java.lang.String r3 = com.kuaishou.weapon.p0.bg.y(r3)     // Catch: java.lang.Throwable -> L583
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L583
            if (r4 != 0) goto L39c
            java.lang.String r4 = "01026"
            r2.put(r4, r3)     // Catch: java.lang.Throwable -> L583
        L39c:
            if (r6 != r8) goto L55d
            android.content.Context r3 = r0.a     // Catch: java.lang.Throwable -> L55c
            org.json.JSONObject r3 = com.kuaishou.weapon.p0.ah.a(r3)     // Catch: java.lang.Throwable -> L55c
            if (r3 == 0) goto L3ab
            java.lang.String r4 = "11015"
            r2.put(r4, r3)     // Catch: java.lang.Throwable -> L55c
        L3ab:
            boolean r3 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess     // Catch: java.lang.Throwable -> L55c
            java.lang.String r4 = "02016"
            java.lang.String r5 = "02013"
            java.lang.String r6 = "02018"
            java.lang.String r9 = "02007"
            java.lang.String r10 = "02006"
            java.lang.String r11 = "02005"
            java.lang.String r12 = "02004"
            java.lang.String r13 = "02003"
            java.lang.String r14 = "02002"
            java.lang.String r15 = "02001"
            if (r3 == 0) goto L47f
            com.kuaishou.weapon.p0.cd r3 = new com.kuaishou.weapon.p0.cd     // Catch: java.lang.Throwable -> L55c
            android.content.Context r8 = r0.a     // Catch: java.lang.Throwable -> L55c
            r3.<init>(r8)     // Catch: java.lang.Throwable -> L55c
            java.lang.String r8 = r3.a(r15)     // Catch: java.lang.Throwable -> L55c
            if (r8 == 0) goto L3d5
            java.lang.String r8 = r3.a(r15)     // Catch: java.lang.Throwable -> L55c
            goto L3d9
        L3d5:
            java.lang.String r8 = com.kuaishou.weapon.p0.bk.a()     // Catch: java.lang.Throwable -> L55c
        L3d9:
            r2.put(r15, r8)     // Catch: java.lang.Throwable -> L55c
            java.lang.String r8 = r3.a(r14)     // Catch: java.lang.Throwable -> L55c
            if (r8 == 0) goto L3e7
            java.lang.String r8 = r3.a(r14)     // Catch: java.lang.Throwable -> L55c
            goto L3eb
        L3e7:
            java.lang.String r8 = com.kuaishou.weapon.p0.bk.b()     // Catch: java.lang.Throwable -> L55c
        L3eb:
            r2.put(r14, r8)     // Catch: java.lang.Throwable -> L55c
            java.lang.String r8 = r3.a(r13)     // Catch: java.lang.Throwable -> L55c
            if (r8 == 0) goto L3f9
            java.lang.String r8 = r3.a(r13)     // Catch: java.lang.Throwable -> L55c
            goto L3fd
        L3f9:
            java.lang.String r8 = com.kuaishou.weapon.p0.bk.c()     // Catch: java.lang.Throwable -> L55c
        L3fd:
            r2.put(r13, r8)     // Catch: java.lang.Throwable -> L55c
            java.lang.String r8 = r3.a(r9)     // Catch: java.lang.Throwable -> L55c
            if (r8 == 0) goto L40b
            java.lang.String r8 = r3.a(r9)     // Catch: java.lang.Throwable -> L55c
            goto L40f
        L40b:
            java.lang.String r8 = com.kuaishou.weapon.p0.bk.g()     // Catch: java.lang.Throwable -> L55c
        L40f:
            r2.put(r9, r8)     // Catch: java.lang.Throwable -> L55c
            java.lang.String r8 = r3.a(r10)     // Catch: java.lang.Throwable -> L55c
            if (r8 == 0) goto L41d
            java.lang.String r8 = r3.a(r10)     // Catch: java.lang.Throwable -> L55c
            goto L421
        L41d:
            java.lang.String r8 = com.kuaishou.weapon.p0.bk.f()     // Catch: java.lang.Throwable -> L55c
        L421:
            r2.put(r10, r8)     // Catch: java.lang.Throwable -> L55c
            java.lang.String r8 = r3.a(r12)     // Catch: java.lang.Throwable -> L55c
            if (r8 == 0) goto L42f
            java.lang.String r8 = r3.a(r12)     // Catch: java.lang.Throwable -> L55c
            goto L433
        L42f:
            java.lang.String r8 = com.kuaishou.weapon.p0.bk.d()     // Catch: java.lang.Throwable -> L55c
        L433:
            r2.put(r12, r8)     // Catch: java.lang.Throwable -> L55c
            java.lang.String r8 = r3.a(r11)     // Catch: java.lang.Throwable -> L55c
            if (r8 == 0) goto L441
            java.lang.String r8 = r3.a(r11)     // Catch: java.lang.Throwable -> L55c
            goto L445
        L441:
            java.lang.String r8 = com.kuaishou.weapon.p0.bk.e()     // Catch: java.lang.Throwable -> L55c
        L445:
            r2.put(r11, r8)     // Catch: java.lang.Throwable -> L55c
            java.lang.String r8 = r3.a(r6)     // Catch: java.lang.Throwable -> L55c
            if (r8 == 0) goto L453
            java.lang.String r8 = r3.a(r6)     // Catch: java.lang.Throwable -> L55c
            goto L457
        L453:
            java.lang.String r8 = com.kuaishou.weapon.p0.bk.s()     // Catch: java.lang.Throwable -> L55c
        L457:
            r2.put(r6, r8)     // Catch: java.lang.Throwable -> L55c
            java.lang.String r6 = r3.a(r5)     // Catch: java.lang.Throwable -> L55c
            if (r6 == 0) goto L465
            java.lang.String r6 = r3.a(r5)     // Catch: java.lang.Throwable -> L55c
            goto L469
        L465:
            java.lang.String r6 = com.kuaishou.weapon.p0.bk.m()     // Catch: java.lang.Throwable -> L55c
        L469:
            r2.put(r5, r6)     // Catch: java.lang.Throwable -> L55c
            java.lang.String r5 = r3.a(r4)     // Catch: java.lang.Throwable -> L55c
            if (r5 == 0) goto L477
            java.lang.String r3 = r3.a(r4)     // Catch: java.lang.Throwable -> L55c
            goto L47b
        L477:
            java.lang.String r3 = com.kuaishou.weapon.p0.bk.q()     // Catch: java.lang.Throwable -> L55c
        L47b:
            r2.put(r4, r3)     // Catch: java.lang.Throwable -> L55c
            goto L4bf
        L47f:
            java.lang.String r3 = com.kuaishou.weapon.p0.bk.a()     // Catch: java.lang.Throwable -> L55c
            r2.put(r15, r3)     // Catch: java.lang.Throwable -> L55c
            java.lang.String r3 = com.kuaishou.weapon.p0.bk.b()     // Catch: java.lang.Throwable -> L55c
            r2.put(r14, r3)     // Catch: java.lang.Throwable -> L55c
            java.lang.String r3 = com.kuaishou.weapon.p0.bk.c()     // Catch: java.lang.Throwable -> L55c
            r2.put(r13, r3)     // Catch: java.lang.Throwable -> L55c
            java.lang.String r3 = com.kuaishou.weapon.p0.bk.d()     // Catch: java.lang.Throwable -> L55c
            r2.put(r12, r3)     // Catch: java.lang.Throwable -> L55c
            java.lang.String r3 = com.kuaishou.weapon.p0.bk.e()     // Catch: java.lang.Throwable -> L55c
            r2.put(r11, r3)     // Catch: java.lang.Throwable -> L55c
            java.lang.String r3 = com.kuaishou.weapon.p0.bk.f()     // Catch: java.lang.Throwable -> L55c
            r2.put(r10, r3)     // Catch: java.lang.Throwable -> L55c
            java.lang.String r3 = com.kuaishou.weapon.p0.bk.g()     // Catch: java.lang.Throwable -> L55c
            r2.put(r9, r3)     // Catch: java.lang.Throwable -> L55c
            java.lang.String r3 = com.kuaishou.weapon.p0.bk.s()     // Catch: java.lang.Throwable -> L55c
            r2.put(r6, r3)     // Catch: java.lang.Throwable -> L55c
            java.lang.String r3 = com.kuaishou.weapon.p0.bk.m()     // Catch: java.lang.Throwable -> L55c
            r2.put(r5, r3)     // Catch: java.lang.Throwable -> L55c
            goto L477
        L4bf:
            java.lang.String r3 = "02021"
            android.content.Context r4 = r0.a     // Catch: java.lang.Throwable -> L55c
            java.lang.String r4 = com.kuaishou.weapon.p0.bk.d(r4)     // Catch: java.lang.Throwable -> L55c
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L55c
            java.lang.String r3 = "02022"
            android.content.Context r4 = r0.a     // Catch: java.lang.Throwable -> L55c
            java.lang.String r4 = com.kuaishou.weapon.p0.bk.c(r4)     // Catch: java.lang.Throwable -> L55c
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L55c
            java.lang.String r3 = "02044"
            java.lang.String r4 = com.kuaishou.weapon.p0.bk.t()     // Catch: java.lang.Throwable -> L55c
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L55c
            java.lang.String r3 = "11009"
            android.content.Context r4 = r0.a     // Catch: java.lang.Throwable -> L55c
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L55c
            java.lang.String r4 = com.kuaishou.weapon.p0.br.a(r4)     // Catch: java.lang.Throwable -> L55c
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L55c
            boolean r3 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess     // Catch: java.lang.Throwable -> L55c
            java.lang.String r4 = "04004"
            java.lang.String r5 = "04003"
            java.lang.String r6 = "04002"
            java.lang.String r8 = "04001"
            if (r3 == 0) goto L53b
            com.kuaishou.weapon.p0.by r3 = new com.kuaishou.weapon.p0.by     // Catch: java.lang.Throwable -> L55c
            android.content.Context r9 = r0.a     // Catch: java.lang.Throwable -> L55c
            r3.<init>(r9)     // Catch: java.lang.Throwable -> L55c
            java.lang.String r9 = r3.a(r8)     // Catch: java.lang.Throwable -> L55c
            if (r9 == 0) goto L50b
            java.lang.String r9 = r3.a(r8)     // Catch: java.lang.Throwable -> L55c
            goto L50c
        L50b:
            r9 = r7
        L50c:
            r2.put(r8, r9)     // Catch: java.lang.Throwable -> L55c
            java.lang.String r8 = r3.a(r6)     // Catch: java.lang.Throwable -> L55c
            if (r8 == 0) goto L51a
            java.lang.String r8 = r3.a(r6)     // Catch: java.lang.Throwable -> L55c
            goto L51b
        L51a:
            r8 = r7
        L51b:
            r2.put(r6, r8)     // Catch: java.lang.Throwable -> L55c
            java.lang.String r6 = r3.a(r5)     // Catch: java.lang.Throwable -> L55c
            if (r6 == 0) goto L529
            java.lang.String r6 = r3.a(r5)     // Catch: java.lang.Throwable -> L55c
            goto L52a
        L529:
            r6 = r7
        L52a:
            r2.put(r5, r6)     // Catch: java.lang.Throwable -> L55c
            java.lang.String r5 = r3.a(r4)     // Catch: java.lang.Throwable -> L55c
            if (r5 == 0) goto L537
            java.lang.String r7 = r3.a(r4)     // Catch: java.lang.Throwable -> L55c
        L537:
            r2.put(r4, r7)     // Catch: java.lang.Throwable -> L55c
            goto L55d
        L53b:
            com.kuaishou.weapon.p0.bi r3 = com.kuaishou.weapon.p0.bj.b()     // Catch: java.lang.Throwable -> L55c java.lang.Exception -> L55d
            java.lang.String r7 = com.kuaishou.weapon.p0.bj.a()     // Catch: java.lang.Throwable -> L55c java.lang.Exception -> L55d
            r2.put(r8, r7)     // Catch: java.lang.Throwable -> L55c java.lang.Exception -> L55d
            java.lang.String r7 = r3.b()     // Catch: java.lang.Throwable -> L55c java.lang.Exception -> L55d
            r2.put(r6, r7)     // Catch: java.lang.Throwable -> L55c java.lang.Exception -> L55d
            java.lang.String r6 = r3.c()     // Catch: java.lang.Throwable -> L55c java.lang.Exception -> L55d
            r2.put(r5, r6)     // Catch: java.lang.Throwable -> L55c java.lang.Exception -> L55d
            int r3 = r3.a()     // Catch: java.lang.Throwable -> L55c java.lang.Exception -> L55d
            r2.put(r4, r3)     // Catch: java.lang.Throwable -> L55c java.lang.Exception -> L55d
            goto L55d
        L55c:
            return r1
        L55d:
            boolean r3 = r0.b     // Catch: java.lang.Throwable -> L583
            if (r3 == 0) goto L567
            java.lang.String r3 = "20004"
            r4 = 1
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L583
        L567:
            java.lang.String r3 = "11017"
            java.lang.String r4 = r2.toString()     // Catch: java.lang.Throwable -> L583
            int r4 = r4.length()     // Catch: java.lang.Throwable -> L583
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L583
            java.lang.String r3 = "20000"
            int r4 = r0.c     // Catch: java.lang.Throwable -> L583
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L583
            java.lang.String r3 = "11028"
            java.lang.String r4 = com.kuaishou.weapon.p0.WeaponHI.sKSSdkver     // Catch: java.lang.Throwable -> L583
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L583
            return r2
        L583:
            return r1
    }
}
