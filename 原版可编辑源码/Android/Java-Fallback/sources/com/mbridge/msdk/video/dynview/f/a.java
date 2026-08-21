package com.mbridge.msdk.video.dynview.f;

public class a {
    private static final java.lang.String a = null;



    static {
            java.lang.Class<com.mbridge.msdk.video.dynview.f.a> r0 = com.mbridge.msdk.video.dynview.f.a.class
            java.lang.String r0 = r0.getName()
            com.mbridge.msdk.video.dynview.f.a.a = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.String a() {
            java.lang.String r0 = com.mbridge.msdk.video.dynview.f.a.a
            return r0
    }

    public static void a(android.content.Context r7, com.mbridge.msdk.foundation.entity.CampaignEx r8, java.lang.String r9, android.view.View r10) {
            if (r7 == 0) goto L3f
            if (r8 == 0) goto L3f
            if (r8 == 0) goto L29
            com.mbridge.msdk.foundation.entity.l r0 = r8.getNativeVideoTracking()
            if (r0 == 0) goto L29
            com.mbridge.msdk.foundation.entity.l r0 = r8.getNativeVideoTracking()
            java.lang.String[] r0 = r0.h()
            if (r0 == 0) goto L29
            r5 = 0
            r6 = 0
            java.lang.String r3 = r8.getCampaignUnitId()
            com.mbridge.msdk.foundation.entity.l r0 = r8.getNativeVideoTracking()
            java.lang.String[] r4 = r0.h()
            r1 = r7
            r2 = r8
            com.mbridge.msdk.click.b.a(r1, r2, r3, r4, r5, r6)
        L29:
            com.mbridge.msdk.click.b r0 = new com.mbridge.msdk.click.b
            r0.<init>(r7, r9)
            boolean r7 = r10 instanceof android.view.ViewGroup
            if (r7 == 0) goto L3c
            android.view.ViewGroup r10 = (android.view.ViewGroup) r10
            com.mbridge.msdk.video.dynview.f.a$2 r7 = new com.mbridge.msdk.video.dynview.f.a$2
            r7.<init>(r10)
            r0.a(r7)
        L3c:
            r0.c(r8)
        L3f:
            return
    }

    public static void a(com.mbridge.msdk.foundation.entity.CampaignEx r4, android.content.Context r5, java.lang.String r6, java.lang.String r7, java.lang.String r8) {
            java.lang.String r0 = "&"
            if (r5 == 0) goto L121
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L11d
            if (r1 != 0) goto L121
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L11d
            if (r1 != 0) goto L121
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L11d
            r1.<init>()     // Catch: java.lang.Throwable -> L11d
            java.lang.String r2 = "key=2000091&"
            r1.append(r2)     // Catch: java.lang.Throwable -> L11d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L11d
            r2.<init>()     // Catch: java.lang.Throwable -> L11d
            java.lang.String r3 = "network_type="
            r2.append(r3)     // Catch: java.lang.Throwable -> L11d
            int r3 = com.mbridge.msdk.foundation.tools.v.D(r5)     // Catch: java.lang.Throwable -> L11d
            r2.append(r3)     // Catch: java.lang.Throwable -> L11d
            r2.append(r0)     // Catch: java.lang.Throwable -> L11d
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L11d
            r1.append(r2)     // Catch: java.lang.Throwable -> L11d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L11d
            r2.<init>()     // Catch: java.lang.Throwable -> L11d
            java.lang.String r3 = "unit_id="
            r2.append(r3)     // Catch: java.lang.Throwable -> L11d
            r2.append(r7)     // Catch: java.lang.Throwable -> L11d
            r2.append(r0)     // Catch: java.lang.Throwable -> L11d
            java.lang.String r7 = r2.toString()     // Catch: java.lang.Throwable -> L11d
            r1.append(r7)     // Catch: java.lang.Throwable -> L11d
            java.lang.String r7 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Throwable -> L11d
            boolean r7 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L11d
            if (r7 != 0) goto L6d
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L11d
            r7.<init>()     // Catch: java.lang.Throwable -> L11d
            java.lang.String r2 = "b="
            r7.append(r2)     // Catch: java.lang.Throwable -> L11d
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Throwable -> L11d
            r7.append(r2)     // Catch: java.lang.Throwable -> L11d
            r7.append(r0)     // Catch: java.lang.Throwable -> L11d
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L11d
            r1.append(r7)     // Catch: java.lang.Throwable -> L11d
        L6d:
            java.lang.String r7 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Throwable -> L11d
            boolean r7 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L11d
            if (r7 != 0) goto L8e
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L11d
            r7.<init>()     // Catch: java.lang.Throwable -> L11d
            java.lang.String r2 = "c="
            r7.append(r2)     // Catch: java.lang.Throwable -> L11d
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Throwable -> L11d
            r7.append(r2)     // Catch: java.lang.Throwable -> L11d
            r7.append(r0)     // Catch: java.lang.Throwable -> L11d
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L11d
            r1.append(r7)     // Catch: java.lang.Throwable -> L11d
        L8e:
            java.lang.String r7 = "hb=0&"
            r1.append(r7)     // Catch: java.lang.Throwable -> L11d
            boolean r7 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L11d
            if (r7 != 0) goto La4
            java.lang.String r7 = "rid_n="
            r1.append(r7)     // Catch: java.lang.Throwable -> L11d
            r1.append(r8)     // Catch: java.lang.Throwable -> L11d
            r1.append(r0)     // Catch: java.lang.Throwable -> L11d
        La4:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L11d
            r7.<init>()     // Catch: java.lang.Throwable -> L11d
            java.lang.String r8 = "reason="
            r7.append(r8)     // Catch: java.lang.Throwable -> L11d
            r7.append(r6)     // Catch: java.lang.Throwable -> L11d
            java.lang.String r6 = r7.toString()     // Catch: java.lang.Throwable -> L11d
            r1.append(r6)     // Catch: java.lang.Throwable -> L11d
            if (r4 == 0) goto Ld4
            com.mbridge.msdk.foundation.entity.CampaignEx$c r6 = r4.getRewardTemplateMode()     // Catch: java.lang.Throwable -> L11d
            if (r6 == 0) goto Ld4
            java.lang.String r6 = "&dyview="
            r1.append(r6)     // Catch: java.lang.Throwable -> L11d
            com.mbridge.msdk.foundation.entity.CampaignEx$c r4 = r4.getRewardTemplateMode()     // Catch: java.lang.Throwable -> L11d
            java.lang.String r4 = r4.e()     // Catch: java.lang.Throwable -> L11d
            int r4 = com.mbridge.msdk.foundation.tools.ae.l(r4)     // Catch: java.lang.Throwable -> L11d
            r1.append(r4)     // Catch: java.lang.Throwable -> L11d
        Ld4:
            com.mbridge.msdk.foundation.same.report.b r4 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L11d
            boolean r4 = r4.c()     // Catch: java.lang.Throwable -> L11d
            if (r4 == 0) goto Lea
            com.mbridge.msdk.foundation.same.report.b r4 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L11d
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L11d
            r4.a(r5)     // Catch: java.lang.Throwable -> L11d
            goto L121
        Lea:
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L11d
            if (r5 == 0) goto L121
            boolean r6 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L11d
            if (r6 != 0) goto L121
            com.mbridge.msdk.foundation.same.report.d.a r6 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> L10f java.lang.Throwable -> L11d
            r6.<init>(r5)     // Catch: java.lang.Exception -> L10f java.lang.Throwable -> L11d
            com.mbridge.msdk.foundation.same.net.g.d r4 = com.mbridge.msdk.foundation.same.report.e.a(r4, r5)     // Catch: java.lang.Exception -> L10f java.lang.Throwable -> L11d
            r5 = 0
            com.mbridge.msdk.foundation.same.net.f.d r7 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L10f java.lang.Throwable -> L11d
            java.lang.String r7 = r7.a     // Catch: java.lang.Exception -> L10f java.lang.Throwable -> L11d
            com.mbridge.msdk.video.dynview.f.a$1 r8 = new com.mbridge.msdk.video.dynview.f.a$1     // Catch: java.lang.Exception -> L10f java.lang.Throwable -> L11d
            r8.<init>()     // Catch: java.lang.Exception -> L10f java.lang.Throwable -> L11d
            r6.post(r5, r7, r4, r8)     // Catch: java.lang.Exception -> L10f java.lang.Throwable -> L11d
            goto L121
        L10f:
            r4 = move-exception
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L11d
            java.lang.String r5 = com.mbridge.msdk.video.dynview.f.a.a     // Catch: java.lang.Throwable -> L11d
            java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> L11d
            com.mbridge.msdk.foundation.tools.z.d(r5, r4)     // Catch: java.lang.Throwable -> L11d
            goto L121
        L11d:
            r4 = move-exception
            r4.printStackTrace()
        L121:
            return
    }

    public static void a(com.mbridge.msdk.foundation.entity.CampaignUnit r9, int r10, int r11, java.lang.String r12) {
            if (r9 == 0) goto Lb0
            java.util.ArrayList r0 = r9.getAds()
            if (r0 == 0) goto Lb0
            java.util.ArrayList r0 = r9.getAds()
            int r0 = r0.size()
            if (r0 <= 0) goto Lb0
            java.util.ArrayList r0 = r9.getAds()
            java.lang.Object r0 = r0.get(r10)
            if (r0 == 0) goto Lb0
            if (r11 != 0) goto L2d
            java.util.ArrayList r0 = r9.getAds()
            java.lang.Object r0 = r0.get(r10)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            boolean r0 = r0.mMoreOfferImpShow
            if (r0 == 0) goto L2d
            return
        L2d:
            java.util.ArrayList r0 = r9.getAds()
            java.lang.Object r0 = r0.get(r10)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            java.lang.String r0 = r0.getendcard_url()
            java.lang.String r1 = "mof_testuid"
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ak.a(r0, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L5b
            java.util.ArrayList r0 = r9.getAds()
            java.lang.Object r0 = r0.get(r10)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            java.lang.String r0 = r0.getendcard_url()
            java.lang.String r1 = "mof_uid"
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ak.a(r0, r1)
        L5b:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L63
            r4 = r12
            goto L64
        L63:
            r4 = r0
        L64:
            r12 = 0
            if (r11 == 0) goto L80
            r0 = 1
            if (r11 == r0) goto L6f
            java.lang.String r11 = ""
            r5 = r11
            r8 = r12
            goto L92
        L6f:
            int r11 = com.mbridge.msdk.click.a.a.h
            java.util.ArrayList r12 = r9.getAds()
            java.lang.Object r12 = r12.get(r10)
            com.mbridge.msdk.foundation.entity.CampaignEx r12 = (com.mbridge.msdk.foundation.entity.CampaignEx) r12
            java.lang.String r12 = r12.getOnlyImpressionURL()
            goto L90
        L80:
            int r11 = com.mbridge.msdk.click.a.a.g
            java.util.ArrayList r12 = r9.getAds()
            java.lang.Object r12 = r12.get(r10)
            com.mbridge.msdk.foundation.entity.CampaignEx r12 = (com.mbridge.msdk.foundation.entity.CampaignEx) r12
            java.lang.String r12 = r12.getImpressionURL()
        L90:
            r8 = r11
            r5 = r12
        L92:
            r6 = 0
            r7 = 1
            boolean r11 = android.text.TextUtils.isEmpty(r5)
            if (r11 != 0) goto Lb0
            com.mbridge.msdk.foundation.controller.a r11 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r2 = r11.j()
            java.util.ArrayList r9 = r9.getAds()
            java.lang.Object r9 = r9.get(r10)
            r3 = r9
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3
            com.mbridge.msdk.click.b.a(r2, r3, r4, r5, r6, r7, r8)
        Lb0:
            return
    }
}
