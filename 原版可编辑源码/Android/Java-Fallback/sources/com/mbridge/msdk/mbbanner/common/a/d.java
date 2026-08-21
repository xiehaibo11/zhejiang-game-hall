package com.mbridge.msdk.mbbanner.common.a;

public class d {
    private static final java.lang.String a = null;

    static {
            java.lang.Class<com.mbridge.msdk.mbbanner.common.a.d> r0 = com.mbridge.msdk.mbbanner.common.a.d.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.mbbanner.common.a.d.a = r0
            return
    }

    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.foundation.same.net.g.d a(boolean r7, android.content.Context r8, java.lang.String r9, java.lang.String r10, int r11, com.mbridge.msdk.mbbanner.common.a.b r12) {
            com.mbridge.msdk.foundation.controller.a r7 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r7 = r7.k()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            r0.append(r1)
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.l()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r0)
            java.lang.String r1 = com.mbridge.msdk.mbbanner.common.util.BannerUtils.getTtcIds(r8, r9)
            java.lang.String r8 = com.mbridge.msdk.foundation.tools.ae.b(r8, r9)
            java.lang.String r2 = com.mbridge.msdk.mbbanner.common.util.BannerUtils.getInstallIds()
            java.lang.String r3 = "banner"
            java.lang.String r3 = com.mbridge.msdk.foundation.same.a.d.a(r9, r3)
            java.lang.String r4 = com.mbridge.msdk.mbbanner.common.util.BannerUtils.getCloseIds(r9)
            com.mbridge.msdk.foundation.same.net.g.d r5 = new com.mbridge.msdk.foundation.same.net.g.d
            r5.<init>()
            java.lang.String r6 = "app_id"
            com.mbridge.msdk.foundation.same.net.f.b.a(r5, r6, r7)
            java.lang.String r7 = "unit_id"
            com.mbridge.msdk.foundation.same.net.f.b.a(r5, r7, r9)
            java.lang.String r7 = r12.d()
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 != 0) goto L63
            java.lang.String r7 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
            java.lang.String r9 = r12.d()
            com.mbridge.msdk.foundation.same.net.f.b.a(r5, r7, r9)
        L63:
            java.lang.String r7 = "sign"
            com.mbridge.msdk.foundation.same.net.f.b.a(r5, r7, r0)
            java.lang.String r7 = "1"
            java.lang.String r9 = "only_impression"
            com.mbridge.msdk.foundation.same.net.f.b.a(r5, r9, r7)
            java.lang.String r9 = "ping_mode"
            com.mbridge.msdk.foundation.same.net.f.b.a(r5, r9, r7)
            java.lang.String r9 = "ttc_ids"
            com.mbridge.msdk.foundation.same.net.f.b.a(r5, r9, r1)
            java.lang.String r9 = com.mbridge.msdk.foundation.same.net.g.d.c
            com.mbridge.msdk.foundation.same.net.f.b.a(r5, r9, r8)
            java.lang.String r8 = "install_ids"
            com.mbridge.msdk.foundation.same.net.f.b.a(r5, r8, r2)
            java.lang.String r8 = "ad_source_id"
            com.mbridge.msdk.foundation.same.net.f.b.a(r5, r8, r7)
            java.lang.String r7 = com.mbridge.msdk.foundation.same.net.g.d.a
            com.mbridge.msdk.foundation.same.net.f.b.a(r5, r7, r10)
            java.lang.String r7 = "ad_type"
            java.lang.String r8 = "296"
            com.mbridge.msdk.foundation.same.net.f.b.a(r5, r7, r8)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r11)
            java.lang.String r8 = ""
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            java.lang.String r9 = "offset"
            com.mbridge.msdk.foundation.same.net.f.b.a(r5, r9, r7)
            java.lang.String r7 = com.mbridge.msdk.foundation.same.net.g.d.b
            com.mbridge.msdk.foundation.same.net.f.b.a(r5, r7, r3)
            java.lang.String r7 = "close_id"
            com.mbridge.msdk.foundation.same.net.f.b.a(r5, r7, r4)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r9 = r12.a()
            r7.append(r9)
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            java.lang.String r9 = "unit_size"
            com.mbridge.msdk.foundation.same.net.f.b.a(r5, r9, r7)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            int r9 = r12.b()
            r7.append(r9)
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            java.lang.String r9 = "refresh_time"
            com.mbridge.msdk.foundation.same.net.f.b.a(r5, r9, r7)
            java.lang.String r7 = r12.c()
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 != 0) goto L106
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r9 = r12.c()
            r7.append(r9)
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            java.lang.String r8 = "token"
            com.mbridge.msdk.foundation.same.net.f.b.a(r5, r8, r7)
        L106:
            return r5
    }
}
