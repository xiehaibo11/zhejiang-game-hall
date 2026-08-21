package com.tkay.core.common.a;

import android.text.TextUtils;
import com.sigmob.sdk.base.mta.PointCategory;
import com.tkay.basead.b.a;
import com.tkay.core.common.b.f;
import com.tkay.core.common.f.aa;
import com.tkay.core.common.f.ab;
import com.tkay.core.common.l;
import com.tkay.expressad.foundation.d.r;
import org.json.JSONObject;

public final class c {
    public static com.tkay.core.common.f.f a(String str, JSONObject jSONObject, int i) {
        try {
            JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(f.c.d);
            if (jSONObjectOptJSONObject != null) {
                jSONObject = jSONObjectOptJSONObject;
            } else if (!jSONObject.has("seatbid")) {
                return null;
            }
            JSONObject jSONObjectOptJSONObject2 = jSONObject.optJSONArray("seatbid").optJSONObject(0);
            com.tkay.core.common.f.f fVar = new com.tkay.core.common.f.f();
            fVar.b(str);
            fVar.j(jSONObjectOptJSONObject2.optString(l.ad));
            fVar.k(jSONObjectOptJSONObject2.optString("c_id"));
            fVar.w(jSONObjectOptJSONObject2.optString(a.a.A));
            fVar.l(jSONObjectOptJSONObject2.optString("title"));
            fVar.m(jSONObjectOptJSONObject2.optString("desc"));
            fVar.f(jSONObjectOptJSONObject2.optInt("rating"));
            fVar.n(jSONObjectOptJSONObject2.optString("icon_u"));
            fVar.p(jSONObjectOptJSONObject2.optString("full_u"));
            fVar.d(jSONObjectOptJSONObject2.optInt("unit_type"));
            fVar.q(jSONObjectOptJSONObject2.optString("tp_logo_u"));
            fVar.r(jSONObjectOptJSONObject2.optString(a.a.k));
            fVar.s(jSONObjectOptJSONObject2.optString("video_u"));
            fVar.d(jSONObjectOptJSONObject2.optInt("video_l"));
            fVar.J(jSONObjectOptJSONObject2.optString("video_r"));
            fVar.K(jSONObjectOptJSONObject2.optString("ec_u"));
            fVar.t(jSONObjectOptJSONObject2.optString("store_u"));
            fVar.e(jSONObjectOptJSONObject2.optInt("link_type"));
            fVar.v(jSONObjectOptJSONObject2.optString("click_u"));
            fVar.u(jSONObjectOptJSONObject2.optString("deeplink"));
            fVar.j(jSONObjectOptJSONObject2.optInt("crt_type", 1));
            fVar.L(jSONObjectOptJSONObject2.optString("img_list"));
            fVar.M(jSONObjectOptJSONObject2.optString("banner_xhtml"));
            fVar.c(jSONObjectOptJSONObject2.optInt("offer_firm_id"));
            fVar.i(jSONObjectOptJSONObject2.optString("jump_url"));
            try {
                String strOptString = jSONObjectOptJSONObject2.optString("sdk_resp");
                if (!TextUtils.isEmpty(strOptString)) {
                    fVar.a(new JSONObject(strOptString).optString("data"));
                }
            } catch (Throwable unused) {
            }
            fVar.N(jSONObjectOptJSONObject2.optString("app_name"));
            fVar.y(jSONObjectOptJSONObject2.optString("publisher"));
            fVar.z(jSONObjectOptJSONObject2.optString("app_version"));
            fVar.A(jSONObjectOptJSONObject2.optString(PointCategory.PRIVACY));
            fVar.B(jSONObjectOptJSONObject2.optString(PointCategory.PERMISSION));
            fVar.h(jSONObjectOptJSONObject2.optString("mtr_ver"));
            fVar.k(jSONObjectOptJSONObject2.optInt("o_im_cap_sw", 2));
            fVar.l(jSONObjectOptJSONObject2.optInt("o_cl_cap_sw", 2));
            fVar.m(jSONObjectOptJSONObject2.optInt("c_im_cap_sw", 2));
            fVar.n(jSONObjectOptJSONObject2.optInt("c_cl_cap_sw", 2));
            fVar.a(jSONObjectOptJSONObject2.optLong("expire", 0L));
            if (i == 67) {
                fVar.a(2);
            } else {
                fVar.a(1);
            }
            fVar.a((com.tkay.core.common.f.j) aa.c(jSONObjectOptJSONObject2.optString("ctrl")));
            fVar.a(ab.a(jSONObjectOptJSONObject2.optString("tk")));
            try {
                JSONObject jSONObject2 = new JSONObject(jSONObjectOptJSONObject2.optString("nw_info"));
                fVar.E(jSONObject2.optString("app_id"));
                fVar.F(jSONObject2.optString("app_key"));
                fVar.G(jSONObject2.optString("unit_id"));
            } catch (Throwable unused2) {
            }
            fVar.H(jSONObjectOptJSONObject2.optString("dsp_id", ""));
            fVar.I(jSONObjectOptJSONObject2.optString("dsp_oid", ""));
            fVar.h(jSONObjectOptJSONObject2.optInt("fca", -1));
            fVar.i(jSONObjectOptJSONObject2.optInt("install_sw", -1));
            fVar.C(jSONObjectOptJSONObject2.optString("wv_ctrl"));
            fVar.b(jSONObjectOptJSONObject2.optInt("adp_type"));
            fVar.e(jSONObjectOptJSONObject2.optString("offer_html"));
            fVar.f(jSONObjectOptJSONObject2.optString(r.ab));
            fVar.c(jSONObjectOptJSONObject2.optString("wx_username"));
            fVar.d(jSONObjectOptJSONObject2.optString("wx_path"));
            return fVar;
        } catch (Throwable unused3) {
            return null;
        }
    }
}
