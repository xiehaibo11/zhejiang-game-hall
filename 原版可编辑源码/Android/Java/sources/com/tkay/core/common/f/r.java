package com.tkay.core.common.f;

import android.text.TextUtils;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.json.JSONObject;

public final class r extends h<t> {
    public static final int a = 1;
    public static final int b = 2;
    public int R;
    public long S;
    String T = "";
    private String U;
    private String V;
    private String W;
    private String X;
    private String Y;
    private String Z;
    private String aa;
    private String ab;
    private String ac;
    private String ad;
    private long ae;
    private int af;
    private String ag;
    private String ah;
    private String ai;
    private String aj;
    private String ak;

    @Override
    public final int d() {
        return 1;
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:48:0x00d0  */
    /* JADX WARN: Removed duplicated region for block: B:53:0x00e1  */
    /* JADX WARN: Removed duplicated region for block: B:56:0x00f1  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final List b(j jVar) {
        boolean z;
        boolean z2;
        t tVar = (t) jVar;
        ArrayList arrayList = new ArrayList();
        StringBuffer stringBuffer = new StringBuffer();
        TextUtils.equals(String.valueOf(tVar.t()), "0");
        if (TextUtils.equals(String.valueOf(tVar.t()), "2")) {
            String strR = tVar.r();
            byte b2 = -1;
            switch (strR.hashCode()) {
                case -559799608:
                    if (strR.equals(j.c)) {
                        b2 = 1;
                    }
                    break;
                case 1507809730:
                    if (strR.equals(j.a)) {
                        b2 = 3;
                    }
                    break;
                case 1507809854:
                    if (strR.equals(j.b)) {
                        b2 = 0;
                    }
                    break;
                case 1622564786:
                    if (strR.equals(j.d)) {
                        b2 = 2;
                    }
                    break;
            }
            if (b2 != 0) {
                if (b2 != 1) {
                    if (b2 == 2) {
                        if (!TextUtils.isEmpty(this.aj)) {
                            arrayList.add(this.aj);
                            z2 = true;
                            z = z2;
                            if (!z2) {
                            }
                            if (!z) {
                            }
                            if (!TextUtils.isEmpty(this.o)) {
                            }
                        } else {
                            if (!TextUtils.isEmpty(this.n)) {
                                arrayList.add(this.n);
                                z = true;
                                z2 = false;
                                if (!z2) {
                                }
                                if (!z) {
                                }
                                if (!TextUtils.isEmpty(this.o)) {
                                }
                            }
                            z2 = false;
                            z = z2;
                            if (!z2) {
                            }
                            if (!z) {
                            }
                            if (!TextUtils.isEmpty(this.o)) {
                            }
                        }
                    } else {
                        if (!TextUtils.isEmpty(this.ag)) {
                            arrayList.add(this.ag);
                            z2 = true;
                            z = z2;
                            if (!z2) {
                                if (TextUtils.isEmpty(this.l)) {
                                    z = false;
                                } else {
                                    arrayList.add(this.l);
                                }
                            }
                            if (!z) {
                                stringBuffer.append(strR);
                                stringBuffer.append(" url,");
                            }
                            if (!TextUtils.isEmpty(this.o)) {
                                arrayList.add(this.o);
                            }
                        }
                        z = true;
                        z2 = false;
                        if (!z2) {
                        }
                        if (!z) {
                        }
                        if (!TextUtils.isEmpty(this.o)) {
                        }
                    }
                } else if (!TextUtils.isEmpty(this.ai)) {
                    arrayList.add(this.ai);
                    z2 = true;
                    z = z2;
                    if (!z2) {
                    }
                    if (!z) {
                    }
                    if (!TextUtils.isEmpty(this.o)) {
                    }
                } else {
                    if (!TextUtils.isEmpty(this.n)) {
                        arrayList.add(this.n);
                        z = true;
                        z2 = false;
                        if (!z2) {
                        }
                        if (!z) {
                        }
                        if (!TextUtils.isEmpty(this.o)) {
                        }
                    }
                    z2 = false;
                    z = z2;
                    if (!z2) {
                    }
                    if (!z) {
                    }
                    if (!TextUtils.isEmpty(this.o)) {
                    }
                }
            } else if (!TextUtils.isEmpty(this.ah)) {
                arrayList.add(this.ah);
                z2 = true;
                z = z2;
                if (!z2) {
                }
                if (!z) {
                }
                if (!TextUtils.isEmpty(this.o)) {
                }
            } else {
                if (!TextUtils.isEmpty(this.n)) {
                    arrayList.add(this.n);
                    z = true;
                    z2 = false;
                    if (!z2) {
                    }
                    if (!z) {
                    }
                    if (!TextUtils.isEmpty(this.o)) {
                    }
                }
                z2 = false;
                z = z2;
                if (!z2) {
                }
                if (!z) {
                }
                if (!TextUtils.isEmpty(this.o)) {
                }
            }
        } else {
            z = true;
        }
        if (TextUtils.equals(String.valueOf(tVar.t()), "1")) {
            if (!TextUtils.isEmpty(this.l)) {
                arrayList.add(this.l);
            } else {
                stringBuffer.append("icon_u,");
                z = false;
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
            if (!TextUtils.isEmpty(this.q)) {
                arrayList.add(this.q);
            } else {
                stringBuffer.append("video_u,");
                z = false;
            }
        }
        StringBuilder sb = new StringBuilder();
        sb.append(tVar.t());
        if (TextUtils.equals(sb.toString(), "3")) {
            if (!TextUtils.isEmpty(this.l)) {
                arrayList.add(this.l);
            } else {
                stringBuffer.append("icon_u,");
                z = false;
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
            if (this.v == 1) {
                if (!TextUtils.isEmpty(this.q)) {
                    arrayList.add(this.q);
                } else {
                    stringBuffer.append("video_u,");
                    z = false;
                }
            }
        }
        if (TextUtils.equals(String.valueOf(tVar.t()), "4")) {
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
        this.T = stringBuffer.substring(0, stringBuffer.length() - 1);
        return null;
    }

    private String Z() {
        return this.ak;
    }

    public final void a(String str) {
        this.ak = str;
    }

    public final String a() {
        return this.ag;
    }

    public final void b(String str) {
        this.ag = str;
    }

    public final String b() {
        return this.ah;
    }

    public final void E(String str) {
        this.ah = str;
    }

    public final String c() {
        return this.ai;
    }

    public final void F(String str) {
        this.ai = str;
    }

    public final String N() {
        return this.aj;
    }

    public final void G(String str) {
        this.aj = str;
    }

    public final int O() {
        return this.af;
    }

    public final void a(int i) {
        this.af = i;
    }

    public final String P() {
        return this.U;
    }

    public final void H(String str) {
        this.U = str;
    }

    public final String Q() {
        return this.V;
    }

    public final void I(String str) {
        this.V = str;
    }

    public final String R() {
        return this.W;
    }

    public final void J(String str) {
        this.W = str;
    }

    public final String S() {
        return this.X;
    }

    public final void K(String str) {
        this.X = str;
    }

    public final String T() {
        return this.Y;
    }

    public final void L(String str) {
        this.Y = str;
    }

    public final String U() {
        return this.Z;
    }

    public final void M(String str) {
        this.Z = str;
    }

    public final String V() {
        return this.aa;
    }

    public final void N(String str) {
        this.aa = str;
    }

    public final String W() {
        return this.ab;
    }

    public final void O(String str) {
        this.ab = str;
    }

    public final String X() {
        return this.ac;
    }

    public final void P(String str) {
        this.ac = str;
    }

    public final String Y() {
        return this.ad;
    }

    public final void Q(String str) {
        this.ad = str;
    }

    private int aa() {
        return this.R;
    }

    private void g(int i) {
        this.R = i;
    }

    private long ab() {
        return this.S;
    }

    private void b(long j) {
        this.S = j;
    }

    private long ac() {
        return this.ae;
    }

    public final void a(long j) {
        this.ae = j;
    }

    public final boolean a(t tVar) {
        return tVar == null || System.currentTimeMillis() - this.ae > tVar.A();
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:48:0x00ce  */
    /* JADX WARN: Removed duplicated region for block: B:53:0x00df  */
    /* JADX WARN: Removed duplicated region for block: B:56:0x00ef  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private List<String> b(t tVar) {
        boolean z;
        boolean z2;
        ArrayList arrayList = new ArrayList();
        StringBuffer stringBuffer = new StringBuffer();
        TextUtils.equals(String.valueOf(tVar.t()), "0");
        if (TextUtils.equals(String.valueOf(tVar.t()), "2")) {
            String strR = tVar.r();
            byte b2 = -1;
            switch (strR.hashCode()) {
                case -559799608:
                    if (strR.equals(j.c)) {
                        b2 = 1;
                    }
                    break;
                case 1507809730:
                    if (strR.equals(j.a)) {
                        b2 = 3;
                    }
                    break;
                case 1507809854:
                    if (strR.equals(j.b)) {
                        b2 = 0;
                    }
                    break;
                case 1622564786:
                    if (strR.equals(j.d)) {
                        b2 = 2;
                    }
                    break;
            }
            if (b2 != 0) {
                if (b2 != 1) {
                    if (b2 == 2) {
                        if (!TextUtils.isEmpty(this.aj)) {
                            arrayList.add(this.aj);
                            z2 = true;
                            z = z2;
                            if (!z2) {
                            }
                            if (!z) {
                            }
                            if (!TextUtils.isEmpty(this.o)) {
                            }
                        } else {
                            if (!TextUtils.isEmpty(this.n)) {
                                arrayList.add(this.n);
                                z = true;
                                z2 = false;
                                if (!z2) {
                                }
                                if (!z) {
                                }
                                if (!TextUtils.isEmpty(this.o)) {
                                }
                            }
                            z2 = false;
                            z = z2;
                            if (!z2) {
                            }
                            if (!z) {
                            }
                            if (!TextUtils.isEmpty(this.o)) {
                            }
                        }
                    } else {
                        if (!TextUtils.isEmpty(this.ag)) {
                            arrayList.add(this.ag);
                            z2 = true;
                            z = z2;
                            if (!z2) {
                                if (TextUtils.isEmpty(this.l)) {
                                    z = false;
                                } else {
                                    arrayList.add(this.l);
                                }
                            }
                            if (!z) {
                                stringBuffer.append(strR);
                                stringBuffer.append(" url,");
                            }
                            if (!TextUtils.isEmpty(this.o)) {
                                arrayList.add(this.o);
                            }
                        }
                        z = true;
                        z2 = false;
                        if (!z2) {
                        }
                        if (!z) {
                        }
                        if (!TextUtils.isEmpty(this.o)) {
                        }
                    }
                } else if (!TextUtils.isEmpty(this.ai)) {
                    arrayList.add(this.ai);
                    z2 = true;
                    z = z2;
                    if (!z2) {
                    }
                    if (!z) {
                    }
                    if (!TextUtils.isEmpty(this.o)) {
                    }
                } else {
                    if (!TextUtils.isEmpty(this.n)) {
                        arrayList.add(this.n);
                        z = true;
                        z2 = false;
                        if (!z2) {
                        }
                        if (!z) {
                        }
                        if (!TextUtils.isEmpty(this.o)) {
                        }
                    }
                    z2 = false;
                    z = z2;
                    if (!z2) {
                    }
                    if (!z) {
                    }
                    if (!TextUtils.isEmpty(this.o)) {
                    }
                }
            } else if (!TextUtils.isEmpty(this.ah)) {
                arrayList.add(this.ah);
                z2 = true;
                z = z2;
                if (!z2) {
                }
                if (!z) {
                }
                if (!TextUtils.isEmpty(this.o)) {
                }
            } else {
                if (!TextUtils.isEmpty(this.n)) {
                    arrayList.add(this.n);
                    z = true;
                    z2 = false;
                    if (!z2) {
                    }
                    if (!z) {
                    }
                    if (!TextUtils.isEmpty(this.o)) {
                    }
                }
                z2 = false;
                z = z2;
                if (!z2) {
                }
                if (!z) {
                }
                if (!TextUtils.isEmpty(this.o)) {
                }
            }
        } else {
            z = true;
        }
        if (TextUtils.equals(String.valueOf(tVar.t()), "1")) {
            if (!TextUtils.isEmpty(this.l)) {
                arrayList.add(this.l);
            } else {
                stringBuffer.append("icon_u,");
                z = false;
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
            if (!TextUtils.isEmpty(this.q)) {
                arrayList.add(this.q);
            } else {
                stringBuffer.append("video_u,");
                z = false;
            }
        }
        StringBuilder sb = new StringBuilder();
        sb.append(tVar.t());
        if (TextUtils.equals(sb.toString(), "3")) {
            if (!TextUtils.isEmpty(this.l)) {
                arrayList.add(this.l);
            } else {
                stringBuffer.append("icon_u,");
                z = false;
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
            if (this.v == 1) {
                if (!TextUtils.isEmpty(this.q)) {
                    arrayList.add(this.q);
                } else {
                    stringBuffer.append("video_u,");
                    z = false;
                }
            }
        }
        if (TextUtils.equals(String.valueOf(tVar.t()), "4")) {
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
        this.T = stringBuffer.substring(0, stringBuffer.length() - 1);
        return null;
    }

    @Override
    public final String m() {
        return this.T;
    }

    public final String R(String str) {
        try {
            JSONObject jSONObject = new JSONObject(this.ak);
            Iterator<String> itKeys = jSONObject.keys();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                str = str.replaceAll("\\{" + next + "\\}", jSONObject.optString(next));
            }
        } catch (Throwable unused) {
        }
        return str;
    }
}
