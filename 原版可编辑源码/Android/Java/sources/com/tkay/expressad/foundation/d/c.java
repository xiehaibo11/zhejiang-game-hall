package com.tkay.expressad.foundation.d;

import android.net.Uri;
import android.text.TextUtils;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import com.tkay.basead.b.a;
import com.tkay.expressad.a.c;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.foundation.h.w;
import com.tkay.expressad.foundation.h.x;
import com.xiaomi.mipush.sdk.Constants;
import java.io.Serializable;
import java.net.URL;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class c extends h implements com.tkay.expressad.e.a, Serializable {
    public static final int A = -2;
    public static final int B = 1;
    public static final String C = "id";
    public static final String D = "unitId";
    public static final String E = "title";
    public static final String F = "desc";
    public static final String G = "package_name";
    public static final String H = "icon_url";
    public static final String I = "image_url";
    public static final String J = "image_size";
    public static final String K = "app_size";
    public static final String L = "impression_url";
    public static final String M = "click_url";
    public static final String N = "wtick";
    public static final String O = "deep_link";
    public static final String P = "user_activation";
    public static final String Q = "notice_url";
    public static final String R = "template";
    public static final String S = "ad_source_id";
    public static final String T = "fca";
    public static final String U = "fcb";
    public static final String V = "click_mode";
    public static final String W = "landing_type";
    public static final String X = "link_type";
    public static final String Y = "rating";
    public static final String Z = "number_rating";
    public static final String a = c.class.getSimpleName();
    public static final String aA = "vctn_t";
    public static final String aB = "vck_t";
    public static final String aC = "rs_ignc_r";
    public static final int aD = 1;
    public static final int aE = 2;
    public static final String aF = "rw_pl";
    public static final String aG = "jm_pd";
    public static final String aI = "oc_type";
    public static final String aJ = "oc_time";
    public static final String aK = "t_list";
    public static final String aL = "adchoice";
    public static final String aM = "omid";
    public static final String aN = "ia_icon";
    public static final String aO = "ia_rst";
    public static final String aP = "ia_url";
    public static final String aQ = "ia_ori";
    public static final String aR = "ad_type";
    public static final String aS = "ia_ext1";
    public static final String aT = "ia_ext2";
    public static final String aU = "is_download_zip";
    public static final String aV = "ia_cache";
    public static final String aW = "imp_ua";
    public static final String aX = "c_ua";
    public static final int aY = 1;
    public static final int aZ = 1;
    public static final String aa = "ctatext";
    public static final String ab = "c_ct";
    public static final String ac = "video_url";
    public static final String ad = "video_length";
    public static final String ae = "video_size";
    public static final String af = "video_resolution";
    public static final String ag = "watch_mile";
    public static final String ah = "endcard_click_result";
    public static final String ai = "ctype";
    public static final String aj = "adv_imp";
    public static final String ak = "t_imp";
    public static final String al = "sec";
    public static final String am = "url";
    public static final String an = "guidelines";
    public static final String ao = "offer_type";
    public static final String ap = "reward_amount";
    public static final String aq = "reward_name";
    public static final String ar = "md5_file";
    public static final String as = "c_toi";
    public static final int at = 2;
    public static final String au = "5";
    public static final String av = "rtins_type";
    public static final String aw = "ad_url_list";
    public static final String ax = "retarget_offer";
    public static final String ay = "flb";
    public static final String az = "flb_skiptime";
    public static final String b = "ad_tpl_url";
    public static final int bA = 9;
    public static final int bB = 12;
    public static final String bC = "video_end_type";
    public static final int bD = 1;
    public static final int bE = 2;
    public static final int bF = 3;
    public static final int bG = 4;
    public static final int bH = 5;
    public static final int bI = 100;
    public static final int bJ = 2;
    public static final String bL = "ready_rate";
    public static final String bM = "tmp_ids";
    public static final String bN = "ext_data";
    public static final String bO = "endcard_url";
    public static final String bP = "playable_ads_without_video";
    public static final int bQ = 1;
    public static final int bR = 2;
    public static final String bS = "impression";
    public static final String bT = "start";
    public static final String bU = "first_quartile";
    public static final String bV = "midpoint";
    public static final String bW = "third_quartile";
    public static final String bX = "complete";
    public static final String bY = "mute";
    public static final String bZ = "unmute";
    public static final String ba = "iex";
    public static final String bb = "ts";
    public static final String bc = "nv_t2";
    public static final String bd = "impression_t2";
    public static final String be = "gif_url";
    public static final String bf = "dropout_track";
    public static final String bg = "plycmpt_track";
    public static final String bh = "aks";
    public static final String bi = "k";
    public static final String bj = "q";
    public static final String bk = "r";
    public static final String bl = "al";
    public static final String bm = "mp";
    public static final String bn = "pv_urls";
    public static final int bo = 3;
    public static final int bp = 4;
    public static final int bq = 1;
    public static final int br = 2;
    public static final int bs = 3;
    public static final int bt = 1;
    public static final int bu = 2;
    public static final int bv = 1;
    public static final int bw = 2;
    public static final int bx = 3;
    public static final int by = 4;
    public static final int bz = 8;
    public static final String c = "ad_html";
    public static final String ca = "click";
    public static final String cb = "pause";
    public static final String cc = "resume";
    public static final String cd = "error";
    public static final String ce = "endcard";
    public static final String cf = "close";
    public static final String cg = "video_click";
    public static final String ch = "endcard_show";
    public static final String ci = "play_percentage";
    public static final String cj = "ad_tracking";
    public static final String ck = "rv";
    public static final int cl = -1;
    public static final int cm = 1;
    public static final int cn = 0;
    public static final String d = "cmpt=1";
    private static final long dP = 1;
    public static final String e = "tp_offer";
    private static final int eS = 100;
    public static final String f = "fac";
    public static final String g = "at_cd_rate";
    public static final String h = "plct";
    public static final String i = "plctb";
    public static final String j = "banner_url";
    public static final String k = "banner_html";
    public static final String l = "creative_id";
    public static final String m = "mraid";
    public static final String n = "mraid_src";
    public static final String o = "timestamp";
    public static final String p = "hb";
    public static final String q = "maitve";
    public static final String r = "maitve_src";
    public static final String s = "vcn";
    public static final String t = "token_r";
    public static final String u = "encrypt_p";
    public static final String v = "view_com_time";
    public static final String w = "adspace_t";
    public static final String x = "cbd";
    public static final String y = "vst";
    public static final int z = -2;
    public p aH;
    private List<String> cZ;
    private String dA;
    private int dB;
    private String dC;
    private int dD;
    private int dE;
    private String dF;
    private String dG;
    private int dH;
    private String dI;
    private a dJ;
    private int dL;
    private String dM;
    private String dR;
    private long da;
    private int dd;
    private boolean dl;
    private int du;
    private int dv;
    private int dw;
    private int dx;
    private int dy;
    private int dz;
    private int eA;
    private String eB;
    private int eC;
    private String eD;
    private HashMap<String, String> eE;
    private String eF;
    private String eG;
    private String eH;
    private String eI;
    private String eJ;
    private boolean eK;
    private String eM;
    private boolean eN;
    private boolean eO;
    private int eQ;
    private String eT;
    private String eV;
    private String eW;
    private int eX;
    private String eY;
    private int eb;
    private int ec;
    private int ed;
    private String ee;
    private String ef;
    private String eg;
    private String eh;
    private int ei;
    private boolean ej;
    private boolean el;
    private int em;
    private int eo;
    private String ep;
    private int eq;
    private int er;
    private String es;
    private int et;
    private int eu;
    private int ev;
    private String ew;
    private int ex;
    private String ey;
    private String ez;
    private String fA;
    private int fC;
    private String fb;
    private n fd;
    private String fe;
    private String ff;
    private int fg;
    private long fh;
    private String fi;
    private String fj;
    private int fk;
    private String fl;
    private int fm;
    private b fn;
    private c fo;
    private c.b fp;
    private int fs;
    private ArrayList<Integer> fu;
    private int cV = 1;
    private String cW = "";
    private String cX = "";
    private boolean cY = false;
    private int db = 0;
    private int dc = 0;
    private int de = -2;
    private int df = -2;
    private long dg = 0;
    private long dh = 0;
    private String di = "";
    private String dj = "";
    private long dk = 0;
    private int dm = 0;
    private int dn = 0;
    private String do = "";
    private boolean dp = false;
    private int dq = 0;
    private boolean dr = false;
    private int ds = 0;
    private int dt = -1;
    private int dK = 0;
    private int dN = 1;
    private int dO = 1;
    private int dQ = 6;
    private int dS = -1;
    private String dT = "";
    private String dU = "";
    private String dV = "";
    private int dW = 0;
    private String dX = "";
    private boolean dY = false;
    private String dZ = "";
    private String ea = "";
    private boolean ek = false;
    private String en = "";
    private String eL = "";
    private int eP = 2;
    public String bK = "";
    private int eR = -1;
    private int eU = 1;
    private int eZ = 0;
    private int fa = 2;
    private int fc = 1;
    private boolean fq = false;
    private String fr = null;
    private String ft = "";
    private int fv = 2;
    private int fw = 1;
    private int fx = -1;
    private boolean fy = false;
    private boolean fz = false;
    private int fB = 0;

    public static final class b implements Serializable {
        public boolean a = false;
        public boolean b = false;
        public boolean c = false;
        public boolean d = false;
        public boolean e = false;
        public boolean f = false;
        public boolean g = false;
        public boolean h = false;
        public boolean i = false;
        public boolean j = false;
        public boolean k = false;
        public Map<Integer, String> l;
    }

    public final int a() {
        return this.db;
    }

    private void r(int i2) {
        this.db = i2;
    }

    public final int b() {
        return this.dc;
    }

    private void s(int i2) {
        this.dc = i2;
    }

    public final String c() {
        return this.cW;
    }

    public final void a(String str) {
        this.cW = str;
        boolean zE = t.e(str);
        int iG = t.g(str);
        if (zE) {
            this.dp = true;
            v(iG);
        }
    }

    public final String d() {
        return this.cX;
    }

    public final void b(String str) {
        this.cX = str;
    }

    public final void a(List<String> list) {
        this.cZ = list;
    }

    public final List<String> e() {
        return this.cZ;
    }

    private int bj() {
        return this.cV;
    }

    public final int f() {
        return this.dd;
    }

    private void t(int i2) {
        this.dd = i2;
    }

    public final int g() {
        return this.de;
    }

    private void u(int i2) {
        this.de = i2;
    }

    public final int h() {
        return this.df;
    }

    public final void a(int i2) {
        this.df = i2;
    }

    public final int i() {
        return this.ds;
    }

    public final void b(int i2) {
        this.ds = i2;
    }

    private String bk() {
        return this.do;
    }

    public final void c(String str) {
        this.do = str;
    }

    private int bl() {
        int i2 = this.dn;
        if (i2 == 1) {
            return i2;
        }
        return 0;
    }

    public final void c(int i2) {
        this.dn = i2;
    }

    private int bm() {
        int i2 = this.dm;
        if (i2 > 0) {
            return i2;
        }
        return 1;
    }

    public final void d(int i2) {
        this.dm = i2;
    }

    public final boolean j() {
        return this.dp;
    }

    private void bn() {
        this.dp = true;
    }

    public final int k() {
        return this.dq;
    }

    private void v(int i2) {
        this.dq = t.a(i2);
    }

    public final boolean l() {
        return this.dr;
    }

    public final void m() {
        this.dr = true;
    }

    public final int n() {
        return this.dt;
    }

    public final void e(int i2) {
        this.dt = i2;
    }

    public final long o() {
        return this.dg;
    }

    private void b(long j2) {
        this.dg = j2;
    }

    private long bo() {
        return this.dh;
    }

    private void c(long j2) {
        this.dh = j2;
    }

    public final String p() {
        return this.di;
    }

    public final void d(String str) {
        this.di = x.c(str);
    }

    public final String q() {
        return this.dj;
    }

    public final void e(String str) {
        this.dj = str;
    }

    public final long r() {
        return this.dk;
    }

    private void d(long j2) {
        this.dk = j2;
    }

    public final boolean s() {
        return this.dl;
    }

    public final void a(boolean z2) {
        this.dl = z2;
    }

    public final int t() {
        return this.du;
    }

    private void w(int i2) {
        this.du = i2;
    }

    public final int u() {
        return this.dv;
    }

    private void x(int i2) {
        this.dv = i2;
    }

    public final a v() {
        return this.dJ;
    }

    private void a(a aVar) {
        this.dJ = aVar;
    }

    private p bp() {
        return this.aH;
    }

    private void a(p pVar) {
        this.aH = pVar;
    }

    private int bq() {
        return this.dK;
    }

    private void y(int i2) {
        this.dK = i2;
    }

    private int br() {
        return this.dL;
    }

    private void z(int i2) {
        this.dL = i2;
    }

    private String bs() {
        return this.dM;
    }

    private void C(String str) {
        this.dM = str;
    }

    private String bt() {
        return this.dI;
    }

    private void D(String str) {
        this.dI = str;
    }

    private int bu() {
        return this.dH;
    }

    private void A(int i2) {
        this.dH = i2;
    }

    public final int w() {
        return this.dE;
    }

    public final void f(int i2) {
        this.dE = i2;
    }

    private String bv() {
        return this.dF;
    }

    public final void f(String str) {
        this.dF = str;
    }

    private String bw() {
        return this.dG;
    }

    public final void g(String str) {
        this.dG = str;
    }

    private String bx() {
        return this.dA;
    }

    public final void h(String str) {
        this.dA = str;
    }

    private int by() {
        return this.dB;
    }

    public final void g(int i2) {
        this.dB = i2;
    }

    private String bz() {
        return this.dC;
    }

    public final void i(String str) {
        this.dC = str;
    }

    private int bA() {
        return this.dD;
    }

    public final void h(int i2) {
        this.dD = i2;
    }

    private int bB() {
        return this.dz;
    }

    private void B(int i2) {
        this.dz = i2;
    }

    private int bC() {
        return this.dw;
    }

    private int bD() {
        return this.dx;
    }

    private void C(int i2) {
        this.dx = i2;
    }

    private int bE() {
        return this.dy;
    }

    private void D(int i2) {
        this.dy = i2;
    }

    private void E(int i2) {
        this.dw = i2;
    }

    public final int x() {
        return this.dQ;
    }

    private void F(int i2) {
        this.dQ = i2;
    }

    public final String y() {
        return this.dR;
    }

    private void E(String str) {
        this.dR = str;
    }

    private int bF() {
        return this.ev;
    }

    public final void i(int i2) {
        this.ev = i2;
    }

    public final HashMap<String, String> z() {
        return this.eE;
    }

    private void a(HashMap<String, String> map) {
        this.eE = map;
    }

    private String bG() {
        return this.eF;
    }

    private void F(String str) {
        this.eF = str;
    }

    private String bH() {
        return this.eG;
    }

    private void G(String str) {
        this.eG = str;
    }

    private String bI() {
        return this.eH;
    }

    private void H(String str) {
        this.eH = str;
    }

    private String bJ() {
        return this.eI;
    }

    private void I(String str) {
        this.eI = str;
    }

    private String bK() {
        return this.eJ;
    }

    private void J(String str) {
        this.eJ = str;
    }

    public final boolean A() {
        return this.eK;
    }

    private void d(boolean z2) {
        this.eK = z2;
    }

    public final String B() {
        return this.eL;
    }

    private void K(String str) {
        this.eL = str;
    }

    public final int C() {
        return this.eQ;
    }

    private void G(int i2) {
        this.eQ = i2;
    }

    public final int D() {
        return this.dN;
    }

    private void H(int i2) {
        this.dN = i2;
    }

    public final int E() {
        return this.dO;
    }

    private void I(int i2) {
        this.dO = i2;
    }

    private String bL() {
        return this.bK;
    }

    private void L(String str) {
        this.bK = str;
    }

    public final int F() {
        return this.eP;
    }

    private void J(int i2) {
        this.eP = i2;
    }

    public final String G() {
        return this.eM;
    }

    public final void j(String str) {
        this.eM = str;
    }

    public final boolean H() {
        return this.eN;
    }

    public final void b(boolean z2) {
        this.eN = z2;
    }

    public final String I() {
        if (!TextUtils.isEmpty(this.fb)) {
            return this.fb + "&n_logo=0";
        }
        return this.fb;
    }

    public final void k(String str) {
        c cVar;
        this.fb = str;
        if (TextUtils.isEmpty(this.eV) && (((cVar = this.fo) == null || TextUtils.isEmpty(cVar.k)) && !TextUtils.isEmpty(str) && str.contains("cmpt=1"))) {
            this.eW = str;
        }
        this.fz = t.d(str);
    }

    public final int J() {
        return this.fc;
    }

    private void K(int i2) {
        this.fc = i2;
    }

    public final String K() {
        return this.ff;
    }

    public final void l(String str) {
        this.ff = str;
    }

    private String bM() {
        return this.fe;
    }

    private void M(String str) {
        this.fe = str;
    }

    public final n L() {
        return this.fd;
    }

    private void a(n nVar) {
        this.fd = nVar;
    }

    private String bN() {
        return this.eD;
    }

    private void N(String str) {
        this.eD = str;
    }

    private String bO() {
        return this.fi;
    }

    private void O(String str) {
        this.fi = str;
    }

    private String bP() {
        return this.fj;
    }

    private void P(String str) {
        this.fj = str;
    }

    private int bQ() {
        return this.fg;
    }

    private void L(int i2) {
        this.fg = i2;
    }

    private long bR() {
        return this.fh;
    }

    private void e(long j2) {
        this.fh = j2;
    }

    private b bS() {
        return this.fn;
    }

    private void a(b bVar) {
        this.fn = bVar;
    }

    public final c M() {
        return this.fo;
    }

    private void a(c cVar) {
        this.fo = cVar;
        if (cVar == null || TextUtils.isEmpty(cVar.e())) {
            return;
        }
        if (TextUtils.isEmpty(this.eV) && cVar.e().contains("cmpt=1")) {
            this.eW = cVar.e();
        }
        boolean zE = t.e(cVar.e());
        int iG = t.g(cVar.e());
        if (zE) {
            this.dp = true;
            v(iG);
        }
    }

    public final int N() {
        return this.fm;
    }

    private void M(int i2) {
        this.fm = i2;
    }

    private int bT() {
        return this.eC;
    }

    private void N(int i2) {
        this.eC = i2;
    }

    private String bU() {
        return this.ew;
    }

    private void Q(String str) {
        this.ew = str;
    }

    public final int O() {
        return this.ex;
    }

    private void O(int i2) {
        this.ex = i2;
    }

    private String bV() {
        return this.ey;
    }

    public final void m(String str) {
        this.ey = str;
    }

    public final String P() {
        return this.ez;
    }

    public final void n(String str) {
        this.ez = x.c(str);
    }

    private int bW() {
        return this.eA;
    }

    private void P(int i2) {
        this.eA = i2;
    }

    private String bX() {
        return this.eB;
    }

    private void R(String str) {
        this.eB = str;
    }

    public final int Q() {
        return this.eu;
    }

    private void Q(int i2) {
        this.eu = i2;
    }

    @Override
    public final void o(String str) {
        if (TextUtils.isEmpty(str)) {
            str = this.eu != 2 ? "Learn more" : "Install";
        }
        super.o(str);
    }

    private int bY() {
        return this.er;
    }

    private void R(int i2) {
        this.er = i2;
    }

    private String bZ() {
        return this.es;
    }

    private void S(String str) {
        this.es = str;
    }

    public final Map<Integer, String> R() {
        return ae(this.es);
    }

    private int ca() {
        return this.et;
    }

    private void S(int i2) {
        this.et = i2;
    }

    public final String S() {
        return this.en;
    }

    private void T(String str) {
        this.en = str;
    }

    public final int T() {
        return this.eo;
    }

    private void T(int i2) {
        this.eo = i2;
    }

    public final String U() {
        return this.ep;
    }

    private void U(String str) {
        this.ep = str;
    }

    private int cb() {
        return this.eq;
    }

    private void U(int i2) {
        this.eq = i2;
    }

    private int cc() {
        return this.em;
    }

    private void V(int i2) {
        this.em = i2;
    }

    private boolean cd() {
        return this.ek;
    }

    private void e(boolean z2) {
        this.ek = z2;
    }

    public final void c(boolean z2) {
        this.ej = z2;
    }

    public final boolean V() {
        return this.ej;
    }

    public final boolean W() {
        return this.el;
    }

    public final void X() {
        this.el = true;
    }

    private int ce() {
        return this.ei;
    }

    private void W(int i2) {
        this.ei = i2;
    }

    public final int Y() {
        return this.fa;
    }

    private void X(int i2) {
        this.fa = i2;
    }

    public final String Z() {
        try {
            if (!TextUtils.isEmpty(this.eg)) {
                return this.eg;
            }
            if (TextUtils.isEmpty(this.dZ)) {
                return null;
            }
            Uri uri = Uri.parse(this.dZ);
            if (uri != null) {
                String queryParameter = uri.getQueryParameter("k");
                this.eg = queryParameter;
                this.eg = queryParameter;
            }
            return this.eg;
        } catch (Exception unused) {
            return null;
        }
    }

    private void V(String str) {
        this.eg = str;
    }

    public final String aa() {
        try {
            if (!TextUtils.isEmpty(this.eh)) {
                return this.eh;
            }
            if (TextUtils.isEmpty(this.dU)) {
                return "";
            }
            Uri uri = Uri.parse(this.dU);
            if (uri != null) {
                String queryParameter = uri.getQueryParameter("k");
                this.eh = queryParameter;
                this.eh = queryParameter;
            }
            return this.eh;
        } catch (Exception unused) {
            return "";
        }
    }

    private void W(String str) {
        this.eh = str;
    }

    public final String ab() {
        return this.ee;
    }

    private void X(String str) {
        this.ee = str;
    }

    public final String ac() {
        return this.ef;
    }

    private void Y(String str) {
        this.ef = str;
    }

    private int cf() {
        return this.ec;
    }

    private void Y(int i2) {
        this.ec = i2;
    }

    private int cg() {
        return this.ed;
    }

    private void Z(int i2) {
        this.ed = i2;
    }

    private int ch() {
        return this.dS;
    }

    private void aa(int i2) {
        this.dS = i2;
    }

    public final String ad() {
        return this.dV;
    }

    public final void p(String str) {
        this.dV = str;
    }

    public final int ae() {
        return this.dW;
    }

    private void ab(int i2) {
        this.dW = i2;
    }

    public final String af() {
        return this.dX;
    }

    private void Z(String str) {
        this.dX = str;
    }

    private void f(boolean z2) {
        this.dY = z2;
    }

    private boolean ci() {
        return this.dY;
    }

    public final String ag() {
        return this.dT;
    }

    private void aa(String str) {
        this.dT = str;
    }

    public final String ah() {
        return this.dU;
    }

    public final void q(String str) {
        this.dU = str;
    }

    public final String ai() {
        return this.dZ;
    }

    private void ab(String str) {
        this.dZ = str;
    }

    @Override
    public final c.b aj() {
        return this.fp;
    }

    @Override
    public final void a(c.b bVar) {
        this.fp = bVar;
    }

    private int cj() {
        return this.eb;
    }

    private void ac(int i2) {
        this.eb = i2;
    }

    private String ck() {
        return this.ea;
    }

    private void ac(String str) {
        this.ea = str;
    }

    public static c a(JSONObject jSONObject) {
        c cVar = new c();
        cVar.v(jSONObject.optString("campaignid"));
        cVar.w(jSONObject.optString(DBDefinition.PACKAGE_NAME));
        cVar.x(jSONObject.optString("title"));
        cVar.o(jSONObject.optString(a.a.k));
        cVar.y(jSONObject.optString("desc"));
        cVar.dT = jSONObject.optString("impression_url");
        cVar.A(jSONObject.optString("image_url"));
        cVar.dg = jSONObject.optLong("plct");
        cVar.dh = jSONObject.optLong("plctb");
        cVar.cX = jSONObject.optString("ad_html");
        cVar.a(jSONObject.optString("ad_tpl_url"));
        cVar.d(jSONObject.optString("banner_url"));
        cVar.dj = jSONObject.optString("banner_html");
        cVar.dk = jSONObject.optInt("creative_id");
        return cVar;
    }

    private static boolean a(c cVar, String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        if (com.tkay.expressad.foundation.b.b.b().h() == 2 && "1".equals(Uri.parse(str).getQueryParameter("dpwgl"))) {
            return true;
        }
        cVar.k(str);
        return false;
    }

    public static c b(JSONObject jSONObject) {
        c cVar;
        ArrayList arrayList;
        c cVarA = null;
        if (jSONObject != null) {
            try {
                cVar = new c();
            } catch (Exception e2) {
                e = e2;
            }
            try {
                cVar.v(jSONObject.optString("id"));
                cVar.x(jSONObject.optString("title"));
                cVar.y(jSONObject.optString("desc"));
                cVar.w(jSONObject.optString("package_name"));
                cVar.ev = jSONObject.optInt("rtins_type");
                cVar.z(jSONObject.optString("icon_url"));
                cVar.A(jSONObject.optString("image_url"));
                cVar.B(jSONObject.optString("app_size"));
                cVar.ea = jSONObject.optString("image_size");
                cVar.dT = jSONObject.optString("impression_url");
                cVar.dV = jSONObject.optString("click_url");
                cVar.aH = p.a(jSONObject.optString("rw_pl"));
                cVar.dW = jSONObject.optInt("wtick");
                cVar.dX = jSONObject.optString("deep_link");
                cVar.dY = jSONObject.optBoolean("user_activation", false);
                cVar.dU = jSONObject.optString("notice_url");
                cVar.eb = jSONObject.optInt("template");
                cVar.p(jSONObject.optInt("ad_source_id", 1));
                cVar.ec = jSONObject.optInt("fca");
                cVar.ed = jSONObject.optInt("fcb");
                cVar.eQ = jSONObject.optInt("endcard_click_result");
                if (!TextUtils.isEmpty(jSONObject.optString("rating"))) {
                    cVar.a(Double.parseDouble(jSONObject.optString("rating", "0")));
                }
                if (!TextUtils.isEmpty(jSONObject.optString("number_rating"))) {
                    cVar.o(jSONObject.optInt("number_rating", 333333));
                }
                cVar.ee = jSONObject.optString("click_mode");
                cVar.ef = jSONObject.optString("landing_type");
                cVar.eu = jSONObject.optInt("link_type", 4);
                cVar.ei = jSONObject.optInt("c_ct");
                cVar.o(jSONObject.optString("ctatext"));
                cVar.eD = jSONObject.optString("ad_url_list");
                cVar.fm = jSONObject.optInt("retarget_offer", 2);
                cVar.en = jSONObject.optString("video_url");
                cVar.q(jSONObject.optInt("video_length"));
                cVar.eo = jSONObject.optInt("video_size");
                cVar.ep = jSONObject.optString("video_resolution");
                cVar.eq = jSONObject.optInt("watch_mile");
                cVar.a(System.currentTimeMillis());
                cVar.er = jSONObject.optInt("ctype");
                cVar.es = jSONObject.optString("adv_imp");
                cVar.et = jSONObject.optInt("t_imp");
                cVar.ey = jSONObject.optString("html_url");
                cVar.n(jSONObject.optString("end_screen_url"));
                cVar.ew = jSONObject.optString("guidelines");
                cVar.ex = jSONObject.optInt("offer_type");
                cVar.eB = jSONObject.optString("reward_name");
                cVar.eA = jSONObject.optInt("reward_amount");
                try {
                    String strOptString = jSONObject.optString("ad_tracking");
                    if (!TextUtils.isEmpty(strOptString)) {
                        cVar.fe = strOptString;
                        cVar.fd = ad(strOptString);
                    }
                } catch (Exception unused) {
                }
                try {
                    cVar.eR = jSONObject.optInt("ready_rate", -1);
                    JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("ext_data");
                    if (jSONObjectOptJSONObject != null) {
                        cVar.eT = jSONObjectOptJSONObject.toString();
                    }
                    cVar.eX = jSONObject.optInt("mof_tplid");
                    cVar.r(jSONObject.optString("mof_template_url"));
                    cVar.eU = jSONObject.optInt("nscpt");
                    new JSONArray();
                    JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("pv_urls");
                    if (jSONArrayOptJSONArray == null || jSONArrayOptJSONArray.length() <= 0) {
                        arrayList = null;
                    } else {
                        arrayList = new ArrayList(jSONArrayOptJSONArray.length());
                        for (int i2 = 0; i2 < jSONArrayOptJSONArray.length(); i2++) {
                            arrayList.add(jSONArrayOptJSONArray.optString(i2));
                        }
                    }
                    cVar.cZ = arrayList;
                    JSONObject jSONObjectOptJSONObject2 = jSONObject.optJSONObject("req_ext_data");
                    if (jSONObjectOptJSONObject2 != null) {
                        cVar.eY = jSONObjectOptJSONObject2.toString();
                    }
                } catch (Exception unused2) {
                }
                cVar.eP = jSONObject.optInt("video_end_type", 2);
                if (a(cVar, jSONObject.optString("endcard_url"))) {
                    return null;
                }
                cVar.fc = jSONObject.optInt("playable_ads_without_video", 1);
                if (jSONObject.has("md5_file")) {
                    cVar.bK = jSONObject.optString("md5_file");
                }
                if (jSONObject.has("nv_t2")) {
                    cVar.dQ = jSONObject.optInt("nv_t2");
                }
                if (jSONObject.has("gif_url")) {
                    cVar.dR = jSONObject.optString("gif_url");
                }
                cVar.a(c.a(jSONObject.optJSONObject("rv")));
                cVar.fa = jSONObject.optInt("c_toi", 2);
                cVar.dN = jSONObject.optInt("imp_ua", 1);
                cVar.dO = jSONObject.optInt("c_ua", 1);
                cVar.dw = jSONObject.optInt("jm_pd");
                cVar.dA = jSONObject.optString("ia_icon");
                cVar.dB = jSONObject.optInt("ia_rst");
                cVar.dC = jSONObject.optString("ia_url");
                cVar.dD = jSONObject.optInt("ia_ori");
                cVar.dE = jSONObject.optInt("ad_type");
                cVar.db = jSONObject.optInt("tp_offer");
                cVar.dc = jSONObject.optInt("fac");
                cVar.dF = jSONObject.optString("ia_ext1");
                cVar.dG = jSONObject.optString("ia_ext2");
                cVar.dH = jSONObject.optInt("is_download_zip");
                cVar.dI = jSONObject.optString("ia_cache");
                cVar.dL = jSONObject.optInt("oc_time");
                cVar.dK = jSONObject.optInt("oc_type");
                cVar.dM = jSONObject.optString("t_list");
                cVar.dJ = a.a(jSONObject.optString("adchoice", ""));
                cVar.dg = jSONObject.optLong("plct");
                cVar.dh = jSONObject.optLong("plctb");
                JSONArray jSONArrayOptJSONArray2 = jSONObject.optJSONArray("omid");
                if (jSONArrayOptJSONArray2 == null) {
                    if (!TextUtils.isEmpty(jSONObject.optString("omid"))) {
                        cVar.fr = jSONObject.optString("omid");
                    } else {
                        cVar.fr = null;
                    }
                } else {
                    cVar.fr = jSONArrayOptJSONArray2.toString();
                }
                cVar.dk = jSONObject.optInt("creative_id");
                String strOptString2 = jSONObject.optString("cam_tpl_url");
                Uri uri = Uri.parse(strOptString2);
                if (!TextUtils.isEmpty(uri.getPath()) && (uri.getPath().endsWith(".zip") || uri.getPath().endsWith(".ZIP"))) {
                    cVar.a(strOptString2);
                } else {
                    cVar.d(strOptString2);
                }
                cVar.dj = jSONObject.optString("cam_html");
                cVar.cX = jSONObject.optString("cam_html");
                cVar.ff = jSONObject.optString("unitId");
                String strOptString3 = jSONObject.optString("mraid");
                if (TextUtils.isEmpty(strOptString3)) {
                    strOptString3 = jSONObject.optString("mraid_src");
                }
                if (TextUtils.isEmpty(strOptString3)) {
                    if (!TextUtils.isEmpty(cVar.cX) && !cVar.cX.contains("<MBTPLMARK>")) {
                        cVar.eN = true;
                    } else {
                        cVar.eN = false;
                    }
                } else {
                    cVar.eN = true;
                    cVar.eM = strOptString3;
                }
                try {
                    String strOptString4 = jSONObject.optString("only_impression_url");
                    if (!TextUtils.isEmpty(strOptString4)) {
                        cVar.dZ = strOptString4;
                        Uri uri2 = Uri.parse(strOptString4);
                        if (uri2 != null) {
                            cVar.eg = uri2.getQueryParameter("k");
                        }
                    }
                    String strOptString5 = jSONObject.optString("notice_url");
                    if (!TextUtils.isEmpty(strOptString5)) {
                        cVar.dU = strOptString5;
                        Uri uri3 = Uri.parse(strOptString5);
                        if (uri3 != null) {
                            cVar.eh = uri3.getQueryParameter("k");
                        }
                    }
                } catch (Exception unused3) {
                }
                cVar.eK = jSONObject.optBoolean("hb", false);
                cVar.fk = jSONObject.optInt("maitve");
                cVar.fl = jSONObject.optString("maitve_src");
                cVar.du = jSONObject.optInt("flb");
                cVar.dv = jSONObject.optInt("flb_skiptime");
                cVar.de = jSONObject.optInt("cbd", -2);
                cVar.df = jSONObject.optInt("vst", -2);
                cVar.dd = jSONObject.optInt("adspace_t", 1);
                cVarA = a(jSONObject, cVar);
                cVarA.dm = jSONObject.optInt("vcn");
                cVarA.dn = jSONObject.optInt("token_r");
                cVarA.do = jSONObject.optString("encrypt_p");
                cVarA.ds = jSONObject.optInt("view_com_time");
                cVarA.ag(jSONObject.optInt("vck_t", 2));
                cVarA.ah(jSONObject.optInt("vctn_t", 1));
                JSONArray jSONArrayOptJSONArray3 = jSONObject.optJSONArray("rs_ignc_r");
                if (jSONArrayOptJSONArray3 != null && jSONArrayOptJSONArray3.length() > 0) {
                    ArrayList<Integer> arrayList2 = new ArrayList<>();
                    for (int i3 = 0; i3 < jSONArrayOptJSONArray3.length(); i3++) {
                        arrayList2.add(Integer.valueOf(jSONArrayOptJSONArray3.optInt(i3)));
                    }
                    if (arrayList2.size() > 0) {
                        cVarA.fu = arrayList2;
                    }
                }
                cVarA.fC = jSONObject.optInt(g, 0);
                return cVarA;
            } catch (Exception e3) {
                e = e3;
                cVarA = cVar;
                e.printStackTrace();
                return cVarA;
            }
        }
        return cVarA;
    }

    private static JSONObject c(JSONObject jSONObject) {
        JSONArray jSONArrayOptJSONArray;
        try {
            if (!jSONObject.has("tmp_ids") || (jSONArrayOptJSONArray = jSONObject.optJSONArray("tmp_ids")) == null || jSONArrayOptJSONArray.length() <= 0) {
                return jSONObject;
            }
            jSONObject.remove("tmp_ids");
            for (int i2 = 0; i2 < jSONArrayOptJSONArray.length(); i2++) {
                JSONObject jSONObjectA = com.tkay.expressad.foundation.c.a.a.a().a(jSONArrayOptJSONArray.getString(i2));
                if (jSONObjectA != null) {
                    Iterator<String> itKeys = jSONObjectA.keys();
                    while (itKeys.hasNext()) {
                        String next = itKeys.next();
                        jSONObject.put(next, jSONObjectA.opt(next));
                    }
                }
            }
            return jSONObject;
        } catch (JSONException unused) {
            return null;
        }
    }

    private static c a(JSONObject jSONObject, String str, String str2, String str3, boolean z2, d dVar) {
        return a(jSONObject, str, str2, str3, z2, dVar, "");
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r11v55, types: [boolean] */
    /* JADX WARN: Type inference failed for: r11v57, types: [com.tkay.expressad.foundation.d.c] */
    public static c a(JSONObject jSONObject, String str, String str2, String str3, boolean z2, d dVar, String str4) {
        c cVarIsEmpty;
        ArrayList arrayList;
        JSONObject jSONObjectC = c(jSONObject);
        if (jSONObjectC == null) {
            return null;
        }
        try {
            c cVar = new c();
            try {
                String strOptString = jSONObjectC.optString("aks");
                if (!TextUtils.isEmpty(strOptString)) {
                    JSONObject jSONObject2 = new JSONObject(strOptString);
                    HashMap<String, String> map = new HashMap<>();
                    for (Iterator<String> itKeys = jSONObject2.keys(); itKeys != null && itKeys.hasNext(); itKeys = itKeys) {
                        String next = itKeys.next();
                        map.put(next, jSONObject2.optString(next));
                    }
                    cVar.eE = map;
                }
                if (!TextUtils.isEmpty(str4)) {
                    cVar.eL = str4;
                    cVar.eK = true;
                }
                try {
                    cVar.eR = jSONObjectC.optInt("ready_rate", -1);
                    JSONObject jSONObjectOptJSONObject = jSONObjectC.optJSONObject("ext_data");
                    if (jSONObjectOptJSONObject != null) {
                        cVar.eT = jSONObjectOptJSONObject.toString();
                    }
                    cVar.eX = jSONObjectC.optInt("mof_tplid");
                    cVar.r(jSONObjectC.optString("mof_template_url"));
                    cVar.eU = jSONObjectC.optInt("nscpt");
                    new JSONArray();
                    JSONArray jSONArrayOptJSONArray = jSONObjectC.optJSONArray("pv_urls");
                    if (jSONArrayOptJSONArray == null || jSONArrayOptJSONArray.length() <= 0) {
                        arrayList = null;
                    } else {
                        arrayList = new ArrayList(jSONArrayOptJSONArray.length());
                        for (int i2 = 0; i2 < jSONArrayOptJSONArray.length(); i2++) {
                            arrayList.add(jSONArrayOptJSONArray.optString(i2));
                        }
                    }
                    cVar.cZ = arrayList;
                    JSONObject jSONObjectOptJSONObject2 = jSONObjectC.optJSONObject("req_ext_data");
                    if (jSONObjectOptJSONObject2 != null) {
                        cVar.eY = jSONObjectOptJSONObject2.toString();
                    }
                } catch (Exception unused) {
                }
                cVar.v(jSONObjectC.optString("id"));
                cVar.x(jSONObjectC.optString("title"));
                cVar.ff = jSONObjectC.optString("unitId", "");
                cVar.y(jSONObjectC.optString("desc"));
                cVar.w(jSONObjectC.optString("package_name"));
                cVar.ev = jSONObjectC.optInt("rtins_type");
                cVar.z(jSONObjectC.optString("icon_url"));
                cVar.A(jSONObjectC.optString("image_url"));
                cVar.B(jSONObjectC.optString("app_size"));
                cVar.ea = jSONObjectC.optString("image_size");
                cVar.dT = a(dVar, cVar, jSONObjectC.optString("impression_url"));
                cVar.dV = a(dVar, cVar, jSONObjectC.optString("click_url"));
                cVar.aH = p.a(jSONObjectC.optString("rw_pl"));
                cVar.dW = jSONObjectC.optInt("wtick");
                cVar.dX = a(dVar, cVar, jSONObjectC.optString("deep_link"));
                cVar.dY = jSONObjectC.optBoolean("user_activation", false);
                cVar.dU = a(dVar, cVar, jSONObjectC.optString("notice_url"));
                cVar.eb = jSONObjectC.optInt("template");
                cVar.p(jSONObjectC.optInt("ad_source_id", 1));
                cVar.ec = jSONObjectC.optInt("fca");
                cVar.ed = jSONObjectC.optInt("fcb");
                cVar.eQ = jSONObjectC.optInt("endcard_click_result");
                if (!TextUtils.isEmpty(jSONObjectC.optString("rating"))) {
                    cVar.a(Double.parseDouble(jSONObjectC.optString("rating", "0")));
                }
                if (!TextUtils.isEmpty(jSONObjectC.optString("number_rating"))) {
                    cVar.o(jSONObjectC.optInt("number_rating", 333333));
                }
                cVar.ee = jSONObjectC.optString("click_mode");
                cVar.ef = jSONObjectC.optString("landing_type");
                cVar.eu = jSONObjectC.optInt("link_type", 4);
                cVar.ei = jSONObjectC.optInt("c_ct");
                cVar.o(jSONObjectC.optString("ctatext"));
                cVar.eD = jSONObjectC.optString("ad_url_list");
                cVar.fm = jSONObjectC.optInt("retarget_offer", 2);
                String strOptString2 = jSONObjectC.optString("video_url");
                cVarIsEmpty = TextUtils.isEmpty(strOptString2);
                if (cVarIsEmpty == 0) {
                    if (z2) {
                        cVar.en = strOptString2;
                    } else {
                        cVar.en = com.tkay.expressad.foundation.h.j.b(strOptString2);
                    }
                }
                cVar.ds = jSONObjectC.optInt("view_com_time");
                cVar.q(jSONObjectC.optInt("video_length"));
                cVar.eo = jSONObjectC.optInt("video_size");
                cVar.ep = jSONObjectC.optString("video_resolution");
                cVar.eq = jSONObjectC.optInt("watch_mile");
                cVar.a(System.currentTimeMillis());
                cVar.dZ = a(dVar, cVar, str);
                cVar.er = jSONObjectC.optInt("ctype");
                cVar.es = jSONObjectC.optString("adv_imp");
                cVar.et = jSONObjectC.optInt("t_imp");
                cVar.ey = str2;
                cVar.n(str3);
                cVar.ew = jSONObjectC.optString("guidelines");
                cVar.ex = jSONObjectC.optInt("offer_type");
                cVar.eB = jSONObjectC.optString("reward_name");
                cVar.eA = jSONObjectC.optInt("reward_amount");
                try {
                    if (jSONObjectC.has("ad_tracking")) {
                        String strA = a(dVar, cVar, jSONObjectC.optString("ad_tracking"));
                        if (!TextUtils.isEmpty(strA)) {
                            cVar.fe = strA;
                            cVar.fd = ad(strA);
                        }
                    }
                } catch (Exception unused2) {
                }
                cVar.eP = jSONObjectC.optInt("video_end_type", 2);
                if (a(cVar, jSONObjectC.optString("endcard_url"))) {
                    return null;
                }
                cVar.fc = jSONObjectC.optInt("playable_ads_without_video", 1);
                if (jSONObjectC.has("md5_file")) {
                    cVar.bK = jSONObjectC.optString("md5_file");
                }
                if (jSONObjectC.has("nv_t2")) {
                    cVar.dQ = jSONObjectC.optInt("nv_t2");
                }
                if (jSONObjectC.has("gif_url")) {
                    cVar.dR = jSONObjectC.optString("gif_url");
                }
                cVar.a(c.a(jSONObjectC.optJSONObject("rv")));
                cVar.fa = jSONObjectC.optInt("c_toi", 2);
                cVar.dN = jSONObjectC.optInt("imp_ua", 1);
                cVar.dO = jSONObjectC.optInt("c_ua", 1);
                cVar.dw = jSONObjectC.optInt("jm_pd");
                cVar.dA = jSONObjectC.optString("ia_icon");
                cVar.dB = jSONObjectC.optInt("ia_rst");
                cVar.dC = jSONObjectC.optString("ia_url");
                cVar.dD = jSONObjectC.optInt("ia_ori");
                cVar.dE = dVar.d();
                cVar.db = jSONObjectC.optInt("tp_offer");
                cVar.dc = jSONObjectC.optInt("fac");
                cVar.dF = jSONObjectC.optString("ia_ext1");
                cVar.dG = jSONObjectC.optString("ia_ext2");
                cVar.dH = jSONObjectC.optInt("is_download_zip");
                cVar.dI = jSONObjectC.optString("ia_cache");
                cVar.dL = jSONObjectC.optInt("oc_time");
                cVar.dK = jSONObjectC.optInt("oc_type");
                cVar.dM = jSONObjectC.optString("t_list");
                cVar.dJ = a.a(jSONObjectC.optString("adchoice", ""));
                cVar.dg = jSONObjectC.optLong("plct");
                cVar.dh = jSONObjectC.optLong("plctb");
                cVar.dk = jSONObjectC.optLong("creative_id");
                String strOptString3 = jSONObjectC.optString("cam_tpl_url");
                Uri uri = Uri.parse(strOptString3);
                if (!TextUtils.isEmpty(uri.getPath()) && (uri.getPath().endsWith(".zip") || uri.getPath().endsWith(".ZIP"))) {
                    cVar.a(strOptString3);
                } else {
                    cVar.d(strOptString3);
                }
                cVar.dj = jSONObjectC.optString("cam_html");
                cVar.cX = jSONObjectC.optString("cam_html");
                String strOptString4 = jSONObjectC.optString("mraid");
                if (TextUtils.isEmpty(strOptString4)) {
                    if (!TextUtils.isEmpty(cVar.cX) && !cVar.cX.contains("<MBTPLMARK>")) {
                        cVar.eN = true;
                    } else {
                        cVar.eN = false;
                    }
                } else {
                    cVar.eN = true;
                    cVar.eM = strOptString4;
                }
                JSONArray jSONArrayOptJSONArray2 = jSONObjectC.optJSONArray("omid");
                if (jSONArrayOptJSONArray2 == null) {
                    if (!TextUtils.isEmpty(jSONObjectC.optString("omid"))) {
                        cVar.fr = jSONObjectC.optString("omid");
                    } else {
                        cVar.fr = null;
                    }
                } else {
                    cVar.fr = jSONArrayOptJSONArray2.toString();
                }
                try {
                    cVar.fk = jSONObjectC.optInt("maitve");
                    cVar.fl = jSONObjectC.optString("maitve_src");
                    cVar.du = jSONObjectC.optInt("flb");
                    cVar.de = jSONObjectC.optInt("cbd", -2);
                    cVar.df = jSONObjectC.optInt("vst", -2);
                    cVar.dd = jSONObjectC.optInt("adspace_t", 1);
                    cVar.dv = jSONObjectC.optInt("flb_skiptime");
                    cVarIsEmpty = b(jSONObjectC, cVar);
                    try {
                        ((c) cVarIsEmpty).dT = t.a(com.tkay.core.common.b.m.a().f(), cVarIsEmpty.ba(), ((c) cVarIsEmpty).dT);
                    } catch (Exception e2) {
                        e2.getMessage();
                    }
                    cVarIsEmpty.ag(jSONObjectC.optInt("vck_t", 2));
                    cVarIsEmpty.ah(jSONObjectC.optInt("vctn_t", 1));
                    JSONArray jSONArrayOptJSONArray3 = jSONObjectC.optJSONArray("rs_ignc_r");
                    if (jSONArrayOptJSONArray3 != null && jSONArrayOptJSONArray3.length() > 0) {
                        ArrayList<Integer> arrayList2 = new ArrayList<>();
                        for (int i3 = 0; i3 < jSONArrayOptJSONArray3.length(); i3++) {
                            arrayList2.add(Integer.valueOf(jSONArrayOptJSONArray3.optInt(i3)));
                        }
                        if (arrayList2.size() > 0) {
                            ((c) cVarIsEmpty).fu = arrayList2;
                        }
                    }
                    ((c) cVarIsEmpty).fC = jSONObjectC.optInt(g, 0);
                    return cVarIsEmpty;
                } catch (Exception e3) {
                    e = e3;
                }
            } catch (Exception e4) {
                e = e4;
                cVarIsEmpty = cVar;
            }
        } catch (Exception e5) {
            e = e5;
            cVarIsEmpty = 0;
        }
        e.printStackTrace();
        return cVarIsEmpty;
    }

    private static n ad(String str) {
        try {
            if (!TextUtils.isEmpty(str)) {
                JSONObject jSONObject = new JSONObject(str);
                n nVar = new n();
                nVar.r(a(jSONObject.optJSONArray("impression")));
                nVar.g(a(jSONObject.optJSONArray("start")));
                nVar.h(a(jSONObject.optJSONArray("first_quartile")));
                nVar.i(a(jSONObject.optJSONArray("midpoint")));
                nVar.j(a(jSONObject.optJSONArray("third_quartile")));
                nVar.k(a(jSONObject.optJSONArray("complete")));
                nVar.a(b(jSONObject.optJSONArray("play_percentage")));
                nVar.l(a(jSONObject.optJSONArray("mute")));
                nVar.m(a(jSONObject.optJSONArray("unmute")));
                nVar.n(a(jSONObject.optJSONArray("click")));
                nVar.o(a(jSONObject.optJSONArray("pause")));
                nVar.p(a(jSONObject.optJSONArray("resume")));
                nVar.q(a(jSONObject.optJSONArray("error")));
                nVar.s(a(jSONObject.optJSONArray("endcard")));
                nVar.u(a(jSONObject.optJSONArray("close")));
                nVar.t(a(jSONObject.optJSONArray("endcard_show")));
                nVar.v(a(jSONObject.optJSONArray("video_click")));
                nVar.f(a(jSONObject.optJSONArray("impression_t2")));
                nVar.d(a(jSONObject.optJSONArray("dropout_track")));
                nVar.e(a(jSONObject.optJSONArray("plycmpt_track")));
                nVar.a(a(jSONObject.optJSONArray("apk_download_start")));
                nVar.b(a(jSONObject.optJSONArray("apk_download_end")));
                nVar.c(a(jSONObject.optJSONArray("apk_install")));
                return nVar;
            }
        } catch (JSONException unused) {
        }
        return null;
    }

    private static n a(JSONObject jSONObject, n nVar) {
        nVar.a(a(jSONObject.optJSONArray("apk_download_start")));
        nVar.b(a(jSONObject.optJSONArray("apk_download_end")));
        nVar.c(a(jSONObject.optJSONArray("apk_install")));
        return nVar;
    }

    private static String[] a(JSONArray jSONArray) {
        if (jSONArray == null || jSONArray.length() <= 0) {
            return null;
        }
        String[] strArr = new String[jSONArray.length()];
        for (int i2 = 0; i2 < jSONArray.length(); i2++) {
            strArr[i2] = jSONArray.optString(i2);
        }
        return strArr;
    }

    private static Map<Integer, String> ae(String str) {
        HashMap map = null;
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        try {
            JSONArray jSONArray = new JSONArray(str);
            if (jSONArray.length() <= 0) {
                return null;
            }
            HashMap map2 = new HashMap();
            for (int i2 = 0; i2 < jSONArray.length(); i2++) {
                try {
                    JSONObject jSONObjectOptJSONObject = jSONArray.optJSONObject(i2);
                    int iOptInt = jSONObjectOptJSONObject.optInt("sec");
                    map2.put(Integer.valueOf(iOptInt), jSONObjectOptJSONObject.optString("url"));
                } catch (Exception e2) {
                    e = e2;
                    map = map2;
                }
            }
            return map2;
        } catch (Exception e3) {
            e = e3;
        }
        e.printStackTrace();
        return map;
    }

    public static JSONArray b(List<c> list) {
        JSONArray jSONArray = null;
        if (list != null) {
            try {
                if (list.size() > 0) {
                    JSONArray jSONArray2 = new JSONArray();
                    try {
                        Iterator<c> it = list.iterator();
                        while (it.hasNext()) {
                            try {
                                jSONArray2.put(a(it.next()));
                            } catch (Throwable th) {
                                th.printStackTrace();
                            }
                        }
                        return jSONArray2;
                    } catch (Exception e2) {
                        e = e2;
                        jSONArray = jSONArray2;
                        e.printStackTrace();
                        return jSONArray;
                    }
                }
            } catch (Exception e3) {
                e = e3;
            }
        }
        return jSONArray;
    }

    public static JSONObject a(c cVar, boolean z2, boolean z3) {
        JSONObject jSONObjectA = a(cVar);
        jSONObjectA.put("isReady", z2);
        jSONObjectA.put("expired", z3);
        return jSONObjectA;
    }

    public static JSONObject a(c cVar) {
        c cVar2;
        JSONObject jSONObject = new JSONObject();
        jSONObject.put("id", cVar.aZ());
        jSONObject.put("flb", cVar.du);
        jSONObject.put("flb_skiptime", cVar.dv);
        jSONObject.put("adspace_t", cVar.dd);
        jSONObject.put("vst", cVar.df);
        jSONObject.put("cbd", cVar.de);
        if (!TextUtils.isEmpty(cVar.ff)) {
            jSONObject.put("unitId", cVar.ff);
        }
        if (!TextUtils.isEmpty(cVar.eT)) {
            try {
                jSONObject.put("ext_data", new JSONObject(cVar.eT));
            } catch (JSONException e2) {
                e2.printStackTrace();
            }
        }
        if (!TextUtils.isEmpty(cVar.eY)) {
            try {
                jSONObject.put("req_ext_data", new JSONObject(cVar.eY));
            } catch (JSONException e3) {
                e3.printStackTrace();
            }
        }
        List<String> list = cVar.cZ;
        if (list != null && list.size() > 0) {
            try {
                JSONArray jSONArray = new JSONArray();
                Iterator<String> it = cVar.cZ.iterator();
                while (it.hasNext()) {
                    jSONArray.put(it.next());
                }
                jSONObject.put("pv_urls", jSONArray);
            } catch (JSONException e4) {
                e4.printStackTrace();
            }
        }
        if (!TextUtils.isEmpty(cVar.eV)) {
            jSONObject.put("mof_tplid", cVar.eX);
            jSONObject.put("mof_template_url", cVar.eV);
            jSONObject.put("nscpt", cVar.eU);
        }
        jSONObject.put("ready_rate", cVar.eR);
        jSONObject.put("title", cVar.bb());
        jSONObject.put("desc", cVar.bc());
        jSONObject.put("package_name", cVar.ba());
        jSONObject.put("rtins_type", cVar.ev);
        jSONObject.put("icon_url", cVar.bd());
        jSONObject.put("image_url", cVar.be());
        jSONObject.put("app_size", cVar.bh());
        jSONObject.put("image_size", cVar.ea);
        jSONObject.put("impression_url", cVar.dT);
        jSONObject.put("click_url", cVar.dV);
        p pVar = cVar.aH;
        if (pVar != null) {
            jSONObject.put("rw_pl", pVar.c());
        }
        jSONObject.put("wtick", cVar.dW);
        jSONObject.put("deep_link", cVar.dX);
        jSONObject.put("user_activation", cVar.dY);
        jSONObject.put("notice_url", cVar.dU);
        jSONObject.put("template", cVar.eb);
        jSONObject.put("ad_source_id", cVar.bf());
        jSONObject.put("fca", cVar.ec);
        jSONObject.put("fcb", cVar.ed);
        StringBuilder sb = new StringBuilder();
        sb.append(cVar.aX());
        jSONObject.put("rating", sb.toString());
        jSONObject.put("number_rating", cVar.aY());
        jSONObject.put("click_mode", cVar.ee);
        jSONObject.put("landing_type", cVar.ef);
        jSONObject.put("link_type", cVar.eu);
        jSONObject.put("c_ct", cVar.ei);
        jSONObject.put("ctatext", cVar.cU);
        jSONObject.put("endcard_click_result", cVar.eQ);
        jSONObject.put("retarget_offer", cVar.fm);
        jSONObject.put("video_url", cVar.en);
        jSONObject.put("video_length", cVar.bi());
        jSONObject.put("video_size", cVar.eo);
        jSONObject.put("video_resolution", cVar.ep);
        jSONObject.put("watch_mile", cVar.eq);
        jSONObject.put("ad_url_list", cVar.eD);
        jSONObject.put("only_impression_url", cVar.dZ);
        jSONObject.put("ctype", cVar.er);
        jSONObject.put("t_imp", cVar.et);
        jSONObject.put("adv_imp", cVar.es);
        jSONObject.put("html_url", cVar.ey);
        jSONObject.put("end_screen_url", cVar.ez);
        jSONObject.put("guidelines", cVar.ew);
        jSONObject.put("offer_type", cVar.ex);
        jSONObject.put("reward_amount", cVar.eA);
        jSONObject.put("reward_name", cVar.eB);
        jSONObject.put("gif_url", cVar.dR);
        if (w.b(cVar.fe)) {
            jSONObject.put("ad_tracking", new JSONObject(cVar.fe));
        }
        jSONObject.put("video_end_type", cVar.eP);
        jSONObject.put("endcard_url", cVar.I());
        jSONObject.put("playable_ads_without_video", cVar.fc);
        if (cVar != null && (cVar2 = cVar.fo) != null && w.b(cVar2.a())) {
            jSONObject.put("rv", new JSONObject(cVar.fo.a()));
        }
        jSONObject.put("md5_file", cVar.bK);
        jSONObject.put("c_toi", cVar.fa);
        jSONObject.put("c_ua", cVar.dO);
        jSONObject.put("imp_ua", cVar.dN);
        jSONObject.put("jm_pd", cVar.dw);
        jSONObject.put("ia_icon", cVar.dA);
        jSONObject.put("ia_rst", cVar.dB);
        jSONObject.put("ia_url", cVar.dC);
        jSONObject.put("ia_ori", cVar.dD);
        jSONObject.put("ad_type", cVar.dE);
        jSONObject.put("ia_ext1", cVar.dF);
        jSONObject.put("ia_ext2", cVar.dG);
        jSONObject.put("is_download_zip", cVar.dH);
        jSONObject.put("ia_cache", cVar.dI);
        jSONObject.put("oc_type", cVar.dK);
        jSONObject.put("oc_time", cVar.dL);
        jSONObject.put("t_list", cVar.dM);
        a aVar = cVar.dJ;
        if (aVar != null) {
            jSONObject.put("adchoice", new JSONObject(aVar.a()));
        }
        jSONObject.put("plct", cVar.dg);
        jSONObject.put("plctb", cVar.dh);
        jSONObject.put("omid", cVar.fr);
        jSONObject.put("creative_id", cVar.dk);
        jSONObject.put("cam_html", cVar.dj);
        String str = cVar.di;
        if (str == null) {
            str = cVar.cW;
        }
        jSONObject.put("cam_tpl_url", str);
        jSONObject.put("mraid", cVar.eM);
        jSONObject.put("mraid_src", cVar.eM);
        jSONObject.put("timestamp", cVar.bg());
        jSONObject.put("hb", cVar.eK);
        jSONObject.put("maitve", cVar.fk);
        jSONObject.put("maitve_src", cVar.fl);
        int i2 = cVar.dm;
        if (i2 <= 0) {
            i2 = 1;
        }
        jSONObject.put("vcn", i2);
        int i3 = cVar.dn;
        if (i3 != 1) {
            i3 = 0;
        }
        jSONObject.put("token_r", i3);
        jSONObject.put("encrypt_p", cVar.do);
        jSONObject.put("view_com_time", cVar.ds);
        jSONObject.put("rs_ignc_r", (Object) cVar.fu);
        jSONObject.put("vck_t", cVar.fv);
        jSONObject.put("vctn_t", cVar.fw);
        jSONObject.put("tp_offer", cVar.db);
        jSONObject.put("fac", cVar.dc);
        try {
            jSONObject.put("misk_spt", com.tkay.core.common.p.a().c());
            com.tkay.core.common.p.a();
            jSONObject.put("misk_spt_det", com.tkay.core.common.p.b());
        } catch (JSONException unused) {
        }
        jSONObject.put(g, cVar.fC);
        if (cVar == null) {
            return jSONObject;
        }
        jSONObject.put("ttc", cVar.aW());
        jSONObject.put("ttc_ct", cVar.aV());
        jSONObject.put("adv_id", cVar.aU());
        jSONObject.put("ttc_type", cVar.aT());
        jSONObject.put("ttc_ct2", cVar.aS());
        jSONObject.put("gh_id", cVar.aN());
        jSONObject.put("gh_path", com.tkay.expressad.foundation.h.j.a(cVar.aO()));
        jSONObject.put("bind_id", cVar.aP());
        jSONObject.put("apk_alt", cVar.aI());
        jSONObject.put("disableApkAlt", cVar.aH());
        if (cVar.aG() != null) {
            jSONObject.put("apk_info", cVar.aG().g());
        }
        jSONObject.put("mark", cVar.aQ());
        jSONObject.put("isPost", cVar.aR());
        jSONObject.put("nv_t2", cVar.dQ);
        jSONObject.put("ntbarpasbl", cVar.aK());
        jSONObject.put("ntbarpt", cVar.aJ());
        jSONObject.put("atat_type", cVar.aL());
        jSONObject.put("akdlui", cVar.aM());
        return jSONObject;
    }

    private static List<Map<Integer, String>> b(JSONArray jSONArray) {
        ArrayList arrayList = new ArrayList();
        if (jSONArray != null) {
            for (int i2 = 0; i2 < jSONArray.length(); i2++) {
                try {
                    String string = jSONArray.getString(i2);
                    if (!TextUtils.isEmpty(string)) {
                        JSONObject jSONObject = new JSONObject(string);
                        HashMap map = new HashMap();
                        int i3 = jSONObject.getInt("rate");
                        map.put(Integer.valueOf(i3), jSONObject.getString("url"));
                        arrayList.add(map);
                    }
                } catch (Throwable unused) {
                }
            }
        }
        return arrayList;
    }

    public final boolean am() {
        return this.eO;
    }

    public final void an() {
        this.eO = true;
    }

    public final int ao() {
        return this.eR;
    }

    private void ad(int i2) {
        this.eR = i2;
    }

    private String cl() {
        return this.eT;
    }

    private void af(String str) {
        this.eT = str;
    }

    public final int ap() {
        return this.eU;
    }

    public final void j(int i2) {
        this.eU = i2;
    }

    public final String aq() {
        return this.eV;
    }

    public final void r(String str) {
        this.eV = str;
        if (TextUtils.isEmpty(str)) {
            return;
        }
        this.eW = str;
        boolean zE = t.e(str);
        int iG = t.g(str);
        if (zE) {
            this.dp = true;
            v(iG);
        }
        this.fy = t.d(str);
    }

    public final String ar() {
        return this.eW;
    }

    private void ag(String str) {
        this.eW = str;
    }

    public final int as() {
        return this.eX;
    }

    public final void k(int i2) {
        this.eX = i2;
    }

    private String cm() {
        return this.eY;
    }

    public final void s(String str) {
        this.eY = str;
    }

    private void ae(int i2) {
        this.cV = i2;
    }

    public final boolean at() {
        return this.cY;
    }

    public final void au() {
        this.cY = true;
    }

    public final int av() {
        return this.eZ;
    }

    public final void l(int i2) {
        this.eZ = i2;
    }

    private int cn() {
        return this.fk;
    }

    private void af(int i2) {
        this.fk = i2;
    }

    private String co() {
        return this.fl;
    }

    private void ah(String str) {
        this.fl = str;
    }

    public static final class c implements Serializable {
        public static final String a = "video_template";
        public static final String b = "template_url";
        public static final String c = "orientation";
        public static final String d = "paused_url";
        public static final String e = "image";
        private static final int f = 1;
        private String g;
        private int h;
        private int i;
        private String j;
        private String k;
        private List<a> l;

        public static final class a implements Serializable {
            public String a;
            public List<String> b = new ArrayList();
        }

        private c(String str) {
            this.g = str;
        }

        public final String a() {
            return this.g;
        }

        private void b(String str) {
            this.g = str;
        }

        public final int b() {
            return this.h;
        }

        private void a(int i) {
            this.h = i;
        }

        public final int c() {
            return this.i;
        }

        private void b(int i) {
            this.i = i;
        }

        public final String d() {
            return this.j;
        }

        private void c(String str) {
            this.j = str;
        }

        public final String e() {
            return this.k;
        }

        public final void a(String str) {
            this.k = x.c(str);
        }

        public final List<a> f() {
            return this.l;
        }

        private void a(List<a> list) {
            this.l = list;
        }

        private static c d(String str) {
            try {
                if (w.b(str)) {
                    return a(new JSONObject(str));
                }
                return null;
            } catch (Throwable unused) {
                return null;
            }
        }

        public static c a(JSONObject jSONObject) {
            if (jSONObject == null) {
                return null;
            }
            try {
                if (!w.b(jSONObject.toString())) {
                    return null;
                }
                c cVar = new c(jSONObject.toString());
                cVar.h = jSONObject.optInt(a, 1);
                cVar.a(jSONObject.optString("template_url"));
                cVar.i = jSONObject.optInt("orientation");
                cVar.j = jSONObject.optString(d);
                JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(e);
                if (jSONObjectOptJSONObject != null) {
                    ArrayList arrayList = new ArrayList();
                    Iterator<String> itKeys = jSONObjectOptJSONObject.keys();
                    while (itKeys != null && itKeys.hasNext()) {
                        String next = itKeys.next();
                        List<String> listA = t.a(jSONObjectOptJSONObject.optJSONArray(next));
                        if (listA != null && listA.size() > 0) {
                            a aVar = new a();
                            aVar.a = next;
                            aVar.b.addAll(listA);
                            arrayList.add(aVar);
                        }
                    }
                    cVar.l = arrayList;
                }
                return cVar;
            } catch (Throwable unused) {
                return null;
            }
        }
    }

    public final boolean aw() {
        return this.fq;
    }

    public final void ax() {
        this.fq = true;
    }

    public static final class a implements Serializable {
        public static final String a = "ad_logo_link";
        public static final String b = "adchoice_link";
        public static final String c = "adchoice_icon";
        public static final String d = "adchoice_size";
        public static final String e = "platform_name";
        public static final String f = "platform_logo";
        public static final String g = "adv_name";
        public static final String h = "adv_logo";
        private String i = "";
        private String j = "";
        private String k = "";
        private String l = "";
        private String m = "";
        private String n = "";
        private String o = "";
        private String p = "";
        private int q = 0;
        private int r = 0;
        private String s = "";

        private int e() {
            return this.q;
        }

        private void a(int i) {
            this.q = i;
        }

        private int f() {
            return this.r;
        }

        private void b(int i) {
            this.r = i;
        }

        private void b(String str) {
            this.s = str;
        }

        public final String a() {
            return this.s;
        }

        private String g() {
            return this.i;
        }

        private void c(String str) {
            this.i = str;
        }

        public final String b() {
            return this.j;
        }

        private void d(String str) {
            this.j = str;
        }

        public final String c() {
            return this.k;
        }

        private void e(String str) {
            this.k = str;
        }

        public final String d() {
            return this.l;
        }

        private void f(String str) {
            this.l = str;
        }

        private String h() {
            return this.m;
        }

        private void g(String str) {
            this.m = str;
        }

        private String i() {
            return this.n;
        }

        private void h(String str) {
            this.n = str;
        }

        private String j() {
            return this.o;
        }

        private void i(String str) {
            this.o = str;
        }

        private String k() {
            return this.p;
        }

        private void j(String str) {
            this.p = str;
        }

        public static a a(String str) {
            try {
                if (TextUtils.isEmpty(str)) {
                    return null;
                }
                return a(new JSONObject(str));
            } catch (Exception e2) {
                if (com.tkay.expressad.b.a) {
                    e2.printStackTrace();
                }
                return null;
            } catch (Throwable th) {
                if (com.tkay.expressad.b.a) {
                    th.printStackTrace();
                }
                return null;
            }
        }

        private static a a(JSONObject jSONObject) {
            a aVar = null;
            try {
                a aVar2 = new a();
                try {
                    aVar2.k = jSONObject.optString("adchoice_icon");
                    aVar2.j = jSONObject.optString("adchoice_link");
                    String strOptString = jSONObject.optString("adchoice_size");
                    aVar2.l = strOptString;
                    aVar2.i = jSONObject.optString(a);
                    aVar2.p = jSONObject.optString(h);
                    aVar2.o = jSONObject.optString(g);
                    aVar2.n = jSONObject.optString("platform_logo");
                    aVar2.m = jSONObject.optString("platform_name");
                    aVar2.r = k(strOptString);
                    aVar2.q = l(strOptString);
                    aVar2.s = jSONObject.toString();
                    return aVar2;
                } catch (Exception e2) {
                    e = e2;
                    aVar = aVar2;
                    if (com.tkay.expressad.b.a) {
                        e.printStackTrace();
                    }
                    return aVar;
                } catch (Throwable th) {
                    th = th;
                    aVar = aVar2;
                    if (com.tkay.expressad.b.a) {
                        th.printStackTrace();
                    }
                    return aVar;
                }
            } catch (Exception e3) {
                e = e3;
            } catch (Throwable th2) {
                th = th2;
            }
        }

        private boolean l() {
            return (TextUtils.isEmpty(this.j) || TextUtils.isEmpty(this.l) || TextUtils.isEmpty(this.k)) ? false : true;
        }

        private static int k(String str) {
            String[] strArrSplit;
            if (TextUtils.isEmpty(str)) {
                return 0;
            }
            try {
                if (str.contains("x") && (strArrSplit = str.split("x")) != null && strArrSplit.length > 1) {
                    return Integer.parseInt(strArrSplit[1]);
                }
            } catch (NumberFormatException | Exception unused) {
            }
            return 0;
        }

        private static int l(String str) {
            String[] strArrSplit;
            if (TextUtils.isEmpty(str)) {
                return 0;
            }
            try {
                if (str.contains("x") && (strArrSplit = str.split("x")) != null && strArrSplit.length > 0) {
                    return Integer.parseInt(strArrSplit[0]);
                }
            } catch (NumberFormatException | Exception unused) {
            }
            return 0;
        }
    }

    private boolean f(long j2) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        return this.dg > 0 ? bg() + (this.dg * 1000) >= jCurrentTimeMillis : bg() + j2 >= jCurrentTimeMillis;
    }

    private String cp() {
        return this.fr;
    }

    private void ai(String str) {
        this.fr = str;
    }

    public final boolean ay() {
        return (TextUtils.isEmpty(this.fr) || TextUtils.isEmpty(com.tkay.expressad.b.w)) ? false : true;
    }

    public final int az() {
        return this.fs;
    }

    public final void m(int i2) {
        this.fs = i2;
    }

    private String cq() {
        return this.ft;
    }

    private void aj(String str) {
        this.ft = str;
    }

    public final boolean aA() {
        return super.b(this);
    }

    private long cr() {
        return this.da;
    }

    private void g(long j2) {
        this.da = j2;
    }

    public final ArrayList<Integer> aB() {
        return this.fu;
    }

    private void a(ArrayList<Integer> arrayList) {
        this.fu = arrayList;
    }

    private void ak(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        String[] strArrSplit = str.split(Constants.ACCEPT_TIME_SEPARATOR_SP);
        if (strArrSplit.length > 0) {
            ArrayList<Integer> arrayList = new ArrayList<>();
            for (String str2 : strArrSplit) {
                arrayList.add(Integer.valueOf(Integer.parseInt(str2)));
            }
            this.fu = arrayList;
        }
    }

    private int ct() {
        return this.fv;
    }

    private void ag(int i2) {
        if (i2 > 2 || i2 <= 0) {
            this.fv = 2;
        } else {
            this.fv = i2;
        }
    }

    public final int aC() {
        return this.fw;
    }

    private void ah(int i2) {
        if (i2 > 2 || i2 <= 0) {
            this.fw = 1;
        } else {
            this.fw = i2;
        }
    }

    private int cu() {
        return this.fx;
    }

    private void ai(int i2) {
        this.fx = i2;
    }

    private void g(boolean z2) {
        this.fy = z2;
    }

    public final boolean aD() {
        return this.fy;
    }

    private void h(boolean z2) {
        this.fz = z2;
    }

    private boolean cv() {
        return this.fz;
    }

    public final String aE() {
        return this.fA;
    }

    public final void t(String str) {
        this.fA = str;
    }

    public final int aF() {
        return this.fB;
    }

    public final void n(int i2) {
        this.fB = i2;
    }

    private int cw() {
        return this.fC;
    }

    private void aj(int i2) {
        this.fC = i2;
    }

    public final String ak() {
        if (!TextUtils.isEmpty(this.dU)) {
            try {
                URL url = new URL(this.dU);
                return url.getProtocol() + "://" + url.getHost();
            } catch (Exception e2) {
                e2.printStackTrace();
            }
        }
        return "";
    }

    public final List<String> al() {
        Exception e2;
        ArrayList arrayList;
        String str = this.eD;
        try {
        } catch (Exception e3) {
            e2 = e3;
            arrayList = null;
        }
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        JSONArray jSONArray = new JSONArray(str);
        arrayList = new ArrayList();
        for (int i2 = 0; i2 < jSONArray.length(); i2++) {
            try {
                arrayList.add(jSONArray.optString(i2));
            } catch (Exception e4) {
                e2 = e4;
                e2.printStackTrace();
            }
        }
        return arrayList;
        e2.printStackTrace();
        return arrayList;
    }

    public final boolean a(long j2, long j3) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (this.dg <= 0 ? bg() + j2 >= jCurrentTimeMillis : bg() + (this.dg * 1000) >= jCurrentTimeMillis) {
            return false;
        }
        long jCurrentTimeMillis2 = System.currentTimeMillis();
        return this.dh > 0 ? bg() + (this.dh * 1000) >= jCurrentTimeMillis2 : bg() + j3 >= jCurrentTimeMillis2;
    }

    private String cs() {
        ArrayList<Integer> arrayList = this.fu;
        if (arrayList == null || arrayList.size() <= 0) {
            return "";
        }
        StringBuilder sb = new StringBuilder();
        try {
            Iterator<Integer> it = this.fu.iterator();
            while (it.hasNext()) {
                sb.append(it.next());
                sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
            }
            if (sb.length() > 0) {
                sb.delete(sb.length() - 1, sb.length());
            }
            return !TextUtils.isEmpty(sb) ? sb.toString() : "";
        } catch (Throwable th) {
            th.getMessage();
            return "";
        }
    }
}
