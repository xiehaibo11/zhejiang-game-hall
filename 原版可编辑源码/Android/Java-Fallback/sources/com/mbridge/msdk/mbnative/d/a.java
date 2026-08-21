package com.mbridge.msdk.mbnative.d;

public final class a {



    public static void a(android.content.Context r4, java.lang.String r5, java.lang.String r6, boolean r7) {
            java.lang.String r0 = "&"
            if (r4 == 0) goto L120
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L11c
            if (r1 != 0) goto L120
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L11c
            if (r1 != 0) goto L120
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L11c
            r1.<init>()     // Catch: java.lang.Throwable -> L11c
            java.lang.String r2 = "key=2000047&"
            r1.append(r2)     // Catch: java.lang.Throwable -> L11c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L11c
            r2.<init>()     // Catch: java.lang.Throwable -> L11c
            java.lang.String r3 = "network_type="
            r2.append(r3)     // Catch: java.lang.Throwable -> L11c
            int r3 = com.mbridge.msdk.foundation.tools.v.D(r4)     // Catch: java.lang.Throwable -> L11c
            r2.append(r3)     // Catch: java.lang.Throwable -> L11c
            r2.append(r0)     // Catch: java.lang.Throwable -> L11c
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L11c
            r1.append(r2)     // Catch: java.lang.Throwable -> L11c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L11c
            r2.<init>()     // Catch: java.lang.Throwable -> L11c
            java.lang.String r3 = "unit_id="
            r2.append(r3)     // Catch: java.lang.Throwable -> L11c
            r2.append(r6)     // Catch: java.lang.Throwable -> L11c
            r2.append(r0)     // Catch: java.lang.Throwable -> L11c
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L11c
            r1.append(r2)     // Catch: java.lang.Throwable -> L11c
            boolean r2 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L11c
            if (r2 != 0) goto L76
            java.util.HashMap<java.lang.String, java.lang.String> r2 = com.mbridge.msdk.foundation.controller.a.b     // Catch: java.lang.Throwable -> L11c
            java.lang.Object r6 = r2.get(r6)     // Catch: java.lang.Throwable -> L11c
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Throwable -> L11c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L11c
            r2.<init>()     // Catch: java.lang.Throwable -> L11c
            java.lang.String r3 = "u_stid="
            r2.append(r3)     // Catch: java.lang.Throwable -> L11c
            if (r6 == 0) goto L67
            goto L69
        L67:
            java.lang.String r6 = ""
        L69:
            r2.append(r6)     // Catch: java.lang.Throwable -> L11c
            r2.append(r0)     // Catch: java.lang.Throwable -> L11c
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Throwable -> L11c
            r1.append(r6)     // Catch: java.lang.Throwable -> L11c
        L76:
            java.lang.String r6 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Throwable -> L11c
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L11c
            if (r6 != 0) goto L97
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L11c
            r6.<init>()     // Catch: java.lang.Throwable -> L11c
            java.lang.String r2 = "b="
            r6.append(r2)     // Catch: java.lang.Throwable -> L11c
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Throwable -> L11c
            r6.append(r2)     // Catch: java.lang.Throwable -> L11c
            r6.append(r0)     // Catch: java.lang.Throwable -> L11c
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L11c
            r1.append(r6)     // Catch: java.lang.Throwable -> L11c
        L97:
            java.lang.String r6 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Throwable -> L11c
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L11c
            if (r6 != 0) goto Lb8
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L11c
            r6.<init>()     // Catch: java.lang.Throwable -> L11c
            java.lang.String r2 = "c="
            r6.append(r2)     // Catch: java.lang.Throwable -> L11c
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Throwable -> L11c
            r6.append(r2)     // Catch: java.lang.Throwable -> L11c
            r6.append(r0)     // Catch: java.lang.Throwable -> L11c
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L11c
            r1.append(r6)     // Catch: java.lang.Throwable -> L11c
        Lb8:
            if (r7 == 0) goto Lbf
            java.lang.String r6 = "hb=1&"
            r1.append(r6)     // Catch: java.lang.Throwable -> L11c
        Lbf:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L11c
            r6.<init>()     // Catch: java.lang.Throwable -> L11c
            java.lang.String r7 = "reason="
            r6.append(r7)     // Catch: java.lang.Throwable -> L11c
            r6.append(r5)     // Catch: java.lang.Throwable -> L11c
            java.lang.String r5 = r6.toString()     // Catch: java.lang.Throwable -> L11c
            r1.append(r5)     // Catch: java.lang.Throwable -> L11c
            com.mbridge.msdk.foundation.same.report.b r5 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L11c
            boolean r5 = r5.c()     // Catch: java.lang.Throwable -> L11c
            if (r5 == 0) goto Le9
            com.mbridge.msdk.foundation.same.report.b r4 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L11c
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L11c
            r4.a(r5)     // Catch: java.lang.Throwable -> L11c
            goto L120
        Le9:
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L11c
            if (r4 == 0) goto L120
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L11c
            if (r6 != 0) goto L120
            com.mbridge.msdk.foundation.same.report.d.a r6 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> L10e java.lang.Throwable -> L11c
            r6.<init>(r4)     // Catch: java.lang.Exception -> L10e java.lang.Throwable -> L11c
            com.mbridge.msdk.foundation.same.net.g.d r7 = com.mbridge.msdk.foundation.same.report.e.a(r5, r4)     // Catch: java.lang.Exception -> L10e java.lang.Throwable -> L11c
            r0 = 0
            com.mbridge.msdk.foundation.same.net.f.d r1 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L10e java.lang.Throwable -> L11c
            java.lang.String r1 = r1.a     // Catch: java.lang.Exception -> L10e java.lang.Throwable -> L11c
            com.mbridge.msdk.mbnative.d.a$2 r2 = new com.mbridge.msdk.mbnative.d.a$2     // Catch: java.lang.Exception -> L10e java.lang.Throwable -> L11c
            r2.<init>(r5, r4)     // Catch: java.lang.Exception -> L10e java.lang.Throwable -> L11c
            r6.post(r0, r1, r7, r2)     // Catch: java.lang.Exception -> L10e java.lang.Throwable -> L11c
            goto L120
        L10e:
            r4 = move-exception
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L11c
            java.lang.String r5 = "NativeReport"
            java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> L11c
            com.mbridge.msdk.foundation.tools.z.d(r5, r4)     // Catch: java.lang.Throwable -> L11c
            goto L120
        L11c:
            r4 = move-exception
            r4.printStackTrace()
        L120:
            return
    }

    public static void a(android.content.Context r9, java.util.List<com.mbridge.msdk.out.Campaign> r10, java.lang.String r11) {
            if (r9 == 0) goto L190
            if (r10 == 0) goto L190
            int r0 = r10.size()     // Catch: java.lang.Throwable -> L18c
            if (r0 <= 0) goto L190
            boolean r0 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> L18c
            if (r0 != 0) goto L190
            java.lang.StringBuffer r0 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L18c
            r0.<init>()     // Catch: java.lang.Throwable -> L18c
            java.lang.String r1 = "key=2000048&"
            r0.append(r1)     // Catch: java.lang.Throwable -> L18c
            r1 = 0
            java.lang.String r2 = "&"
            if (r10 == 0) goto L46
            int r3 = r10.size()     // Catch: java.lang.Throwable -> L18c
            if (r3 <= 0) goto L46
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L18c
            r3.<init>()     // Catch: java.lang.Throwable -> L18c
            java.lang.String r4 = "cid="
            r3.append(r4)     // Catch: java.lang.Throwable -> L18c
            java.lang.Object r4 = r10.get(r1)     // Catch: java.lang.Throwable -> L18c
            com.mbridge.msdk.out.Campaign r4 = (com.mbridge.msdk.out.Campaign) r4     // Catch: java.lang.Throwable -> L18c
            java.lang.String r4 = r4.getId()     // Catch: java.lang.Throwable -> L18c
            r3.append(r4)     // Catch: java.lang.Throwable -> L18c
            r3.append(r2)     // Catch: java.lang.Throwable -> L18c
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L18c
            r0.append(r3)     // Catch: java.lang.Throwable -> L18c
        L46:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L18c
            r3.<init>()     // Catch: java.lang.Throwable -> L18c
            java.lang.String r4 = "network_type="
            r3.append(r4)     // Catch: java.lang.Throwable -> L18c
            int r4 = com.mbridge.msdk.foundation.tools.v.D(r9)     // Catch: java.lang.Throwable -> L18c
            r3.append(r4)     // Catch: java.lang.Throwable -> L18c
            r3.append(r2)     // Catch: java.lang.Throwable -> L18c
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L18c
            r0.append(r3)     // Catch: java.lang.Throwable -> L18c
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L18c
            r3.<init>()     // Catch: java.lang.Throwable -> L18c
            java.lang.String r4 = "unit_id="
            r3.append(r4)     // Catch: java.lang.Throwable -> L18c
            r3.append(r11)     // Catch: java.lang.Throwable -> L18c
            r3.append(r2)     // Catch: java.lang.Throwable -> L18c
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L18c
            r0.append(r3)     // Catch: java.lang.Throwable -> L18c
            java.lang.String r3 = "rid_n="
            java.lang.String r4 = "rid="
            java.lang.String r5 = "rtins_type="
            java.lang.String r6 = "hb="
            r7 = 1
            if (r10 == 0) goto Le1
            int r8 = r10.size()     // Catch: java.lang.Throwable -> L18c
            if (r8 <= r7) goto Le1
            java.lang.Object r10 = r10.get(r1)     // Catch: java.lang.Throwable -> L18c
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = (com.mbridge.msdk.foundation.entity.CampaignEx) r10     // Catch: java.lang.Throwable -> L18c
            boolean r8 = r10.isBidCampaign()     // Catch: java.lang.Throwable -> L18c
            if (r8 == 0) goto L9e
            r0.append(r6)     // Catch: java.lang.Throwable -> L18c
            r0.append(r7)     // Catch: java.lang.Throwable -> L18c
            r0.append(r2)     // Catch: java.lang.Throwable -> L18c
        L9e:
            boolean r6 = com.mbridge.msdk.foundation.tools.ae.b(r10)     // Catch: java.lang.Throwable -> L18c
            if (r6 == 0) goto Lb1
            r0.append(r5)     // Catch: java.lang.Throwable -> L18c
            int r5 = r10.getRtinsType()     // Catch: java.lang.Throwable -> L18c
            r0.append(r5)     // Catch: java.lang.Throwable -> L18c
            r0.append(r2)     // Catch: java.lang.Throwable -> L18c
        Lb1:
            java.lang.String r5 = r10.getRequestId()     // Catch: java.lang.Throwable -> L18c
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L18c
            r6.<init>()     // Catch: java.lang.Throwable -> L18c
            r6.append(r4)     // Catch: java.lang.Throwable -> L18c
            r6.append(r5)     // Catch: java.lang.Throwable -> L18c
            java.lang.String r4 = r6.toString()     // Catch: java.lang.Throwable -> L18c
            r0.append(r4)     // Catch: java.lang.Throwable -> L18c
            r0.append(r2)     // Catch: java.lang.Throwable -> L18c
            java.lang.String r10 = r10.getRequestIdNotice()     // Catch: java.lang.Throwable -> L18c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L18c
            r2.<init>()     // Catch: java.lang.Throwable -> L18c
            r2.append(r3)     // Catch: java.lang.Throwable -> L18c
            r2.append(r10)     // Catch: java.lang.Throwable -> L18c
            java.lang.String r10 = r2.toString()     // Catch: java.lang.Throwable -> L18c
            r0.append(r10)     // Catch: java.lang.Throwable -> L18c
            goto L13e
        Le1:
            int r8 = r10.size()     // Catch: java.lang.Throwable -> L18c
            if (r8 != r7) goto L13e
            java.lang.Object r10 = r10.get(r1)     // Catch: java.lang.Throwable -> L18c
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = (com.mbridge.msdk.foundation.entity.CampaignEx) r10     // Catch: java.lang.Throwable -> L18c
            boolean r8 = r10.isBidCampaign()     // Catch: java.lang.Throwable -> L18c
            if (r8 == 0) goto Lfc
            r0.append(r6)     // Catch: java.lang.Throwable -> L18c
            r0.append(r7)     // Catch: java.lang.Throwable -> L18c
            r0.append(r2)     // Catch: java.lang.Throwable -> L18c
        Lfc:
            boolean r6 = com.mbridge.msdk.foundation.tools.ae.b(r10)     // Catch: java.lang.Throwable -> L18c
            if (r6 == 0) goto L10f
            r0.append(r5)     // Catch: java.lang.Throwable -> L18c
            int r5 = r10.getRtinsType()     // Catch: java.lang.Throwable -> L18c
            r0.append(r5)     // Catch: java.lang.Throwable -> L18c
            r0.append(r2)     // Catch: java.lang.Throwable -> L18c
        L10f:
            java.lang.String r5 = r10.getRequestId()     // Catch: java.lang.Throwable -> L18c
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L18c
            r6.<init>()     // Catch: java.lang.Throwable -> L18c
            r6.append(r4)     // Catch: java.lang.Throwable -> L18c
            r6.append(r5)     // Catch: java.lang.Throwable -> L18c
            java.lang.String r4 = r6.toString()     // Catch: java.lang.Throwable -> L18c
            r0.append(r4)     // Catch: java.lang.Throwable -> L18c
            r0.append(r2)     // Catch: java.lang.Throwable -> L18c
            java.lang.String r10 = r10.getRequestIdNotice()     // Catch: java.lang.Throwable -> L18c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L18c
            r2.<init>()     // Catch: java.lang.Throwable -> L18c
            r2.append(r3)     // Catch: java.lang.Throwable -> L18c
            r2.append(r10)     // Catch: java.lang.Throwable -> L18c
            java.lang.String r10 = r2.toString()     // Catch: java.lang.Throwable -> L18c
            r0.append(r10)     // Catch: java.lang.Throwable -> L18c
        L13e:
            com.mbridge.msdk.foundation.same.report.b r10 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L18c
            boolean r10 = r10.c()     // Catch: java.lang.Throwable -> L18c
            if (r10 == 0) goto L154
            com.mbridge.msdk.foundation.same.report.b r9 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L18c
            java.lang.String r10 = r0.toString()     // Catch: java.lang.Throwable -> L18c
            r9.a(r10)     // Catch: java.lang.Throwable -> L18c
            goto L190
        L154:
            java.lang.String r10 = r0.toString()     // Catch: java.lang.Throwable -> L18c
            if (r9 == 0) goto L190
            boolean r0 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> L18c
            if (r0 != 0) goto L190
            boolean r0 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> L18c
            if (r0 != 0) goto L190
            com.mbridge.msdk.foundation.same.report.d.a r0 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> L17e java.lang.Throwable -> L18c
            r0.<init>(r9)     // Catch: java.lang.Exception -> L17e java.lang.Throwable -> L18c
            com.mbridge.msdk.foundation.same.net.g.d r11 = com.mbridge.msdk.foundation.same.report.e.a(r10, r9, r11)     // Catch: java.lang.Exception -> L17e java.lang.Throwable -> L18c
            com.mbridge.msdk.foundation.same.net.f.d r2 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L17e java.lang.Throwable -> L18c
            java.lang.String r2 = r2.a     // Catch: java.lang.Exception -> L17e java.lang.Throwable -> L18c
            com.mbridge.msdk.mbnative.d.a$1 r3 = new com.mbridge.msdk.mbnative.d.a$1     // Catch: java.lang.Exception -> L17e java.lang.Throwable -> L18c
            r3.<init>(r10, r9)     // Catch: java.lang.Exception -> L17e java.lang.Throwable -> L18c
            r0.post(r1, r2, r11, r3)     // Catch: java.lang.Exception -> L17e java.lang.Throwable -> L18c
            goto L190
        L17e:
            r9 = move-exception
            r9.printStackTrace()     // Catch: java.lang.Throwable -> L18c
            java.lang.String r10 = "NativeReport"
            java.lang.String r9 = r9.getMessage()     // Catch: java.lang.Throwable -> L18c
            com.mbridge.msdk.foundation.tools.z.d(r10, r9)     // Catch: java.lang.Throwable -> L18c
            goto L190
        L18c:
            r9 = move-exception
            r9.printStackTrace()
        L190:
            return
    }
}
