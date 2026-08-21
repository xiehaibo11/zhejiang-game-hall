package com.kuaishou.weapon.p0;

public class ci {
    private android.content.Context a;

    public ci(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
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
            r28 = this;
            r0 = r28
            java.lang.String r1 = "16102"
            java.lang.String r2 = "6"
            java.lang.String r3 = "52"
            java.lang.String r4 = "5"
            java.lang.String r5 = "51"
            java.lang.String r6 = "4"
            java.lang.String r7 = "48"
            java.lang.String r8 = "57"
            java.lang.String r9 = "3"
            java.lang.String r10 = "46"
            java.lang.String r11 = "95"
            java.lang.String r12 = "56"
            java.lang.String r13 = "2"
            java.lang.String r14 = "1"
            java.lang.String r15 = "53"
            r16 = r1
            java.lang.String r1 = "45"
            r17 = r11
            java.lang.String r11 = "0"
            r18 = r8
            java.lang.String r8 = "re_po_rt"
            r19 = 0
            r20 = r12
            org.json.JSONObject r12 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L59e
            r12.<init>()     // Catch: java.lang.Throwable -> L59e
            r21 = r15
            android.content.Context r15 = r0.a     // Catch: java.lang.Throwable -> L59e
            com.kuaishou.weapon.p0.h r15 = com.kuaishou.weapon.p0.h.a(r15, r8)     // Catch: java.lang.Throwable -> L59e
            r22 = r8
            java.lang.String r8 = "a1_p_s_p_s"
            boolean r8 = r15.e(r8)     // Catch: java.lang.Throwable -> L59e
            r23 = r8
            java.lang.String r8 = "a1_p_s_p_s_c_b"
            boolean r8 = r15.e(r8)     // Catch: java.lang.Throwable -> L59e
            r24 = r8
            java.lang.String r8 = "plc002_pp_s"
            r25 = r3
            r3 = 1
            int r8 = r15.b(r8, r3)     // Catch: java.lang.Throwable -> L59e
            if (r8 != r3) goto L59e
            long r26 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L59e
            java.lang.String r8 = "plc002_pp_pcl_cp"
            int r8 = r15.b(r8, r3)     // Catch: java.lang.Throwable -> L59e
            if (r8 != r3) goto L286
            boolean r8 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess     // Catch: java.lang.Throwable -> L59e
            if (r8 == 0) goto L286
            com.kuaishou.weapon.p0.ap r8 = new com.kuaishou.weapon.p0.ap     // Catch: java.lang.Throwable -> L59e
            android.content.Context r3 = r0.a     // Catch: java.lang.Throwable -> L59e
            r8.<init>(r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r3 = r8.b(r11)     // Catch: java.lang.Throwable -> L59e
            r12.put(r11, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r3 = r8.b(r14)     // Catch: java.lang.Throwable -> L59e
            r12.put(r14, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r3 = r8.b(r13)     // Catch: java.lang.Throwable -> L59e
            r12.put(r13, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r3 = r8.b(r9)     // Catch: java.lang.Throwable -> L59e
            r12.put(r9, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r3 = r8.b(r6)     // Catch: java.lang.Throwable -> L59e
            r12.put(r6, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r3 = r8.b(r4)     // Catch: java.lang.Throwable -> L59e
            r12.put(r4, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r3 = r8.b(r2)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "7"
            java.lang.String r3 = "7"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "8"
            java.lang.String r3 = "8"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "9"
            java.lang.String r3 = "9"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "10"
            java.lang.String r3 = "10"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "11"
            java.lang.String r3 = "11"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "12"
            java.lang.String r3 = "12"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "13"
            java.lang.String r3 = "13"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "14"
            java.lang.String r3 = "14"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "15"
            java.lang.String r3 = "15"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "16"
            java.lang.String r3 = "16"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "17"
            java.lang.String r3 = "17"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "18"
            java.lang.String r3 = "18"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "19"
            java.lang.String r3 = "19"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "20"
            java.lang.String r3 = "20"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "21"
            java.lang.String r3 = "21"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "22"
            java.lang.String r3 = "22"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "23"
            java.lang.String r3 = "23"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "24"
            java.lang.String r3 = "24"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "25"
            java.lang.String r3 = "25"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "26"
            java.lang.String r3 = "26"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "27"
            java.lang.String r3 = "27"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "28"
            java.lang.String r3 = "28"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "29"
            java.lang.String r3 = "29"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "30"
            java.lang.String r3 = "30"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "31"
            java.lang.String r3 = "31"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "32"
            java.lang.String r3 = "32"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "33"
            java.lang.String r3 = "33"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "34"
            java.lang.String r3 = "34"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "35"
            java.lang.String r3 = "35"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "36"
            java.lang.String r3 = "36"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "37"
            java.lang.String r3 = "37"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "38"
            java.lang.String r3 = "38"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "39"
            java.lang.String r3 = "39"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "40"
            java.lang.String r3 = "40"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "41"
            java.lang.String r3 = "41"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "42"
            java.lang.String r3 = "42"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "43"
            java.lang.String r3 = "43"
            org.json.JSONObject r3 = r8.a(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "44"
            java.lang.String r3 = "44"
            org.json.JSONObject r3 = r8.a(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "101"
            java.lang.String r3 = "101"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "102"
            java.lang.String r3 = "102"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "105"
            java.lang.String r3 = "105"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "106"
            java.lang.String r3 = "106"
            java.lang.String r3 = r8.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            android.content.Context r2 = r0.a     // Catch: java.lang.Throwable -> L59e
            java.util.Set r2 = com.kuaishou.weapon.p0.dl.b(r2)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r3 = "49"
            r12.put(r3, r2)     // Catch: java.lang.Throwable -> L59e
            android.content.Context r2 = r0.a     // Catch: java.lang.Throwable -> L59e
            java.util.Set r2 = com.kuaishou.weapon.p0.dl.a(r2)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r3 = "50"
            r12.put(r3, r2)     // Catch: java.lang.Throwable -> L59e
        L286:
            java.lang.String r2 = "plc002_pp_pcl_gc"
            r3 = 1
            int r2 = r15.b(r2, r3)     // Catch: java.lang.Throwable -> L59e
            r4 = 200(0xc8, float:2.8E-43)
            r6 = 0
            if (r2 != r3) goto L350
            boolean r2 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess     // Catch: java.lang.Throwable -> L59e
            if (r2 == 0) goto L350
            com.kuaishou.weapon.p0.at r2 = new com.kuaishou.weapon.p0.at     // Catch: java.lang.Throwable -> L59e
            android.content.Context r3 = r0.a     // Catch: java.lang.Throwable -> L59e
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L59e
            org.json.JSONArray r3 = r2.d(r1)     // Catch: java.lang.Throwable -> L59e
            r12.put(r1, r3)     // Catch: java.lang.Throwable -> L59e
            boolean r1 = r2.a()     // Catch: java.lang.Throwable -> L59e
            if (r1 == 0) goto L2b1
            java.lang.String r1 = "93"
            r3 = 1
            r12.put(r1, r3)     // Catch: java.lang.Throwable -> L59e
            goto L2b2
        L2b1:
            r3 = 1
        L2b2:
            boolean r1 = r2.b()     // Catch: java.lang.Throwable -> L59e
            if (r1 == 0) goto L2bd
            java.lang.String r1 = "94"
            r12.put(r1, r3)     // Catch: java.lang.Throwable -> L59e
        L2bd:
            org.json.JSONArray r1 = r2.d(r10)     // Catch: java.lang.Throwable -> L59e
            r12.put(r10, r1)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r1 = r2.a(r7)     // Catch: java.lang.Throwable -> L59e
            r12.put(r7, r1)     // Catch: java.lang.Throwable -> L59e
            org.json.JSONArray r1 = r2.b(r5)     // Catch: java.lang.Throwable -> L59e
            r12.put(r5, r1)     // Catch: java.lang.Throwable -> L59e
            android.content.Context r1 = r0.a     // Catch: java.lang.Throwable -> L59e
            r3 = r25
            java.util.Set r1 = r2.a(r1, r3, r6)     // Catch: java.lang.Throwable -> L59e
            r12.put(r3, r1)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r1 = "55"
            java.lang.String r3 = "55"
            java.util.Set r3 = r2.c(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r1, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r1 = "66"
            java.lang.String r3 = "66"
            java.lang.String r3 = r2.a(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r1, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r1 = "67"
            int r3 = com.kuaishou.weapon.p0.di.d()     // Catch: java.lang.Throwable -> L59e
            r12.put(r1, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r1 = "78"
            java.lang.String r3 = "78"
            java.lang.String r3 = r2.a(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r1, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r1 = "79"
            java.lang.String r3 = "79"
            java.lang.String r2 = r2.a(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r1, r2)     // Catch: java.lang.Throwable -> L59e
            com.kuaishou.weapon.p0.ay r1 = new com.kuaishou.weapon.p0.ay     // Catch: java.lang.Throwable -> L59e
            android.content.Context r2 = r0.a     // Catch: java.lang.Throwable -> L59e
            r1.<init>(r2, r4)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "70"
            java.lang.String r3 = "70"
            org.json.JSONObject r3 = r1.a(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "71"
            java.lang.String r3 = "71"
            org.json.JSONObject r3 = r1.a(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "72"
            java.lang.String r3 = "72"
            org.json.JSONObject r3 = r1.a(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "73"
            java.lang.String r3 = "73"
            org.json.JSONObject r3 = r1.a(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "74"
            java.lang.String r3 = "74"
            org.json.JSONObject r1 = r1.a(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r1)     // Catch: java.lang.Throwable -> L59e
        L350:
            java.lang.String r1 = "plc002_pp_pcl_pds"
            r2 = 1
            int r1 = r15.b(r1, r2)     // Catch: java.lang.Throwable -> L59e
            if (r1 != r2) goto L41c
            com.kuaishou.weapon.p0.aw r1 = new com.kuaishou.weapon.p0.aw     // Catch: java.lang.Throwable -> L59e
            android.content.Context r3 = r0.a     // Catch: java.lang.Throwable -> L59e
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L59e
            android.content.Context r3 = r0.a     // Catch: java.lang.Throwable -> L59e
            r5 = r21
            java.util.Set r3 = r1.a(r3, r5, r2)     // Catch: java.lang.Throwable -> L59e
            r12.put(r5, r3)     // Catch: java.lang.Throwable -> L59e
            r2 = r20
            java.lang.String r3 = r1.a(r2)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            r2 = r18
            java.lang.String r1 = r1.a(r2)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r1)     // Catch: java.lang.Throwable -> L59e
            if (r23 != 0) goto L381
            if (r24 == 0) goto L413
        L381:
            com.kuaishou.weapon.p0.aj r1 = new com.kuaishou.weapon.p0.aj     // Catch: java.lang.Throwable -> L59e
            r1.<init>()     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "47"
            android.content.Context r3 = r0.a     // Catch: java.lang.Throwable -> L59e
            org.json.JSONObject r3 = r1.a(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "59"
            android.content.Context r3 = r0.a     // Catch: java.lang.Throwable -> L59e
            org.json.JSONObject r3 = r1.d(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "60"
            android.content.Context r3 = r0.a     // Catch: java.lang.Throwable -> L59e
            org.json.JSONObject r3 = r1.c(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "61"
            android.content.Context r3 = r0.a     // Catch: java.lang.Throwable -> L59e
            int r3 = r1.b(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "62"
            android.content.Context r3 = r0.a     // Catch: java.lang.Throwable -> L59e
            org.json.JSONObject r3 = r1.e(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "65"
            android.content.Context r3 = r0.a     // Catch: java.lang.Throwable -> L59e
            org.json.JSONObject r3 = r1.f(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "69"
            android.content.Context r3 = r0.a     // Catch: java.lang.Throwable -> L59e
            org.json.JSONObject r3 = r1.g(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "75"
            android.content.Context r3 = r0.a     // Catch: java.lang.Throwable -> L59e
            org.json.JSONObject r3 = r1.h(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "80"
            java.lang.String r3 = com.kuaishou.weapon.p0.aj.a()     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "85"
            android.content.Context r3 = r0.a     // Catch: java.lang.Throwable -> L59e
            org.json.JSONObject r3 = r1.i(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "87"
            android.content.Context r3 = r0.a     // Catch: java.lang.Throwable -> L59e
            org.json.JSONObject r3 = r1.j(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "91"
            android.content.Context r3 = r0.a     // Catch: java.lang.Throwable -> L59e
            org.json.JSONObject r3 = r1.k(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "92"
            android.content.Context r3 = r0.a     // Catch: java.lang.Throwable -> L59e
            org.json.JSONObject r1 = r1.l(r3)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r1)     // Catch: java.lang.Throwable -> L59e
        L413:
            java.lang.String r1 = "64"
            java.lang.String r2 = com.kuaishou.weapon.p0.di.a()     // Catch: java.lang.Throwable -> L59e
            r12.put(r1, r2)     // Catch: java.lang.Throwable -> L59e
        L41c:
            java.lang.String r1 = "plc002_pp_pcl_pam"
            r2 = 1
            int r1 = r15.b(r1, r2)     // Catch: java.lang.Throwable -> L59e
            if (r1 != r2) goto L49c
            com.kuaishou.weapon.p0.cr r1 = new com.kuaishou.weapon.p0.cr     // Catch: java.lang.Throwable -> L59e
            r1.<init>()     // Catch: java.lang.Throwable -> L59e
            org.json.JSONObject r2 = r1.a()     // Catch: java.lang.Throwable -> L59e
            java.lang.String r3 = "98"
            r12.put(r3, r2)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "107"
            org.json.JSONObject r1 = r1.b()     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r1)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r1 = com.kuaishou.weapon.p0.am.d()     // Catch: java.lang.Throwable -> L59e
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L59e
            if (r2 != 0) goto L44b
            java.lang.String r2 = "77"
            r12.put(r2, r1)     // Catch: java.lang.Throwable -> L59e
        L44b:
            java.lang.String r1 = "104"
            int r2 = com.kuaishou.weapon.p0.am.c()     // Catch: java.lang.Throwable -> L59e
            r12.put(r1, r2)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r1 = "109"
            android.content.Context r2 = r0.a     // Catch: java.lang.Throwable -> L59e
            int r2 = com.kuaishou.weapon.p0.dl.e(r2)     // Catch: java.lang.Throwable -> L59e
            r12.put(r1, r2)     // Catch: java.lang.Throwable -> L59e
            com.kuaishou.weapon.p0.ai r1 = new com.kuaishou.weapon.p0.ai     // Catch: java.lang.Throwable -> L59e
            android.content.Context r2 = r0.a     // Catch: java.lang.Throwable -> L59e
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "82"
            int r3 = r1.h()     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = r1.i()     // Catch: java.lang.Throwable -> L59e
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L59e
            if (r3 != 0) goto L47e
            java.lang.String r3 = "83"
            r12.put(r3, r2)     // Catch: java.lang.Throwable -> L59e
        L47e:
            java.lang.String r2 = r1.j()     // Catch: java.lang.Throwable -> L59e
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L59e
            if (r3 != 0) goto L48d
            java.lang.String r3 = "84"
            r12.put(r3, r2)     // Catch: java.lang.Throwable -> L59e
        L48d:
            java.lang.String r1 = r1.k()     // Catch: java.lang.Throwable -> L59e
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L59e
            if (r2 != 0) goto L49c
            java.lang.String r2 = "86"
            r12.put(r2, r1)     // Catch: java.lang.Throwable -> L59e
        L49c:
            java.lang.String r1 = "plc002_pp_pcl_pke"
            r2 = 1
            int r1 = r15.b(r1, r2)     // Catch: java.lang.Throwable -> L59e
            if (r1 != r2) goto L4ff
            com.kuaishou.weapon.p0.au r1 = new com.kuaishou.weapon.p0.au     // Catch: java.lang.Throwable -> L59e
            android.content.Context r2 = r0.a     // Catch: java.lang.Throwable -> L59e
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L59e
            r2 = r17
            java.util.List r3 = r1.b(r2)     // Catch: java.lang.Throwable -> L59e
            r12.put(r2, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "96"
            boolean r1 = r1.a()     // Catch: java.lang.Throwable -> L59e
            if (r1 == 0) goto L4bf
            r1 = 1
            goto L4c0
        L4bf:
            r1 = r6
        L4c0:
            r12.put(r2, r1)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r1 = "97"
            org.json.JSONObject r2 = com.kuaishou.weapon.p0.di.e()     // Catch: java.lang.Throwable -> L59e
            r12.put(r1, r2)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r1 = "11301"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L4ff
            java.lang.String r2 = r2.Fz()     // Catch: java.lang.Throwable -> L4ff
            java.lang.String r2 = com.kuaishou.weapon.p0.bg.c(r2)     // Catch: java.lang.Throwable -> L4ff
            r12.put(r1, r2)     // Catch: java.lang.Throwable -> L4ff
            java.lang.String r1 = "11302"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L4ff
            java.lang.String r2 = r2.getSdkVersion()     // Catch: java.lang.Throwable -> L4ff
            java.lang.String r2 = com.kuaishou.weapon.p0.bg.c(r2)     // Catch: java.lang.Throwable -> L4ff
            r12.put(r1, r2)     // Catch: java.lang.Throwable -> L4ff
            java.lang.String r1 = "11303"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L4ff
            java.lang.String r2 = r2.getAppId()     // Catch: java.lang.Throwable -> L4ff
            java.lang.String r2 = com.kuaishou.weapon.p0.bg.c(r2)     // Catch: java.lang.Throwable -> L4ff
            r12.put(r1, r2)     // Catch: java.lang.Throwable -> L4ff
        L4ff:
            android.content.Context r1 = r0.a     // Catch: java.lang.Throwable -> L569
            r2 = r22
            com.kuaishou.weapon.p0.h r1 = com.kuaishou.weapon.p0.h.a(r1, r2)     // Catch: java.lang.Throwable -> L569
            java.lang.String r2 = "plc001_b_bcl_s"
            r3 = 1
            int r1 = r1.b(r2, r3)     // Catch: java.lang.Throwable -> L567
            if (r1 != r3) goto L567
            java.io.File r1 = android.os.Environment.getExternalStorageDirectory()     // Catch: java.lang.Throwable -> L569
            com.kuaishou.weapon.p0.ba r2 = new com.kuaishou.weapon.p0.ba     // Catch: java.lang.Throwable -> L569
            android.content.Context r3 = r0.a     // Catch: java.lang.Throwable -> L569
            r5 = 100
            java.lang.String r1 = r1.getAbsolutePath()     // Catch: java.lang.Throwable -> L569
            android.content.Context r7 = r0.a     // Catch: java.lang.Throwable -> L569
            boolean r7 = com.kuaishou.weapon.p0.ba.a(r7)     // Catch: java.lang.Throwable -> L569
            r2.<init>(r3, r5, r1, r7)     // Catch: java.lang.Throwable -> L569
            org.json.JSONObject r1 = r2.c()     // Catch: java.lang.Throwable -> L569
            if (r1 == 0) goto L53c
            int r2 = r1.length()     // Catch: java.lang.Throwable -> L569
            r3 = 10
            if (r2 <= r3) goto L53c
            java.lang.String r2 = "16002"
            r12.put(r2, r1)     // Catch: java.lang.Throwable -> L569
            r5 = 1
            goto L54f
        L53c:
            com.kuaishou.weapon.p0.ba r1 = new com.kuaishou.weapon.p0.ba     // Catch: java.lang.Throwable -> L569
            android.content.Context r2 = r0.a     // Catch: java.lang.Throwable -> L569
            java.lang.String r3 = ""
            r5 = 1
            r1.<init>(r2, r4, r3, r5)     // Catch: java.lang.Throwable -> L56a
            r2 = r16
            java.lang.String r1 = r1.a(r2)     // Catch: java.lang.Throwable -> L56a
            r12.put(r2, r1)     // Catch: java.lang.Throwable -> L56a
        L54f:
            if (r23 != 0) goto L553
            if (r24 == 0) goto L56a
        L553:
            android.content.Context r1 = r0.a     // Catch: java.lang.Throwable -> L56a
            org.json.JSONObject r1 = com.kuaishou.weapon.p0.bf.g(r1)     // Catch: java.lang.Throwable -> L56a
            if (r1 == 0) goto L56a
            int r2 = r1.length()     // Catch: java.lang.Throwable -> L56a
            if (r2 <= 0) goto L56a
            java.lang.String r2 = "16116"
            r12.put(r2, r1)     // Catch: java.lang.Throwable -> L56a
            goto L56a
        L567:
            r5 = r3
            goto L56a
        L569:
            r5 = 1
        L56a:
            java.lang.String r1 = "11006"
            if (r23 == 0) goto L570
            r3 = r5
            goto L571
        L570:
            r3 = r6
        L571:
            r12.put(r1, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r1 = "11029"
            if (r24 == 0) goto L57a
            r3 = r5
            goto L57b
        L57a:
            r3 = r6
        L57b:
            r12.put(r1, r3)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r1 = "11002"
            java.lang.String r2 = com.kuaishou.weapon.p0.jni.Engine.soVersion     // Catch: java.lang.Throwable -> L59e
            r12.put(r1, r2)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r1 = "11007"
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L59e
            long r2 = r2 - r26
            r12.put(r1, r2)     // Catch: java.lang.Throwable -> L59e
            java.lang.String r1 = r12.toString()     // Catch: java.lang.Throwable -> L59e
            int r1 = r1.length()     // Catch: java.lang.Throwable -> L59e
            java.lang.String r2 = "11017"
            r12.put(r2, r1)     // Catch: java.lang.Throwable -> L59e
            return r12
        L59e:
            return r19
    }
}
