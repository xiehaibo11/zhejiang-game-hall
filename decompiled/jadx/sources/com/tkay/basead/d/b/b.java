package com.tkay.basead.d.b;

import com.sigmob.sdk.base.mta.PointCategory;
import com.tkay.basead.b.a;
import com.tkay.core.common.b.f;
import com.tkay.core.common.f.aa;
import com.tkay.core.common.f.ab;
import com.tkay.core.common.f.i;
import com.tkay.core.common.f.j;
import com.tkay.core.common.f.y;
import com.tkay.core.common.l;
import com.tkay.expressad.foundation.d.r;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f5647a = "sdk_updatetime";

    public static final y a(i iVar, JSONObject jSONObject) {
        try {
            JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(f.c.d);
            if (jSONObjectOptJSONObject == null) {
                return null;
            }
            JSONObject jSONObjectOptJSONObject2 = jSONObjectOptJSONObject.optJSONArray("offers").optJSONObject(0);
            y yVar = new y();
            yVar.a(iVar.f);
            yVar.j(jSONObjectOptJSONObject2.optString(l.ad));
            yVar.k(jSONObjectOptJSONObject2.optString("c_id"));
            yVar.w(jSONObjectOptJSONObject2.optString(a.C0386a.A));
            yVar.l(jSONObjectOptJSONObject2.optString("title"));
            yVar.m(jSONObjectOptJSONObject2.optString("desc"));
            yVar.f(jSONObjectOptJSONObject2.optInt("rating"));
            yVar.n(jSONObjectOptJSONObject2.optString("icon_u"));
            yVar.p(jSONObjectOptJSONObject2.optString("full_u"));
            yVar.d(jSONObjectOptJSONObject2.optInt("unit_type"));
            yVar.q(jSONObjectOptJSONObject2.optString("tp_logo_u"));
            yVar.r(jSONObjectOptJSONObject2.optString(a.C0386a.k));
            yVar.s(jSONObjectOptJSONObject2.optString("video_u"));
            yVar.d(jSONObjectOptJSONObject2.optInt("video_l"));
            yVar.J(jSONObjectOptJSONObject2.optString("video_r"));
            yVar.K(jSONObjectOptJSONObject2.optString("ec_u"));
            yVar.t(jSONObjectOptJSONObject2.optString("store_u"));
            yVar.e(jSONObjectOptJSONObject2.optInt("link_type"));
            yVar.v(jSONObjectOptJSONObject2.optString("click_u"));
            yVar.u(jSONObjectOptJSONObject2.optString("deeplink"));
            yVar.g(jSONObjectOptJSONObject2.optInt("r_target"));
            yVar.a(jSONObjectOptJSONObject2.optLong("expire"));
            yVar.x(jSONObjectOptJSONObject2.optString("ad_logo_title"));
            yVar.j(jSONObjectOptJSONObject2.optInt("crt_type", 1));
            yVar.L(jSONObjectOptJSONObject2.optString("img_list"));
            yVar.M(jSONObjectOptJSONObject2.optString("banner_xhtml"));
            yVar.b(jSONObject.optLong(f5647a));
            yVar.c(jSONObjectOptJSONObject2.optInt("offer_firm_id"));
            yVar.i(jSONObjectOptJSONObject2.optString("jump_url"));
            yVar.N(jSONObjectOptJSONObject2.optString("app_name"));
            yVar.y(jSONObjectOptJSONObject2.optString("publisher"));
            yVar.z(jSONObjectOptJSONObject2.optString("app_version"));
            yVar.A(jSONObjectOptJSONObject2.optString(PointCategory.PRIVACY));
            yVar.B(jSONObjectOptJSONObject2.optString(PointCategory.PERMISSION));
            yVar.C(jSONObjectOptJSONObject2.optString("wv_ctrl"));
            yVar.a((j) aa.c(jSONObjectOptJSONObject2.optString("ctrl")));
            yVar.a(ab.a(jSONObjectOptJSONObject2.optString("tk")));
            yVar.b(jSONObjectOptJSONObject2.optInt("adp_type"));
            yVar.e(jSONObjectOptJSONObject2.optString("offer_html"));
            yVar.f(jSONObjectOptJSONObject2.optString(r.ab));
            yVar.c(jSONObjectOptJSONObject2.optString("wx_username"));
            yVar.d(jSONObjectOptJSONObject2.optString("wx_path"));
            return yVar;
        } catch (Throwable unused) {
            return null;
        }
    }
}
