package com.tkay.core.common.f;

import android.text.TextUtils;
import com.ss.android.download.api.constant.BaseConstants;
import com.tkay.core.api.TYAdConst;
import org.json.JSONException;
import org.json.JSONObject;

public final class t extends j {
    protected int n;

    public static t c(String str) {
        t tVar = new t();
        if (!TextUtils.isEmpty(str)) {
            try {
                JSONObject jSONObject = new JSONObject(str);
                tVar.q(jSONObject.optInt("f_t"));
                tVar.r(jSONObject.optInt("v_c"));
                tVar.s(jSONObject.optInt("s_b_t"));
                tVar.u(jSONObject.optInt("e_c_a"));
                tVar.v(jSONObject.optInt("v_m"));
                tVar.w(jSONObject.optInt("s_c_t"));
                tVar.l(jSONObject.optInt("m_t"));
                tVar.c(jSONObject.optLong("o_c_t"));
                tVar.m(jSONObject.optInt("ak_cfm"));
                tVar.b(jSONObject.optLong("ctdown_time"));
                tVar.n(jSONObject.optInt("sk_able"));
                tVar.o(jSONObject.optInt("orient"));
                tVar.a(jSONObject.optString(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE));
                tVar.p(jSONObject.optInt("cl_btn"));
                tVar.x(jSONObject.optInt("ec_r"));
                tVar.y(jSONObject.optInt("ec_s_t"));
                tVar.z(jSONObject.optInt("ec_l_t"));
                tVar.b(jSONObject.optString("inter_type"));
                tVar.n = jSONObject.optInt("spl_type");
                tVar.a(jSONObject.optLong("or_t"));
                tVar.e(jSONObject.optInt("rv_fail_reward"));
                tVar.f(jSONObject.optInt("cl_sz"));
                tVar.i(jSONObject.optInt("si_fit"));
                if (jSONObject.has("at_cl_sw")) {
                    tVar.A(jSONObject.optInt("at_cl_sw"));
                }
                if (jSONObject.has("at_ct_ti")) {
                    tVar.B(jSONObject.optInt("at_ct_ti"));
                }
                if (jSONObject.has("int_cl_sw")) {
                    tVar.C(jSONObject.optInt("int_cl_sw"));
                }
                if (jSONObject.has("int_cl_ti")) {
                    tVar.D(jSONObject.optInt("int_cl_ti"));
                }
                if (jSONObject.has("sh_ec")) {
                    tVar.E(jSONObject.optInt("sh_ec"));
                }
                if (jSONObject.has("ipua")) {
                    tVar.c(jSONObject.optInt("ipua"));
                }
                if (jSONObject.has("clua")) {
                    tVar.d(jSONObject.optInt("clua"));
                }
                if (jSONObject.has("ap_arpt")) {
                    tVar.F(jSONObject.optInt("ap_arpt"));
                }
                if (jSONObject.has("ap_pasbl")) {
                    tVar.G(jSONObject.optInt("ap_pasbl"));
                }
                if (jSONObject.has("shk_sw")) {
                    tVar.H(jSONObject.optInt("shk_sw"));
                }
                if (jSONObject.has("shk_strength_and")) {
                    tVar.I(jSONObject.optInt("shk_strength_and"));
                }
                if (jSONObject.has("shk_time")) {
                    tVar.d(jSONObject.optLong("shk_time"));
                }
                if (jSONObject.has("click_cache_time")) {
                    tVar.J(jSONObject.optInt("click_cache_time"));
                } else {
                    tVar.J(BaseConstants.Time.HOUR);
                }
                if (jSONObject.has("click_nt_sw")) {
                    tVar.K(jSONObject.optInt("click_nt_sw"));
                } else {
                    tVar.K(1);
                }
                if (jSONObject.has("ft_cl_sz")) {
                    tVar.g(jSONObject.optInt("ft_cl_sz"));
                } else {
                    tVar.g(1);
                }
                if (jSONObject.has("sh_cl_itp")) {
                    tVar.h(jSONObject.optInt("sh_cl_itp"));
                } else {
                    tVar.h(2);
                }
                tVar.L(jSONObject.optInt("shm_t", -1));
                if (jSONObject.has("ready_rate")) {
                    tVar.M(jSONObject.optInt("ready_rate"));
                } else {
                    tVar.M(100);
                }
                if (jSONObject.has("rsdl_rate")) {
                    tVar.N(jSONObject.optInt("rsdl_rate"));
                } else {
                    tVar.N(0);
                }
                if (jSONObject.has("video_ctn_type")) {
                    tVar.O(jSONObject.optInt("video_ctn_type"));
                } else {
                    tVar.O(2);
                }
            } catch (JSONException e) {
                e.printStackTrace();
            }
        }
        return tVar;
    }

    public final int X() {
        return this.n;
    }

    private void P(int i) {
        this.n = i;
    }
}
