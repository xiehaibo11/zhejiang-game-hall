package com.tkay.core.common.f;

import android.text.TextUtils;
import java.util.ArrayList;
import java.util.List;

public abstract class z extends h<aa> {
    public static final int X = 1;
    public static final int Y = 2;
    public static final int Z = 3;
    public static final int aa = 4;
    public static final int ab = 5;
    public static final int ac = 6;
    private int R;
    private int S;
    long T;
    String U;
    String V;
    int W;
    private int a;
    String ad;
    String ae;
    ab af;
    int ag;
    String ah;
    long ai;
    long aj;
    long ak;
    String al = "";
    private String am;
    private String an;
    private String ao;
    private String ap;
    private String aq;
    private int ar;
    private int as;
    private int b;

    /* JADX WARN: Removed duplicated region for block: B:19:0x005c  */
    /* JADX WARN: Removed duplicated region for block: B:20:0x0062  */
    /* JADX WARN: Removed duplicated region for block: B:60:0x010f  */
    /* JADX WARN: Removed duplicated region for block: B:70:0x0137  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final List b(j jVar) {
        boolean z;
        aa aaVar = (aa) jVar;
        ArrayList arrayList = new ArrayList();
        StringBuffer stringBuffer = new StringBuffer();
        if (!TextUtils.equals(String.valueOf(aaVar.t()), "1")) {
            z = true;
        } else if (!g()) {
            if (!TextUtils.isEmpty(this.l)) {
                arrayList.add(this.l);
            }
            if (!TextUtils.isEmpty(this.o)) {
                arrayList.add(this.o);
            }
            if (!TextUtils.isEmpty(this.n)) {
                arrayList.add(this.n);
                z = true;
                if (!TextUtils.isEmpty(this.q)) {
                }
            } else {
                stringBuffer.append("full_u,");
                z = false;
                if (!TextUtils.isEmpty(this.q)) {
                }
            }
        } else {
            z = true;
            if (!TextUtils.isEmpty(this.q)) {
                arrayList.add(this.q);
            } else {
                stringBuffer.append("video_u,");
                z = false;
            }
        }
        if (TextUtils.equals(String.valueOf(aaVar.t()), "3")) {
            if (!g()) {
                if (!TextUtils.isEmpty(this.l)) {
                    arrayList.add(this.l);
                }
                if (!TextUtils.isEmpty(this.o)) {
                    arrayList.add(this.o);
                }
                if (!TextUtils.isEmpty(this.n)) {
                    arrayList.add(this.n);
                } else {
                    stringBuffer.append("full_u,");
                    z = false;
                }
            }
            if (E()) {
                arrayList.add(this.q);
            }
        }
        StringBuilder sb = new StringBuilder();
        sb.append(aaVar.t());
        if (TextUtils.equals(sb.toString(), "2")) {
            int i = this.W;
            if (i != 1) {
                if (i == 2) {
                    if (TextUtils.isEmpty(this.ad)) {
                        stringBuffer.append("img_list,");
                        z = false;
                    }
                    if (!TextUtils.isEmpty(this.o)) {
                        arrayList.add(this.o);
                    }
                } else {
                    if (i != 3) {
                        if (i == 4) {
                        }
                    } else if (TextUtils.equals(j.a, aaVar.r())) {
                        if (!TextUtils.isEmpty(this.l)) {
                            arrayList.add(this.l);
                        } else {
                            stringBuffer.append("icon_u,");
                            z = false;
                        }
                    } else if (!TextUtils.isEmpty(this.n)) {
                        arrayList.add(this.n);
                    } else {
                        stringBuffer.append("full_u,");
                        z = false;
                    }
                    if (!TextUtils.isEmpty(this.o)) {
                    }
                }
            } else if (!TextUtils.isEmpty(this.n)) {
                arrayList.add(this.n);
                if (!TextUtils.isEmpty(this.o)) {
                }
            } else {
                stringBuffer.append("full_u,");
                z = false;
                if (!TextUtils.isEmpty(this.o)) {
                }
            }
        }
        if (TextUtils.equals(String.valueOf(aaVar.t()), "4")) {
            if (1 != this.W && !TextUtils.isEmpty(this.l)) {
                arrayList.add(this.l);
            }
            if (!TextUtils.isEmpty(this.o)) {
                arrayList.add(this.o);
            }
            if (!TextUtils.isEmpty(this.n)) {
                arrayList.add(this.n);
            } else {
                stringBuffer.append("full_u,");
                z = false;
            }
        }
        if (z) {
            return arrayList;
        }
        this.al = stringBuffer.substring(0, stringBuffer.length() - 1);
        return null;
    }

    public final void a(long j) {
        this.ai = j;
    }

    public final void b(long j) {
        this.aj = j;
    }

    public final boolean N() {
        return System.currentTimeMillis() - this.aj > this.ai;
    }

    public final void c(long j) {
        this.ak = j;
    }

    public final long O() {
        return this.ak;
    }

    public final long P() {
        return this.ai;
    }

    public final String Q() {
        return this.am;
    }

    public final void E(String str) {
        this.am = str;
    }

    public final String R() {
        return this.an;
    }

    public final void F(String str) {
        this.an = str;
    }

    public final String S() {
        return this.ao;
    }

    public final void G(String str) {
        this.ao = str;
    }

    public final String T() {
        return this.ap;
    }

    public final void H(String str) {
        this.ap = str;
    }

    public final String U() {
        return this.aq;
    }

    public final void I(String str) {
        this.aq = str;
    }

    public final int V() {
        return this.ar;
    }

    public final void h(int i) {
        this.ar = i;
    }

    public final int W() {
        return this.as;
    }

    public final void i(int i) {
        this.as = i;
    }

    private int a() {
        return this.ag;
    }

    private void a(int i) {
        this.ag = i;
    }

    public final ab X() {
        return this.af;
    }

    public final void a(ab abVar) {
        this.af = abVar;
    }

    private long b() {
        return this.T;
    }

    public final void d(long j) {
        this.T = j;
    }

    private String c() {
        return this.U;
    }

    public final void J(String str) {
        this.U = str;
    }

    private String ab() {
        return this.V;
    }

    public final void K(String str) {
        this.V = str;
    }

    public final int Y() {
        return this.W;
    }

    public final void j(int i) {
        this.W = i;
    }

    public final String Z() {
        return this.ad;
    }

    public final void L(String str) {
        this.ad = str;
    }

    private String ac() {
        return this.ae;
    }

    public final void M(String str) {
        this.ae = str;
    }

    /* JADX WARN: Removed duplicated region for block: B:19:0x005a  */
    /* JADX WARN: Removed duplicated region for block: B:20:0x0060  */
    /* JADX WARN: Removed duplicated region for block: B:60:0x010d  */
    /* JADX WARN: Removed duplicated region for block: B:70:0x0135  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private List<String> a(aa aaVar) {
        boolean z;
        ArrayList arrayList = new ArrayList();
        StringBuffer stringBuffer = new StringBuffer();
        if (!TextUtils.equals(String.valueOf(aaVar.t()), "1")) {
            z = true;
        } else if (!g()) {
            if (!TextUtils.isEmpty(this.l)) {
                arrayList.add(this.l);
            }
            if (!TextUtils.isEmpty(this.o)) {
                arrayList.add(this.o);
            }
            if (!TextUtils.isEmpty(this.n)) {
                arrayList.add(this.n);
                z = true;
                if (!TextUtils.isEmpty(this.q)) {
                }
            } else {
                stringBuffer.append("full_u,");
                z = false;
                if (!TextUtils.isEmpty(this.q)) {
                }
            }
        } else {
            z = true;
            if (!TextUtils.isEmpty(this.q)) {
                arrayList.add(this.q);
            } else {
                stringBuffer.append("video_u,");
                z = false;
            }
        }
        if (TextUtils.equals(String.valueOf(aaVar.t()), "3")) {
            if (!g()) {
                if (!TextUtils.isEmpty(this.l)) {
                    arrayList.add(this.l);
                }
                if (!TextUtils.isEmpty(this.o)) {
                    arrayList.add(this.o);
                }
                if (!TextUtils.isEmpty(this.n)) {
                    arrayList.add(this.n);
                } else {
                    stringBuffer.append("full_u,");
                    z = false;
                }
            }
            if (E()) {
                arrayList.add(this.q);
            }
        }
        StringBuilder sb = new StringBuilder();
        sb.append(aaVar.t());
        if (TextUtils.equals(sb.toString(), "2")) {
            int i = this.W;
            if (i != 1) {
                if (i == 2) {
                    if (TextUtils.isEmpty(this.ad)) {
                        stringBuffer.append("img_list,");
                        z = false;
                    }
                    if (!TextUtils.isEmpty(this.o)) {
                        arrayList.add(this.o);
                    }
                } else {
                    if (i != 3) {
                        if (i == 4) {
                        }
                    } else if (TextUtils.equals(j.a, aaVar.r())) {
                        if (!TextUtils.isEmpty(this.l)) {
                            arrayList.add(this.l);
                        } else {
                            stringBuffer.append("icon_u,");
                            z = false;
                        }
                    } else if (!TextUtils.isEmpty(this.n)) {
                        arrayList.add(this.n);
                    } else {
                        stringBuffer.append("full_u,");
                        z = false;
                    }
                    if (!TextUtils.isEmpty(this.o)) {
                    }
                }
            } else if (!TextUtils.isEmpty(this.n)) {
                arrayList.add(this.n);
                if (!TextUtils.isEmpty(this.o)) {
                }
            } else {
                stringBuffer.append("full_u,");
                z = false;
                if (!TextUtils.isEmpty(this.o)) {
                }
            }
        }
        if (TextUtils.equals(String.valueOf(aaVar.t()), "4")) {
            if (1 != this.W && !TextUtils.isEmpty(this.l)) {
                arrayList.add(this.l);
            }
            if (!TextUtils.isEmpty(this.o)) {
                arrayList.add(this.o);
            }
            if (!TextUtils.isEmpty(this.n)) {
                arrayList.add(this.n);
            } else {
                stringBuffer.append("full_u,");
                z = false;
            }
        }
        if (z) {
            return arrayList;
        }
        this.al = stringBuffer.substring(0, stringBuffer.length() - 1);
        return null;
    }

    @Override
    public final String m() {
        return this.al;
    }

    public final String aa() {
        return this.ah;
    }

    public final void N(String str) {
        this.ah = str;
    }

    private int ad() {
        return this.a;
    }

    public final void k(int i) {
        this.a = i;
    }

    private int ae() {
        return this.b;
    }

    public final void l(int i) {
        this.b = i;
    }

    private int af() {
        return this.R;
    }

    public final void m(int i) {
        this.R = i;
    }

    private int ag() {
        return this.S;
    }

    public final void n(int i) {
        this.S = i;
    }

    public final boolean a(boolean z, boolean z2) {
        return z ? z2 ? this.a == 1 : this.b == 1 : z2 ? this.R == 1 : this.S == 1;
    }
}
