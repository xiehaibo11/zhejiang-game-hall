package com.mbridge.msdk.click.b;

public final class a {
    public static int a = 1;
    public static int b = 2;
    public static int c = 1500;
    private static java.lang.String d = "2000109";
    private static java.lang.String e = "DspFilterUtils";

    static {
            return
    }

    public static boolean a(com.mbridge.msdk.foundation.entity.CampaignEx r6, java.lang.String r7, int r8) {
            java.lang.String r0 = ""
            java.lang.String r1 = "&"
            r2 = 0
            if (r6 == 0) goto L147
            int r3 = r6.getTpOffer()
            r4 = 1
            if (r3 != r4) goto L147
            int r3 = r6.getFac()
            if (r3 == 0) goto L15
            r2 = r4
        L15:
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L13d
            android.content.Context r3 = r3.j()     // Catch: java.lang.Throwable -> L13d
            if (r3 == 0) goto L147
            if (r6 == 0) goto L147
            boolean r4 = android.webkit.URLUtil.isFileUrl(r7)     // Catch: java.lang.Throwable -> L13d
            if (r4 == 0) goto L48
            java.lang.String r4 = "file:////"
            java.lang.String r4 = r7.replace(r4, r0)     // Catch: java.lang.Throwable -> L13d
            java.lang.String r5 = "file:///"
            java.lang.String r4 = r4.replace(r5, r0)     // Catch: java.lang.Throwable -> L13d
            java.lang.String r5 = "file://"
            java.lang.String r0 = r4.replace(r5, r0)     // Catch: java.lang.Throwable -> L13d
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> L13d
            r4.<init>(r0)     // Catch: java.lang.Throwable -> L13d
            boolean r0 = r4.exists()     // Catch: java.lang.Throwable -> L13d
            if (r0 == 0) goto L48
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.x.a(r4)     // Catch: java.lang.Throwable -> L13d
        L48:
            java.lang.StringBuffer r0 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L13d
            r0.<init>()     // Catch: java.lang.Throwable -> L13d
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13d
            r4.<init>()     // Catch: java.lang.Throwable -> L13d
            java.lang.String r5 = "key="
            r4.append(r5)     // Catch: java.lang.Throwable -> L13d
            java.lang.String r5 = com.mbridge.msdk.click.b.a.d     // Catch: java.lang.Throwable -> L13d
            r4.append(r5)     // Catch: java.lang.Throwable -> L13d
            r4.append(r1)     // Catch: java.lang.Throwable -> L13d
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L13d
            r0.append(r4)     // Catch: java.lang.Throwable -> L13d
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13d
            r4.<init>()     // Catch: java.lang.Throwable -> L13d
            java.lang.String r5 = "type="
            r4.append(r5)     // Catch: java.lang.Throwable -> L13d
            r4.append(r8)     // Catch: java.lang.Throwable -> L13d
            r4.append(r1)     // Catch: java.lang.Throwable -> L13d
            java.lang.String r8 = r4.toString()     // Catch: java.lang.Throwable -> L13d
            r0.append(r8)     // Catch: java.lang.Throwable -> L13d
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13d
            r8.<init>()     // Catch: java.lang.Throwable -> L13d
            java.lang.String r4 = "html="
            r8.append(r4)     // Catch: java.lang.Throwable -> L13d
            r8.append(r7)     // Catch: java.lang.Throwable -> L13d
            r8.append(r1)     // Catch: java.lang.Throwable -> L13d
            java.lang.String r7 = r8.toString()     // Catch: java.lang.Throwable -> L13d
            r0.append(r7)     // Catch: java.lang.Throwable -> L13d
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13d
            r7.<init>()     // Catch: java.lang.Throwable -> L13d
            java.lang.String r8 = "network_type="
            r7.append(r8)     // Catch: java.lang.Throwable -> L13d
            int r8 = com.mbridge.msdk.foundation.tools.v.D(r3)     // Catch: java.lang.Throwable -> L13d
            r7.append(r8)     // Catch: java.lang.Throwable -> L13d
            r7.append(r1)     // Catch: java.lang.Throwable -> L13d
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L13d
            r0.append(r7)     // Catch: java.lang.Throwable -> L13d
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13d
            r7.<init>()     // Catch: java.lang.Throwable -> L13d
            java.lang.String r8 = "unit_id="
            r7.append(r8)     // Catch: java.lang.Throwable -> L13d
            java.lang.String r8 = r6.getCampaignUnitId()     // Catch: java.lang.Throwable -> L13d
            r7.append(r8)     // Catch: java.lang.Throwable -> L13d
            r7.append(r1)     // Catch: java.lang.Throwable -> L13d
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L13d
            r0.append(r7)     // Catch: java.lang.Throwable -> L13d
            java.lang.String r7 = r6.getRequestId()     // Catch: java.lang.Throwable -> L13d
            boolean r8 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L13d
            if (r8 != 0) goto Ldf
            java.lang.String r8 = "rid="
            r0.append(r8)     // Catch: java.lang.Throwable -> L13d
            r0.append(r7)     // Catch: java.lang.Throwable -> L13d
            r0.append(r1)     // Catch: java.lang.Throwable -> L13d
        Ldf:
            boolean r7 = r6.isBidCampaign()     // Catch: java.lang.Throwable -> L13d
            if (r7 == 0) goto Lf2
            java.lang.String r7 = "hb="
            r0.append(r7)     // Catch: java.lang.Throwable -> L13d
            java.lang.String r7 = "1"
            r0.append(r7)     // Catch: java.lang.Throwable -> L13d
            r0.append(r1)     // Catch: java.lang.Throwable -> L13d
        Lf2:
            java.lang.String r7 = r6.getRequestIdNotice()     // Catch: java.lang.Throwable -> L13d
            boolean r8 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L13d
            if (r8 != 0) goto L107
            java.lang.String r8 = "rid_n="
            r0.append(r8)     // Catch: java.lang.Throwable -> L13d
            r0.append(r7)     // Catch: java.lang.Throwable -> L13d
            r0.append(r1)     // Catch: java.lang.Throwable -> L13d
        L107:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13d
            r7.<init>()     // Catch: java.lang.Throwable -> L13d
            java.lang.String r8 = "cid="
            r7.append(r8)     // Catch: java.lang.Throwable -> L13d
            java.lang.String r6 = r6.getId()     // Catch: java.lang.Throwable -> L13d
            r7.append(r6)     // Catch: java.lang.Throwable -> L13d
            java.lang.String r6 = r7.toString()     // Catch: java.lang.Throwable -> L13d
            r0.append(r6)     // Catch: java.lang.Throwable -> L13d
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L13d
            boolean r6 = r6.c()     // Catch: java.lang.Throwable -> L13d
            if (r6 == 0) goto L135
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L13d
            java.lang.String r7 = r0.toString()     // Catch: java.lang.Throwable -> L13d
            r6.a(r7)     // Catch: java.lang.Throwable -> L13d
            goto L147
        L135:
            java.lang.String r6 = r0.toString()     // Catch: java.lang.Throwable -> L13d
            com.mbridge.msdk.foundation.same.report.e.b(r3, r6)     // Catch: java.lang.Throwable -> L13d
            goto L147
        L13d:
            r6 = move-exception
            java.lang.String r7 = com.mbridge.msdk.click.b.a.e
            java.lang.String r6 = r6.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r7, r6)
        L147:
            return r2
    }
}
