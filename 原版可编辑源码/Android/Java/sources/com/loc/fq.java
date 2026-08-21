package com.loc;

import android.content.Context;
import android.content.SharedPreferences;
import android.os.Build;
import android.text.TextUtils;
import com.loc.m;
import com.mbridge.msdk.foundation.download.core.DownloadCommon;
import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONObject;

public final class fq {
    private static volatile boolean i = false;
    private static boolean j = true;
    private static int k = 1000;
    private static int l = 200;
    private static boolean m = false;
    private static int n = 20;
    private static int o = 0;
    private static volatile int p = 0;
    private static boolean q = true;
    private static boolean r = false;
    private static int s = -1;
    private static long t;
    private static ArrayList<String> u = new ArrayList<>();
    private static ArrayList<String> v = new ArrayList<>();
    private static volatile boolean w = false;
    private static boolean x = true;
    private static long y = 300000;
    private static boolean z = false;
    private static double A = 0.618d;
    private static boolean B = true;
    private static int C = 80;
    private static int D = 5;
    static long a = 3600000;
    private static boolean E = false;
    private static boolean F = true;
    private static boolean G = false;
    public static volatile long b = 0;
    static boolean c = false;
    private static boolean H = true;
    private static long I = -1;
    private static boolean J = true;
    private static int K = 1;
    private static boolean L = false;
    private static int M = 5;
    private static boolean N = false;
    private static String O = "CMjAzLjEwNy4xLjEvMTU0MDgxL2Q";
    private static long P = 0;
    public static boolean d = false;
    public static boolean e = false;
    public static int f = 20480;
    public static int g = 10800000;
    public static boolean h = false;

    public static void a(final Context context) {
        if (i) {
            return;
        }
        i = true;
        m.a(context, fr.c(), fr.d(), new m.a() {
            @Override
            public final void a(m.b bVar) {
                fq.a(context, bVar);
            }
        });
    }

    private static void a(Context context, JSONObject jSONObject, SharedPreferences.Editor editor) {
        try {
            JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("13S");
            if (jSONObjectOptJSONObject != null) {
                try {
                    long jOptInt = jSONObjectOptJSONObject.optInt("at", com.tkay.expressad.video.module.a.a.N) * 60 * 1000;
                    a = jOptInt;
                    fy.a(editor, "13S_at", jOptInt);
                } catch (Throwable th) {
                    fr.a(th, "AuthUtil", "requestSdkAuthInterval");
                }
                e(jSONObjectOptJSONObject, editor);
                try {
                    boolean zA = m.a(jSONObjectOptJSONObject.optString("nla"), true);
                    F = zA;
                    fy.a(editor, "13S_nla", zA);
                } catch (Throwable unused) {
                }
                try {
                    boolean zA2 = m.a(jSONObjectOptJSONObject.optString("asw"), true);
                    H = zA2;
                    fy.a(editor, "asw", zA2);
                } catch (Throwable unused2) {
                }
                try {
                    JSONArray jSONArrayOptJSONArray = jSONObjectOptJSONObject.optJSONArray("mlpl");
                    if (jSONArrayOptJSONArray == null || jSONArrayOptJSONArray.length() <= 0 || context == null) {
                        G = false;
                        fy.a(editor, "13S_mlpl");
                    } else {
                        fy.a(editor, "13S_mlpl", x.b(jSONArrayOptJSONArray.toString()));
                        G = a(context, jSONArrayOptJSONArray);
                    }
                } catch (Throwable unused3) {
                }
            }
        } catch (Throwable th2) {
            fr.a(th2, "AuthUtil", "loadConfigAbleStatus");
        }
    }

    private static void a(m.b bVar, SharedPreferences.Editor editor) {
        try {
            m.b.a aVar = bVar.g;
            if (aVar != null) {
                boolean z2 = aVar.a;
                j = z2;
                fy.a(editor, com.tkay.expressad.foundation.d.f.i, z2);
                JSONObject jSONObject = aVar.c;
                if (jSONObject != null) {
                    k = jSONObject.optInt("fn", k);
                    int iOptInt = jSONObject.optInt("mpn", l);
                    l = iOptInt;
                    if (iOptInt > 500) {
                        l = 500;
                    }
                    if (l < 30) {
                        l = 30;
                    }
                    m = m.a(jSONObject.optString("igu"), false);
                    n = jSONObject.optInt("ms", n);
                    p = jSONObject.optInt("rot", 0);
                    o = jSONObject.optInt("pms", 0);
                }
                by.a(k, m, n, o);
                ca.a(m, o);
                fy.a(editor, "fn", k);
                fy.a(editor, "mpn", l);
                fy.a(editor, "igu", m);
                fy.a(editor, "ms", n);
                fy.a(editor, "rot", p);
                fy.a(editor, "pms", o);
            }
        } catch (Throwable th) {
            fr.a(th, "AuthUtil", "loadConfigDataUploadException");
        }
    }

    private static void a(JSONObject jSONObject, SharedPreferences.Editor editor) {
        try {
            JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("11G");
            if (jSONObjectOptJSONObject != null) {
                boolean zA = m.a(jSONObjectOptJSONObject.optString("able"), true);
                x = zA;
                if (zA) {
                    y = jSONObjectOptJSONObject.optInt("c", 300) * 1000;
                }
                z = m.a(jSONObjectOptJSONObject.optString("fa"), false);
                A = Math.min(1.0d, Math.max(0.2d, jSONObjectOptJSONObject.optDouble("ms", 0.618d)));
                fy.a(editor, DownloadCommon.DOWNLOAD_REPORT_CANCEL, x);
                fy.a(editor, com.tkay.expressad.d.a.b.dx, y);
                fy.a(editor, "11G_fa", z);
                fy.a(editor, "11G_ms", String.valueOf(A));
            }
        } catch (Throwable th) {
            fr.a(th, "AuthUtil", "loadConfigDataCacheAble");
        }
    }

    public static boolean a() {
        return j;
    }

    public static boolean a(long j2) {
        if (!x) {
            return false;
        }
        long jA = fz.a() - j2;
        long j3 = y;
        return j3 < 0 || jA < j3;
    }

    static boolean a(Context context, m.b bVar) {
        SharedPreferences.Editor editorA;
        try {
            editorA = fy.a(context, "pref");
        } catch (Throwable unused) {
            editorA = null;
        }
        try {
            a(bVar, editorA);
            c(context);
            JSONObject jSONObject = bVar.f;
            if (jSONObject == null) {
                if (editorA != null) {
                    try {
                        fy.a(editorA);
                    } catch (Throwable unused2) {
                    }
                }
                return true;
            }
            a(context, jSONObject, editorA);
            a(jSONObject, editorA);
            d(jSONObject, editorA);
            f(jSONObject, editorA);
            h(jSONObject, editorA);
            g(jSONObject, editorA);
            i(jSONObject, editorA);
            b(jSONObject, editorA);
            c(jSONObject, editorA);
            if (editorA != null) {
                try {
                    fy.a(editorA);
                } catch (Throwable unused3) {
                }
            }
            return true;
        } catch (Throwable unused4) {
            if (editorA == null) {
                return false;
            }
            try {
                fy.a(editorA);
                return false;
            } catch (Throwable unused5) {
                return false;
            }
        }
    }

    private static boolean a(Context context, JSONArray jSONArray) {
        if (jSONArray != null) {
            try {
                if (jSONArray.length() > 0 && context != null) {
                    for (int i2 = 0; i2 < jSONArray.length(); i2++) {
                        if (fz.b(context, jSONArray.getString(i2))) {
                            return true;
                        }
                    }
                }
            } catch (Throwable unused) {
            }
        }
        return false;
    }

    public static int b() {
        return l;
    }

    public static void b(Context context) {
        if (w) {
            return;
        }
        w = true;
        try {
            j = fy.a(context, "pref", com.tkay.expressad.foundation.d.f.i, j);
            c(context);
        } catch (Throwable th) {
            fr.a(th, "AuthUtil", "loadLastAbleState p1");
        }
        try {
            k = fy.a(context, "pref", "fn", k);
            l = fy.a(context, "pref", "mpn", l);
            m = fy.a(context, "pref", "igu", m);
            n = fy.a(context, "pref", "ms", n);
            p = fy.a(context, "pref", "rot", 0);
            int iA = fy.a(context, "pref", "pms", 0);
            o = iA;
            by.a(k, m, n, iA);
            ca.a(m, o);
        } catch (Throwable th2) {
            fr.a(th2, "AuthUtil", "loadLastAbleState p2");
        }
        try {
            x = fy.a(context, "pref", DownloadCommon.DOWNLOAD_REPORT_CANCEL, x);
            y = fy.a(context, "pref", com.tkay.expressad.d.a.b.dx, y);
            z = fy.a(context, "pref", "11G_fa", z);
            double dDoubleValue = Double.valueOf(fy.a(context, "pref", "11G_ms", String.valueOf(A))).doubleValue();
            A = dDoubleValue;
            A = Math.max(0.2d, dDoubleValue);
        } catch (Throwable th3) {
            fr.a(th3, "AuthUtil", "loadLastAbleState p3");
        }
        try {
            c = fy.a(context, "pref", com.tkay.expressad.video.dynview.a.a.U, c);
        } catch (Throwable th4) {
            fr.a(th4, "AuthUtil", "loadLastAbleState p4");
        }
        try {
            H = fy.a(context, "pref", "asw", H);
        } catch (Throwable th5) {
            fr.a(th5, "AuthUtil", "loadLastAbleState p5");
        }
        try {
            I = fy.a(context, "pref", "awsi", I);
        } catch (Throwable th6) {
            fr.a(th6, "AuthUtil", "loadLastAbleState p6");
        }
        try {
            J = fy.a(context, "pref", "15ua", J);
            K = fy.a(context, "pref", "15un", K);
            P = fy.a(context, "pref", "15ust", P);
        } catch (Throwable th7) {
            fr.a(th7, "AuthUtil", "loadLastAbleState p7");
        }
        try {
            L = fy.a(context, "pref", "ok9", L);
            M = fy.a(context, "pref", "ok10", M);
            O = fy.a(context, "pref", "ok11", O);
        } catch (Throwable th8) {
            fr.a(th8, "AuthUtil", "loadLastAbleState p8");
        }
        try {
            d = fy.a(context, "pref", "17ya", false);
            e = fy.a(context, "pref", "17ym", false);
            g = fy.a(context, "pref", "17yi", 2) * 60 * 60 * 1000;
            f = fy.a(context, "pref", "17yx", 100) * 1024;
        } catch (Throwable th9) {
            fr.a(th9, "AuthUtil", "loadLastAbleState p9");
        }
        try {
            b = fz.b();
            a = fy.a(context, "pref", "13S_at", a);
            F = fy.a(context, "pref", "13S_nla", F);
            B = fy.a(context, "pref", "13J_able", B);
            C = fy.a(context, "pref", "13J_c", C);
            D = fy.a(context, "pref", "13J_t", D);
        } catch (Throwable th10) {
            fr.a(th10, "AuthUtil", "loadLastAbleState p10");
        }
        m.b(context);
        try {
            String strA = fy.a(context, "pref", "13S_mlpl", (String) null);
            if (!TextUtils.isEmpty(strA)) {
                G = a(context, new JSONArray(x.c(strA)));
            }
        } catch (Throwable th11) {
            fr.a(th11, "AuthUtil", "loadLastAbleState p11");
        }
        try {
            boolean zA = fy.a(context, "pref", "197a", false);
            String strA2 = fy.a(context, "pref", "197dv", "");
            String strA3 = fy.a(context, "pref", "197tv", "");
            if (zA && fr.a.equals(strA2)) {
                for (String str : fr.b) {
                    if (str.equals(strA3)) {
                        fr.a = strA3;
                    }
                }
            }
        } catch (Throwable th12) {
            fr.a(th12, "AuthUtil", "loadLastAbleState p12");
        }
        try {
            h = fy.a(context, "pref", "1A6", h);
        } catch (Throwable th13) {
            fr.a(th13, "AuthUtil", "loadSdkEnableConfig p13");
        }
    }

    private static void b(JSONObject jSONObject, SharedPreferences.Editor editor) {
        if (jSONObject == null) {
            return;
        }
        try {
            JSONObject jSONObject2 = jSONObject.getJSONObject("197");
            if (jSONObject2 != null) {
                boolean zA = m.a(jSONObject2.optString("able"), false);
                fy.a(editor, "197a", zA);
                if (zA) {
                    fy.a(editor, "197dv", jSONObject2.optString("sv", ""));
                    fy.a(editor, "197tv", jSONObject2.optString("tv", ""));
                } else {
                    fy.a(editor, "197dv", "");
                    fy.a(editor, "197tv", "");
                }
            }
        } catch (Throwable unused) {
        }
    }

    public static int c() {
        if (p < 0) {
            p = 0;
        }
        return p;
    }

    public static void c(Context context) {
        try {
            w wVarC = fr.c();
            wVarC.a(j);
            av.a(context, wVarC);
        } catch (Throwable unused) {
        }
    }

    private static void c(JSONObject jSONObject, SharedPreferences.Editor editor) {
        if (jSONObject == null) {
            return;
        }
        try {
            JSONObject jSONObject2 = jSONObject.getJSONObject("1A6");
            if (jSONObject2 != null) {
                boolean zA = m.a(jSONObject2.optString("ic"), false);
                fy.a(editor, "1A6", zA);
                h = zA;
            }
        } catch (Throwable unused) {
        }
    }

    public static long d() {
        return y;
    }

    private static void d(JSONObject jSONObject, SharedPreferences.Editor editor) {
        try {
            JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("13J");
            if (jSONObjectOptJSONObject != null) {
                boolean zA = m.a(jSONObjectOptJSONObject.optString("able"), true);
                B = zA;
                if (zA) {
                    C = jSONObjectOptJSONObject.optInt("c", C);
                    D = jSONObjectOptJSONObject.optInt("t", D);
                }
                fy.a(editor, "13J_able", B);
                fy.a(editor, "13J_c", C);
                fy.a(editor, "13J_t", D);
            }
        } catch (Throwable th) {
            fr.a(th, "AuthUtil", "loadConfigDataGpsGeoAble");
        }
    }

    private static void e(JSONObject jSONObject, SharedPreferences.Editor editor) {
        if (jSONObject == null) {
            return;
        }
        try {
            boolean zA = m.a(jSONObject.optString(DownloadCommon.DOWNLOAD_REPORT_REASON), false);
            c = zA;
            fy.a(editor, com.tkay.expressad.video.dynview.a.a.U, zA);
        } catch (Throwable th) {
            fr.a(th, "AuthUtil", "checkReLocationAble");
        }
    }

    public static boolean e() {
        return x;
    }

    private static void f(JSONObject jSONObject, SharedPreferences.Editor editor) {
        JSONArray jSONArrayOptJSONArray;
        try {
            JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("15O");
            if (jSONObjectOptJSONObject != null) {
                if (m.a(jSONObjectOptJSONObject.optString("able"), false) && ((jSONArrayOptJSONArray = jSONObjectOptJSONObject.optJSONArray("fl")) == null || jSONArrayOptJSONArray.length() <= 0 || jSONArrayOptJSONArray.toString().contains(Build.MANUFACTURER))) {
                    I = jSONObjectOptJSONObject.optInt("iv", 30) * 1000;
                } else {
                    I = -1L;
                }
                fy.a(editor, "awsi", I);
            }
        } catch (Throwable unused) {
        }
    }

    public static boolean f() {
        return z;
    }

    public static double g() {
        return A;
    }

    private static void g(JSONObject jSONObject, SharedPreferences.Editor editor) {
        if (jSONObject == null) {
            return;
        }
        try {
            JSONObject jSONObject2 = jSONObject.getJSONObject("17Y");
            if (jSONObject2 != null) {
                boolean zA = m.a(jSONObject2.optString("able"), false);
                d = zA;
                fy.a(editor, "17ya", zA);
                boolean zA2 = m.a(jSONObject2.optString("mup"), false);
                e = zA2;
                fy.a(editor, "17ym", zA2);
                int iOptInt = jSONObject2.optInt("max", 20);
                if (iOptInt > 0) {
                    fy.a(editor, "17yx", iOptInt);
                    f = iOptInt * 1024;
                }
                int iOptInt2 = jSONObject2.optInt("inv", 3);
                if (iOptInt2 > 0) {
                    fy.a(editor, "17yi", iOptInt2);
                    g = iOptInt2 * 60 * 60 * 1000;
                }
            }
        } catch (Throwable unused) {
        }
    }

    private static void h(JSONObject jSONObject, SharedPreferences.Editor editor) {
        try {
            JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("15U");
            if (jSONObjectOptJSONObject != null) {
                boolean zA = m.a(jSONObjectOptJSONObject.optString("able"), true);
                int iOptInt = jSONObjectOptJSONObject.optInt("yn", K);
                P = jSONObjectOptJSONObject.optLong("sysTime", P);
                fy.a(editor, "15ua", zA);
                fy.a(editor, "15un", iOptInt);
                fy.a(editor, "15ust", P);
            }
        } catch (Throwable unused) {
        }
    }

    public static boolean h() {
        return B;
    }

    public static int i() {
        return C;
    }

    private static void i(JSONObject jSONObject, SharedPreferences.Editor editor) {
        int i2;
        if (jSONObject == null) {
            return;
        }
        try {
            JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("17J");
            if (jSONObjectOptJSONObject != null) {
                boolean zA = m.a(jSONObjectOptJSONObject.optString("able"), false);
                L = zA;
                fy.a(editor, "ok9", zA);
                if (zA) {
                    String strOptString = jSONObjectOptJSONObject.optString("auth");
                    String strOptString2 = jSONObjectOptJSONObject.optString(DownloadCommon.DOWNLOAD_REPORT_HOST);
                    O = strOptString2;
                    fy.a(editor, "ok11", strOptString2);
                    m.a(strOptString, false);
                    N = m.a(jSONObjectOptJSONObject.optString("nr"), false);
                    String strOptString3 = jSONObjectOptJSONObject.optString("tm");
                    if (TextUtils.isEmpty(strOptString3) || (i2 = Integer.parseInt(strOptString3)) <= 0 || i2 >= 20) {
                        return;
                    }
                    M = i2;
                    fy.a(editor, "ok10", i2);
                }
            }
        } catch (Throwable unused) {
        }
    }

    public static int j() {
        return D;
    }

    public static boolean k() {
        return F;
    }

    public static boolean l() {
        return G;
    }

    public static boolean m() {
        return c;
    }

    public static boolean n() {
        return H;
    }

    public static long o() {
        return I;
    }

    public static boolean p() {
        return N;
    }

    public static boolean q() {
        return L;
    }

    public static String r() {
        return x.c(O);
    }

    public static boolean s() {
        return J && K > 0;
    }

    public static int t() {
        return K;
    }

    public static long u() {
        return P;
    }
}
