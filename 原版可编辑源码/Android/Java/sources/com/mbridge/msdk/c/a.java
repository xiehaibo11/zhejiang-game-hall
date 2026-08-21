package com.mbridge.msdk.c;

import android.content.Context;
import android.content.SharedPreferences;
import android.net.Uri;
import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.b.e;
import com.mbridge.msdk.foundation.tools.FastKV;
import com.mbridge.msdk.foundation.tools.ai;
import com.mbridge.msdk.foundation.tools.m;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.t;
import com.mbridge.msdk.foundation.tools.z;
import com.tkay.expressad.foundation.h.i;
import com.tkay.expressad.foundation.h.v;
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

public final class a {
    public static int a = 1500;
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
    private Map<String, a> bx;
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
    private int ac = a;
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
    */
    public static a f(String str) {
        Exception exc;
        a aVar;
        ArrayList arrayList;
        boolean z;
        FastKV fastKVBuild;
        ArrayList arrayList2;
        CampaignEx settingCampaign;
        try {
            if (TextUtils.isEmpty(str)) {
                return null;
            }
            JSONObject jSONObject = new JSONObject(str);
            a aVar2 = new a();
            try {
                aVar2.aV = jSONObject;
                aVar2.c = jSONObject.optString(com.tkay.expressad.d.a.b.h);
                aVar2.I = jSONObject.optString(com.tkay.expressad.d.a.b.i, "正在下载中，请去通知栏查看下载进度");
                aVar2.J = jSONObject.optString(com.tkay.expressad.d.a.b.j, "mbridge");
                aVar2.d = jSONObject.optLong(com.tkay.expressad.d.a.b.l);
                aVar2.e = jSONObject.optInt(com.tkay.expressad.d.a.b.m);
                aVar2.f = jSONObject.optLong("getpf");
                aVar2.g = jSONObject.optInt(com.tkay.expressad.d.a.b.p);
                aVar2.h = jSONObject.optBoolean(com.tkay.expressad.d.a.b.w);
                aVar2.k = jSONObject.optLong("current_time");
                aVar2.j = jSONObject.optBoolean(com.tkay.expressad.d.a.b.o);
                aVar2.p = jSONObject.optLong(com.tkay.expressad.d.a.b.B);
                aVar2.o = jSONObject.optLong("plct") == 0 ? com.tkay.expressad.d.a.b.P : jSONObject.optLong("plct");
                aVar2.n = jSONObject.optBoolean(com.tkay.expressad.d.a.b.C);
                aVar2.q = jSONObject.optLong(com.tkay.expressad.d.a.b.F);
                aVar2.r = jSONObject.optBoolean(com.tkay.expressad.d.a.b.G);
                aVar2.s = jSONObject.optInt(com.tkay.expressad.d.a.b.X);
                aVar2.t = jSONObject.optInt(com.tkay.expressad.d.a.b.Y);
                aVar2.K = jSONObject.optInt(com.tkay.expressad.d.a.b.k);
                aVar2.u = jSONObject.optInt(com.tkay.expressad.d.a.b.Z, 1800);
                aVar2.w = jSONObject.optInt(com.tkay.expressad.d.a.b.aa);
                aVar2.v = jSONObject.optLong("plctb") == 0 ? com.tkay.expressad.d.a.b.Q : jSONObject.optLong("plctb");
                aVar2.bb = jSONObject.optInt(com.tkay.expressad.d.a.b.ad);
                aVar2.bc = jSONObject.optInt(com.tkay.expressad.d.a.b.ae);
                aVar2.w = jSONObject.optInt(com.tkay.expressad.d.a.b.aa, 100);
                aVar2.x = jSONObject.optInt(com.tkay.expressad.d.a.b.af, 2);
                aVar2.y = jSONObject.optInt(com.tkay.expressad.d.a.b.ag, 2);
                aVar2.z = jSONObject.optInt(com.tkay.expressad.d.a.b.ah, 1);
                aVar2.bd = jSONObject.optLong(com.tkay.expressad.d.a.b.ai, com.tkay.expressad.d.a.b.aC);
                aVar2.A = jSONObject.optString(com.tkay.expressad.d.a.b.aj);
                aVar2.B = jSONObject.optLong(com.tkay.expressad.d.a.b.ak, com.tkay.expressad.d.a.b.aD);
                aVar2.C = jSONObject.optInt(com.tkay.expressad.d.a.b.aE, 1);
                aVar2.D = jSONObject.optInt(com.tkay.expressad.d.a.b.aF, 604800);
                aVar2.E = jSONObject.optInt(com.tkay.expressad.d.a.b.aG, com.tkay.expressad.d.a.b.aK);
                aVar2.be = jSONObject.optInt(com.tkay.expressad.d.a.b.bn, 3);
                aVar2.aY = jSONObject.optInt(com.tkay.expressad.d.a.b.bv, 1);
                aVar2.as = jSONObject.optString(com.tkay.expressad.d.a.b.aH, "");
                aVar2.aX = jSONObject.optInt(com.tkay.expressad.d.a.b.al, 1);
                aVar2.au = jSONObject.optInt(com.tkay.expressad.d.a.b.bE, 1);
                aVar2.at = jSONObject.optInt(com.tkay.expressad.d.a.b.bF, 1);
                aVar2.av = jSONObject.optInt(com.tkay.expressad.d.a.b.bG, 1);
                aVar2.aw = jSONObject.optInt(com.tkay.expressad.d.a.b.bH, 0);
                aVar2.ax = jSONObject.optInt(com.tkay.expressad.d.a.b.bI, 1);
                aVar2.az = jSONObject.optInt(com.tkay.expressad.d.a.b.bK, -1);
                aVar2.ay = jSONObject.optString(com.tkay.expressad.d.a.b.bJ, com.mbridge.msdk.c.a.b.a);
                aVar2.aA = jSONObject.optInt(com.tkay.expressad.d.a.b.bV, 2);
                aVar2.aC = jSONObject.optInt(com.tkay.expressad.d.a.b.bY, 86400);
                aVar2.aB = jSONObject.optString(com.tkay.expressad.d.a.b.bW);
                aVar2.aE = jSONObject.optString(com.tkay.expressad.d.a.b.cG);
                aVar2.aD = jSONObject.optString(com.tkay.expressad.d.a.b.cF);
                aVar2.aF = jSONObject.optInt(com.tkay.expressad.d.a.b.cN);
                aVar2.V = jSONObject.optInt(com.tkay.expressad.d.a.b.ee, 0);
                aVar2.U = jSONObject.optInt(com.tkay.expressad.d.a.b.ed, 0);
                aVar2.W = jSONObject.optInt(com.tkay.expressad.d.a.b.ef, 3);
                aVar2.X = jSONObject.optInt(com.tkay.expressad.d.a.b.eg, 600);
                aVar2.Y = jSONObject.optInt(com.tkay.expressad.d.a.b.eh, 10);
                aVar2.ah = jSONObject.optInt(com.tkay.expressad.d.a.b.ci, 3600);
                aVar2.ag = jSONObject.optInt(com.tkay.expressad.d.a.b.ch, 0);
                try {
                    JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray(com.tkay.expressad.d.a.b.cg);
                    if (jSONArrayOptJSONArray != null && jSONArrayOptJSONArray.length() > 0) {
                        LinkedList<String> linkedList = new LinkedList<>();
                        for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                            linkedList.add(jSONArrayOptJSONArray.optString(i));
                        }
                        aVar2.af = linkedList;
                    }
                } catch (Throwable th) {
                    th.printStackTrace();
                }
                long jOptLong = jSONObject.optLong(com.tkay.expressad.d.a.b.ab);
                if (jOptLong == 0) {
                    aVar2.aZ = 20L;
                } else {
                    aVar2.aZ = jOptLong;
                }
                long jOptLong2 = jSONObject.optLong(com.tkay.expressad.d.a.b.ac);
                if (jOptLong2 == 0) {
                    aVar2.ba = 10L;
                } else {
                    aVar2.ba = jOptLong2;
                    JSONArray jSONArrayOptJSONArray2 = jSONObject.optJSONArray(com.tkay.expressad.d.a.b.v);
                    if (jSONArrayOptJSONArray2 != null && jSONArrayOptJSONArray2.length() > 0) {
                        HashMap map = new HashMap();
                        for (int i2 = 0; i2 < jSONArrayOptJSONArray2.length(); i2++) {
                            JSONObject jSONObjectOptJSONObject = jSONArrayOptJSONArray2.optJSONObject(i2);
                            map.put(jSONObjectOptJSONObject.optString("domain"), jSONObjectOptJSONObject.optString("format"));
                        }
                        aVar2.i = map;
                    }
                }
                aVar2.F = jSONObject.optInt(com.tkay.expressad.d.a.b.ao, 3);
                aVar2.G = jSONObject.optInt(com.tkay.expressad.d.a.b.ap, 86400);
                aVar2.H = jSONObject.optInt("iex", 1);
                JSONArray jSONArrayOptJSONArray3 = jSONObject.optJSONArray(com.tkay.expressad.d.a.b.ar);
                if (jSONArrayOptJSONArray3 == null || jSONArrayOptJSONArray3.length() <= 0) {
                    arrayList = null;
                } else {
                    arrayList = new ArrayList();
                    for (int i3 = 0; i3 < jSONArrayOptJSONArray3.length(); i3++) {
                        String strOptString = jSONArrayOptJSONArray3.optString(i3);
                        if (ai.b(strOptString) && (settingCampaign = CampaignEx.parseSettingCampaign(new JSONObject(strOptString))) != null) {
                            arrayList.add(settingCampaign);
                        }
                    }
                }
                if (arrayList != null) {
                    aVar2.L = arrayList;
                }
                try {
                    JSONArray jSONArrayOptJSONArray4 = jSONObject.optJSONArray(com.tkay.expressad.d.a.b.as);
                    if (jSONArrayOptJSONArray4 == null || jSONArrayOptJSONArray4.length() <= 0) {
                        arrayList2 = null;
                    } else {
                        arrayList2 = new ArrayList();
                        for (int i4 = 0; i4 < jSONArrayOptJSONArray4.length(); i4++) {
                            String strOptString2 = jSONArrayOptJSONArray4.optString(i4);
                            if (ai.b(strOptString2)) {
                                JSONObject jSONObject2 = new JSONObject(strOptString2);
                                arrayList2.add(new com.mbridge.msdk.foundation.entity.b(jSONObject2.optInt("adtype"), jSONObject2.optString("unitid")));
                            }
                        }
                    }
                    if (arrayList2 != null) {
                        aVar2.M = arrayList2;
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
                aVar2.bf = jSONObject.optInt(com.tkay.expressad.d.a.b.at, com.tkay.expressad.d.a.b.bx);
                aVar2.al = jSONObject.optInt("pf", com.tkay.expressad.d.a.b.by);
                aVar2.an = jSONObject.optInt(com.tkay.expressad.d.a.b.aA, 20);
                aVar2.ar = jSONObject.optString("pid");
                JSONArray jSONArrayOptJSONArray5 = jSONObject.optJSONArray(com.tkay.expressad.d.a.b.av);
                if (jSONArrayOptJSONArray5 != null && jSONArrayOptJSONArray5.length() > 0) {
                    ArrayList arrayList3 = new ArrayList();
                    for (int i5 = 0; i5 < jSONArrayOptJSONArray5.length(); i5++) {
                        arrayList3.add(jSONArrayOptJSONArray5.optString(i5));
                    }
                    aVar2.am = arrayList3;
                }
                JSONObject jSONObjectOptJSONObject2 = jSONObject.optJSONObject(com.tkay.expressad.d.a.b.aw);
                if (jSONObjectOptJSONObject2 != null) {
                    aVar2.ao = jSONObjectOptJSONObject2.optInt(com.tkay.expressad.d.a.b.ax, 1);
                    aVar2.ap = jSONObjectOptJSONObject2.optInt(com.tkay.expressad.d.a.b.ay, 1);
                    aVar2.aq = jSONObjectOptJSONObject2.optInt("delete", 1);
                }
                aVar2.bg = jSONObject.optString(com.tkay.expressad.d.a.b.ct, "");
                aVar2.bh = jSONObject.optString(com.tkay.expressad.d.a.b.cu, "");
                aVar2.bi = jSONObject.optString(com.tkay.expressad.d.a.b.cv, "");
                aVar2.bj = jSONObject.optString(com.tkay.expressad.d.a.b.cw, "");
                aVar2.bk = jSONObject.optString(com.tkay.expressad.d.a.b.cx, "");
                aVar2.bl = jSONObject.optInt(com.tkay.expressad.d.a.b.cy, 0);
                aVar2.bm = jSONObject.optInt(com.tkay.expressad.d.a.b.cz, 21600);
                aVar2.bn = jSONObject.optInt(com.tkay.expressad.d.a.b.cA, 2);
                aVar2.bo = jSONObject.optInt(com.tkay.expressad.d.a.b.cB, 0);
                aVar2.bp = jSONObject.optInt(com.tkay.expressad.d.a.b.cC, 0);
                aVar2.bq = jSONObject.optInt(com.tkay.expressad.d.a.b.cD, 604800);
                aVar2.br = jSONObject.optInt(com.tkay.expressad.d.a.b.cE, 0);
                aVar2.bs = jSONObject.optString("adchoice_icon", "");
                aVar2.bu = jSONObject.optString("adchoice_link", "");
                aVar2.bt = jSONObject.optString("adchoice_size", "");
                aVar2.bw = jSONObject.optString("platform_logo", "");
                aVar2.bv = jSONObject.optString("platform_name", "");
                aVar2.bx = i(jSONObject.optString(com.tkay.expressad.d.a.b.cM, ""));
                aVar2.b = jSONObject.optInt(com.tkay.expressad.d.a.b.cO, 0);
                aVar2.bA = jSONObject.optInt(com.tkay.expressad.d.a.b.cQ, 0);
                aVar2.aj = jSONObject.optInt(com.tkay.expressad.d.a.b.di, 120);
                aVar2.ai = jSONObject.optInt(com.tkay.expressad.d.a.b.dg, 10);
                aVar2.ak = jSONObject.optString(com.tkay.expressad.d.a.b.dI, "");
                aVar2.bB = jSONObject.optString(com.tkay.expressad.d.a.b.cT, "");
                aVar2.bC = jSONObject.optString("omsdkjs_h5_url", "");
                aVar2.bD = jSONObject.optInt(com.tkay.expressad.d.a.b.cU, 2);
                aVar2.bE = jSONObject.optInt(com.tkay.expressad.d.a.b.cV, 7200);
                String strOptString3 = jSONObject.optString(com.tkay.expressad.d.a.b.cW);
                if (!TextUtils.isEmpty(strOptString3)) {
                    String strB = t.b(strOptString3);
                    if (strB.startsWith("[")) {
                        JSONArray jSONArray = new JSONArray(strB);
                        if (jSONArray.length() > 0) {
                            ArrayList arrayList4 = new ArrayList();
                            for (int i6 = 0; i6 < jSONArray.length(); i6++) {
                                JSONObject jSONObject3 = jSONArray.getJSONObject(i6);
                                if (jSONObject3 != null) {
                                    com.mbridge.msdk.foundation.entity.a aVar3 = new com.mbridge.msdk.foundation.entity.a();
                                    aVar3.a(jSONObject3.optString("pn"));
                                    aVar3.b(jSONObject3.optString("at"));
                                    aVar3.c(jSONObject3.optString(com.tkay.expressad.d.a.b.cZ));
                                    aVar3.d(jSONObject3.optString(com.tkay.expressad.d.a.b.da));
                                    arrayList4.add(aVar3);
                                }
                            }
                            aVar2.bF = arrayList4;
                        }
                    }
                }
                aVar2.bH = jSONObject.optString(com.tkay.expressad.d.a.b.ds);
                aVar2.bG = jSONObject.optString(com.tkay.expressad.d.a.b.dA);
                int iOptInt = jSONObject.optInt(com.tkay.expressad.d.a.b.dt, 0);
                if (iOptInt > 2 || iOptInt < 0) {
                    iOptInt = 0;
                }
                aVar2.bI = iOptInt;
                aVar2.bJ = jSONObject.optBoolean(com.tkay.expressad.d.a.b.dw, false);
                aVar2.bK = jSONObject.optInt(com.tkay.expressad.d.a.b.dx, 120);
                JSONArray jSONArrayOptJSONArray6 = jSONObject.optJSONArray(com.tkay.expressad.d.a.b.dy);
                if (jSONArrayOptJSONArray6 != null && jSONArrayOptJSONArray6.length() > 0) {
                    ArrayList<Integer> arrayList5 = new ArrayList<>();
                    for (int i7 = 0; i7 < jSONArrayOptJSONArray6.length(); i7++) {
                        int iOptInt2 = jSONArrayOptJSONArray6.optInt(i7);
                        if (iOptInt2 != 0) {
                            arrayList5.add(Integer.valueOf(iOptInt2));
                        }
                    }
                    if (arrayList5.size() > 0) {
                        arrayList5.add(-1);
                        aVar2.bL = arrayList5;
                    }
                }
                String strOptString4 = jSONObject.optString(com.tkay.expressad.d.a.b.dz);
                if (!TextUtils.isEmpty(strOptString4)) {
                    try {
                        JSONObject jSONObject4 = new JSONObject(t.b(strOptString4));
                        Iterator<String> itKeys = jSONObject4.keys();
                        HashMap<String, String> map2 = new HashMap<>();
                        while (itKeys.hasNext()) {
                            String next = itKeys.next();
                            if (!TextUtils.isEmpty(next) && !TextUtils.isEmpty(jSONObject4.optString(next)) && !TextUtils.isEmpty(t.b(jSONObject4.optString(next)))) {
                                map2.put(next, jSONObject4.optString(next));
                            }
                        }
                        if (map2.size() > 0) {
                            aVar2.bM = map2;
                        }
                    } catch (Exception e2) {
                        z.d("SETTING", e2.getMessage());
                    }
                }
                JSONArray jSONArrayOptJSONArray7 = jSONObject.optJSONArray(com.tkay.expressad.d.a.b.dr);
                if (jSONArrayOptJSONArray7 != null && jSONArrayOptJSONArray7.length() > 0) {
                    for (int i8 = 0; i8 < jSONArrayOptJSONArray7.length(); i8++) {
                        JSONObject jSONObject5 = jSONArrayOptJSONArray7.getJSONObject(i8);
                        Iterator<String> itKeys2 = jSONObject5.keys();
                        while (itKeys2.hasNext()) {
                            String next2 = itKeys2.next();
                            if (!TextUtils.isEmpty(next2) && jSONObject5.getBoolean(next2)) {
                                aVar2.aW.add(Integer.valueOf(Integer.parseInt(next2)));
                            }
                        }
                    }
                }
                try {
                    int iOptInt3 = jSONObject.optInt("lqcnt", 30);
                    int iOptInt4 = jSONObject.optInt("lqto", 5);
                    int iOptInt5 = jSONObject.optInt("lqswt", 0);
                    int iOptInt6 = jSONObject.optInt("lqtype", 0);
                    aVar2.aH = iOptInt4;
                    aVar2.aG = iOptInt3;
                    aVar2.aI = iOptInt5;
                    aVar2.aJ = iOptInt6;
                    JSONArray jSONArrayOptJSONArray8 = jSONObject.optJSONArray(com.tkay.expressad.d.a.b.eb);
                    if (jSONArrayOptJSONArray8 == null) {
                        jSONArrayOptJSONArray8 = new JSONArray();
                        jSONArrayOptJSONArray8.put("2000088");
                    }
                    aVar2.S = jSONArrayOptJSONArray8;
                    JSONArray jSONArrayOptJSONArray9 = jSONObject.optJSONArray(com.tkay.expressad.d.a.b.ea);
                    if (jSONArrayOptJSONArray9 == null) {
                        jSONArrayOptJSONArray9 = new JSONArray();
                        jSONArrayOptJSONArray9.put("2000041");
                        jSONArrayOptJSONArray9.put("2000042");
                        jSONArrayOptJSONArray9.put("2000032");
                        jSONArrayOptJSONArray9.put("2000079");
                    }
                    aVar2.R = jSONArrayOptJSONArray9;
                    aVar2.T = jSONObject.optInt(com.tkay.expressad.d.a.b.ec);
                    aVar2.Z = jSONObject.optInt(com.tkay.expressad.d.a.b.ej, 8000);
                    aVar2.aa = jSONObject.optInt(com.tkay.expressad.d.a.b.ek, 8000);
                    aVar2.ab = jSONObject.optInt(com.tkay.expressad.d.a.b.el, 1300);
                    int iOptInt7 = jSONObject.optInt(com.tkay.expressad.d.a.b.em, a);
                    aVar2.ac = iOptInt7;
                    com.mbridge.msdk.click.b.a.c = iOptInt7;
                    int i9 = Integer.parseInt(t.b(jSONObject.optString("lqpt")));
                    if (i9 > 0 && i9 < 65535) {
                        aVar2.aK = i9;
                        com.mbridge.msdk.foundation.same.net.f.d.a().g = i9;
                        com.mbridge.msdk.foundation.same.net.f.d.a().h = i9;
                    }
                } catch (Exception unused) {
                }
                aVar2.bN = jSONObject.optInt(com.tkay.expressad.d.a.b.dB, 0);
                aVar2.l = jSONObject.optString(com.tkay.expressad.d.a.b.dD, "");
                aVar2.m = jSONObject.optString(com.tkay.expressad.d.a.b.dE, "");
                try {
                    int iOptInt8 = jSONObject.optInt("l", 3);
                    boolean z2 = jSONObject.optInt("k", 0) == 1;
                    boolean z3 = jSONObject.optInt("m", 1) == 1;
                    aVar2.O = iOptInt8;
                    aVar2.N = z2;
                    aVar2.P = z3;
                } catch (Exception e3) {
                    z.d("Setting", e3.getMessage());
                }
                aVar2.by = jSONObject.optInt(com.tkay.expressad.d.a.b.dK, 0);
                aVar2.bz = b.a(jSONObject.optJSONObject(com.tkay.expressad.d.a.b.dL));
                try {
                    int iOptInt9 = jSONObject.optInt(com.tkay.expressad.d.a.b.dQ, com.mbridge.msdk.foundation.same.a.M);
                    int iOptInt10 = jSONObject.optInt(com.tkay.expressad.d.a.b.dR, com.mbridge.msdk.foundation.same.a.N);
                    int iOptInt11 = jSONObject.optInt(com.tkay.expressad.d.a.b.dS, com.mbridge.msdk.foundation.same.a.O);
                    int iOptInt12 = jSONObject.optInt(com.tkay.expressad.d.a.b.dU, com.mbridge.msdk.foundation.same.a.S);
                    if (iOptInt9 <= 0) {
                        iOptInt9 = com.mbridge.msdk.foundation.same.a.M;
                    }
                    aVar2.aN = iOptInt9;
                    if (iOptInt10 <= 0) {
                        iOptInt10 = com.mbridge.msdk.foundation.same.a.N;
                    }
                    aVar2.aL = iOptInt10;
                    if (iOptInt11 <= 0) {
                        iOptInt11 = com.mbridge.msdk.foundation.same.a.O;
                    }
                    aVar2.aM = iOptInt11;
                    if (iOptInt12 < 0) {
                        iOptInt12 = com.mbridge.msdk.foundation.same.a.S;
                    }
                    aVar2.aO = iOptInt12;
                    int iOptInt13 = jSONObject.optInt(com.tkay.expressad.d.a.b.dT, 10);
                    if (iOptInt13 <= 0) {
                        iOptInt13 = 10;
                    }
                    aVar2.Q = iOptInt13;
                    aVar2.g(jSONObject.optInt(com.tkay.expressad.d.a.b.dV, 10));
                    aVar2.bQ = jSONObject.optInt(com.tkay.expressad.d.a.b.dX);
                    aVar2.bP = jSONObject.optInt(com.tkay.expressad.d.a.b.dW);
                    int iOptInt14 = jSONObject.optInt(com.tkay.expressad.d.a.b.dY);
                    aVar2.bR = iOptInt14;
                    com.mbridge.msdk.foundation.same.net.f.d.a().a(iOptInt14);
                } catch (Exception unused2) {
                }
                try {
                    aVar2.aQ = jSONObject.optString(com.tkay.expressad.d.a.b.dZ, "");
                } catch (Exception unused3) {
                }
                try {
                    aVar2.aR = jSONObject.optInt("is_transmission_available", 1);
                    aVar2.aS = jSONObject.optInt("is_transmission_delay", 24);
                } catch (Exception unused4) {
                    aVar2.aR = 1;
                    aVar2.aS = 24;
                }
                aVar2.bS = jSONObject.optInt(com.tkay.expressad.d.a.b.ei, 1);
                aVar2.bT = jSONObject.optString("vtag", "");
                try {
                    try {
                        aVar2.ae = jSONObject.optInt(com.tkay.expressad.d.a.b.en, 0) != 0;
                    } catch (Exception unused5) {
                        z = false;
                        aVar2.ae = z;
                    }
                } catch (Exception unused6) {
                    z = false;
                }
                String strOptString5 = jSONObject.optString("swxid");
                if (!TextUtils.isEmpty(aVar2.aU)) {
                    aVar2.aU = strOptString5;
                    if (TextUtils.isEmpty(com.mbridge.msdk.foundation.controller.a.f().m())) {
                        com.mbridge.msdk.foundation.controller.a.f().e(aVar2.aU);
                    }
                }
                try {
                    aVar2.ad = jSONObject.optInt("ch_nv_im_cb", 1);
                } catch (Exception unused7) {
                    aVar2.ad = 1;
                }
                try {
                    aVar2.aT = jSONObject.optInt("do_us_fi_re", 1) != 0;
                } catch (Exception unused8) {
                    aVar2.aT = true;
                }
                try {
                    if (com.mbridge.msdk.foundation.controller.b.a().d()) {
                        try {
                            fastKVBuild = new FastKV.Builder(e.b(com.mbridge.msdk.foundation.same.b.c.m), t.b(v.a)).build();
                        } catch (Exception unused9) {
                            fastKVBuild = null;
                        }
                        if (fastKVBuild == null) {
                            try {
                                if (com.mbridge.msdk.foundation.controller.a.f().j() != null) {
                                    String strOptString6 = jSONObject.optString("b");
                                    if (!TextUtils.isEmpty(strOptString6) && !TextUtils.equals(com.mbridge.msdk.foundation.same.a.t, strOptString6)) {
                                        com.mbridge.msdk.foundation.same.a.t = strOptString6;
                                        com.mbridge.msdk.foundation.a.a.a.a().a("b", com.mbridge.msdk.foundation.same.a.t);
                                        try {
                                            fastKVBuild.putString(t.b(com.tkay.expressad.foundation.g.a.cj), com.mbridge.msdk.foundation.same.a.t);
                                        } catch (Exception unused10) {
                                        }
                                    }
                                    String strOptString7 = jSONObject.optString("c");
                                    if (!TextUtils.isEmpty(strOptString7) && !TextUtils.equals(com.mbridge.msdk.foundation.same.a.u, strOptString7)) {
                                        com.mbridge.msdk.foundation.same.a.u = strOptString7;
                                        com.mbridge.msdk.foundation.a.a.a.a().a("c", com.mbridge.msdk.foundation.same.a.u);
                                        try {
                                            fastKVBuild.putString(t.b(com.tkay.expressad.foundation.g.a.cm), com.mbridge.msdk.foundation.same.a.u);
                                        } catch (Exception unused11) {
                                        }
                                    }
                                }
                            } catch (Exception e4) {
                                e4.printStackTrace();
                            }
                        } else {
                            try {
                                Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
                                if (contextJ != null) {
                                    String strOptString8 = jSONObject.optString("b");
                                    if (!TextUtils.isEmpty(strOptString8) && !TextUtils.equals(com.mbridge.msdk.foundation.same.a.t, strOptString8)) {
                                        com.mbridge.msdk.foundation.same.a.t = strOptString8;
                                        com.mbridge.msdk.foundation.a.a.a.a().a("b", com.mbridge.msdk.foundation.same.a.t);
                                        SharedPreferences sharedPreferences = contextJ.getSharedPreferences(t.b(v.a), 0);
                                        if (sharedPreferences != null) {
                                            SharedPreferences.Editor editorEdit = sharedPreferences.edit();
                                            editorEdit.putString(t.b(com.tkay.expressad.foundation.g.a.cj), com.mbridge.msdk.foundation.same.a.t);
                                            editorEdit.apply();
                                        }
                                    }
                                    String strOptString9 = jSONObject.optString("c");
                                    if (!TextUtils.isEmpty(strOptString9) && !TextUtils.equals(com.mbridge.msdk.foundation.same.a.u, strOptString9)) {
                                        com.mbridge.msdk.foundation.same.a.u = strOptString9;
                                        com.mbridge.msdk.foundation.a.a.a.a().a("c", com.mbridge.msdk.foundation.same.a.u);
                                        SharedPreferences sharedPreferences2 = contextJ.getSharedPreferences(t.b(v.a), 0);
                                        if (sharedPreferences2 != null) {
                                            SharedPreferences.Editor editorEdit2 = sharedPreferences2.edit();
                                            editorEdit2.putString(t.b(com.tkay.expressad.foundation.g.a.cm), com.mbridge.msdk.foundation.same.a.u);
                                            editorEdit2.apply();
                                        }
                                    }
                                }
                            } catch (Exception e5) {
                                e5.printStackTrace();
                            }
                        }
                    } else {
                        fastKVBuild = null;
                        if (fastKVBuild == null) {
                        }
                    }
                } catch (Exception e6) {
                    e6.printStackTrace();
                }
                return aVar2;
            } catch (Exception e7) {
                exc = e7;
                aVar = aVar2;
            }
        } catch (Exception e8) {
            exc = e8;
            aVar = null;
        }
        exc.printStackTrace();
        return aVar;
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
    */
    public static String a(Context context, String str) {
        String strReplace = "";
        try {
            a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
            if (aVarB != null && aVarB.i != null) {
                String host = Uri.parse(str).getHost();
                Iterator<Map.Entry<String, String>> it = aVarB.i.entrySet().iterator();
                while (true) {
                    if (it.hasNext()) {
                        String key = it.next().getKey();
                        if (!TextUtils.isEmpty(host) && host.contains(key)) {
                            String str2 = aVarB.i.get(key);
                            if (TextUtils.isEmpty(str2)) {
                                return "";
                            }
                            String strReplace2 = str2.replace("{gaid}", com.mbridge.msdk.foundation.tools.v.E());
                            if (strReplace2.contains(com.tkay.expressad.d.a.b.I)) {
                                strReplace = com.mbridge.msdk.foundation.tools.v.g(context) != null ? strReplace2.replace(com.tkay.expressad.d.a.b.I, com.mbridge.msdk.foundation.tools.v.g(context)) : strReplace2;
                            } else if (strReplace2.contains(com.tkay.expressad.d.a.b.H) && com.mbridge.msdk.foundation.tools.v.h(context) != null) {
                                strReplace = strReplace2.replace(com.tkay.expressad.d.a.b.H, com.mbridge.msdk.foundation.tools.v.h(context));
                            }
                        }
                    }
                }
            }
            break;
        } catch (Throwable unused) {
        }
        return strReplace;
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

    public final Map<String, a> aA() {
        return this.bx;
    }

    private static Map<String, a> i(String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return null;
            }
            HashMap map = new HashMap();
            JSONObject jSONObject = new JSONObject(str);
            Iterator<String> itKeys = jSONObject.keys();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                a aVar = new a();
                JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(next);
                if (jSONObjectOptJSONObject != null) {
                    aVar.a(jSONObjectOptJSONObject);
                }
                map.put(next, aVar);
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

    public static class b {
        private String a;
        private String b;
        private String c;
        private JSONArray d;

        public static b a(JSONObject jSONObject) {
            if (jSONObject == null) {
                jSONObject = new JSONObject();
            }
            b bVar = new b();
            Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
            bVar.a = jSONObject.optString("title", contextJ.getString(s.a(contextJ, "mbridge_cm_feedback_dialog_title", i.g)));
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
            return this.a;
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

    public static class a {
        private List<String> a;
        private List<String> b;
        private List<String> c;
        private List<String> d;

        public final List<String> a() {
            return this.a;
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
                    this.a = m.a(jSONArrayOptJSONArray);
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
