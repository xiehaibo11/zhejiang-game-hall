package com.tkay.core.common.f;

import android.text.TextUtils;
import com.bianfeng.toponad.common.SplashConstants;
import java.io.Serializable;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONObject;

public final class ab implements Serializable {
    String[] A;
    String[] B;
    String[] C;
    String[] D;
    String[] E;
    Map<Integer, String[]> F;
    String[] G;
    String[] H;
    String I;
    String J;
    String K;
    String L;
    String M;
    String N;
    String O;
    String P;
    String Q;
    String R;
    String S;
    String T;
    String U;
    String V;
    String W;
    String X;
    String Y;
    String Z;
    String a;
    String aa;
    String ab;
    String ac;
    String ad;
    String ae;
    String af;
    String ag;
    String ah;
    String ai;
    String aj;
    String ak;
    String al;
    String am;
    String an;
    String[] ao;
    String ap;
    String[] b;
    String[] c;
    String[] d;
    String[] e;
    String[] f;
    String[] g;
    String[] h;
    String[] i;
    String[] j;
    String[] k;
    String[] l;
    String[] m;
    String[] n;
    String[] o;
    String[] p;
    String[] q;
    String[] r;
    String[] s;
    String[] t;
    String[] u;
    String[] v;
    String[] w;
    String[] x;
    String[] y;
    String[] z;

    public static final ab a(String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return null;
            }
            JSONObject jSONObject = new JSONObject(str);
            ab abVar = new ab();
            abVar.a = jSONObject.optString(SplashConstants.TOPONAD_SPLASHAD_KS);
            abVar.b = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("nurl"));
            abVar.c = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("imp"));
            abVar.d = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("click"));
            abVar.e = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("vstart"));
            abVar.f = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("v25"));
            abVar.g = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("v50"));
            abVar.h = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("v75"));
            abVar.i = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("v100"));
            abVar.j = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("vpaused"));
            abVar.k = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("vclick"));
            abVar.l = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("vmute"));
            abVar.m = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("vunmute"));
            abVar.n = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("ec_show"));
            abVar.o = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("ec_close"));
            abVar.p = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("apk_dl_star"));
            abVar.q = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("apk_dl_end"));
            abVar.r = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("apk_install"));
            abVar.s = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("vresumed"));
            abVar.t = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("vskip"));
            abVar.u = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("vfail"));
            abVar.v = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("apk_start_install"));
            abVar.w = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("dp_start"));
            abVar.x = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("dp_succ"));
            abVar.y = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("app_install"));
            abVar.z = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("app_uninstall"));
            abVar.A = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("app_unknow"));
            abVar.C = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("dp_inst_fail"));
            abVar.B = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("dp_uninst_fail"));
            abVar.D = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("vd_succ"));
            abVar.E = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("vrewarded"));
            JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("v_p_tracking");
            if (jSONArrayOptJSONArray != null) {
                abVar.F = new HashMap();
                for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                    JSONObject jSONObjectOptJSONObject = jSONArrayOptJSONArray.optJSONObject(i);
                    int iOptInt = jSONObjectOptJSONObject.optInt("play_sec");
                    abVar.F.put(Integer.valueOf(iOptInt), com.tkay.core.common.l.h.a(jSONObjectOptJSONObject.optJSONArray("list")));
                }
            }
            abVar.G = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("load_success"));
            abVar.H = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("load_fail"));
            abVar.I = jSONObject.optString("tp_nurl");
            abVar.J = jSONObject.optString("tp_imp");
            abVar.K = jSONObject.optString("tp_click");
            abVar.L = jSONObject.optString("tp_vstart");
            abVar.M = jSONObject.optString("tp_v25");
            abVar.N = jSONObject.optString("tp_v50");
            abVar.O = jSONObject.optString("tp_v75");
            abVar.P = jSONObject.optString("tp_v100");
            abVar.Q = jSONObject.optString("tp_vpaused");
            abVar.R = jSONObject.optString("tp_vclick");
            abVar.S = jSONObject.optString("tp_vmute");
            abVar.T = jSONObject.optString("tp_vunmute");
            abVar.U = jSONObject.optString("tp_ec_show");
            abVar.V = jSONObject.optString("tp_ec_close");
            abVar.W = jSONObject.optString("tp_apk_dl_star");
            abVar.X = jSONObject.optString("tp_apk_dl_end");
            abVar.Y = jSONObject.optString("tp_apk_install");
            abVar.Z = jSONObject.optString("tp_vresumed");
            abVar.aa = jSONObject.optString("tp_vskip");
            abVar.ab = jSONObject.optString("tp_vfail");
            abVar.ac = jSONObject.optString("tp_apk_start_install");
            abVar.ad = jSONObject.optString("tp_dp_start");
            abVar.ae = jSONObject.optString("tp_dp_succ");
            abVar.af = jSONObject.optString("tp_app_install");
            abVar.ag = jSONObject.optString("tp_app_uninstall");
            abVar.ah = jSONObject.optString("tp_app_unknow");
            abVar.aj = jSONObject.optString("tp_dp_inst_fail");
            abVar.ai = jSONObject.optString("tp_dp_uninst_fail");
            abVar.ak = jSONObject.optString("tp_vd_succ");
            abVar.al = jSONObject.optString("tp_vrewarded");
            abVar.am = jSONObject.optString("tp_load_success");
            abVar.an = jSONObject.optString("tp_load_fail");
            abVar.ao = com.tkay.core.common.l.h.a(jSONObject.optJSONArray("vready"));
            abVar.ap = jSONObject.optString("tp_ready");
            return abVar;
        } catch (Throwable th) {
            th.printStackTrace();
            return null;
        }
    }

    public final void a(String[] strArr) {
        this.d = strArr;
    }

    public final void b(String[] strArr) {
        this.p = strArr;
    }

    public final void c(String[] strArr) {
        this.q = strArr;
    }

    public final void d(String[] strArr) {
        this.r = strArr;
    }

    public final String[] a() {
        return this.G;
    }

    public final String[] b() {
        return this.H;
    }

    public final String c() {
        return this.a;
    }

    public final String[] d() {
        return this.b;
    }

    public final String[] e() {
        return this.c;
    }

    public final String[] f() {
        return this.d;
    }

    public final String[] g() {
        return this.e;
    }

    public final String[] h() {
        return this.f;
    }

    public final String[] i() {
        return this.g;
    }

    public final String[] j() {
        return this.h;
    }

    public final String[] k() {
        return this.i;
    }

    public final String[] l() {
        return this.j;
    }

    public final String[] m() {
        return this.k;
    }

    public final String[] n() {
        return this.l;
    }

    public final String[] o() {
        return this.m;
    }

    public final String[] p() {
        return this.n;
    }

    public final String[] q() {
        return this.o;
    }

    public final String[] r() {
        return this.p;
    }

    public final String[] s() {
        return this.q;
    }

    public final String[] t() {
        return this.r;
    }

    public final String[] u() {
        return this.B;
    }

    public final String[] v() {
        return this.C;
    }

    public final String[] w() {
        return this.D;
    }

    public final String[] x() {
        return this.E;
    }

    public final Map<Integer, String[]> y() {
        return this.F;
    }

    public final String z() {
        return this.I;
    }

    public final String A() {
        return this.J;
    }

    public final String B() {
        return this.K;
    }

    public final String C() {
        return this.L;
    }

    public final String D() {
        return this.M;
    }

    public final String E() {
        return this.N;
    }

    public final String F() {
        return this.O;
    }

    public final String G() {
        return this.P;
    }

    public final String H() {
        return this.Q;
    }

    public final String I() {
        return this.R;
    }

    public final String J() {
        return this.S;
    }

    public final String K() {
        return this.T;
    }

    public final String L() {
        return this.U;
    }

    public final String M() {
        return this.V;
    }

    public final String N() {
        return this.W;
    }

    public final String O() {
        return this.X;
    }

    public final String P() {
        return this.Y;
    }

    public final String[] Q() {
        return this.s;
    }

    public final String[] R() {
        return this.t;
    }

    public final String[] S() {
        return this.u;
    }

    public final String[] T() {
        return this.v;
    }

    public final String[] U() {
        return this.w;
    }

    public final String[] V() {
        return this.x;
    }

    public final String[] W() {
        return this.y;
    }

    public final String[] X() {
        return this.z;
    }

    public final String[] Y() {
        return this.A;
    }

    public final String Z() {
        return this.Z;
    }

    public final String aa() {
        return this.aa;
    }

    public final String ab() {
        return this.ab;
    }

    public final String ac() {
        return this.ac;
    }

    public final String ad() {
        return this.ad;
    }

    public final String ae() {
        return this.ae;
    }

    public final String af() {
        return this.af;
    }

    public final String ag() {
        return this.ag;
    }

    public final String ah() {
        return this.ah;
    }

    public final String ai() {
        return this.ai;
    }

    public final String aj() {
        return this.aj;
    }

    public final String ak() {
        return this.ak;
    }

    public final String al() {
        return this.al;
    }

    public final String am() {
        return this.am;
    }

    public final String an() {
        return this.an;
    }

    public final String[] ao() {
        return this.ao;
    }

    public final String ap() {
        return this.ap;
    }
}
