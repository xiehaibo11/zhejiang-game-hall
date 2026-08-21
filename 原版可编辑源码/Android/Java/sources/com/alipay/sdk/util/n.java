package com.alipay.sdk.util;

import android.app.Activity;
import android.app.ActivityManager;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.Signature;
import android.net.Uri;
import android.os.Build;
import android.text.TextUtils;
import android.util.DisplayMetrics;
import android.view.WindowManager;
import android.webkit.CookieManager;
import android.webkit.CookieSyncManager;
import android.webkit.WebSettings;
import android.webkit.WebView;
import android.widget.LinearLayout;
import com.alipay.sdk.app.EnvUtils;
import com.alipay.sdk.data.a;
import com.huawei.hms.framework.common.ContainerUtils;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor;
import com.xiaomi.mipush.sdk.Constants;
import java.io.BufferedReader;
import java.io.ByteArrayInputStream;
import java.io.FileReader;
import java.io.IOException;
import java.io.UnsupportedEncodingException;
import java.lang.reflect.Method;
import java.math.BigInteger;
import java.net.URLDecoder;
import java.security.MessageDigest;
import java.security.PublicKey;
import java.security.cert.CertificateFactory;
import java.security.cert.X509Certificate;
import java.security.interfaces.RSAPublicKey;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Random;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import org.apache.commons.codec1.digest.MessageDigestAlgorithms;
import org.json.JSONObject;

public class n {
    static final String a = "com.alipay.android.app";
    public static final String b = "com.eg.android.AlipayGphone";
    public static final int c = 99;
    public static final int d = 73;
    public static final int f = 125;
    private static final String g = "com.eg.android.AlipayGphoneRC";
    private static final String h = ".alipay.wallet";
    public static final String[] e = {"10.1.5.1013151", "10.1.5.1013148"};
    private static final char[] i = "0123456789ABCDEF".toCharArray();

    public static String h(Context context) {
        return "-1;-1";
    }

    public static String a() {
        if (EnvUtils.isSandBox()) {
            return "com.eg.android.AlipayGphoneRC";
        }
        try {
            return com.alipay.sdk.app.i.a.get(0).a;
        } catch (Throwable unused) {
            return "com.eg.android.AlipayGphone";
        }
    }

    public static String a(String str) {
        return (EnvUtils.isSandBox() && TextUtils.equals(str, "com.eg.android.AlipayGphoneRC")) ? "com.eg.android.AlipayGphoneRC.IAlixPay" : "com.eg.android.AlipayGphone.IAlixPay";
    }

    public static Map<String, String> b(String str) {
        HashMap map = new HashMap();
        for (String str2 : str.split("&")) {
            int iIndexOf = str2.indexOf(ContainerUtils.KEY_VALUE_DELIMITER, 1);
            if (-1 != iIndexOf) {
                map.put(str2.substring(0, iIndexOf), URLDecoder.decode(str2.substring(iIndexOf + 1)));
            }
        }
        return map;
    }

    public static Map<String, String> c(String str) {
        HashMap map = new HashMap(4);
        int iIndexOf = str.indexOf(63);
        if (iIndexOf != -1 && iIndexOf < str.length() - 1) {
            for (String str2 : str.substring(iIndexOf + 1).split("&")) {
                int iIndexOf2 = str2.indexOf(61, 1);
                if (iIndexOf2 != -1 && iIndexOf2 < str2.length() - 1) {
                    map.put(str2.substring(0, iIndexOf2), e(str2.substring(iIndexOf2 + 1)));
                }
            }
        }
        return map;
    }

    public static JSONObject d(String str) {
        try {
            return new JSONObject(str);
        } catch (Throwable unused) {
            return new JSONObject();
        }
    }

    public static String e(String str) {
        try {
            return URLDecoder.decode(str, "utf-8");
        } catch (UnsupportedEncodingException e2) {
            com.alipay.sdk.app.statistic.a.a("biz", "H5PayDataAnalysisError", e2);
            return "";
        }
    }

    public static String a(String str, String str2, String str3) {
        try {
            int iIndexOf = str3.indexOf(str) + str.length();
            if (iIndexOf <= str.length()) {
                return "";
            }
            int iIndexOf2 = TextUtils.isEmpty(str2) ? 0 : str3.indexOf(str2, iIndexOf);
            if (iIndexOf2 < 1) {
                return str3.substring(iIndexOf);
            }
            return str3.substring(iIndexOf, iIndexOf2);
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String a(byte[] bArr) {
        BigInteger modulus;
        try {
            PublicKey publicKey = ((X509Certificate) CertificateFactory.getInstance("X.509").generateCertificate(new ByteArrayInputStream(bArr))).getPublicKey();
            if (!(publicKey instanceof RSAPublicKey) || (modulus = ((RSAPublicKey) publicKey).getModulus()) == null) {
                return null;
            }
            return modulus.toString(16);
        } catch (Exception e2) {
            com.alipay.sdk.app.statistic.a.a("auth", "GetPublicKeyFromSignEx", e2);
            return null;
        }
    }

    public static a a(Context context, List<a.a> list) {
        a aVarA;
        if (list == null) {
            return null;
        }
        for (a.a aVar : list) {
            if (aVar != null && (aVarA = a(context, aVar.a, aVar.b, aVar.c)) != null && !aVarA.a() && !aVarA.b()) {
                return aVarA;
            }
        }
        return null;
    }

    private static a a(Context context, String str, int i2, String str2) {
        PackageInfo packageInfoD;
        if (EnvUtils.isSandBox() && "com.eg.android.AlipayGphone".equals(str)) {
            str = "com.eg.android.AlipayGphoneRC";
        }
        try {
            packageInfoD = d(context, str);
        } catch (Throwable th) {
            com.alipay.sdk.app.statistic.a.a("auth", "GetPackageInfoEx", th);
            packageInfoD = null;
        }
        if (b(packageInfoD)) {
            return a(packageInfoD, i2, str2);
        }
        return null;
    }

    private static boolean b(PackageInfo packageInfo) {
        String str = "";
        boolean z = false;
        if (packageInfo == null) {
            str = "info == null";
        } else if (packageInfo.signatures == null) {
            str = "info.signatures == null";
        } else if (packageInfo.signatures.length <= 0) {
            str = "info.signatures.length <= 0";
        } else {
            z = true;
        }
        if (!z) {
            com.alipay.sdk.app.statistic.a.a("auth", "NotIncludeSignatures", str);
        }
        return z;
    }

    private static PackageInfo d(Context context, String str) throws PackageManager.NameNotFoundException {
        return context.getPackageManager().getPackageInfo(str, PsExtractor.AUDIO_STREAM);
    }

    private static a a(PackageInfo packageInfo, int i2, String str) {
        if (packageInfo == null) {
            return null;
        }
        return new a(packageInfo, i2, str);
    }

    public static final class a {
        public final PackageInfo a;
        public final int b;
        public final String c;

        public a(PackageInfo packageInfo, int i, String str) {
            this.a = packageInfo;
            this.b = i;
            this.c = str;
        }

        public boolean a() {
            Signature[] signatureArr = this.a.signatures;
            if (signatureArr == null || signatureArr.length == 0) {
                return false;
            }
            for (Signature signature : signatureArr) {
                String strA = n.a(signature.toByteArray());
                if (strA != null && !TextUtils.equals(strA, this.c)) {
                    com.alipay.sdk.app.statistic.a.a("biz", "PublicKeyUnmatch", String.format("Got %s, expected %s", strA, this.c));
                    return true;
                }
            }
            return false;
        }

        public boolean b() {
            return this.a.versionCode < this.b;
        }
    }

    public static boolean a(Context context) {
        try {
            return context.getPackageManager().getPackageInfo("com.alipay.android.app", 128) != null;
        } catch (PackageManager.NameNotFoundException unused) {
            return false;
        }
    }

    public static boolean b(Context context, List<a.a> list) {
        try {
            for (a.a aVar : list) {
                if (aVar != null) {
                    String str = aVar.a;
                    if (EnvUtils.isSandBox() && "com.eg.android.AlipayGphone".equals(str)) {
                        str = "com.eg.android.AlipayGphoneRC";
                    }
                    try {
                        if (context.getPackageManager().getPackageInfo(str, 128) != null) {
                            return true;
                        }
                    } catch (PackageManager.NameNotFoundException unused) {
                        continue;
                    }
                }
            }
            return false;
        } catch (Throwable th) {
            com.alipay.sdk.app.statistic.a.a("biz", "CheckLaunchAppExistEx", th);
            return false;
        }
    }

    public static boolean a(PackageInfo packageInfo) {
        if (packageInfo == null) {
            return false;
        }
        try {
            String str = packageInfo.versionName;
            if (!TextUtils.equals(str, e[0])) {
                if (!TextUtils.equals(str, e[1])) {
                    return false;
                }
            }
            return true;
        } catch (Throwable unused) {
            return false;
        }
    }

    public static boolean b(Context context) {
        try {
            PackageInfo packageInfo = context.getPackageManager().getPackageInfo(a(), 128);
            if (packageInfo == null) {
                return false;
            }
            return packageInfo.versionCode < 99;
        } catch (Throwable th) {
            c.a(th);
            return false;
        }
    }

    public static String c(Context context) {
        return " (" + b() + ";" + c() + ";" + d(context) + ";;" + e(context) + ")(sdk android)";
    }

    public static String b() {
        return "Android " + Build.VERSION.RELEASE;
    }

    public static WebView a(Activity activity, String str, String str2) {
        Context applicationContext = activity.getApplicationContext();
        if (!TextUtils.isEmpty(str2)) {
            CookieSyncManager.createInstance(applicationContext).sync();
            CookieManager.getInstance().setCookie(str, str2);
            CookieSyncManager.getInstance().sync();
        }
        LinearLayout linearLayout = new LinearLayout(applicationContext);
        LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(-1, -1);
        linearLayout.setOrientation(1);
        activity.setContentView(linearLayout, layoutParams);
        WebView webView = new WebView(applicationContext);
        layoutParams.weight = 1.0f;
        webView.setVisibility(0);
        linearLayout.addView(webView, layoutParams);
        WebSettings settings = webView.getSettings();
        settings.setUserAgentString(settings.getUserAgentString() + c(applicationContext));
        settings.setRenderPriority(WebSettings.RenderPriority.HIGH);
        settings.setSupportMultipleWindows(true);
        settings.setJavaScriptEnabled(true);
        settings.setSavePassword(false);
        settings.setJavaScriptCanOpenWindowsAutomatically(true);
        settings.setMinimumFontSize(settings.getMinimumFontSize() + 8);
        settings.setAllowFileAccess(false);
        settings.setAllowFileAccessFromFileURLs(false);
        settings.setAllowUniversalAccessFromFileURLs(false);
        settings.setAllowContentAccess(false);
        settings.setTextSize(WebSettings.TextSize.NORMAL);
        webView.setVerticalScrollbarOverlay(true);
        webView.setDownloadListener(new o(applicationContext));
        if (Build.VERSION.SDK_INT >= 7) {
            try {
                Method method = webView.getSettings().getClass().getMethod("setDomStorageEnabled", Boolean.TYPE);
                if (method != null) {
                    method.invoke(webView.getSettings(), true);
                }
            } catch (Exception unused) {
            }
        }
        try {
            try {
                webView.removeJavascriptInterface("searchBoxJavaBridge_");
                webView.removeJavascriptInterface("accessibility");
                webView.removeJavascriptInterface("accessibilityTraversal");
            } catch (Throwable unused2) {
            }
        } catch (Throwable unused3) {
            Method method2 = webView.getClass().getMethod("removeJavascriptInterface", new Class[0]);
            if (method2 != null) {
                method2.invoke(webView, "searchBoxJavaBridge_");
                method2.invoke(webView, "accessibility");
                method2.invoke(webView, "accessibilityTraversal");
            }
        }
        if (Build.VERSION.SDK_INT >= 19) {
            webView.getSettings().setCacheMode(2);
        }
        webView.loadUrl(str);
        return webView;
    }

    public static String c() {
        String strD = d();
        int iIndexOf = strD.indexOf(Constants.ACCEPT_TIME_SEPARATOR_SERVER);
        if (iIndexOf != -1) {
            strD = strD.substring(0, iIndexOf);
        }
        int iIndexOf2 = strD.indexOf("\n");
        if (iIndexOf2 != -1) {
            strD = strD.substring(0, iIndexOf2);
        }
        return "Linux " + strD;
    }

    public static String d() {
        try {
            BufferedReader bufferedReader = new BufferedReader(new FileReader("/proc/version"), 256);
            try {
                String line = bufferedReader.readLine();
                bufferedReader.close();
                Matcher matcher = Pattern.compile("\\w+\\s+\\w+\\s+([^\\s]+)\\s+\\(([^\\s@]+(?:@[^\\s.]+)?)[^)]*\\)\\s+\\((?:[^(]*\\([^)]*\\))?[^)]*\\)\\s+([^\\s]+)\\s+(?:PREEMPT\\s+)?(.+)").matcher(line);
                if (!matcher.matches() || matcher.groupCount() < 4) {
                    return "Unavailable";
                }
                return matcher.group(1) + "\n" + matcher.group(2) + " " + matcher.group(3) + "\n" + matcher.group(4);
            } catch (Throwable th) {
                bufferedReader.close();
                throw th;
            }
        } catch (IOException unused) {
            return "Unavailable";
        }
    }

    public static String d(Context context) {
        return context.getResources().getConfiguration().locale.toString();
    }

    public static String e(Context context) {
        DisplayMetrics displayMetricsF = f(context);
        return displayMetricsF.widthPixels + "*" + displayMetricsF.heightPixels;
    }

    public static DisplayMetrics f(Context context) {
        DisplayMetrics displayMetrics = new DisplayMetrics();
        ((WindowManager) context.getApplicationContext().getSystemService("window")).getDefaultDisplay().getMetrics(displayMetrics);
        return displayMetrics;
    }

    public static String g(Context context) {
        String strA = m.a(context);
        return strA.substring(0, strA.indexOf("://"));
    }

    public static String a(int i2) {
        Random random = new Random();
        StringBuilder sb = new StringBuilder();
        for (int i3 = 0; i3 < i2; i3++) {
            int iNextInt = random.nextInt(3);
            if (iNextInt == 0) {
                sb.append(String.valueOf((char) Math.round((Math.random() * 25.0d) + 65.0d)));
            } else if (iNextInt == 1) {
                sb.append(String.valueOf((char) Math.round((Math.random() * 25.0d) + 97.0d)));
            } else if (iNextInt == 2) {
                sb.append(String.valueOf(new Random().nextInt(10)));
            }
        }
        return sb.toString();
    }

    public static boolean f(String str) {
        return Pattern.compile("^http(s)?://([a-z0-9_\\-]+\\.)*(alipaydev|alipay|taobao)\\.(com|net)(:\\d+)?(/.*)?$").matcher(str).matches();
    }

    public static String a(Context context, String str) {
        String strSubstring = "";
        try {
            String string = "";
            for (ActivityManager.RunningAppProcessInfo runningAppProcessInfo : ((ActivityManager) context.getApplicationContext().getSystemService("activity")).getRunningAppProcesses()) {
                if (runningAppProcessInfo.processName.equals(str)) {
                    string = string + "#M";
                } else {
                    if (runningAppProcessInfo.processName.startsWith(str + Constants.COLON_SEPARATOR)) {
                        StringBuilder sb = new StringBuilder();
                        sb.append(string);
                        sb.append("#");
                        sb.append(runningAppProcessInfo.processName.replace(str + Constants.COLON_SEPARATOR, ""));
                        string = sb.toString();
                    }
                }
            }
            strSubstring = string;
        } catch (Throwable unused) {
        }
        if (strSubstring.length() > 0) {
            strSubstring = strSubstring.substring(1);
        }
        return strSubstring.length() == 0 ? "N" : strSubstring;
    }

    private static boolean c(PackageInfo packageInfo) {
        int i2 = packageInfo.applicationInfo.flags;
        return (i2 & 1) == 0 && (i2 & 128) == 0;
    }

    public static boolean a(WebView webView, String str, Activity activity) {
        String strSubstring;
        if (TextUtils.isEmpty(str)) {
            return true;
        }
        if (activity == null) {
            return false;
        }
        if (str.toLowerCase().startsWith("alipays://platformapi/startApp?".toLowerCase()) || str.toLowerCase().startsWith("intent://platformapi/startapp?".toLowerCase())) {
            try {
                a aVarA = a(activity, com.alipay.sdk.app.i.a);
                if (aVarA != null && !aVarA.b() && !aVarA.a()) {
                    if (str.startsWith("intent://platformapi/startapp")) {
                        str = str.replaceFirst("intent://platformapi/startapp\\?", "alipays://platformapi/startApp?");
                    }
                    activity.startActivity(new Intent("android.intent.action.VIEW", Uri.parse(str)));
                }
            } catch (Throwable unused) {
            }
            return true;
        }
        if (TextUtils.equals(str, "sdklite://h5quit") || TextUtils.equals(str, com.alipay.sdk.cons.a.n)) {
            com.alipay.sdk.app.j.a(com.alipay.sdk.app.j.c());
            activity.finish();
            return true;
        }
        if (!str.startsWith("sdklite://h5quit?result=")) {
            return false;
        }
        try {
            String strSubstring2 = str.substring(str.indexOf("sdklite://h5quit?result=") + 24);
            int i2 = Integer.parseInt(strSubstring2.substring(strSubstring2.lastIndexOf("&end_code=") + 10));
            if (i2 == com.alipay.sdk.app.k.a.a() || i2 == com.alipay.sdk.app.k.g.a()) {
                if (com.alipay.sdk.cons.a.s) {
                    StringBuilder sb = new StringBuilder();
                    String strDecode = URLDecoder.decode(str);
                    String strDecode2 = URLDecoder.decode(strDecode);
                    String str2 = strDecode2.substring(strDecode2.indexOf("sdklite://h5quit?result=") + 24, strDecode2.lastIndexOf("&end_code=")).split("&return_url=")[0];
                    int iIndexOf = strDecode.indexOf("&return_url=") + 12;
                    sb.append(str2);
                    sb.append("&return_url=");
                    sb.append(strDecode.substring(iIndexOf, strDecode.indexOf("&", iIndexOf)));
                    sb.append(strDecode.substring(strDecode.indexOf("&", iIndexOf)));
                    strSubstring = sb.toString();
                } else {
                    String strDecode3 = URLDecoder.decode(str);
                    strSubstring = strDecode3.substring(strDecode3.indexOf("sdklite://h5quit?result=") + 24, strDecode3.lastIndexOf("&end_code="));
                }
                com.alipay.sdk.app.k kVarB = com.alipay.sdk.app.k.b(i2);
                com.alipay.sdk.app.j.a(com.alipay.sdk.app.j.a(kVarB.a(), kVarB.b(), strSubstring));
            } else {
                com.alipay.sdk.app.k kVarB2 = com.alipay.sdk.app.k.b(com.alipay.sdk.app.k.b.a());
                com.alipay.sdk.app.j.a(com.alipay.sdk.app.j.a(kVarB2.a(), kVarB2.b(), ""));
            }
        } catch (Exception unused2) {
            com.alipay.sdk.app.j.a(com.alipay.sdk.app.j.e());
        }
        activity.runOnUiThread(new p(activity));
        return true;
    }

    public static String i(Context context) {
        return b(context, context.getPackageName());
    }

    public static String b(Context context, String str) {
        try {
            return context.getPackageManager().getPackageInfo(str, 128).versionName;
        } catch (Throwable th) {
            com.alipay.sdk.app.statistic.a.a("biz", "GetPackageInfoEx", th);
            return "";
        }
    }

    public static int j(Context context) {
        return c(context, context.getPackageName());
    }

    public static int c(Context context, String str) {
        try {
            return context.getPackageManager().getPackageInfo(str, 128).versionCode;
        } catch (Throwable th) {
            com.alipay.sdk.app.statistic.a.a("biz", "GetPackageInfoEx", th);
            return -1;
        }
    }

    public static String a(Signature signature) {
        try {
            return b(MessageDigest.getInstance(MessageDigestAlgorithms.SHA_256).digest(signature.toByteArray()));
        } catch (Throwable th) {
            com.alipay.sdk.app.statistic.a.a("biz", "CheckClientSignEx", th);
            return "";
        }
    }

    private static String b(byte[] bArr) {
        StringBuffer stringBuffer = new StringBuffer((bArr.length * 3) - 1);
        int length = bArr.length - 1;
        for (int i2 = 0; i2 <= length; i2++) {
            byte b2 = bArr[i2];
            stringBuffer.append(i[(b2 & 240) >> 4]);
            stringBuffer.append(i[b2 & 15]);
            if (i2 < length) {
                stringBuffer.append(':');
            }
        }
        return stringBuffer.toString();
    }
}
