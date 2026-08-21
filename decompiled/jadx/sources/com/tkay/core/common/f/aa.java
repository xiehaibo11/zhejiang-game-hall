package com.tkay.core.common.f;

import android.text.TextUtils;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class aa extends j {
    private int n;
    private int o;

    public final int X() {
        return this.o;
    }

    private void P(int i) {
        this.o = i;
    }

    public final int Y() {
        return this.n;
    }

    private void Q(int i) {
        this.n = i;
    }

    public static aa c(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        aa aaVar = new aa();
        if (!TextUtils.isEmpty(str)) {
            try {
                JSONObject jSONObject = new JSONObject(str);
                aaVar.q(jSONObject.optInt("f_t"));
                int iOptInt = jSONObject.optInt("v_c");
                if (iOptInt == 1) {
                    iOptInt = 0;
                } else if (iOptInt == 2) {
                    iOptInt = 1;
                }
                aaVar.r(iOptInt);
                aaVar.s(jSONObject.optInt("s_b_t"));
                if (jSONObject.has("s_b_d")) {
                    aaVar.t(jSONObject.optInt("s_b_d"));
                }
                int iOptInt2 = jSONObject.optInt("e_c_a");
                if (iOptInt2 == 1) {
                    iOptInt2 = 0;
                } else if (iOptInt2 == 2) {
                    iOptInt2 = 1;
                } else if (iOptInt2 == 3) {
                    iOptInt2 = 2;
                }
                aaVar.u(iOptInt2);
                int iOptInt3 = jSONObject.optInt("ak_cfm");
                if (iOptInt3 == 1) {
                    iOptInt3 = 0;
                } else if (iOptInt3 == 2) {
                    iOptInt3 = 1;
                }
                aaVar.m(iOptInt3);
                aaVar.l(jSONObject.optInt("m_t"));
                int iOptInt4 = jSONObject.optInt("cm");
                if (iOptInt4 == 1) {
                    iOptInt4 = 0;
                } else if (iOptInt4 == 2) {
                    iOptInt4 = 1;
                }
                aaVar.n = iOptInt4;
                aaVar.c(jSONObject.optInt("ipua"));
                aaVar.d(jSONObject.optInt("clua"));
                aaVar.k(jSONObject.optInt("dp_cm"));
                aaVar.o = jSONObject.optInt("l_o_num");
                aaVar.j(jSONObject.optInt("ld_t"));
                aaVar.x(jSONObject.optInt("ec_r"));
                aaVar.y(jSONObject.optInt("ec_s_t"));
                aaVar.z(jSONObject.optInt("ec_l_t"));
                aaVar.a(jSONObject.optLong("or_t"));
                aaVar.e(jSONObject.optInt("rv_fail_reward"));
                aaVar.f(jSONObject.optInt("cl_sz"));
                aaVar.i(jSONObject.optInt("si_fit"));
                if (jSONObject.has("at_cl_sw")) {
                    aaVar.A(jSONObject.optInt("at_cl_sw"));
                }
                if (jSONObject.has("at_ct_ti")) {
                    aaVar.B(jSONObject.optInt("at_ct_ti"));
                }
                if (jSONObject.has("int_cl_sw")) {
                    aaVar.C(jSONObject.optInt("int_cl_sw"));
                }
                if (jSONObject.has("int_cl_ti")) {
                    aaVar.D(jSONObject.optInt("int_cl_ti"));
                }
                if (jSONObject.has("sh_ec")) {
                    aaVar.E(jSONObject.optInt("sh_ec"));
                }
                if (jSONObject.has("ap_arpt")) {
                    aaVar.F(jSONObject.optInt("ap_arpt"));
                }
                if (jSONObject.has("ap_pasbl")) {
                    aaVar.G(jSONObject.optInt("ap_pasbl"));
                }
                if (jSONObject.has("inter_type")) {
                    aaVar.b(jSONObject.optString("inter_type"));
                }
                if (jSONObject.has("shk_sw")) {
                    aaVar.H(jSONObject.optInt("shk_sw"));
                }
                if (jSONObject.has("shk_strength_and")) {
                    aaVar.I(jSONObject.optInt("shk_strength_and"));
                }
                if (jSONObject.has("shk_time")) {
                    aaVar.d(jSONObject.optLong("shk_time"));
                }
                if (jSONObject.has("click_cache_time")) {
                    aaVar.J(jSONObject.optInt("click_cache_time"));
                }
                if (jSONObject.has("click_nt_sw")) {
                    aaVar.K(jSONObject.optInt("click_nt_sw"));
                }
                if (jSONObject.has("ft_cl_sz")) {
                    aaVar.g(jSONObject.optInt("ft_cl_sz"));
                } else {
                    aaVar.g(1);
                }
                if (jSONObject.has("sh_cl_itp")) {
                    aaVar.h(jSONObject.optInt("sh_cl_itp"));
                } else {
                    aaVar.h(2);
                }
                aaVar.L(jSONObject.optInt("shm_t", -1));
                if (jSONObject.has("ready_rate")) {
                    aaVar.M(jSONObject.optInt("ready_rate"));
                } else {
                    aaVar.M(100);
                }
                if (jSONObject.has("rsdl_rate")) {
                    aaVar.N(jSONObject.optInt("rsdl_rate"));
                } else {
                    aaVar.N(0);
                }
                if (jSONObject.has("video_ctn_type")) {
                    aaVar.O(jSONObject.optInt("video_ctn_type"));
                } else {
                    aaVar.O(2);
                }
                if (jSONObject.has("preload_offer_html")) {
                    aaVar.a(jSONObject.optInt("preload_offer_html") == 1);
                } else {
                    aaVar.a(true);
                }
                if (jSONObject.has("re_monitor")) {
                    aaVar.b(jSONObject.optInt("re_monitor") == 1);
                } else {
                    aaVar.b(false);
                }
            } catch (JSONException e) {
                e.printStackTrace();
            }
        }
        return aaVar;
    }
}
