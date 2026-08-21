package com.kuaishou.weapon.p0;

public class ck {
    private android.content.Context a;
    private int b;
    private int c;

    public ck(android.content.Context r1, int r2, int r3) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
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
            r29 = this;
            r0 = r29
            java.lang.String r1 = "85"
            java.lang.String r2 = "64"
            java.lang.String r3 = "63"
            java.lang.String r4 = "62"
            java.lang.String r5 = "91"
            java.lang.String r6 = "46"
            java.lang.String r7 = "45"
            java.lang.String r8 = ""
            java.lang.String r9 = "plc001_scc_e"
            java.lang.String r10 = "40"
            java.lang.String r11 = "38"
            java.lang.String r12 = "37"
            java.lang.String r13 = "23"
            java.lang.String r14 = "48"
            java.lang.String r15 = "47"
            r16 = r8
            java.lang.String r8 = "6"
            r17 = r9
            java.lang.String r9 = "41"
            long r18 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> La2e
            r20 = r1
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> La2e
            r1.<init>()     // Catch: java.lang.Throwable -> La2e
            r21 = r2
            android.content.Context r2 = r0.a     // Catch: java.lang.Throwable -> La2e
            r22 = r3
            java.lang.String r3 = "re_po_rt"
            com.kuaishou.weapon.p0.h r2 = com.kuaishou.weapon.p0.h.a(r2, r3)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r3 = "a1_p_s_p_s"
            boolean r3 = r2.e(r3)     // Catch: java.lang.Throwable -> La2e
            r23 = r4
            java.lang.String r4 = "a1_p_s_p_s_c_b"
            boolean r4 = r2.e(r4)     // Catch: java.lang.Throwable -> La2e
            r24 = r5
            com.kuaishou.weapon.p0.ai r5 = new com.kuaishou.weapon.p0.ai     // Catch: java.lang.Throwable -> La2e
            r25 = r6
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> La2e
            r5.<init>(r6)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "0"
            r26 = r7
            int r7 = r5.d()     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "1"
            int r7 = r5.a()     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "2"
            java.lang.String r7 = r5.c()     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "3"
            int r7 = r5.f()     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "24"
            int r5 = r5.e()     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r5 = "35"
            boolean r6 = com.kuaishou.weapon.p0.ab.b()     // Catch: java.lang.Throwable -> La2e
            if (r6 == 0) goto L91
            r6 = 1
            goto L92
        L91:
            r6 = 0
        L92:
            r1.put(r5, r6)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r5 = "36"
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> La2e
            boolean r6 = com.kuaishou.weapon.p0.ab.a(r6)     // Catch: java.lang.Throwable -> La2e
            if (r6 == 0) goto La1
            r6 = 1
            goto La2
        La1:
            r6 = 0
        La2:
            r1.put(r5, r6)     // Catch: java.lang.Throwable -> La2e
            android.content.Context r5 = r0.a     // Catch: java.lang.Throwable -> La2e
            org.json.JSONObject r5 = com.kuaishou.weapon.p0.ah.a(r5)     // Catch: java.lang.Throwable -> La2e
            if (r5 == 0) goto Lb2
            java.lang.String r6 = "4"
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
        Lb2:
            com.kuaishou.weapon.p0.z r5 = new com.kuaishou.weapon.p0.z     // Catch: java.lang.Throwable -> La2e
            r5.<init>()     // Catch: java.lang.Throwable -> La2e
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> La2e
            org.json.JSONArray r6 = r5.a(r6)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r7 = "49"
            r1.put(r7, r6)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r7 = "146"
            r27 = r10
            java.util.Set r10 = r5.e()     // Catch: java.lang.Throwable -> La2e
            r1.put(r7, r10)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r7 = "154"
            int r10 = r5.a()     // Catch: java.lang.Throwable -> La2e
            r1.put(r7, r10)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r7 = "168"
            java.lang.Integer r10 = com.kuaishou.weapon.p0.dj.b(r6)     // Catch: java.lang.Throwable -> La2e
            r1.put(r7, r10)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r7 = "169"
            java.lang.Integer r6 = com.kuaishou.weapon.p0.dj.a(r6)     // Catch: java.lang.Throwable -> La2e
            r1.put(r7, r6)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "185"
            org.json.JSONObject r7 = r5.d()     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "191"
            java.util.Set r7 = r5.c()     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.util.Set r6 = r5.b()     // Catch: java.lang.Throwable -> La2e
            if (r6 == 0) goto L109
            java.lang.String r6 = "161"
            java.util.Set r5 = r5.b()     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
        L109:
            java.lang.String r5 = "22"
            java.lang.String r6 = com.kuaishou.weapon.p0.ab.a()     // Catch: java.lang.Throwable -> La2e
            r1.put(r5, r6)     // Catch: java.lang.Throwable -> La2e
            com.kuaishou.weapon.p0.ac r5 = new com.kuaishou.weapon.p0.ac     // Catch: java.lang.Throwable -> La2e
            r5.<init>()     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "7"
            boolean r7 = r5.a()     // Catch: java.lang.Throwable -> La2e
            if (r7 == 0) goto L121
            r7 = 1
            goto L122
        L121:
            r7 = 0
        L122:
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> La2e
            boolean r6 = r5.a(r6)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r7 = "8"
            if (r6 == 0) goto L131
            r10 = 1
            goto L132
        L131:
            r10 = 0
        L132:
            r1.put(r7, r10)     // Catch: java.lang.Throwable -> La2e
            if (r6 == 0) goto L142
            java.lang.String r6 = "61"
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> La2e
            java.lang.String r7 = r5.b(r7)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
        L142:
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> La2e
            boolean r6 = r5.f(r6)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r7 = "181"
            if (r6 == 0) goto L14e
            r6 = 1
            goto L14f
        L14e:
            r6 = 0
        L14f:
            r1.put(r7, r6)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "9"
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> La2e
            org.json.JSONArray r7 = r5.d(r7)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "10"
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> La2e
            int r7 = r5.e(r7)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "11"
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> La2e
            java.lang.String r5 = r5.c(r7)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
            com.kuaishou.weapon.p0.ae r5 = new com.kuaishou.weapon.p0.ae     // Catch: java.lang.Throwable -> La2e
            r5.<init>()     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "26"
            java.lang.String r7 = "cpuinfo"
            boolean r7 = r5.a(r7)     // Catch: java.lang.Throwable -> La2e
            if (r7 == 0) goto L184
            r7 = 1
            goto L185
        L184:
            r7 = 0
        L185:
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "27"
            java.lang.String r7 = "meminfo"
            boolean r7 = r5.a(r7)     // Catch: java.lang.Throwable -> La2e
            if (r7 == 0) goto L194
            r7 = 1
            goto L195
        L194:
            r7 = 0
        L195:
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "28"
            java.lang.String r7 = "/proc/cpuinfo"
            boolean r7 = r5.b(r7)     // Catch: java.lang.Throwable -> La2e
            if (r7 == 0) goto L1a4
            r7 = 1
            goto L1a5
        L1a4:
            r7 = 0
        L1a5:
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "29"
            java.lang.String r7 = "/proc/meminfo"
            boolean r7 = r5.b(r7)     // Catch: java.lang.Throwable -> La2e
            if (r7 == 0) goto L1b4
            r7 = 1
            goto L1b5
        L1b4:
            r7 = 0
        L1b5:
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "96"
            org.json.JSONObject r7 = r5.a()     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "134"
            org.json.JSONObject r5 = r5.b()     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
            com.kuaishou.weapon.p0.an r5 = new com.kuaishou.weapon.p0.an     // Catch: java.lang.Throwable -> La2e
            r5.<init>()     // Catch: java.lang.Throwable -> La2e
            java.util.Set r6 = r5.b()     // Catch: java.lang.Throwable -> La2e
            java.util.Set r7 = r5.c()     // Catch: java.lang.Throwable -> La2e
            java.lang.String r10 = "30"
            r28 = r11
            if (r7 == 0) goto L1ec
            r11 = 1
            r1.put(r10, r11)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r10 = "32"
            org.json.JSONArray r11 = new org.json.JSONArray     // Catch: java.lang.Throwable -> La2e
            r11.<init>(r7)     // Catch: java.lang.Throwable -> La2e
            r1.put(r10, r11)     // Catch: java.lang.Throwable -> La2e
            goto L1f0
        L1ec:
            r11 = 0
            r1.put(r10, r11)     // Catch: java.lang.Throwable -> La2e
        L1f0:
            java.lang.String r10 = "31"
            if (r6 == 0) goto L203
            r11 = 1
            r1.put(r10, r11)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r10 = "33"
            org.json.JSONArray r11 = new org.json.JSONArray     // Catch: java.lang.Throwable -> La2e
            r11.<init>(r6)     // Catch: java.lang.Throwable -> La2e
            r1.put(r10, r11)     // Catch: java.lang.Throwable -> La2e
            goto L207
        L203:
            r11 = 0
            r1.put(r10, r11)     // Catch: java.lang.Throwable -> La2e
        L207:
            java.util.Set r10 = r5.a()     // Catch: java.lang.Throwable -> La2e
            if (r10 == 0) goto L2a3
            java.lang.String r11 = "34"
            r1.put(r11, r10)     // Catch: java.lang.Throwable -> La2e
            if (r6 != 0) goto L216
            if (r7 == 0) goto L2a3
        L216:
            java.util.HashSet r10 = new java.util.HashSet     // Catch: java.lang.Throwable -> La2e
            r10.<init>()     // Catch: java.lang.Throwable -> La2e
            if (r6 == 0) goto L220
            r10.add(r6)     // Catch: java.lang.Throwable -> La2e
        L220:
            if (r7 == 0) goto L225
            r10.add(r7)     // Catch: java.lang.Throwable -> La2e
        L225:
            java.lang.String r6 = "13"
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> La2e
            r11 = 13
            int r7 = r5.a(r7, r11, r10)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "14"
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> La2e
            r11 = 14
            int r7 = r5.a(r7, r11, r10)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "15"
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> La2e
            r11 = 15
            int r7 = r5.a(r7, r11, r10)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "16"
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> La2e
            r11 = 16
            int r7 = r5.a(r7, r11, r10)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "17"
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> La2e
            r11 = 17
            int r7 = r5.a(r7, r11, r10)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "18"
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> La2e
            r11 = 18
            int r7 = r5.a(r7, r11, r10)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "19"
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> La2e
            r11 = 19
            int r7 = r5.a(r7, r11, r10)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "20"
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> La2e
            r11 = 20
            int r7 = r5.a(r7, r11, r10)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "21"
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> La2e
            r11 = 21
            int r7 = r5.a(r7, r11, r10)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            org.json.JSONObject r5 = r5.b(r10)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "130"
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
        L2a3:
            com.kuaishou.weapon.p0.ao r5 = new com.kuaishou.weapon.p0.ao     // Catch: java.lang.Throwable -> La2e
            r5.<init>()     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "65"
            boolean r7 = r5.d()     // Catch: java.lang.Throwable -> La2e
            if (r7 == 0) goto L2b2
            r7 = 1
            goto L2b3
        L2b2:
            r7 = 0
        L2b3:
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            boolean r6 = r5.b()     // Catch: java.lang.Throwable -> La2e
            java.lang.String r7 = "66"
            if (r6 == 0) goto L2c0
            r10 = 1
            goto L2c1
        L2c0:
            r10 = 0
        L2c1:
            r1.put(r7, r10)     // Catch: java.lang.Throwable -> La2e
            if (r6 == 0) goto L2d4
            java.lang.String r6 = "67"
            boolean r7 = r5.a()     // Catch: java.lang.Throwable -> La2e
            if (r7 == 0) goto L2d0
            r7 = 1
            goto L2d1
        L2d0:
            r7 = 0
        L2d1:
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
        L2d4:
            java.lang.String r6 = "68"
            boolean r7 = r5.f()     // Catch: java.lang.Throwable -> La2e
            if (r7 == 0) goto L2de
            r7 = 1
            goto L2df
        L2de:
            r7 = 0
        L2df:
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "69"
            java.lang.String r7 = r5.e()     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "101"
            boolean r7 = r5.c()     // Catch: java.lang.Throwable -> La2e
            if (r7 == 0) goto L2f5
            r7 = 1
            goto L2f6
        L2f5:
            r7 = 0
        L2f6:
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "102"
            boolean r5 = r5.g()     // Catch: java.lang.Throwable -> La2e
            if (r5 == 0) goto L303
            r5 = 1
            goto L304
        L303:
            r5 = 0
        L304:
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
            com.kuaishou.weapon.p0.af r5 = new com.kuaishou.weapon.p0.af     // Catch: java.lang.Throwable -> La2e
            r5.<init>()     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "99"
            int r5 = r5.a()     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
            com.kuaishou.weapon.p0.ad r5 = new com.kuaishou.weapon.p0.ad     // Catch: java.lang.Throwable -> La2e
            r5.<init>()     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "103"
            boolean r5 = r5.a()     // Catch: java.lang.Throwable -> La2e
            if (r5 == 0) goto L324
            r5 = 1
            goto L325
        L324:
            r5 = 0
        L325:
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Throwable -> La2e
            r5.<init>()     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "03007"
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> La2e
            java.lang.String r7 = com.kuaishou.weapon.p0.bu.a(r7)     // Catch: java.lang.Throwable -> La2e
            r5.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "03014"
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> La2e
            boolean r7 = com.kuaishou.weapon.p0.bg.g(r7)     // Catch: java.lang.Throwable -> La2e
            r5.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "03020"
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> La2e
            java.lang.String r7 = com.kuaishou.weapon.p0.bu.b(r7)     // Catch: java.lang.Throwable -> La2e
            r5.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "03030"
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> La2e
            int r7 = com.kuaishou.weapon.p0.bf.d(r7)     // Catch: java.lang.Throwable -> La2e
            r5.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "51"
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
            com.kuaishou.weapon.p0.an r5 = new com.kuaishou.weapon.p0.an     // Catch: java.lang.Throwable -> La2e
            r5.<init>()     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "107"
            org.json.JSONObject r7 = r5.d()     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "155"
            org.json.JSONObject r7 = r5.e()     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "170"
            org.json.JSONObject r7 = r5.g()     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "190"
            org.json.JSONObject r5 = r5.f()     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
            com.kuaishou.weapon.p0.ag r5 = new com.kuaishou.weapon.p0.ag     // Catch: java.lang.Throwable -> La2e
            r5.<init>()     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "131"
            org.json.JSONObject r7 = r5.a()     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "145"
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> La2e
            org.json.JSONObject r5 = r5.a(r7)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r5 = "132"
            org.json.JSONObject r6 = com.kuaishou.weapon.p0.dk.a()     // Catch: java.lang.Throwable -> La2e
            r1.put(r5, r6)     // Catch: java.lang.Throwable -> La2e
            com.kuaishou.weapon.p0.ai r5 = new com.kuaishou.weapon.p0.ai     // Catch: java.lang.Throwable -> La2e
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> La2e
            r5.<init>(r6)     // Catch: java.lang.Throwable -> La2e
            org.json.JSONObject r5 = r5.g()     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "133"
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r5 = "plc001_r_rcl_xp"
            r6 = 1
            int r5 = r2.b(r5, r6)     // Catch: java.lang.Throwable -> La2e
            if (r5 != r6) goto L3fc
            android.content.Context r5 = r0.a     // Catch: java.lang.Throwable -> La2e
            int r5 = com.kuaishou.weapon.p0.dl.c(r5)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "139"
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
            android.content.Context r5 = r0.a     // Catch: java.lang.Throwable -> La2e
            int r5 = com.kuaishou.weapon.p0.dl.d(r5)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "140"
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r5 = "147"
            int r6 = com.kuaishou.weapon.p0.dl.a()     // Catch: java.lang.Throwable -> La2e
            r1.put(r5, r6)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r5 = com.kuaishou.weapon.p0.di.b()     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "148"
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r5 = "149"
            java.util.Set r6 = com.kuaishou.weapon.p0.di.c()     // Catch: java.lang.Throwable -> La2e
            r1.put(r5, r6)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r5 = "151"
            int r6 = com.kuaishou.weapon.p0.dk.b()     // Catch: java.lang.Throwable -> La2e
            r1.put(r5, r6)     // Catch: java.lang.Throwable -> La2e
        L3fc:
            java.lang.String r5 = "plc001_r_rcl_vl"
            r6 = 0
            int r5 = r2.b(r5, r6)     // Catch: java.lang.Throwable -> La2e
            r6 = 1
            if (r5 != r6) goto L428
            if (r3 != 0) goto L40a
            if (r4 == 0) goto L41a
        L40a:
            java.lang.String r5 = "25"
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> La2e
            boolean r6 = com.kuaishou.weapon.p0.al.a(r6)     // Catch: java.lang.Throwable -> La2e
            if (r6 == 0) goto L416
            r6 = 1
            goto L417
        L416:
            r6 = 0
        L417:
            r1.put(r5, r6)     // Catch: java.lang.Throwable -> La2e
        L41a:
            java.lang.String r5 = "128"
            boolean r6 = com.kuaishou.weapon.p0.ad.b()     // Catch: java.lang.Throwable -> La2e
            if (r6 == 0) goto L424
            r6 = 1
            goto L425
        L424:
            r6 = 0
        L425:
            r1.put(r5, r6)     // Catch: java.lang.Throwable -> La2e
        L428:
            boolean r5 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess     // Catch: java.lang.Throwable -> La2e
            if (r5 == 0) goto L931
            com.kuaishou.weapon.p0.as r5 = new com.kuaishou.weapon.p0.as     // Catch: java.lang.Throwable -> La2e
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> La2e
            r7 = 100
            r5.<init>(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r8, r6)     // Catch: java.lang.Throwable -> La2e
            org.json.JSONObject r6 = r5.a()     // Catch: java.lang.Throwable -> La2e
            org.json.JSONArray r6 = r5.a(r6, r9)     // Catch: java.lang.Throwable -> La2e
            if (r6 == 0) goto L471
            int r8 = r6.length()     // Catch: java.lang.Throwable -> La2e
            if (r8 <= 0) goto L471
            org.json.JSONObject r8 = r5.a()     // Catch: java.lang.Throwable -> La2e
            org.json.JSONArray r8 = r5.c(r8, r9)     // Catch: java.lang.Throwable -> La2e
            org.json.JSONObject r10 = r5.a()     // Catch: java.lang.Throwable -> La2e
            org.json.JSONArray r10 = r5.b(r10, r9)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r11 = "42"
            r1.put(r11, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r11 = "43"
            r1.put(r11, r10)     // Catch: java.lang.Throwable -> La2e
            org.json.JSONArray r6 = r5.a(r6, r8)     // Catch: java.lang.Throwable -> La2e
            org.json.JSONArray r6 = r5.a(r6, r10)     // Catch: java.lang.Throwable -> La2e
            r1.put(r9, r6)     // Catch: java.lang.Throwable -> La2e
        L471:
            java.lang.String r6 = r5.a(r15)     // Catch: java.lang.Throwable -> La2e
            r1.put(r15, r6)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = r5.a(r14)     // Catch: java.lang.Throwable -> La2e
            r1.put(r14, r6)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = r5.a(r13)     // Catch: java.lang.Throwable -> La2e
            r1.put(r13, r6)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = r5.a(r12)     // Catch: java.lang.Throwable -> La2e
            r1.put(r12, r6)     // Catch: java.lang.Throwable -> La2e
            r6 = r28
            java.lang.String r8 = r5.a(r6)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            r6 = r27
            java.lang.String r8 = r5.b(r6)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            r6 = r26
            java.lang.String r8 = r5.b(r6)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            r6 = r25
            java.lang.String r8 = r5.e(r6)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            r6 = r24
            java.lang.String r8 = r5.a(r6)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            r6 = r23
            org.json.JSONArray r8 = r5.c(r6)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            r6 = r22
            org.json.JSONArray r8 = r5.c(r6)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            r6 = r21
            org.json.JSONArray r8 = r5.c(r6)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            r6 = r20
            org.json.JSONObject r8 = r5.d(r6)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "50"
            java.lang.String r8 = "50"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "70"
            java.lang.String r8 = "70"
            org.json.JSONArray r8 = r5.c(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "39"
            java.lang.String r8 = "39"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "52"
            java.lang.String r8 = "52"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "53"
            java.lang.String r8 = "53"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "54"
            java.lang.String r8 = "54"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "55"
            java.lang.String r8 = "55"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "73"
            java.lang.String r8 = "73"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "74"
            java.lang.String r8 = "74"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "104"
            java.lang.String r8 = "104"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "plc001_r_rcl_dv"
            r8 = 1
            int r6 = r2.b(r6, r8)     // Catch: java.lang.Throwable -> La2e
            if (r6 != r8) goto L57e
            int r6 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> La2e
            r8 = 23
            if (r6 >= r8) goto L57e
            com.kuaishou.weapon.p0.ar r6 = new com.kuaishou.weapon.p0.ar     // Catch: java.lang.Throwable -> La2e
            android.content.Context r8 = r0.a     // Catch: java.lang.Throwable -> La2e
            r6.<init>(r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r8 = "57"
            java.lang.String r8 = r6.a(r8)     // Catch: java.lang.Throwable -> La2e
            boolean r9 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> La2e
            if (r9 != 0) goto L57e
            java.lang.String r9 = "57"
            r1.put(r9, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r8 = "56"
            java.lang.String r9 = "56"
            java.lang.String r6 = r6.a(r9)     // Catch: java.lang.Throwable -> La2e
            r1.put(r8, r6)     // Catch: java.lang.Throwable -> La2e
        L57e:
            java.lang.String r6 = "77"
            java.lang.String r8 = "77"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "78"
            java.lang.String r8 = "78"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "79"
            java.lang.String r8 = "79"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "84"
            java.lang.String r8 = "84"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "80"
            java.lang.String r8 = "80"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "81"
            java.lang.String r8 = "81"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "82"
            java.lang.String r8 = "82"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "83"
            java.lang.String r8 = "83"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "87"
            java.lang.String r8 = "87"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "89"
            java.lang.String r8 = "89"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "90"
            java.lang.String r8 = "90"
            org.json.JSONObject r8 = r5.d(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "75"
            java.lang.String r8 = "75"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "88"
            java.lang.String r8 = "88"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "92"
            java.lang.String r8 = "92"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "93"
            java.lang.String r8 = "93"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "94"
            java.lang.String r8 = "94"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "95"
            java.lang.String r8 = "95"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "98"
            java.lang.String r8 = "98"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "100"
            java.lang.String r8 = "100"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "105"
            java.lang.String r8 = "105"
            java.lang.String r5 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r5 = "plc001_r_rcl_li"
            r6 = 1
            int r5 = r2.b(r5, r6)     // Catch: java.lang.Throwable -> La2e
            if (r5 != r6) goto L68c
            com.kuaishou.weapon.p0.aq r5 = new com.kuaishou.weapon.p0.aq     // Catch: java.lang.Throwable -> La2e
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> La2e
            r8 = 0
            r5.<init>(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "108"
            java.lang.String r8 = "108"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "109"
            java.lang.String r8 = "109"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "111"
            java.lang.String r8 = "111"
            java.lang.String r5 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
        L68c:
            java.lang.String r5 = "plc001_r_rcl_em"
            r6 = 1
            int r5 = r2.b(r5, r6)     // Catch: java.lang.Throwable -> La2e
            if (r5 != r6) goto L71d
            com.kuaishou.weapon.p0.aq r5 = new com.kuaishou.weapon.p0.aq     // Catch: java.lang.Throwable -> La2e
            android.content.Context r8 = r0.a     // Catch: java.lang.Throwable -> La2e
            r5.<init>(r8, r6)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "112"
            java.lang.String r8 = "112"
            java.util.Set r8 = r5.b(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "113"
            java.lang.String r8 = "113"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "114"
            java.lang.String r8 = "114"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "115"
            java.lang.String r8 = "115"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "116"
            java.lang.String r8 = "116"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "117"
            java.lang.String r8 = "117"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "120"
            java.lang.String r8 = "120"
            java.lang.String r5 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
            com.kuaishou.weapon.p0.aq r5 = new com.kuaishou.weapon.p0.aq     // Catch: java.lang.Throwable -> La2e
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> La2e
            r8 = 4
            r5.<init>(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "124"
            java.lang.String r8 = "124"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "125"
            java.lang.String r8 = "125"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "126"
            java.lang.String r8 = "126"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "127"
            java.lang.String r8 = "127"
            java.lang.String r5 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
        L71d:
            java.lang.String r5 = "plc001_r_rcl_vp"
            r6 = 0
            int r5 = r2.b(r5, r6)     // Catch: java.lang.Throwable -> La2e
            r6 = 1
            if (r5 != r6) goto L784
            com.kuaishou.weapon.p0.av r5 = new com.kuaishou.weapon.p0.av     // Catch: java.lang.Throwable -> La2e
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> La2e
            r5.<init>(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "97"
            java.lang.String r8 = "97"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "118"
            java.lang.String r8 = "118"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "119"
            java.lang.String r8 = "119"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "135"
            java.lang.String r8 = "135"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "174"
            java.lang.String r8 = "174"
            java.lang.String r5 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
            com.kuaishou.weapon.p0.av r5 = new com.kuaishou.weapon.p0.av     // Catch: java.lang.Throwable -> La2e
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> La2e
            r8 = 200(0xc8, float:2.8E-43)
            r5.<init>(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "173"
            java.lang.String r8 = "173"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "182"
            java.lang.String r8 = "182"
            java.lang.String r5 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
        L784:
            java.lang.String r5 = "plc001_r_rcl_rcd"
            r6 = 1
            int r5 = r2.b(r5, r6)     // Catch: java.lang.Throwable -> La2e
            if (r5 != r6) goto L809
            com.kuaishou.weapon.p0.bd r5 = new com.kuaishou.weapon.p0.bd     // Catch: java.lang.Throwable -> La2e
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> La2e
            r8 = 4
            r5.<init>(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "129"
            java.lang.String r8 = "129"
            java.lang.String r5 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
            com.kuaishou.weapon.p0.bd r5 = new com.kuaishou.weapon.p0.bd     // Catch: java.lang.Throwable -> La2e
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> La2e
            r8 = 1
            r5.<init>(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "121"
            org.json.JSONObject r8 = r5.a()     // Catch: java.lang.Throwable -> La2e
            java.lang.String r9 = "121"
            org.json.JSONArray r5 = r5.a(r8, r9)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
            com.kuaishou.weapon.p0.bd r5 = new com.kuaishou.weapon.p0.bd     // Catch: java.lang.Throwable -> La2e
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> La2e
            r8 = 2
            r5.<init>(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "137"
            java.lang.String r8 = "137"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "138"
            java.lang.String r8 = "138"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "141"
            java.lang.String r8 = "141"
            java.lang.String r8 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "142"
            java.lang.String r8 = "142"
            java.lang.String r5 = r5.a(r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
            com.kuaishou.weapon.p0.be r5 = new com.kuaishou.weapon.p0.be     // Catch: java.lang.Throwable -> La2e
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> La2e
            r8 = 3
            r5.<init>(r6, r8)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "150"
            org.json.JSONArray r6 = r5.b(r6)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r8 = "150"
            r1.put(r8, r6)     // Catch: java.lang.Throwable -> La2e
            if (r6 == 0) goto L809
            java.lang.String r8 = "188"
            org.json.JSONObject r5 = r5.a(r6)     // Catch: java.lang.Throwable -> La2e
            r1.put(r8, r5)     // Catch: java.lang.Throwable -> La2e
        L809:
            java.lang.String r5 = "plc001_r_rcl_re"
            r6 = 1
            int r5 = r2.b(r5, r6)     // Catch: java.lang.Throwable -> La2e
            if (r5 != r6) goto L87b
            com.kuaishou.weapon.p0.az r5 = new com.kuaishou.weapon.p0.az     // Catch: java.lang.Throwable -> La2e
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> La2e
            r5.<init>(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "152"
            java.lang.String r7 = "152"
            java.lang.String r7 = r5.a(r7)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "153"
            java.lang.String r7 = "153"
            java.lang.String r7 = r5.a(r7)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "156"
            java.lang.String r7 = "156"
            java.lang.String r7 = r5.a(r7)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "157"
            java.lang.String r7 = "157"
            java.lang.String r7 = r5.a(r7)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "163"
            java.lang.String r7 = "163"
            java.lang.String r7 = r5.a(r7)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "171"
            java.lang.String r7 = "171"
            r8 = 1
            org.json.JSONObject r7 = r5.a(r7, r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "172"
            java.lang.String r7 = "172"
            org.json.JSONObject r5 = r5.b(r7)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
            com.kuaishou.weapon.p0.az r5 = new com.kuaishou.weapon.p0.az     // Catch: java.lang.Throwable -> La2e
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> La2e
            r7 = 500(0x1f4, float:7.0E-43)
            r5.<init>(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "177"
            java.lang.String r7 = "177"
            org.json.JSONObject r5 = r5.d(r7)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
        L87b:
            if (r3 != 0) goto L87f
            if (r4 == 0) goto L89d
        L87f:
            java.lang.String r5 = "plc001_r_rcl_hk"
            r6 = 0
            int r5 = r2.b(r5, r6)     // Catch: java.lang.Throwable -> La2e
            r6 = 1
            if (r5 != r6) goto L89d
            com.kuaishou.weapon.p0.az r5 = new com.kuaishou.weapon.p0.az     // Catch: java.lang.Throwable -> La2e
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> La2e
            r7 = 300(0x12c, float:4.2E-43)
            r5.<init>(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "158"
            java.lang.String r7 = "158"
            org.json.JSONObject r5 = r5.b(r7)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
        L89d:
            java.lang.String r5 = "plc001_r_rcl_ud"
            r11 = 0
            int r5 = r2.b(r5, r11)     // Catch: java.lang.Throwable -> La2e
            r6 = 1
            if (r5 != r6) goto L8fd
            com.kuaishou.weapon.p0.bc r5 = new com.kuaishou.weapon.p0.bc     // Catch: java.lang.Throwable -> La2e
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> La2e
            r5.<init>(r6)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "162"
            java.lang.String r7 = "162"
            java.lang.String r7 = r5.a(r7)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "160"
            org.json.JSONObject r7 = r5.a()     // Catch: java.lang.Throwable -> La2e
            java.lang.String r8 = "160"
            org.json.JSONArray r5 = r5.a(r7, r8)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
            com.kuaishou.weapon.p0.az r5 = new com.kuaishou.weapon.p0.az     // Catch: java.lang.Throwable -> La2e
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> La2e
            r7 = 400(0x190, float:5.6E-43)
            r5.<init>(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "164"
            java.lang.String r7 = "164"
            java.lang.String r7 = r5.a(r7)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "165"
            java.lang.String r7 = "165"
            java.lang.String r7 = r5.a(r7)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "166"
            java.lang.String r7 = "166"
            org.json.JSONArray r7 = r5.c(r7)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "167"
            java.lang.String r7 = "167"
            java.lang.String r5 = r5.a(r7)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
        L8fd:
            java.lang.String r5 = "plc001_r_rcl_sc"
            r6 = 1
            int r5 = r2.b(r5, r6)     // Catch: java.lang.Throwable -> La2e
            if (r5 != r6) goto L932
            com.kuaishou.weapon.p0.ax r5 = new com.kuaishou.weapon.p0.ax     // Catch: java.lang.Throwable -> La2e
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> La2e
            r7 = 600(0x258, float:8.41E-43)
            r5.<init>(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "179"
            java.lang.String r7 = "179"
            java.lang.String r7 = r5.a(r7)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "186"
            java.lang.String r7 = "186"
            java.lang.String r7 = r5.a(r7)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "189"
            java.lang.String r7 = "189"
            java.lang.String r5 = r5.a(r7)     // Catch: java.lang.Throwable -> La2e
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
            goto L932
        L931:
            r11 = 0
        L932:
            java.lang.String r5 = "58"
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = com.kuaishou.weapon.p0.ae.a(r6)     // Catch: java.lang.Throwable -> La2e
            r1.put(r5, r6)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r5 = "60"
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> La2e
            boolean r6 = com.kuaishou.weapon.p0.ab.b(r6)     // Catch: java.lang.Throwable -> La2e
            if (r6 == 0) goto L949
            r6 = 1
            goto L94a
        L949:
            r6 = r11
        L94a:
            r1.put(r5, r6)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r5 = "11000"
            boolean r6 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess     // Catch: java.lang.Throwable -> La2e
            if (r6 == 0) goto L955
            r6 = 1
            goto L956
        L955:
            r6 = r11
        L956:
            r1.put(r5, r6)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r5 = "11002"
            java.lang.String r6 = com.kuaishou.weapon.p0.jni.Engine.soVersion     // Catch: java.lang.Throwable -> La2e
            r1.put(r5, r6)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r5 = "plc001_v"
            java.lang.String r6 = "0.0.0"
            java.lang.String r5 = r2.b(r5, r6)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = "11008"
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r5 = "11009"
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> La2e
            android.content.Context r6 = r6.getApplicationContext()     // Catch: java.lang.Throwable -> La2e
            java.lang.String r6 = com.kuaishou.weapon.p0.br.a(r6)     // Catch: java.lang.Throwable -> La2e
            r1.put(r5, r6)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r5 = "11301"
            com.kwad.sdk.f.b r6 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L9af
            java.lang.String r6 = r6.Fz()     // Catch: java.lang.Throwable -> L9af
            java.lang.String r6 = com.kuaishou.weapon.p0.bg.c(r6)     // Catch: java.lang.Throwable -> L9af
            r1.put(r5, r6)     // Catch: java.lang.Throwable -> L9af
            java.lang.String r5 = "11302"
            com.kwad.sdk.f.b r6 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L9af
            java.lang.String r6 = r6.getSdkVersion()     // Catch: java.lang.Throwable -> L9af
            java.lang.String r6 = com.kuaishou.weapon.p0.bg.c(r6)     // Catch: java.lang.Throwable -> L9af
            r1.put(r5, r6)     // Catch: java.lang.Throwable -> L9af
            java.lang.String r5 = "11303"
            com.kwad.sdk.f.b r6 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L9af
            java.lang.String r6 = r6.getAppId()     // Catch: java.lang.Throwable -> L9af
            java.lang.String r6 = com.kuaishou.weapon.p0.bg.c(r6)     // Catch: java.lang.Throwable -> L9af
            r1.put(r5, r6)     // Catch: java.lang.Throwable -> L9af
        L9af:
            r7 = r16
            r6 = r17
            r5 = 1
            java.lang.String r8 = r2.b(r6, r7, r5)     // Catch: java.lang.Throwable -> La2e
            boolean r9 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> La2e
            if (r9 != 0) goto L9c6
            java.lang.String r9 = "183"
            r1.put(r9, r8)     // Catch: java.lang.Throwable -> La2e
            r2.c(r6, r7)     // Catch: java.lang.Throwable -> La2e
        L9c6:
            java.lang.String r2 = "187"
            android.content.Context r6 = r0.a     // Catch: java.lang.Throwable -> La2e
            boolean r6 = com.kuaishou.weapon.p0.ak.a(r6)     // Catch: java.lang.Throwable -> La2e
            if (r6 == 0) goto L9d2
            r6 = r5
            goto L9d3
        L9d2:
            r6 = r11
        L9d3:
            r1.put(r2, r6)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r2 = "11006"
            if (r3 == 0) goto L9dc
            r3 = r5
            goto L9dd
        L9dc:
            r3 = r11
        L9dd:
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r2 = "11029"
            if (r4 == 0) goto L9e6
            r7 = r5
            goto L9e7
        L9e6:
            r7 = r11
        L9e7:
            r1.put(r2, r7)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r2 = "11028"
            java.lang.String r3 = com.kuaishou.weapon.p0.WeaponHI.sKSSdkver     // Catch: java.lang.Throwable -> La2e
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r2 = "20000"
            int r3 = r0.b     // Catch: java.lang.Throwable -> La2e
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r2 = "20001"
            int r3 = r0.c     // Catch: java.lang.Throwable -> La2e
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r2 = "02078"
            java.lang.String r3 = "W_S_V"
            java.lang.String r3 = com.kuaishou.weapon.p0.jni.A.getE(r3)     // Catch: java.lang.Throwable -> La15
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> La15
            java.lang.String r2 = "02079"
            java.lang.String r3 = "W_S_S_V"
            java.lang.String r3 = com.kuaishou.weapon.p0.jni.A.getE(r3)     // Catch: java.lang.Throwable -> La15
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> La15
        La15:
            java.lang.String r2 = "11007"
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> La2e
            long r3 = r3 - r18
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> La2e
            java.lang.String r2 = "11017"
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Throwable -> La2e
            int r3 = r3.length()     // Catch: java.lang.Throwable -> La2e
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> La2e
            return r1
        La2e:
            r1 = 0
            return r1
    }
}
