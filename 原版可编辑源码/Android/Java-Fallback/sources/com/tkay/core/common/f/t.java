package com.tkay.core.common.f;

public final class t extends com.tkay.core.common.f.j {
    protected int n;

    public t() {
            r0 = this;
            r0.<init>()
            return
    }

    private void P(int r1) {
            r0 = this;
            r0.n = r1
            return
    }

    public static com.tkay.core.common.f.t c(java.lang.String r23) {
            java.lang.String r0 = "video_ctn_type"
            java.lang.String r1 = "rsdl_rate"
            java.lang.String r2 = "ready_rate"
            java.lang.String r3 = "sh_cl_itp"
            java.lang.String r4 = "ft_cl_sz"
            java.lang.String r5 = "click_nt_sw"
            java.lang.String r6 = "click_cache_time"
            java.lang.String r7 = "shk_time"
            java.lang.String r8 = "shk_strength_and"
            java.lang.String r9 = "shk_sw"
            java.lang.String r10 = "ap_pasbl"
            java.lang.String r11 = "ap_arpt"
            java.lang.String r12 = "clua"
            java.lang.String r13 = "ipua"
            java.lang.String r14 = "sh_ec"
            java.lang.String r15 = "int_cl_ti"
            r16 = r0
            java.lang.String r0 = "int_cl_sw"
            r17 = r1
            java.lang.String r1 = "at_ct_ti"
            r18 = r2
            java.lang.String r2 = "at_cl_sw"
            r19 = r3
            com.tkay.core.common.f.t r3 = new com.tkay.core.common.f.t
            r3.<init>()
            boolean r20 = android.text.TextUtils.isEmpty(r23)
            if (r20 != 0) goto L24c
            r20 = r4
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: org.json.JSONException -> L248
            r21 = r5
            r5 = r23
            r4.<init>(r5)     // Catch: org.json.JSONException -> L248
            java.lang.String r5 = "f_t"
            int r5 = r4.optInt(r5)     // Catch: org.json.JSONException -> L248
            r3.q(r5)     // Catch: org.json.JSONException -> L248
            java.lang.String r5 = "v_c"
            int r5 = r4.optInt(r5)     // Catch: org.json.JSONException -> L248
            r3.r(r5)     // Catch: org.json.JSONException -> L248
            java.lang.String r5 = "s_b_t"
            int r5 = r4.optInt(r5)     // Catch: org.json.JSONException -> L248
            r3.s(r5)     // Catch: org.json.JSONException -> L248
            java.lang.String r5 = "e_c_a"
            int r5 = r4.optInt(r5)     // Catch: org.json.JSONException -> L248
            r3.u(r5)     // Catch: org.json.JSONException -> L248
            java.lang.String r5 = "v_m"
            int r5 = r4.optInt(r5)     // Catch: org.json.JSONException -> L248
            r3.v(r5)     // Catch: org.json.JSONException -> L248
            java.lang.String r5 = "s_c_t"
            int r5 = r4.optInt(r5)     // Catch: org.json.JSONException -> L248
            r3.w(r5)     // Catch: org.json.JSONException -> L248
            java.lang.String r5 = "m_t"
            int r5 = r4.optInt(r5)     // Catch: org.json.JSONException -> L248
            r3.l(r5)     // Catch: org.json.JSONException -> L248
            java.lang.String r5 = "o_c_t"
            r22 = r6
            long r5 = r4.optLong(r5)     // Catch: org.json.JSONException -> L248
            r3.c(r5)     // Catch: org.json.JSONException -> L248
            java.lang.String r5 = "ak_cfm"
            int r5 = r4.optInt(r5)     // Catch: org.json.JSONException -> L248
            r3.m(r5)     // Catch: org.json.JSONException -> L248
            java.lang.String r5 = "ctdown_time"
            long r5 = r4.optLong(r5)     // Catch: org.json.JSONException -> L248
            r3.b(r5)     // Catch: org.json.JSONException -> L248
            java.lang.String r5 = "sk_able"
            int r5 = r4.optInt(r5)     // Catch: org.json.JSONException -> L248
            r3.n(r5)     // Catch: org.json.JSONException -> L248
            java.lang.String r5 = "orient"
            int r5 = r4.optInt(r5)     // Catch: org.json.JSONException -> L248
            r3.o(r5)     // Catch: org.json.JSONException -> L248
            java.lang.String r5 = "size"
            java.lang.String r5 = r4.optString(r5)     // Catch: org.json.JSONException -> L248
            r3.a(r5)     // Catch: org.json.JSONException -> L248
            java.lang.String r5 = "cl_btn"
            int r5 = r4.optInt(r5)     // Catch: org.json.JSONException -> L248
            r3.p(r5)     // Catch: org.json.JSONException -> L248
            java.lang.String r5 = "ec_r"
            int r5 = r4.optInt(r5)     // Catch: org.json.JSONException -> L248
            r3.x(r5)     // Catch: org.json.JSONException -> L248
            java.lang.String r5 = "ec_s_t"
            int r5 = r4.optInt(r5)     // Catch: org.json.JSONException -> L248
            r3.y(r5)     // Catch: org.json.JSONException -> L248
            java.lang.String r5 = "ec_l_t"
            int r5 = r4.optInt(r5)     // Catch: org.json.JSONException -> L248
            r3.z(r5)     // Catch: org.json.JSONException -> L248
            java.lang.String r5 = "inter_type"
            java.lang.String r5 = r4.optString(r5)     // Catch: org.json.JSONException -> L248
            r3.b(r5)     // Catch: org.json.JSONException -> L248
            java.lang.String r5 = "spl_type"
            int r5 = r4.optInt(r5)     // Catch: org.json.JSONException -> L248
            r3.n = r5     // Catch: org.json.JSONException -> L248
            java.lang.String r5 = "or_t"
            long r5 = r4.optLong(r5)     // Catch: org.json.JSONException -> L248
            r3.a(r5)     // Catch: org.json.JSONException -> L248
            java.lang.String r5 = "rv_fail_reward"
            int r5 = r4.optInt(r5)     // Catch: org.json.JSONException -> L248
            r3.e(r5)     // Catch: org.json.JSONException -> L248
            java.lang.String r5 = "cl_sz"
            int r5 = r4.optInt(r5)     // Catch: org.json.JSONException -> L248
            r3.f(r5)     // Catch: org.json.JSONException -> L248
            java.lang.String r5 = "si_fit"
            int r5 = r4.optInt(r5)     // Catch: org.json.JSONException -> L248
            r3.i(r5)     // Catch: org.json.JSONException -> L248
            boolean r5 = r4.has(r2)     // Catch: org.json.JSONException -> L248
            if (r5 == 0) goto L121
            int r2 = r4.optInt(r2)     // Catch: org.json.JSONException -> L248
            r3.A(r2)     // Catch: org.json.JSONException -> L248
        L121:
            boolean r2 = r4.has(r1)     // Catch: org.json.JSONException -> L248
            if (r2 == 0) goto L12e
            int r1 = r4.optInt(r1)     // Catch: org.json.JSONException -> L248
            r3.B(r1)     // Catch: org.json.JSONException -> L248
        L12e:
            boolean r1 = r4.has(r0)     // Catch: org.json.JSONException -> L248
            if (r1 == 0) goto L13b
            int r0 = r4.optInt(r0)     // Catch: org.json.JSONException -> L248
            r3.C(r0)     // Catch: org.json.JSONException -> L248
        L13b:
            boolean r0 = r4.has(r15)     // Catch: org.json.JSONException -> L248
            if (r0 == 0) goto L148
            int r0 = r4.optInt(r15)     // Catch: org.json.JSONException -> L248
            r3.D(r0)     // Catch: org.json.JSONException -> L248
        L148:
            boolean r0 = r4.has(r14)     // Catch: org.json.JSONException -> L248
            if (r0 == 0) goto L155
            int r0 = r4.optInt(r14)     // Catch: org.json.JSONException -> L248
            r3.E(r0)     // Catch: org.json.JSONException -> L248
        L155:
            boolean r0 = r4.has(r13)     // Catch: org.json.JSONException -> L248
            if (r0 == 0) goto L162
            int r0 = r4.optInt(r13)     // Catch: org.json.JSONException -> L248
            r3.c(r0)     // Catch: org.json.JSONException -> L248
        L162:
            boolean r0 = r4.has(r12)     // Catch: org.json.JSONException -> L248
            if (r0 == 0) goto L16f
            int r0 = r4.optInt(r12)     // Catch: org.json.JSONException -> L248
            r3.d(r0)     // Catch: org.json.JSONException -> L248
        L16f:
            boolean r0 = r4.has(r11)     // Catch: org.json.JSONException -> L248
            if (r0 == 0) goto L17c
            int r0 = r4.optInt(r11)     // Catch: org.json.JSONException -> L248
            r3.F(r0)     // Catch: org.json.JSONException -> L248
        L17c:
            boolean r0 = r4.has(r10)     // Catch: org.json.JSONException -> L248
            if (r0 == 0) goto L189
            int r0 = r4.optInt(r10)     // Catch: org.json.JSONException -> L248
            r3.G(r0)     // Catch: org.json.JSONException -> L248
        L189:
            boolean r0 = r4.has(r9)     // Catch: org.json.JSONException -> L248
            if (r0 == 0) goto L196
            int r0 = r4.optInt(r9)     // Catch: org.json.JSONException -> L248
            r3.H(r0)     // Catch: org.json.JSONException -> L248
        L196:
            boolean r0 = r4.has(r8)     // Catch: org.json.JSONException -> L248
            if (r0 == 0) goto L1a3
            int r0 = r4.optInt(r8)     // Catch: org.json.JSONException -> L248
            r3.I(r0)     // Catch: org.json.JSONException -> L248
        L1a3:
            boolean r0 = r4.has(r7)     // Catch: org.json.JSONException -> L248
            if (r0 == 0) goto L1b0
            long r0 = r4.optLong(r7)     // Catch: org.json.JSONException -> L248
            r3.d(r0)     // Catch: org.json.JSONException -> L248
        L1b0:
            r0 = r22
            boolean r1 = r4.has(r0)     // Catch: org.json.JSONException -> L248
            if (r1 == 0) goto L1c0
            int r0 = r4.optInt(r0)     // Catch: org.json.JSONException -> L248
            r3.J(r0)     // Catch: org.json.JSONException -> L248
            goto L1c6
        L1c0:
            r0 = 3600000(0x36ee80, float:5.044674E-39)
            r3.J(r0)     // Catch: org.json.JSONException -> L248
        L1c6:
            r0 = r21
            boolean r1 = r4.has(r0)     // Catch: org.json.JSONException -> L248
            r2 = 1
            if (r1 == 0) goto L1d7
            int r0 = r4.optInt(r0)     // Catch: org.json.JSONException -> L248
            r3.K(r0)     // Catch: org.json.JSONException -> L248
            goto L1da
        L1d7:
            r3.K(r2)     // Catch: org.json.JSONException -> L248
        L1da:
            r0 = r20
            boolean r1 = r4.has(r0)     // Catch: org.json.JSONException -> L248
            if (r1 == 0) goto L1ea
            int r0 = r4.optInt(r0)     // Catch: org.json.JSONException -> L248
            r3.g(r0)     // Catch: org.json.JSONException -> L248
            goto L1ed
        L1ea:
            r3.g(r2)     // Catch: org.json.JSONException -> L248
        L1ed:
            r0 = r19
            boolean r1 = r4.has(r0)     // Catch: org.json.JSONException -> L248
            r2 = 2
            if (r1 == 0) goto L1fe
            int r0 = r4.optInt(r0)     // Catch: org.json.JSONException -> L248
            r3.h(r0)     // Catch: org.json.JSONException -> L248
            goto L201
        L1fe:
            r3.h(r2)     // Catch: org.json.JSONException -> L248
        L201:
            java.lang.String r0 = "shm_t"
            r1 = -1
            int r0 = r4.optInt(r0, r1)     // Catch: org.json.JSONException -> L248
            r3.L(r0)     // Catch: org.json.JSONException -> L248
            r0 = r18
            boolean r1 = r4.has(r0)     // Catch: org.json.JSONException -> L248
            if (r1 == 0) goto L21b
            int r0 = r4.optInt(r0)     // Catch: org.json.JSONException -> L248
            r3.M(r0)     // Catch: org.json.JSONException -> L248
            goto L220
        L21b:
            r0 = 100
            r3.M(r0)     // Catch: org.json.JSONException -> L248
        L220:
            r0 = r17
            boolean r1 = r4.has(r0)     // Catch: org.json.JSONException -> L248
            if (r1 == 0) goto L230
            int r0 = r4.optInt(r0)     // Catch: org.json.JSONException -> L248
            r3.N(r0)     // Catch: org.json.JSONException -> L248
            goto L234
        L230:
            r0 = 0
            r3.N(r0)     // Catch: org.json.JSONException -> L248
        L234:
            r0 = r16
            boolean r1 = r4.has(r0)     // Catch: org.json.JSONException -> L248
            if (r1 == 0) goto L244
            int r0 = r4.optInt(r0)     // Catch: org.json.JSONException -> L248
            r3.O(r0)     // Catch: org.json.JSONException -> L248
            goto L24c
        L244:
            r3.O(r2)     // Catch: org.json.JSONException -> L248
            goto L24c
        L248:
            r0 = move-exception
            r0.printStackTrace()
        L24c:
            return r3
    }

    public final int X() {
            r1 = this;
            int r0 = r1.n
            return r0
    }
}
