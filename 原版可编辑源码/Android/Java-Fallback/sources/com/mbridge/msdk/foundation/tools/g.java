package com.mbridge.msdk.foundation.tools;

public class g {
    public static boolean a;




    static {
            return
    }

    public static void a(android.content.Context r10, com.mbridge.msdk.foundation.entity.CampaignEx r11, java.lang.String r12, boolean r13) {
            if (r11 == 0) goto L11
            java.lang.String r0 = r11.getAkdlui()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L11
            java.lang.String r0 = r11.getAkdlui()
            goto L15
        L11:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r12)
        L15:
            r1 = 1
            boolean[] r1 = new boolean[r1]     // Catch: java.lang.Throwable -> L31
            java.lang.String r2 = "/apk"
            java.io.File r7 = com.mbridge.msdk.foundation.tools.x.a(r2, r10, r1)     // Catch: java.lang.Throwable -> L31
            java.lang.String r8 = com.mbridge.msdk.click.c.a(r12)     // Catch: java.lang.Throwable -> L31
            com.mbridge.msdk.foundation.tools.g$3 r9 = new com.mbridge.msdk.foundation.tools.g$3     // Catch: java.lang.Throwable -> L31
            r1 = r9
            r2 = r13
            r3 = r11
            r4 = r10
            r5 = r0
            r6 = r12
            r1.<init>(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L31
            com.mbridge.msdk.optimize.a.a(r7, r8, r12, r9)     // Catch: java.lang.Throwable -> L31
            goto L3c
        L31:
            com.mbridge.msdk.foundation.controller.a r10 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r10 = r10.j()
            com.mbridge.msdk.click.c.a(r10, r12, r0)
        L3c:
            return
    }

    private static void a(com.mbridge.msdk.foundation.entity.CampaignEx r5, java.lang.String r6, boolean r7) {
            if (r5 == 0) goto L1b
            java.lang.String r0 = r5.getAkdlui()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1b
            java.lang.String r0 = r5.getAkdlui()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L1c
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r6)
            goto L1c
        L1b:
            r0 = r6
        L1c:
            r1 = 2
            a(r6, r1, r5)     // Catch: java.lang.Throwable -> L88
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L88
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> L88
            boolean r2 = com.mbridge.msdk.foundation.tools.aj.b(r1)     // Catch: java.lang.Throwable -> L88
            if (r2 != 0) goto L32
            com.mbridge.msdk.click.c.a(r1, r6, r0)     // Catch: java.lang.Throwable -> L88
            return
        L32:
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L88
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> L88
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L88
            r2.<init>()     // Catch: java.lang.Throwable -> L88
            r2.append(r0)     // Catch: java.lang.Throwable -> L88
            java.lang.String r3 = "isDowning"
            r2.append(r3)     // Catch: java.lang.Throwable -> L88
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L88
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L88
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L88
            com.mbridge.msdk.foundation.tools.ag.a(r1, r2, r3)     // Catch: java.lang.Throwable -> L88
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L88
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> L88
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L88
            r2.<init>()     // Catch: java.lang.Throwable -> L88
            r2.append(r0)     // Catch: java.lang.Throwable -> L88
            java.lang.String r0 = "process"
            r2.append(r0)     // Catch: java.lang.Throwable -> L88
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L88
            int r2 = android.os.Process.myPid()     // Catch: java.lang.Throwable -> L88
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L88
            com.mbridge.msdk.foundation.tools.ag.a(r1, r0, r2)     // Catch: java.lang.Throwable -> L88
            java.lang.Thread r0 = new java.lang.Thread     // Catch: java.lang.Throwable -> L88
            com.mbridge.msdk.foundation.tools.g$2 r1 = new com.mbridge.msdk.foundation.tools.g$2     // Catch: java.lang.Throwable -> L88
            r1.<init>(r5, r6, r7)     // Catch: java.lang.Throwable -> L88
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L88
            r0.start()     // Catch: java.lang.Throwable -> L88
            goto L90
        L88:
            r5 = move-exception
            boolean r6 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r6 == 0) goto L90
            r5.printStackTrace()
        L90:
            return
    }

    public static void a(java.lang.String r6, int r7, com.mbridge.msdk.foundation.entity.CampaignEx r8) {
            java.lang.String r0 = ""
            if (r8 == 0) goto L13
            java.lang.String r1 = r8.getAkdlui()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L13
            java.lang.String r6 = r8.getAkdlui()
            goto L1f
        L13:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L1e
            java.lang.String r6 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r6)
            goto L1f
        L1e:
            r6 = r0
        L1f:
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r6)
            java.lang.String r3 = "downloadType"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)
            com.mbridge.msdk.foundation.tools.ag.a(r1, r2, r7)
            java.lang.String r7 = "cid"
            java.lang.String r1 = "rid_n"
            java.lang.String r2 = "rid"
            java.lang.String r3 = "linkType"
            if (r8 == 0) goto Lce
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r4 = r4.j()
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r6)
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            int r5 = r8.getLinkType()
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            com.mbridge.msdk.foundation.tools.ag.a(r4, r3, r5)
            java.lang.String r3 = r8.getRequestId()
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r4 = r4.j()
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r6)
            r5.append(r2)
            java.lang.String r2 = r5.toString()
            boolean r5 = android.text.TextUtils.isEmpty(r3)
            if (r5 == 0) goto L8d
            goto L8e
        L8d:
            r0 = r3
        L8e:
            com.mbridge.msdk.foundation.tools.ag.a(r4, r2, r0)
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r6)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = r8.getRequestIdNotice()
            com.mbridge.msdk.foundation.tools.ag.a(r0, r1, r2)
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r6)
            r1.append(r7)
            java.lang.String r6 = r1.toString()
            java.lang.String r7 = r8.getId()
            com.mbridge.msdk.foundation.tools.ag.a(r0, r6, r7)
            goto L13b
        Lce:
            com.mbridge.msdk.foundation.controller.a r8 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r8 = r8.j()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r6)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            r4 = -1
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            com.mbridge.msdk.foundation.tools.ag.a(r8, r3, r4)
            com.mbridge.msdk.foundation.controller.a r8 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r8 = r8.j()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r6)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.mbridge.msdk.foundation.tools.ag.a(r8, r2, r0)
            com.mbridge.msdk.foundation.controller.a r8 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r8 = r8.j()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r6)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.mbridge.msdk.foundation.tools.ag.a(r8, r1, r0)
            com.mbridge.msdk.foundation.controller.a r8 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r8 = r8.j()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r6)
            r1.append(r7)
            java.lang.String r6 = r1.toString()
            com.mbridge.msdk.foundation.tools.ag.a(r8, r6, r0)
        L13b:
            return
    }

    public static void a(java.lang.String r17, java.lang.String r18, com.mbridge.msdk.foundation.entity.CampaignEx r19, boolean r20) {
            r1 = r18
            r2 = r19
            r3 = r20
            r4 = -1
            if (r2 == 0) goto L18
            java.lang.String r0 = r19.getAkdlui()     // Catch: java.lang.Throwable -> L26c
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L26c
            if (r0 != 0) goto L18
            java.lang.String r0 = r19.getAkdlui()     // Catch: java.lang.Throwable -> L26c
            goto L19
        L18:
            r0 = r1
        L19:
            boolean r5 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L26c
            if (r5 == 0) goto L23
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r18)     // Catch: java.lang.Throwable -> L26c
        L23:
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L26c
            android.content.Context r5 = r5.j()     // Catch: java.lang.Throwable -> L26c
            java.lang.String r6 = ""
            java.lang.Object r5 = com.mbridge.msdk.foundation.tools.ag.b(r5, r0, r6)     // Catch: java.lang.Throwable -> L26c
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L26c
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L26c
            r7 = 2
            r8 = 0
            java.lang.String r10 = "isDowning"
            java.lang.String r11 = "process"
            r12 = 1
            r13 = 0
            if (r6 != 0) goto L61
            java.io.File r6 = new java.io.File     // Catch: java.lang.Throwable -> L26c
            r6.<init>(r5)     // Catch: java.lang.Throwable -> L26c
            boolean r5 = r6.exists()     // Catch: java.lang.Throwable -> L26c
            if (r5 == 0) goto L11b
            if (r3 == 0) goto L60
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L26c
            android.content.Context r5 = r5.j()     // Catch: java.lang.Throwable -> L26c
            android.net.Uri r6 = android.net.Uri.fromFile(r6)     // Catch: java.lang.Throwable -> L26c
            com.mbridge.msdk.click.c.a(r5, r6, r1, r0)     // Catch: java.lang.Throwable -> L26c
        L60:
            return
        L61:
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L26c
            android.content.Context r5 = r5.j()     // Catch: java.lang.Throwable -> L26c
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L26c
            r6.<init>()     // Catch: java.lang.Throwable -> L26c
            r6.append(r0)     // Catch: java.lang.Throwable -> L26c
            r6.append(r11)     // Catch: java.lang.Throwable -> L26c
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L26c
            java.lang.Integer r14 = java.lang.Integer.valueOf(r13)     // Catch: java.lang.Throwable -> L26c
            java.lang.Object r5 = com.mbridge.msdk.foundation.tools.ag.b(r5, r6, r14)     // Catch: java.lang.Throwable -> L26c
            java.lang.Integer r5 = (java.lang.Integer) r5     // Catch: java.lang.Throwable -> L26c
            int r5 = r5.intValue()     // Catch: java.lang.Throwable -> L26c
            int r6 = android.os.Process.myPid()     // Catch: java.lang.Throwable -> L26c
            if (r5 == 0) goto L11b
            if (r5 != r6) goto L11b
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L26c
            android.content.Context r5 = r5.j()     // Catch: java.lang.Throwable -> L26c
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L26c
            r6.<init>()     // Catch: java.lang.Throwable -> L26c
            r6.append(r0)     // Catch: java.lang.Throwable -> L26c
            r6.append(r10)     // Catch: java.lang.Throwable -> L26c
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L26c
            java.lang.Long r14 = java.lang.Long.valueOf(r8)     // Catch: java.lang.Throwable -> L26c
            java.lang.Object r5 = com.mbridge.msdk.foundation.tools.ag.b(r5, r6, r14)     // Catch: java.lang.Throwable -> L26c
            java.lang.Long r5 = (java.lang.Long) r5     // Catch: java.lang.Throwable -> L26c
            long r5 = r5.longValue()     // Catch: java.lang.Throwable -> L26c
            long r14 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L26c
            long r14 = r14 - r5
            int r5 = (r5 > r8 ? 1 : (r5 == r8 ? 0 : -1))
            if (r5 == 0) goto L11b
            r5 = 36000000(0x2255100, double:1.77863633E-316)
            int r5 = (r14 > r5 ? 1 : (r14 == r5 ? 0 : -1))
            if (r5 >= 0) goto L11b
            if (r3 == 0) goto L11a
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L26c
            android.content.Context r5 = r5.j()     // Catch: java.lang.Throwable -> L26c
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L26c
            r6.<init>()     // Catch: java.lang.Throwable -> L26c
            r6.append(r0)     // Catch: java.lang.Throwable -> L26c
            java.lang.String r0 = "downloadType"
            r6.append(r0)     // Catch: java.lang.Throwable -> L26c
            java.lang.String r0 = r6.toString()     // Catch: java.lang.Throwable -> L26c
            java.lang.Integer r6 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L26c
            java.lang.Object r0 = com.mbridge.msdk.foundation.tools.ag.b(r5, r0, r6)     // Catch: java.lang.Throwable -> L26c
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.Throwable -> L26c
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> L26c
            java.lang.String r5 = "downloading"
            if (r0 != r12) goto Lfc
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L26c
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> L26c
            com.mbridge.msdk.click.b.b(r2, r0, r5)     // Catch: java.lang.Throwable -> L26c
            goto L11a
        Lfc:
            if (r0 != r7) goto L10a
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L26c
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> L26c
            com.mbridge.msdk.click.b.a(r2, r0, r5)     // Catch: java.lang.Throwable -> L26c
            goto L11a
        L10a:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L26c
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> L26c
            java.lang.String r5 = r19.getClickURL()     // Catch: java.lang.Throwable -> L26c
            r6 = 0
            com.mbridge.msdk.foundation.tools.ad.a(r0, r5, r6)     // Catch: java.lang.Throwable -> L26c
        L11a:
            return
        L11b:
            int r0 = com.mbridge.msdk.foundation.tools.aj.a     // Catch: java.lang.Throwable -> L26c
            java.lang.String r5 = "com.mbridge.msdk.mbdownload.f"
            if (r0 != r4) goto L139
            java.lang.String r0 = "com.mbridge.msdk.mbdownload.b"
            java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> L130 java.lang.Throwable -> L26c
            java.lang.Class.forName(r5)     // Catch: java.lang.ClassNotFoundException -> L130 java.lang.Throwable -> L26c
            com.mbridge.msdk.foundation.tools.aj.a = r12     // Catch: java.lang.ClassNotFoundException -> L130 java.lang.Throwable -> L26c
            java.lang.String r0 = "ok"
            com.mbridge.msdk.foundation.tools.aj.b = r0     // Catch: java.lang.ClassNotFoundException -> L130 java.lang.Throwable -> L26c
            goto L139
        L130:
            r0 = move-exception
            com.mbridge.msdk.foundation.tools.aj.a = r13     // Catch: java.lang.Throwable -> L26c
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L26c
            com.mbridge.msdk.foundation.tools.aj.b = r0     // Catch: java.lang.Throwable -> L26c
        L139:
            int r0 = com.mbridge.msdk.foundation.tools.aj.a     // Catch: java.lang.Throwable -> L26c
            if (r0 != r12) goto L268
            if (r3 == 0) goto L268
            if (r2 == 0) goto L150
            java.lang.String r0 = r19.getAkdlui()     // Catch: java.lang.Throwable -> L26c
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L26c
            if (r0 != 0) goto L150
            java.lang.String r0 = r19.getAkdlui()     // Catch: java.lang.Throwable -> L26c
            goto L154
        L150:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r18)     // Catch: java.lang.Throwable -> L26c
        L154:
            r6 = r0
            a(r1, r12, r2)     // Catch: java.lang.Throwable -> L220
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L220
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> L220
            boolean r14 = com.mbridge.msdk.foundation.tools.aj.a(r0)     // Catch: java.lang.Throwable -> L220
            boolean r15 = com.mbridge.msdk.foundation.tools.aj.c(r0)     // Catch: java.lang.Throwable -> L220
            boolean r16 = com.mbridge.msdk.foundation.tools.aj.b(r0)     // Catch: java.lang.Throwable -> L220
            if (r16 != 0) goto L173
            com.mbridge.msdk.click.c.a(r0, r1, r6)     // Catch: java.lang.Throwable -> L220
            goto L27f
        L173:
            if (r15 != 0) goto L17a
            a(r2, r1, r3)     // Catch: java.lang.Throwable -> L220
            goto L27f
        L17a:
            if (r14 != 0) goto L181
            a(r2, r1, r3)     // Catch: java.lang.Throwable -> L220
            goto L27f
        L181:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L220
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> L220
            java.lang.StringBuilder r14 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L220
            r14.<init>()     // Catch: java.lang.Throwable -> L220
            r14.append(r6)     // Catch: java.lang.Throwable -> L220
            r14.append(r10)     // Catch: java.lang.Throwable -> L220
            java.lang.String r14 = r14.toString()     // Catch: java.lang.Throwable -> L220
            long r15 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L220
            java.lang.Long r15 = java.lang.Long.valueOf(r15)     // Catch: java.lang.Throwable -> L220
            com.mbridge.msdk.foundation.tools.ag.a(r0, r14, r15)     // Catch: java.lang.Throwable -> L220
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L220
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> L220
            java.lang.StringBuilder r14 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L220
            r14.<init>()     // Catch: java.lang.Throwable -> L220
            r14.append(r6)     // Catch: java.lang.Throwable -> L220
            r14.append(r11)     // Catch: java.lang.Throwable -> L220
            java.lang.String r14 = r14.toString()     // Catch: java.lang.Throwable -> L220
            int r15 = android.os.Process.myPid()     // Catch: java.lang.Throwable -> L220
            java.lang.Integer r15 = java.lang.Integer.valueOf(r15)     // Catch: java.lang.Throwable -> L220
            com.mbridge.msdk.foundation.tools.ag.a(r0, r14, r15)     // Catch: java.lang.Throwable -> L220
            java.lang.Class r0 = java.lang.Class.forName(r5)     // Catch: java.lang.Throwable -> L220
            java.lang.Class[] r5 = new java.lang.Class[r7]     // Catch: java.lang.Throwable -> L220
            java.lang.Class<java.lang.String> r14 = java.lang.String.class
            r5[r13] = r14     // Catch: java.lang.Throwable -> L220
            java.lang.Class<java.lang.String> r14 = java.lang.String.class
            r5[r12] = r14     // Catch: java.lang.Throwable -> L220
            java.lang.reflect.Constructor r5 = r0.getConstructor(r5)     // Catch: java.lang.Throwable -> L220
            java.lang.Object[] r7 = new java.lang.Object[r7]     // Catch: java.lang.Throwable -> L220
            r7[r13] = r6     // Catch: java.lang.Throwable -> L220
            r7[r12] = r1     // Catch: java.lang.Throwable -> L220
            java.lang.Object r5 = r5.newInstance(r7)     // Catch: java.lang.Throwable -> L220
            boolean r7 = android.text.TextUtils.isEmpty(r17)     // Catch: java.lang.Throwable -> L220
            if (r7 != 0) goto L1fa
            java.lang.String r7 = "setTitle"
            java.lang.Class[] r14 = new java.lang.Class[r12]     // Catch: java.lang.Throwable -> L220
            java.lang.Class<java.lang.String> r15 = java.lang.String.class
            r14[r13] = r15     // Catch: java.lang.Throwable -> L220
            java.lang.reflect.Method r7 = r0.getMethod(r7, r14)     // Catch: java.lang.Throwable -> L220
            java.lang.Object[] r14 = new java.lang.Object[r12]     // Catch: java.lang.Throwable -> L220
            r14[r13] = r17     // Catch: java.lang.Throwable -> L220
            r7.invoke(r5, r14)     // Catch: java.lang.Throwable -> L220
        L1fa:
            java.lang.String r7 = "setDownloadListener"
            java.lang.Class[] r14 = new java.lang.Class[r12]     // Catch: java.lang.Throwable -> L220
            java.lang.Class<com.mbridge.msdk.out.IDownloadListener> r15 = com.mbridge.msdk.out.IDownloadListener.class
            r14[r13] = r15     // Catch: java.lang.Throwable -> L220
            java.lang.reflect.Method r7 = r0.getMethod(r7, r14)     // Catch: java.lang.Throwable -> L220
            java.lang.Object[] r12 = new java.lang.Object[r12]     // Catch: java.lang.Throwable -> L220
            com.mbridge.msdk.foundation.tools.g$1 r14 = new com.mbridge.msdk.foundation.tools.g$1     // Catch: java.lang.Throwable -> L220
            r14.<init>(r2, r6, r3, r1)     // Catch: java.lang.Throwable -> L220
            r12[r13] = r14     // Catch: java.lang.Throwable -> L220
            r7.invoke(r5, r12)     // Catch: java.lang.Throwable -> L220
            java.lang.String r7 = "start"
            java.lang.Class[] r12 = new java.lang.Class[r13]     // Catch: java.lang.Throwable -> L220
            java.lang.reflect.Method r0 = r0.getMethod(r7, r12)     // Catch: java.lang.Throwable -> L220
            java.lang.Object[] r7 = new java.lang.Object[r13]     // Catch: java.lang.Throwable -> L220
            r0.invoke(r5, r7)     // Catch: java.lang.Throwable -> L220
            goto L27f
        L220:
            r0 = move-exception
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L26c
            android.content.Context r5 = r5.j()     // Catch: java.lang.Throwable -> L26c
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L26c
            r7.<init>()     // Catch: java.lang.Throwable -> L26c
            r7.append(r6)     // Catch: java.lang.Throwable -> L26c
            r7.append(r10)     // Catch: java.lang.Throwable -> L26c
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L26c
            java.lang.Long r8 = java.lang.Long.valueOf(r8)     // Catch: java.lang.Throwable -> L26c
            com.mbridge.msdk.foundation.tools.ag.a(r5, r7, r8)     // Catch: java.lang.Throwable -> L26c
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L26c
            android.content.Context r5 = r5.j()     // Catch: java.lang.Throwable -> L26c
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L26c
            r7.<init>()     // Catch: java.lang.Throwable -> L26c
            r7.append(r6)     // Catch: java.lang.Throwable -> L26c
            r7.append(r11)     // Catch: java.lang.Throwable -> L26c
            java.lang.String r6 = r7.toString()     // Catch: java.lang.Throwable -> L26c
            java.lang.Integer r7 = java.lang.Integer.valueOf(r13)     // Catch: java.lang.Throwable -> L26c
            com.mbridge.msdk.foundation.tools.ag.a(r5, r6, r7)     // Catch: java.lang.Throwable -> L26c
            boolean r5 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Throwable -> L26c
            if (r5 == 0) goto L264
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L26c
        L264:
            a(r2, r1, r3)     // Catch: java.lang.Throwable -> L26c
            goto L27f
        L268:
            a(r2, r1, r3)     // Catch: java.lang.Throwable -> L26c
            goto L27f
        L26c:
            r0 = move-exception
            com.mbridge.msdk.foundation.tools.aj.a = r4
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.aj.b = r0
            java.lang.String r0 = "downloadapk"
            java.lang.String r4 = "can't find download jar, use simple method"
            com.mbridge.msdk.foundation.tools.z.b(r0, r4)
            a(r2, r1, r3)
        L27f:
            return
    }
}
