package com.mbridge.msdk.video.module.b;

public final class a {


    private static void a(com.mbridge.msdk.foundation.same.net.g.d r4) {
            if (r4 != 0) goto L3
            return
        L3:
            com.mbridge.msdk.foundation.same.report.d.a r0 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> L30
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L30
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> L30
            r0.<init>(r1)     // Catch: java.lang.Exception -> L30
            com.mbridge.msdk.videocommon.d.b r1 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Exception -> L30
            com.mbridge.msdk.videocommon.d.a r1 = r1.b()     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = r1.b()     // Catch: java.lang.Exception -> L30
            java.lang.String r2 = "r_stid"
            r4.a(r2, r1)     // Catch: java.lang.Exception -> L30
            r1 = 0
            com.mbridge.msdk.foundation.same.net.f.d r2 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L30
            java.lang.String r2 = r2.a     // Catch: java.lang.Exception -> L30
            com.mbridge.msdk.video.module.b.a$1 r3 = new com.mbridge.msdk.video.module.b.a$1     // Catch: java.lang.Exception -> L30
            r3.<init>()     // Catch: java.lang.Exception -> L30
            r0.post(r1, r2, r4, r3)     // Catch: java.lang.Exception -> L30
        L30:
            return
    }

    public static void a(java.lang.String r19, com.mbridge.msdk.foundation.entity.CampaignEx r20, int r21, java.lang.String r22) {
            java.lang.String r1 = ""
            boolean r0 = android.text.TextUtils.isEmpty(r19)
            if (r0 != 0) goto L90
            if (r20 != 0) goto Lc
            goto L90
        Lc:
            r2 = 0
            java.lang.String r4 = r20.getRequestId()     // Catch: java.lang.Throwable -> L6b java.lang.Exception -> L7d
            java.lang.String r5 = r20.getId()     // Catch: java.lang.Throwable -> L62 java.lang.Exception -> L7d
            java.lang.String r6 = r20.getRequestIdNotice()     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L7d
            com.mbridge.msdk.foundation.entity.CampaignEx$c r0 = r20.getRewardTemplateMode()     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L7d
            if (r0 == 0) goto L44
            java.lang.String r2 = r0.e()     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L7d
            int r0 = r0.b()     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L7d
            java.lang.String r3 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L7d
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L7d
            if (r0 != 0) goto L37
            java.lang.String r0 = "alecfc"
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.ak.a(r2, r0)     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L7d
        L37:
            r9 = r1
            r10 = r3
            goto L46
        L3a:
            r0 = move-exception
            r17 = r1
            r18 = r3
            goto L55
        L40:
            r0 = move-exception
            r17 = r1
            goto L53
        L44:
            r9 = r1
            r10 = r9
        L46:
            r3 = r19
            r7 = r21
            r8 = r22
            a(r3, r4, r5, r6, r7, r8, r9, r10)
            goto L90
        L50:
            r0 = move-exception
            r17 = r2
        L53:
            r18 = r17
        L55:
            r12 = r4
            r13 = r5
            r14 = r6
            goto L73
        L59:
            r0 = move-exception
            r14 = r2
            r17 = r14
            r18 = r17
            r12 = r4
            r13 = r5
            goto L73
        L62:
            r0 = move-exception
            r13 = r2
            r14 = r13
            r17 = r14
            r18 = r17
            r12 = r4
            goto L73
        L6b:
            r0 = move-exception
            r12 = r2
            r13 = r12
            r14 = r13
            r17 = r14
            r18 = r17
        L73:
            r11 = r19
            r15 = r21
            r16 = r22
            a(r11, r12, r13, r14, r15, r16, r17, r18)
            throw r0
        L7d:
            java.lang.String r2 = ""
            java.lang.String r3 = ""
            java.lang.String r4 = ""
            java.lang.String r8 = ""
            java.lang.String r7 = ""
            r1 = r19
            r5 = r21
            r6 = r22
            a(r1, r2, r3, r4, r5, r6, r7, r8)
        L90:
            return
    }

    private static void a(java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, int r7, java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            java.lang.String r0 = "&"
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 != 0) goto La3
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 != 0) goto La3
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 != 0) goto La3
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            if (r1 == 0) goto L1c
            goto La3
        L1c:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La3
            java.lang.String r2 = "key=2000103&"
            r1.<init>(r2)     // Catch: java.lang.Exception -> La3
            java.lang.String r2 = "type=choseFromTwoSelect&rid="
            r1.append(r2)     // Catch: java.lang.Exception -> La3
            r1.append(r4)     // Catch: java.lang.Exception -> La3
            r1.append(r0)     // Catch: java.lang.Exception -> La3
            java.lang.String r4 = "choose_cid="
            r1.append(r4)     // Catch: java.lang.Exception -> La3
            r1.append(r5)     // Catch: java.lang.Exception -> La3
            r1.append(r0)     // Catch: java.lang.Exception -> La3
            java.lang.String r4 = "rid_n="
            r1.append(r4)     // Catch: java.lang.Exception -> La3
            r1.append(r6)     // Catch: java.lang.Exception -> La3
            r1.append(r0)     // Catch: java.lang.Exception -> La3
            java.lang.String r4 = "click="
            r1.append(r4)     // Catch: java.lang.Exception -> La3
            r1.append(r7)     // Catch: java.lang.Exception -> La3
            r1.append(r0)     // Catch: java.lang.Exception -> La3
            java.lang.String r4 = "unit_id="
            r1.append(r4)     // Catch: java.lang.Exception -> La3
            r1.append(r3)     // Catch: java.lang.Exception -> La3
            r1.append(r0)     // Catch: java.lang.Exception -> La3
            java.lang.String r4 = "time="
            r1.append(r4)     // Catch: java.lang.Exception -> La3
            r1.append(r8)     // Catch: java.lang.Exception -> La3
            r1.append(r0)     // Catch: java.lang.Exception -> La3
            java.lang.String r4 = "alecfc="
            r1.append(r4)     // Catch: java.lang.Exception -> La3
            r1.append(r9)     // Catch: java.lang.Exception -> La3
            r1.append(r0)     // Catch: java.lang.Exception -> La3
            java.lang.String r4 = "template_id="
            r1.append(r4)     // Catch: java.lang.Exception -> La3
            r1.append(r10)     // Catch: java.lang.Exception -> La3
            com.mbridge.msdk.foundation.same.report.b r4 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> La3
            boolean r4 = r4.c()     // Catch: java.lang.Exception -> La3
            if (r4 == 0) goto L8e
            com.mbridge.msdk.foundation.same.report.b r3 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> La3
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Exception -> La3
            r3.a(r4)     // Catch: java.lang.Exception -> La3
            goto La3
        L8e:
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Exception -> La3
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> La3
            android.content.Context r5 = r5.j()     // Catch: java.lang.Exception -> La3
            com.mbridge.msdk.foundation.same.net.g.d r3 = com.mbridge.msdk.foundation.same.report.e.a(r4, r5, r3)     // Catch: java.lang.Exception -> La3
            if (r3 == 0) goto La3
            a(r3)     // Catch: java.lang.Exception -> La3
        La3:
            return
    }

    public static void a(java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            java.lang.String r0 = "&"
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 != 0) goto La3
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 != 0) goto La3
            boolean r1 = android.text.TextUtils.isEmpty(r8)
            if (r1 != 0) goto La3
            boolean r1 = android.text.TextUtils.isEmpty(r9)
            if (r1 == 0) goto L1c
            goto La3
        L1c:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La3
            java.lang.String r2 = "key=2000103&"
            r1.<init>(r2)     // Catch: java.lang.Exception -> La3
            java.lang.String r2 = "type=choseFromTwoClose&rid="
            r1.append(r2)     // Catch: java.lang.Exception -> La3
            r1.append(r4)     // Catch: java.lang.Exception -> La3
            r1.append(r0)     // Catch: java.lang.Exception -> La3
            java.lang.String r4 = "choose_cid="
            r1.append(r4)     // Catch: java.lang.Exception -> La3
            r1.append(r8)     // Catch: java.lang.Exception -> La3
            r1.append(r0)     // Catch: java.lang.Exception -> La3
            java.lang.String r4 = "rid_n="
            r1.append(r4)     // Catch: java.lang.Exception -> La3
            r1.append(r9)     // Catch: java.lang.Exception -> La3
            r1.append(r0)     // Catch: java.lang.Exception -> La3
            java.lang.String r4 = "mof="
            r1.append(r4)     // Catch: java.lang.Exception -> La3
            r1.append(r6)     // Catch: java.lang.Exception -> La3
            r1.append(r0)     // Catch: java.lang.Exception -> La3
            java.lang.String r4 = "unit_id="
            r1.append(r4)     // Catch: java.lang.Exception -> La3
            r1.append(r3)     // Catch: java.lang.Exception -> La3
            r1.append(r0)     // Catch: java.lang.Exception -> La3
            java.lang.String r4 = "endcard_id="
            r1.append(r4)     // Catch: java.lang.Exception -> La3
            r1.append(r7)     // Catch: java.lang.Exception -> La3
            r1.append(r0)     // Catch: java.lang.Exception -> La3
            java.lang.String r4 = "alecfc="
            r1.append(r4)     // Catch: java.lang.Exception -> La3
            r1.append(r5)     // Catch: java.lang.Exception -> La3
            r1.append(r0)     // Catch: java.lang.Exception -> La3
            java.lang.String r4 = "template_id="
            r1.append(r4)     // Catch: java.lang.Exception -> La3
            r1.append(r10)     // Catch: java.lang.Exception -> La3
            com.mbridge.msdk.foundation.same.report.b r4 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> La3
            boolean r4 = r4.c()     // Catch: java.lang.Exception -> La3
            if (r4 == 0) goto L8e
            com.mbridge.msdk.foundation.same.report.b r3 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> La3
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Exception -> La3
            r3.a(r4)     // Catch: java.lang.Exception -> La3
            goto La3
        L8e:
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Exception -> La3
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> La3
            android.content.Context r5 = r5.j()     // Catch: java.lang.Exception -> La3
            com.mbridge.msdk.foundation.same.net.g.d r3 = com.mbridge.msdk.foundation.same.report.e.a(r4, r5, r3)     // Catch: java.lang.Exception -> La3
            if (r3 == 0) goto La3
            a(r3)     // Catch: java.lang.Exception -> La3
        La3:
            return
    }

    public static void a(java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String[] r10, java.lang.String[] r11) {
            java.lang.String r0 = "&"
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            if (r1 != 0) goto Lf4
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            if (r1 != 0) goto Lf4
            if (r10 == 0) goto Lf4
            int r1 = r10.length
            if (r1 == 0) goto Lf4
            if (r11 == 0) goto Lf4
            int r1 = r11.length
            if (r1 != 0) goto L1a
            goto Lf4
        L1a:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lf4
            java.lang.String r2 = "key=2000103&"
            r1.<init>(r2)     // Catch: java.lang.Exception -> Lf4
            java.lang.String r2 = "type=choseFromTwoShow&cltp="
            r1.append(r2)     // Catch: java.lang.Exception -> Lf4
            r1.append(r8)     // Catch: java.lang.Exception -> Lf4
            r1.append(r0)     // Catch: java.lang.Exception -> Lf4
            java.lang.String r8 = "rid="
            r1.append(r8)     // Catch: java.lang.Exception -> Lf4
            r1.append(r7)     // Catch: java.lang.Exception -> Lf4
            r1.append(r0)     // Catch: java.lang.Exception -> Lf4
            java.lang.String r7 = "unit_id="
            r1.append(r7)     // Catch: java.lang.Exception -> Lf4
            r1.append(r6)     // Catch: java.lang.Exception -> Lf4
            r1.append(r0)     // Catch: java.lang.Exception -> Lf4
            java.lang.String r7 = "xt="
            r1.append(r7)     // Catch: java.lang.Exception -> Lf4
            r1.append(r9)     // Catch: java.lang.Exception -> Lf4
            r1.append(r0)     // Catch: java.lang.Exception -> Lf4
            r7 = 0
            java.lang.String r8 = ""
            r9 = r7
            r2 = r8
        L52:
            int r3 = r10.length     // Catch: java.lang.Exception -> Lf4
            java.lang.String r4 = ","
            if (r9 >= r3) goto L85
            r3 = r10[r9]     // Catch: java.lang.Exception -> Lf4
            boolean r5 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> Lf4
            if (r5 != 0) goto L82
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lf4
            r5.<init>()     // Catch: java.lang.Exception -> Lf4
            r5.append(r2)     // Catch: java.lang.Exception -> Lf4
            r5.append(r3)     // Catch: java.lang.Exception -> Lf4
            java.lang.String r2 = r5.toString()     // Catch: java.lang.Exception -> Lf4
            int r3 = r10.length     // Catch: java.lang.Exception -> Lf4
            int r3 = r3 + (-1)
            if (r9 >= r3) goto L82
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lf4
            r3.<init>()     // Catch: java.lang.Exception -> Lf4
            r3.append(r2)     // Catch: java.lang.Exception -> Lf4
            r3.append(r4)     // Catch: java.lang.Exception -> Lf4
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Exception -> Lf4
        L82:
            int r9 = r9 + 1
            goto L52
        L85:
            java.lang.String r9 = "cids="
            r1.append(r9)     // Catch: java.lang.Exception -> Lf4
            r1.append(r2)     // Catch: java.lang.Exception -> Lf4
            r1.append(r0)     // Catch: java.lang.Exception -> Lf4
        L90:
            int r9 = r11.length     // Catch: java.lang.Exception -> Lf4
            if (r7 >= r9) goto Lc1
            r9 = r11[r7]     // Catch: java.lang.Exception -> Lf4
            boolean r10 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Exception -> Lf4
            if (r10 != 0) goto Lbe
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lf4
            r10.<init>()     // Catch: java.lang.Exception -> Lf4
            r10.append(r8)     // Catch: java.lang.Exception -> Lf4
            r10.append(r9)     // Catch: java.lang.Exception -> Lf4
            java.lang.String r8 = r10.toString()     // Catch: java.lang.Exception -> Lf4
            int r9 = r11.length     // Catch: java.lang.Exception -> Lf4
            int r9 = r9 + (-1)
            if (r7 >= r9) goto Lbe
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lf4
            r9.<init>()     // Catch: java.lang.Exception -> Lf4
            r9.append(r8)     // Catch: java.lang.Exception -> Lf4
            r9.append(r4)     // Catch: java.lang.Exception -> Lf4
            java.lang.String r8 = r9.toString()     // Catch: java.lang.Exception -> Lf4
        Lbe:
            int r7 = r7 + 1
            goto L90
        Lc1:
            java.lang.String r7 = "rid_ns="
            r1.append(r7)     // Catch: java.lang.Exception -> Lf4
            r1.append(r8)     // Catch: java.lang.Exception -> Lf4
            com.mbridge.msdk.foundation.same.report.b r7 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> Lf4
            boolean r7 = r7.c()     // Catch: java.lang.Exception -> Lf4
            if (r7 == 0) goto Ldf
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> Lf4
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Exception -> Lf4
            r6.a(r7)     // Catch: java.lang.Exception -> Lf4
            goto Lf4
        Ldf:
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Exception -> Lf4
            com.mbridge.msdk.foundation.controller.a r8 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Lf4
            android.content.Context r8 = r8.j()     // Catch: java.lang.Exception -> Lf4
            com.mbridge.msdk.foundation.same.net.g.d r6 = com.mbridge.msdk.foundation.same.report.e.a(r7, r8, r6)     // Catch: java.lang.Exception -> Lf4
            if (r6 == 0) goto Lf4
            a(r6)     // Catch: java.lang.Exception -> Lf4
        Lf4:
            return
    }
}
