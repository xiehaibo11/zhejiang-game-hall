package com.tkay.basead.a;

public final class j {
    public j() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String a(java.lang.String r1, com.tkay.basead.c.b r2) {
            java.lang.String r0 = r2.a
            if (r0 != 0) goto L7
            java.lang.String r2 = ""
            goto L9
        L7:
            java.lang.String r2 = r2.a
        L9:
            java.lang.String r0 = "\\{__CLICK_ID__\\}"
            java.lang.String r1 = r1.replaceAll(r0, r2)
            return r1
    }

    private static java.lang.String a(java.lang.String r12, com.tkay.basead.c.i r13) {
            java.lang.String r0 = "up_y"
            java.lang.String r1 = "utf-8"
            java.lang.String r2 = "{}"
            java.lang.String r3 = "up_x"
            java.lang.String r4 = "down_y"
            java.lang.String r5 = "down_x"
            com.tkay.basead.c.a r6 = r13.g
            int r7 = r13.e
            int r13 = r13.f
            org.json.JSONObject r8 = new org.json.JSONObject
            r8.<init>()
            int r9 = r6.e     // Catch: org.json.JSONException -> L2b
            r8.put(r5, r9)     // Catch: org.json.JSONException -> L2b
            int r9 = r6.f     // Catch: org.json.JSONException -> L2b
            r8.put(r4, r9)     // Catch: org.json.JSONException -> L2b
            int r9 = r6.g     // Catch: org.json.JSONException -> L2b
            r8.put(r3, r9)     // Catch: org.json.JSONException -> L2b
            int r9 = r6.h     // Catch: org.json.JSONException -> L2b
            r8.put(r0, r9)     // Catch: org.json.JSONException -> L2b
        L2b:
            org.json.JSONObject r9 = new org.json.JSONObject
            r9.<init>()
            int r10 = r6.e     // Catch: org.json.JSONException -> L58
            float r10 = (float) r10     // Catch: org.json.JSONException -> L58
            float r7 = (float) r7     // Catch: org.json.JSONException -> L58
            float r10 = r10 / r7
            r11 = 1148846080(0x447a0000, float:1000.0)
            float r10 = r10 * r11
            int r10 = (int) r10     // Catch: org.json.JSONException -> L58
            r9.put(r5, r10)     // Catch: org.json.JSONException -> L58
            int r5 = r6.e     // Catch: org.json.JSONException -> L58
            float r5 = (float) r5     // Catch: org.json.JSONException -> L58
            float r13 = (float) r13     // Catch: org.json.JSONException -> L58
            float r5 = r5 / r13
            float r5 = r5 * r11
            int r5 = (int) r5     // Catch: org.json.JSONException -> L58
            r9.put(r4, r5)     // Catch: org.json.JSONException -> L58
            int r4 = r6.g     // Catch: org.json.JSONException -> L58
            float r4 = (float) r4     // Catch: org.json.JSONException -> L58
            float r4 = r4 / r7
            float r4 = r4 * r11
            int r4 = (int) r4     // Catch: org.json.JSONException -> L58
            r9.put(r3, r4)     // Catch: org.json.JSONException -> L58
            int r3 = r6.h     // Catch: org.json.JSONException -> L58
            float r3 = (float) r3     // Catch: org.json.JSONException -> L58
            float r3 = r3 / r13
            float r3 = r3 * r11
            int r13 = (int) r3     // Catch: org.json.JSONException -> L58
            r9.put(r0, r13)     // Catch: org.json.JSONException -> L58
        L58:
            java.lang.String r13 = r8.toString()     // Catch: java.lang.Throwable -> L61
            java.lang.String r13 = java.net.URLEncoder.encode(r13, r1)     // Catch: java.lang.Throwable -> L61
            goto L66
        L61:
            r13 = move-exception
            r13.printStackTrace()
            r13 = r2
        L66:
            java.lang.String r0 = r9.toString()     // Catch: java.lang.Throwable -> L6f
            java.lang.String r2 = java.net.URLEncoder.encode(r0, r1)     // Catch: java.lang.Throwable -> L6f
            goto L73
        L6f:
            r0 = move-exception
            r0.printStackTrace()
        L73:
            boolean r0 = r6.i
            if (r0 == 0) goto L79
            r0 = 1
            goto L7a
        L79:
            r0 = 2
        L7a:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            int r3 = r6.a
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            java.lang.String r3 = "\\{__DOWN_X__\\}"
            java.lang.String r12 = r12.replaceAll(r3, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            int r3 = r6.b
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            java.lang.String r3 = "\\{__DOWN_Y__\\}"
            java.lang.String r12 = r12.replaceAll(r3, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            int r3 = r6.c
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            java.lang.String r3 = "\\{__UP_X__\\}"
            java.lang.String r12 = r12.replaceAll(r3, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            int r3 = r6.d
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            java.lang.String r3 = "\\{__UP_Y__\\}"
            java.lang.String r12 = r12.replaceAll(r3, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            int r3 = r6.e
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            java.lang.String r3 = "\\{__RE_DOWN_X__\\}"
            java.lang.String r12 = r12.replaceAll(r3, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            int r3 = r6.f
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            java.lang.String r3 = "\\{__RE_DOWN_Y__\\}"
            java.lang.String r12 = r12.replaceAll(r3, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            int r3 = r6.g
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            java.lang.String r3 = "\\{__RE_UP_X__\\}"
            java.lang.String r12 = r12.replaceAll(r3, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            int r3 = r6.h
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            java.lang.String r3 = "\\{__RE_UP_Y__\\}"
            java.lang.String r12 = r12.replaceAll(r3, r1)
            java.lang.String r1 = "\\{ABSOLUTE_COORD\\}"
            java.lang.String r12 = r12.replaceAll(r1, r13)
            java.lang.String r13 = "\\{RELATIVE_COORD\\}"
            java.lang.String r12 = r12.replaceAll(r13, r2)
            java.lang.String r13 = java.lang.String.valueOf(r0)
            java.lang.String r0 = "\\{__DPLINK_TYPE__\\}"
            java.lang.String r12 = r12.replaceAll(r0, r13)
            boolean r13 = r6.i
            java.lang.String r0 = ""
            java.lang.String r1 = "&apk_ptype=\\{apk_ptype\\}"
            if (r13 == 0) goto L13c
            java.lang.String r12 = r12.replaceAll(r1, r0)
        L13c:
            int r13 = r6.j
            r2 = -1
            if (r13 != r2) goto L146
            java.lang.String r12 = r12.replaceAll(r1, r0)
            goto L152
        L146:
            int r13 = r6.j
            java.lang.String r13 = java.lang.String.valueOf(r13)
            java.lang.String r0 = "\\{apk_ptype\\}"
            java.lang.String r12 = r12.replaceAll(r0, r13)
        L152:
            boolean r13 = r6.i
            if (r13 == 0) goto L159
            java.lang.String r13 = "1"
            goto L15b
        L159:
            java.lang.String r13 = "0"
        L15b:
            java.lang.String r0 = "\\{opdptype\\}"
            java.lang.String r12 = r12.replaceAll(r0, r13)
            return r12
    }

    protected static java.lang.String a(java.lang.String r5, com.tkay.basead.c.i r6, long r7) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            com.tkay.basead.c.a r0 = r6.g
            if (r0 == 0) goto L11
            java.lang.String r5 = a(r5, r6)
        L11:
            com.tkay.basead.c.j r0 = r6.h
            if (r0 == 0) goto L1b
            com.tkay.basead.c.j r0 = r6.h
            java.lang.String r5 = a(r5, r0)
        L1b:
            com.tkay.basead.c.b r0 = r6.i
            if (r0 == 0) goto L25
            com.tkay.basead.c.b r0 = r6.i
            java.lang.String r5 = a(r5, r0)
        L25:
            r2 = 1000(0x3e8, double:4.94E-321)
            long r2 = r7 / r2
            int r0 = r6.c
            if (r0 != 0) goto L30
            java.lang.String r0 = "__REQ_WIDTH__"
            goto L3e
        L30:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r4 = r6.c
            r0.append(r4)
            java.lang.String r0 = r0.toString()
        L3e:
            java.lang.String r4 = "\\{__REQ_WIDTH__\\}"
            java.lang.String r5 = r5.replaceAll(r4, r0)
            int r0 = r6.d
            if (r0 != 0) goto L4b
            java.lang.String r0 = "__REQ_HEIGHT__"
            goto L59
        L4b:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r4 = r6.d
            r0.append(r4)
            java.lang.String r0 = r0.toString()
        L59:
            java.lang.String r4 = "\\{__REQ_HEIGHT__\\}"
            java.lang.String r5 = r5.replaceAll(r4, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r4 = r6.e
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r4 = "\\{__WIDTH__\\}"
            java.lang.String r5 = r5.replaceAll(r4, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r6 = r6.f
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            java.lang.String r0 = "\\{__HEIGHT__\\}"
            java.lang.String r5 = r5.replaceAll(r0, r6)
            java.lang.String r6 = java.lang.String.valueOf(r2)
            java.lang.String r0 = "\\{__TS__\\}"
            java.lang.String r5 = r5.replaceAll(r0, r6)
            java.lang.String r6 = java.lang.String.valueOf(r7)
            java.lang.String r0 = "\\{__TS_MSEC__\\}"
            java.lang.String r5 = r5.replaceAll(r0, r6)
            java.lang.String r6 = java.lang.String.valueOf(r2)
            java.lang.String r0 = "\\{__END_TS__\\}"
            java.lang.String r5 = r5.replaceAll(r0, r6)
            java.lang.String r6 = java.lang.String.valueOf(r7)
            java.lang.String r7 = "\\{__END_TS_MSEC__\\}"
            java.lang.String r5 = r5.replaceAll(r7, r6)
            java.lang.String r6 = "\\{__PLAY_SEC__\\}"
            java.lang.String r7 = "0"
            java.lang.String r5 = r5.replaceAll(r6, r7)
            java.lang.String r6 = "\\{"
            java.lang.String r5 = r5.replaceAll(r6, r1)
            java.lang.String r6 = "\\}"
            java.lang.String r5 = r5.replaceAll(r6, r1)
            return r5
    }

    private static java.lang.String a(java.lang.String r6, com.tkay.basead.c.j r7) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r7.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "\\{__VIDEO_TIME__\\}"
            java.lang.String r6 = r6.replaceAll(r1, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r7.b
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "\\{__BEGIN_TIME__\\}"
            java.lang.String r6 = r6.replaceAll(r1, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r7.c
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "\\{__END_TIME__\\}"
            java.lang.String r6 = r6.replaceAll(r1, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r7.d
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "\\{__PLAY_FIRST_FRAME__\\}"
            java.lang.String r6 = r6.replaceAll(r1, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r7.e
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "\\{__PLAY_LAST_FRAME__\\}"
            java.lang.String r6 = r6.replaceAll(r1, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r7.l
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "\\{__SCENE__\\}"
            java.lang.String r6 = r6.replaceAll(r1, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r7.o
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "\\{__TYPE__\\}"
            java.lang.String r6 = r6.replaceAll(r1, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r7.r
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "\\{__BEHAVIOR__\\}"
            java.lang.String r6 = r6.replaceAll(r1, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r7.u
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "\\{__STATUS__\\}"
            java.lang.String r6 = r6.replaceAll(r1, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r7.h
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "\\{__PLAY_SEC__\\}"
            java.lang.String r6 = r6.replaceAll(r1, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            long r2 = r7.f
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 / r4
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "\\{__TS__\\}"
            java.lang.String r6 = r6.replaceAll(r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            long r2 = r7.f
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "\\{__TS_MSEC__\\}"
            java.lang.String r6 = r6.replaceAll(r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            long r2 = r7.g
            long r2 = r2 / r4
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "\\{__END_TS__\\}"
            java.lang.String r6 = r6.replaceAll(r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            long r2 = r7.g
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "\\{__END_TS_MSEC__\\}"
            java.lang.String r6 = r6.replaceAll(r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r2 = r7.h
            int r2 = r2 / 1000
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r6 = r6.replaceAll(r1, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r7 = r7.h
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            java.lang.String r0 = "\\{__PLAY_MSEC__\\}"
            java.lang.String r6 = r6.replaceAll(r0, r7)
            return r6
    }

    private static void a(int r1, com.tkay.basead.c.i r2, com.tkay.core.common.f.z r3, com.tkay.core.common.f.ab r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            switch(r1) {
                case 1: goto Lb4;
                case 2: goto Laf;
                case 3: goto Laa;
                case 4: goto La5;
                case 5: goto La0;
                case 6: goto L9b;
                case 7: goto L96;
                case 8: goto L91;
                case 9: goto L8c;
                case 10: goto L87;
                case 11: goto L82;
                case 12: goto L7d;
                case 13: goto L78;
                case 14: goto L73;
                case 15: goto L6e;
                case 16: goto L69;
                case 17: goto L64;
                case 18: goto L5f;
                case 19: goto L59;
                case 20: goto L53;
                case 21: goto L4d;
                case 22: goto L3;
                case 23: goto L47;
                case 24: goto L41;
                case 25: goto L3b;
                case 26: goto L35;
                case 27: goto L2f;
                case 28: goto L29;
                case 29: goto L23;
                case 30: goto L1d;
                case 31: goto L17;
                case 32: goto L3;
                case 33: goto L11;
                case 34: goto Lb;
                case 35: goto L5;
                default: goto L3;
            }
        L3:
            goto Lb9
        L5:
            java.lang.String r4 = r4.ap()
            goto Lbb
        Lb:
            java.lang.String r4 = r4.an()
            goto Lbb
        L11:
            java.lang.String r4 = r4.am()
            goto Lbb
        L17:
            java.lang.String r4 = r4.al()
            goto Lbb
        L1d:
            java.lang.String r4 = r4.ak()
            goto Lbb
        L23:
            java.lang.String r4 = r4.ai()
            goto Lbb
        L29:
            java.lang.String r4 = r4.aj()
            goto Lbb
        L2f:
            java.lang.String r4 = r4.ah()
            goto Lbb
        L35:
            java.lang.String r4 = r4.ag()
            goto Lbb
        L3b:
            java.lang.String r4 = r4.af()
            goto Lbb
        L41:
            java.lang.String r4 = r4.ae()
            goto Lbb
        L47:
            java.lang.String r4 = r4.ad()
            goto Lbb
        L4d:
            java.lang.String r4 = r4.P()
            goto Lbb
        L53:
            java.lang.String r4 = r4.ac()
            goto Lbb
        L59:
            java.lang.String r4 = r4.O()
            goto Lbb
        L5f:
            java.lang.String r4 = r4.N()
            goto Lbb
        L64:
            java.lang.String r4 = r4.ab()
            goto Lbb
        L69:
            java.lang.String r4 = r4.aa()
            goto Lbb
        L6e:
            java.lang.String r4 = r4.Z()
            goto Lbb
        L73:
            java.lang.String r4 = r4.I()
            goto Lbb
        L78:
            java.lang.String r4 = r4.K()
            goto Lbb
        L7d:
            java.lang.String r4 = r4.J()
            goto Lbb
        L82:
            java.lang.String r4 = r4.H()
            goto Lbb
        L87:
            java.lang.String r4 = r4.z()
            goto Lbb
        L8c:
            java.lang.String r4 = r4.B()
            goto Lbb
        L91:
            java.lang.String r4 = r4.A()
            goto Lbb
        L96:
            java.lang.String r4 = r4.M()
            goto Lbb
        L9b:
            java.lang.String r4 = r4.L()
            goto Lbb
        La0:
            java.lang.String r4 = r4.G()
            goto Lbb
        La5:
            java.lang.String r4 = r4.F()
            goto Lbb
        Laa:
            java.lang.String r4 = r4.E()
            goto Lbb
        Laf:
            java.lang.String r4 = r4.D()
            goto Lbb
        Lb4:
            java.lang.String r4 = r4.C()
            goto Lbb
        Lb9:
            java.lang.String r4 = ""
        Lbb:
            boolean r0 = a(r4)
            if (r0 == 0) goto Lc2
            return
        Lc2:
            com.tkay.basead.g.f r0 = new com.tkay.basead.g.f
            r0.<init>(r1, r3, r4, r5)
            java.lang.String r1 = r2.b
            r0.b(r1)
            r1 = 0
            r2 = 0
            r0.a(r1, r2)
            return
    }

    protected static void a(int r12, com.tkay.core.common.f.z r13, com.tkay.basead.c.i r14) {
            com.tkay.core.common.f.ab r0 = r13.X()
            if (r0 != 0) goto L7
            return
        L7:
            java.lang.String r1 = r0.c()
            java.util.Map r1 = com.tkay.core.common.l.h.c(r1)
            r2 = 0
            r3 = 0
            switch(r12) {
                case 1: goto Lde;
                case 2: goto Ld9;
                case 3: goto Ld4;
                case 4: goto Lcf;
                case 5: goto Lca;
                case 6: goto Lc5;
                case 7: goto Lc0;
                case 8: goto Lbb;
                case 9: goto Lb6;
                case 10: goto Lb1;
                case 11: goto Lac;
                case 12: goto La7;
                case 13: goto La2;
                case 14: goto L9d;
                case 15: goto L98;
                case 16: goto L93;
                case 17: goto L8e;
                case 18: goto L88;
                case 19: goto L82;
                case 20: goto L7c;
                case 21: goto L76;
                case 22: goto L14;
                case 23: goto L70;
                case 24: goto L6a;
                case 25: goto L64;
                case 26: goto L5e;
                case 27: goto L58;
                case 28: goto L52;
                case 29: goto L4c;
                case 30: goto L46;
                case 31: goto L40;
                case 32: goto L28;
                case 33: goto L22;
                case 34: goto L1c;
                case 35: goto L16;
                default: goto L14;
            }
        L14:
            goto Le5
        L16:
            java.lang.String[] r4 = r0.ao()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        L1c:
            java.lang.String[] r4 = r0.b()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        L22:
            java.lang.String[] r4 = r0.a()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        L28:
            com.tkay.basead.c.j r4 = r14.h     // Catch: java.lang.Throwable -> Le3
            java.util.Map r5 = r0.y()     // Catch: java.lang.Throwable -> Le3
            if (r4 == 0) goto Le5
            if (r5 == 0) goto Le5
            int r4 = r4.i     // Catch: java.lang.Throwable -> Le3
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> Le3
            java.lang.Object r4 = r5.get(r4)     // Catch: java.lang.Throwable -> Le3
            java.lang.String[] r4 = (java.lang.String[]) r4     // Catch: java.lang.Throwable -> Le3
            goto Le6
        L40:
            java.lang.String[] r4 = r0.x()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        L46:
            java.lang.String[] r4 = r0.w()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        L4c:
            java.lang.String[] r4 = r0.u()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        L52:
            java.lang.String[] r4 = r0.v()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        L58:
            java.lang.String[] r4 = r0.Y()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        L5e:
            java.lang.String[] r4 = r0.X()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        L64:
            java.lang.String[] r4 = r0.W()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        L6a:
            java.lang.String[] r4 = r0.V()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        L70:
            java.lang.String[] r4 = r0.U()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        L76:
            java.lang.String[] r4 = r0.t()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        L7c:
            java.lang.String[] r4 = r0.T()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        L82:
            java.lang.String[] r4 = r0.s()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        L88:
            java.lang.String[] r4 = r0.r()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        L8e:
            java.lang.String[] r4 = r0.S()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        L93:
            java.lang.String[] r4 = r0.R()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        L98:
            java.lang.String[] r4 = r0.Q()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        L9d:
            java.lang.String[] r4 = r0.m()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        La2:
            java.lang.String[] r4 = r0.o()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        La7:
            java.lang.String[] r4 = r0.n()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        Lac:
            java.lang.String[] r4 = r0.l()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        Lb1:
            java.lang.String[] r4 = r0.d()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        Lb6:
            java.lang.String[] r4 = r0.f()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        Lbb:
            java.lang.String[] r4 = r0.e()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        Lc0:
            java.lang.String[] r4 = r0.q()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        Lc5:
            java.lang.String[] r4 = r0.p()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        Lca:
            java.lang.String[] r4 = r0.k()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        Lcf:
            java.lang.String[] r4 = r0.j()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        Ld4:
            java.lang.String[] r4 = r0.i()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        Ld9:
            java.lang.String[] r4 = r0.h()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        Lde:
            java.lang.String[] r4 = r0.g()     // Catch: java.lang.Throwable -> Le3
            goto Le6
        Le3:
            r4 = move-exception
            goto L117
        Le5:
            r4 = r2
        Le6:
            if (r4 == 0) goto L11a
            r5 = 8
            if (r12 == r5) goto Lf3
            r5 = 9
            if (r12 != r5) goto Lf1
            goto Lf3
        Lf1:
            r5 = r3
            goto Lfb
        Lf3:
            com.tkay.core.common.f.j r5 = r13.k()     // Catch: java.lang.Throwable -> Le3
            boolean r5 = r5.W()     // Catch: java.lang.Throwable -> Le3
        Lfb:
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Le3
            int r8 = r4.length     // Catch: java.lang.Throwable -> Le3
            r9 = r3
        L101:
            if (r9 >= r8) goto L11a
            r10 = r4[r9]     // Catch: java.lang.Throwable -> Le3
            java.lang.String r10 = a(r10, r14, r6)     // Catch: java.lang.Throwable -> Le3
            com.tkay.basead.g.e r11 = new com.tkay.basead.g.e     // Catch: java.lang.Throwable -> Le3
            r11.<init>(r12, r10, r13, r1)     // Catch: java.lang.Throwable -> Le3
            r11.a(r5)     // Catch: java.lang.Throwable -> Le3
            r11.a(r3, r2)     // Catch: java.lang.Throwable -> Le3
            int r9 = r9 + 1
            goto L101
        L117:
            r4.printStackTrace()
        L11a:
            switch(r12) {
                case 1: goto L1ce;
                case 2: goto L1c9;
                case 3: goto L1c4;
                case 4: goto L1bf;
                case 5: goto L1ba;
                case 6: goto L1b5;
                case 7: goto L1b0;
                case 8: goto L1ab;
                case 9: goto L1a6;
                case 10: goto L1a1;
                case 11: goto L19c;
                case 12: goto L197;
                case 13: goto L192;
                case 14: goto L18d;
                case 15: goto L188;
                case 16: goto L183;
                case 17: goto L17e;
                case 18: goto L179;
                case 19: goto L173;
                case 20: goto L16d;
                case 21: goto L167;
                case 22: goto L11d;
                case 23: goto L161;
                case 24: goto L15b;
                case 25: goto L155;
                case 26: goto L14f;
                case 27: goto L149;
                case 28: goto L143;
                case 29: goto L13d;
                case 30: goto L137;
                case 31: goto L131;
                case 32: goto L11d;
                case 33: goto L12b;
                case 34: goto L125;
                case 35: goto L11f;
                default: goto L11d;
            }
        L11d:
            goto L1d3
        L11f:
            java.lang.String r0 = r0.ap()
            goto L1d5
        L125:
            java.lang.String r0 = r0.an()
            goto L1d5
        L12b:
            java.lang.String r0 = r0.am()
            goto L1d5
        L131:
            java.lang.String r0 = r0.al()
            goto L1d5
        L137:
            java.lang.String r0 = r0.ak()
            goto L1d5
        L13d:
            java.lang.String r0 = r0.ai()
            goto L1d5
        L143:
            java.lang.String r0 = r0.aj()
            goto L1d5
        L149:
            java.lang.String r0 = r0.ah()
            goto L1d5
        L14f:
            java.lang.String r0 = r0.ag()
            goto L1d5
        L155:
            java.lang.String r0 = r0.af()
            goto L1d5
        L15b:
            java.lang.String r0 = r0.ae()
            goto L1d5
        L161:
            java.lang.String r0 = r0.ad()
            goto L1d5
        L167:
            java.lang.String r0 = r0.P()
            goto L1d5
        L16d:
            java.lang.String r0 = r0.ac()
            goto L1d5
        L173:
            java.lang.String r0 = r0.O()
            goto L1d5
        L179:
            java.lang.String r0 = r0.N()
            goto L1d5
        L17e:
            java.lang.String r0 = r0.ab()
            goto L1d5
        L183:
            java.lang.String r0 = r0.aa()
            goto L1d5
        L188:
            java.lang.String r0 = r0.Z()
            goto L1d5
        L18d:
            java.lang.String r0 = r0.I()
            goto L1d5
        L192:
            java.lang.String r0 = r0.K()
            goto L1d5
        L197:
            java.lang.String r0 = r0.J()
            goto L1d5
        L19c:
            java.lang.String r0 = r0.H()
            goto L1d5
        L1a1:
            java.lang.String r0 = r0.z()
            goto L1d5
        L1a6:
            java.lang.String r0 = r0.B()
            goto L1d5
        L1ab:
            java.lang.String r0 = r0.A()
            goto L1d5
        L1b0:
            java.lang.String r0 = r0.M()
            goto L1d5
        L1b5:
            java.lang.String r0 = r0.L()
            goto L1d5
        L1ba:
            java.lang.String r0 = r0.G()
            goto L1d5
        L1bf:
            java.lang.String r0 = r0.F()
            goto L1d5
        L1c4:
            java.lang.String r0 = r0.E()
            goto L1d5
        L1c9:
            java.lang.String r0 = r0.D()
            goto L1d5
        L1ce:
            java.lang.String r0 = r0.C()
            goto L1d5
        L1d3:
            java.lang.String r0 = ""
        L1d5:
            boolean r4 = a(r0)
            if (r4 != 0) goto L1e8
            com.tkay.basead.g.f r4 = new com.tkay.basead.g.f
            r4.<init>(r12, r13, r0, r1)
            java.lang.String r12 = r14.b
            r4.b(r12)
            r4.a(r3, r2)
        L1e8:
            return
    }

    private static void a(int r9, com.tkay.core.common.f.z r10, com.tkay.core.common.f.ab r11, java.util.Map<java.lang.String, java.lang.Object> r12, com.tkay.basead.c.i r13) {
            r0 = 0
            switch(r9) {
                case 1: goto Lce;
                case 2: goto Lc9;
                case 3: goto Lc4;
                case 4: goto Lbf;
                case 5: goto Lba;
                case 6: goto Lb5;
                case 7: goto Lb0;
                case 8: goto Lab;
                case 9: goto La6;
                case 10: goto La1;
                case 11: goto L9c;
                case 12: goto L97;
                case 13: goto L92;
                case 14: goto L8d;
                case 15: goto L88;
                case 16: goto L83;
                case 17: goto L7e;
                case 18: goto L78;
                case 19: goto L72;
                case 20: goto L6c;
                case 21: goto L66;
                case 22: goto L4;
                case 23: goto L60;
                case 24: goto L5a;
                case 25: goto L54;
                case 26: goto L4e;
                case 27: goto L48;
                case 28: goto L42;
                case 29: goto L3c;
                case 30: goto L36;
                case 31: goto L30;
                case 32: goto L18;
                case 33: goto L12;
                case 34: goto Lc;
                case 35: goto L6;
                default: goto L4;
            }
        L4:
            goto Ld5
        L6:
            java.lang.String[] r11 = r11.ao()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        Lc:
            java.lang.String[] r11 = r11.b()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        L12:
            java.lang.String[] r11 = r11.a()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        L18:
            com.tkay.basead.c.j r1 = r13.h     // Catch: java.lang.Throwable -> Ld3
            java.util.Map r11 = r11.y()     // Catch: java.lang.Throwable -> Ld3
            if (r1 == 0) goto Ld5
            if (r11 == 0) goto Ld5
            int r1 = r1.i     // Catch: java.lang.Throwable -> Ld3
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> Ld3
            java.lang.Object r11 = r11.get(r1)     // Catch: java.lang.Throwable -> Ld3
            java.lang.String[] r11 = (java.lang.String[]) r11     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        L30:
            java.lang.String[] r11 = r11.x()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        L36:
            java.lang.String[] r11 = r11.w()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        L3c:
            java.lang.String[] r11 = r11.u()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        L42:
            java.lang.String[] r11 = r11.v()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        L48:
            java.lang.String[] r11 = r11.Y()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        L4e:
            java.lang.String[] r11 = r11.X()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        L54:
            java.lang.String[] r11 = r11.W()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        L5a:
            java.lang.String[] r11 = r11.V()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        L60:
            java.lang.String[] r11 = r11.U()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        L66:
            java.lang.String[] r11 = r11.t()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        L6c:
            java.lang.String[] r11 = r11.T()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        L72:
            java.lang.String[] r11 = r11.s()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        L78:
            java.lang.String[] r11 = r11.r()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        L7e:
            java.lang.String[] r11 = r11.S()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        L83:
            java.lang.String[] r11 = r11.R()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        L88:
            java.lang.String[] r11 = r11.Q()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        L8d:
            java.lang.String[] r11 = r11.m()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        L92:
            java.lang.String[] r11 = r11.o()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        L97:
            java.lang.String[] r11 = r11.n()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        L9c:
            java.lang.String[] r11 = r11.l()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        La1:
            java.lang.String[] r11 = r11.d()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        La6:
            java.lang.String[] r11 = r11.f()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        Lab:
            java.lang.String[] r11 = r11.e()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        Lb0:
            java.lang.String[] r11 = r11.q()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        Lb5:
            java.lang.String[] r11 = r11.p()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        Lba:
            java.lang.String[] r11 = r11.k()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        Lbf:
            java.lang.String[] r11 = r11.j()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        Lc4:
            java.lang.String[] r11 = r11.i()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        Lc9:
            java.lang.String[] r11 = r11.h()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        Lce:
            java.lang.String[] r11 = r11.g()     // Catch: java.lang.Throwable -> Ld3
            goto Ld6
        Ld3:
            r9 = move-exception
            goto L108
        Ld5:
            r11 = r0
        Ld6:
            if (r11 == 0) goto L10b
            r1 = 8
            r2 = 0
            if (r9 == r1) goto Le4
            r1 = 9
            if (r9 != r1) goto Le2
            goto Le4
        Le2:
            r1 = r2
            goto Lec
        Le4:
            com.tkay.core.common.f.j r1 = r10.k()     // Catch: java.lang.Throwable -> Ld3
            boolean r1 = r1.W()     // Catch: java.lang.Throwable -> Ld3
        Lec:
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Ld3
            int r5 = r11.length     // Catch: java.lang.Throwable -> Ld3
            r6 = r2
        Lf2:
            if (r6 >= r5) goto L10b
            r7 = r11[r6]     // Catch: java.lang.Throwable -> Ld3
            java.lang.String r7 = a(r7, r13, r3)     // Catch: java.lang.Throwable -> Ld3
            com.tkay.basead.g.e r8 = new com.tkay.basead.g.e     // Catch: java.lang.Throwable -> Ld3
            r8.<init>(r9, r7, r10, r12)     // Catch: java.lang.Throwable -> Ld3
            r8.a(r1)     // Catch: java.lang.Throwable -> Ld3
            r8.a(r2, r0)     // Catch: java.lang.Throwable -> Ld3
            int r6 = r6 + 1
            goto Lf2
        L108:
            r9.printStackTrace()
        L10b:
            return
    }

    private static boolean a(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 1
            if (r0 == 0) goto L8
            return r1
        L8:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L15
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L15
            int r2 = r0.length()     // Catch: java.lang.Throwable -> L15
            if (r2 <= 0) goto L15
            r2 = 0
            return r2
        L15:
            return r1
    }
}
