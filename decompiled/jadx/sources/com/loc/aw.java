package com.loc;

import android.content.Context;
import android.os.Build;
import com.ss.android.download.api.constant.BaseConstants;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: compiled from: ErrorLogManager.java */
/* JADX INFO: loaded from: classes2.dex */
public class aw {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static WeakReference<bv> f2854a = null;
    private static boolean b = true;
    private static WeakReference<co> c;
    private static WeakReference<co> d;
    private static String[] e = new String[10];
    private static int f;
    private static boolean g;
    private static int h;
    private static w i;

    private static w a(String str) {
        List<w> listA = at.a();
        if (listA == null) {
            listA = new ArrayList();
        }
        if (str != null && !"".equals(str)) {
            for (w wVar : listA) {
                if (at.a(wVar.f(), str)) {
                    return wVar;
                }
            }
            if (str.contains("com.amap.api.col")) {
                try {
                    return x.a();
                } catch (k e2) {
                    e2.printStackTrace();
                }
            }
            if (str.contains("com.amap.co") || str.contains("com.amap.opensdk.co") || str.contains("com.amap.location")) {
                try {
                    w wVarB = x.b();
                    wVarB.a(true);
                    return wVarB;
                } catch (k e3) {
                    e3.printStackTrace();
                }
            }
        }
        return null;
    }

    /* JADX WARN: Removed duplicated region for block: B:91:0x00ff  */
    /* JADX WARN: Removed duplicated region for block: B:93:0x0104 A[RETURN] */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:88:0x00f8 -> B:109:0x00fb). Please report as a decompilation issue!!! */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static java.lang.String a(java.util.List<com.loc.w> r11) {
        /*
            Method dump skipped, instruction units count: 261
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.loc.aw.a(java.util.List):java.lang.String");
    }

    static void a(Context context) {
        String strA;
        w wVar;
        List<w> listA = at.a();
        if (listA == null || listA.size() == 0 || (strA = a(listA)) == null || "".equals(strA) || (wVar = i) == null) {
            return;
        }
        a(context, wVar, 2, "ANR", strA);
    }

    private static void a(final Context context, final co coVar, final String str) {
        cr.a().b(new cs() { // from class: com.loc.aw.1
            @Override // com.loc.cs
            public final void a() {
                try {
                    synchronized (aw.class) {
                        bv bvVarA = cb.a(aw.f2854a);
                        cb.a(context, bvVarA, str, 1000, 4096000, "1");
                        bvVarA.f = coVar;
                        if (bvVarA.g == null) {
                            bvVarA.g = new cf(new ce(context, new cj(), new bg(new bi(new bj())), "QImtleSI6IiVzIiwicGxhdGZvcm0iOiJhbmRyb2lkIiwiZGl1IjoiJXMiLCJhZGl1IjoiJXMiLCJwa2ciOiIlcyIsIm1vZGVsIjoiJXMiLCJhcHBuYW1lIjoiJXMiLCJhcHB2ZXJzaW9uIjoiJXMiLCJzeXN2ZXJzaW9uIjoiJXMi", l.f(context), o.k(), o.p(context), l.c(context), Build.MODEL, l.b(context), l.d(context), Build.VERSION.RELEASE));
                        }
                        bvVarA.h = BaseConstants.Time.HOUR;
                        bw.a(bvVarA);
                    }
                } catch (Throwable th) {
                    av.b(th, "lg", "pul");
                }
            }
        });
    }

    private static void a(Context context, w wVar, int i2, String str, String str2) {
        String str3;
        String strA = cb.a();
        String strA2 = cb.a(context, wVar);
        l.a(context);
        String strA3 = cb.a(strA2, strA, i2, str, str2);
        if (strA3 == null || "".equals(strA3)) {
            return;
        }
        String strB = s.b(str2);
        if (i2 == 1) {
            str3 = at.b;
        } else if (i2 == 2) {
            str3 = at.d;
        } else if (i2 != 0) {
            return;
        } else {
            str3 = at.c;
        }
        String str4 = str3;
        bv bvVarA = cb.a(f2854a);
        cb.a(context, bvVarA, str4, 1000, 4096000, "1");
        if (bvVarA.e == null) {
            bvVarA.e = new bf(new bg(new bi(new bj())));
        }
        try {
            bw.a(strB, x.a(strA3.replaceAll("\n", "<br/>")), bvVarA);
        } catch (Throwable unused) {
        }
    }

    public static void a(Context context, Throwable th, int i2, String str, String str2) {
        String strA = x.a(th);
        w wVarA = a(strA);
        if (a(wVarA)) {
            String strReplaceAll = strA.replaceAll("\n", "<br/>");
            String string = th.toString();
            if (string == null || "".equals(string)) {
                return;
            }
            StringBuilder sb = new StringBuilder();
            if (str != null) {
                sb.append("class:");
                sb.append(str);
            }
            if (str2 != null) {
                sb.append(" method:");
                sb.append(str2);
                sb.append("$<br/>");
            }
            sb.append(strReplaceAll);
            a(context, wVarA, i2, string, sb.toString());
        }
    }

    static void a(w wVar, Context context, String str, String str2) {
        if (!a(wVar) || str == null || "".equals(str)) {
            return;
        }
        a(context, wVar, 1, str, str2);
    }

    private static boolean a(w wVar) {
        return wVar != null && wVar.e();
    }

    private static String b() {
        StringBuilder sb = new StringBuilder();
        try {
            for (int i2 = f; i2 < 10 && i2 <= 9; i2++) {
                sb.append(e[i2]);
            }
            for (int i3 = 0; i3 < f; i3++) {
                sb.append(e[i3]);
            }
        } catch (Throwable th) {
            av.b(th, "alg", "gLI");
        }
        return sb.toString();
    }

    static void b(Context context) {
        cm cmVar = new cm(b);
        b = false;
        a(context, cmVar, at.c);
    }

    static void c(Context context) {
        WeakReference<co> weakReference = c;
        if (weakReference == null || weakReference.get() == null) {
            c = new WeakReference<>(new cn(context, BaseConstants.Time.HOUR, "hKey", new cp(context)));
        }
        a(context, c.get(), at.d);
    }

    static void d(Context context) {
        WeakReference<co> weakReference = d;
        if (weakReference == null || weakReference.get() == null) {
            d = new WeakReference<>(new cn(context, BaseConstants.Time.HOUR, "gKey", new cp(context)));
        }
        a(context, d.get(), at.b);
    }
}
