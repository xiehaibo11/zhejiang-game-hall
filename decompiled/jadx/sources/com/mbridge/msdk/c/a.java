package com.mbridge.msdk.c;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.m;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.z;
import com.tkay.expressad.foundation.h.i;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: Setting.java */
/* JADX INFO: loaded from: classes2.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static int f3111a = 1500;
    private String A;
    private long B;
    private int C;
    private long D;
    private long E;
    private int F;
    private int G;
    private int H;
    private String I;
    private String J;
    private int K;
    private List<CampaignEx> L;
    private List<com.mbridge.msdk.foundation.entity.b> M;
    private int Q;
    private String aB;
    private String aQ;
    private JSONObject aV;
    private int aX;
    private long aZ;
    private LinkedList<String> af;
    private int al;
    private List<String> am;
    private int an;
    private int ao;
    private int ap;
    private int aq;
    private String ar;
    private String as;
    private List<com.mbridge.msdk.foundation.entity.a> bF;
    private String bG;
    private String bH;
    private ArrayList<Integer> bL;
    private HashMap<String, String> bM;
    private long ba;
    private int bb;
    private int bc;
    private long bd;
    private int bf;
    private Map<String, C0242a> bx;
    private b bz;
    private String c;
    private long d;
    private int e;
    private int g;
    private boolean h;
    private Map<String, String> i;
    private boolean j;
    private long k;
    private boolean n;
    private long o;
    private long p;
    private long q;
    private boolean r;
    private int s;
    private int t;
    private int u;
    private long v;
    private int w;
    private int x;
    private int y;
    private int z;
    private int b = 0;
    private long f = 86400;
    private String l = com.mbridge.msdk.foundation.same.net.f.d.a().c;
    private String m = com.mbridge.msdk.foundation.same.net.f.d.a().d;
    private boolean N = false;
    private int O = 3;
    private boolean P = true;
    private JSONArray R = new JSONArray();
    private JSONArray S = new JSONArray();
    private int T = 0;
    private int U = 0;
    private int V = 0;
    private int W = 3;
    private int X = 600;
    private int Y = 10;
    private int Z = 8000;
    private int aa = 8000;
    private int ab = 1300;
    private int ac = f3111a;
    private int ad = 0;
    private boolean ae = false;
    private int ag = 0;
    private int ah = 3600;
    private int ai = 10;
    private int aj = 120;
    private String ak = "";
    private int at = 1;
    private int au = 1;
    private int av = 1;
    private int aw = 0;
    private int ax = 1;
    private String ay = "";
    private int az = 0;
    private int aA = 2;
    private int aC = 86400;
    private String aD = "LdxThdi1WBK\\/WgfPhbxQYkeXHBPwHZKAJ7eXHM==";
    private String aE = "LdxThdi1WBK\\/WgfPhbxQYkeXHBPwHZKsYFh=";
    private int aF = 1;
    private int aG = 30;
    private int aH = 5;
    private int aI = 0;
    private int aJ = 0;
    private int aK = 9377;
    private int aL = 0;
    private int aM = 0;
    private int aN = 0;
    private int aO = 2;
    private int aP = 10;
    private int aR = 1;
    private int aS = 24;
    private boolean aT = false;
    private String aU = "";
    private List<Integer> aW = new ArrayList();
    private int aY = 1;
    private int be = 3;
    private String bg = "";
    private String bh = "";
    private String bi = "";
    private String bj = "";
    private String bk = "";
    private int bl = 0;
    private int bm = 21600;
    private int bn = 2;
    private int bo = 0;
    private int bp = 0;
    private int bq = 604800;
    private int br = 0;
    private String bs = "";
    private String bt = "";
    private String bu = "";
    private String bv = "";
    private String bw = "";
    private int by = 0;
    private int bA = 0;
    private String bB = "";
    private String bC = "";
    private int bD = 2;
    private int bE = 7200;
    private int bI = 0;
    private boolean bJ = false;
    private int bK = 120;
    private int bN = 0;
    private int bO = 0;
    private int bP = 0;
    private int bQ = 0;
    private int bR = 0;
    private int bS = 1;
    private String bT = "";

    public final int a() {
        return this.ab;
    }

    public final int b() {
        return this.Z;
    }

    public final int c() {
        return this.aa;
    }

    public final void a(boolean z) {
        this.ae = z;
    }

    public final boolean d() {
        return this.ae;
    }

    public final int e() {
        return this.U;
    }

    public final int f() {
        return this.V;
    }

    public final int g() {
        return this.W;
    }

    public final int h() {
        return this.X;
    }

    public final int i() {
        return this.Y;
    }

    public final int j() {
        return this.T;
    }

    public final JSONArray k() {
        return this.R;
    }

    public final JSONArray l() {
        return this.S;
    }

    public final void a(int i) {
        this.Q = i;
    }

    public final int m() {
        return this.Q;
    }

    public final List<com.mbridge.msdk.foundation.entity.b> n() {
        return this.M;
    }

    public final String o() {
        return this.ak;
    }

    public final void b(int i) {
        this.ai = i;
    }

    public final int p() {
        return this.aj;
    }

    public final void c(int i) {
        this.aj = i;
    }

    public final int q() {
        return this.b;
    }

    public final void d(int i) {
        this.b = i;
    }

    public final void b(boolean z) {
        this.aT = z;
    }

    public final boolean r() {
        return this.aT;
    }

    public final JSONObject s() {
        return this.aV;
    }

    public final void e(int i) {
        this.aS = i;
    }

    public final int t() {
        return this.aS;
    }

    public final int u() {
        return this.aR;
    }

    public final void f(int i) {
        this.aR = i;
    }

    public final String v() {
        return this.aQ;
    }

    public final void a(String str) {
        this.aQ = str;
    }

    public final void g(int i) {
        if (i > 0) {
            this.aP = i;
        }
    }

    public final int w() {
        return this.aP;
    }

    public final void h(int i) {
        this.aL = i;
    }

    public final int x() {
        return this.aL;
    }

    public final void i(int i) {
        this.aM = i;
    }

    public final int y() {
        return this.aM;
    }

    public final void j(int i) {
        this.aN = i;
    }

    public final int z() {
        return this.aN;
    }

    public final void k(int i) {
        this.aO = i;
    }

    public final int A() {
        return this.aO;
    }

    public final boolean l(int i) {
        return this.aW.contains(Integer.valueOf(i));
    }

    public final int B() {
        return this.aC;
    }

    public final void m(int i) {
        this.aC = i;
    }

    public final int C() {
        return this.aA;
    }

    public final void n(int i) {
        this.aA = i;
    }

    public final String D() {
        return this.aB;
    }

    public final int E() {
        return this.at;
    }

    public final void o(int i) {
        this.at = i;
    }

    public final int F() {
        return this.au;
    }

    public final void p(int i) {
        this.au = i;
    }

    public final int G() {
        return this.av;
    }

    public final void q(int i) {
        this.av = i;
    }

    public final int H() {
        return this.aw;
    }

    public final void r(int i) {
        this.aw = i;
    }

    public final int I() {
        return this.ax;
    }

    public final void s(int i) {
        this.ax = i;
    }

    public final void b(String str) {
        this.ay = str;
    }

    public final int J() {
        return this.az;
    }

    public final void t(int i) {
        this.az = i;
    }

    public final int K() {
        return this.K;
    }

    public final void u(int i) {
        this.K = i;
    }

    public final String L() {
        return this.J;
    }

    public final void c(String str) {
        this.J = str;
    }

    public final void v(int i) {
        this.aY = i;
    }

    public final void w(int i) {
        this.aX = i;
    }

    public final void x(int i) {
        this.al = i;
    }

    public final void y(int i) {
        this.an = i;
    }

    public final void z(int i) {
        this.ao = i;
    }

    public final void A(int i) {
        this.ap = i;
    }

    public final void B(int i) {
        this.aq = i;
    }

    public final void d(String str) {
        this.ar = str;
    }

    public final int M() {
        return this.F;
    }

    public final void C(int i) {
        this.F = i;
    }

    public final int N() {
        return this.G;
    }

    public final void D(int i) {
        this.G = i;
    }

    public final List<CampaignEx> O() {
        return this.L;
    }

    public final int P() {
        return this.H;
    }

    public final void E(int i) {
        this.H = i;
    }

    public final String Q() {
        return this.I;
    }

    public final void e(String str) {
        this.I = str;
    }

    public final int R() {
        return this.C;
    }

    public final void F(int i) {
        this.C = i;
    }

    public final void a(long j) {
        this.D = j;
    }

    public final void G(int i) {
        this.E = i;
    }

    public final long S() {
        return this.B * 1000;
    }

    public final int T() {
        return this.u;
    }

    public final int U() {
        return this.z;
    }

    public final int V() {
        return this.w;
    }

    public final void H(int i) {
        this.w = i;
    }

    public final void I(int i) {
        this.x = i;
    }

    public final void J(int i) {
        this.y = i;
    }

    public final long W() {
        if (this.v <= 0) {
            this.v = com.tkay.expressad.d.a.b.Q;
        }
        return this.v;
    }

    public final void b(long j) {
        this.v = j;
    }

    public final void K(int i) {
        this.be = i;
    }

    public final int X() {
        return this.bf;
    }

    public final void L(int i) {
        this.bf = i;
    }

    public final long Y() {
        return this.bd;
    }

    public final void c(long j) {
        this.bd = j;
    }

    public final int Z() {
        return this.bb;
    }

    public final void M(int i) {
        this.bb = i;
    }

    public final int aa() {
        return this.bc;
    }

    public final void N(int i) {
        this.bc = i;
    }

    public final long ab() {
        return this.aZ * 1000;
    }

    public final void d(long j) {
        this.aZ = j;
    }

    public final long ac() {
        return this.ba * 1000;
    }

    public final void e(long j) {
        this.ba = j;
    }

    public final boolean ad() {
        return this.r;
    }

    public final void c(boolean z) {
        this.r = z;
    }

    public final long ae() {
        return this.q;
    }

    public final boolean af() {
        return this.n;
    }

    public final void d(boolean z) {
        this.n = z;
    }

    public final long ag() {
        return this.o;
    }

    public final void f(long j) {
        this.o = j;
    }

    public final void g(long j) {
        this.p = j;
    }

    public final String toString() {
        return "cc=" + this.c + " upal=" + this.d + " cfc=" + this.e + " getpf=" + this.f + " uplc=" + this.g + " rurl=" + this.n;
    }

    public final String ah() {
        return this.c;
    }

    public final void h(long j) {
        this.d = j;
    }

    public final int ai() {
        return this.e;
    }

    public final void O(int i) {
        this.e = i;
    }

    public final long aj() {
        return this.f;
    }

    public final void P(int i) {
        this.g = i;
    }

    public final String ak() {
        return this.as;
    }

    public final String al() {
        return this.l;
    }

    public final String am() {
        return this.m;
    }

    /* JADX WARN: Removed duplicated region for block: B:327:0x088b A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:329:0x082c A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static com.mbridge.msdk.c.a f(java.lang.String r16) {
        /*
            Method dump skipped, instruction units count: 2336
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.c.a.f(java.lang.String):com.mbridge.msdk.c.a");
    }

    public final long an() {
        return this.k;
    }

    public final void e(boolean z) {
        this.h = z;
    }

    /* JADX WARN: Removed duplicated region for block: B:29:0x0091  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static java.lang.String a(android.content.Context r7, java.lang.String r8) {
        /*
            java.lang.String r0 = "{android_id_md5_upper}"
            java.lang.String r1 = "{android_id}"
            java.lang.String r2 = ""
            com.mbridge.msdk.c.b r3 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L92
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L92
            java.lang.String r4 = r4.k()     // Catch: java.lang.Throwable -> L92
            com.mbridge.msdk.c.a r3 = r3.b(r4)     // Catch: java.lang.Throwable -> L92
            if (r3 == 0) goto L92
            java.util.Map<java.lang.String, java.lang.String> r4 = r3.i     // Catch: java.lang.Throwable -> L92
            if (r4 != 0) goto L1e
            goto L92
        L1e:
            android.net.Uri r8 = android.net.Uri.parse(r8)     // Catch: java.lang.Throwable -> L92
            java.lang.String r8 = r8.getHost()     // Catch: java.lang.Throwable -> L92
            java.util.Map<java.lang.String, java.lang.String> r4 = r3.i     // Catch: java.lang.Throwable -> L92
            java.util.Set r4 = r4.entrySet()     // Catch: java.lang.Throwable -> L92
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> L92
        L30:
            boolean r5 = r4.hasNext()     // Catch: java.lang.Throwable -> L92
            if (r5 == 0) goto L92
            java.lang.Object r5 = r4.next()     // Catch: java.lang.Throwable -> L92
            java.util.Map$Entry r5 = (java.util.Map.Entry) r5     // Catch: java.lang.Throwable -> L92
            java.lang.Object r5 = r5.getKey()     // Catch: java.lang.Throwable -> L92
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L92
            boolean r6 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L92
            if (r6 != 0) goto L30
            boolean r6 = r8.contains(r5)     // Catch: java.lang.Throwable -> L92
            if (r6 == 0) goto L30
            java.util.Map<java.lang.String, java.lang.String> r8 = r3.i     // Catch: java.lang.Throwable -> L92
            java.lang.Object r8 = r8.get(r5)     // Catch: java.lang.Throwable -> L92
            java.lang.String r8 = (java.lang.String) r8     // Catch: java.lang.Throwable -> L92
            boolean r3 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L92
            if (r3 == 0) goto L5d
            return r2
        L5d:
            java.lang.String r3 = "{gaid}"
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.E()     // Catch: java.lang.Throwable -> L92
            java.lang.String r8 = r8.replace(r3, r4)     // Catch: java.lang.Throwable -> L92
            boolean r3 = r8.contains(r1)     // Catch: java.lang.Throwable -> L92
            if (r3 == 0) goto L7c
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.g(r7)     // Catch: java.lang.Throwable -> L92
            if (r0 == 0) goto L91
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.g(r7)     // Catch: java.lang.Throwable -> L92
            java.lang.String r2 = r8.replace(r1, r7)     // Catch: java.lang.Throwable -> L92
            goto L92
        L7c:
            boolean r1 = r8.contains(r0)     // Catch: java.lang.Throwable -> L92
            if (r1 == 0) goto L91
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.v.h(r7)     // Catch: java.lang.Throwable -> L92
            if (r1 == 0) goto L91
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.h(r7)     // Catch: java.lang.Throwable -> L92
            java.lang.String r2 = r8.replace(r0, r7)     // Catch: java.lang.Throwable -> L92
            goto L92
        L91:
            r2 = r8
        L92:
            return r2
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.c.a.a(android.content.Context, java.lang.String):java.lang.String");
    }

    public final void f(boolean z) {
        this.j = z;
    }

    public final int ao() {
        return this.s;
    }

    public final int ap() {
        return this.t;
    }

    public static boolean aq() {
        try {
            a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
            if (aVarB != null) {
                return aVarB.h;
            }
            return true;
        } catch (Exception e) {
            e.printStackTrace();
            return true;
        }
    }

    public final String ar() {
        return this.bg;
    }

    public final String as() {
        return this.bh;
    }

    public final String at() {
        return this.bi;
    }

    public final String au() {
        return this.bj;
    }

    public final String av() {
        return this.bk;
    }

    public final void aw() {
        String language = Locale.getDefault().getLanguage();
        if (!((TextUtils.isEmpty(this.bg) || TextUtils.isEmpty(this.bh) || TextUtils.isEmpty(this.bi) || TextUtils.isEmpty(this.bj)) ? false : true)) {
            if (!TextUtils.isEmpty(language) && language.equals(com.tkay.expressad.video.dynview.a.a.Q)) {
                this.bg = "确认关闭？";
                this.bh = "关闭后您将不会获得任何奖励噢~ ";
                this.bi = "确认关闭";
                this.bj = "继续观看";
            } else {
                this.bg = "Confirm to close? ";
                this.bh = "You will not be rewarded after closing the window";
                this.bi = "Close it";
                this.bj = "Continue";
            }
        }
        if ((TextUtils.isEmpty(this.bg) || TextUtils.isEmpty(this.bh) || TextUtils.isEmpty(this.bi) || TextUtils.isEmpty(this.bk)) ? false : true) {
            return;
        }
        if (!TextUtils.isEmpty(language) && language.equals(com.tkay.expressad.video.dynview.a.a.Q)) {
            this.bg = "确认关闭？";
            this.bh = "关闭后您将不会获得任何奖励噢~ ";
            this.bi = "确认关闭";
            this.bk = "继续试玩";
            return;
        }
        this.bg = "Confirm to close? ";
        this.bh = "You will not be rewarded after closing the window";
        this.bi = "Close it";
        this.bk = "Continue";
    }

    public final String ax() {
        return this.bs;
    }

    public final String ay() {
        return this.bt;
    }

    public final String az() {
        return this.bu;
    }

    public final Map<String, C0242a> aA() {
        return this.bx;
    }

    private static Map<String, C0242a> i(String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return null;
            }
            HashMap map = new HashMap();
            JSONObject jSONObject = new JSONObject(str);
            Iterator<String> itKeys = jSONObject.keys();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                C0242a c0242a = new C0242a();
                JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(next);
                if (jSONObjectOptJSONObject != null) {
                    c0242a.a(jSONObjectOptJSONObject);
                }
                map.put(next, c0242a);
            }
            return map;
        } catch (JSONException e) {
            if (MBridgeConstans.DEBUG) {
                e.printStackTrace();
            }
            return null;
        } catch (Exception e2) {
            if (MBridgeConstans.DEBUG) {
                e2.printStackTrace();
            }
            return null;
        }
    }

    public final int aB() {
        return this.aG;
    }

    public final int aC() {
        return this.aH;
    }

    public final int aD() {
        return this.aI;
    }

    public final int aE() {
        return this.aJ;
    }

    public final boolean aF() {
        return this.N;
    }

    public final int aG() {
        return this.O;
    }

    public final boolean aH() {
        return this.P;
    }

    public final int aI() {
        return this.by;
    }

    public final b aJ() {
        return this.bz;
    }

    public final int aK() {
        return this.ad;
    }

    public final void Q(int i) {
        this.ad = i;
    }

    /* JADX INFO: compiled from: Setting.java */
    public static class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private String f3113a;
        private String b;
        private String c;
        private JSONArray d;

        public static b a(JSONObject jSONObject) {
            if (jSONObject == null) {
                jSONObject = new JSONObject();
            }
            b bVar = new b();
            Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
            bVar.f3113a = jSONObject.optString("title", contextJ.getString(s.a(contextJ, "mbridge_cm_feedback_dialog_title", i.g)));
            bVar.b = jSONObject.optString(com.tkay.expressad.d.a.b.dO, contextJ.getString(s.a(contextJ, "mbridge_cm_feedback_dialog_close_close", i.g)));
            bVar.c = jSONObject.optString(com.tkay.expressad.d.a.b.dP, contextJ.getString(s.a(contextJ, "mbridge_cm_feedback_dialog_close_submit", i.g)));
            JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("content");
            bVar.d = jSONArrayOptJSONArray;
            if (jSONArrayOptJSONArray == null) {
                JSONArray jSONArray = new JSONArray();
                bVar.d = jSONArray;
                jSONArray.put(contextJ.getString(s.a(contextJ, "mbridge_cm_feedback_dialog_content_stuck", i.g)));
                bVar.d.put(contextJ.getString(s.a(contextJ, "mbridge_cm_feedback_dialog_content_cnr", i.g)));
                bVar.d.put(contextJ.getString(s.a(contextJ, "mbridge_cm_feedback_dialog_content_balck_screen", i.g)));
                bVar.d.put(contextJ.getString(s.a(contextJ, "mbridge_cm_feedback_dialog_content_other", i.g)));
            }
            return bVar;
        }

        public final String a() {
            return this.f3113a;
        }

        public final String b() {
            return this.b;
        }

        public final String c() {
            return this.c;
        }

        public final JSONArray d() {
            return this.d;
        }
    }

    /* JADX INFO: renamed from: com.mbridge.msdk.c.a$a, reason: collision with other inner class name */
    /* JADX INFO: compiled from: Setting.java */
    public static class C0242a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private List<String> f3112a;
        private List<String> b;
        private List<String> c;
        private List<String> d;

        public final List<String> a() {
            return this.f3112a;
        }

        public final List<String> b() {
            return this.b;
        }

        public final List<String> c() {
            return this.c;
        }

        public final List<String> d() {
            return this.d;
        }

        public final void a(JSONObject jSONObject) {
            try {
                JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("x");
                if (jSONArrayOptJSONArray != null) {
                    this.f3112a = m.a(jSONArrayOptJSONArray);
                }
                JSONArray jSONArrayOptJSONArray2 = jSONObject.optJSONArray("y");
                if (jSONArrayOptJSONArray2 != null) {
                    this.b = m.a(jSONArrayOptJSONArray2);
                }
                JSONArray jSONArrayOptJSONArray3 = jSONObject.optJSONArray("width");
                if (jSONArrayOptJSONArray3 != null) {
                    this.c = m.a(jSONArrayOptJSONArray3);
                }
                JSONArray jSONArrayOptJSONArray4 = jSONObject.optJSONArray("height");
                if (jSONArrayOptJSONArray4 != null) {
                    this.d = m.a(jSONArrayOptJSONArray4);
                }
            } catch (Exception e) {
                if (MBridgeConstans.DEBUG) {
                    e.printStackTrace();
                }
            }
        }
    }

    public final String aL() {
        return this.bC;
    }

    public final void g(String str) {
        this.bC = str;
    }

    public final String aM() {
        return this.bB;
    }

    public final void h(String str) {
        this.bB = str;
    }

    public final int aN() {
        return this.bD;
    }

    public final int aO() {
        return this.bE;
    }

    public final List<com.mbridge.msdk.foundation.entity.a> aP() {
        return this.bF;
    }

    public final String aQ() {
        return this.bG;
    }

    public final String aR() {
        return this.bH;
    }

    public final int aS() {
        return this.bI;
    }

    public final void R(int i) {
        this.bI = i;
    }

    public final boolean aT() {
        return this.bJ;
    }

    public final void g(boolean z) {
        this.bJ = z;
    }

    public final int aU() {
        return this.bK;
    }

    public final void S(int i) {
        this.bK = i;
    }

    public final ArrayList<Integer> aV() {
        return this.bL;
    }

    public final HashMap<String, String> aW() {
        return this.bM;
    }

    public final int aX() {
        return this.bN;
    }

    public final int aY() {
        return this.bO;
    }

    public final void T(int i) {
        this.bO = i;
    }

    public final int aZ() {
        return this.bP;
    }

    public final void U(int i) {
        this.bP = i;
    }

    public final int ba() {
        return this.bQ;
    }

    public final void V(int i) {
        this.bQ = i;
    }

    public final int bb() {
        return this.bS;
    }

    public final void W(int i) {
        this.bS = i;
    }

    public final String bc() {
        return this.bT;
    }

    public final String bd() {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put(com.tkay.expressad.d.a.b.h, this.c);
            jSONObject.put(com.tkay.expressad.d.a.b.l, this.d);
            jSONObject.put(com.tkay.expressad.d.a.b.m, this.e);
            jSONObject.put(com.tkay.expressad.d.a.b.p, this.g);
            jSONObject.put(com.tkay.expressad.d.a.b.w, this.h);
            jSONObject.put(com.tkay.expressad.d.a.b.o, this.j);
            jSONObject.put("plct", this.o);
            jSONObject.put(com.tkay.expressad.d.a.b.B, this.p);
            jSONObject.put(com.tkay.expressad.d.a.b.C, this.n);
            jSONObject.put(com.tkay.expressad.d.a.b.G, this.r);
            jSONObject.put("plctb", this.v);
            jSONObject.put(com.tkay.expressad.d.a.b.ab, this.aZ);
            jSONObject.put(com.tkay.expressad.d.a.b.ac, this.ba);
            jSONObject.put(com.tkay.expressad.d.a.b.af, this.x);
            jSONObject.put(com.tkay.expressad.d.a.b.ag, this.y);
            jSONObject.put(com.tkay.expressad.d.a.b.i, this.I);
            jSONObject.put(com.tkay.expressad.d.a.b.j, this.J);
            jSONObject.put(com.tkay.expressad.d.a.b.k, this.K);
            jSONObject.put(com.tkay.expressad.d.a.b.ai, this.bd);
            jSONObject.put(com.tkay.expressad.d.a.b.aa, this.w);
            jSONObject.put(com.tkay.expressad.d.a.b.aG, this.E);
            jSONObject.put(com.tkay.expressad.d.a.b.aE, this.C);
            jSONObject.put(com.tkay.expressad.d.a.b.aF, this.D);
            jSONObject.put(com.tkay.expressad.d.a.b.ae, this.bc);
            jSONObject.put(com.tkay.expressad.d.a.b.bn, this.be);
            jSONObject.put(com.tkay.expressad.d.a.b.bv, this.aY);
            jSONObject.put("iex", this.H);
            jSONObject.put(com.tkay.expressad.d.a.b.ao, this.F);
            jSONObject.put(com.tkay.expressad.d.a.b.ap, this.G);
            jSONObject.put(com.tkay.expressad.d.a.b.at, this.bf);
            jSONObject.put(com.tkay.expressad.d.a.b.al, this.aX);
            jSONObject.put("pf", this.al);
            jSONObject.put(com.tkay.expressad.d.a.b.aA, this.an);
            jSONObject.put("pid", this.ar);
            jSONObject.put(com.tkay.expressad.d.a.b.ax, this.ao);
            jSONObject.put(com.tkay.expressad.d.a.b.ay, this.ap);
            jSONObject.put("delete", this.aq);
            jSONObject.put(com.tkay.expressad.d.a.b.ad, this.bb);
            jSONObject.put(com.tkay.expressad.d.a.b.bE, this.au);
            jSONObject.put(com.tkay.expressad.d.a.b.bF, this.at);
            jSONObject.put(com.tkay.expressad.d.a.b.bG, this.av);
            jSONObject.put(com.tkay.expressad.d.a.b.bH, this.aw);
            jSONObject.put(com.tkay.expressad.d.a.b.bI, this.ax);
            jSONObject.put(com.tkay.expressad.d.a.b.bK, this.az);
            jSONObject.put(com.tkay.expressad.d.a.b.bJ, this.ay);
            jSONObject.put(com.tkay.expressad.d.a.b.bV, this.aA);
            jSONObject.put(com.tkay.expressad.d.a.b.bY, this.aC);
            jSONObject.put(com.tkay.expressad.d.a.b.cO, this.b);
            jSONObject.put(com.tkay.expressad.d.a.b.cT, this.bB);
            jSONObject.put(com.tkay.expressad.d.a.b.di, this.aj);
            jSONObject.put(com.tkay.expressad.d.a.b.dg, this.ai);
            jSONObject.put(com.tkay.expressad.d.a.b.dw, this.bJ);
            jSONObject.put(com.tkay.expressad.d.a.b.dt, this.bI);
            jSONObject.put(com.tkay.expressad.d.a.b.dx, this.bK);
            jSONObject.put("isDefault", this.bO);
            jSONObject.put(com.tkay.expressad.d.a.b.ei, this.bS);
            jSONObject.put("vtag", this.bT);
            return jSONObject.toString();
        } catch (Throwable th) {
            z.d("Setting", th.getMessage());
            return null;
        }
    }
}
