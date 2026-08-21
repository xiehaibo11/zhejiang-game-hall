package com.kuaishou.weapon.p0;

public class cm {
    private android.content.Context a;
    private int b;

    public cm(android.content.Context r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    public java.lang.String a(java.lang.String r4) {
            r3 = this;
            r0 = 0
            com.kuaishou.weapon.p0.cl r1 = new com.kuaishou.weapon.p0.cl     // Catch: java.lang.Throwable -> L22
            java.lang.String r2 = com.kuaishou.weapon.p0.cj.j     // Catch: java.lang.Throwable -> L22
            r1.<init>(r4, r2)     // Catch: java.lang.Throwable -> L22
            android.content.Context r4 = r3.a     // Catch: java.lang.Throwable -> L22
            org.json.JSONObject r4 = r1.a(r4)     // Catch: java.lang.Throwable -> L22
            if (r4 != 0) goto L11
            return r0
        L11:
            org.json.JSONObject r1 = r3.a()     // Catch: java.lang.Throwable -> L22
            if (r1 != 0) goto L18
            return r0
        L18:
            java.lang.String r2 = "module_section"
            r4.put(r2, r1)     // Catch: java.lang.Throwable -> L22
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L22
            return r4
        L22:
            return r0
    }

    public org.json.JSONObject a() {
            r25 = this;
            r0 = r25
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Le72
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Le72
            r3.<init>()     // Catch: java.lang.Throwable -> Le72
            android.content.Context r4 = r0.a     // Catch: java.lang.Throwable -> Le72
            java.lang.String r5 = "re_po_rt"
            com.kuaishou.weapon.p0.h r4 = com.kuaishou.weapon.p0.h.a(r4, r5)     // Catch: java.lang.Throwable -> Le72
            java.lang.String r5 = "a1_p_s_p_s"
            boolean r5 = r4.e(r5)     // Catch: java.lang.Throwable -> Le72
            java.lang.String r6 = "a1_p_s_p_s_c_b"
            boolean r6 = r4.e(r6)     // Catch: java.lang.Throwable -> Le72
            java.lang.String r7 = "plc001_b_bcl_ie"
            r8 = 1
            int r7 = r4.b(r7, r8)     // Catch: java.lang.Throwable -> Le72
            r9 = 0
            java.lang.String r10 = "RISK"
            if (r7 != r8) goto La2
            if (r5 != 0) goto L2f
            if (r6 == 0) goto La2
        L2f:
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> Le72
            java.lang.String r7 = com.kuaishou.weapon.p0.bg.a(r7)     // Catch: java.lang.Throwable -> Le72
            boolean r11 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Le72
            if (r11 != 0) goto L46
            boolean r11 = r7.startsWith(r10)     // Catch: java.lang.Throwable -> Le72
            if (r11 != 0) goto L46
            java.lang.String r11 = "01001"
            r3.put(r11, r7)     // Catch: java.lang.Throwable -> Le72
        L46:
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> Le72
            java.lang.String r7 = com.kuaishou.weapon.p0.bg.c(r7)     // Catch: java.lang.Throwable -> Le72
            boolean r11 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Le72
            if (r11 != 0) goto L5d
            boolean r11 = r7.startsWith(r10)     // Catch: java.lang.Throwable -> Le72
            if (r11 != 0) goto L5d
            java.lang.String r11 = "01003"
            r3.put(r11, r7)     // Catch: java.lang.Throwable -> Le72
        L5d:
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> Le72
            java.lang.String r7 = com.kuaishou.weapon.p0.bg.b(r7, r9)     // Catch: java.lang.Throwable -> Le72
            boolean r11 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Le72
            if (r11 != 0) goto L74
            boolean r11 = r7.startsWith(r10)     // Catch: java.lang.Throwable -> Le72
            if (r11 != 0) goto L74
            java.lang.String r11 = "01019"
            r3.put(r11, r7)     // Catch: java.lang.Throwable -> Le72
        L74:
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> Le72
            java.lang.String r7 = com.kuaishou.weapon.p0.bg.b(r7, r8)     // Catch: java.lang.Throwable -> Le72
            boolean r11 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Le72
            if (r11 != 0) goto L8b
            boolean r11 = r7.startsWith(r10)     // Catch: java.lang.Throwable -> Le72
            if (r11 != 0) goto L8b
            java.lang.String r11 = "01004"
            r3.put(r11, r7)     // Catch: java.lang.Throwable -> Le72
        L8b:
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> Le72
            java.lang.String r7 = com.kuaishou.weapon.p0.bg.d(r7)     // Catch: java.lang.Throwable -> Le72
            boolean r11 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Le72
            if (r11 != 0) goto La2
            boolean r11 = r7.startsWith(r10)     // Catch: java.lang.Throwable -> Le72
            if (r11 != 0) goto La2
            java.lang.String r11 = "01007"
            r3.put(r11, r7)     // Catch: java.lang.Throwable -> Le72
        La2:
            java.lang.String r7 = "plc001_b_bcl_is"
            int r7 = r4.b(r7, r9)     // Catch: java.lang.Throwable -> Le72
            if (r7 != r8) goto Lc6
            if (r5 != 0) goto Lae
            if (r6 == 0) goto Lc6
        Lae:
            com.kuaishou.weapon.p0.bf r7 = new com.kuaishou.weapon.p0.bf     // Catch: java.lang.Throwable -> Le72
            r7.<init>()     // Catch: java.lang.Throwable -> Le72
            java.lang.String r11 = "plc001_b_pry_gsl"
            int r11 = r4.b(r11, r8)     // Catch: java.lang.Throwable -> Le72
            if (r11 != r8) goto Lc6
            java.lang.String r11 = "10020"
            android.content.Context r12 = r0.a     // Catch: java.lang.Throwable -> Le72
            org.json.JSONObject r7 = r7.f(r12)     // Catch: java.lang.Throwable -> Le72
            r3.put(r11, r7)     // Catch: java.lang.Throwable -> Le72
        Lc6:
            java.lang.String r7 = "plc001_b_bcl_ic"
            int r7 = r4.b(r7, r8)     // Catch: java.lang.Throwable -> Le72
            if (r7 != r8) goto Ldd
            if (r5 != 0) goto Ld2
            if (r6 == 0) goto Ldd
        Ld2:
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> Le72
            java.lang.String r7 = com.kuaishou.weapon.p0.bg.e(r7)     // Catch: java.lang.Throwable -> Le72
            java.lang.String r11 = "01011"
            r3.put(r11, r7)     // Catch: java.lang.Throwable -> Le72
        Ldd:
            java.lang.String r7 = "plc001_b_bcl_btm"
            int r7 = r4.b(r7, r8)     // Catch: java.lang.Throwable -> Le72
            if (r7 != r8) goto L100
            if (r5 != 0) goto Le9
            if (r6 == 0) goto L100
        Le9:
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> Le72
            java.lang.String r7 = com.kuaishou.weapon.p0.bg.p(r7)     // Catch: java.lang.Throwable -> Le72
            boolean r11 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Le72
            if (r11 != 0) goto L100
            boolean r11 = r7.startsWith(r10)     // Catch: java.lang.Throwable -> Le72
            if (r11 != 0) goto L100
            java.lang.String r11 = "01016"
            r3.put(r11, r7)     // Catch: java.lang.Throwable -> Le72
        L100:
            java.lang.String r7 = "plc001_b_bcl_d"
            int r7 = r4.b(r7, r8)     // Catch: java.lang.Throwable -> Le72
            java.lang.String r11 = ""
            if (r7 != r8) goto L717
            if (r5 != 0) goto L10e
            if (r6 == 0) goto L130
        L10e:
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> Le72
            java.lang.String r7 = com.kuaishou.weapon.p0.bg.f(r7)     // Catch: java.lang.Throwable -> Le72
            boolean r12 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Le72
            if (r12 != 0) goto L125
            boolean r12 = r7.startsWith(r10)     // Catch: java.lang.Throwable -> Le72
            if (r12 != 0) goto L125
            java.lang.String r12 = "01013"
            r3.put(r12, r7)     // Catch: java.lang.Throwable -> Le72
        L125:
            java.lang.String r7 = "02042"
            android.content.Context r12 = r0.a     // Catch: java.lang.Throwable -> Le72
            int r12 = com.kuaishou.weapon.p0.bg.v(r12)     // Catch: java.lang.Throwable -> Le72
            r3.put(r7, r12)     // Catch: java.lang.Throwable -> Le72
        L130:
            java.lang.String r7 = "02054"
            android.content.Context r12 = r0.a     // Catch: java.lang.Throwable -> Le72
            java.lang.String r12 = com.kuaishou.weapon.p0.bg.z(r12)     // Catch: java.lang.Throwable -> Le72
            r3.put(r7, r12)     // Catch: java.lang.Throwable -> Le72
            boolean r7 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess     // Catch: java.lang.Throwable -> Le72
            java.lang.String r12 = "02014"
            java.lang.String r13 = "02013"
            java.lang.String r14 = "02012"
            java.lang.String r15 = "02011"
            java.lang.String r9 = "02010"
            java.lang.String r8 = "02009"
            r16 = r1
            java.lang.String r1 = "02008"
            java.lang.String r2 = "02007"
            r18 = r10
            java.lang.String r10 = "02006"
            r19 = r6
            java.lang.String r6 = "02005"
            r20 = r5
            java.lang.String r5 = "02004"
            r21 = r4
            java.lang.String r4 = "02003"
            r22 = r11
            java.lang.String r11 = "02002"
            r23 = r12
            java.lang.String r12 = "02001"
            if (r7 == 0) goto L425
            java.lang.String r7 = "02019"
            r24 = r13
            android.content.Context r13 = r0.a     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r13 = com.kuaishou.weapon.p0.bk.b(r13)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            r3.put(r7, r13)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r7 = "02021"
            android.content.Context r13 = r0.a     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r13 = com.kuaishou.weapon.p0.bk.d(r13)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            r3.put(r7, r13)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r7 = "02022"
            android.content.Context r13 = r0.a     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r13 = com.kuaishou.weapon.p0.bk.c(r13)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            r3.put(r7, r13)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r7 = "02030"
            android.content.Context r13 = r0.a     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r13 = com.kuaishou.weapon.p0.bk.f(r13)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            r3.put(r7, r13)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            com.kuaishou.weapon.p0.cd r7 = new com.kuaishou.weapon.p0.cd     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            android.content.Context r13 = r0.a     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            r7.<init>(r13)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r13 = "01014"
            java.lang.String r0 = "01014"
            java.lang.String r0 = r7.a(r0)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r0 == 0) goto L1af
            java.lang.String r0 = "01014"
            java.lang.String r0 = r7.a(r0)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L1b1
        L1af:
            r0 = r22
        L1b1:
            r3.put(r13, r0)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r0 = r7.a(r12)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r0 == 0) goto L1bf
            java.lang.String r0 = r7.a(r12)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L1c3
        L1bf:
            java.lang.String r0 = com.kuaishou.weapon.p0.bk.a()     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
        L1c3:
            r3.put(r12, r0)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r0 = r7.a(r11)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r0 == 0) goto L1d1
            java.lang.String r0 = r7.a(r11)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L1d5
        L1d1:
            java.lang.String r0 = com.kuaishou.weapon.p0.bk.b()     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
        L1d5:
            r3.put(r11, r0)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r0 = r7.a(r4)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r0 == 0) goto L1e3
            java.lang.String r0 = r7.a(r4)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L1e7
        L1e3:
            java.lang.String r0 = com.kuaishou.weapon.p0.bk.c()     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
        L1e7:
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r0 = r7.a(r5)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r0 == 0) goto L1f5
            java.lang.String r0 = r7.a(r5)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L1f9
        L1f5:
            java.lang.String r0 = com.kuaishou.weapon.p0.bk.d()     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
        L1f9:
            r3.put(r5, r0)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r0 = r7.a(r6)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r0 == 0) goto L207
            java.lang.String r0 = r7.a(r6)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L20b
        L207:
            java.lang.String r0 = com.kuaishou.weapon.p0.bk.e()     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
        L20b:
            r3.put(r6, r0)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r0 = r7.a(r10)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r0 == 0) goto L219
            java.lang.String r0 = r7.a(r10)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L21d
        L219:
            java.lang.String r0 = com.kuaishou.weapon.p0.bk.f()     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
        L21d:
            r3.put(r10, r0)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r0 = r7.a(r2)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r0 == 0) goto L22b
            java.lang.String r0 = r7.a(r2)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L22f
        L22b:
            java.lang.String r0 = com.kuaishou.weapon.p0.bk.g()     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
        L22f:
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r0 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r0 == 0) goto L23d
            java.lang.String r0 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L241
        L23d:
            java.lang.String r0 = com.kuaishou.weapon.p0.bk.h()     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
        L241:
            r3.put(r1, r0)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r0 = r7.a(r8)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r0 == 0) goto L24f
            java.lang.String r0 = r7.a(r8)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L253
        L24f:
            java.lang.String r0 = com.kuaishou.weapon.p0.bk.i()     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
        L253:
            r3.put(r8, r0)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r0 = r7.a(r9)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r0 == 0) goto L261
            java.lang.String r0 = r7.a(r9)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L265
        L261:
            java.lang.String r0 = com.kuaishou.weapon.p0.bk.j()     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
        L265:
            r3.put(r9, r0)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r0 = r7.a(r15)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r0 == 0) goto L273
            java.lang.String r0 = r7.a(r15)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L277
        L273:
            java.lang.String r0 = com.kuaishou.weapon.p0.bk.k()     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
        L277:
            r3.put(r15, r0)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r0 = r7.a(r14)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r0 == 0) goto L285
            java.lang.String r0 = r7.a(r14)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L289
        L285:
            java.lang.String r0 = com.kuaishou.weapon.p0.bk.l()     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
        L289:
            r3.put(r14, r0)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            r0 = r24
            java.lang.String r1 = r7.a(r0)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r1 == 0) goto L299
            java.lang.String r1 = r7.a(r0)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L29d
        L299:
            java.lang.String r1 = com.kuaishou.weapon.p0.bk.m()     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
        L29d:
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            r13 = r23
            java.lang.String r0 = r7.a(r13)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r0 == 0) goto L2ad
            java.lang.String r0 = r7.a(r13)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L2b1
        L2ad:
            java.lang.String r0 = com.kuaishou.weapon.p0.bk.n()     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
        L2b1:
            r3.put(r13, r0)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r0 = "02015"
            java.lang.String r1 = "02015"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r1 == 0) goto L2c5
            java.lang.String r1 = "02015"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L2c9
        L2c5:
            java.lang.String r1 = com.kuaishou.weapon.p0.bk.p()     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
        L2c9:
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r0 = "02016"
            java.lang.String r1 = "02016"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r1 == 0) goto L2dd
            java.lang.String r1 = "02016"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L2e1
        L2dd:
            java.lang.String r1 = com.kuaishou.weapon.p0.bk.q()     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
        L2e1:
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r0 = "02017"
            java.lang.String r1 = "02017"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r1 == 0) goto L2f5
            java.lang.String r1 = "02017"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L2fd
        L2f5:
            int r1 = com.kuaishou.weapon.p0.bk.r()     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
        L2fd:
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r0 = "02018"
            java.lang.String r1 = "02018"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r1 == 0) goto L311
            java.lang.String r1 = "02018"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L315
        L311:
            java.lang.String r1 = com.kuaishou.weapon.p0.bk.s()     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
        L315:
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r0 = "02020"
            java.lang.String r1 = "02020"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r1 == 0) goto L329
            java.lang.String r1 = "02020"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L32d
        L329:
            java.lang.String r1 = com.kuaishou.weapon.p0.bk.u()     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
        L32d:
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r0 = "02023"
            java.lang.String r1 = "02023"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r1 == 0) goto L341
            java.lang.String r1 = "02023"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L343
        L341:
            r1 = r22
        L343:
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r0 = "02031"
            java.lang.String r1 = "02031"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r1 == 0) goto L357
            java.lang.String r1 = "02031"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L35b
        L357:
            java.lang.String r1 = com.kuaishou.weapon.p0.bk.y()     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
        L35b:
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r0 = "02032"
            java.lang.String r1 = "02032"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r1 == 0) goto L36f
            java.lang.String r1 = "02032"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L373
        L36f:
            java.lang.String r1 = com.kuaishou.weapon.p0.bk.o()     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
        L373:
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r0 = "02033"
            java.lang.String r1 = "02033"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r1 == 0) goto L387
            java.lang.String r1 = "02033"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L38b
        L387:
            java.lang.String r1 = com.kuaishou.weapon.p0.bk.x()     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
        L38b:
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r0 = "02034"
            java.lang.String r1 = "02034"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r1 == 0) goto L39f
            java.lang.String r1 = "02034"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L3a3
        L39f:
            java.lang.String r1 = com.kuaishou.weapon.p0.bk.z()     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
        L3a3:
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r0 = "02035"
            java.lang.String r1 = "02035"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r1 == 0) goto L3b7
            java.lang.String r1 = "02035"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L3bb
        L3b7:
            java.lang.String r1 = com.kuaishou.weapon.p0.bk.A()     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
        L3bb:
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r0 = "02036"
            java.lang.String r1 = "02036"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r1 == 0) goto L3cf
            java.lang.String r1 = "02036"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L3d1
        L3cf:
            r1 = r22
        L3d1:
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r0 = "02037"
            java.lang.String r1 = "02037"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r1 == 0) goto L3e5
            java.lang.String r1 = "02037"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L3e9
        L3e5:
            java.lang.String r1 = com.kuaishou.weapon.p0.bk.w()     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
        L3e9:
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r0 = "02038"
            java.lang.String r1 = "02038"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r1 == 0) goto L3fd
            java.lang.String r1 = "02038"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L401
        L3fd:
            java.lang.String r1 = com.kuaishou.weapon.p0.bk.v()     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
        L401:
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            java.lang.String r0 = "02045"
            java.lang.String r1 = "02045"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            if (r1 == 0) goto L415
            java.lang.String r1 = "02045"
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L419
        L415:
            java.lang.String r1 = com.kuaishou.weapon.p0.bk.B()     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
        L419:
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L41d java.lang.Exception -> L421
            goto L421
        L41d:
            r1 = r25
            goto Le73
        L421:
            r1 = r25
            goto L52d
        L425:
            r0 = r13
            r13 = r23
            java.lang.String r7 = com.kuaishou.weapon.p0.bk.a()     // Catch: java.lang.Throwable -> L41d
            r3.put(r12, r7)     // Catch: java.lang.Throwable -> L41d
            java.lang.String r7 = com.kuaishou.weapon.p0.bk.b()     // Catch: java.lang.Throwable -> L41d
            r3.put(r11, r7)     // Catch: java.lang.Throwable -> L41d
            java.lang.String r7 = com.kuaishou.weapon.p0.bk.c()     // Catch: java.lang.Throwable -> L41d
            r3.put(r4, r7)     // Catch: java.lang.Throwable -> L41d
            java.lang.String r4 = com.kuaishou.weapon.p0.bk.d()     // Catch: java.lang.Throwable -> L41d
            r3.put(r5, r4)     // Catch: java.lang.Throwable -> L41d
            java.lang.String r4 = com.kuaishou.weapon.p0.bk.e()     // Catch: java.lang.Throwable -> L41d
            r3.put(r6, r4)     // Catch: java.lang.Throwable -> L41d
            java.lang.String r4 = com.kuaishou.weapon.p0.bk.f()     // Catch: java.lang.Throwable -> L41d
            r3.put(r10, r4)     // Catch: java.lang.Throwable -> L41d
            java.lang.String r4 = com.kuaishou.weapon.p0.bk.g()     // Catch: java.lang.Throwable -> L41d
            r3.put(r2, r4)     // Catch: java.lang.Throwable -> L41d
            java.lang.String r2 = com.kuaishou.weapon.p0.bk.h()     // Catch: java.lang.Throwable -> L41d
            r3.put(r1, r2)     // Catch: java.lang.Throwable -> L41d
            java.lang.String r1 = com.kuaishou.weapon.p0.bk.i()     // Catch: java.lang.Throwable -> L41d
            r3.put(r8, r1)     // Catch: java.lang.Throwable -> L41d
            java.lang.String r1 = com.kuaishou.weapon.p0.bk.j()     // Catch: java.lang.Throwable -> L41d
            r3.put(r9, r1)     // Catch: java.lang.Throwable -> L41d
            java.lang.String r1 = com.kuaishou.weapon.p0.bk.k()     // Catch: java.lang.Throwable -> L41d
            r3.put(r15, r1)     // Catch: java.lang.Throwable -> L41d
            java.lang.String r1 = com.kuaishou.weapon.p0.bk.l()     // Catch: java.lang.Throwable -> L41d
            r3.put(r14, r1)     // Catch: java.lang.Throwable -> L41d
            java.lang.String r1 = com.kuaishou.weapon.p0.bk.m()     // Catch: java.lang.Throwable -> L41d
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L41d
            java.lang.String r0 = com.kuaishou.weapon.p0.bk.n()     // Catch: java.lang.Throwable -> L41d
            r3.put(r13, r0)     // Catch: java.lang.Throwable -> L41d
            java.lang.String r0 = "02015"
            java.lang.String r1 = com.kuaishou.weapon.p0.bk.p()     // Catch: java.lang.Throwable -> L41d
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L41d
            java.lang.String r0 = "02016"
            java.lang.String r1 = com.kuaishou.weapon.p0.bk.q()     // Catch: java.lang.Throwable -> L41d
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L41d
            java.lang.String r0 = "02017"
            int r1 = com.kuaishou.weapon.p0.bk.r()     // Catch: java.lang.Throwable -> L41d
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L41d
            java.lang.String r0 = "02018"
            java.lang.String r1 = com.kuaishou.weapon.p0.bk.s()     // Catch: java.lang.Throwable -> L41d
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L41d
            java.lang.String r0 = "02019"
            r1 = r25
            android.content.Context r2 = r1.a     // Catch: java.lang.Throwable -> Le73
            java.lang.String r2 = com.kuaishou.weapon.p0.bk.b(r2)     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "02020"
            java.lang.String r2 = com.kuaishou.weapon.p0.bk.u()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "02021"
            android.content.Context r2 = r1.a     // Catch: java.lang.Throwable -> Le73
            java.lang.String r2 = com.kuaishou.weapon.p0.bk.d(r2)     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "02022"
            android.content.Context r2 = r1.a     // Catch: java.lang.Throwable -> Le73
            java.lang.String r2 = com.kuaishou.weapon.p0.bk.c(r2)     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "02030"
            android.content.Context r2 = r1.a     // Catch: java.lang.Throwable -> Le73
            java.lang.String r2 = com.kuaishou.weapon.p0.bk.f(r2)     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "02031"
            java.lang.String r2 = com.kuaishou.weapon.p0.bk.y()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "02032"
            java.lang.String r2 = com.kuaishou.weapon.p0.bk.o()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "02033"
            java.lang.String r2 = com.kuaishou.weapon.p0.bk.x()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "02034"
            java.lang.String r2 = com.kuaishou.weapon.p0.bk.z()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "02035"
            java.lang.String r2 = com.kuaishou.weapon.p0.bk.A()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "02037"
            java.lang.String r2 = com.kuaishou.weapon.p0.bk.w()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "02038"
            java.lang.String r2 = com.kuaishou.weapon.p0.bk.v()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "02045"
            java.lang.String r2 = com.kuaishou.weapon.p0.bk.B()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> Le73
        L52d:
            java.lang.String r0 = "02067"
            android.content.Context r2 = r1.a     // Catch: java.lang.Throwable -> Le73
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> Le73
            java.lang.String r2 = r2.getPackageResourcePath()     // Catch: java.lang.Throwable -> Le73
            java.lang.String r4 = "/data/app/"
            r5 = r22
            java.lang.String r2 = r2.replace(r4, r5)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r4 = "/base.apk"
            java.lang.String r2 = r2.replace(r4, r5)     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "02039"
            java.lang.String r2 = com.kuaishou.weapon.p0.bg.h()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "02040"
            java.lang.String r2 = com.kuaishou.weapon.p0.bg.i()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "02041"
            android.content.Context r2 = r1.a     // Catch: java.lang.Throwable -> Le73
            int r2 = com.kuaishou.weapon.p0.bg.u(r2)     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "02044"
            java.lang.String r2 = com.kuaishou.weapon.p0.bk.t()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "02046"
            java.lang.String r2 = com.kuaishou.weapon.p0.bk.C()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "persist.service.adb.enable"
            java.lang.String r0 = com.kuaishou.weapon.p0.bg.a(r0)     // Catch: java.lang.Throwable -> Le73
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le73
            if (r2 != 0) goto L58a
            java.lang.String r2 = "03058"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> Le73
        L58a:
            java.lang.String r0 = "sys.resettype"
            java.lang.String r0 = com.kuaishou.weapon.p0.bg.a(r0)     // Catch: java.lang.Throwable -> Le73
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le73
            if (r2 != 0) goto L59b
            java.lang.String r2 = "03057"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> Le73
        L59b:
            java.lang.String r0 = "ro.boot.bootreason"
            java.lang.String r0 = com.kuaishou.weapon.p0.bg.a(r0)     // Catch: java.lang.Throwable -> Le73
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le73
            if (r2 != 0) goto L5ac
            java.lang.String r2 = "03056"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> Le73
        L5ac:
            java.lang.String r0 = "ro.runtime.firstboot"
            java.lang.String r0 = com.kuaishou.weapon.p0.bg.a(r0)     // Catch: java.lang.Throwable -> Le73
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le73
            if (r2 != 0) goto L5bd
            java.lang.String r2 = "03055"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> Le73
        L5bd:
            java.lang.String r0 = "init.svc.atcmdserver"
            java.lang.String r0 = com.kuaishou.weapon.p0.bg.a(r0)     // Catch: java.lang.Throwable -> Le73
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le73
            if (r2 != 0) goto L5ce
            java.lang.String r2 = "03054"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> Le73
        L5ce:
            java.lang.String r0 = "ro.build.date.utc"
            java.lang.String r0 = com.kuaishou.weapon.p0.bg.a(r0)     // Catch: java.lang.Throwable -> Le73
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le73
            if (r2 != 0) goto L5df
            java.lang.String r2 = "03061"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> Le73
        L5df:
            java.lang.String r0 = "ro.bootimage.build.date.utc"
            java.lang.String r0 = com.kuaishou.weapon.p0.bg.a(r0)     // Catch: java.lang.Throwable -> Le73
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le73
            if (r2 != 0) goto L5f0
            java.lang.String r2 = "03062"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> Le73
        L5f0:
            java.lang.String r0 = "ro.build.date.YmdHM"
            java.lang.String r0 = com.kuaishou.weapon.p0.bg.a(r0)     // Catch: java.lang.Throwable -> Le73
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le73
            if (r2 != 0) goto L601
            java.lang.String r2 = "03063"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> Le73
        L601:
            java.lang.String r0 = "dhcp.ipv6.wlan0.dns1"
            java.lang.String r0 = com.kuaishou.weapon.p0.bg.a(r0)     // Catch: java.lang.Throwable -> Le73
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le73
            if (r2 != 0) goto L612
            java.lang.String r2 = "03067"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> Le73
        L612:
            java.lang.String r0 = "dhcp.ipv6.wlan0.dns2"
            java.lang.String r0 = com.kuaishou.weapon.p0.bg.a(r0)     // Catch: java.lang.Throwable -> Le73
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le73
            if (r2 != 0) goto L623
            java.lang.String r2 = "03068"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> Le73
        L623:
            java.lang.String r0 = "dhcp.wlan0.dns1"
            java.lang.String r0 = com.kuaishou.weapon.p0.bg.a(r0)     // Catch: java.lang.Throwable -> Le73
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le73
            if (r2 != 0) goto L634
            java.lang.String r2 = "03069"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> Le73
        L634:
            java.lang.String r0 = "dhcp.wlan0.dns2"
            java.lang.String r0 = com.kuaishou.weapon.p0.bg.a(r0)     // Catch: java.lang.Throwable -> Le73
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le73
            if (r2 != 0) goto L645
            java.lang.String r2 = "03070"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> Le73
        L645:
            java.lang.String r0 = "net.change"
            java.lang.String r0 = com.kuaishou.weapon.p0.bg.a(r0)     // Catch: java.lang.Throwable -> Le73
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le73
            if (r2 != 0) goto L656
            java.lang.String r2 = "03071"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> Le73
        L656:
            java.lang.String r0 = "net.dns1"
            java.lang.String r0 = com.kuaishou.weapon.p0.bg.a(r0)     // Catch: java.lang.Throwable -> Le73
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le73
            if (r2 != 0) goto L667
            java.lang.String r2 = "03072"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> Le73
        L667:
            java.lang.String r0 = "net.dns2"
            java.lang.String r0 = com.kuaishou.weapon.p0.bg.a(r0)     // Catch: java.lang.Throwable -> Le73
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le73
            if (r2 != 0) goto L678
            java.lang.String r2 = "03073"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> Le73
        L678:
            java.lang.String r0 = "plc001_t_d"
            r6 = -1
            r2 = r21
            long r6 = r2.a(r0, r6)     // Catch: java.lang.Throwable -> Le73
            r8 = -1
            int r0 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r0 == 0) goto L692
            java.lang.String r0 = "03074"
            long r8 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Le73
            long r6 = r6 + r8
            r3.put(r0, r6)     // Catch: java.lang.Throwable -> Le73
        L692:
            android.content.Context r0 = r1.a     // Catch: java.lang.Throwable -> L6b4
            android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Throwable -> L6b4
            java.lang.String r4 = "screen_brightness_mode"
            int r0 = android.provider.Settings.System.getInt(r0, r4)     // Catch: java.lang.Throwable -> L6b4
            java.lang.String r4 = "03064"
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> L6b4
            android.content.Context r0 = r1.a     // Catch: java.lang.Throwable -> L6b4
            android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Throwable -> L6b4
            java.lang.String r4 = "accelerometer_rotation"
            int r0 = android.provider.Settings.System.getInt(r0, r4)     // Catch: java.lang.Throwable -> L6b4
            java.lang.String r4 = "03065"
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> L6b4
        L6b4:
            java.lang.String r0 = "03081"
            java.lang.String r4 = com.kuaishou.weapon.p0.bk.L()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "03053"
            android.content.Context r4 = r1.a     // Catch: java.lang.Throwable -> Le73
            java.lang.String r4 = com.kuaishou.weapon.p0.bg.A(r4)     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "03052"
            android.content.Context r4 = r1.a     // Catch: java.lang.Throwable -> Le73
            int r4 = com.kuaishou.weapon.p0.bk.i(r4)     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "03050"
            android.content.Context r4 = r1.a     // Catch: java.lang.Throwable -> Le73
            int r4 = com.kuaishou.weapon.p0.bk.h(r4)     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "03049"
            android.content.Context r4 = r1.a     // Catch: java.lang.Throwable -> Le73
            int r4 = com.kuaishou.weapon.p0.bk.g(r4)     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "02027"
            long r6 = com.kuaishou.weapon.p0.bk.H()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r6)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "02028"
            java.lang.String r4 = com.kuaishou.weapon.p0.bk.D()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "02029"
            java.lang.String r4 = com.kuaishou.weapon.p0.bk.E()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "02057"
            java.lang.String r4 = com.kuaishou.weapon.p0.bk.F()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "02058"
            java.lang.String r4 = com.kuaishou.weapon.p0.bk.G()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Le73
            goto L722
        L717:
            r16 = r1
            r2 = r4
            r20 = r5
            r19 = r6
            r18 = r10
            r5 = r11
            r1 = r0
        L722:
            java.lang.String r0 = "plc001_b_bcl_r"
            r4 = 1
            int r0 = r2.b(r0, r4)     // Catch: java.lang.Throwable -> Le73
            if (r0 != r4) goto L8cd
            java.lang.String r0 = "03001"
            long r6 = com.kuaishou.weapon.p0.bn.a()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r6)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "03002"
            long r6 = com.kuaishou.weapon.p0.bn.b()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r6)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "03001"
            long r6 = com.kuaishou.weapon.p0.bn.a()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r6)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "03043"
            long r6 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r6)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "03044"
            long r6 = android.os.SystemClock.uptimeMillis()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r6)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "03045"
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Le73
            long r8 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> Le73
            long r6 = r6 - r8
            r3.put(r0, r6)     // Catch: java.lang.Throwable -> Le73
            com.kuaishou.weapon.p0.bx r0 = new com.kuaishou.weapon.p0.bx     // Catch: java.lang.Throwable -> Le73
            android.content.Context r4 = r1.a     // Catch: java.lang.Throwable -> Le73
            r0.<init>(r4)     // Catch: java.lang.Throwable -> Le73
            boolean r4 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess     // Catch: java.lang.Throwable -> Le73
            if (r4 == 0) goto L819
            java.lang.String r4 = "03004"
            java.lang.String r6 = "03004"
            java.lang.String r6 = r0.a(r6)     // Catch: java.lang.Throwable -> Le73
            if (r6 == 0) goto L782
            java.lang.String r6 = "03004"
            java.lang.String r6 = r0.a(r6)     // Catch: java.lang.Throwable -> Le73
            goto L783
        L782:
            r6 = r5
        L783:
            r3.put(r4, r6)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r4 = "03036"
            java.lang.String r6 = "03036"
            org.json.JSONArray r6 = r0.b(r6)     // Catch: java.lang.Throwable -> Le73
            if (r6 == 0) goto L797
            java.lang.String r6 = "03036"
            org.json.JSONArray r6 = r0.b(r6)     // Catch: java.lang.Throwable -> Le73
            goto L798
        L797:
            r6 = r5
        L798:
            r3.put(r4, r6)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r4 = "03039"
            java.lang.String r6 = "03039"
            java.lang.String r6 = r0.a(r6)     // Catch: java.lang.Throwable -> Le73
            if (r6 == 0) goto L7ac
            java.lang.String r6 = "03039"
            java.lang.String r6 = r0.a(r6)     // Catch: java.lang.Throwable -> Le73
            goto L7ad
        L7ac:
            r6 = r5
        L7ad:
            r3.put(r4, r6)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r4 = "03040"
            java.lang.String r6 = "03040"
            java.lang.String r6 = r0.a(r6)     // Catch: java.lang.Throwable -> Le73
            if (r6 == 0) goto L7c1
            java.lang.String r6 = "03040"
            java.lang.String r6 = r0.a(r6)     // Catch: java.lang.Throwable -> Le73
            goto L7c2
        L7c1:
            r6 = r5
        L7c2:
            r3.put(r4, r6)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r4 = "03041"
            java.lang.String r6 = "03041"
            java.lang.String r6 = r0.a(r6)     // Catch: java.lang.Throwable -> Le73
            if (r6 == 0) goto L7d6
            java.lang.String r6 = "03041"
            java.lang.String r6 = r0.a(r6)     // Catch: java.lang.Throwable -> Le73
            goto L7d7
        L7d6:
            r6 = r5
        L7d7:
            r3.put(r4, r6)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r4 = "03042"
            java.lang.String r6 = "03042"
            java.lang.String r6 = r0.a(r6)     // Catch: java.lang.Throwable -> Le73
            if (r6 == 0) goto L7eb
            java.lang.String r6 = "03042"
            java.lang.String r6 = r0.a(r6)     // Catch: java.lang.Throwable -> Le73
            goto L7ec
        L7eb:
            r6 = r5
        L7ec:
            r3.put(r4, r6)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r4 = "03079"
            java.lang.String r6 = "03079"
            java.lang.String r6 = r0.a(r6)     // Catch: java.lang.Throwable -> Le73
            if (r6 == 0) goto L800
            java.lang.String r6 = "03079"
            java.lang.String r6 = r0.a(r6)     // Catch: java.lang.Throwable -> Le73
            goto L801
        L800:
            r6 = 0
        L801:
            r3.put(r4, r6)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r4 = "03080"
            java.lang.String r6 = "03080"
            java.lang.String r6 = r0.a(r6)     // Catch: java.lang.Throwable -> Le73
            if (r6 == 0) goto L815
            java.lang.String r6 = "03080"
            java.lang.String r0 = r0.a(r6)     // Catch: java.lang.Throwable -> Le73
            goto L816
        L815:
            r0 = 0
        L816:
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> Le73
        L819:
            java.lang.String r0 = "03007"
            android.content.Context r4 = r1.a     // Catch: java.lang.Throwable -> Le73
            java.lang.String r4 = com.kuaishou.weapon.p0.bu.a(r4)     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "03008"
            android.content.Context r4 = r1.a     // Catch: java.lang.Throwable -> Le73
            int r4 = com.kuaishou.weapon.p0.bu.c(r4)     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "03011"
            android.content.Context r4 = r1.a     // Catch: java.lang.Throwable -> Le73
            java.lang.String r4 = com.kuaishou.weapon.p0.am.b(r4)     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "03012"
            java.lang.String r4 = com.kuaishou.weapon.p0.am.b()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "03014"
            android.content.Context r4 = r1.a     // Catch: java.lang.Throwable -> Le73
            boolean r4 = com.kuaishou.weapon.p0.bg.g(r4)     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "03034"
            android.content.Context r4 = r1.a     // Catch: java.lang.Throwable -> Le73
            boolean r4 = com.kuaishou.weapon.p0.bg.h(r4)     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "03020"
            android.content.Context r4 = r1.a     // Catch: java.lang.Throwable -> Le73
            java.lang.String r4 = com.kuaishou.weapon.p0.bu.b(r4)     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "03037"
            java.lang.String r4 = com.kuaishou.weapon.p0.bk.I()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "03038"
            java.lang.String r4 = com.kuaishou.weapon.p0.bk.J()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "03077"
            java.lang.String r4 = com.kuaishou.weapon.p0.bk.K()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Le73
            com.kuaishou.weapon.p0.bf r0 = new com.kuaishou.weapon.p0.bf     // Catch: java.lang.Exception -> L8cd java.lang.Throwable -> Le73
            r0.<init>()     // Catch: java.lang.Exception -> L8cd java.lang.Throwable -> Le73
            android.content.Context r4 = r1.a     // Catch: java.lang.Exception -> L8cd java.lang.Throwable -> Le73
            java.lang.String r4 = r0.a(r4)     // Catch: java.lang.Exception -> L8cd java.lang.Throwable -> Le73
            java.lang.String r6 = "03006"
            r3.put(r6, r4)     // Catch: java.lang.Exception -> L8cd java.lang.Throwable -> Le73
            java.lang.String r4 = "03010"
            android.content.Context r6 = r1.a     // Catch: java.lang.Exception -> L8cd java.lang.Throwable -> Le73
            boolean r6 = r0.b(r6)     // Catch: java.lang.Exception -> L8cd java.lang.Throwable -> Le73
            r3.put(r4, r6)     // Catch: java.lang.Exception -> L8cd java.lang.Throwable -> Le73
            java.lang.String r4 = "03033"
            android.content.Context r6 = r1.a     // Catch: java.lang.Exception -> L8cd java.lang.Throwable -> Le73
            boolean r6 = r0.c(r6)     // Catch: java.lang.Exception -> L8cd java.lang.Throwable -> Le73
            r3.put(r4, r6)     // Catch: java.lang.Exception -> L8cd java.lang.Throwable -> Le73
            java.lang.String r4 = "03013"
            boolean r6 = r0.a()     // Catch: java.lang.Exception -> L8cd java.lang.Throwable -> Le73
            r3.put(r4, r6)     // Catch: java.lang.Exception -> L8cd java.lang.Throwable -> Le73
            java.lang.String r4 = "03021"
            android.content.Context r6 = r1.a     // Catch: java.lang.Exception -> L8cd java.lang.Throwable -> Le73
            boolean r6 = r0.e(r6)     // Catch: java.lang.Exception -> L8cd java.lang.Throwable -> Le73
            r3.put(r4, r6)     // Catch: java.lang.Exception -> L8cd java.lang.Throwable -> Le73
            java.lang.String r4 = "03030"
            android.content.Context r6 = r1.a     // Catch: java.lang.Exception -> L8cd java.lang.Throwable -> Le73
            int r6 = com.kuaishou.weapon.p0.bf.d(r6)     // Catch: java.lang.Exception -> L8cd java.lang.Throwable -> Le73
            r3.put(r4, r6)     // Catch: java.lang.Exception -> L8cd java.lang.Throwable -> Le73
            java.lang.String r4 = "10031"
            int r0 = r0.b()     // Catch: java.lang.Exception -> L8cd java.lang.Throwable -> Le73
            r3.put(r4, r0)     // Catch: java.lang.Exception -> L8cd java.lang.Throwable -> Le73
        L8cd:
            java.lang.String r0 = "plc001_b_bcl_tc"
            r4 = 1
            int r0 = r2.b(r0, r4)     // Catch: java.lang.Throwable -> Le73
            if (r0 != r4) goto L90e
            java.lang.String r0 = "03019"
            android.content.Context r4 = r1.a     // Catch: java.lang.Throwable -> Le73
            java.lang.String r4 = com.kuaishou.weapon.p0.bg.k(r4)     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Le73
            android.content.Context r0 = r1.a     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = com.kuaishou.weapon.p0.bg.l(r0)     // Catch: java.lang.Throwable -> Le73
            boolean r4 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le73
            if (r4 != 0) goto L8f2
            java.lang.String r4 = "03046"
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> Le73
        L8f2:
            android.content.Context r0 = r1.a     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = com.kuaishou.weapon.p0.bg.m(r0)     // Catch: java.lang.Throwable -> Le73
            boolean r4 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le73
            if (r4 != 0) goto L903
            java.lang.String r4 = "03047"
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> Le73
        L903:
            java.lang.String r0 = "03018"
            android.content.Context r4 = r1.a     // Catch: java.lang.Throwable -> Le73
            java.lang.String r4 = com.kuaishou.weapon.p0.bg.i(r4)     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Le73
        L90e:
            java.lang.String r0 = "plc001_b_bcl_il"
            r4 = 1
            int r0 = r2.b(r0, r4)     // Catch: java.lang.Throwable -> Le73
            if (r0 != r4) goto L96e
            java.lang.String r0 = "02059"
            android.content.Context r4 = r1.a     // Catch: java.lang.Throwable -> Le73
            int r4 = com.kuaishou.weapon.p0.bl.a(r4)     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "02060"
            org.json.JSONObject r4 = com.kuaishou.weapon.p0.bl.a()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "02061"
            java.lang.String r4 = com.kuaishou.weapon.p0.bl.b()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "02062"
            java.lang.String r4 = com.kuaishou.weapon.p0.bl.c()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Le73
            boolean r0 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess     // Catch: java.lang.Throwable -> Le73
            if (r0 == 0) goto L95d
            com.kuaishou.weapon.p0.bz r0 = new com.kuaishou.weapon.p0.bz     // Catch: java.lang.Throwable -> Le73
            android.content.Context r4 = r1.a     // Catch: java.lang.Throwable -> Le73
            r0.<init>(r4)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r4 = "08001"
            java.lang.String r6 = "08001"
            java.lang.String r6 = r0.a(r6)     // Catch: java.lang.Throwable -> Le73
            if (r6 == 0) goto L959
            java.lang.String r6 = "08001"
            java.lang.String r0 = r0.a(r6)     // Catch: java.lang.Throwable -> Le73
            goto L95a
        L959:
            r0 = r5
        L95a:
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> Le73
        L95d:
            org.json.JSONObject r0 = com.kuaishou.weapon.p0.bl.d()     // Catch: java.lang.Throwable -> Le73
            if (r0 == 0) goto L96e
            int r4 = r0.length()     // Catch: java.lang.Throwable -> Le73
            if (r4 <= 0) goto L96e
            java.lang.String r4 = "10050"
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> Le73
        L96e:
            java.lang.String r0 = "plc001_b_bcl_rp"
            r4 = 1
            int r0 = r2.b(r0, r4)     // Catch: java.lang.Throwable -> Le73
            if (r0 != r4) goto L986
            if (r20 != 0) goto L97b
            if (r19 == 0) goto L986
        L97b:
            java.lang.String r0 = "03029"
            android.content.Context r4 = r1.a     // Catch: java.lang.Throwable -> Le73
            java.lang.String r4 = com.kuaishou.weapon.p0.bg.j(r4)     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Le73
        L986:
            java.lang.String r0 = "plc001_b_bcl_c"
            r4 = 1
            int r0 = r2.b(r0, r4)     // Catch: java.lang.Throwable -> Le73
            if (r0 != r4) goto L9ff
            boolean r0 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess     // Catch: java.lang.Throwable -> Le73
            java.lang.String r4 = "04004"
            java.lang.String r6 = "04003"
            java.lang.String r7 = "04002"
            java.lang.String r8 = "04001"
            if (r0 == 0) goto L9df
            com.kuaishou.weapon.p0.by r0 = new com.kuaishou.weapon.p0.by     // Catch: java.lang.Throwable -> Le73
            android.content.Context r9 = r1.a     // Catch: java.lang.Throwable -> Le73
            r0.<init>(r9)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r9 = r0.a(r8)     // Catch: java.lang.Throwable -> Le73
            if (r9 == 0) goto L9ad
            java.lang.String r9 = r0.a(r8)     // Catch: java.lang.Throwable -> Le73
            goto L9ae
        L9ad:
            r9 = r5
        L9ae:
            r3.put(r8, r9)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r8 = r0.a(r7)     // Catch: java.lang.Throwable -> Le73
            if (r8 == 0) goto L9bc
            java.lang.String r8 = r0.a(r7)     // Catch: java.lang.Throwable -> Le73
            goto L9bd
        L9bc:
            r8 = r5
        L9bd:
            r3.put(r7, r8)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r7 = r0.a(r6)     // Catch: java.lang.Throwable -> Le73
            if (r7 == 0) goto L9cb
            java.lang.String r7 = r0.a(r6)     // Catch: java.lang.Throwable -> Le73
            goto L9cc
        L9cb:
            r7 = r5
        L9cc:
            r3.put(r6, r7)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r6 = r0.a(r4)     // Catch: java.lang.Throwable -> Le73
            if (r6 == 0) goto L9da
            java.lang.String r0 = r0.a(r4)     // Catch: java.lang.Throwable -> Le73
            goto L9db
        L9da:
            r0 = r5
        L9db:
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> Le73
            goto L9ff
        L9df:
            com.kuaishou.weapon.p0.bi r0 = com.kuaishou.weapon.p0.bj.b()     // Catch: java.lang.Exception -> L9ff java.lang.Throwable -> Le73
            java.lang.String r9 = com.kuaishou.weapon.p0.bj.a()     // Catch: java.lang.Exception -> L9ff java.lang.Throwable -> Le73
            r3.put(r8, r9)     // Catch: java.lang.Exception -> L9ff java.lang.Throwable -> Le73
            java.lang.String r8 = r0.b()     // Catch: java.lang.Exception -> L9ff java.lang.Throwable -> Le73
            r3.put(r7, r8)     // Catch: java.lang.Exception -> L9ff java.lang.Throwable -> Le73
            java.lang.String r7 = r0.c()     // Catch: java.lang.Exception -> L9ff java.lang.Throwable -> Le73
            r3.put(r6, r7)     // Catch: java.lang.Exception -> L9ff java.lang.Throwable -> Le73
            int r0 = r0.a()     // Catch: java.lang.Exception -> L9ff java.lang.Throwable -> Le73
            r3.put(r4, r0)     // Catch: java.lang.Exception -> L9ff java.lang.Throwable -> Le73
        L9ff:
            java.lang.String r0 = "plc001_b_bcl_w"
            r4 = 0
            int r0 = r2.b(r0, r4)     // Catch: java.lang.Throwable -> Le73
            r4 = 1
            if (r0 != r4) goto La38
            if (r20 != 0) goto La0d
            if (r19 == 0) goto La38
        La0d:
            org.json.JSONArray r0 = com.kuaishou.weapon.p0.bg.e()     // Catch: java.lang.Throwable -> Le73
            if (r0 == 0) goto La18
            java.lang.String r4 = "06014"
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> Le73
        La18:
            boolean r0 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess     // Catch: java.lang.Throwable -> Le73
            if (r0 == 0) goto La38
            com.kuaishou.weapon.p0.ce r0 = new com.kuaishou.weapon.p0.ce     // Catch: java.lang.Throwable -> Le73
            android.content.Context r4 = r1.a     // Catch: java.lang.Throwable -> Le73
            r0.<init>(r4)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r4 = "06015"
            java.lang.String r6 = "06015"
            org.json.JSONArray r6 = r0.b(r6)     // Catch: java.lang.Throwable -> Le73
            if (r6 == 0) goto La34
            java.lang.String r6 = "06015"
            org.json.JSONArray r0 = r0.b(r6)     // Catch: java.lang.Throwable -> Le73
            goto La35
        La34:
            r0 = r5
        La35:
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> Le73
        La38:
            if (r20 != 0) goto La3c
            if (r19 == 0) goto La5b
        La3c:
            java.lang.String r0 = com.kuaishou.weapon.p0.bg.g()     // Catch: java.lang.Throwable -> Le73
            boolean r4 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le73
            if (r4 != 0) goto La54
            r4 = r18
            boolean r4 = r0.startsWith(r4)     // Catch: java.lang.Throwable -> Le73
            if (r4 != 0) goto La54
        La4e:
            java.lang.String r4 = "07005"
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> Le73
            goto La5b
        La54:
            if (r0 != 0) goto La4e
            java.lang.String r0 = "07005"
            r3.put(r0, r5)     // Catch: java.lang.Throwable -> Le73
        La5b:
            java.lang.String r0 = "plc001_b_bcl_n"
            r4 = 0
            int r0 = r2.b(r0, r4)     // Catch: java.lang.Throwable -> Le73
            r6 = 1
            if (r0 != r6) goto La92
            if (r20 != 0) goto La69
            if (r19 == 0) goto La92
        La69:
            boolean r0 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess     // Catch: java.lang.Throwable -> Le73
            if (r0 == 0) goto La7f
            com.kuaishou.weapon.p0.cb r0 = new com.kuaishou.weapon.p0.cb     // Catch: java.lang.Throwable -> Le73
            android.content.Context r6 = r1.a     // Catch: java.lang.Throwable -> Le73
            r0.<init>(r6)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r6 = "07007"
            java.lang.String r7 = "07007"
            java.lang.String r0 = r0.a(r7)     // Catch: java.lang.Throwable -> Le73
            r3.put(r6, r0)     // Catch: java.lang.Throwable -> Le73
        La7f:
            android.content.Context r0 = r1.a     // Catch: java.lang.Throwable -> Le73
            org.json.JSONArray r0 = com.kuaishou.weapon.p0.bq.a(r0)     // Catch: java.lang.Throwable -> Le73
            if (r0 == 0) goto La92
            int r6 = r0.length()     // Catch: java.lang.Throwable -> Le73
            if (r6 <= 0) goto La92
            java.lang.String r6 = "03035"
            r3.put(r6, r0)     // Catch: java.lang.Throwable -> Le73
        La92:
            if (r20 != 0) goto La96
            if (r19 == 0) goto Lad5
        La96:
            double r6 = com.kuaishou.weapon.p0.bg.a()     // Catch: java.lang.Exception -> Lad5 java.lang.Throwable -> Le73
            r8 = 0
            int r0 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r0 <= 0) goto Lab1
            java.lang.String r0 = "09002"
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lad5 java.lang.Throwable -> Le73
            r8.<init>()     // Catch: java.lang.Exception -> Lad5 java.lang.Throwable -> Le73
            r8.append(r6)     // Catch: java.lang.Exception -> Lad5 java.lang.Throwable -> Le73
            java.lang.String r6 = r8.toString()     // Catch: java.lang.Exception -> Lad5 java.lang.Throwable -> Le73
            r3.put(r0, r6)     // Catch: java.lang.Exception -> Lad5 java.lang.Throwable -> Le73
        Lab1:
            double r6 = com.kuaishou.weapon.p0.bg.b()     // Catch: java.lang.Exception -> Lad5 java.lang.Throwable -> Le73
            r8 = 0
            int r0 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r0 <= 0) goto Lacc
            java.lang.String r0 = "09003"
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lad5 java.lang.Throwable -> Le73
            r8.<init>()     // Catch: java.lang.Exception -> Lad5 java.lang.Throwable -> Le73
            r8.append(r6)     // Catch: java.lang.Exception -> Lad5 java.lang.Throwable -> Le73
            java.lang.String r6 = r8.toString()     // Catch: java.lang.Exception -> Lad5 java.lang.Throwable -> Le73
            r3.put(r0, r6)     // Catch: java.lang.Exception -> Lad5 java.lang.Throwable -> Le73
        Lacc:
            java.lang.String r0 = "09001"
            java.lang.String r6 = com.kuaishou.weapon.p0.bg.c()     // Catch: java.lang.Exception -> Lad5 java.lang.Throwable -> Le73
            r3.put(r0, r6)     // Catch: java.lang.Exception -> Lad5 java.lang.Throwable -> Le73
        Lad5:
            java.lang.String r0 = "plc001_b_bcl_a"
            r6 = 1
            int r0 = r2.b(r0, r6)     // Catch: java.lang.Throwable -> Le73
            if (r0 != r6) goto Laf3
            if (r20 != 0) goto Lae2
            if (r19 == 0) goto Laf3
        Lae2:
            com.kuaishou.weapon.p0.w r0 = new com.kuaishou.weapon.p0.w     // Catch: java.lang.Throwable -> Le73
            android.content.Context r6 = r1.a     // Catch: java.lang.Throwable -> Le73
            r0.<init>(r6)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r6 = "10002"
            r7 = 1
            org.json.JSONArray r0 = r0.a(r7)     // Catch: java.lang.Throwable -> Le73
            r3.put(r6, r0)     // Catch: java.lang.Throwable -> Le73
        Laf3:
            java.lang.String r0 = "plc001_b_bcl_s"
            r6 = 1
            int r0 = r2.b(r0, r6)     // Catch: java.lang.Throwable -> Le73
            if (r0 != r6) goto Lb25
            boolean r0 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess     // Catch: java.lang.Throwable -> Le73
            if (r0 == 0) goto Lb25
            com.kuaishou.weapon.p0.cc r0 = new com.kuaishou.weapon.p0.cc     // Catch: java.lang.Throwable -> Le73
            android.content.Context r6 = r1.a     // Catch: java.lang.Throwable -> Le73
            r0.<init>(r6)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r6 = "05001"
            java.lang.String r0 = r0.a(r6)     // Catch: java.lang.Throwable -> Le73
            boolean r6 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> Lb25 java.lang.Throwable -> Le73
            if (r6 != 0) goto Lb25
            int r6 = r0.length()     // Catch: java.lang.Exception -> Lb25 java.lang.Throwable -> Le73
            r7 = 10
            if (r6 <= r7) goto Lb25
            org.json.JSONArray r6 = new org.json.JSONArray     // Catch: java.lang.Exception -> Lb25 java.lang.Throwable -> Le73
            r6.<init>(r0)     // Catch: java.lang.Exception -> Lb25 java.lang.Throwable -> Le73
            java.lang.String r0 = "05001"
            r3.put(r0, r6)     // Catch: java.lang.Exception -> Lb25 java.lang.Throwable -> Le73
        Lb25:
            boolean r0 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess     // Catch: java.lang.Throwable -> Le73
            if (r0 == 0) goto Lb45
            com.kuaishou.weapon.p0.ca r0 = new com.kuaishou.weapon.p0.ca     // Catch: java.lang.Throwable -> Le73
            android.content.Context r6 = r1.a     // Catch: java.lang.Throwable -> Le73
            r0.<init>(r6)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r6 = "13001"
            java.lang.String r7 = "13001"
            java.lang.String r7 = r0.a(r7)     // Catch: java.lang.Throwable -> Le73
            if (r7 == 0) goto Lb41
            java.lang.String r5 = "13001"
            java.lang.String r11 = r0.a(r5)     // Catch: java.lang.Throwable -> Le73
            goto Lb42
        Lb41:
            r11 = r5
        Lb42:
            r3.put(r6, r11)     // Catch: java.lang.Throwable -> Le73
        Lb45:
            java.lang.String r0 = "11000"
            boolean r5 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess     // Catch: java.lang.Throwable -> Le73
            if (r5 == 0) goto Lb4d
            r5 = 1
            goto Lb4e
        Lb4d:
            r5 = r4
        Lb4e:
            r3.put(r0, r5)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "11002"
            java.lang.String r5 = com.kuaishou.weapon.p0.jni.Engine.soVersion     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r5)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "11003"
            int r5 = com.kuaishou.weapon.p0.bh.v     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r5)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "11004"
            int r5 = com.kuaishou.weapon.p0.jni.Engine.loadSoCount     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r5)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "11006"
            if (r20 == 0) goto Lb6c
            r5 = 1
            goto Lb6d
        Lb6c:
            r5 = r4
        Lb6d:
            r3.put(r0, r5)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "11029"
            if (r19 == 0) goto Lb76
            r9 = 1
            goto Lb77
        Lb76:
            r9 = r4
        Lb77:
            r3.put(r0, r9)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "plc001_v"
            java.lang.String r4 = "0.0.0"
            java.lang.String r0 = r2.b(r0, r4)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r4 = "11008"
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "11009"
            android.content.Context r4 = r1.a     // Catch: java.lang.Throwable -> Le73
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> Le73
            java.lang.String r4 = com.kuaishou.weapon.p0.br.a(r4)     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Le73
            android.content.Context r0 = r1.a     // Catch: java.lang.Throwable -> Ld9e java.lang.Throwable -> Le73
            java.lang.String r0 = com.kuaishou.weapon.p0.bg.y(r0)     // Catch: java.lang.Throwable -> Ld9e java.lang.Throwable -> Le73
            boolean r4 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Ld9e java.lang.Throwable -> Le73
            if (r4 != 0) goto Lba7
            java.lang.String r4 = "01026"
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> Ld9e java.lang.Throwable -> Le73
        Lba7:
            java.lang.String r0 = "plc001_b_bcl_u"
            r4 = 1
            int r0 = r2.b(r0, r4)     // Catch: java.lang.Throwable -> Ld9e java.lang.Throwable -> Le73
            if (r0 != r4) goto Ld9e
            com.kwad.sdk.f.b r0 = com.kwad.sdk.f.b.FA()
            java.lang.String r0 = r0.Fp()
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto Lbc3
            java.lang.String r2 = "11102"
            r3.put(r2, r0)
        Lbc3:
            java.lang.String r0 = "11104"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.Fw()
            r3.put(r0, r2)
            java.lang.String r0 = "11105"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.getDeviceId()
            r3.put(r0, r2)
            java.lang.String r0 = "11106"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.getIccId()
            r3.put(r0, r2)
            java.lang.String r0 = "11107"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.Fo()
            r3.put(r0, r2)
            java.lang.String r0 = "11108"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.Fr()
            r3.put(r0, r2)
            java.lang.String r0 = "11109"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.Fs()
            r3.put(r0, r2)
            java.lang.String r0 = "11110"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.Ft()
            r3.put(r0, r2)
            java.lang.String r0 = "11111"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.getIp()
            r3.put(r0, r2)
            java.lang.String r0 = "11112"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.getLocation()
            r3.put(r0, r2)
            java.lang.String r0 = "11113"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.getOaid()
            r3.put(r0, r2)
            java.lang.String r0 = "11114"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.Fq()
            r3.put(r0, r2)
            java.lang.String r0 = "11115"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.Fv()
            r3.put(r0, r2)
            java.lang.String r0 = "11116"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.Fu()
            r3.put(r0, r2)
            java.lang.String r0 = "11202"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.Fp()
            int r2 = com.kuaishou.weapon.p0.bg.b(r2)
            r3.put(r0, r2)
            java.lang.String r0 = "11203"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.Fy()
            int r2 = com.kuaishou.weapon.p0.bg.b(r2)
            r3.put(r0, r2)
            java.lang.String r0 = "11204"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.Fw()
            int r2 = com.kuaishou.weapon.p0.bg.b(r2)
            r3.put(r0, r2)
            java.lang.String r0 = "11205"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.getDeviceId()
            int r2 = com.kuaishou.weapon.p0.bg.b(r2)
            r3.put(r0, r2)
            java.lang.String r0 = "11206"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.getIccId()
            int r2 = com.kuaishou.weapon.p0.bg.b(r2)
            r3.put(r0, r2)
            java.lang.String r0 = "11207"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.Fo()
            int r2 = com.kuaishou.weapon.p0.bg.b(r2)
            r3.put(r0, r2)
            java.lang.String r0 = "11208"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.Fr()
            int r2 = com.kuaishou.weapon.p0.bg.b(r2)
            r3.put(r0, r2)
            java.lang.String r0 = "11209"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.Fs()
            int r2 = com.kuaishou.weapon.p0.bg.b(r2)
            r3.put(r0, r2)
            java.lang.String r0 = "11210"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.Ft()
            int r2 = com.kuaishou.weapon.p0.bg.b(r2)
            r3.put(r0, r2)
            java.lang.String r0 = "11211"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.getIp()
            int r2 = com.kuaishou.weapon.p0.bg.b(r2)
            r3.put(r0, r2)
            java.lang.String r0 = "11212"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.getLocation()
            int r2 = com.kuaishou.weapon.p0.bg.b(r2)
            r3.put(r0, r2)
            java.lang.String r0 = "11213"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.getOaid()
            int r2 = com.kuaishou.weapon.p0.bg.b(r2)
            r3.put(r0, r2)
            java.lang.String r0 = "11214"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.Fq()
            int r2 = com.kuaishou.weapon.p0.bg.b(r2)
            r3.put(r0, r2)
            java.lang.String r0 = "11215"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.Fv()
            int r2 = com.kuaishou.weapon.p0.bg.b(r2)
            r3.put(r0, r2)
            java.lang.String r0 = "11216"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.Fu()
            int r2 = com.kuaishou.weapon.p0.bg.b(r2)
            r3.put(r0, r2)
            java.lang.String r0 = "11301"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.Fz()
            java.lang.String r2 = com.kuaishou.weapon.p0.bg.c(r2)
            r3.put(r0, r2)
            java.lang.String r0 = "11302"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.getSdkVersion()
            java.lang.String r2 = com.kuaishou.weapon.p0.bg.c(r2)
            r3.put(r0, r2)
            java.lang.String r0 = "11303"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()
            java.lang.String r2 = r2.getAppId()
            java.lang.String r2 = com.kuaishou.weapon.p0.bg.c(r2)
            r3.put(r0, r2)
        Ld9e:
            java.lang.String r0 = "02078"
            java.lang.String r2 = "W_S_V"
            java.lang.String r2 = com.kuaishou.weapon.p0.jni.A.getE(r2)     // Catch: java.lang.Throwable -> Le59
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> Le59
            java.lang.String r0 = "02079"
            java.lang.String r2 = "W_S_S_V"
            java.lang.String r2 = com.kuaishou.weapon.p0.jni.A.getE(r2)     // Catch: java.lang.Throwable -> Le59
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> Le59
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Le59
            r2 = 21
            if (r0 <= r2) goto Ldcd
            java.lang.String r0 = "02069"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le59
            r2.<init>()     // Catch: java.lang.Throwable -> Le59
            java.lang.String r4 = android.os.Build.VERSION.SECURITY_PATCH     // Catch: java.lang.Throwable -> Le59
            r2.append(r4)     // Catch: java.lang.Throwable -> Le59
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Le59
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> Le59
        Ldcd:
            android.content.Context r0 = r1.a     // Catch: java.lang.Throwable -> Le59
            android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Throwable -> Le59
            java.lang.String r2 = "Phenotype_boot_count"
            java.lang.String r0 = android.provider.Settings.Global.getString(r0, r2)     // Catch: java.lang.Throwable -> Le59
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le59
            if (r2 != 0) goto Ldf0
            java.lang.String r2 = "03085"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le59
            r4.<init>()     // Catch: java.lang.Throwable -> Le59
            r4.append(r0)     // Catch: java.lang.Throwable -> Le59
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Throwable -> Le59
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> Le59
        Ldf0:
            android.content.Context r0 = r1.a     // Catch: java.lang.Throwable -> Le59
            android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Throwable -> Le59
            java.lang.String r2 = "boot_count"
            java.lang.String r0 = android.provider.Settings.Global.getString(r0, r2)     // Catch: java.lang.Throwable -> Le59
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le59
            if (r2 != 0) goto Le13
            java.lang.String r2 = "03086"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le59
            r4.<init>()     // Catch: java.lang.Throwable -> Le59
            r4.append(r0)     // Catch: java.lang.Throwable -> Le59
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Throwable -> Le59
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> Le59
        Le13:
            android.content.Context r0 = r1.a     // Catch: java.lang.Throwable -> Le59
            android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Throwable -> Le59
            java.lang.String r2 = "power_on_times"
            java.lang.String r0 = android.provider.Settings.System.getString(r0, r2)     // Catch: java.lang.Throwable -> Le59
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le59
            if (r2 != 0) goto Le36
            java.lang.String r2 = "03091"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le59
            r4.<init>()     // Catch: java.lang.Throwable -> Le59
            r4.append(r0)     // Catch: java.lang.Throwable -> Le59
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Throwable -> Le59
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> Le59
        Le36:
            android.content.Context r0 = r1.a     // Catch: java.lang.Throwable -> Le59
            android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Throwable -> Le59
            java.lang.String r2 = "first_boot_flag"
            java.lang.String r0 = android.provider.Settings.System.getString(r0, r2)     // Catch: java.lang.Throwable -> Le59
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le59
            if (r2 != 0) goto Le59
            java.lang.String r2 = "03104"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le59
            r4.<init>()     // Catch: java.lang.Throwable -> Le59
            r4.append(r0)     // Catch: java.lang.Throwable -> Le59
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Throwable -> Le59
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> Le59
        Le59:
            java.lang.String r0 = "11007"
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Le73
            long r4 = r4 - r16
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Le73
            java.lang.String r0 = "11017"
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> Le73
            int r2 = r2.length()     // Catch: java.lang.Throwable -> Le73
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> Le73
            return r3
        Le72:
            r1 = r0
        Le73:
            r0 = 0
            return r0
    }
}
