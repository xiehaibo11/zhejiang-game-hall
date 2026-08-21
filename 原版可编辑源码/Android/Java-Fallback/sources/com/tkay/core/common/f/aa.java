package com.tkay.core.common.f;

public final class aa extends com.tkay.core.common.f.j {
    private int n;
    private int o;

    public aa() {
            r0 = this;
            r0.<init>()
            return
    }

    private void P(int r1) {
            r0 = this;
            r0.o = r1
            return
    }

    private void Q(int r1) {
            r0 = this;
            r0.n = r1
            return
    }

    public static com.tkay.core.common.f.aa c(java.lang.String r23) {
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
            java.lang.String r10 = "inter_type"
            java.lang.String r11 = "ap_pasbl"
            java.lang.String r12 = "ap_arpt"
            java.lang.String r13 = "sh_ec"
            java.lang.String r14 = "int_cl_ti"
            java.lang.String r15 = "int_cl_sw"
            r16 = r0
            java.lang.String r0 = "at_ct_ti"
            r17 = r1
            java.lang.String r1 = "at_cl_sw"
            r18 = r2
            java.lang.String r2 = "s_b_d"
            boolean r19 = android.text.TextUtils.isEmpty(r23)
            if (r19 == 0) goto L34
            r0 = 0
            return r0
        L34:
            r19 = r3
            com.tkay.core.common.f.aa r3 = new com.tkay.core.common.f.aa
            r3.<init>()
            boolean r20 = android.text.TextUtils.isEmpty(r23)
            if (r20 != 0) goto L28a
            r20 = r4
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: org.json.JSONException -> L286
            r21 = r5
            r5 = r23
            r4.<init>(r5)     // Catch: org.json.JSONException -> L286
            java.lang.String r5 = "f_t"
            int r5 = r4.optInt(r5)     // Catch: org.json.JSONException -> L286
            r3.q(r5)     // Catch: org.json.JSONException -> L286
            java.lang.String r5 = "v_c"
            int r5 = r4.optInt(r5)     // Catch: org.json.JSONException -> L286
            r22 = r6
            r6 = 1
            if (r5 == r6) goto L66
            r6 = 2
            if (r5 == r6) goto L64
            goto L67
        L64:
            r5 = 1
            goto L67
        L66:
            r5 = 0
        L67:
            r3.r(r5)     // Catch: org.json.JSONException -> L286
            java.lang.String r5 = "s_b_t"
            int r5 = r4.optInt(r5)     // Catch: org.json.JSONException -> L286
            r3.s(r5)     // Catch: org.json.JSONException -> L286
            boolean r5 = r4.has(r2)     // Catch: org.json.JSONException -> L286
            if (r5 == 0) goto L80
            int r2 = r4.optInt(r2)     // Catch: org.json.JSONException -> L286
            r3.t(r2)     // Catch: org.json.JSONException -> L286
        L80:
            java.lang.String r2 = "e_c_a"
            int r2 = r4.optInt(r2)     // Catch: org.json.JSONException -> L286
            r5 = 1
            if (r2 == r5) goto L94
            r5 = 2
            if (r2 == r5) goto L92
            r5 = 3
            if (r2 == r5) goto L90
            goto L95
        L90:
            r2 = 2
            goto L95
        L92:
            r2 = 1
            goto L95
        L94:
            r2 = 0
        L95:
            r3.u(r2)     // Catch: org.json.JSONException -> L286
            java.lang.String r2 = "ak_cfm"
            int r2 = r4.optInt(r2)     // Catch: org.json.JSONException -> L286
            r5 = 1
            if (r2 == r5) goto La7
            r5 = 2
            if (r2 == r5) goto La5
            goto La8
        La5:
            r2 = 1
            goto La8
        La7:
            r2 = 0
        La8:
            r3.m(r2)     // Catch: org.json.JSONException -> L286
            java.lang.String r2 = "m_t"
            int r2 = r4.optInt(r2)     // Catch: org.json.JSONException -> L286
            r3.l(r2)     // Catch: org.json.JSONException -> L286
            java.lang.String r2 = "cm"
            int r2 = r4.optInt(r2)     // Catch: org.json.JSONException -> L286
            r5 = 1
            if (r2 == r5) goto Lc3
            r5 = 2
            if (r2 == r5) goto Lc1
            goto Lc4
        Lc1:
            r2 = 1
            goto Lc4
        Lc3:
            r2 = 0
        Lc4:
            r3.n = r2     // Catch: org.json.JSONException -> L286
            java.lang.String r2 = "ipua"
            int r2 = r4.optInt(r2)     // Catch: org.json.JSONException -> L286
            r3.c(r2)     // Catch: org.json.JSONException -> L286
            java.lang.String r2 = "clua"
            int r2 = r4.optInt(r2)     // Catch: org.json.JSONException -> L286
            r3.d(r2)     // Catch: org.json.JSONException -> L286
            java.lang.String r2 = "dp_cm"
            int r2 = r4.optInt(r2)     // Catch: org.json.JSONException -> L286
            r3.k(r2)     // Catch: org.json.JSONException -> L286
            java.lang.String r2 = "l_o_num"
            int r2 = r4.optInt(r2)     // Catch: org.json.JSONException -> L286
            r3.o = r2     // Catch: org.json.JSONException -> L286
            java.lang.String r2 = "ld_t"
            int r2 = r4.optInt(r2)     // Catch: org.json.JSONException -> L286
            r3.j(r2)     // Catch: org.json.JSONException -> L286
            java.lang.String r2 = "ec_r"
            int r2 = r4.optInt(r2)     // Catch: org.json.JSONException -> L286
            r3.x(r2)     // Catch: org.json.JSONException -> L286
            java.lang.String r2 = "ec_s_t"
            int r2 = r4.optInt(r2)     // Catch: org.json.JSONException -> L286
            r3.y(r2)     // Catch: org.json.JSONException -> L286
            java.lang.String r2 = "ec_l_t"
            int r2 = r4.optInt(r2)     // Catch: org.json.JSONException -> L286
            r3.z(r2)     // Catch: org.json.JSONException -> L286
            java.lang.String r2 = "or_t"
            long r5 = r4.optLong(r2)     // Catch: org.json.JSONException -> L286
            r3.a(r5)     // Catch: org.json.JSONException -> L286
            java.lang.String r2 = "rv_fail_reward"
            int r2 = r4.optInt(r2)     // Catch: org.json.JSONException -> L286
            r3.e(r2)     // Catch: org.json.JSONException -> L286
            java.lang.String r2 = "cl_sz"
            int r2 = r4.optInt(r2)     // Catch: org.json.JSONException -> L286
            r3.f(r2)     // Catch: org.json.JSONException -> L286
            java.lang.String r2 = "si_fit"
            int r2 = r4.optInt(r2)     // Catch: org.json.JSONException -> L286
            r3.i(r2)     // Catch: org.json.JSONException -> L286
            boolean r2 = r4.has(r1)     // Catch: org.json.JSONException -> L286
            if (r2 == 0) goto L13e
            int r1 = r4.optInt(r1)     // Catch: org.json.JSONException -> L286
            r3.A(r1)     // Catch: org.json.JSONException -> L286
        L13e:
            boolean r1 = r4.has(r0)     // Catch: org.json.JSONException -> L286
            if (r1 == 0) goto L14b
            int r0 = r4.optInt(r0)     // Catch: org.json.JSONException -> L286
            r3.B(r0)     // Catch: org.json.JSONException -> L286
        L14b:
            boolean r0 = r4.has(r15)     // Catch: org.json.JSONException -> L286
            if (r0 == 0) goto L158
            int r0 = r4.optInt(r15)     // Catch: org.json.JSONException -> L286
            r3.C(r0)     // Catch: org.json.JSONException -> L286
        L158:
            boolean r0 = r4.has(r14)     // Catch: org.json.JSONException -> L286
            if (r0 == 0) goto L165
            int r0 = r4.optInt(r14)     // Catch: org.json.JSONException -> L286
            r3.D(r0)     // Catch: org.json.JSONException -> L286
        L165:
            boolean r0 = r4.has(r13)     // Catch: org.json.JSONException -> L286
            if (r0 == 0) goto L172
            int r0 = r4.optInt(r13)     // Catch: org.json.JSONException -> L286
            r3.E(r0)     // Catch: org.json.JSONException -> L286
        L172:
            boolean r0 = r4.has(r12)     // Catch: org.json.JSONException -> L286
            if (r0 == 0) goto L17f
            int r0 = r4.optInt(r12)     // Catch: org.json.JSONException -> L286
            r3.F(r0)     // Catch: org.json.JSONException -> L286
        L17f:
            boolean r0 = r4.has(r11)     // Catch: org.json.JSONException -> L286
            if (r0 == 0) goto L18c
            int r0 = r4.optInt(r11)     // Catch: org.json.JSONException -> L286
            r3.G(r0)     // Catch: org.json.JSONException -> L286
        L18c:
            boolean r0 = r4.has(r10)     // Catch: org.json.JSONException -> L286
            if (r0 == 0) goto L199
            java.lang.String r0 = r4.optString(r10)     // Catch: org.json.JSONException -> L286
            r3.b(r0)     // Catch: org.json.JSONException -> L286
        L199:
            boolean r0 = r4.has(r9)     // Catch: org.json.JSONException -> L286
            if (r0 == 0) goto L1a6
            int r0 = r4.optInt(r9)     // Catch: org.json.JSONException -> L286
            r3.H(r0)     // Catch: org.json.JSONException -> L286
        L1a6:
            boolean r0 = r4.has(r8)     // Catch: org.json.JSONException -> L286
            if (r0 == 0) goto L1b3
            int r0 = r4.optInt(r8)     // Catch: org.json.JSONException -> L286
            r3.I(r0)     // Catch: org.json.JSONException -> L286
        L1b3:
            boolean r0 = r4.has(r7)     // Catch: org.json.JSONException -> L286
            if (r0 == 0) goto L1c0
            long r0 = r4.optLong(r7)     // Catch: org.json.JSONException -> L286
            r3.d(r0)     // Catch: org.json.JSONException -> L286
        L1c0:
            r0 = r22
            boolean r1 = r4.has(r0)     // Catch: org.json.JSONException -> L286
            if (r1 == 0) goto L1cf
            int r0 = r4.optInt(r0)     // Catch: org.json.JSONException -> L286
            r3.J(r0)     // Catch: org.json.JSONException -> L286
        L1cf:
            r0 = r21
            boolean r1 = r4.has(r0)     // Catch: org.json.JSONException -> L286
            if (r1 == 0) goto L1de
            int r0 = r4.optInt(r0)     // Catch: org.json.JSONException -> L286
            r3.K(r0)     // Catch: org.json.JSONException -> L286
        L1de:
            r0 = r20
            boolean r1 = r4.has(r0)     // Catch: org.json.JSONException -> L286
            if (r1 == 0) goto L1ee
            int r0 = r4.optInt(r0)     // Catch: org.json.JSONException -> L286
            r3.g(r0)     // Catch: org.json.JSONException -> L286
            goto L1f2
        L1ee:
            r0 = 1
            r3.g(r0)     // Catch: org.json.JSONException -> L286
        L1f2:
            r0 = r19
            boolean r1 = r4.has(r0)     // Catch: org.json.JSONException -> L286
            if (r1 == 0) goto L202
            int r0 = r4.optInt(r0)     // Catch: org.json.JSONException -> L286
            r3.h(r0)     // Catch: org.json.JSONException -> L286
            goto L206
        L202:
            r0 = 2
            r3.h(r0)     // Catch: org.json.JSONException -> L286
        L206:
            java.lang.String r0 = "shm_t"
            r1 = -1
            int r0 = r4.optInt(r0, r1)     // Catch: org.json.JSONException -> L286
            r3.L(r0)     // Catch: org.json.JSONException -> L286
            r0 = r18
            boolean r1 = r4.has(r0)     // Catch: org.json.JSONException -> L286
            if (r1 == 0) goto L220
            int r0 = r4.optInt(r0)     // Catch: org.json.JSONException -> L286
            r3.M(r0)     // Catch: org.json.JSONException -> L286
            goto L225
        L220:
            r0 = 100
            r3.M(r0)     // Catch: org.json.JSONException -> L286
        L225:
            r0 = r17
            boolean r1 = r4.has(r0)     // Catch: org.json.JSONException -> L286
            if (r1 == 0) goto L235
            int r0 = r4.optInt(r0)     // Catch: org.json.JSONException -> L286
            r3.N(r0)     // Catch: org.json.JSONException -> L286
            goto L239
        L235:
            r0 = 0
            r3.N(r0)     // Catch: org.json.JSONException -> L286
        L239:
            r0 = r16
            boolean r1 = r4.has(r0)     // Catch: org.json.JSONException -> L286
            if (r1 == 0) goto L249
            int r0 = r4.optInt(r0)     // Catch: org.json.JSONException -> L286
            r3.O(r0)     // Catch: org.json.JSONException -> L286
            goto L24d
        L249:
            r0 = 2
            r3.O(r0)     // Catch: org.json.JSONException -> L286
        L24d:
            java.lang.String r0 = "preload_offer_html"
            boolean r0 = r4.has(r0)     // Catch: org.json.JSONException -> L286
            if (r0 == 0) goto L265
            java.lang.String r0 = "preload_offer_html"
            int r0 = r4.optInt(r0)     // Catch: org.json.JSONException -> L286
            r1 = 1
            if (r0 != r1) goto L260
            r0 = 1
            goto L261
        L260:
            r0 = 0
        L261:
            r3.a(r0)     // Catch: org.json.JSONException -> L286
            goto L269
        L265:
            r0 = 1
            r3.a(r0)     // Catch: org.json.JSONException -> L286
        L269:
            java.lang.String r0 = "re_monitor"
            boolean r0 = r4.has(r0)     // Catch: org.json.JSONException -> L286
            if (r0 == 0) goto L281
            java.lang.String r0 = "re_monitor"
            int r0 = r4.optInt(r0)     // Catch: org.json.JSONException -> L286
            r1 = 1
            if (r0 != r1) goto L27c
            r6 = r1
            goto L27d
        L27c:
            r6 = 0
        L27d:
            r3.b(r6)     // Catch: org.json.JSONException -> L286
            goto L28a
        L281:
            r0 = 0
            r3.b(r0)     // Catch: org.json.JSONException -> L286
            goto L28a
        L286:
            r0 = move-exception
            r0.printStackTrace()
        L28a:
            return r3
    }

    public final int X() {
            r1 = this;
            int r0 = r1.o
            return r0
    }

    public final int Y() {
            r1 = this;
            int r0 = r1.n
            return r0
    }
}
