package com.tkay.core.common.a;

public final class c {
    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tkay.core.common.f.f a(java.lang.String r7, org.json.JSONObject r8, int r9) {
            java.lang.String r0 = ""
            r1 = 0
            java.lang.String r2 = com.tkay.core.common.b.f.c.d     // Catch: java.lang.Throwable -> L227
            org.json.JSONObject r2 = r8.optJSONObject(r2)     // Catch: java.lang.Throwable -> L227
            java.lang.String r3 = "seatbid"
            if (r2 != 0) goto L14
            boolean r2 = r8.has(r3)     // Catch: java.lang.Throwable -> L227
            if (r2 != 0) goto L15
            return r1
        L14:
            r8 = r2
        L15:
            org.json.JSONArray r8 = r8.optJSONArray(r3)     // Catch: java.lang.Throwable -> L227
            r2 = 0
            org.json.JSONObject r8 = r8.optJSONObject(r2)     // Catch: java.lang.Throwable -> L227
            com.tkay.core.common.f.f r2 = new com.tkay.core.common.f.f     // Catch: java.lang.Throwable -> L227
            r2.<init>()     // Catch: java.lang.Throwable -> L227
            r2.b(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "oid"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.j(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "c_id"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.k(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "pkg"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.w(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "title"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.l(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "desc"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.m(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "rating"
            int r7 = r8.optInt(r7)     // Catch: java.lang.Throwable -> L227
            r2.f(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "icon_u"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.n(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "full_u"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.p(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "unit_type"
            int r7 = r8.optInt(r7)     // Catch: java.lang.Throwable -> L227
            r2.d(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "tp_logo_u"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.q(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "cta"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.r(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "video_u"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.s(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "video_l"
            int r7 = r8.optInt(r7)     // Catch: java.lang.Throwable -> L227
            long r3 = (long) r7     // Catch: java.lang.Throwable -> L227
            r2.d(r3)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "video_r"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.J(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "ec_u"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.K(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "store_u"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.t(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "link_type"
            int r7 = r8.optInt(r7)     // Catch: java.lang.Throwable -> L227
            r2.e(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "click_u"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.v(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "deeplink"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.u(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "crt_type"
            r3 = 1
            int r7 = r8.optInt(r7, r3)     // Catch: java.lang.Throwable -> L227
            r2.j(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "img_list"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.L(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "banner_xhtml"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.M(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "offer_firm_id"
            int r7 = r8.optInt(r7)     // Catch: java.lang.Throwable -> L227
            r2.c(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "jump_url"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.i(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "sdk_resp"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L11a
            boolean r4 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L11a
            if (r4 != 0) goto L11a
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L11a
            r4.<init>(r7)     // Catch: java.lang.Throwable -> L11a
            java.lang.String r7 = "data"
            java.lang.String r7 = r4.optString(r7)     // Catch: java.lang.Throwable -> L11a
            r2.a(r7)     // Catch: java.lang.Throwable -> L11a
        L11a:
            java.lang.String r7 = "app_name"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.N(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "publisher"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.y(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "app_version"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.z(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "privacy"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.A(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "permission"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.B(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "mtr_ver"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.h(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "o_im_cap_sw"
            r4 = 2
            int r7 = r8.optInt(r7, r4)     // Catch: java.lang.Throwable -> L227
            r2.k(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "o_cl_cap_sw"
            int r7 = r8.optInt(r7, r4)     // Catch: java.lang.Throwable -> L227
            r2.l(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "c_im_cap_sw"
            int r7 = r8.optInt(r7, r4)     // Catch: java.lang.Throwable -> L227
            r2.m(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "c_cl_cap_sw"
            int r7 = r8.optInt(r7, r4)     // Catch: java.lang.Throwable -> L227
            r2.n(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "expire"
            r5 = 0
            long r5 = r8.optLong(r7, r5)     // Catch: java.lang.Throwable -> L227
            r2.a(r5)     // Catch: java.lang.Throwable -> L227
            r7 = 67
            if (r9 != r7) goto L188
            r2.a(r4)     // Catch: java.lang.Throwable -> L227
            goto L18b
        L188:
            r2.a(r3)     // Catch: java.lang.Throwable -> L227
        L18b:
            java.lang.String r7 = "ctrl"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            com.tkay.core.common.f.aa r7 = com.tkay.core.common.f.aa.c(r7)     // Catch: java.lang.Throwable -> L227
            r2.a(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "tk"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            com.tkay.core.common.f.ab r7 = com.tkay.core.common.f.ab.a(r7)     // Catch: java.lang.Throwable -> L227
            r2.a(r7)     // Catch: java.lang.Throwable -> L227
            org.json.JSONObject r7 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r9 = "nw_info"
            java.lang.String r9 = r8.optString(r9)     // Catch: java.lang.Throwable -> L1cb
            r7.<init>(r9)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r9 = "app_id"
            java.lang.String r9 = r7.optString(r9)     // Catch: java.lang.Throwable -> L1cb
            r2.E(r9)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r9 = "app_key"
            java.lang.String r9 = r7.optString(r9)     // Catch: java.lang.Throwable -> L1cb
            r2.F(r9)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r9 = "unit_id"
            java.lang.String r7 = r7.optString(r9)     // Catch: java.lang.Throwable -> L1cb
            r2.G(r7)     // Catch: java.lang.Throwable -> L1cb
        L1cb:
            java.lang.String r7 = "dsp_id"
            java.lang.String r7 = r8.optString(r7, r0)     // Catch: java.lang.Throwable -> L227
            r2.H(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "dsp_oid"
            java.lang.String r7 = r8.optString(r7, r0)     // Catch: java.lang.Throwable -> L227
            r2.I(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "fca"
            r9 = -1
            int r7 = r8.optInt(r7, r9)     // Catch: java.lang.Throwable -> L227
            r2.h(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "install_sw"
            int r7 = r8.optInt(r7, r9)     // Catch: java.lang.Throwable -> L227
            r2.i(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "wv_ctrl"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.C(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "adp_type"
            int r7 = r8.optInt(r7)     // Catch: java.lang.Throwable -> L227
            r2.b(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "offer_html"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.e(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "offer_url"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.f(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "wx_username"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.c(r7)     // Catch: java.lang.Throwable -> L227
            java.lang.String r7 = "wx_path"
            java.lang.String r7 = r8.optString(r7)     // Catch: java.lang.Throwable -> L227
            r2.d(r7)     // Catch: java.lang.Throwable -> L227
            return r2
        L227:
            return r1
    }
}
