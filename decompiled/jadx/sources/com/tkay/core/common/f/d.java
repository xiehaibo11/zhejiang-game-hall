package com.tkay.core.common.f;

import android.text.TextUtils;
import com.tkay.core.api.TYRewardInfo;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class d extends ai implements Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f6152a = 1;
    public static final int b = 2;
    public static final int c = 3;
    public static final int d = 4;
    public static final int e = 5;
    public static final int f = 6;
    public static final int g = 7;
    public static final int h = 8;
    public static final int i = 0;
    public static final int j = 1;
    public static final int k = 2;
    public static final int l = 0;
    public static final int m = 1;
    public static final int n = 2;
    int A;
    int B;
    public String C;
    protected int D;
    protected int E;
    protected int F;
    protected int G;
    protected double H;
    boolean I;
    int J;
    String K;
    long L;
    long M;
    String N;
    private int aA;
    private String aB;
    private int aC;
    private int aE;
    private int aF;
    private boolean aG;
    private long aH;
    private long aI;
    private String aJ;
    private String aK;
    private String aL;
    private int aM;
    private String aO;
    private String aP;
    private double aQ;
    private String aR;
    private double aS;
    private double aT;
    private TYRewardInfo aU;
    private Map<String, TYRewardInfo> aV;
    private Map<String, Object> aW;
    private String aX;
    private long aY;
    private String aZ;
    private int aw;
    private String ax;
    private String ay;
    private int az;
    private String ba;
    private int bb;
    private int bc;
    private String bd;
    private long be;
    private int bf;
    private int bg;
    private int bh;
    private int bi;
    private long bj;
    private int bl;
    private int bm;
    private int bo;
    private String bp;
    private Map<String, Object> bq;
    protected int o;
    public int t;
    public String u;
    public String v;
    int w;
    protected double x;
    String y;
    public int z;
    private int aD = -1;
    public String p = "";
    public int q = 0;
    public int r = 0;
    public int s = 0;
    private String aN = "unknow";
    private int bk = -1;
    private int bn = 1;

    public final void a(Map<String, Object> map) {
        this.bq = map;
    }

    public final Map<String, Object> a() {
        return this.bq;
    }

    private double aa() {
        return this.H;
    }

    public final void a(double d2) {
        this.H = d2;
    }

    public final void a(String str) {
        this.bp = str;
    }

    public final void a(int i2) {
        this.bl = i2;
    }

    public final void b(int i2) {
        this.bm = i2;
    }

    public final void a(long j2) {
        this.bj = j2;
    }

    public final void c(int i2) {
        this.bi = i2;
    }

    private int ab() {
        return this.bh;
    }

    public final void d(int i2) {
        this.bh = i2;
    }

    private int ac() {
        return this.bg;
    }

    public final void e(int i2) {
        this.bg = i2;
    }

    public final int b() {
        return this.bf;
    }

    public final void f(int i2) {
        this.bf = i2;
    }

    public final void b(String str) {
        this.bd = str;
    }

    public final void b(long j2) {
        this.be = j2;
    }

    public final void c() {
        this.bc = 1;
    }

    public final void d() {
        if (this.bc != 1) {
            this.bb = 1;
        }
    }

    public final void c(String str) {
        this.ba = str;
    }

    public final String e() {
        return this.ba;
    }

    public final double f() {
        return this.aT;
    }

    public final void b(double d2) {
        this.aT = d2;
    }

    public final double g() {
        return this.aQ;
    }

    public final void c(double d2) {
        this.aQ = d2;
    }

    public final String h() {
        return this.aR;
    }

    public final void d(String str) {
        this.aR = str;
    }

    public final String i() {
        return this.aX;
    }

    public final void e(String str) {
        this.aX = str;
    }

    public final String j() {
        return this.y;
    }

    public final void f(String str) {
        this.y = str;
    }

    public final void g(int i2) {
        this.D = i2;
    }

    public final void h(int i2) {
        this.E = i2;
    }

    public final void i(int i2) {
        this.F = i2;
    }

    public final void j(int i2) {
        this.G = i2;
    }

    public final String k() {
        return this.aK;
    }

    public final void g(String str) {
        this.aK = str;
    }

    public final String l() {
        return this.aL;
    }

    public final void h(String str) {
        this.aL = str;
    }

    public final int m() {
        return this.aM;
    }

    public final void k(int i2) {
        this.aM = i2;
    }

    public final String n() {
        return this.aN;
    }

    public final void i(String str) {
        this.aN = str;
    }

    public final String o() {
        return this.aO;
    }

    public final void j(String str) {
        this.aO = str;
    }

    public final String p() {
        return this.aP;
    }

    public final void k(String str) {
        this.aP = str;
    }

    public final Map<String, TYRewardInfo> q() {
        return this.aV;
    }

    public final void b(Map<String, TYRewardInfo> map) {
        this.aV = map;
    }

    public final TYRewardInfo r() {
        return this.aU;
    }

    public final void a(TYRewardInfo tYRewardInfo) {
        this.aU = tYRewardInfo;
    }

    public final Map<String, Object> s() {
        return this.aW;
    }

    public final void c(Map<String, Object> map) {
        this.aW = map;
    }

    private String ad() {
        return this.C;
    }

    private void A(String str) {
        this.C = str;
    }

    public final int t() {
        return this.A;
    }

    public final void l(int i2) {
        this.A = i2;
    }

    public final int u() {
        return this.B;
    }

    public final void m(int i2) {
        this.B = i2;
    }

    private int ae() {
        return this.z;
    }

    private void af() {
        this.z = 1;
    }

    public final int v() {
        return this.w;
    }

    public final void n(int i2) {
        this.w = i2;
    }

    public final double w() {
        return this.x;
    }

    public final void d(double d2) {
        this.x = d2;
    }

    private String ag() {
        return this.u;
    }

    private void B(String str) {
        this.u = str;
    }

    public final String x() {
        return this.aJ;
    }

    public final void l(String str) {
        this.aJ = str;
    }

    private boolean ah() {
        return this.bi == 9;
    }

    public final int y() {
        int i2 = this.bi;
        if (i2 != 8) {
            return i2 != 9 ? 0 : 1;
        }
        return 2;
    }

    private void b(boolean z) {
        this.aG = z;
    }

    public final int z() {
        return this.aE;
    }

    public final void o(int i2) {
        this.aE = i2;
    }

    public final int A() {
        return this.aF;
    }

    public final void p(int i2) {
        this.aF = i2;
    }

    public final int B() {
        return this.az;
    }

    public final void q(int i2) {
        this.az = i2;
    }

    public final int C() {
        return this.aA;
    }

    public final void r(int i2) {
        this.aA = i2;
    }

    public final String D() {
        return this.aB;
    }

    public final void m(String str) {
        this.aB = str;
    }

    public final int E() {
        return this.aC;
    }

    public final void s(int i2) {
        this.aC = i2;
    }

    public final int F() {
        return this.aD;
    }

    public final void t(int i2) {
        this.aD = i2;
    }

    public final String G() {
        return this.ay;
    }

    public final void n(String str) {
        this.ay = str;
    }

    public final int H() {
        return this.o;
    }

    public final void u(int i2) {
        this.o = i2;
    }

    private String ai() {
        return this.ax;
    }

    public final void o(String str) {
        this.ax = str;
    }

    public final int I() {
        return this.aw;
    }

    public final void v(int i2) {
        this.aw = i2;
    }

    private void C(String str) {
        this.v = str;
    }

    public final void p(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        this.p = str;
    }

    private String aj() {
        return this.p;
    }

    private void F(int i2) {
        this.q = i2;
    }

    private int ak() {
        return this.q;
    }

    private void G(int i2) {
        this.r = i2;
    }

    private int al() {
        return this.r;
    }

    private void H(int i2) {
        this.s = i2;
    }

    public final long J() {
        return this.aH;
    }

    public final void c(long j2) {
        this.aH = j2;
    }

    public final void d(long j2) {
        this.aI = j2;
    }

    public final long K() {
        return this.aI;
    }

    private int am() {
        return this.t;
    }

    private void I(int i2) {
        this.t = i2;
    }

    public final void q(String str) {
        this.aZ = str;
    }

    public final int L() {
        return this.bk;
    }

    public final void w(int i2) {
        this.bk = i2;
    }

    public final void x(int i2) {
        this.bn = i2;
    }

    public final int M() {
        return this.bo;
    }

    public final void y(int i2) {
        this.bo = i2;
    }

    private boolean an() {
        return this.I;
    }

    public final void a(boolean z) {
        this.I = z;
    }

    private int ao() {
        return this.J;
    }

    public final void z(int i2) {
        this.J = i2;
    }

    private String ap() {
        return this.K;
    }

    public final void r(String str) {
        this.K = str;
    }

    private long aq() {
        return this.L;
    }

    public final void e(long j2) {
        this.L = j2;
    }

    private long ar() {
        return this.M;
    }

    public final void f(long j2) {
        this.M = j2;
    }

    private String as() {
        return this.N;
    }

    public final void s(String str) {
        this.N = str;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:36:0x00f4  */
    /* JADX WARN: Removed duplicated region for block: B:37:0x00f7 A[Catch: Exception -> 0x0378, TryCatch #0 {Exception -> 0x0378, blocks: (B:3:0x0008, B:5:0x0014, B:6:0x001b, B:8:0x0023, B:9:0x002a, B:11:0x0034, B:26:0x0086, B:27:0x008d, B:28:0x00a0, B:29:0x00a8, B:33:0x00bf, B:32:0x00b8, B:34:0x00c4, B:38:0x00fe, B:41:0x0113, B:43:0x0117, B:44:0x011b, B:46:0x011f, B:48:0x0123, B:50:0x012d, B:53:0x013b, B:55:0x014a, B:56:0x014f, B:51:0x0132, B:52:0x0137, B:37:0x00f7, B:57:0x0165, B:63:0x0182, B:62:0x017b, B:64:0x0192, B:68:0x01bc, B:67:0x01b5, B:69:0x01c1, B:72:0x01d0, B:73:0x01e9, B:75:0x021c, B:76:0x0223, B:81:0x028a, B:83:0x02cb, B:84:0x02d0, B:86:0x02eb, B:78:0x025c, B:80:0x0283, B:87:0x02f4, B:88:0x0345, B:22:0x004c), top: B:93:0x0008 }] */
    /* JADX WARN: Removed duplicated region for block: B:55:0x014a A[Catch: Exception -> 0x0378, TryCatch #0 {Exception -> 0x0378, blocks: (B:3:0x0008, B:5:0x0014, B:6:0x001b, B:8:0x0023, B:9:0x002a, B:11:0x0034, B:26:0x0086, B:27:0x008d, B:28:0x00a0, B:29:0x00a8, B:33:0x00bf, B:32:0x00b8, B:34:0x00c4, B:38:0x00fe, B:41:0x0113, B:43:0x0117, B:44:0x011b, B:46:0x011f, B:48:0x0123, B:50:0x012d, B:53:0x013b, B:55:0x014a, B:56:0x014f, B:51:0x0132, B:52:0x0137, B:37:0x00f7, B:57:0x0165, B:63:0x0182, B:62:0x017b, B:64:0x0192, B:68:0x01bc, B:67:0x01b5, B:69:0x01c1, B:72:0x01d0, B:73:0x01e9, B:75:0x021c, B:76:0x0223, B:81:0x028a, B:83:0x02cb, B:84:0x02d0, B:86:0x02eb, B:78:0x025c, B:80:0x0283, B:87:0x02f4, B:88:0x0345, B:22:0x004c), top: B:93:0x0008 }] */
    /* JADX WARN: Removed duplicated region for block: B:83:0x02cb A[Catch: Exception -> 0x0378, TryCatch #0 {Exception -> 0x0378, blocks: (B:3:0x0008, B:5:0x0014, B:6:0x001b, B:8:0x0023, B:9:0x002a, B:11:0x0034, B:26:0x0086, B:27:0x008d, B:28:0x00a0, B:29:0x00a8, B:33:0x00bf, B:32:0x00b8, B:34:0x00c4, B:38:0x00fe, B:41:0x0113, B:43:0x0117, B:44:0x011b, B:46:0x011f, B:48:0x0123, B:50:0x012d, B:53:0x013b, B:55:0x014a, B:56:0x014f, B:51:0x0132, B:52:0x0137, B:37:0x00f7, B:57:0x0165, B:63:0x0182, B:62:0x017b, B:64:0x0192, B:68:0x01bc, B:67:0x01b5, B:69:0x01c1, B:72:0x01d0, B:73:0x01e9, B:75:0x021c, B:76:0x0223, B:81:0x028a, B:83:0x02cb, B:84:0x02d0, B:86:0x02eb, B:78:0x025c, B:80:0x0283, B:87:0x02f4, B:88:0x0345, B:22:0x004c), top: B:93:0x0008 }] */
    /* JADX WARN: Removed duplicated region for block: B:86:0x02eb A[Catch: Exception -> 0x0378, TryCatch #0 {Exception -> 0x0378, blocks: (B:3:0x0008, B:5:0x0014, B:6:0x001b, B:8:0x0023, B:9:0x002a, B:11:0x0034, B:26:0x0086, B:27:0x008d, B:28:0x00a0, B:29:0x00a8, B:33:0x00bf, B:32:0x00b8, B:34:0x00c4, B:38:0x00fe, B:41:0x0113, B:43:0x0117, B:44:0x011b, B:46:0x011f, B:48:0x0123, B:50:0x012d, B:53:0x013b, B:55:0x014a, B:56:0x014f, B:51:0x0132, B:52:0x0137, B:37:0x00f7, B:57:0x0165, B:63:0x0182, B:62:0x017b, B:64:0x0192, B:68:0x01bc, B:67:0x01b5, B:69:0x01c1, B:72:0x01d0, B:73:0x01e9, B:75:0x021c, B:76:0x0223, B:81:0x028a, B:83:0x02cb, B:84:0x02d0, B:86:0x02eb, B:78:0x025c, B:80:0x0283, B:87:0x02f4, B:88:0x0345, B:22:0x004c), top: B:93:0x0008 }] */
    @Override // com.tkay.core.common.f.ai
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final org.json.JSONObject A(int r23) {
        /*
            Method dump skipped, instruction units count: 938
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.f.d.A(int):org.json.JSONObject");
    }

    private void a(int i2, JSONObject jSONObject) {
        if (i2 == 1 || i2 == 2 || i2 == 4 || i2 == 6 || i2 == 13) {
            jSONObject.put("extra", this.aZ);
        }
    }

    private JSONObject J(int i2) {
        return super.A(i2);
    }

    public final d N() {
        try {
            d dVar = (d) super.clone();
            dVar.aU = this.aU;
            dVar.bq = this.bq;
            dVar.aV = this.aV;
            dVar.aW = this.aW;
            return dVar;
        } catch (Throwable unused) {
            return this;
        }
    }
}
