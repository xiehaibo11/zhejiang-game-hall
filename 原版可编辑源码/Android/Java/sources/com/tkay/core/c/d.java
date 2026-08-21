package com.tkay.core.c;

import android.support.v4.os.EnvironmentCompat;
import android.text.TextUtils;
import com.sigmob.windad.WindAds;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYCustomAdapterConfig;
import com.tkay.core.api.TYRewardInfo;
import com.tkay.core.common.b.f;
import com.tkay.core.common.b.m;
import com.tkay.core.common.b.p;
import com.tkay.core.common.f.aa;
import com.tkay.core.common.f.ah;
import com.tkay.core.common.f.aj;
import com.tkay.core.common.f.i;
import com.tkay.core.common.f.j;
import com.tkay.core.common.f.r;
import com.tkay.core.common.f.t;
import com.tkay.core.common.l;
import com.tkay.core.common.l.g;
import com.tkay.core.common.l.h;
import com.tkay.core.common.v;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import okhttp3.HttpUrl;
import org.json.JSONArray;
import org.json.JSONObject;

public class d {
    private String A;
    private ah B;
    private int C;
    private String D;
    private int E;
    private int F;
    private String G;
    private Map<String, Object> H;
    private Map<String, TYRewardInfo> I;
    private TYRewardInfo J;
    private String K;
    private String L;
    private long M;
    private String N;
    private long O;
    private int P;
    private long Q;
    private int R;
    private List<r> S;
    private t T;
    private long U;
    private double V;
    private String W;
    private List<String> X;
    private String Y;
    private String Z;
    private final String a = "Placement";
    private int aA;
    private int aB;
    private int aC;
    private int aD;
    private String aE;
    private String aF;
    private String aG;
    private long aH;
    private String aI;
    private String aJ;
    private double aK;
    private int aL;
    private int aM;
    private int aN;
    private int aO;
    private JSONObject aP;
    private String aa;
    private String ab;
    private long ac;
    private String ad;
    private String ae;
    private String af;
    private double ag;
    private String ah;
    private long ai;
    private List<aj> aj;
    private long ak;
    private long al;
    private long am;
    private int an;
    private int ao;
    private int ap;
    private long aq;
    private JSONObject ar;
    private String as;
    private JSONObject at;
    private int au;
    private String av;
    private String aw;
    private int ax;
    private int ay;
    private List<Integer> az;
    private long b;
    private long c;
    private int d;
    private int e;
    private int f;
    private long g;
    private long h;
    private long i;
    private int j;
    private int k;
    private int l;
    private int m;
    private String n;
    private String o;
    private String p;
    private String q;
    private String r;
    private List<aj> s;
    private List<aj> t;
    private int u;
    private int v;
    private long w;
    private long x;
    private long y;
    private int z;

    public static class a {
        public static final String A = "req_w_time";
        public static final String B = "wf_loadts";
        public static final String C = "req_ug_type";
        public static final String D = "req_ug_numsp";
        public static final String E = "bf_ldf_rf_sw";
        public static final String F = "hb_start_time";
        public static final String G = "dsp_list";
        public static final String H = "bid_floor";
        public static final String I = "max_unit_ids";
        public static final String J = "xdb_list";
        public static final String K = "s2s_bd_max";
        public static final String L = "req_merge";
        public static final String M = "exclude_id_max";
        public static final String N = "install_id_max";
        public static final String O = "install_ids";
        public static final String P = "exclude_ids";
        public static final String Q = "is_test";
        public static final String R = "gsp_rates";
        public static final String S = "mdna_r";
        public static final String T = "adx_ext";
        public static final String U = "wf_id";
        public static final String V = "sysh_mtg_sw";
        public static final String W = "mid_gdt_sw";
        public static final String X = "lm_lrqf_interval_sws";
        public static final String Y = "wf_lscb_type";
        public static final String Z = "reqid_pg_sw";
        public static final String a = "hb_bid_timeout";
        private static final String aA = "tp_ps";
        private static final String aB = "t_g_id";
        private static final String aC = "s_id";
        private static final String aD = "u_n_f_sw";
        private static final String aE = "m_o";
        private static final String aF = "m_o_s";
        private static final String aG = "m_o_ks";
        private static final String aH = "p_m_o";
        private static final String aI = "callback";
        private static final String aJ = "sc_list";
        private static final String aK = "rw_n";
        private static final String aL = "rw_num";
        private static final String aM = "reward";
        private static final String aN = "currency";
        private static final String aO = "cc";
        private static final String aP = "exch_r";
        private static final String aQ = "acct_cy";
        public static final String aa = "sr_sw";
        public static final String ab = "p_c";
        private static final String ac = "ps_id_timeout";
        private static final String ad = "ps_ct";
        private static final String ae = "ps_ct_out";
        private static final String af = "pucs";
        private static final String ag = "ad_delivery_sw";
        private static final String ah = "req_ug_num";
        private static final String ai = "unit_caps_d";
        private static final String aj = "unit_caps_h";
        private static final String ak = "unit_pacing";
        private static final String al = "wifi_auto_sw";
        private static final String am = "show_type";
        private static final String an = "refresh";
        private static final String ao = "ug_list";
        private static final String ap = "ol_list";
        private static final String aq = "gro_id";
        private static final String ar = "hb_list";
        private static final String as = "s2shb_list";
        private static final String at = "format";
        private static final String au = "auto_refresh";
        private static final String av = "auto_refresh_time";
        private static final String aw = "s_t";
        private static final String ax = "l_s_t";
        private static final String ay = "ra";
        private static final String az = "asid";
        public static final String b = "addr_bid";
        public static final String c = "load_fail_wtime";
        public static final String d = "load_cap";
        public static final String e = "load_cap_time";
        public static final String f = "cached_offers_num";
        public static final String g = "adx_list";
        public static final String h = "adx_st";
        public static final String i = "ilrd";
        public static final String j = "hb_list";
        public static final String k = "inh_list";
        public static final String l = "fbhb_bid_wtime";
        public static final String m = "burl_nt_firm";
        public static final String n = "wf_bid_addr";
        public static final String o = "ss_data";
        public static final String p = "cn_addr_bid";
        public static final String q = "cn_wf_bid_addr";
        public static final String r = "byuid_wt";
        public static final String s = "addr_bks";
        public static final String t = "addr_subbks";
        public static final String u = "s2sbks_list";
        public static final String v = "exch_rate_c2u";
        public static final String w = "doffer_list";
        public static final String x = "bottom_list";
        public static final String y = "bottom_reqts";
        public static final String z = "cb_w_time";
    }

    public final int a() {
        return this.aC;
    }

    private void a(int i) {
        this.aC = i;
    }

    public final int b() {
        return this.aA;
    }

    private void b(int i) {
        this.aA = i;
    }

    public final List<Integer> c() {
        return this.az;
    }

    private void a(List<Integer> list) {
        this.az = list;
    }

    public final String d() {
        return this.aw;
    }

    private void f(String str) {
        this.aw = str;
    }

    public final int e() {
        return this.au;
    }

    private void c(int i) {
        this.au = i;
    }

    public final String f() {
        return this.av;
    }

    private void g(String str) {
        this.av = str;
    }

    public final JSONObject g() {
        return this.at;
    }

    private void a(JSONObject jSONObject) {
        this.at = jSONObject;
    }

    private JSONObject aA() {
        return this.ar;
    }

    private void b(JSONObject jSONObject) {
        this.ar = jSONObject;
    }

    public final String h() {
        return this.as;
    }

    private void h(String str) {
        this.as = str;
    }

    public final int i() {
        return this.aD;
    }

    private void d(int i) {
        this.aD = i;
    }

    public final long j() {
        return this.aq;
    }

    private void a(long j) {
        this.aq = j;
    }

    public final int k() {
        return this.ap;
    }

    private void e(int i) {
        this.ap = i;
    }

    public final int l() {
        return this.an;
    }

    private void f(int i) {
        this.an = i;
    }

    private int aB() {
        return this.ao;
    }

    private void g(int i) {
        this.ao = i;
    }

    public final int m() {
        int i = this.an;
        if (i == 1) {
            return this.f;
        }
        if (i != 2) {
            return 1;
        }
        return this.ao;
    }

    private List<aj> aC() {
        return this.aj;
    }

    private void b(List<aj> list) {
        this.aj = list;
    }

    public final long n() {
        return this.am;
    }

    private void b(long j) {
        this.am = j;
    }

    public final String o() {
        return this.ah;
    }

    private void i(String str) {
        this.ah = str;
    }

    public final long p() {
        return this.ai;
    }

    private void c(long j) {
        this.ai = j;
    }

    public final double q() {
        return this.ag;
    }

    private void a(double d) {
        this.ag = d;
    }

    public final String r() {
        return this.ad;
    }

    private void j(String str) {
        this.ad = str;
    }

    public final String s() {
        return this.ae;
    }

    private void k(String str) {
        this.ae = str;
    }

    public final String t() {
        return this.af;
    }

    private void l(String str) {
        this.af = str;
    }

    public final long u() {
        return this.ac;
    }

    private void d(long j) {
        this.ac = j;
    }

    public final String v() {
        return this.Z;
    }

    private void m(String str) {
        this.Z = str;
    }

    public final String w() {
        return this.Y;
    }

    private void n(String str) {
        this.Y = str;
    }

    public final List<String> x() {
        return this.X;
    }

    private void c(List<String> list) {
        this.X = list;
    }

    public final double y() {
        return this.V;
    }

    private void b(double d) {
        this.V = d;
    }

    public final String z() {
        return this.W;
    }

    private void o(String str) {
        this.W = str;
    }

    public final long A() {
        return this.U;
    }

    private void e(long j) {
        this.U = j;
    }

    public final String B() {
        return this.r;
    }

    private void p(String str) {
        this.r = str;
    }

    public final String C() {
        return this.aE;
    }

    private void q(String str) {
        this.aE = str;
    }

    private String aD() {
        return this.aG;
    }

    private void r(String str) {
        this.aG = str;
    }

    public final String D() {
        return this.aF;
    }

    private void s(String str) {
        this.aF = str;
    }

    private void a(t tVar) {
        this.T = tVar;
    }

    public final t E() {
        return this.T;
    }

    public final List<r> F() {
        return this.S;
    }

    private void d(List<r> list) {
        this.S = list;
    }

    private String aE() {
        return this.N;
    }

    private void t(String str) {
        this.N = str;
    }

    public final List<aj> G() {
        return this.s;
    }

    private void e(List<aj> list) {
        this.s = list;
    }

    public final List<aj> H() {
        return this.t;
    }

    private void f(List<aj> list) {
        this.t = list;
    }

    public final long I() {
        return this.M;
    }

    private void f(long j) {
        this.M = j;
    }

    public final boolean a(String str) {
        List<aj> list = this.t;
        if (list == null) {
            return false;
        }
        Iterator<aj> it = list.iterator();
        while (it.hasNext()) {
            if (TextUtils.equals(str, it.next().t())) {
                return true;
            }
        }
        return false;
    }

    public final Map<String, TYRewardInfo> J() {
        return this.I;
    }

    public final String K() {
        return this.K;
    }

    private void u(String str) {
        this.K = str;
    }

    public final String L() {
        return this.L;
    }

    private void v(String str) {
        this.L = str;
    }

    private void a(Map<String, TYRewardInfo> map) {
        this.I = map;
    }

    public final TYRewardInfo M() {
        return this.J;
    }

    private void a(TYRewardInfo tYRewardInfo) {
        this.J = tYRewardInfo;
    }

    public final Map<String, Object> N() {
        return this.H;
    }

    private void b(Map<String, Object> map) {
        this.H = map;
    }

    public final int O() {
        return this.F;
    }

    private void h(int i) {
        this.F = i;
    }

    public final int P() {
        return this.C;
    }

    private void i(int i) {
        this.C = i;
    }

    public final String Q() {
        return this.D;
    }

    private void w(String str) {
        this.D = str;
    }

    public final int R() {
        return this.E;
    }

    private void j(int i) {
        this.E = i;
    }

    public final long S() {
        return this.x;
    }

    private void g(long j) {
        this.x = j;
    }

    public final long T() {
        return this.y;
    }

    private void h(long j) {
        this.y = j;
    }

    public final int U() {
        return this.z;
    }

    private void k(int i) {
        this.z = i;
    }

    public final String V() {
        return this.A;
    }

    private void x(String str) {
        this.A = str;
    }

    public final int W() {
        return this.v;
    }

    private void l(int i) {
        this.v = i;
    }

    public final long X() {
        return this.w;
    }

    private void i(long j) {
        this.w = j;
    }

    public final int Y() {
        return this.u;
    }

    private void m(int i) {
        this.u = i;
    }

    private void j(long j) {
        this.b = j;
    }

    public final long Z() {
        return this.c;
    }

    private void k(long j) {
        this.c = j;
    }

    public final int aa() {
        return this.d;
    }

    private void n(int i) {
        this.d = i;
    }

    private int aF() {
        return this.e;
    }

    private void o(int i) {
        this.e = i;
    }

    public final int ab() {
        return this.f;
    }

    private void p(int i) {
        this.f = i;
    }

    public final long ac() {
        return this.g;
    }

    private void l(long j) {
        this.g = j;
    }

    public final long ad() {
        return this.h;
    }

    private void m(long j) {
        this.h = j;
    }

    public final long ae() {
        return this.i;
    }

    private void n(long j) {
        this.i = j;
    }

    private int aG() {
        return this.j;
    }

    private void q(int i) {
        this.j = i;
    }

    private int aH() {
        return this.k;
    }

    private void r(int i) {
        this.k = i;
    }

    private int aI() {
        return this.l;
    }

    private void s(int i) {
        this.l = i;
    }

    public final int af() {
        return this.m;
    }

    private void t(int i) {
        this.m = i;
    }

    private ah aJ() {
        return this.B;
    }

    private void a(ah ahVar) {
        this.B = ahVar;
    }

    public final String ag() {
        return this.n;
    }

    private void y(String str) {
        this.n = str;
    }

    public final String ah() {
        return this.o;
    }

    private void z(String str) {
        this.o = str;
    }

    public final String ai() {
        return this.p;
    }

    private void A(String str) {
        this.p = str;
    }

    public final String aj() {
        return this.q;
    }

    private void B(String str) {
        this.q = str;
    }

    private long aK() {
        return this.aH;
    }

    private void o(long j) {
        this.aH = j;
    }

    public final long ak() {
        return this.O;
    }

    private void p(long j) {
        this.O = j;
    }

    public final int al() {
        return this.P;
    }

    private void u(int i) {
        this.P = i;
    }

    public final long am() {
        return this.Q;
    }

    private void q(long j) {
        this.Q = j;
    }

    public final int an() {
        return this.R;
    }

    private void v(int i) {
        this.R = i;
    }

    private String aL() {
        return this.aa;
    }

    private void C(String str) {
        this.aa = str;
    }

    public final String ao() {
        return this.ab;
    }

    private void D(String str) {
        this.ab = str;
    }

    public final String ap() {
        return this.aI;
    }

    private void E(String str) {
        this.aI = str;
    }

    private long aM() {
        return this.ak;
    }

    private void r(long j) {
        this.ak = j;
    }

    private long aN() {
        return this.al;
    }

    private void s(long j) {
        this.al = j;
    }

    public final String aq() {
        return this.aJ;
    }

    private void F(String str) {
        this.aJ = str;
    }

    public final int ar() {
        return this.aM;
    }

    private void w(int i) {
        this.aM = i;
    }

    public final int as() {
        return this.aL;
    }

    private void x(int i) {
        this.aL = i;
    }

    public final double at() {
        return this.aK;
    }

    private void c(double d) {
        this.aK = d;
    }

    public final int au() {
        return this.aN;
    }

    private void y(int i) {
        this.aN = i;
    }

    public final int av() {
        return this.aO;
    }

    private void z(int i) {
        this.aO = i;
    }

    public final int aw() {
        return this.ax;
    }

    private void A(int i) {
        this.ax = i;
    }

    private int aO() {
        return this.ay;
    }

    private void B(int i) {
        this.ay = i;
    }

    private int aP() {
        return this.aB;
    }

    private void C(int i) {
        this.aB = i;
    }

    public final JSONObject ax() {
        return this.aP;
    }

    private void c(JSONObject jSONObject) {
        this.aP = jSONObject;
    }

    public static d b(String str) {
        long jOptLong;
        int i;
        int i2;
        if (str == null) {
            return null;
        }
        try {
            d dVar = new d();
            JSONObject jSONObject = new JSONObject(str);
            if (jSONObject.isNull("ps_ct")) {
                dVar.b = 0L;
            } else {
                dVar.b = jSONObject.optLong("ps_ct");
            }
            if (jSONObject.isNull("ps_ct_out")) {
                dVar.c = 0L;
            } else {
                dVar.c = jSONObject.optLong("ps_ct_out");
            }
            if (jSONObject.isNull("pucs")) {
                dVar.d = 1;
            } else {
                dVar.d = jSONObject.optInt("pucs");
            }
            if (jSONObject.isNull("ad_delivery_sw")) {
                dVar.e = 1;
            } else {
                dVar.e = jSONObject.optInt("ad_delivery_sw");
            }
            if (jSONObject.isNull("req_ug_num")) {
                dVar.f = -1;
            } else {
                dVar.f = jSONObject.optInt("req_ug_num");
            }
            if (jSONObject.isNull("unit_caps_d")) {
                dVar.g = -1L;
            } else {
                dVar.g = jSONObject.optLong("unit_caps_d");
            }
            if (jSONObject.isNull("unit_caps_h")) {
                dVar.h = -1L;
            } else {
                dVar.h = jSONObject.optLong("unit_caps_h");
            }
            if (jSONObject.isNull("unit_pacing")) {
                dVar.i = -1L;
            } else {
                dVar.i = jSONObject.optLong("unit_pacing");
            }
            if (jSONObject.isNull("wifi_auto_sw")) {
                dVar.j = 0;
            } else {
                dVar.j = jSONObject.optInt("wifi_auto_sw");
            }
            if (jSONObject.isNull("show_type")) {
                dVar.k = 0;
            } else {
                dVar.k = jSONObject.optInt("show_type");
            }
            if (jSONObject.isNull("refresh")) {
                dVar.l = 0;
            } else {
                dVar.l = jSONObject.optInt("refresh");
            }
            if (jSONObject.isNull("gro_id")) {
                dVar.m = 0;
            } else {
                dVar.m = jSONObject.optInt("gro_id");
            }
            if (jSONObject.isNull("format")) {
                dVar.u = 0;
            } else {
                dVar.u = jSONObject.optInt("format");
            }
            if (jSONObject.isNull("auto_refresh")) {
                dVar.v = 0;
            } else {
                dVar.v = jSONObject.optInt("auto_refresh");
            }
            if (jSONObject.isNull("auto_refresh_time")) {
                dVar.w = 0L;
            } else {
                dVar.w = jSONObject.optLong("auto_refresh_time");
            }
            if (jSONObject.isNull("s_t")) {
                dVar.x = com.heytap.mcssdk.constant.a.h;
            } else {
                dVar.x = jSONObject.optLong("s_t");
            }
            if (jSONObject.isNull(l.J)) {
                dVar.y = 1800000L;
            } else {
                dVar.y = jSONObject.optLong(l.J);
            }
            if (jSONObject.isNull("ra")) {
                dVar.z = -1;
            } else {
                dVar.z = jSONObject.optInt("ra");
            }
            if (jSONObject.isNull("asid")) {
                dVar.A = "";
            } else {
                dVar.A = jSONObject.optString("asid");
            }
            if (!jSONObject.isNull("tp_ps")) {
                try {
                    ah ahVar = new ah();
                    JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("tp_ps");
                    ahVar.a = jSONObjectOptJSONObject.optInt("pucs") == 1;
                    ahVar.b = jSONObjectOptJSONObject.optLong("apdt");
                    ahVar.c = jSONObjectOptJSONObject.optInt("aprn");
                    ahVar.d = jSONObjectOptJSONObject.optInt("puas") == 1;
                    ahVar.e = jSONObjectOptJSONObject.optLong("cdt");
                    ahVar.f = jSONObjectOptJSONObject.optInt("ski_swt") == 1;
                    ahVar.g = jSONObjectOptJSONObject.optInt("aut_swt") == 1;
                    dVar.B = ahVar;
                } catch (Exception unused) {
                }
            } else {
                dVar.B = null;
            }
            if (jSONObject.isNull("ug_list")) {
                dVar.n = HttpUrl.PATH_SEGMENT_ENCODE_SET_URI;
            } else {
                dVar.n = jSONObject.optString("ug_list");
            }
            if (jSONObject.isNull("ol_list")) {
                dVar.o = HttpUrl.PATH_SEGMENT_ENCODE_SET_URI;
            } else {
                dVar.o = jSONObject.optString("ol_list");
            }
            dVar.s = a(dVar.n, dVar.o);
            if (jSONObject.isNull("s2shb_list")) {
                dVar.p = HttpUrl.PATH_SEGMENT_ENCODE_SET_URI;
            } else {
                dVar.p = jSONObject.optString("s2shb_list");
            }
            if (jSONObject.isNull(a.g)) {
                dVar.aF = HttpUrl.PATH_SEGMENT_ENCODE_SET_URI;
            } else {
                dVar.aF = jSONObject.optString(a.g);
            }
            if (jSONObject.isNull(a.j)) {
                dVar.q = HttpUrl.PATH_SEGMENT_ENCODE_SET_URI;
            } else {
                dVar.q = jSONObject.optString(a.j);
            }
            if (jSONObject.isNull(a.k)) {
                dVar.r = HttpUrl.PATH_SEGMENT_ENCODE_SET_URI;
            } else {
                dVar.r = jSONObject.optString(a.k);
            }
            if (jSONObject.isNull(a.u)) {
                dVar.af = "";
            } else {
                dVar.af = jSONObject.optString(a.u);
            }
            if (jSONObject.isNull(a.w)) {
                dVar.aI = HttpUrl.PATH_SEGMENT_ENCODE_SET_URI;
            } else {
                dVar.aI = jSONObject.optString(a.w);
            }
            if (!jSONObject.isNull("updateTime")) {
                jOptLong = jSONObject.optLong("updateTime");
                dVar.aH = jOptLong;
            } else {
                dVar.aH = 0L;
                jOptLong = 0;
            }
            if (jSONObject.isNull("t_g_id")) {
                dVar.C = -1;
            } else {
                dVar.C = jSONObject.optInt("t_g_id");
            }
            if (jSONObject.isNull("s_id")) {
                dVar.D = "";
            } else {
                dVar.D = jSONObject.optString("s_id");
            }
            if (jSONObject.isNull("u_n_f_sw")) {
                dVar.E = 0;
            } else {
                dVar.E = jSONObject.optInt("u_n_f_sw");
            }
            if (!jSONObject.isNull("m_o_s")) {
                dVar.T = t.c(jSONObject.optString("m_o_s"));
            }
            if (jSONObject.isNull("m_o")) {
                dVar.S = null;
            } else {
                dVar.S = a(jSONObject.optString("m_o"), jSONObject.optString("m_o_ks"), jOptLong, dVar.T);
            }
            if (jSONObject.isNull("p_m_o")) {
                dVar.F = 0;
            } else {
                dVar.F = jSONObject.optInt("p_m_o");
            }
            if (!jSONObject.isNull(com.tkay.core.common.h.l.a)) {
                JSONObject jSONObject2 = new JSONObject(jSONObject.optString(com.tkay.core.common.h.l.a));
                HashMap map = new HashMap();
                Iterator<String> itKeys = jSONObject2.keys();
                while (itKeys.hasNext()) {
                    String next = itKeys.next();
                    map.put(next, jSONObject2.opt(next));
                }
                dVar.H = map;
            } else {
                dVar.H = null;
            }
            if (!jSONObject.isNull(com.alipay.sdk.authjs.a.b)) {
                JSONObject jSONObject3 = new JSONObject(jSONObject.optString(com.alipay.sdk.authjs.a.b));
                if (!jSONObject3.isNull("sc_list")) {
                    JSONObject jSONObject4 = new JSONObject(jSONObject3.optString("sc_list"));
                    HashMap map2 = new HashMap();
                    Iterator<String> itKeys2 = jSONObject4.keys();
                    while (itKeys2.hasNext()) {
                        String next2 = itKeys2.next();
                        JSONObject jSONObject5 = new JSONObject(jSONObject4.optString(next2));
                        TYRewardInfo tYRewardInfo = new TYRewardInfo();
                        tYRewardInfo.rewardName = jSONObject5.optString("rw_n");
                        tYRewardInfo.rewardNumber = jSONObject5.optInt("rw_num");
                        map2.put(next2, tYRewardInfo);
                    }
                    dVar.I = map2;
                }
                if (!jSONObject3.isNull("reward")) {
                    JSONObject jSONObject6 = new JSONObject(jSONObject3.optString("reward"));
                    TYRewardInfo tYRewardInfo2 = new TYRewardInfo();
                    if (!jSONObject6.isNull("rw_n")) {
                        tYRewardInfo2.rewardName = jSONObject6.optString("rw_n");
                    }
                    if (!jSONObject6.isNull("rw_num")) {
                        tYRewardInfo2.rewardNumber = jSONObject6.optInt("rw_num");
                    }
                    dVar.J = tYRewardInfo2;
                }
                if (!jSONObject3.isNull("currency")) {
                    dVar.K = jSONObject3.optString("currency");
                }
                if (!jSONObject3.isNull(com.tkay.expressad.d.a.b.h)) {
                    dVar.L = jSONObject3.optString(com.tkay.expressad.d.a.b.h);
                }
                if (!jSONObject3.isNull("exch_r")) {
                    dVar.V = jSONObject3.optDouble("exch_r", 0.0d);
                }
                if (!jSONObject3.isNull("acct_cy")) {
                    dVar.W = jSONObject3.optString("acct_cy");
                }
            }
            if (jSONObject.isNull(a.a)) {
                dVar.M = com.heytap.mcssdk.constant.a.q;
            } else {
                dVar.M = jSONObject.optLong(a.a);
            }
            if (jSONObject.isNull(a.b)) {
                dVar.N = "";
            } else {
                dVar.N = jSONObject.optString(a.b);
            }
            if (jSONObject.isNull(a.c)) {
                dVar.O = com.heytap.mcssdk.constant.a.q;
            } else {
                dVar.O = jSONObject.optLong(a.c);
            }
            if (jSONObject.isNull(a.d)) {
                dVar.P = -1;
            } else {
                dVar.P = jSONObject.optInt(a.d);
            }
            if (jSONObject.isNull(a.e)) {
                dVar.Q = com.heytap.mcssdk.constant.a.h;
            } else {
                dVar.Q = jSONObject.optLong(a.e);
            }
            if (jSONObject.isNull(a.f)) {
                dVar.R = 2;
            } else {
                dVar.R = jSONObject.optInt(a.f);
            }
            if (jSONObject.isNull(a.i)) {
                dVar.aE = null;
            } else {
                dVar.aE = jSONObject.optString(a.i);
            }
            if (jSONObject.isNull(a.h)) {
                dVar.aG = "";
            } else {
                dVar.aG = jSONObject.optString(a.h);
            }
            if (jSONObject.isNull(a.l)) {
                dVar.U = 4000L;
            } else {
                dVar.U = jSONObject.optLong(a.l);
            }
            if (!jSONObject.isNull(a.m)) {
                JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray(a.m);
                ArrayList arrayList = new ArrayList(3);
                for (int i3 = 0; i3 < jSONArrayOptJSONArray.length(); i3++) {
                    arrayList.add(jSONArrayOptJSONArray.optString(i3));
                }
                dVar.X = arrayList;
            } else {
                dVar.X = null;
            }
            if (jSONObject.isNull(a.n)) {
                dVar.Y = "";
            } else {
                dVar.Y = jSONObject.optString(a.n);
            }
            if (jSONObject.isNull(a.o)) {
                dVar.Z = "";
            } else {
                dVar.Z = jSONObject.optString(a.o);
            }
            if (jSONObject.isNull(a.p)) {
                dVar.aa = "";
            } else {
                dVar.aa = jSONObject.optString(a.p);
            }
            if (jSONObject.isNull(a.q)) {
                dVar.ab = "";
            } else {
                dVar.ab = jSONObject.optString(a.q);
            }
            if (jSONObject.isNull(a.r)) {
                dVar.ac = 500L;
            } else {
                dVar.ac = jSONObject.optLong(a.r);
            }
            if (jSONObject.isNull(a.s)) {
                dVar.ad = "";
            } else {
                dVar.ad = jSONObject.optString(a.s);
            }
            if (jSONObject.isNull(a.t)) {
                dVar.ae = "";
            } else {
                dVar.ae = jSONObject.optString(a.t);
            }
            if (jSONObject.isNull(a.v)) {
                dVar.ag = 0.1614d;
            } else {
                dVar.ag = jSONObject.optDouble(a.v);
            }
            if (!jSONObject.isNull(a.x)) {
                String strOptString = jSONObject.optString(a.x);
                dVar.ah = strOptString;
                dVar.aj = a(strOptString, 8);
            } else {
                dVar.ah = HttpUrl.PATH_SEGMENT_ENCODE_SET_URI;
            }
            if (jSONObject.isNull(a.y)) {
                dVar.ai = 1000L;
            } else {
                dVar.ai = jSONObject.optLong(a.y);
            }
            if (jSONObject.isNull(a.z)) {
                dVar.ak = 0L;
            } else {
                dVar.ak = jSONObject.optLong(a.z);
            }
            if (jSONObject.isNull(a.A)) {
                dVar.al = 2000L;
            } else {
                dVar.al = jSONObject.optLong(a.A);
            }
            if (jSONObject.isNull(a.B)) {
                dVar.am = -1L;
            } else {
                dVar.am = jSONObject.optLong(a.B);
            }
            if (jSONObject.isNull(a.C)) {
                dVar.an = 1;
            } else {
                dVar.an = jSONObject.optInt(a.C);
            }
            if (jSONObject.isNull(a.D)) {
                dVar.ao = 1;
            } else {
                dVar.ao = jSONObject.optInt(a.D);
            }
            if (jSONObject.isNull(a.E)) {
                dVar.ap = 2;
            } else {
                dVar.ap = jSONObject.optInt(a.E);
            }
            if (jSONObject.isNull(a.F)) {
                dVar.aq = 2000L;
            } else {
                dVar.aq = jSONObject.optLong(a.F);
            }
            if (jSONObject.isNull(a.G)) {
                dVar.aJ = HttpUrl.PATH_SEGMENT_ENCODE_SET_URI;
            } else {
                dVar.aJ = jSONObject.optString(a.G);
            }
            if (jSONObject.isNull("bid_floor")) {
                dVar.aK = 0.0d;
            } else {
                dVar.aK = jSONObject.optDouble("bid_floor");
            }
            if (jSONObject.isNull(a.I)) {
                dVar.ar = null;
            } else {
                dVar.ar = jSONObject.optJSONObject(a.I);
            }
            if (jSONObject.isNull(a.J)) {
                dVar.as = "";
            } else {
                dVar.as = jSONObject.optString(a.J);
            }
            if (jSONObject.isNull(a.K)) {
                dVar.aL = 0;
            } else {
                dVar.aL = jSONObject.optInt(a.K);
            }
            if (jSONObject.isNull(a.L)) {
                dVar.aM = 2;
            } else {
                dVar.aM = jSONObject.optInt(a.L);
            }
            try {
                dVar.t = a(dVar.p, dVar.aF, dVar.q, dVar.r, dVar.af, dVar.aI, dVar.aJ);
            } catch (Exception unused2) {
            }
            if (jSONObject.isNull(a.M)) {
                dVar.aO = 0;
            } else {
                dVar.aO = jSONObject.optInt(a.M);
            }
            if (jSONObject.isNull(a.N)) {
                i = 0;
                dVar.aN = 0;
            } else {
                i = 0;
                dVar.aN = jSONObject.optInt(a.N);
            }
            if (jSONObject.isNull("is_test")) {
                dVar.aD = 2;
            } else {
                dVar.aD = jSONObject.optInt("is_test");
            }
            dVar.at = jSONObject.optJSONObject(a.R);
            if (jSONObject.isNull("mdna_r")) {
                dVar.au = 1;
            } else {
                dVar.au = jSONObject.optInt("mdna_r");
            }
            if (jSONObject.isNull(a.T)) {
                dVar.av = "";
            } else {
                dVar.av = jSONObject.optString(a.T);
            }
            if (jSONObject.isNull(a.U)) {
                dVar.aw = "";
            } else {
                dVar.aw = jSONObject.optString(a.U);
            }
            if (!jSONObject.isNull(a.V)) {
                dVar.ax = jSONObject.optInt(a.V);
            } else {
                dVar.ax = 2;
            }
            if (!jSONObject.isNull(a.W)) {
                dVar.ay = jSONObject.optInt(a.W);
                i2 = 1;
            } else {
                i2 = 1;
                dVar.ay = 1;
            }
            if (!jSONObject.isNull(a.X)) {
                ArrayList arrayList2 = new ArrayList(3);
                JSONArray jSONArrayOptJSONArray2 = jSONObject.optJSONArray(a.X);
                if (jSONArrayOptJSONArray2 != null) {
                    int length = jSONArrayOptJSONArray2.length();
                    while (i < length) {
                        arrayList2.add(Integer.valueOf(jSONArrayOptJSONArray2.optInt(i)));
                        i++;
                    }
                }
                dVar.az = arrayList2;
            } else {
                dVar.az = new ArrayList(i2);
            }
            if (jSONObject.isNull(a.Y)) {
                dVar.aA = 2;
            } else {
                dVar.aA = jSONObject.optInt(a.Y);
            }
            if (!jSONObject.isNull(a.Z)) {
                dVar.aB = jSONObject.optInt(a.Z);
            } else {
                dVar.aB = 1;
            }
            if (jSONObject.isNull(a.aa)) {
                dVar.aC = 2;
            } else {
                dVar.aC = jSONObject.optInt(a.aa);
            }
            if (!jSONObject.isNull("p_c")) {
                dVar.aP = jSONObject.optJSONObject("p_c");
            }
            return dVar;
        } catch (Exception unused3) {
            return null;
        }
    }

    public final boolean ay() {
        return this.e == 1;
    }

    public static List<aj> a(String str, String str2, String str3, String str4, String str5, String str6, String str7) {
        List<aj> listA = a(str, 1);
        List<aj> listA2 = a(str2, 3);
        List<aj> listA3 = a(str3, 2);
        List<aj> listA4 = a(str4, 5);
        List<aj> listA5 = a(str5, 6);
        List<aj> listA6 = a(str6, 7);
        List<aj> listA7 = a(str7, 3);
        listA.addAll(listA2);
        listA.addAll(listA3);
        listA.addAll(listA4);
        listA.addAll(listA5);
        listA.addAll(listA6);
        listA.addAll(listA7);
        return listA;
    }

    public static List<aj> a(String str, String str2) {
        List<aj> listA = a(str, 0);
        listA.addAll(a(str2, 4));
        Collections.sort(listA);
        return listA;
    }

    public static List<aj> c(String str) {
        return a(str, 8);
    }

    public static List<aj> d(String str) {
        List<aj> listA = a(str, 2);
        Iterator<aj> it = listA.iterator();
        while (it.hasNext()) {
            it.next().ai();
        }
        return listA;
    }

    private static List<aj> a(String str, int i) {
        String str2;
        boolean z;
        JSONArray jSONArray;
        int i2;
        String str3;
        String str4;
        boolean z2;
        ArrayList arrayList;
        String str5;
        String str6;
        String str7;
        String str8;
        String str9;
        int i3;
        TYCustomAdapterConfig tYCustomAdapterConfigB;
        int i4 = i;
        String str10 = "pacing";
        String str11 = l.s;
        String str12 = l.r;
        String str13 = l.t;
        String str14 = l.z;
        if (i4 == 0 || i4 == 4 || i4 == 8) {
            str2 = l.E;
            z = false;
        } else {
            str2 = l.E;
            z = true;
        }
        ArrayList arrayList2 = new ArrayList();
        try {
            String str15 = l.D;
            JSONArray jSONArray2 = new JSONArray(str);
            String str16 = "unit_id";
            int i5 = 0;
            while (i5 < jSONArray2.length()) {
                JSONObject jSONObject = jSONArray2.getJSONObject(i5);
                if (jSONObject != null) {
                    jSONArray = jSONArray2;
                    aj ajVar = new aj();
                    ajVar.e(i4);
                    i2 = i5;
                    ajVar.d(z ? 1 : 0);
                    if (jSONObject.isNull(str14)) {
                        ajVar.c("");
                    } else {
                        ajVar.c(jSONObject.optString(str14));
                    }
                    str4 = str14;
                    if (jSONObject.isNull(l.w)) {
                        ajVar.b(-1);
                    } else {
                        ajVar.b(jSONObject.optInt(l.w));
                    }
                    if (jSONObject.isNull(l.x)) {
                        ajVar.c(-1);
                    } else {
                        ajVar.c(jSONObject.optInt(l.x));
                    }
                    if (jSONObject.isNull("content")) {
                        ajVar.b("");
                    } else {
                        ajVar.b(jSONObject.optString("content"));
                    }
                    if (jSONObject.isNull("nw_firm_id")) {
                        ajVar.a(-1);
                    } else {
                        ajVar.a(jSONObject.optInt("nw_firm_id"));
                    }
                    if (jSONObject.isNull(l.v)) {
                        ajVar.a("");
                    } else {
                        ajVar.a(jSONObject.optString(l.v));
                    }
                    if (jSONObject.isNull(l.A)) {
                        ajVar.d(EnvironmentCompat.MEDIA_UNKNOWN);
                    } else {
                        ajVar.d(jSONObject.optString(l.A));
                    }
                    z2 = z;
                    if (jSONObject.isNull(str13)) {
                        ajVar.c(0L);
                    } else {
                        ajVar.c(jSONObject.optInt(str13));
                    }
                    if (jSONObject.isNull(str12)) {
                        ajVar.d(0L);
                    } else {
                        ajVar.d(jSONObject.optInt(str12));
                    }
                    if (jSONObject.isNull(str11)) {
                        ajVar.h(1);
                    } else {
                        ajVar.h(jSONObject.optInt(str11));
                    }
                    if (jSONObject.isNull(str10)) {
                        ajVar.e(-1L);
                    } else {
                        ajVar.e(jSONObject.optLong(str10));
                    }
                    str6 = str16;
                    if (jSONObject.isNull(str6)) {
                        ajVar.e("");
                    } else {
                        ajVar.e(jSONObject.optString(str6));
                    }
                    str5 = str15;
                    str7 = str10;
                    str8 = str11;
                    if (jSONObject.isNull(str5)) {
                        ajVar.a(0.0d);
                        str9 = str12;
                        str3 = str13;
                    } else {
                        str9 = str12;
                        str3 = str13;
                        ajVar.a(jSONObject.optDouble(str5, 0.0d));
                    }
                    String str17 = str2;
                    if (jSONObject.isNull(str17)) {
                        ajVar.f(2000L);
                    } else {
                        ajVar.f(jSONObject.optInt(str17));
                    }
                    if (jSONObject.isNull(l.G)) {
                        ajVar.f("");
                    } else {
                        ajVar.f(jSONObject.optString(l.G));
                    }
                    if (jSONObject.isNull(l.H)) {
                        ajVar.i(0);
                    } else {
                        ajVar.i(jSONObject.optInt(l.H));
                    }
                    if (jSONObject.isNull(l.I)) {
                        ajVar.j(3000);
                    } else {
                        ajVar.j(jSONObject.optInt(l.I));
                    }
                    if (jSONObject.isNull("payload")) {
                        ajVar.g("");
                    } else {
                        ajVar.g(jSONObject.optString("payload"));
                    }
                    if (jSONObject.isNull("error")) {
                        ajVar.h("");
                    } else {
                        ajVar.h(jSONObject.optString("error"));
                    }
                    if (jSONObject.isNull(l.J)) {
                        ajVar.g(1800000L);
                    } else {
                        ajVar.g(jSONObject.optLong(l.J));
                    }
                    if (jSONObject.isNull(l.K)) {
                        ajVar.h(-1L);
                    } else {
                        ajVar.h(jSONObject.optLong(l.K));
                    }
                    if (jSONObject.isNull(l.L)) {
                        ajVar.b(1800000L);
                    } else {
                        ajVar.b(jSONObject.optLong(l.L));
                    }
                    if (jSONObject.isNull(l.ai)) {
                        ajVar.g(z2 ? 0 : 1);
                    } else {
                        ajVar.g(jSONObject.optInt(l.ai));
                    }
                    if (jSONObject.isNull(l.M)) {
                        ajVar.k(1);
                    } else {
                        ajVar.k(jSONObject.optInt(l.M));
                    }
                    if (jSONObject.isNull(l.N)) {
                        ajVar.l(1);
                    } else {
                        ajVar.l(jSONObject.optInt(l.N));
                    }
                    if (jSONObject.isNull(l.O)) {
                        ajVar.m(-1);
                    } else {
                        ajVar.m(jSONObject.optInt(l.O));
                    }
                    if (jSONObject.isNull(l.P)) {
                        ajVar.i("publisher_defined");
                    } else {
                        ajVar.i(jSONObject.optString(l.P));
                    }
                    if (jSONObject.isNull(l.Q)) {
                        ajVar.i(0L);
                    } else {
                        ajVar.i(jSONObject.optLong(l.Q));
                    }
                    if (jSONObject.isNull(l.R)) {
                        ajVar.j(0L);
                    } else {
                        ajVar.j(jSONObject.optLong(l.R));
                    }
                    if (jSONObject.isNull(l.S)) {
                        ajVar.b(0.0d);
                        str2 = str17;
                    } else {
                        str2 = str17;
                        ajVar.b(jSONObject.optDouble(l.S, 0.0d));
                    }
                    if (jSONObject.isNull(l.T)) {
                        ajVar.n(1);
                    } else {
                        ajVar.n(jSONObject.optInt(l.T));
                    }
                    if (jSONObject.isNull(l.U)) {
                        ajVar.o(1);
                    } else {
                        ajVar.o(jSONObject.optInt(l.U));
                    }
                    if (jSONObject.isNull(l.V)) {
                        ajVar.p(2);
                    } else {
                        ajVar.p(jSONObject.optInt(l.V));
                    }
                    if (jSONObject.isNull(l.W)) {
                        ajVar.f(1);
                    } else {
                        ajVar.f(jSONObject.optInt(l.W));
                    }
                    if (jSONObject.isNull(l.Z)) {
                        ajVar.q(2);
                    } else {
                        ajVar.q(jSONObject.optInt(l.Z));
                    }
                    if (jSONObject.isNull(l.X)) {
                        ajVar.s(2);
                    } else {
                        ajVar.s(jSONObject.optInt(l.X));
                    }
                    if (jSONObject.isNull(l.Y)) {
                        ajVar.r(0);
                    } else {
                        ajVar.r(jSONObject.optInt(l.Y));
                    }
                    if (jSONObject.isNull(l.aa)) {
                        ajVar.t(1);
                    } else {
                        ajVar.t(jSONObject.optInt(l.aa));
                    }
                    if (jSONObject.isNull(l.ad)) {
                        ajVar.j("");
                    } else {
                        ajVar.j(jSONObject.optString(l.ad));
                    }
                    if (i == 7) {
                        com.tkay.core.common.d.c.a(m.a().f()).a(ajVar.t(), ajVar.V());
                    }
                    if (jSONObject.isNull(l.ab)) {
                        ajVar.u(2);
                    } else {
                        ajVar.u(jSONObject.optInt(l.ab));
                    }
                    if (jSONObject.isNull("ad_type")) {
                        i3 = -1;
                        ajVar.v(-1);
                    } else {
                        i3 = -1;
                        ajVar.v(jSONObject.optInt("ad_type", -1));
                    }
                    if (jSONObject.isNull(l.ae)) {
                        ajVar.w(i3);
                    } else {
                        ajVar.w(jSONObject.optInt(l.ae, i3));
                    }
                    if (ajVar.l() == 2 && ajVar.c() == 22) {
                        ajVar.a(TYAdConst.CURRENCY.RMB_CENT);
                    } else {
                        ajVar.a(TYAdConst.CURRENCY.USD);
                    }
                    if (jSONObject.isNull(l.af)) {
                        ajVar.y(0);
                    } else {
                        ajVar.y(jSONObject.optInt(l.af, 0));
                    }
                    if (jSONObject.isNull("bid_floor")) {
                        ajVar.c(0.0d);
                    } else {
                        ajVar.c(jSONObject.optDouble("bid_floor", 0.0d));
                    }
                    if (ajVar.c() >= 100000 && (tYCustomAdapterConfigB = m.a().b(ajVar.h())) != null) {
                        ajVar.f(tYCustomAdapterConfigB.isRealTimeBidSwitch() ? 2 : 1);
                        ajVar.c(tYCustomAdapterConfigB.getAdCacheTime());
                    }
                    if (jSONObject.isNull(l.al)) {
                        ajVar.z(-1);
                    } else {
                        ajVar.z(jSONObject.optInt(l.al, -1));
                    }
                    if (jSONObject.isNull(l.am)) {
                        ajVar.d(ajVar.x());
                    } else {
                        ajVar.d(jSONObject.optDouble(l.am, ajVar.x()));
                    }
                    if (jSONObject.isNull(l.an)) {
                        ajVar.k(WindAds.CNY);
                    } else {
                        ajVar.k(jSONObject.optString(l.an, WindAds.CNY));
                    }
                    arrayList = arrayList2;
                    try {
                        arrayList.add(ajVar);
                    } catch (Exception unused) {
                        return arrayList;
                    }
                } else {
                    jSONArray = jSONArray2;
                    i2 = i5;
                    str3 = str13;
                    str4 = str14;
                    z2 = z;
                    arrayList = arrayList2;
                    str5 = str15;
                    str6 = str16;
                    str7 = str10;
                    str8 = str11;
                    str9 = str12;
                }
                i4 = i;
                arrayList2 = arrayList;
                str12 = str9;
                str10 = str7;
                str11 = str8;
                z = z2;
                str13 = str3;
                str16 = str6;
                str15 = str5;
                str14 = str4;
                i5 = i2 + 1;
                jSONArray2 = jSONArray;
            }
        } catch (Exception unused2) {
        }
        return arrayList2;
    }

    private static List<r> a(String str, String str2, long j, t tVar) {
        ArrayList arrayList = new ArrayList();
        try {
            JSONArray jSONArray = new JSONArray(str);
            for (int i = 0; i < jSONArray.length(); i++) {
                r rVar = new r();
                JSONObject jSONObjectOptJSONObject = jSONArray.optJSONObject(i);
                rVar.j(jSONObjectOptJSONObject.optString("o_id"));
                rVar.k(jSONObjectOptJSONObject.optString("c_id"));
                rVar.l(jSONObjectOptJSONObject.optString("t"));
                rVar.w(jSONObjectOptJSONObject.optString("p_g"));
                rVar.m(jSONObjectOptJSONObject.optString("d"));
                rVar.n(jSONObjectOptJSONObject.optString("ic_u"));
                rVar.o(jSONObjectOptJSONObject.optString("im_u"));
                rVar.p(jSONObjectOptJSONObject.optString("f_i_u"));
                rVar.q(jSONObjectOptJSONObject.optString("a_c_u"));
                rVar.r(jSONObjectOptJSONObject.optString("c_t"));
                rVar.s(jSONObjectOptJSONObject.optString("v_u"));
                rVar.e(jSONObjectOptJSONObject.optInt("l_t"));
                rVar.t(jSONObjectOptJSONObject.optString("p_u"));
                rVar.u(jSONObjectOptJSONObject.optString("dl"));
                rVar.v(jSONObjectOptJSONObject.optString("c_u"));
                rVar.H(jSONObjectOptJSONObject.optString("ip_u"));
                rVar.I(jSONObjectOptJSONObject.optString("t_u"));
                rVar.J(jSONObjectOptJSONObject.optString("t_u_25"));
                rVar.K(jSONObjectOptJSONObject.optString("t_u_50"));
                rVar.L(jSONObjectOptJSONObject.optString("t_u_75"));
                rVar.M(jSONObjectOptJSONObject.optString("t_u_100"));
                rVar.N(jSONObjectOptJSONObject.optString("s_e_c_t_u"));
                rVar.O(jSONObjectOptJSONObject.optString("c_t_u"));
                rVar.P(jSONObjectOptJSONObject.optString("ip_n_u"));
                rVar.Q(jSONObjectOptJSONObject.optString("c_n_u"));
                rVar.R = jSONObjectOptJSONObject.optInt("o_a_d_c");
                rVar.S = jSONObjectOptJSONObject.optLong("o_a_p");
                rVar.a(j);
                rVar.d(jSONObjectOptJSONObject.optInt("unit_type"));
                rVar.a(jSONObjectOptJSONObject.optInt("c_m"));
                rVar.b(jSONObjectOptJSONObject.optString("ext_h_pic"));
                rVar.E(jSONObjectOptJSONObject.optString("ext_big_h_pic"));
                rVar.F(jSONObjectOptJSONObject.optString("ext_rect_h_pic"));
                rVar.G(jSONObjectOptJSONObject.optString("ext_home_h_pic"));
                rVar.a(str2);
                rVar.y(jSONObjectOptJSONObject.optString("pub"));
                rVar.z(jSONObjectOptJSONObject.optString("app_vc"));
                rVar.A(jSONObjectOptJSONObject.optString("pvc"));
                rVar.B(jSONObjectOptJSONObject.optString("pms"));
                rVar.a((j) tVar);
                arrayList.add(rVar);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        return arrayList;
    }

    public final r e(String str) {
        List<r> list = this.S;
        if (list == null) {
            return null;
        }
        for (r rVar : list) {
            if (rVar.k() == null) {
                rVar.a((j) this.T);
            }
            if (TextUtils.equals(str, rVar.p()) && !rVar.a(this.T)) {
                return rVar;
            }
        }
        return null;
    }

    public final boolean az() {
        new StringBuilder("Already cache time -- > ").append(System.currentTimeMillis() - this.aH);
        return System.currentTimeMillis() - this.aH > this.b;
    }

    public final Map<String, Object> a(String str, String str2, aj ajVar) {
        com.tkay.core.common.f.l lVarM;
        Map<String, Object> mapC = h.c(ajVar.g());
        boolean zB = g.b();
        com.tkay.core.c.a aVarB = b.a(m.a().f()).b(m.a().o());
        if (!TextUtils.isEmpty(ajVar.y())) {
            mapC.put("payload", ajVar.y());
        }
        if (!TextUtils.isEmpty(ajVar.Q())) {
            mapC.put("custom_inhouse_bid_result", ajVar.Q());
        }
        boolean z = false;
        mapC.put(f.k.c, Boolean.valueOf(aVarB.p() == 3));
        if (aVarB.q() == 2 && zB) {
            z = true;
        }
        mapC.put(f.k.d, Boolean.valueOf(z));
        mapC.put(f.k.e, Boolean.valueOf(p.a(m.a().f()).c()));
        mapC.put("ad_type", Integer.valueOf(ajVar.X()));
        if (this.ay == 1) {
            mapC.put(f.k.m, str + "_" + this.C + "_" + this.m);
        }
        mapC.put(f.k.n, v.a().f(str));
        if (ajVar.c() == 28 && (lVarM = ajVar.M()) != null) {
            mapC.put(f.k.o, Double.valueOf(g.a(ajVar) * lVarM.l));
        }
        String strL = com.tkay.core.common.l.d.l();
        if (!TextUtils.isEmpty(strL)) {
            mapC.put(TYAdConst.KEY.WECHAT_APPID, strL);
        }
        if (ajVar.c() == 35 || ajVar.l() == 3 || ajVar.l() == 4 || ajVar.l() == 7) {
            i iVar = new i();
            iVar.a = ajVar.y();
            iVar.f = ajVar.c();
            iVar.c = ajVar.t();
            iVar.d = str2;
            iVar.b = str;
            iVar.h = this.C;
            iVar.i = this.m;
            iVar.j = this.u;
            iVar.g = ajVar.d();
            com.tkay.core.common.f.l lVarM2 = ajVar.M();
            iVar.k = lVarM2 != null ? lVarM2.g : "";
            iVar.l = lVarM2 != null ? lVarM2.h : "";
            if (ajVar.c() == 35) {
                iVar.m = this.T;
            } else {
                iVar.m = aa.c(this.aG);
            }
            if (iVar.m != null) {
                iVar.m.q(this.u);
            }
            iVar.n = lVarM2 != null ? lVarM2.f : 0L;
            mapC.put(f.k.a, iVar);
        }
        if (ajVar.ah()) {
            mapC.put(f.k.i, this.ar);
        }
        if (ajVar.c() == 50 && this.aB == 1) {
            mapC.put(f.k.q, str2);
        }
        if (ajVar.c() == 46) {
            TYAdConst.CURRENCY currency = TYAdConst.CURRENCY.RMB;
            if (TextUtils.equals(ajVar.ag(), "USD")) {
                currency = TYAdConst.CURRENCY.USD;
            }
            mapC.put(f.k.r, currency);
        }
        return mapC;
    }
}
