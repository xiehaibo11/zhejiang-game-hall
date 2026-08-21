package com.mbridge.msdk.video.module.b;

public final class b {
    public static java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.String>> a;


    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.video.module.b.b.a = r0
            return
    }

    public static void a(android.content.Context r7, com.mbridge.msdk.foundation.entity.CampaignEx r8) {
            if (r8 == 0) goto L25
            com.mbridge.msdk.foundation.entity.l r0 = r8.getNativeVideoTracking()
            if (r0 == 0) goto L25
            com.mbridge.msdk.foundation.entity.l r0 = r8.getNativeVideoTracking()
            java.lang.String[] r0 = r0.l()
            if (r0 == 0) goto L25
            r5 = 0
            r6 = 0
            java.lang.String r3 = r8.getCampaignUnitId()
            com.mbridge.msdk.foundation.entity.l r0 = r8.getNativeVideoTracking()
            java.lang.String[] r4 = r0.l()
            r1 = r7
            r2 = r8
            com.mbridge.msdk.click.b.a(r1, r2, r3, r4, r5, r6)
        L25:
            return
    }

    public static void a(android.content.Context r8, com.mbridge.msdk.foundation.entity.CampaignEx r9, int r10, int r11) {
            com.mbridge.msdk.foundation.entity.l r0 = r9.getNativeVideoTracking()     // Catch: java.lang.Throwable -> La9
            java.lang.String[] r0 = r0.m()     // Catch: java.lang.Throwable -> La9
            if (r9 == 0) goto Lb0
            com.mbridge.msdk.foundation.entity.l r1 = r9.getNativeVideoTracking()     // Catch: java.lang.Throwable -> La9
            if (r1 == 0) goto Lb0
            if (r0 == 0) goto Lb0
            int r1 = r0.length     // Catch: java.lang.Throwable -> La9
            java.lang.String[] r5 = new java.lang.String[r1]     // Catch: java.lang.Throwable -> La9
            r1 = 0
        L16:
            int r2 = r0.length     // Catch: java.lang.Throwable -> La9
            if (r1 >= r2) goto L9d
            r2 = r0[r1]     // Catch: java.lang.Throwable -> La9
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> La9
            r3.<init>()     // Catch: java.lang.Throwable -> La9
            java.lang.String r4 = "endscreen_type"
            r3.put(r4, r10)     // Catch: java.lang.Throwable -> La9
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> La9
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> La9
            if (r4 != 0) goto L33
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.t.a(r3)     // Catch: java.lang.Throwable -> La9
        L33:
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> La9
            if (r4 != 0) goto L51
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La9
            r4.<init>()     // Catch: java.lang.Throwable -> La9
            r4.append(r2)     // Catch: java.lang.Throwable -> La9
            java.lang.String r2 = "&value="
            r4.append(r2)     // Catch: java.lang.Throwable -> La9
            java.lang.String r2 = java.net.URLEncoder.encode(r3)     // Catch: java.lang.Throwable -> La9
            r4.append(r2)     // Catch: java.lang.Throwable -> La9
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> La9
        L51:
            int r3 = r9.getSpareOfferFlag()     // Catch: java.lang.Throwable -> La9
            java.lang.String r4 = "&tmorl="
            r6 = 1
            if (r3 != r6) goto L79
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La9
            r3.<init>()     // Catch: java.lang.Throwable -> La9
            r3.append(r2)     // Catch: java.lang.Throwable -> La9
            java.lang.String r2 = "&to=1&cbt="
            r3.append(r2)     // Catch: java.lang.Throwable -> La9
            int r2 = r9.getCbt()     // Catch: java.lang.Throwable -> La9
            r3.append(r2)     // Catch: java.lang.Throwable -> La9
            r3.append(r4)     // Catch: java.lang.Throwable -> La9
            r3.append(r11)     // Catch: java.lang.Throwable -> La9
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> La9
            goto L97
        L79:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La9
            r3.<init>()     // Catch: java.lang.Throwable -> La9
            r3.append(r2)     // Catch: java.lang.Throwable -> La9
            java.lang.String r2 = "&to=0&cbt="
            r3.append(r2)     // Catch: java.lang.Throwable -> La9
            int r2 = r9.getCbt()     // Catch: java.lang.Throwable -> La9
            r3.append(r2)     // Catch: java.lang.Throwable -> La9
            r3.append(r4)     // Catch: java.lang.Throwable -> La9
            r3.append(r11)     // Catch: java.lang.Throwable -> La9
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> La9
        L97:
            r5[r1] = r2     // Catch: java.lang.Throwable -> La9
            int r1 = r1 + 1
            goto L16
        L9d:
            r6 = 0
            r7 = 1
            java.lang.String r4 = r9.getCampaignUnitId()     // Catch: java.lang.Throwable -> La9
            r2 = r8
            r3 = r9
            com.mbridge.msdk.click.b.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> La9
            goto Lb0
        La9:
            java.lang.String r8 = ""
            java.lang.String r9 = "reportEndcardshowData error"
            com.mbridge.msdk.foundation.tools.z.d(r8, r9)
        Lb0:
            return
    }

    public static void a(android.content.Context r13, com.mbridge.msdk.foundation.entity.CampaignEx r14, int r15, int r16, int r17) {
            r0 = r17
            if (r16 == 0) goto Lc7
            if (r13 == 0) goto Lc7
            if (r14 != 0) goto La
            goto Lc7
        La:
            com.mbridge.msdk.foundation.entity.l r1 = r14.getNativeVideoTracking()     // Catch: java.lang.Throwable -> Lc0
            java.util.List r7 = r1.e()     // Catch: java.lang.Throwable -> Lc0
            r8 = 1
            int r1 = r15 + 1
            int r1 = r1 * 100
            int r9 = r1 / r16
            if (r7 == 0) goto Lc7
            r10 = 0
            r1 = r10
        L1d:
            int r2 = r7.size()     // Catch: java.lang.Throwable -> Lc0
            if (r1 >= r2) goto Lc7
            java.lang.Object r2 = r7.get(r1)     // Catch: java.lang.Throwable -> Lc0
            java.util.Map r2 = (java.util.Map) r2     // Catch: java.lang.Throwable -> Lc0
            if (r2 == 0) goto Lbd
            int r3 = r2.size()     // Catch: java.lang.Throwable -> Lc0
            if (r3 <= 0) goto Lbd
            java.util.Set r2 = r2.entrySet()     // Catch: java.lang.Throwable -> Lc0
            java.util.Iterator r11 = r2.iterator()     // Catch: java.lang.Throwable -> Lc0
            r12 = r1
        L3a:
            boolean r1 = r11.hasNext()     // Catch: java.lang.Throwable -> Lc0
            if (r1 == 0) goto Lbc
            java.lang.Object r1 = r11.next()     // Catch: java.lang.Throwable -> Lc0
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Throwable -> Lc0
            java.lang.Object r2 = r1.getKey()     // Catch: java.lang.Throwable -> Lc0
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.lang.Throwable -> Lc0
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> Lc0
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> Lc0
            int r3 = r14.getSpareOfferFlag()     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r4 = "&tmorl="
            if (r3 != r8) goto L7d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc0
            r3.<init>()     // Catch: java.lang.Throwable -> Lc0
            r3.append(r1)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r1 = "&to=1&cbt="
            r3.append(r1)     // Catch: java.lang.Throwable -> Lc0
            int r1 = r14.getCbt()     // Catch: java.lang.Throwable -> Lc0
            r3.append(r1)     // Catch: java.lang.Throwable -> Lc0
            r3.append(r4)     // Catch: java.lang.Throwable -> Lc0
            r3.append(r0)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> Lc0
            goto L9b
        L7d:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc0
            r3.<init>()     // Catch: java.lang.Throwable -> Lc0
            r3.append(r1)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r1 = "&to=0&cbt="
            r3.append(r1)     // Catch: java.lang.Throwable -> Lc0
            int r1 = r14.getCbt()     // Catch: java.lang.Throwable -> Lc0
            r3.append(r1)     // Catch: java.lang.Throwable -> Lc0
            r3.append(r4)     // Catch: java.lang.Throwable -> Lc0
            r3.append(r0)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> Lc0
        L9b:
            if (r2 > r9) goto L3a
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Lc0
            if (r2 != 0) goto L3a
            java.lang.String[] r4 = new java.lang.String[r8]     // Catch: java.lang.Throwable -> Lc0
            r4[r10] = r1     // Catch: java.lang.Throwable -> Lc0
            r5 = 0
            r6 = 1
            java.lang.String r3 = r14.getCampaignUnitId()     // Catch: java.lang.Throwable -> Lc0
            r1 = r13
            r2 = r14
            com.mbridge.msdk.click.b.a(r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> Lc0
            r11.remove()     // Catch: java.lang.Throwable -> Lc0
            r7.remove(r12)     // Catch: java.lang.Throwable -> Lc0
            int r12 = r12 + (-1)
            goto L3a
        Lbc:
            r1 = r12
        Lbd:
            int r1 = r1 + r8
            goto L1d
        Lc0:
            java.lang.String r0 = ""
            java.lang.String r1 = "reportPlayPercentageData error"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        Lc7:
            return
    }

    public static void a(com.mbridge.msdk.foundation.entity.CampaignEx r8, com.mbridge.msdk.videocommon.b.d r9, java.lang.String r10, java.lang.String r11, java.lang.String r12) {
            java.lang.String r0 = "&"
            java.lang.String r1 = "VideoViewReport"
            java.lang.String r2 = "?"
            java.lang.String r3 = ""
            if (r8 == 0) goto Lf0
            if (r9 == 0) goto Lf0
            com.mbridge.msdk.video.module.c.a r4 = new com.mbridge.msdk.video.module.c.a     // Catch: java.lang.Throwable -> Le8
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Le8
            android.content.Context r5 = r5.j()     // Catch: java.lang.Throwable -> Le8
            r4.<init>(r5)     // Catch: java.lang.Throwable -> Le8
            com.mbridge.msdk.foundation.same.net.g.d r5 = new com.mbridge.msdk.foundation.same.net.g.d     // Catch: java.lang.Throwable -> Le8
            r5.<init>()     // Catch: java.lang.Throwable -> Le8
            java.lang.String r6 = "user_id"
            java.lang.String r11 = com.mbridge.msdk.foundation.tools.t.a(r11)     // Catch: java.lang.Throwable -> Le8
            r5.a(r6, r11)     // Catch: java.lang.Throwable -> Le8
            java.lang.String r11 = "cb_type"
            java.lang.String r6 = "1"
            r5.a(r11, r6)     // Catch: java.lang.Throwable -> Le8
            java.lang.String r11 = "reward_name"
            java.lang.String r6 = r9.a()     // Catch: java.lang.Throwable -> Le8
            r5.a(r11, r6)     // Catch: java.lang.Throwable -> Le8
            java.lang.String r11 = "reward_amount"
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le8
            r6.<init>()     // Catch: java.lang.Throwable -> Le8
            int r9 = r9.b()     // Catch: java.lang.Throwable -> Le8
            r6.append(r9)     // Catch: java.lang.Throwable -> Le8
            r6.append(r3)     // Catch: java.lang.Throwable -> Le8
            java.lang.String r9 = r6.toString()     // Catch: java.lang.Throwable -> Le8
            r5.a(r11, r9)     // Catch: java.lang.Throwable -> Le8
            java.lang.String r9 = "unit_id"
            r5.a(r9, r10)     // Catch: java.lang.Throwable -> Le8
            java.lang.String r9 = "click_id"
            java.lang.String r10 = r8.getRequestIdNotice()     // Catch: java.lang.Throwable -> Le8
            r5.a(r9, r10)     // Catch: java.lang.Throwable -> Le8
            boolean r9 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> Le8
            if (r9 != 0) goto L68
            java.lang.String r9 = "extra"
            r5.a(r9, r12)     // Catch: java.lang.Throwable -> Le8
        L68:
            r4.addExtraParams(r3, r5)     // Catch: java.lang.Throwable -> Le8
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le8
            r9.<init>()     // Catch: java.lang.Throwable -> Le8
            java.lang.String r10 = r8.getHost()     // Catch: java.lang.Throwable -> Le8
            r9.append(r10)     // Catch: java.lang.Throwable -> Le8
            java.lang.String r10 = "/addReward?"
            r9.append(r10)     // Catch: java.lang.Throwable -> Le8
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> Le8
            java.lang.String r10 = r5.a()     // Catch: java.lang.Throwable -> Le8
            java.lang.String r10 = r10.trim()     // Catch: java.lang.Throwable -> Le8
            boolean r11 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> Le8
            if (r11 != 0) goto Lc0
            boolean r11 = r9.endsWith(r2)     // Catch: java.lang.Throwable -> Le8
            if (r11 != 0) goto Lb1
            boolean r11 = r9.endsWith(r0)     // Catch: java.lang.Throwable -> Le8
            if (r11 != 0) goto Lb1
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le8
            r11.<init>()     // Catch: java.lang.Throwable -> Le8
            r11.append(r9)     // Catch: java.lang.Throwable -> Le8
            boolean r9 = r9.contains(r2)     // Catch: java.lang.Throwable -> Le8
            if (r9 == 0) goto La9
            goto Laa
        La9:
            r0 = r2
        Laa:
            r11.append(r0)     // Catch: java.lang.Throwable -> Le8
            java.lang.String r9 = r11.toString()     // Catch: java.lang.Throwable -> Le8
        Lb1:
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le8
            r11.<init>()     // Catch: java.lang.Throwable -> Le8
            r11.append(r9)     // Catch: java.lang.Throwable -> Le8
            r11.append(r10)     // Catch: java.lang.Throwable -> Le8
            java.lang.String r3 = r11.toString()     // Catch: java.lang.Throwable -> Le8
        Lc0:
            r5 = r3
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le8
            r9.<init>()     // Catch: java.lang.Throwable -> Le8
            java.lang.String r10 = "rewardUrl:"
            r9.append(r10)     // Catch: java.lang.Throwable -> Le8
            r9.append(r5)     // Catch: java.lang.Throwable -> Le8
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> Le8
            com.mbridge.msdk.foundation.tools.z.d(r1, r9)     // Catch: java.lang.Throwable -> Le8
            com.mbridge.msdk.foundation.controller.a r9 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Le8
            android.content.Context r2 = r9.j()     // Catch: java.lang.Throwable -> Le8
            java.lang.String r4 = r8.getCampaignUnitId()     // Catch: java.lang.Throwable -> Le8
            r6 = 0
            r7 = 0
            r3 = r8
            com.mbridge.msdk.click.b.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> Le8
            goto Lf0
        Le8:
            r8 = move-exception
            java.lang.String r9 = r8.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r1, r9, r8)
        Lf0:
            return
    }

    public static void a(com.mbridge.msdk.foundation.entity.CampaignEx r9, java.lang.String r10) {
            if (r9 == 0) goto L43
            java.util.List r0 = r9.getAdUrlList()     // Catch: java.lang.Exception -> L3f
            if (r0 == 0) goto L43
            java.util.List r0 = r9.getAdUrlList()     // Catch: java.lang.Exception -> L3f
            int r0 = r0.size()     // Catch: java.lang.Exception -> L3f
            if (r0 <= 0) goto L43
            r0 = 0
            r7 = 0
            java.util.List r1 = r9.getAdUrlList()     // Catch: java.lang.Exception -> L3f
            java.util.Iterator r8 = r1.iterator()     // Catch: java.lang.Exception -> L3f
        L1c:
            boolean r1 = r8.hasNext()     // Catch: java.lang.Exception -> L3f
            if (r1 == 0) goto L43
            java.lang.Object r1 = r8.next()     // Catch: java.lang.Exception -> L3f
            r4 = r1
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L3f
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L3f
            if (r1 != 0) goto L1c
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L3f
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> L3f
            r2 = r9
            r3 = r10
            r5 = r0
            r6 = r7
            com.mbridge.msdk.click.b.a(r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L3f
            goto L1c
        L3f:
            r9 = move-exception
            r9.printStackTrace()
        L43:
            return
    }

    public static void a(com.mbridge.msdk.foundation.entity.CampaignEx r8, java.util.Map<java.lang.Integer, java.lang.String> r9, java.lang.String r10, int r11) {
            if (r8 == 0) goto L50
            if (r9 == 0) goto L50
            int r0 = r9.size()     // Catch: java.lang.Exception -> L4c
            if (r0 <= 0) goto L50
            java.util.Set r9 = r9.entrySet()     // Catch: java.lang.Exception -> L4c
            java.util.Iterator r9 = r9.iterator()     // Catch: java.lang.Exception -> L4c
            r6 = 0
            r7 = 0
        L14:
            boolean r0 = r9.hasNext()     // Catch: java.lang.Exception -> L4c
            if (r0 == 0) goto L50
            java.lang.Object r0 = r9.next()     // Catch: java.lang.Exception -> L4c
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0     // Catch: java.lang.Exception -> L4c
            java.lang.Object r1 = r0.getKey()     // Catch: java.lang.Exception -> L4c
            java.lang.Integer r1 = (java.lang.Integer) r1     // Catch: java.lang.Exception -> L4c
            java.lang.Object r0 = r0.getValue()     // Catch: java.lang.Exception -> L4c
            r3 = r0
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L4c
            int r0 = r1.intValue()     // Catch: java.lang.Exception -> L4c
            if (r11 != r0) goto L14
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L4c
            if (r0 != 0) goto L14
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L4c
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> L4c
            r1 = r8
            r2 = r10
            r4 = r6
            r5 = r7
            com.mbridge.msdk.click.b.a(r0, r1, r2, r3, r4, r5)     // Catch: java.lang.Exception -> L4c
            r9.remove()     // Catch: java.lang.Exception -> L4c
            goto L14
        L4c:
            r8 = move-exception
            r8.printStackTrace()
        L50:
            return
    }

    public static void a(java.lang.String r1) {
            java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.String>> r0 = com.mbridge.msdk.video.module.b.b.a
            r0.remove(r1)
            return
    }

    public static void a(java.lang.String r3, java.lang.String r4) {
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L50
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> L50
            if (r0 == 0) goto L5d
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L50
            if (r0 != 0) goto L5d
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L50
            if (r0 != 0) goto L5d
            com.mbridge.msdk.foundation.same.report.d.a r0 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L50
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> L50
            r0.<init>(r1)     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L50
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.foundation.same.net.g.d r3 = com.mbridge.msdk.foundation.same.report.e.a(r3, r1, r4)     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.videocommon.d.b r4 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.videocommon.d.a r4 = r4.b()     // Catch: java.lang.Exception -> L50
            java.lang.String r4 = r4.b()     // Catch: java.lang.Exception -> L50
            java.lang.String r1 = "r_stid"
            r3.a(r1, r4)     // Catch: java.lang.Exception -> L50
            r4 = 0
            com.mbridge.msdk.foundation.same.net.f.d r1 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L50
            java.lang.String r1 = r1.a     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.video.module.b.b$1 r2 = new com.mbridge.msdk.video.module.b.b$1     // Catch: java.lang.Exception -> L50
            r2.<init>()     // Catch: java.lang.Exception -> L50
            r0.post(r4, r1, r3, r2)     // Catch: java.lang.Exception -> L50
            goto L5d
        L50:
            r3 = move-exception
            r3.printStackTrace()
            java.lang.String r3 = r3.getMessage()
            java.lang.String r4 = "VideoViewReport"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L5d:
            return
    }

    public static void b(android.content.Context r7, com.mbridge.msdk.foundation.entity.CampaignEx r8) {
            if (r8 == 0) goto L25
            com.mbridge.msdk.foundation.entity.l r0 = r8.getNativeVideoTracking()
            if (r0 == 0) goto L25
            com.mbridge.msdk.foundation.entity.l r0 = r8.getNativeVideoTracking()
            java.lang.String[] r0 = r0.f()
            if (r0 == 0) goto L25
            java.lang.String r3 = r8.getCampaignUnitId()
            com.mbridge.msdk.foundation.entity.l r0 = r8.getNativeVideoTracking()
            java.lang.String[] r4 = r0.f()
            r5 = 0
            r6 = 0
            r1 = r7
            r2 = r8
            com.mbridge.msdk.click.b.a(r1, r2, r3, r4, r5, r6)
        L25:
            return
    }

    public static void c(android.content.Context r7, com.mbridge.msdk.foundation.entity.CampaignEx r8) {
            if (r8 == 0) goto L25
            com.mbridge.msdk.foundation.entity.l r0 = r8.getNativeVideoTracking()
            if (r0 == 0) goto L25
            com.mbridge.msdk.foundation.entity.l r0 = r8.getNativeVideoTracking()
            java.lang.String[] r0 = r0.g()
            if (r0 == 0) goto L25
            java.lang.String r3 = r8.getCampaignUnitId()
            com.mbridge.msdk.foundation.entity.l r0 = r8.getNativeVideoTracking()
            java.lang.String[] r4 = r0.g()
            r5 = 0
            r6 = 0
            r1 = r7
            r2 = r8
            com.mbridge.msdk.click.b.a(r1, r2, r3, r4, r5, r6)
        L25:
            return
    }

    public static void d(android.content.Context r8, com.mbridge.msdk.foundation.entity.CampaignEx r9) {
            if (r9 == 0) goto L4e
            com.mbridge.msdk.foundation.entity.l r0 = r9.getNativeVideoTracking()
            if (r0 == 0) goto L4e
            com.mbridge.msdk.foundation.entity.l r0 = r9.getNativeVideoTracking()
            java.lang.String[] r0 = r0.h()
            if (r0 == 0) goto L4e
            java.lang.String r0 = r9.getCampaignUnitId()
            java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.String>> r1 = com.mbridge.msdk.video.module.b.b.a
            java.lang.Object r1 = r1.get(r0)
            java.util.ArrayList r1 = (java.util.ArrayList) r1
            if (r1 != 0) goto L2a
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.String>> r2 = com.mbridge.msdk.video.module.b.b.a
            r2.put(r0, r1)
        L2a:
            java.lang.String r0 = r9.getId()
            boolean r0 = r1.contains(r0)
            if (r0 != 0) goto L4e
            r6 = 0
            r7 = 0
            java.lang.String r4 = r9.getCampaignUnitId()
            com.mbridge.msdk.foundation.entity.l r0 = r9.getNativeVideoTracking()
            java.lang.String[] r5 = r0.h()
            r2 = r8
            r3 = r9
            com.mbridge.msdk.click.b.a(r2, r3, r4, r5, r6, r7)
            java.lang.String r8 = r9.getId()
            r1.add(r8)
        L4e:
            return
    }

    public static void e(android.content.Context r7, com.mbridge.msdk.foundation.entity.CampaignEx r8) {
            if (r8 == 0) goto L25
            com.mbridge.msdk.foundation.entity.l r0 = r8.getNativeVideoTracking()
            if (r0 == 0) goto L25
            com.mbridge.msdk.foundation.entity.l r0 = r8.getNativeVideoTracking()
            java.lang.String[] r0 = r0.n()
            if (r0 == 0) goto L25
            java.lang.String r3 = r8.getCampaignUnitId()
            com.mbridge.msdk.foundation.entity.l r0 = r8.getNativeVideoTracking()
            java.lang.String[] r4 = r0.n()
            r5 = 0
            r6 = 0
            r1 = r7
            r2 = r8
            com.mbridge.msdk.click.b.a(r1, r2, r3, r4, r5, r6)
        L25:
            return
    }

    public static void f(android.content.Context r7, com.mbridge.msdk.foundation.entity.CampaignEx r8) {
            if (r8 == 0) goto L25
            com.mbridge.msdk.foundation.entity.l r0 = r8.getNativeVideoTracking()
            if (r0 == 0) goto L25
            com.mbridge.msdk.foundation.entity.l r0 = r8.getNativeVideoTracking()
            java.lang.String[] r0 = r0.i()
            if (r0 == 0) goto L25
            java.lang.String r3 = r8.getCampaignUnitId()
            com.mbridge.msdk.foundation.entity.l r0 = r8.getNativeVideoTracking()
            java.lang.String[] r4 = r0.i()
            r5 = 0
            r6 = 0
            r1 = r7
            r2 = r8
            com.mbridge.msdk.click.b.a(r1, r2, r3, r4, r5, r6)
        L25:
            return
    }
}
