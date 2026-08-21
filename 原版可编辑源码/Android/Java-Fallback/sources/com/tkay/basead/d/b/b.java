package com.tkay.basead.d.b;

public final class b {
    public static final java.lang.String a = "sdk_updatetime";

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final com.tkay.core.common.f.y a(com.tkay.core.common.f.i r5, org.json.JSONObject r6) {
            r0 = 0
            java.lang.String r1 = com.tkay.core.common.b.f.c.d     // Catch: java.lang.Throwable -> L19b
            org.json.JSONObject r1 = r6.optJSONObject(r1)     // Catch: java.lang.Throwable -> L19b
            if (r1 != 0) goto La
            return r0
        La:
            java.lang.String r2 = "offers"
            org.json.JSONArray r1 = r1.optJSONArray(r2)     // Catch: java.lang.Throwable -> L19b
            r2 = 0
            org.json.JSONObject r1 = r1.optJSONObject(r2)     // Catch: java.lang.Throwable -> L19b
            com.tkay.core.common.f.y r2 = new com.tkay.core.common.f.y     // Catch: java.lang.Throwable -> L19b
            r2.<init>()     // Catch: java.lang.Throwable -> L19b
            int r5 = r5.f     // Catch: java.lang.Throwable -> L19b
            r2.a(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "oid"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.j(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "c_id"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.k(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "pkg"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.w(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "title"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.l(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "desc"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.m(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "rating"
            int r5 = r1.optInt(r5)     // Catch: java.lang.Throwable -> L19b
            r2.f(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "icon_u"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.n(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "full_u"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.p(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "unit_type"
            int r5 = r1.optInt(r5)     // Catch: java.lang.Throwable -> L19b
            r2.d(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "tp_logo_u"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.q(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "cta"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.r(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "video_u"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.s(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "video_l"
            int r5 = r1.optInt(r5)     // Catch: java.lang.Throwable -> L19b
            long r3 = (long) r5     // Catch: java.lang.Throwable -> L19b
            r2.d(r3)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "video_r"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.J(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "ec_u"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.K(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "store_u"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.t(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "link_type"
            int r5 = r1.optInt(r5)     // Catch: java.lang.Throwable -> L19b
            r2.e(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "click_u"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.v(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "deeplink"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.u(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "r_target"
            int r5 = r1.optInt(r5)     // Catch: java.lang.Throwable -> L19b
            r2.g(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "expire"
            long r3 = r1.optLong(r5)     // Catch: java.lang.Throwable -> L19b
            r2.a(r3)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "ad_logo_title"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.x(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "crt_type"
            r3 = 1
            int r5 = r1.optInt(r5, r3)     // Catch: java.lang.Throwable -> L19b
            r2.j(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "img_list"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.L(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "banner_xhtml"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.M(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "sdk_updatetime"
            long r5 = r6.optLong(r5)     // Catch: java.lang.Throwable -> L19b
            r2.b(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "offer_firm_id"
            int r5 = r1.optInt(r5)     // Catch: java.lang.Throwable -> L19b
            r2.c(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "jump_url"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.i(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "app_name"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.N(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "publisher"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.y(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "app_version"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.z(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "privacy"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.A(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "permission"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.B(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "wv_ctrl"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.C(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "ctrl"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            com.tkay.core.common.f.aa r5 = com.tkay.core.common.f.aa.c(r5)     // Catch: java.lang.Throwable -> L19b
            r2.a(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "tk"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            com.tkay.core.common.f.ab r5 = com.tkay.core.common.f.ab.a(r5)     // Catch: java.lang.Throwable -> L19b
            r2.a(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "adp_type"
            int r5 = r1.optInt(r5)     // Catch: java.lang.Throwable -> L19b
            r2.b(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "offer_html"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.e(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "offer_url"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.f(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "wx_username"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.c(r5)     // Catch: java.lang.Throwable -> L19b
            java.lang.String r5 = "wx_path"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L19b
            r2.d(r5)     // Catch: java.lang.Throwable -> L19b
            return r2
        L19b:
            return r0
    }
}
