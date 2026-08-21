package com.alipay.sdk.app.statistic;

import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import com.xiaomi.mipush.sdk.Constants;
import java.text.SimpleDateFormat;
import java.util.Date;

public class c {
    public static final String A = "ClientBindServiceFailed";
    public static final String B = "BindWaitTimeoutEx";
    public static final String C = "CheckClientExistEx";
    public static final String D = "CheckClientSignEx";
    public static final String E = "GetInstalledAppEx";
    public static final String F = "ParserTidClientKeyEx";
    public static final String G = "GetInstalledAppEx";
    public static final String H = "StartLaunchAppTransEx";
    public static final String I = "CheckLaunchAppExistEx";
    public static final String J = "LogCurrentAppLaunchSwitch";
    public static final String K = "LogCurrentQueryTime";
    public static final String L = "LogCalledPackage";
    public static final String M = "LogBindCalledH5";
    public static final String N = "LogCalledH5";
    public static final String O = "LogHkLoginByIntent";
    public static final String P = "SchemePayWrongHashEx";
    public static final String Q = "LogAppLaunchSwitchEnabled";
    public static final String R = "H5CbUrlEmpty";
    public static final String S = "H5CbEx";
    public static final String T = "tid_context_null";
    public static final String U = "partner";
    public static final String V = "out_trade_no";
    public static final String W = "trade_no";
    public static final String a = "net";
    public static final String b = "biz";
    public static final String c = "cp";
    public static final String d = "auth";
    public static final String e = "third";
    public static final String f = "tid";
    public static final String g = "FormatResultEx";
    public static final String h = "GetApdidEx";
    public static final String i = "GetApdidNull";
    public static final String j = "GetApdidTimeout";
    public static final String k = "GetUtdidEx";
    public static final String l = "GetPackageInfoEx";
    public static final String m = "NotIncludeSignatures";
    public static final String n = "GetInstalledPackagesEx";
    public static final String o = "GetPublicKeyFromSignEx";
    public static final String p = "H5PayNetworkError";
    public static final String q = "H5AuthNetworkError";
    public static final String r = "SSLError";
    public static final String s = "H5PayDataAnalysisError";
    public static final String t = "H5AuthDataAnalysisError";
    public static final String u = "PublicKeyUnmatch";
    public static final String v = "ClientBindFailed";
    public static final String w = "TriDesEncryptError";
    public static final String x = "TriDesDecryptError";
    public static final String y = "ClientBindException";
    public static final String z = "SaveTradeTokenError";
    private String X;
    private String Y;
    private String Z;
    private String aa;
    private String ab;
    private String ac;
    private String ad;
    private String ae;
    private String af = "";
    private String ag;

    public c(Context context) {
        context = context != null ? context.getApplicationContext() : context;
        this.X = b();
        this.Z = a(context);
        this.aa = c();
        this.ab = d();
        this.ac = b(context);
        this.ad = Constants.ACCEPT_TIME_SEPARATOR_SERVER;
        this.ae = Constants.ACCEPT_TIME_SEPARATOR_SERVER;
        this.ag = Constants.ACCEPT_TIME_SEPARATOR_SERVER;
    }

    public boolean a() {
        return TextUtils.isEmpty(this.af);
    }

    public void a(String str, String str2, Throwable th) {
        a(str, str2, a(th));
    }

    public void a(String str, String str2, Throwable th, String str3) {
        a(str, str2, a(th), str3);
    }

    public void a(String str, String str2, String str3, String str4) {
        String str5 = "";
        if (!TextUtils.isEmpty(this.af)) {
            str5 = "^";
        }
        this.af += (str5 + String.format("%s,%s,%s,%s", str, str2, b(str3), str4));
    }

    public void a(String str, String str2, String str3) {
        a(str, str2, str3, Constants.ACCEPT_TIME_SEPARATOR_SERVER);
    }

    private String b(String str) {
        return TextUtils.isEmpty(str) ? "" : str.replace("[", "【").replace("]", "】").replace("(", "（").replace(")", "）").replace(Constants.ACCEPT_TIME_SEPARATOR_SP, "，").replace(Constants.ACCEPT_TIME_SEPARATOR_SERVER, ContainerUtils.KEY_VALUE_DELIMITER).replace("^", Constants.WAVE_SEPARATOR);
    }

    private String a(Throwable th) {
        if (th == null) {
            return "";
        }
        StringBuffer stringBuffer = new StringBuffer();
        try {
            stringBuffer.append(th.getClass().getName());
            stringBuffer.append(Constants.COLON_SEPARATOR);
            stringBuffer.append(th.getMessage());
            stringBuffer.append(" 》 ");
            StackTraceElement[] stackTrace = th.getStackTrace();
            if (stackTrace != null) {
                for (StackTraceElement stackTraceElement : stackTrace) {
                    stringBuffer.append(stackTraceElement.toString() + " 》 ");
                }
            }
        } catch (Throwable unused) {
        }
        return stringBuffer.toString();
    }

    public String a(String str) {
        if (a()) {
            return "";
        }
        this.Y = c(str);
        return String.format("[(%s),(%s),(%s),(%s),(%s),(%s),(%s),(%s),(%s),(%s)]", this.X, this.Y, this.Z, this.aa, this.ab, this.ac, this.ad, this.ae, this.af, this.ag);
    }

    private String b() {
        return String.format("123456789,%s", new SimpleDateFormat("yyyy-MM-dd-HH:mm:ss").format(new Date()));
    }

    private String c(String str) {
        String strReplace;
        String[] strArrSplit = str.split("&");
        String str2 = null;
        if (strArrSplit != null) {
            strReplace = null;
            String strReplace2 = null;
            for (String str3 : strArrSplit) {
                String[] strArrSplit2 = str3.split(ContainerUtils.KEY_VALUE_DELIMITER);
                if (strArrSplit2 != null && strArrSplit2.length == 2) {
                    if (strArrSplit2[0].equalsIgnoreCase("partner")) {
                        strArrSplit2[1].replace("\"", "");
                    } else if (strArrSplit2[0].equalsIgnoreCase("out_trade_no")) {
                        strReplace = strArrSplit2[1].replace("\"", "");
                    } else if (strArrSplit2[0].equalsIgnoreCase("trade_no")) {
                        strReplace2 = strArrSplit2[1].replace("\"", "");
                    }
                }
            }
            str2 = strReplace2;
        } else {
            strReplace = null;
        }
        String strB = b(str2);
        String strB2 = b(strReplace);
        return String.format("%s,%s,-,%s,-,-,-", strB, strB2, b(strB2));
    }

    private String a(Context context) {
        String packageName;
        String str = Constants.ACCEPT_TIME_SEPARATOR_SERVER;
        if (context != null) {
            try {
                Context applicationContext = context.getApplicationContext();
                packageName = applicationContext.getPackageName();
                try {
                    str = applicationContext.getPackageManager().getPackageInfo(packageName, 0).versionName;
                } catch (Throwable unused) {
                }
            } catch (Throwable unused2) {
                packageName = Constants.ACCEPT_TIME_SEPARATOR_SERVER;
            }
        } else {
            packageName = Constants.ACCEPT_TIME_SEPARATOR_SERVER;
        }
        return String.format("%s,%s,-,-,-", packageName, str);
    }

    private String c() {
        return String.format("android,3,%s,%s,com.alipay.mcpay,5.0,-,-,-", b("15.6.2"), b("h.a.3.6.2"));
    }

    private String d() {
        return String.format("%s,%s,-,-,-", b(com.alipay.sdk.tid.b.a(com.alipay.sdk.sys.b.a().b()).a()), b(com.alipay.sdk.sys.b.a().e()));
    }

    private String b(Context context) {
        return String.format("%s,%s,%s,%s,%s,%s,%s,%s,%s,-", b(com.alipay.sdk.util.a.d(context)), "android", b(Build.VERSION.RELEASE), b(Build.MODEL), Constants.ACCEPT_TIME_SEPARATOR_SERVER, b(com.alipay.sdk.util.a.a(context).a()), b(com.alipay.sdk.util.a.b(context).b()), "gw", b(com.alipay.sdk.util.a.a(context).b()));
    }
}
