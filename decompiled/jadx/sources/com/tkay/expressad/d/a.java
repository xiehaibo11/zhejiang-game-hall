package com.tkay.expressad.d;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.core.common.b.m;
import com.tkay.expressad.foundation.h.h;
import com.tkay.expressad.foundation.h.i;
import com.tkay.expressad.foundation.h.j;
import com.tkay.expressad.foundation.h.w;
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

/* JADX INFO: loaded from: classes3.dex */
public final class a {
    private int A;
    private String B;
    private long C;
    private int D;
    private long E;
    private long F;
    private int G;
    private int H;
    private int I;
    private String J;
    private String K;
    private int L;
    private List<com.tkay.expressad.foundation.d.c> M;
    private List<com.tkay.expressad.foundation.d.b> N;
    private int R;
    private LinkedList<String> S;
    private int Y;
    private List<String> Z;
    private int aE;
    private long aG;
    private long aH;
    private int aI;
    private int aJ;
    private long aK;
    private int aM;
    private int aa;
    private int ab;
    private int ac;
    private int ad;
    private String ae;
    private String af;
    private String ao;
    private String b;
    private Map<String, C0434a> be;
    private b bg;
    private String bl;
    private String bm;
    private long c;
    private int d;
    private int f;
    private boolean g;
    private Map<String, String> h;
    private boolean i;
    private long j;
    private List<c> l;
    private boolean m;
    private long n;
    private long o;
    private long p;
    private boolean q;
    private int r;
    private int s;
    private int t;
    private long u;
    private List<String> v;
    private int w;
    private int x;
    private int y;
    private int z;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f6454a = 0;
    private long e = 86400;
    private String k = "";
    private boolean O = false;
    private int P = 3;
    private boolean Q = true;
    private int T = 0;
    private int U = 3600;
    private int V = 10;
    private int W = 120;
    private String X = "";
    private int ag = 1;
    private int ah = 1;
    private int ai = 1;
    private int aj = 0;
    private int ak = 1;
    private String al = "";
    private int am = 0;
    private int an = 2;
    private int ap = 86400;
    private String aq = "LdxThdi1WBK\\/WgfPhbxQYkeXHBPwHZKAJ7eXHM==";
    private String ar = "LdxThdi1WBK\\/WgfPhbxQYkeXHBPwHZKsYFh=";
    private int as = 1;
    private int at = 30;
    private int au = 5;
    private int av = 0;
    private int aw = 0;
    private int ax = 9377;
    private int ay = 0;
    private int az = 0;
    private int aA = 0;
    private int aB = 2;
    private int aC = 10;
    private List<Integer> aD = new ArrayList();
    private int aF = 1;
    private int aL = 3;
    private String aN = "";
    private String aO = "";
    private String aP = "";
    private String aQ = "";
    private String aR = "";
    private int aS = 0;
    private int aT = 21600;
    private int aU = 2;
    private int aV = 0;
    private int aW = 0;
    private int aX = 604800;
    private int aY = 0;
    private String aZ = "";
    private String ba = "";
    private String bb = "";
    private String bc = "";
    private String bd = "";
    private int bf = 0;
    private int bh = 0;
    private String bi = "";
    private int bj = 2;
    private int bk = 7200;
    private int bn = 0;
    private boolean bo = false;
    private int bp = 1;
    private int bq = 0;
    private int br = 0;
    private int bs = 0;
    private int bt = 3;
    private int bu = 600;
    private int bv = 10;

    public final void a() {
        this.R = 10;
    }

    private int X() {
        return this.R;
    }

    private List<com.tkay.expressad.foundation.d.b> Y() {
        return this.N;
    }

    private String Z() {
        return this.X;
    }

    private void d(String str) {
        this.X = str;
    }

    private int aa() {
        return this.V;
    }

    private void g(int i) {
        this.V = i;
    }

    public final int b() {
        return this.W;
    }

    public final void a(int i) {
        this.W = i;
    }

    private LinkedList<String> ab() {
        return this.S;
    }

    private int ac() {
        return this.f6454a;
    }

    public final void c() {
        this.f6454a = 0;
    }

    private void a(LinkedList<String> linkedList) {
        this.S = linkedList;
    }

    private int ad() {
        return this.T;
    }

    private void h(int i) {
        this.T = i;
    }

    private int ae() {
        return this.U * 1000;
    }

    private void i(int i) {
        this.U = i;
    }

    private void a(List<com.tkay.expressad.foundation.d.b> list) {
        this.N = list;
    }

    public final void b(int i) {
        if (i > 0) {
            this.aC = i;
        }
    }

    private int af() {
        return this.aC;
    }

    public final void c(int i) {
        this.ay = i;
    }

    private int ag() {
        return this.ay;
    }

    public final void d(int i) {
        this.az = i;
    }

    private int ah() {
        return this.az;
    }

    public final void e(int i) {
        this.aA = i;
    }

    private int ai() {
        return this.aA;
    }

    public final void f(int i) {
        this.aB = i;
    }

    private int aj() {
        return this.aB;
    }

    private int ak() {
        return this.as;
    }

    private void j(int i) {
        this.aD.add(Integer.valueOf(i));
    }

    private boolean k(int i) {
        return this.aD.contains(Integer.valueOf(i));
    }

    private void l(int i) {
        this.as = i;
    }

    private String al() {
        return this.aq;
    }

    private void e(String str) {
        this.aq = str;
    }

    private String am() {
        return this.ar;
    }

    private void f(String str) {
        this.ar = str;
    }

    private int an() {
        return this.ap;
    }

    private void m(int i) {
        this.ap = i;
    }

    private int ao() {
        return this.an;
    }

    private void n(int i) {
        this.an = i;
    }

    private String ap() {
        return this.ao;
    }

    private void g(String str) {
        this.ao = str;
    }

    private int aq() {
        return this.ag;
    }

    public final void d() {
        this.ag = 1;
    }

    private int ar() {
        return this.ah;
    }

    public final void e() {
        this.ah = 1;
    }

    private int as() {
        return this.ai;
    }

    public final void f() {
        this.ai = 1;
    }

    private int at() {
        return this.aj;
    }

    public final void g() {
        this.aj = 0;
    }

    private int au() {
        return this.ak;
    }

    public final void h() {
        this.ak = 1;
    }

    private String av() {
        return this.al;
    }

    private void h(String str) {
        this.al = str;
    }

    private int aw() {
        return this.am;
    }

    public final void i() {
        this.am = -1;
    }

    private int ax() {
        return this.L;
    }

    public final void j() {
        this.L = 1;
    }

    private String ay() {
        return this.K;
    }

    public final void a(String str) {
        this.K = str;
    }

    private int az() {
        return this.aF;
    }

    private void o(int i) {
        this.aF = i;
    }

    private int aA() {
        return this.aE;
    }

    private void p(int i) {
        this.aE = i;
    }

    private int aB() {
        return this.Y;
    }

    private void q(int i) {
        this.Y = i;
    }

    private List<String> aC() {
        return this.Z;
    }

    private void b(List<String> list) {
        this.Z = list;
    }

    private int aD() {
        return this.aa;
    }

    private void r(int i) {
        this.aa = i;
    }

    private int aE() {
        return this.ab;
    }

    private void s(int i) {
        this.ab = i;
    }

    private int aF() {
        return this.ac;
    }

    private void t(int i) {
        this.ac = i;
    }

    private int aG() {
        return this.ad;
    }

    private void u(int i) {
        this.ad = i;
    }

    private String aH() {
        return this.ae;
    }

    private void i(String str) {
        this.ae = str;
    }

    private int aI() {
        return this.G;
    }

    private void v(int i) {
        this.G = i;
    }

    private int aJ() {
        return this.H;
    }

    private void w(int i) {
        this.H = i;
    }

    private List<com.tkay.expressad.foundation.d.c> aK() {
        return this.M;
    }

    private void c(List<com.tkay.expressad.foundation.d.c> list) {
        this.M = list;
    }

    private int aL() {
        return this.I;
    }

    private void x(int i) {
        this.I = i;
    }

    private String aM() {
        return this.J;
    }

    private void j(String str) {
        this.J = str;
    }

    private int aN() {
        return this.D;
    }

    private void y(int i) {
        this.D = i;
    }

    private long aO() {
        return this.E;
    }

    private void a(long j) {
        this.E = j;
    }

    private long aP() {
        return this.F;
    }

    private void z(int i) {
        this.F = i;
    }

    private long aQ() {
        return this.C * 1000;
    }

    private void b(long j) {
        this.C = j;
    }

    private int aR() {
        return this.t;
    }

    private void A(int i) {
        this.t = i;
    }

    private String aS() {
        return this.B;
    }

    private void k(String str) {
        this.B = str;
    }

    public final int k() {
        return this.A;
    }

    private void B(int i) {
        this.A = i;
    }

    private int aT() {
        return this.x;
    }

    private void C(int i) {
        this.x = i;
    }

    private int aU() {
        return this.y;
    }

    private void D(int i) {
        this.y = i;
    }

    private int aV() {
        return this.z;
    }

    private void E(int i) {
        this.z = i;
    }

    public final long l() {
        if (this.u <= 0) {
            this.u = com.tkay.expressad.d.a.b.Q;
        }
        return this.u;
    }

    public final void m() {
        this.u = com.tkay.expressad.d.a.b.Q;
    }

    private int aW() {
        return this.aL;
    }

    private void F(int i) {
        this.aL = i;
    }

    public final int n() {
        return this.aM;
    }

    public final void o() {
        this.aM = com.tkay.expressad.d.a.b.bx;
    }

    private long aX() {
        return this.aK;
    }

    public final void p() {
        this.aK = com.tkay.expressad.d.a.b.aC;
    }

    private int aY() {
        return this.aI;
    }

    private void G(int i) {
        this.aI = i;
    }

    private int aZ() {
        return this.aJ;
    }

    private void H(int i) {
        this.aJ = i;
    }

    public final long q() {
        return this.aG * 1000;
    }

    private void c(long j) {
        this.aG = j;
    }

    public final long r() {
        return this.aH * 1000;
    }

    public final void s() {
        this.aH = 10L;
    }

    public final boolean t() {
        return this.q;
    }

    public final void u() {
        this.q = false;
    }

    private long ba() {
        return this.p;
    }

    private void d(long j) {
        this.p = j;
    }

    public final boolean v() {
        return this.m;
    }

    public final void w() {
        this.m = false;
    }

    public final long x() {
        return this.n;
    }

    public final void y() {
        this.n = com.tkay.expressad.d.a.b.P;
    }

    private long bb() {
        return this.o;
    }

    public final void z() {
        this.o = 0L;
    }

    public final String toString() {
        return "cc=" + this.b + " upal=" + this.c + " cfc=" + this.d + " getpf=" + this.e + " uplc=" + this.f + " rurl=" + this.m;
    }

    private String bc() {
        return this.b;
    }

    private void l(String str) {
        this.b = str;
    }

    private long bd() {
        return this.c;
    }

    private void e(long j) {
        this.c = j;
    }

    private int be() {
        return this.d;
    }

    public final void A() {
        this.d = 1;
    }

    private long bf() {
        return this.e;
    }

    private void f(long j) {
        this.e = j;
    }

    private int bg() {
        return this.f;
    }

    private void I(int i) {
        this.f = i;
    }

    private List<c> bh() {
        return this.l;
    }

    private void d(List<c> list) {
        this.l = list;
    }

    private String bi() {
        return this.af;
    }

    private void m(String str) {
        this.af = str;
    }

    private void n(String str) {
        this.k = str;
    }

    private String bj() {
        return this.k;
    }

    public static a b(String str) {
        ArrayList arrayList;
        a aVar = null;
        arrayList = null;
        ArrayList arrayList2 = null;
        aVar = null;
        try {
            if (!TextUtils.isEmpty(str)) {
                JSONObject jSONObject = new JSONObject(str);
                a aVar2 = new a();
                try {
                    aVar2.b = jSONObject.optString(com.tkay.expressad.d.a.b.h);
                    aVar2.K = jSONObject.optString(com.tkay.expressad.d.a.b.j, "tkay");
                    aVar2.c = jSONObject.optLong(com.tkay.expressad.d.a.b.l);
                    aVar2.d = jSONObject.optInt(com.tkay.expressad.d.a.b.m);
                    aVar2.e = jSONObject.optLong("getpf");
                    aVar2.f = jSONObject.optInt(com.tkay.expressad.d.a.b.p);
                    aVar2.g = jSONObject.optBoolean(com.tkay.expressad.d.a.b.w);
                    aVar2.j = jSONObject.optLong("current_time");
                    aVar2.i = jSONObject.optBoolean(com.tkay.expressad.d.a.b.o);
                    aVar2.o = jSONObject.optLong(com.tkay.expressad.d.a.b.B);
                    aVar2.n = jSONObject.optLong("plct") == 0 ? com.tkay.expressad.d.a.b.P : jSONObject.optLong("plct");
                    aVar2.m = jSONObject.optBoolean(com.tkay.expressad.d.a.b.C);
                    aVar2.p = jSONObject.optLong(com.tkay.expressad.d.a.b.F);
                    aVar2.q = jSONObject.optBoolean(com.tkay.expressad.d.a.b.G);
                    aVar2.r = jSONObject.optInt(com.tkay.expressad.d.a.b.X);
                    aVar2.s = jSONObject.optInt(com.tkay.expressad.d.a.b.Y);
                    aVar2.L = jSONObject.optInt(com.tkay.expressad.d.a.b.k);
                    aVar2.t = jSONObject.optInt(com.tkay.expressad.d.a.b.Z, 1800);
                    aVar2.x = jSONObject.optInt(com.tkay.expressad.d.a.b.aa);
                    aVar2.u = jSONObject.optLong("plctb") == 0 ? com.tkay.expressad.d.a.b.Q : jSONObject.optLong("plctb");
                    aVar2.aI = jSONObject.optInt(com.tkay.expressad.d.a.b.ad);
                    aVar2.aJ = jSONObject.optInt(com.tkay.expressad.d.a.b.ae);
                    aVar2.x = jSONObject.optInt(com.tkay.expressad.d.a.b.aa, 100);
                    aVar2.y = jSONObject.optInt(com.tkay.expressad.d.a.b.af, 2);
                    aVar2.z = jSONObject.optInt(com.tkay.expressad.d.a.b.ag, 2);
                    boolean z = true;
                    aVar2.A = jSONObject.optInt(com.tkay.expressad.d.a.b.ah, 1);
                    aVar2.aK = jSONObject.optLong(com.tkay.expressad.d.a.b.ai, com.tkay.expressad.d.a.b.aC);
                    aVar2.B = jSONObject.optString(com.tkay.expressad.d.a.b.aj);
                    aVar2.C = jSONObject.optLong(com.tkay.expressad.d.a.b.ak, com.tkay.expressad.d.a.b.aD);
                    aVar2.D = jSONObject.optInt(com.tkay.expressad.d.a.b.aE, 1);
                    aVar2.E = jSONObject.optInt(com.tkay.expressad.d.a.b.aF, 604800);
                    aVar2.F = jSONObject.optInt(com.tkay.expressad.d.a.b.aG, com.tkay.expressad.d.a.b.aK);
                    aVar2.aL = jSONObject.optInt(com.tkay.expressad.d.a.b.bn, 3);
                    aVar2.aF = jSONObject.optInt(com.tkay.expressad.d.a.b.bv, 1);
                    aVar2.af = jSONObject.optString(com.tkay.expressad.d.a.b.aH, "");
                    aVar2.aE = jSONObject.optInt(com.tkay.expressad.d.a.b.al, 1);
                    aVar2.ah = jSONObject.optInt(com.tkay.expressad.d.a.b.bE, 1);
                    aVar2.ag = jSONObject.optInt(com.tkay.expressad.d.a.b.bF, 1);
                    aVar2.ai = jSONObject.optInt(com.tkay.expressad.d.a.b.bG, 1);
                    int i = 0;
                    aVar2.aj = jSONObject.optInt(com.tkay.expressad.d.a.b.bH, 0);
                    aVar2.ak = jSONObject.optInt(com.tkay.expressad.d.a.b.bI, 1);
                    aVar2.am = jSONObject.optInt(com.tkay.expressad.d.a.b.bK, -1);
                    aVar2.an = jSONObject.optInt(com.tkay.expressad.d.a.b.bV, 2);
                    aVar2.ap = jSONObject.optInt(com.tkay.expressad.d.a.b.bY, 86400);
                    aVar2.ao = jSONObject.optString(com.tkay.expressad.d.a.b.bW);
                    aVar2.ar = jSONObject.optString(com.tkay.expressad.d.a.b.cG);
                    aVar2.aq = jSONObject.optString(com.tkay.expressad.d.a.b.cF);
                    aVar2.as = jSONObject.optInt(com.tkay.expressad.d.a.b.cN);
                    aVar2.U = jSONObject.optInt(com.tkay.expressad.d.a.b.ci, 3600);
                    aVar2.T = jSONObject.optInt(com.tkay.expressad.d.a.b.ch, 0);
                    try {
                        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray(com.tkay.expressad.d.a.b.cg);
                        if (jSONArrayOptJSONArray != null && jSONArrayOptJSONArray.length() > 0) {
                            LinkedList<String> linkedList = new LinkedList<>();
                            for (int i2 = 0; i2 < jSONArrayOptJSONArray.length(); i2++) {
                                linkedList.add(jSONArrayOptJSONArray.optString(i2));
                            }
                            aVar2.S = linkedList;
                        }
                    } catch (Throwable th) {
                        th.printStackTrace();
                    }
                    long jOptLong = jSONObject.optLong(com.tkay.expressad.d.a.b.ab);
                    if (jOptLong == 0) {
                        aVar2.aG = 20L;
                    } else {
                        aVar2.aG = jOptLong;
                    }
                    long jOptLong2 = jSONObject.optLong(com.tkay.expressad.d.a.b.ac);
                    if (jOptLong2 == 0) {
                        aVar2.aH = 10L;
                    } else {
                        aVar2.aH = jOptLong2;
                        JSONArray jSONArrayOptJSONArray2 = jSONObject.optJSONArray(com.tkay.expressad.d.a.b.v);
                        if (jSONArrayOptJSONArray2 != null && jSONArrayOptJSONArray2.length() > 0) {
                            HashMap map = new HashMap();
                            for (int i3 = 0; i3 < jSONArrayOptJSONArray2.length(); i3++) {
                                JSONObject jSONObjectOptJSONObject = jSONArrayOptJSONArray2.optJSONObject(i3);
                                map.put(jSONObjectOptJSONObject.optString("domain"), jSONObjectOptJSONObject.optString("format"));
                            }
                            aVar2.h = map;
                        }
                    }
                    aVar2.G = jSONObject.optInt(com.tkay.expressad.d.a.b.ao, 3);
                    aVar2.H = jSONObject.optInt(com.tkay.expressad.d.a.b.ap, 86400);
                    aVar2.I = jSONObject.optInt("iex", 1);
                    JSONArray jSONArrayOptJSONArray3 = jSONObject.optJSONArray(com.tkay.expressad.d.a.b.ar);
                    if (jSONArrayOptJSONArray3 == null || jSONArrayOptJSONArray3.length() <= 0) {
                        arrayList = null;
                    } else {
                        arrayList = new ArrayList();
                        for (int i4 = 0; i4 < jSONArrayOptJSONArray3.length(); i4++) {
                            String strOptString = jSONArrayOptJSONArray3.optString(i4);
                            if (w.b(strOptString)) {
                                arrayList.add(com.tkay.expressad.foundation.d.c.a(new JSONObject(strOptString)));
                            }
                        }
                    }
                    if (arrayList != null) {
                        aVar2.M = arrayList;
                    }
                    try {
                        JSONArray jSONArrayOptJSONArray4 = jSONObject.optJSONArray(com.tkay.expressad.d.a.b.as);
                        if (jSONArrayOptJSONArray4 != null && jSONArrayOptJSONArray4.length() > 0) {
                            arrayList2 = new ArrayList();
                            for (int i5 = 0; i5 < jSONArrayOptJSONArray4.length(); i5++) {
                                String strOptString2 = jSONArrayOptJSONArray4.optString(i5);
                                if (w.b(strOptString2)) {
                                    JSONObject jSONObject2 = new JSONObject(strOptString2);
                                    arrayList2.add(new com.tkay.expressad.foundation.d.b(jSONObject2.optInt("adtype"), jSONObject2.optString("unitid")));
                                }
                            }
                        }
                        if (arrayList2 != null) {
                            aVar2.N = arrayList2;
                        }
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                    aVar2.aM = jSONObject.optInt(com.tkay.expressad.d.a.b.at, com.tkay.expressad.d.a.b.bx);
                    aVar2.Y = jSONObject.optInt("pf", com.tkay.expressad.d.a.b.by);
                    aVar2.aa = jSONObject.optInt(com.tkay.expressad.d.a.b.aA, 20);
                    aVar2.ae = jSONObject.optString("pid");
                    JSONArray jSONArrayOptJSONArray5 = jSONObject.optJSONArray(com.tkay.expressad.d.a.b.av);
                    if (jSONArrayOptJSONArray5 != null && jSONArrayOptJSONArray5.length() > 0) {
                        ArrayList arrayList3 = new ArrayList();
                        for (int i6 = 0; i6 < jSONArrayOptJSONArray5.length(); i6++) {
                            arrayList3.add(jSONArrayOptJSONArray5.optString(i6));
                        }
                        aVar2.Z = arrayList3;
                    }
                    JSONObject jSONObjectOptJSONObject2 = jSONObject.optJSONObject(com.tkay.expressad.d.a.b.aw);
                    if (jSONObjectOptJSONObject2 != null) {
                        aVar2.ab = jSONObjectOptJSONObject2.optInt(com.tkay.expressad.d.a.b.ax, 1);
                        aVar2.ac = jSONObjectOptJSONObject2.optInt(com.tkay.expressad.d.a.b.ay, 1);
                        aVar2.ad = jSONObjectOptJSONObject2.optInt("delete", 1);
                    }
                    aVar2.aN = jSONObject.optString(com.tkay.expressad.d.a.b.ct, "");
                    aVar2.aO = jSONObject.optString(com.tkay.expressad.d.a.b.cu, "");
                    aVar2.aP = jSONObject.optString(com.tkay.expressad.d.a.b.cv, "");
                    aVar2.aQ = jSONObject.optString(com.tkay.expressad.d.a.b.cw, "");
                    aVar2.aR = jSONObject.optString(com.tkay.expressad.d.a.b.cx, "");
                    aVar2.aS = jSONObject.optInt(com.tkay.expressad.d.a.b.cy, 0);
                    aVar2.aT = jSONObject.optInt(com.tkay.expressad.d.a.b.f6460cz, 21600);
                    aVar2.aU = jSONObject.optInt(com.tkay.expressad.d.a.b.cA, 2);
                    aVar2.aV = jSONObject.optInt(com.tkay.expressad.d.a.b.cB, 0);
                    aVar2.aW = jSONObject.optInt(com.tkay.expressad.d.a.b.cC, 0);
                    aVar2.aX = jSONObject.optInt(com.tkay.expressad.d.a.b.cD, 604800);
                    aVar2.aY = jSONObject.optInt(com.tkay.expressad.d.a.b.cE, 0);
                    aVar2.aZ = jSONObject.optString("adchoice_icon", "");
                    aVar2.bb = jSONObject.optString("adchoice_link", "");
                    aVar2.ba = jSONObject.optString("adchoice_size", "");
                    aVar2.bd = jSONObject.optString("platform_logo", "");
                    aVar2.bc = jSONObject.optString("platform_name", "");
                    aVar2.be = y(jSONObject.optString(com.tkay.expressad.d.a.b.cM, ""));
                    aVar2.f6454a = jSONObject.optInt(com.tkay.expressad.d.a.b.cO, 0);
                    aVar2.bh = jSONObject.optInt(com.tkay.expressad.d.a.b.cQ, 0);
                    aVar2.W = jSONObject.optInt(com.tkay.expressad.d.a.b.di, 120);
                    aVar2.V = jSONObject.optInt(com.tkay.expressad.d.a.b.dg, 10);
                    aVar2.X = jSONObject.optString(com.tkay.expressad.d.a.b.dI, "");
                    aVar2.bi = jSONObject.optString(com.tkay.expressad.d.a.b.cT, "");
                    aVar2.bj = jSONObject.optInt(com.tkay.expressad.d.a.b.cU, 2);
                    aVar2.bk = jSONObject.optInt(com.tkay.expressad.d.a.b.cV, 7200);
                    aVar2.bm = jSONObject.optString(com.tkay.expressad.d.a.b.ds);
                    aVar2.bl = jSONObject.optString(com.tkay.expressad.d.a.b.dA);
                    int iOptInt = jSONObject.optInt(com.tkay.expressad.d.a.b.dt, 0);
                    if (iOptInt > 2 || iOptInt < 0) {
                        iOptInt = 0;
                    }
                    aVar2.bn = iOptInt;
                    aVar2.bo = jSONObject.optBoolean(com.tkay.expressad.d.a.b.dw, false);
                    JSONArray jSONArrayOptJSONArray6 = jSONObject.optJSONArray(com.tkay.expressad.d.a.b.dr);
                    if (jSONArrayOptJSONArray6 != null && jSONArrayOptJSONArray6.length() > 0) {
                        for (int i7 = 0; i7 < jSONArrayOptJSONArray6.length(); i7++) {
                            JSONObject jSONObject3 = jSONArrayOptJSONArray6.getJSONObject(i7);
                            Iterator<String> itKeys = jSONObject3.keys();
                            while (itKeys.hasNext()) {
                                String next = itKeys.next();
                                if (!TextUtils.isEmpty(next) && jSONObject3.getBoolean(next)) {
                                    aVar2.aD.add(Integer.valueOf(Integer.parseInt(next)));
                                }
                            }
                        }
                    }
                    try {
                        int iOptInt2 = jSONObject.optInt("lqcnt", 30);
                        int iOptInt3 = jSONObject.optInt("lqto", 5);
                        int iOptInt4 = jSONObject.optInt("lqswt", 0);
                        int iOptInt5 = jSONObject.optInt("lqtype", 0);
                        aVar2.au = iOptInt3;
                        aVar2.at = iOptInt2;
                        aVar2.av = iOptInt4;
                        aVar2.aw = iOptInt5;
                        int i8 = Integer.parseInt(j.b(jSONObject.optString("lqpt")));
                        if (i8 > 0 && i8 < 65535) {
                            aVar2.ax = i8;
                        }
                    } catch (Exception unused) {
                    }
                    aVar2.bp = jSONObject.optInt(com.tkay.expressad.d.a.b.dB, 0);
                    try {
                        int iOptInt6 = jSONObject.optInt("l", 3);
                        boolean z2 = jSONObject.optInt("k", 0) == 1;
                        if (jSONObject.optInt("m", 1) != 1) {
                            z = false;
                        }
                        aVar2.P = iOptInt6;
                        aVar2.O = z2;
                        aVar2.Q = z;
                    } catch (Exception e2) {
                        e2.getMessage();
                    }
                    aVar2.bf = jSONObject.optInt(com.tkay.expressad.d.a.b.dK, 0);
                    aVar2.bg = b.a(jSONObject.optJSONObject(com.tkay.expressad.d.a.b.dL));
                    try {
                        int iOptInt7 = jSONObject.optInt(com.tkay.expressad.d.a.b.dQ, com.tkay.expressad.foundation.g.a.cH);
                        int iOptInt8 = jSONObject.optInt(com.tkay.expressad.d.a.b.dR, com.tkay.expressad.foundation.g.a.cI);
                        int iOptInt9 = jSONObject.optInt(com.tkay.expressad.d.a.b.dS, com.tkay.expressad.foundation.g.a.cJ);
                        int iOptInt10 = jSONObject.optInt(com.tkay.expressad.d.a.b.dU, com.tkay.expressad.foundation.g.a.cO);
                        if (iOptInt7 <= 0) {
                            iOptInt7 = com.tkay.expressad.foundation.g.a.cH;
                        }
                        if (iOptInt8 <= 0) {
                            iOptInt8 = com.tkay.expressad.foundation.g.a.cI;
                        }
                        if (iOptInt9 <= 0) {
                            iOptInt9 = com.tkay.expressad.foundation.g.a.cJ;
                        }
                        if (iOptInt10 < 0) {
                            iOptInt10 = com.tkay.expressad.foundation.g.a.cO;
                        }
                        aVar2.aA = iOptInt7;
                        aVar2.ay = iOptInt8;
                        aVar2.az = iOptInt9;
                        aVar2.aB = iOptInt10;
                        int iOptInt11 = jSONObject.optInt(com.tkay.expressad.d.a.b.dT, 0);
                        if (iOptInt11 >= 0) {
                            i = iOptInt11;
                        }
                        aVar2.R = i;
                        aVar2.b(jSONObject.optInt(com.tkay.expressad.d.a.b.dV, 10));
                        return aVar2;
                    } catch (Exception unused2) {
                        aVar = aVar2;
                    }
                } catch (Exception e3) {
                    e = e3;
                    aVar = aVar2;
                    e.printStackTrace();
                }
            }
        } catch (Exception e4) {
            e = e4;
        }
        return aVar;
    }

    private long bk() {
        return this.j;
    }

    private void g(long j) {
        this.j = j;
    }

    private Map<String, String> bl() {
        return this.h;
    }

    private void a(Map<String, String> map) {
        this.h = map;
    }

    private boolean bm() {
        return this.g;
    }

    private void a(boolean z) {
        this.g = z;
    }

    /* JADX WARN: Removed duplicated region for block: B:29:0x008f  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static java.lang.String a(android.content.Context r7, java.lang.String r8) {
        /*
            java.lang.String r0 = "{android_id_md5_upper}"
            java.lang.String r1 = "{android_id}"
            java.lang.String r2 = ""
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Throwable -> L90
            com.tkay.expressad.foundation.b.b r3 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> L90
            r3.e()     // Catch: java.lang.Throwable -> L90
            com.tkay.expressad.d.a r3 = com.tkay.expressad.d.b.b()     // Catch: java.lang.Throwable -> L90
            if (r3 == 0) goto L90
            java.util.Map<java.lang.String, java.lang.String> r4 = r3.h     // Catch: java.lang.Throwable -> L90
            if (r4 != 0) goto L1c
            goto L90
        L1c:
            android.net.Uri r8 = android.net.Uri.parse(r8)     // Catch: java.lang.Throwable -> L90
            java.lang.String r8 = r8.getHost()     // Catch: java.lang.Throwable -> L90
            java.util.Map<java.lang.String, java.lang.String> r4 = r3.h     // Catch: java.lang.Throwable -> L90
            java.util.Set r4 = r4.entrySet()     // Catch: java.lang.Throwable -> L90
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> L90
        L2e:
            boolean r5 = r4.hasNext()     // Catch: java.lang.Throwable -> L90
            if (r5 == 0) goto L90
            java.lang.Object r5 = r4.next()     // Catch: java.lang.Throwable -> L90
            java.util.Map$Entry r5 = (java.util.Map.Entry) r5     // Catch: java.lang.Throwable -> L90
            java.lang.Object r5 = r5.getKey()     // Catch: java.lang.Throwable -> L90
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L90
            boolean r6 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L90
            if (r6 != 0) goto L2e
            boolean r6 = r8.contains(r5)     // Catch: java.lang.Throwable -> L90
            if (r6 == 0) goto L2e
            java.util.Map<java.lang.String, java.lang.String> r8 = r3.h     // Catch: java.lang.Throwable -> L90
            java.lang.Object r8 = r8.get(r5)     // Catch: java.lang.Throwable -> L90
            java.lang.String r8 = (java.lang.String) r8     // Catch: java.lang.Throwable -> L90
            boolean r3 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L90
            if (r3 == 0) goto L5b
            return r2
        L5b:
            java.lang.String r3 = "{gaid}"
            java.lang.String r4 = com.tkay.core.common.l.d.f()     // Catch: java.lang.Throwable -> L90
            java.lang.String r8 = r8.replace(r3, r4)     // Catch: java.lang.Throwable -> L90
            boolean r3 = r8.contains(r1)     // Catch: java.lang.Throwable -> L90
            if (r3 == 0) goto L7a
            java.lang.String r0 = com.tkay.core.common.l.d.d(r7)     // Catch: java.lang.Throwable -> L90
            if (r0 == 0) goto L8f
            java.lang.String r7 = com.tkay.core.common.l.d.d(r7)     // Catch: java.lang.Throwable -> L90
            java.lang.String r2 = r8.replace(r1, r7)     // Catch: java.lang.Throwable -> L90
            goto L90
        L7a:
            boolean r1 = r8.contains(r0)     // Catch: java.lang.Throwable -> L90
            if (r1 == 0) goto L8f
            java.lang.String r1 = com.tkay.core.common.l.d.e(r7)     // Catch: java.lang.Throwable -> L90
            if (r1 == 0) goto L8f
            java.lang.String r7 = com.tkay.core.common.l.d.e(r7)     // Catch: java.lang.Throwable -> L90
            java.lang.String r2 = r8.replace(r0, r7)     // Catch: java.lang.Throwable -> L90
            goto L90
        L8f:
            r2 = r8
        L90:
            return r2
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.d.a.a(android.content.Context, java.lang.String):java.lang.String");
    }

    private boolean bn() {
        return this.i;
    }

    public final void B() {
        this.i = true;
    }

    private int bo() {
        return this.r;
    }

    private void J(int i) {
        this.r = i;
    }

    private int bp() {
        return this.s;
    }

    private void K(int i) {
        this.s = i;
    }

    private static boolean bq() {
        try {
            com.tkay.expressad.d.b.a();
            com.tkay.expressad.foundation.b.b.b().e();
            a aVarB = com.tkay.expressad.d.b.b();
            if (aVarB != null) {
                return aVarB.g;
            }
            return true;
        } catch (Exception e) {
            e.printStackTrace();
            return true;
        }
    }

    public final String C() {
        return this.aN;
    }

    private void o(String str) {
        this.aN = str;
    }

    public final String D() {
        return this.aO;
    }

    private void p(String str) {
        this.aO = str;
    }

    public final String E() {
        return this.aP;
    }

    private void q(String str) {
        this.aP = str;
    }

    private String br() {
        return this.aQ;
    }

    private void r(String str) {
        this.aQ = str;
    }

    public final String F() {
        return this.aR;
    }

    private void s(String str) {
        this.aR = str;
    }

    public final void G() {
        Locale.getDefault().getLanguage();
        if (!((TextUtils.isEmpty(this.aN) || TextUtils.isEmpty(this.aO) || TextUtils.isEmpty(this.aP) || TextUtils.isEmpty(this.aQ)) ? false : true)) {
            this.aN = "Confirm to close? ";
            this.aO = "You will not be rewarded after closing the window";
            this.aP = "Close it";
            this.aQ = "Continue";
        }
        if ((TextUtils.isEmpty(this.aN) || TextUtils.isEmpty(this.aO) || TextUtils.isEmpty(this.aP) || TextUtils.isEmpty(this.aR)) ? false : true) {
            return;
        }
        this.aN = "Confirm to close? ";
        this.aO = "You will not be rewarded after closing the window";
        this.aP = "Close it";
        this.aR = "Continue";
    }

    private boolean bs() {
        return (TextUtils.isEmpty(this.aN) || TextUtils.isEmpty(this.aO) || TextUtils.isEmpty(this.aP) || TextUtils.isEmpty(this.aQ)) ? false : true;
    }

    private boolean bt() {
        return (TextUtils.isEmpty(this.aN) || TextUtils.isEmpty(this.aO) || TextUtils.isEmpty(this.aP) || TextUtils.isEmpty(this.aR)) ? false : true;
    }

    private void L(int i) {
        this.aY = i;
    }

    private int bu() {
        return this.aY;
    }

    private int bv() {
        return this.aS;
    }

    private void M(int i) {
        this.aS = i;
    }

    private int bw() {
        return this.aT;
    }

    private void N(int i) {
        this.aT = i;
    }

    private int bx() {
        return this.aU;
    }

    private void O(int i) {
        this.aU = i;
    }

    private int by() {
        return this.aV;
    }

    private void P(int i) {
        this.aV = i;
    }

    private int bz() {
        return this.aW;
    }

    private void Q(int i) {
        this.aW = i;
    }

    private int bA() {
        return this.aX;
    }

    private void R(int i) {
        this.aX = i;
    }

    public final String H() {
        return this.aZ;
    }

    private void t(String str) {
        this.aZ = str;
    }

    public final String I() {
        return this.ba;
    }

    private void u(String str) {
        this.ba = str;
    }

    public final String J() {
        return this.bb;
    }

    private void v(String str) {
        this.bb = str;
    }

    private String bB() {
        return this.bc;
    }

    private void w(String str) {
        this.bc = str;
    }

    private String bC() {
        return this.bd;
    }

    private void x(String str) {
        this.bd = str;
    }

    private Map<String, C0434a> bD() {
        return this.be;
    }

    private void b(Map<String, C0434a> map) {
        this.be = map;
    }

    private boolean bE() {
        return (TextUtils.isEmpty(this.aZ) || TextUtils.isEmpty(this.bb) || TextUtils.isEmpty(this.ba)) ? false : true;
    }

    private static Map<String, C0434a> y(String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return null;
            }
            HashMap map = new HashMap();
            JSONObject jSONObject = new JSONObject(str);
            Iterator<String> itKeys = jSONObject.keys();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                C0434a c0434a = new C0434a();
                JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(next);
                if (jSONObjectOptJSONObject != null) {
                    c0434a.a(jSONObjectOptJSONObject);
                }
                map.put(next, c0434a);
            }
            return map;
        } catch (JSONException e) {
            if (com.tkay.expressad.b.f6449a) {
                e.printStackTrace();
            }
            return null;
        } catch (Exception e2) {
            if (com.tkay.expressad.b.f6449a) {
                e2.printStackTrace();
            }
            return null;
        }
    }

    private int bF() {
        return this.at;
    }

    private void S(int i) {
        this.at = i;
    }

    private int bG() {
        return this.au;
    }

    private void T(int i) {
        this.au = i;
    }

    private int bH() {
        return this.av;
    }

    private void U(int i) {
        this.av = i;
    }

    private int bI() {
        return this.aw;
    }

    private void V(int i) {
        this.aw = i;
    }

    private void W(int i) {
        this.ax = i;
    }

    private int bJ() {
        return this.ax;
    }

    private void b(boolean z) {
        this.O = z;
    }

    private boolean bK() {
        return this.O;
    }

    private void X(int i) {
        this.P = i;
    }

    private int bL() {
        return this.P;
    }

    private void c(boolean z) {
        this.Q = z;
    }

    private boolean bM() {
        return this.Q;
    }

    public final int K() {
        return this.bf;
    }

    private void Y(int i) {
        this.bf = i;
    }

    public final b L() {
        return this.bg;
    }

    private void a(b bVar) {
        this.bg = bVar;
    }

    public static class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private String f6456a;
        private String b;
        private String c;
        private JSONArray d;

        public static b a(JSONObject jSONObject) {
            if (jSONObject == null) {
                jSONObject = new JSONObject();
            }
            b bVar = new b();
            Context contextF = m.a().f();
            bVar.f6456a = jSONObject.optString("title", contextF.getString(i.a(contextF, "tkay_cm_feedback_dialog_title", i.g)));
            bVar.b = jSONObject.optString(com.tkay.expressad.d.a.b.dO, contextF.getString(i.a(contextF, "tkay_cm_feedback_dialog_close_close", i.g)));
            bVar.c = jSONObject.optString(com.tkay.expressad.d.a.b.dP, contextF.getString(i.a(contextF, "tkay_cm_feedback_dialog_close_submit", i.g)));
            JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("content");
            bVar.d = jSONArrayOptJSONArray;
            if (jSONArrayOptJSONArray == null) {
                JSONArray jSONArray = new JSONArray();
                bVar.d = jSONArray;
                jSONArray.put(contextF.getString(i.a(contextF, "tkay_cm_feedback_dialog_content_stuck", i.g)));
                bVar.d.put(contextF.getString(i.a(contextF, "tkay_cm_feedback_dialog_content_cnr", i.g)));
                bVar.d.put(contextF.getString(i.a(contextF, "tkay_cm_feedback_dialog_content_balck_screen", i.g)));
                bVar.d.put(contextF.getString(i.a(contextF, "tkay_cm_feedback_dialog_content_other", i.g)));
            }
            return bVar;
        }

        public final String a() {
            return this.f6456a;
        }

        private void a(String str) {
            this.f6456a = str;
        }

        public final String b() {
            return this.b;
        }

        private void b(String str) {
            this.b = str;
        }

        public final String c() {
            return this.c;
        }

        private void c(String str) {
            this.c = str;
        }

        public final JSONArray d() {
            return this.d;
        }

        private void a(JSONArray jSONArray) {
            this.d = jSONArray;
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.d.a$a, reason: collision with other inner class name */
    public static class C0434a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private List<String> f6455a;
        private List<String> b;
        private List<String> c;
        private List<String> d;

        private List<String> a() {
            return this.f6455a;
        }

        private void a(List<String> list) {
            this.f6455a = list;
        }

        private List<String> b() {
            return this.b;
        }

        private void b(List<String> list) {
            this.b = list;
        }

        private List<String> c() {
            return this.c;
        }

        private void c(List<String> list) {
            this.c = list;
        }

        private List<String> d() {
            return this.d;
        }

        private void d(List<String> list) {
            this.d = list;
        }

        public final void a(JSONObject jSONObject) {
            try {
                JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("x");
                if (jSONArrayOptJSONArray != null) {
                    this.f6455a = h.a(jSONArrayOptJSONArray);
                }
                JSONArray jSONArrayOptJSONArray2 = jSONObject.optJSONArray("y");
                if (jSONArrayOptJSONArray2 != null) {
                    this.b = h.a(jSONArrayOptJSONArray2);
                }
                JSONArray jSONArrayOptJSONArray3 = jSONObject.optJSONArray("width");
                if (jSONArrayOptJSONArray3 != null) {
                    this.c = h.a(jSONArrayOptJSONArray3);
                }
                JSONArray jSONArrayOptJSONArray4 = jSONObject.optJSONArray("height");
                if (jSONArrayOptJSONArray4 != null) {
                    this.d = h.a(jSONArrayOptJSONArray4);
                }
            } catch (Exception e) {
                if (com.tkay.expressad.b.f6449a) {
                    e.printStackTrace();
                }
            }
        }
    }

    private int bN() {
        return this.bh;
    }

    private void Z(int i) {
        this.bh = i;
    }

    private String bO() {
        return this.bi;
    }

    public final void c(String str) {
        this.bi = str;
    }

    private int bP() {
        return this.bj;
    }

    private void aa(int i) {
        this.bj = i;
    }

    private int bQ() {
        return this.bk;
    }

    private void ab(int i) {
        this.bk = i;
    }

    public final String M() {
        return this.bl;
    }

    private void z(String str) {
        this.bl = str;
    }

    private String bR() {
        return this.bm;
    }

    private void A(String str) {
        this.bm = str;
    }

    private int bS() {
        return this.bn;
    }

    public final void N() {
        this.bn = 0;
    }

    private boolean bT() {
        return this.bo;
    }

    public final void O() {
        this.bo = false;
    }

    public final int P() {
        return this.bp;
    }

    private void ac(int i) {
        this.bp = i;
    }

    private int bU() {
        return this.bq;
    }

    public final void Q() {
        this.bq = 1;
    }

    public final String R() {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put(com.tkay.expressad.d.a.b.h, this.b);
            jSONObject.put(com.tkay.expressad.d.a.b.l, this.c);
            jSONObject.put(com.tkay.expressad.d.a.b.m, this.d);
            jSONObject.put(com.tkay.expressad.d.a.b.p, this.f);
            jSONObject.put(com.tkay.expressad.d.a.b.w, this.g);
            jSONObject.put(com.tkay.expressad.d.a.b.o, this.i);
            jSONObject.put("plct", this.n);
            jSONObject.put(com.tkay.expressad.d.a.b.B, this.o);
            jSONObject.put(com.tkay.expressad.d.a.b.C, this.m);
            jSONObject.put(com.tkay.expressad.d.a.b.G, this.q);
            jSONObject.put("plctb", this.u);
            jSONObject.put(com.tkay.expressad.d.a.b.ab, this.aG);
            jSONObject.put(com.tkay.expressad.d.a.b.ac, this.aH);
            jSONObject.put(com.tkay.expressad.d.a.b.af, this.y);
            jSONObject.put(com.tkay.expressad.d.a.b.ag, this.z);
            jSONObject.put(com.tkay.expressad.d.a.b.i, this.J);
            jSONObject.put(com.tkay.expressad.d.a.b.j, this.K);
            jSONObject.put(com.tkay.expressad.d.a.b.k, this.L);
            jSONObject.put(com.tkay.expressad.d.a.b.ai, this.aK);
            jSONObject.put(com.tkay.expressad.d.a.b.aa, this.x);
            jSONObject.put(com.tkay.expressad.d.a.b.aG, this.F);
            jSONObject.put(com.tkay.expressad.d.a.b.aE, this.D);
            jSONObject.put(com.tkay.expressad.d.a.b.aF, this.E);
            jSONObject.put(com.tkay.expressad.d.a.b.ae, this.aJ);
            jSONObject.put(com.tkay.expressad.d.a.b.bn, this.aL);
            jSONObject.put(com.tkay.expressad.d.a.b.bv, this.aF);
            jSONObject.put("iex", this.I);
            jSONObject.put(com.tkay.expressad.d.a.b.ao, this.G);
            jSONObject.put(com.tkay.expressad.d.a.b.ap, this.H);
            jSONObject.put(com.tkay.expressad.d.a.b.at, this.aM);
            jSONObject.put(com.tkay.expressad.d.a.b.al, this.aE);
            jSONObject.put("pf", this.Y);
            jSONObject.put(com.tkay.expressad.d.a.b.aA, this.aa);
            jSONObject.put("pid", this.ae);
            jSONObject.put(com.tkay.expressad.d.a.b.ax, this.ab);
            jSONObject.put(com.tkay.expressad.d.a.b.ay, this.ac);
            jSONObject.put("delete", this.ad);
            jSONObject.put(com.tkay.expressad.d.a.b.ad, this.aI);
            jSONObject.put(com.tkay.expressad.d.a.b.bE, this.ah);
            jSONObject.put(com.tkay.expressad.d.a.b.bF, this.ag);
            jSONObject.put(com.tkay.expressad.d.a.b.bG, this.ai);
            jSONObject.put(com.tkay.expressad.d.a.b.bH, this.aj);
            jSONObject.put(com.tkay.expressad.d.a.b.bI, this.ak);
            jSONObject.put(com.tkay.expressad.d.a.b.bK, this.am);
            jSONObject.put(com.tkay.expressad.d.a.b.bJ, this.al);
            jSONObject.put(com.tkay.expressad.d.a.b.bV, this.an);
            jSONObject.put(com.tkay.expressad.d.a.b.bY, this.ap);
            jSONObject.put(com.tkay.expressad.d.a.b.cO, this.f6454a);
            jSONObject.put(com.tkay.expressad.d.a.b.cT, this.bi);
            jSONObject.put(com.tkay.expressad.d.a.b.di, this.W);
            jSONObject.put(com.tkay.expressad.d.a.b.dg, this.V);
            jSONObject.put(com.tkay.expressad.d.a.b.dw, this.bo);
            jSONObject.put(com.tkay.expressad.d.a.b.dt, this.bn);
            jSONObject.put("isDefault", this.bq);
            return jSONObject.toString();
        } catch (Throwable th) {
            th.getMessage();
            return null;
        }
    }

    public final int S() {
        return this.br;
    }

    private void ad(int i) {
        this.br = i;
    }

    public final int T() {
        return this.bs;
    }

    private void ae(int i) {
        this.bs = i;
    }

    public final int U() {
        return this.bt;
    }

    private void af(int i) {
        this.bt = i;
    }

    public final int V() {
        return this.bu;
    }

    private void ag(int i) {
        this.bu = i;
    }

    public final int W() {
        return this.bv;
    }

    private void ah(int i) {
        this.bv = i;
    }
}
