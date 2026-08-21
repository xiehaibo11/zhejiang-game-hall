package com.mbridge.msdk.video.bt.module.b;

public class f {
    private static final java.lang.String a = null;


    static {
            java.lang.Class<com.mbridge.msdk.video.bt.module.b.f> r0 = com.mbridge.msdk.video.bt.module.b.f.class
            java.lang.String r0 = r0.getName()
            com.mbridge.msdk.video.bt.module.b.f.a = r0
            return
    }

    public f() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.String a() {
            java.lang.String r0 = com.mbridge.msdk.video.bt.module.b.f.a
            return r0
    }

    public static void a(android.content.Context r4, com.mbridge.msdk.foundation.entity.CampaignEx r5, java.lang.String r6, int r7) {
            java.lang.String r0 = "&"
            if (r4 == 0) goto L143
            if (r5 == 0) goto L143
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L13f
            if (r1 != 0) goto L143
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L13f
            r1.<init>()     // Catch: java.lang.Throwable -> L13f
            java.lang.String r2 = "key=2000054&"
            r1.append(r2)     // Catch: java.lang.Throwable -> L13f
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13f
            r2.<init>()     // Catch: java.lang.Throwable -> L13f
            java.lang.String r3 = "network_type="
            r2.append(r3)     // Catch: java.lang.Throwable -> L13f
            int r3 = com.mbridge.msdk.foundation.tools.v.D(r4)     // Catch: java.lang.Throwable -> L13f
            r2.append(r3)     // Catch: java.lang.Throwable -> L13f
            r2.append(r0)     // Catch: java.lang.Throwable -> L13f
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L13f
            r1.append(r2)     // Catch: java.lang.Throwable -> L13f
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13f
            r2.<init>()     // Catch: java.lang.Throwable -> L13f
            java.lang.String r3 = "unit_id="
            r2.append(r3)     // Catch: java.lang.Throwable -> L13f
            r2.append(r6)     // Catch: java.lang.Throwable -> L13f
            r2.append(r0)     // Catch: java.lang.Throwable -> L13f
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L13f
            r1.append(r2)     // Catch: java.lang.Throwable -> L13f
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13f
            r2.<init>()     // Catch: java.lang.Throwable -> L13f
            java.lang.String r3 = "cid="
            r2.append(r3)     // Catch: java.lang.Throwable -> L13f
            java.lang.String r3 = r5.getId()     // Catch: java.lang.Throwable -> L13f
            r2.append(r3)     // Catch: java.lang.Throwable -> L13f
            r2.append(r0)     // Catch: java.lang.Throwable -> L13f
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L13f
            r1.append(r2)     // Catch: java.lang.Throwable -> L13f
            java.lang.String r2 = "reason=&"
            r1.append(r2)     // Catch: java.lang.Throwable -> L13f
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13f
            r2.<init>()     // Catch: java.lang.Throwable -> L13f
            java.lang.String r3 = "templateshowtype="
            r2.append(r3)     // Catch: java.lang.Throwable -> L13f
            r2.append(r7)     // Catch: java.lang.Throwable -> L13f
            java.lang.String r7 = " offer show success&"
            r2.append(r7)     // Catch: java.lang.Throwable -> L13f
            java.lang.String r7 = r2.toString()     // Catch: java.lang.Throwable -> L13f
            r1.append(r7)     // Catch: java.lang.Throwable -> L13f
            java.lang.String r7 = "result=2&"
            r1.append(r7)     // Catch: java.lang.Throwable -> L13f
            if (r5 == 0) goto L96
            int r7 = r5.getAdType()     // Catch: java.lang.Throwable -> L13f
            r2 = 287(0x11f, float:4.02E-43)
            if (r7 != r2) goto L96
            java.lang.String r7 = "ad_type=3&"
            r1.append(r7)     // Catch: java.lang.Throwable -> L13f
            goto La9
        L96:
            java.lang.String r7 = "ad_type=1&"
            if (r5 == 0) goto La6
            int r2 = r5.getAdType()     // Catch: java.lang.Throwable -> L13f
            r3 = 94
            if (r2 != r3) goto La6
            r1.append(r7)     // Catch: java.lang.Throwable -> L13f
            goto La9
        La6:
            r1.append(r7)     // Catch: java.lang.Throwable -> L13f
        La9:
            java.lang.String r7 = r5.getendcard_url()     // Catch: java.lang.Throwable -> L13f
            boolean r2 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L13f
            if (r2 != 0) goto Lce
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13f
            r2.<init>()     // Catch: java.lang.Throwable -> L13f
            java.lang.String r3 = "creative="
            r2.append(r3)     // Catch: java.lang.Throwable -> L13f
            java.lang.String r7 = java.net.URLEncoder.encode(r7)     // Catch: java.lang.Throwable -> L13f
            r2.append(r7)     // Catch: java.lang.Throwable -> L13f
            r2.append(r0)     // Catch: java.lang.Throwable -> L13f
            java.lang.String r7 = r2.toString()     // Catch: java.lang.Throwable -> L13f
            r1.append(r7)     // Catch: java.lang.Throwable -> L13f
        Lce:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13f
            r7.<init>()     // Catch: java.lang.Throwable -> L13f
            java.lang.String r2 = "devid="
            r7.append(r2)     // Catch: java.lang.Throwable -> L13f
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.E()     // Catch: java.lang.Throwable -> L13f
            r7.append(r2)     // Catch: java.lang.Throwable -> L13f
            r7.append(r0)     // Catch: java.lang.Throwable -> L13f
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L13f
            r1.append(r7)     // Catch: java.lang.Throwable -> L13f
            if (r5 == 0) goto L121
            java.lang.String r7 = "rid="
            r1.append(r7)     // Catch: java.lang.Throwable -> L13f
            java.lang.String r7 = r5.getRequestId()     // Catch: java.lang.Throwable -> L13f
            r1.append(r7)     // Catch: java.lang.Throwable -> L13f
            r1.append(r0)     // Catch: java.lang.Throwable -> L13f
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13f
            r7.<init>()     // Catch: java.lang.Throwable -> L13f
            java.lang.String r2 = "rid_n="
            r7.append(r2)     // Catch: java.lang.Throwable -> L13f
            java.lang.String r2 = r5.getRequestIdNotice()     // Catch: java.lang.Throwable -> L13f
            r7.append(r2)     // Catch: java.lang.Throwable -> L13f
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L13f
            r1.append(r7)     // Catch: java.lang.Throwable -> L13f
            r1.append(r0)     // Catch: java.lang.Throwable -> L13f
            java.lang.String r7 = "adspace_t="
            r1.append(r7)     // Catch: java.lang.Throwable -> L13f
            int r5 = r5.getAdSpaceT()     // Catch: java.lang.Throwable -> L13f
            r1.append(r5)     // Catch: java.lang.Throwable -> L13f
        L121:
            com.mbridge.msdk.foundation.same.report.b r5 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L13f
            boolean r5 = r5.c()     // Catch: java.lang.Throwable -> L13f
            if (r5 == 0) goto L137
            com.mbridge.msdk.foundation.same.report.b r4 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L13f
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L13f
            r4.a(r5)     // Catch: java.lang.Throwable -> L13f
            goto L143
        L137:
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L13f
            a(r4, r5, r6)     // Catch: java.lang.Throwable -> L13f
            goto L143
        L13f:
            r4 = move-exception
            r4.printStackTrace()
        L143:
            return
    }

    public static void a(android.content.Context r4, com.mbridge.msdk.foundation.entity.CampaignEx r5, java.lang.String r6, java.lang.String r7, int r8) {
            java.lang.String r0 = "&"
            if (r4 == 0) goto L16f
            if (r5 == 0) goto L16f
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L16b
            r2 = 1
            if (r1 != 0) goto Lf
            r1 = r2
            goto L10
        Lf:
            r1 = 0
        L10:
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L16b
            r2 = r2 ^ r3
            r1 = r1 & r2
            if (r1 == 0) goto L16f
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L16b
            r1.<init>()     // Catch: java.lang.Throwable -> L16b
            java.lang.String r2 = "key=2000054&"
            r1.append(r2)     // Catch: java.lang.Throwable -> L16b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L16b
            r2.<init>()     // Catch: java.lang.Throwable -> L16b
            java.lang.String r3 = "network_type="
            r2.append(r3)     // Catch: java.lang.Throwable -> L16b
            int r3 = com.mbridge.msdk.foundation.tools.v.D(r4)     // Catch: java.lang.Throwable -> L16b
            r2.append(r3)     // Catch: java.lang.Throwable -> L16b
            r2.append(r0)     // Catch: java.lang.Throwable -> L16b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L16b
            r1.append(r2)     // Catch: java.lang.Throwable -> L16b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L16b
            r2.<init>()     // Catch: java.lang.Throwable -> L16b
            java.lang.String r3 = "unit_id="
            r2.append(r3)     // Catch: java.lang.Throwable -> L16b
            r2.append(r6)     // Catch: java.lang.Throwable -> L16b
            r2.append(r0)     // Catch: java.lang.Throwable -> L16b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L16b
            r1.append(r2)     // Catch: java.lang.Throwable -> L16b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L16b
            r2.<init>()     // Catch: java.lang.Throwable -> L16b
            java.lang.String r3 = "cid="
            r2.append(r3)     // Catch: java.lang.Throwable -> L16b
            java.lang.String r3 = r5.getId()     // Catch: java.lang.Throwable -> L16b
            r2.append(r3)     // Catch: java.lang.Throwable -> L16b
            r2.append(r0)     // Catch: java.lang.Throwable -> L16b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L16b
            r1.append(r2)     // Catch: java.lang.Throwable -> L16b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L16b
            r2.<init>()     // Catch: java.lang.Throwable -> L16b
            java.lang.String r3 = "reason="
            r2.append(r3)     // Catch: java.lang.Throwable -> L16b
            r2.append(r7)     // Catch: java.lang.Throwable -> L16b
            r2.append(r0)     // Catch: java.lang.Throwable -> L16b
            java.lang.String r7 = r2.toString()     // Catch: java.lang.Throwable -> L16b
            r1.append(r7)     // Catch: java.lang.Throwable -> L16b
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L16b
            r7.<init>()     // Catch: java.lang.Throwable -> L16b
            java.lang.String r2 = "templateshowtype="
            r7.append(r2)     // Catch: java.lang.Throwable -> L16b
            r7.append(r8)     // Catch: java.lang.Throwable -> L16b
            r7.append(r0)     // Catch: java.lang.Throwable -> L16b
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L16b
            r1.append(r7)     // Catch: java.lang.Throwable -> L16b
            java.lang.String r7 = "result=1&"
            r1.append(r7)     // Catch: java.lang.Throwable -> L16b
            java.lang.String r7 = r5.getendcard_url()     // Catch: java.lang.Throwable -> L16b
            boolean r7 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L16b
            if (r7 != 0) goto Lcb
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L16b
            r7.<init>()     // Catch: java.lang.Throwable -> L16b
            java.lang.String r8 = "creative="
            r7.append(r8)     // Catch: java.lang.Throwable -> L16b
            java.lang.String r8 = r5.getendcard_url()     // Catch: java.lang.Throwable -> L16b
            java.lang.String r8 = java.net.URLEncoder.encode(r8)     // Catch: java.lang.Throwable -> L16b
            r7.append(r8)     // Catch: java.lang.Throwable -> L16b
            r7.append(r0)     // Catch: java.lang.Throwable -> L16b
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L16b
            r1.append(r7)     // Catch: java.lang.Throwable -> L16b
        Lcb:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L16b
            r7.<init>()     // Catch: java.lang.Throwable -> L16b
            java.lang.String r8 = "devid="
            r7.append(r8)     // Catch: java.lang.Throwable -> L16b
            java.lang.String r8 = com.mbridge.msdk.foundation.tools.v.E()     // Catch: java.lang.Throwable -> L16b
            r7.append(r8)     // Catch: java.lang.Throwable -> L16b
            r7.append(r0)     // Catch: java.lang.Throwable -> L16b
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L16b
            r1.append(r7)     // Catch: java.lang.Throwable -> L16b
            if (r5 == 0) goto Lf6
            int r7 = r5.getAdType()     // Catch: java.lang.Throwable -> L16b
            r8 = 287(0x11f, float:4.02E-43)
            if (r7 != r8) goto Lf6
            java.lang.String r7 = "ad_type=3&"
            r1.append(r7)     // Catch: java.lang.Throwable -> L16b
            goto L109
        Lf6:
            java.lang.String r7 = "ad_type=1&"
            if (r5 == 0) goto L106
            int r8 = r5.getAdType()     // Catch: java.lang.Throwable -> L16b
            r2 = 94
            if (r8 != r2) goto L106
            r1.append(r7)     // Catch: java.lang.Throwable -> L16b
            goto L109
        L106:
            r1.append(r7)     // Catch: java.lang.Throwable -> L16b
        L109:
            if (r5 == 0) goto L14d
            java.lang.String r7 = "rid="
            r1.append(r7)     // Catch: java.lang.Throwable -> L16b
            java.lang.String r7 = r5.getRequestId()     // Catch: java.lang.Throwable -> L16b
            r1.append(r7)     // Catch: java.lang.Throwable -> L16b
            r1.append(r0)     // Catch: java.lang.Throwable -> L16b
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L16b
            r7.<init>()     // Catch: java.lang.Throwable -> L16b
            java.lang.String r8 = "rid_n="
            r7.append(r8)     // Catch: java.lang.Throwable -> L16b
            java.lang.String r8 = r5.getRequestIdNotice()     // Catch: java.lang.Throwable -> L16b
            r7.append(r8)     // Catch: java.lang.Throwable -> L16b
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L16b
            r1.append(r7)     // Catch: java.lang.Throwable -> L16b
            r1.append(r0)     // Catch: java.lang.Throwable -> L16b
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L16b
            r7.<init>()     // Catch: java.lang.Throwable -> L16b
            java.lang.String r8 = "adspace_t="
            r7.append(r8)     // Catch: java.lang.Throwable -> L16b
            int r5 = r5.getAdSpaceT()     // Catch: java.lang.Throwable -> L16b
            r7.append(r5)     // Catch: java.lang.Throwable -> L16b
            java.lang.String r5 = r7.toString()     // Catch: java.lang.Throwable -> L16b
            r1.append(r5)     // Catch: java.lang.Throwable -> L16b
        L14d:
            com.mbridge.msdk.foundation.same.report.b r5 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L16b
            boolean r5 = r5.c()     // Catch: java.lang.Throwable -> L16b
            if (r5 == 0) goto L163
            com.mbridge.msdk.foundation.same.report.b r4 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L16b
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L16b
            r4.a(r5)     // Catch: java.lang.Throwable -> L16b
            goto L16f
        L163:
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L16b
            a(r4, r5, r6)     // Catch: java.lang.Throwable -> L16b
            goto L16f
        L16b:
            r4 = move-exception
            r4.printStackTrace()
        L16f:
            return
    }

    private static void a(android.content.Context r4, java.lang.String r5, java.lang.String r6) {
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            if (r0 == 0) goto L12
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r4 = r4.j()
        L12:
            if (r4 == 0) goto L57
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L57
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 != 0) goto L57
            com.mbridge.msdk.foundation.same.report.d.a r0 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> L4a
            r0.<init>(r4)     // Catch: java.lang.Exception -> L4a
            com.mbridge.msdk.foundation.same.net.g.d r6 = com.mbridge.msdk.foundation.same.report.e.a(r5, r4, r6)     // Catch: java.lang.Exception -> L4a
            com.mbridge.msdk.videocommon.d.b r1 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Exception -> L4a
            com.mbridge.msdk.videocommon.d.a r1 = r1.b()     // Catch: java.lang.Exception -> L4a
            java.lang.String r1 = r1.b()     // Catch: java.lang.Exception -> L4a
            java.lang.String r2 = "r_stid"
            r6.a(r2, r1)     // Catch: java.lang.Exception -> L4a
            r1 = 0
            com.mbridge.msdk.foundation.same.net.f.d r2 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L4a
            java.lang.String r2 = r2.a     // Catch: java.lang.Exception -> L4a
            com.mbridge.msdk.video.bt.module.b.f$1 r3 = new com.mbridge.msdk.video.bt.module.b.f$1     // Catch: java.lang.Exception -> L4a
            r3.<init>(r5, r4)     // Catch: java.lang.Exception -> L4a
            r0.post(r1, r2, r6, r3)     // Catch: java.lang.Exception -> L4a
            goto L57
        L4a:
            r4 = move-exception
            r4.printStackTrace()
            java.lang.String r5 = com.mbridge.msdk.video.bt.module.b.f.a
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r5, r4)
        L57:
            return
    }

    public static void a(android.content.Context r6, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r7, java.lang.String r8) {
            java.lang.String r0 = "&"
            if (r6 == 0) goto L12f
            if (r7 == 0) goto L12f
            int r1 = r7.size()     // Catch: java.lang.Throwable -> L12b
            if (r1 <= 0) goto L12f
            boolean r1 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L12b
            if (r1 != 0) goto L12f
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L12b
            r1.<init>()     // Catch: java.lang.Throwable -> L12b
            java.lang.String r2 = "key=2000054&"
            r1.append(r2)     // Catch: java.lang.Throwable -> L12b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12b
            r2.<init>()     // Catch: java.lang.Throwable -> L12b
            java.lang.String r3 = "network_type="
            r2.append(r3)     // Catch: java.lang.Throwable -> L12b
            int r3 = com.mbridge.msdk.foundation.tools.v.D(r6)     // Catch: java.lang.Throwable -> L12b
            r2.append(r3)     // Catch: java.lang.Throwable -> L12b
            r2.append(r0)     // Catch: java.lang.Throwable -> L12b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L12b
            r1.append(r2)     // Catch: java.lang.Throwable -> L12b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12b
            r2.<init>()     // Catch: java.lang.Throwable -> L12b
            java.lang.String r3 = "unit_id="
            r2.append(r3)     // Catch: java.lang.Throwable -> L12b
            r2.append(r8)     // Catch: java.lang.Throwable -> L12b
            r2.append(r0)     // Catch: java.lang.Throwable -> L12b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L12b
            r1.append(r2)     // Catch: java.lang.Throwable -> L12b
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L12b
            r2.<init>()     // Catch: java.lang.Throwable -> L12b
            r3 = 0
            r4 = r3
        L55:
            int r5 = r7.size()     // Catch: java.lang.Throwable -> L12b
            if (r4 >= r5) goto L6b
            java.lang.Object r5 = r7.get(r4)     // Catch: java.lang.Throwable -> L12b
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = (com.mbridge.msdk.foundation.entity.CampaignEx) r5     // Catch: java.lang.Throwable -> L12b
            java.lang.String r5 = r5.getId()     // Catch: java.lang.Throwable -> L12b
            r2.add(r5)     // Catch: java.lang.Throwable -> L12b
            int r4 = r4 + 1
            goto L55
        L6b:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12b
            r4.<init>()     // Catch: java.lang.Throwable -> L12b
            java.lang.String r5 = "cid="
            r4.append(r5)     // Catch: java.lang.Throwable -> L12b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L12b
            r4.append(r2)     // Catch: java.lang.Throwable -> L12b
            r4.append(r0)     // Catch: java.lang.Throwable -> L12b
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L12b
            r1.append(r2)     // Catch: java.lang.Throwable -> L12b
            java.lang.String r2 = "result=2&"
            r1.append(r2)     // Catch: java.lang.Throwable -> L12b
            java.lang.Object r2 = r7.get(r3)     // Catch: java.lang.Throwable -> L12b
            if (r2 == 0) goto L10d
            java.lang.Object r7 = r7.get(r3)     // Catch: java.lang.Throwable -> L12b
            com.mbridge.msdk.foundation.entity.CampaignEx r7 = (com.mbridge.msdk.foundation.entity.CampaignEx) r7     // Catch: java.lang.Throwable -> L12b
            java.lang.String r2 = "reason=&"
            r1.append(r2)     // Catch: java.lang.Throwable -> L12b
            java.lang.String r2 = "templateshowtype=two offer ec show success&"
            r1.append(r2)     // Catch: java.lang.Throwable -> L12b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12b
            r2.<init>()     // Catch: java.lang.Throwable -> L12b
            java.lang.String r3 = "ad_type="
            r2.append(r3)     // Catch: java.lang.Throwable -> L12b
            int r3 = r7.getAdType()     // Catch: java.lang.Throwable -> L12b
            r2.append(r3)     // Catch: java.lang.Throwable -> L12b
            r2.append(r0)     // Catch: java.lang.Throwable -> L12b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L12b
            r1.append(r2)     // Catch: java.lang.Throwable -> L12b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12b
            r2.<init>()     // Catch: java.lang.Throwable -> L12b
            java.lang.String r3 = "devid="
            r2.append(r3)     // Catch: java.lang.Throwable -> L12b
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.E()     // Catch: java.lang.Throwable -> L12b
            r2.append(r3)     // Catch: java.lang.Throwable -> L12b
            r2.append(r0)     // Catch: java.lang.Throwable -> L12b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L12b
            r1.append(r2)     // Catch: java.lang.Throwable -> L12b
            java.lang.String r2 = "rid="
            r1.append(r2)     // Catch: java.lang.Throwable -> L12b
            java.lang.String r2 = r7.getRequestId()     // Catch: java.lang.Throwable -> L12b
            r1.append(r2)     // Catch: java.lang.Throwable -> L12b
            r1.append(r0)     // Catch: java.lang.Throwable -> L12b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12b
            r2.<init>()     // Catch: java.lang.Throwable -> L12b
            java.lang.String r3 = "rid_n="
            r2.append(r3)     // Catch: java.lang.Throwable -> L12b
            java.lang.String r3 = r7.getRequestIdNotice()     // Catch: java.lang.Throwable -> L12b
            r2.append(r3)     // Catch: java.lang.Throwable -> L12b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L12b
            r1.append(r2)     // Catch: java.lang.Throwable -> L12b
            r1.append(r0)     // Catch: java.lang.Throwable -> L12b
            java.lang.String r0 = "&adspace_t="
            r1.append(r0)     // Catch: java.lang.Throwable -> L12b
            int r7 = r7.getAdSpaceT()     // Catch: java.lang.Throwable -> L12b
            r1.append(r7)     // Catch: java.lang.Throwable -> L12b
        L10d:
            com.mbridge.msdk.foundation.same.report.b r7 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L12b
            boolean r7 = r7.c()     // Catch: java.lang.Throwable -> L12b
            if (r7 == 0) goto L123
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L12b
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Throwable -> L12b
            r6.a(r7)     // Catch: java.lang.Throwable -> L12b
            goto L12f
        L123:
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Throwable -> L12b
            a(r6, r7, r8)     // Catch: java.lang.Throwable -> L12b
            goto L12f
        L12b:
            r6 = move-exception
            r6.printStackTrace()
        L12f:
            return
    }

    public static void a(android.content.Context r6, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r7, java.lang.String r8, java.lang.String r9) {
            java.lang.String r0 = "&"
            if (r6 == 0) goto L165
            if (r7 == 0) goto L165
            boolean r1 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L161
            r2 = 1
            r3 = 0
            if (r1 != 0) goto L10
            r1 = r2
            goto L11
        L10:
            r1 = r3
        L11:
            boolean r4 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L161
            r2 = r2 ^ r4
            r1 = r1 & r2
            if (r1 == 0) goto L165
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L161
            r1.<init>()     // Catch: java.lang.Throwable -> L161
            java.lang.String r2 = "key=2000054&"
            r1.append(r2)     // Catch: java.lang.Throwable -> L161
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L161
            r2.<init>()     // Catch: java.lang.Throwable -> L161
            java.lang.String r4 = "network_type="
            r2.append(r4)     // Catch: java.lang.Throwable -> L161
            int r4 = com.mbridge.msdk.foundation.tools.v.D(r6)     // Catch: java.lang.Throwable -> L161
            r2.append(r4)     // Catch: java.lang.Throwable -> L161
            r2.append(r0)     // Catch: java.lang.Throwable -> L161
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L161
            r1.append(r2)     // Catch: java.lang.Throwable -> L161
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L161
            r2.<init>()     // Catch: java.lang.Throwable -> L161
            java.lang.String r4 = "unit_id="
            r2.append(r4)     // Catch: java.lang.Throwable -> L161
            r2.append(r8)     // Catch: java.lang.Throwable -> L161
            r2.append(r0)     // Catch: java.lang.Throwable -> L161
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L161
            r1.append(r2)     // Catch: java.lang.Throwable -> L161
            int r2 = r7.size()     // Catch: java.lang.Throwable -> L161
            java.lang.String[] r2 = new java.lang.String[r2]     // Catch: java.lang.Throwable -> L161
            r4 = r3
        L5c:
            int r5 = r7.size()     // Catch: java.lang.Throwable -> L161
            if (r4 >= r5) goto L71
            java.lang.Object r5 = r7.get(r4)     // Catch: java.lang.Throwable -> L161
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = (com.mbridge.msdk.foundation.entity.CampaignEx) r5     // Catch: java.lang.Throwable -> L161
            java.lang.String r5 = r5.getId()     // Catch: java.lang.Throwable -> L161
            r2[r4] = r5     // Catch: java.lang.Throwable -> L161
            int r4 = r4 + 1
            goto L5c
        L71:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L161
            r4.<init>()     // Catch: java.lang.Throwable -> L161
            java.lang.String r5 = "cid="
            r4.append(r5)     // Catch: java.lang.Throwable -> L161
            r4.append(r2)     // Catch: java.lang.Throwable -> L161
            r4.append(r0)     // Catch: java.lang.Throwable -> L161
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L161
            r1.append(r2)     // Catch: java.lang.Throwable -> L161
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L161
            r2.<init>()     // Catch: java.lang.Throwable -> L161
            java.lang.String r4 = "reason="
            r2.append(r4)     // Catch: java.lang.Throwable -> L161
            r2.append(r9)     // Catch: java.lang.Throwable -> L161
            r2.append(r0)     // Catch: java.lang.Throwable -> L161
            java.lang.String r9 = r2.toString()     // Catch: java.lang.Throwable -> L161
            r1.append(r9)     // Catch: java.lang.Throwable -> L161
            java.lang.String r9 = "result=1&"
            r1.append(r9)     // Catch: java.lang.Throwable -> L161
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L161
            r9.<init>()     // Catch: java.lang.Throwable -> L161
            java.lang.String r2 = "devid="
            r9.append(r2)     // Catch: java.lang.Throwable -> L161
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.E()     // Catch: java.lang.Throwable -> L161
            r9.append(r2)     // Catch: java.lang.Throwable -> L161
            r9.append(r0)     // Catch: java.lang.Throwable -> L161
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L161
            r1.append(r9)     // Catch: java.lang.Throwable -> L161
            java.lang.Object r9 = r7.get(r3)     // Catch: java.lang.Throwable -> L161
            if (r9 == 0) goto L143
            java.lang.Object r7 = r7.get(r3)     // Catch: java.lang.Throwable -> L161
            com.mbridge.msdk.foundation.entity.CampaignEx r7 = (com.mbridge.msdk.foundation.entity.CampaignEx) r7     // Catch: java.lang.Throwable -> L161
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L161
            r9.<init>()     // Catch: java.lang.Throwable -> L161
            java.lang.String r2 = "ad_type="
            r9.append(r2)     // Catch: java.lang.Throwable -> L161
            int r2 = r7.getAdType()     // Catch: java.lang.Throwable -> L161
            r9.append(r2)     // Catch: java.lang.Throwable -> L161
            r9.append(r0)     // Catch: java.lang.Throwable -> L161
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L161
            r1.append(r9)     // Catch: java.lang.Throwable -> L161
            java.lang.String r9 = "rid="
            r1.append(r9)     // Catch: java.lang.Throwable -> L161
            java.lang.String r9 = r7.getRequestId()     // Catch: java.lang.Throwable -> L161
            r1.append(r9)     // Catch: java.lang.Throwable -> L161
            r1.append(r0)     // Catch: java.lang.Throwable -> L161
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L161
            r9.<init>()     // Catch: java.lang.Throwable -> L161
            java.lang.String r2 = "rid_n="
            r9.append(r2)     // Catch: java.lang.Throwable -> L161
            java.lang.String r2 = r7.getRequestIdNotice()     // Catch: java.lang.Throwable -> L161
            r9.append(r2)     // Catch: java.lang.Throwable -> L161
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L161
            r1.append(r9)     // Catch: java.lang.Throwable -> L161
            r1.append(r0)     // Catch: java.lang.Throwable -> L161
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L161
            r9.<init>()     // Catch: java.lang.Throwable -> L161
            java.lang.String r2 = "templateshowtype="
            r9.append(r2)     // Catch: java.lang.Throwable -> L161
            int r2 = r7.getMof_tplid()     // Catch: java.lang.Throwable -> L161
            r9.append(r2)     // Catch: java.lang.Throwable -> L161
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L161
            r1.append(r9)     // Catch: java.lang.Throwable -> L161
            r1.append(r0)     // Catch: java.lang.Throwable -> L161
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L161
            r9.<init>()     // Catch: java.lang.Throwable -> L161
            java.lang.String r0 = "adspace_t="
            r9.append(r0)     // Catch: java.lang.Throwable -> L161
            int r7 = r7.getAdSpaceT()     // Catch: java.lang.Throwable -> L161
            r9.append(r7)     // Catch: java.lang.Throwable -> L161
            java.lang.String r7 = r9.toString()     // Catch: java.lang.Throwable -> L161
            r1.append(r7)     // Catch: java.lang.Throwable -> L161
        L143:
            com.mbridge.msdk.foundation.same.report.b r7 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L161
            boolean r7 = r7.c()     // Catch: java.lang.Throwable -> L161
            if (r7 == 0) goto L159
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L161
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Throwable -> L161
            r6.a(r7)     // Catch: java.lang.Throwable -> L161
            goto L165
        L159:
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Throwable -> L161
            a(r6, r7, r8)     // Catch: java.lang.Throwable -> L161
            goto L165
        L161:
            r6 = move-exception
            r6.printStackTrace()
        L165:
            return
    }

    public static void a(com.mbridge.msdk.foundation.entity.CampaignEx r5, java.lang.String r6, int r7) {
            java.lang.String r0 = "&"
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L138
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> L138
            if (r1 == 0) goto L13c
            if (r5 == 0) goto L13c
            boolean r2 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L138
            if (r2 != 0) goto L13c
            java.lang.StringBuffer r2 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L138
            r2.<init>()     // Catch: java.lang.Throwable -> L138
            java.lang.String r3 = "key=2000115&"
            r2.append(r3)     // Catch: java.lang.Throwable -> L138
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L138
            r3.<init>()     // Catch: java.lang.Throwable -> L138
            java.lang.String r4 = "network_type="
            r3.append(r4)     // Catch: java.lang.Throwable -> L138
            int r4 = com.mbridge.msdk.foundation.tools.v.D(r1)     // Catch: java.lang.Throwable -> L138
            r3.append(r4)     // Catch: java.lang.Throwable -> L138
            r3.append(r0)     // Catch: java.lang.Throwable -> L138
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L138
            r2.append(r3)     // Catch: java.lang.Throwable -> L138
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L138
            r3.<init>()     // Catch: java.lang.Throwable -> L138
            java.lang.String r4 = "unit_id="
            r3.append(r4)     // Catch: java.lang.Throwable -> L138
            r3.append(r6)     // Catch: java.lang.Throwable -> L138
            r3.append(r0)     // Catch: java.lang.Throwable -> L138
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L138
            r2.append(r3)     // Catch: java.lang.Throwable -> L138
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L138
            r3.<init>()     // Catch: java.lang.Throwable -> L138
            java.lang.String r4 = "cid="
            r3.append(r4)     // Catch: java.lang.Throwable -> L138
            java.lang.String r4 = r5.getId()     // Catch: java.lang.Throwable -> L138
            r3.append(r4)     // Catch: java.lang.Throwable -> L138
            r3.append(r0)     // Catch: java.lang.Throwable -> L138
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L138
            r2.append(r3)     // Catch: java.lang.Throwable -> L138
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L138
            r3.<init>()     // Catch: java.lang.Throwable -> L138
            java.lang.String r4 = "play_cur_time="
            r3.append(r4)     // Catch: java.lang.Throwable -> L138
            r3.append(r7)     // Catch: java.lang.Throwable -> L138
            r3.append(r0)     // Catch: java.lang.Throwable -> L138
            java.lang.String r7 = r3.toString()     // Catch: java.lang.Throwable -> L138
            r2.append(r7)     // Catch: java.lang.Throwable -> L138
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L138
            r7.<init>()     // Catch: java.lang.Throwable -> L138
            java.lang.String r3 = "reason=close ad in advance "
            r7.append(r3)     // Catch: java.lang.Throwable -> L138
            int r3 = r5.getMof_tplid()     // Catch: java.lang.Throwable -> L138
            r7.append(r3)     // Catch: java.lang.Throwable -> L138
            r7.append(r0)     // Catch: java.lang.Throwable -> L138
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L138
            r2.append(r7)     // Catch: java.lang.Throwable -> L138
            java.lang.String r7 = "result=1&"
            r2.append(r7)     // Catch: java.lang.Throwable -> L138
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L138
            r7.<init>()     // Catch: java.lang.Throwable -> L138
            java.lang.String r3 = "devid="
            r7.append(r3)     // Catch: java.lang.Throwable -> L138
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.E()     // Catch: java.lang.Throwable -> L138
            r7.append(r3)     // Catch: java.lang.Throwable -> L138
            r7.append(r0)     // Catch: java.lang.Throwable -> L138
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L138
            r2.append(r7)     // Catch: java.lang.Throwable -> L138
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L138
            r7.<init>()     // Catch: java.lang.Throwable -> L138
            java.lang.String r3 = "ad_type="
            r7.append(r3)     // Catch: java.lang.Throwable -> L138
            int r3 = r5.getAdType()     // Catch: java.lang.Throwable -> L138
            r7.append(r3)     // Catch: java.lang.Throwable -> L138
            r7.append(r0)     // Catch: java.lang.Throwable -> L138
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L138
            r2.append(r7)     // Catch: java.lang.Throwable -> L138
            java.lang.String r7 = "rid="
            r2.append(r7)     // Catch: java.lang.Throwable -> L138
            java.lang.String r7 = r5.getRequestId()     // Catch: java.lang.Throwable -> L138
            r2.append(r7)     // Catch: java.lang.Throwable -> L138
            r2.append(r0)     // Catch: java.lang.Throwable -> L138
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L138
            r7.<init>()     // Catch: java.lang.Throwable -> L138
            java.lang.String r3 = "rid_n="
            r7.append(r3)     // Catch: java.lang.Throwable -> L138
            java.lang.String r3 = r5.getRequestIdNotice()     // Catch: java.lang.Throwable -> L138
            r7.append(r3)     // Catch: java.lang.Throwable -> L138
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L138
            r2.append(r7)     // Catch: java.lang.Throwable -> L138
            r2.append(r0)     // Catch: java.lang.Throwable -> L138
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L138
            r7.<init>()     // Catch: java.lang.Throwable -> L138
            java.lang.String r0 = "adspace_t="
            r7.append(r0)     // Catch: java.lang.Throwable -> L138
            int r5 = r5.getAdSpaceT()     // Catch: java.lang.Throwable -> L138
            r7.append(r5)     // Catch: java.lang.Throwable -> L138
            java.lang.String r5 = r7.toString()     // Catch: java.lang.Throwable -> L138
            r2.append(r5)     // Catch: java.lang.Throwable -> L138
            com.mbridge.msdk.foundation.same.report.b r5 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L138
            boolean r5 = r5.c()     // Catch: java.lang.Throwable -> L138
            if (r5 == 0) goto L130
            com.mbridge.msdk.foundation.same.report.b r5 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L138
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Throwable -> L138
            r5.a(r6)     // Catch: java.lang.Throwable -> L138
            goto L13c
        L130:
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Throwable -> L138
            a(r1, r5, r6)     // Catch: java.lang.Throwable -> L138
            goto L13c
        L138:
            r5 = move-exception
            r5.printStackTrace()
        L13c:
            return
    }
}
