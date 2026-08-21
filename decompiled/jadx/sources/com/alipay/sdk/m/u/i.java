package com.alipay.sdk.m.u;

import android.content.Context;
import android.text.TextUtils;

/* JADX INFO: loaded from: classes.dex */
public class i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f1262a = "pref_trade_token";
    public static final String b = ";";
    public static final String c = "result={";
    public static final String d = "}";
    public static final String e = "trade_token=\"";
    public static final String f = "\"";
    public static final String g = "trade_token=";

    public static void a(com.alipay.sdk.m.s.a aVar, Context context, String str) {
        try {
            String strA = a(str);
            e.b(com.alipay.sdk.m.l.a.A, "trade token: " + strA);
            if (TextUtils.isEmpty(strA)) {
                return;
            }
            j.b(aVar, context, "pref_trade_token", strA);
        } catch (Throwable th) {
            com.alipay.sdk.m.k.a.a(aVar, "biz", "SaveTradeTokenError", th);
            e.a(th);
        }
    }

    public static String a(String str) {
        String strSubstring = null;
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        String[] strArrSplit = str.split(";");
        for (int i = 0; i < strArrSplit.length; i++) {
            if (strArrSplit[i].startsWith("result={") && strArrSplit[i].endsWith("}")) {
                String[] strArrSplit2 = strArrSplit[i].substring(8, strArrSplit[i].length() - 1).split("&");
                int i2 = 0;
                while (true) {
                    if (i2 >= strArrSplit2.length) {
                        break;
                    }
                    if (strArrSplit2[i2].startsWith("trade_token=\"") && strArrSplit2[i2].endsWith("\"")) {
                        strSubstring = strArrSplit2[i2].substring(13, strArrSplit2[i2].length() - 1);
                        break;
                    }
                    if (strArrSplit2[i2].startsWith("trade_token=")) {
                        strSubstring = strArrSplit2[i2].substring(12);
                        break;
                    }
                    i2++;
                }
            }
        }
        return strSubstring;
    }

    public static String a(com.alipay.sdk.m.s.a aVar, Context context) {
        String strA = j.a(aVar, context, "pref_trade_token", "");
        e.b(com.alipay.sdk.m.l.a.A, "get trade token: " + strA);
        return strA;
    }
}
