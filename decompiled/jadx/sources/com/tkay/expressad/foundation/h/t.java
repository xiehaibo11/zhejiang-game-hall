package com.tkay.expressad.foundation.h;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.res.Resources;
import android.net.ConnectivityManager;
import android.net.Uri;
import android.os.Build;
import android.os.Looper;
import android.text.TextUtils;
import android.util.DisplayMetrics;
import android.view.Display;
import android.view.View;
import android.view.WindowManager;
import android.webkit.WebView;
import com.heytap.mcssdk.constant.MessageConstant;
import java.net.URLEncoder;
import java.text.DecimalFormat;
import java.text.DecimalFormatSymbols;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Locale;
import java.util.Set;
import org.json.JSONArray;

/* JADX INFO: loaded from: classes3.dex */
public final class t extends g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f6958a = "SameTools";
    static List<String> b;
    private static char[] c = {'A', 'p', 'p', 'l', 'i', 'c', 'a', 't', 'i', 'o', 'n', 'I', 'n', 'f', 'o'};
    private static char[] d = {'.', 'X'};
    private static int e = 0;
    private static int f = 1;
    private static int g = 2;
    private static int h = 3;
    private static int i = 0;
    private static int j = 7;
    private static int k = 14;
    private static int l = 19;
    private static int m = 16;
    private static int n = 26;
    private static int o = 1;

    public static int a(int i2) {
        if ((i2 > 100 && i2 < 199) || i2 == 2) {
            return 1;
        }
        if ((i2 <= 200 || i2 >= 299) && i2 != 4) {
            return (i2 <= 500 || i2 >= 599) ? -1 : 5;
        }
        return 2;
    }

    public static <T extends String> boolean a(T t) {
        return t == null || t.length() == 0;
    }

    private static <T extends String> boolean h(T t) {
        return t != null && t.length() > 0;
    }

    private static boolean a(List list) {
        return list == null || list.isEmpty();
    }

    private static <T> boolean a(T[] tArr) {
        return tArr == null || tArr.length == 0;
    }

    public static boolean b(Context context) {
        try {
            return ((ConnectivityManager) context.getSystemService("connectivity")).getActiveNetworkInfo() != null;
        } catch (Exception e2) {
            e2.printStackTrace();
            return false;
        }
    }

    public static float c(Context context) {
        if (context == null) {
            return 2.5f;
        }
        try {
            float f2 = context.getResources().getDisplayMetrics().density;
            if (f2 == 0.0f) {
                return 2.5f;
            }
            return f2;
        } catch (Exception e2) {
            e2.printStackTrace();
            return 2.5f;
        }
    }

    public static int a(Context context, float f2) {
        float f3 = 2.5f;
        if (context != null) {
            try {
                float f4 = context.getResources().getDisplayMetrics().density;
                if (f4 != 0.0f) {
                    f3 = f4;
                }
            } catch (Exception e2) {
                e2.printStackTrace();
            }
        }
        return (int) ((f2 / f3) + 0.5f);
    }

    public static int b(Context context, float f2) {
        Resources resources;
        if (context == null || (resources = context.getResources()) == null) {
            return 0;
        }
        return (int) ((f2 * resources.getDisplayMetrics().density) + 0.5f);
    }

    public static int d(Context context) {
        try {
            Class<?> cls = Class.forName("com.android.internal.R$dimen");
            return context.getResources().getDimensionPixelSize(Integer.parseInt(cls.getField("status_bar_height").get(cls.newInstance()).toString()));
        } catch (Exception e2) {
            e2.printStackTrace();
            return 0;
        }
    }

    public static int a() {
        int i2 = o;
        o = i2 + 1;
        return i2;
    }

    public static boolean a(String str, Context context) {
        try {
            return context.getPackageManager().checkPermission(str, context.getPackageName()) == 0;
        } catch (Exception unused) {
            return false;
        }
    }

    public static boolean a(com.tkay.expressad.foundation.d.c cVar) {
        if (cVar != null) {
            try {
                return cVar.N() == 1;
            } catch (Exception e2) {
                e2.printStackTrace();
            }
        }
        return false;
    }

    public static double b(String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return 0.0d;
            }
            return Double.parseDouble(str);
        } catch (Exception e2) {
            e2.printStackTrace();
            return 0.0d;
        }
    }

    public static int a(Object obj) {
        if (obj == null) {
            return 0;
        }
        try {
            if (obj instanceof String) {
                return Integer.parseInt((String) obj);
            }
            return 0;
        } catch (Throwable th) {
            th.getMessage();
            return 0;
        }
    }

    public static double a(Double d2) {
        try {
            String str = new DecimalFormat("0.00", DecimalFormatSymbols.getInstance(Locale.US)).format(d2);
            if (w.b(str)) {
                return Double.parseDouble(str);
            }
            return 0.0d;
        } catch (Exception e2) {
            e2.printStackTrace();
            return 0.0d;
        }
    }

    private static DisplayMetrics k(Context context) {
        if (context == null) {
            return null;
        }
        DisplayMetrics displayMetrics = new DisplayMetrics();
        try {
            Display defaultDisplay = ((WindowManager) context.getSystemService("window")).getDefaultDisplay();
            if (Build.VERSION.SDK_INT >= 17) {
                defaultDisplay.getRealMetrics(displayMetrics);
            } else {
                defaultDisplay.getMetrics(displayMetrics);
            }
            return displayMetrics;
        } catch (Throwable th) {
            th.printStackTrace();
            return context.getResources().getDisplayMetrics();
        }
    }

    public static int e(Context context) {
        if (context == null) {
            return 0;
        }
        try {
            return k(context).heightPixels;
        } catch (Exception e2) {
            e2.printStackTrace();
            return 0;
        }
    }

    public static int f(Context context) {
        if (context == null) {
            return 0;
        }
        try {
            return k(context).widthPixels;
        } catch (Exception e2) {
            e2.printStackTrace();
            return 0;
        }
    }

    public static int g(Context context) {
        if (context == null) {
            return 0;
        }
        try {
            return context.getResources().getDisplayMetrics().widthPixels;
        } catch (Exception e2) {
            e2.printStackTrace();
            return 0;
        }
    }

    public static int h(Context context) {
        if (context == null) {
            return 0;
        }
        try {
            return context.getResources().getDisplayMetrics().heightPixels;
        } catch (Exception e2) {
            e2.printStackTrace();
            return 0;
        }
    }

    public static void a(View view) {
        if (view == null) {
            return;
        }
        try {
            if (Build.VERSION.SDK_INT >= 11) {
                view.setSystemUiVisibility(MessageConstant.MessageType.MESSAGE_LAUNCH_ALARM);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public static int i(Context context) {
        if (context != null) {
            return 0;
        }
        try {
            if (context.getResources().getIdentifier("config_showNavigationBar", "bool", "android") != 0) {
                return context.getResources().getDimensionPixelSize(context.getResources().getIdentifier("navigation_bar_height", "dimen", "android"));
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
        return 0;
    }

    public static List<String> a(JSONArray jSONArray) {
        if (jSONArray == null) {
            return null;
        }
        try {
            if (jSONArray.length() <= 0) {
                return null;
            }
            ArrayList arrayList = new ArrayList();
            for (int i2 = 0; i2 < jSONArray.length(); i2++) {
                String strOptString = jSONArray.optString(i2);
                if (w.b(strOptString)) {
                    arrayList.add(strOptString);
                }
            }
            return arrayList;
        } catch (Throwable th) {
            th.getMessage();
            return null;
        }
    }

    public static String c(String str) {
        try {
            return w.b(str) ? URLEncoder.encode(str, "utf-8") : "";
        } catch (Throwable th) {
            th.getMessage();
            return "";
        }
    }

    public static boolean b() {
        return Looper.getMainLooper().getThread() == Thread.currentThread();
    }

    public static int j(Context context) {
        PackageInfo packageInfo;
        if (context == null) {
            return 0;
        }
        try {
            if (Build.VERSION.SDK_INT >= 26) {
                packageInfo = WebView.getCurrentWebViewPackage();
            } else {
                packageInfo = context.getPackageManager().getPackageInfo("com.google.android.webview", 1);
            }
            com.tkay.expressad.d.b.a();
            com.tkay.expressad.foundation.b.b.b().e();
            com.tkay.expressad.d.a aVarB = com.tkay.expressad.d.b.b();
            if (aVarB == null) {
                com.tkay.expressad.d.b.a();
                aVarB = com.tkay.expressad.d.b.c();
            }
            if (packageInfo == null || TextUtils.isEmpty(packageInfo.versionName) || !packageInfo.versionName.equals("77.0.3865.92")) {
                return aVarB.P();
            }
            return 5;
        } catch (Exception unused) {
            return 0;
        }
    }

    public static synchronized boolean a(Context context, String str) {
        boolean z;
        z = false;
        if (context != null) {
            if (!TextUtils.isEmpty(str)) {
                try {
                    if (b(str, context) != null) {
                        z = true;
                    }
                } catch (Exception unused) {
                }
            }
        }
        return z;
    }

    private static Object b(String str, Context context) {
        try {
            return Class.forName(String.valueOf(b(e))).getMethod(String.valueOf(b(g)), String.class, Integer.TYPE).invoke(Class.forName(String.valueOf(b(f))).getMethod(String.valueOf(b(h)), new Class[0]).invoke(context, new Object[0]), str, 8192);
        } catch (Throwable unused) {
            return null;
        }
    }

    private static final char[] b(int i2) {
        StringBuilder sb;
        if (i2 == 0) {
            sb = new StringBuilder();
            sb.append(String.valueOf(Arrays.copyOf(s.b, j)));
            sb.append(d[i]);
            sb.append(String.valueOf(Arrays.copyOfRange(s.b, j, k)));
            sb.append(d[i]);
            sb.append(String.valueOf(Arrays.copyOfRange(s.b, k, m)));
            sb.append(d[i]);
            sb.append(String.valueOf(r.c));
        } else if (i2 == 1) {
            sb = new StringBuilder();
            sb.append(String.valueOf(Arrays.copyOf(s.b, j)));
            sb.append(d[i]);
            sb.append(String.valueOf(Arrays.copyOfRange(s.b, j, k)));
            sb.append(d[i]);
            sb.append(String.valueOf(Arrays.copyOfRange(s.b, l, n)));
        } else if (i2 == 2) {
            sb = new StringBuilder();
            sb.append(String.valueOf(Arrays.copyOfRange(s.b, m, l)));
            sb.append(String.valueOf(c));
        } else if (i2 != 3) {
            sb = null;
        } else {
            sb = new StringBuilder();
            sb.append(String.valueOf(Arrays.copyOfRange(s.b, m, l)));
            sb.append(String.valueOf(r.c));
        }
        return sb.toString().toCharArray();
    }

    private static synchronized String a(String str, Context context, String str2) {
        StringBuilder sb;
        try {
            Set<String> queryParameterNames = Uri.parse(str).getQueryParameterNames();
            if (queryParameterNames != null && queryParameterNames.size() > 0) {
                sb = new StringBuilder("&rtins_type=");
            } else {
                sb = new StringBuilder("?rtins_type=");
            }
        } catch (Exception unused) {
            sb = new StringBuilder("&rtins_type=");
        }
        try {
            if (b(str2, context) != null) {
                sb.append(1);
            } else {
                sb.append(2);
            }
        } catch (Exception unused2) {
            sb.append(0);
        }
        return sb.toString();
    }

    public static synchronized String a(Context context, String str, String str2) {
        StringBuilder sb;
        sb = new StringBuilder(str2);
        try {
            sb.append(a(str2, context, str));
        } catch (Exception unused) {
        }
        return sb.toString();
    }

    public static boolean d(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        try {
            Uri uri = Uri.parse(str);
            if (uri == null) {
                return false;
            }
            String queryParameter = uri.getQueryParameter("nativecananim");
            if (TextUtils.isEmpty(queryParameter)) {
                return false;
            }
            return queryParameter.equals("1");
        } catch (Exception e2) {
            e2.getMessage();
            return false;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x0032  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static boolean e(java.lang.String r4) {
        /*
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            android.net.Uri r4 = android.net.Uri.parse(r4)     // Catch: java.lang.Exception -> L46 java.lang.Throwable -> L4d
            r0 = 1
            if (r4 == 0) goto L45
            java.lang.String r2 = "dyview"
            java.lang.String r2 = r4.getQueryParameter(r2)     // Catch: java.lang.Exception -> L46 java.lang.Throwable -> L4d
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L46 java.lang.Throwable -> L4d
            if (r3 == 0) goto L21
            java.lang.String r2 = "view"
            java.lang.String r2 = r4.getQueryParameter(r2)     // Catch: java.lang.Exception -> L46 java.lang.Throwable -> L4d
        L21:
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L46 java.lang.Throwable -> L4d
            if (r3 != 0) goto L32
            r3 = -1
            int r3 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Exception -> L2c java.lang.Throwable -> L4d
        L2c:
            int r3 = r3 % 2
            if (r3 != 0) goto L32
            r2 = r0
            goto L33
        L32:
            r2 = r1
        L33:
            java.lang.String r3 = "natmp"
            java.lang.String r4 = r4.getQueryParameter(r3)     // Catch: java.lang.Exception -> L43 java.lang.Throwable -> L4c
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L43 java.lang.Throwable -> L4c
            if (r4 != 0) goto L41
            r1 = r0
            goto L45
        L41:
            r1 = r2
            goto L45
        L43:
            r4 = move-exception
            goto L48
        L45:
            return r1
        L46:
            r4 = move-exception
            r2 = r1
        L48:
            r4.getMessage()     // Catch: java.lang.Throwable -> L4c
            return r1
        L4c:
            r1 = r2
        L4d:
            return r1
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.foundation.h.t.e(java.lang.String):boolean");
    }

    private static boolean i(String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return false;
            }
            try {
                Uri uri = Uri.parse(str);
                if (uri != null) {
                    return !TextUtils.isEmpty(uri.getQueryParameter("dyview"));
                }
                return false;
            } catch (Exception e2) {
                e2.getMessage();
            }
        } catch (Throwable unused) {
        }
        return false;
    }

    public static boolean f(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        try {
            Uri uri = Uri.parse(str);
            if (uri == null) {
                return false;
            }
            String queryParameter = uri.getQueryParameter("isplayableec");
            if (TextUtils.isEmpty(queryParameter)) {
                return false;
            }
            return queryParameter.equals("0");
        } catch (Exception e2) {
            e2.getMessage();
            return false;
        }
    }

    public static int g(String str) {
        if (TextUtils.isEmpty(str)) {
            return -1;
        }
        try {
            Uri uri = Uri.parse(str);
            if (uri == null) {
                return -1;
            }
            String queryParameter = uri.getQueryParameter("dyview");
            if (TextUtils.isEmpty(queryParameter)) {
                queryParameter = uri.getQueryParameter("view");
            }
            if (TextUtils.isEmpty(queryParameter)) {
                return -1;
            }
            try {
                return Integer.parseInt(queryParameter);
            } catch (Exception unused) {
                return -1;
            }
        } catch (Exception e2) {
            e2.getMessage();
            return -1;
        }
    }

    private static boolean b(List list) {
        return !(list == null || list.isEmpty());
    }

    private static <T> boolean b(T[] tArr) {
        return !(tArr == null || tArr.length == 0);
    }
}
