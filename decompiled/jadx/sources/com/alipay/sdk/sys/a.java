package com.alipay.sdk.sys;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.text.TextUtils;
import com.alipay.sdk.util.c;
import com.alipay.sdk.util.n;
import java.io.UnsupportedEncodingException;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f1309a = "\"&";
    public static final String b = "&";
    public static final String c = "bizcontext=\"";
    public static final String d = "bizcontext=";
    public static final String e = "\"";
    public static final String f = "appkey";
    public static final String g = "ty";
    public static final String h = "sv";
    public static final String i = "an";
    public static final String j = "setting";
    public static final String k = "av";
    public static final String l = "sdk_start_time";
    public static final String m = "UTF-8";
    private String n;
    private String o;
    private Context p;

    public a(Context context) {
        this.n = "";
        this.o = "";
        this.p = null;
        try {
            PackageInfo packageInfo = context.getPackageManager().getPackageInfo(context.getPackageName(), 0);
            this.n = packageInfo.versionName;
            this.o = packageInfo.packageName;
            this.p = context.getApplicationContext();
        } catch (Exception unused) {
        }
    }

    public String a(String str) {
        if (TextUtils.isEmpty(str) || str.startsWith(com.alipay.sdk.m.s.a.C)) {
            return str;
        }
        if (b(str)) {
            return c(str);
        }
        return d(str);
    }

    private boolean b(String str) {
        return !str.contains("\"&");
    }

    private String c(String str) {
        try {
            String strA = a(str, "&", "bizcontext=");
            if (TextUtils.isEmpty(strA)) {
                str = str + "&" + b("bizcontext=", "");
            } else {
                int iIndexOf = str.indexOf(strA);
                str = str.substring(0, iIndexOf) + a(strA, "bizcontext=", "", true) + str.substring(iIndexOf + strA.length());
            }
        } catch (Throwable unused) {
        }
        return str;
    }

    private String d(String str) {
        try {
            String strA = a(str, "\"&", "bizcontext=\"");
            if (TextUtils.isEmpty(strA)) {
                return str + "&" + b("bizcontext=\"", "\"");
            }
            if (!strA.endsWith("\"")) {
                strA = strA + "\"";
            }
            int iIndexOf = str.indexOf(strA);
            return str.substring(0, iIndexOf) + a(strA, "bizcontext=\"", "\"", false) + str.substring(iIndexOf + strA.length());
        } catch (Throwable unused) {
            return str;
        }
    }

    private String a(String str, String str2, String str3) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        String[] strArrSplit = str.split(str2);
        for (int i2 = 0; i2 < strArrSplit.length; i2++) {
            if (!TextUtils.isEmpty(strArrSplit[i2]) && strArrSplit[i2].startsWith(str3)) {
                return strArrSplit[i2];
            }
        }
        return null;
    }

    private String b(String str, String str2) throws JSONException, UnsupportedEncodingException {
        return str + a("", "") + str2;
    }

    public String a(String str, String str2) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("appkey", "2014052600006128");
            jSONObject.put("ty", "and_lite");
            jSONObject.put("sv", "h.a.3.6.2");
            if (!this.o.contains("setting") || !n.b(this.p)) {
                jSONObject.put("an", this.o);
            }
            jSONObject.put("av", this.n);
            jSONObject.put("sdk_start_time", System.currentTimeMillis());
            if (!TextUtils.isEmpty(str)) {
                jSONObject.put(str, str2);
            }
            return jSONObject.toString();
        } catch (Throwable th) {
            c.a(th);
            return "";
        }
    }

    private String a(String str, String str2, String str3, boolean z) throws JSONException, UnsupportedEncodingException {
        String strSubstring = str.substring(str2.length());
        JSONObject jSONObject = new JSONObject(strSubstring.substring(0, strSubstring.length() - str3.length()));
        if (!jSONObject.has("appkey")) {
            jSONObject.put("appkey", "2014052600006128");
        }
        if (!jSONObject.has("ty")) {
            jSONObject.put("ty", "and_lite");
        }
        if (!jSONObject.has("sv")) {
            jSONObject.put("sv", "h.a.3.6.2");
        }
        if (!jSONObject.has("an") && (!this.o.contains("setting") || !n.b(this.p))) {
            jSONObject.put("an", this.o);
        }
        if (!jSONObject.has("av")) {
            jSONObject.put("av", this.n);
        }
        if (!jSONObject.has("sdk_start_time")) {
            jSONObject.put("sdk_start_time", System.currentTimeMillis());
        }
        return str2 + jSONObject.toString() + str3;
    }
}
