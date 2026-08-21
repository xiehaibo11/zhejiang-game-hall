package com.alipay.sdk.util;

import android.content.Context;
import android.preference.PreferenceManager;
import android.text.TextUtils;

/* JADX INFO: loaded from: classes.dex */
public class j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f1321a;

    public static boolean a(Context context, String str) {
        try {
            return PreferenceManager.getDefaultSharedPreferences(context).contains(str);
        } catch (Throwable th) {
            c.a(th);
            return false;
        }
    }

    public static void b(Context context, String str) {
        try {
            PreferenceManager.getDefaultSharedPreferences(context).edit().remove(str).commit();
        } catch (Throwable th) {
            c.a(th);
        }
    }

    public static void a(Context context, String str, String str2) {
        try {
            String strA = com.alipay.sdk.encrypt.e.a(a(context), str2);
            if (!TextUtils.isEmpty(str2) && TextUtils.isEmpty(strA)) {
                com.alipay.sdk.app.statistic.a.a("cp", "TriDesDecryptError", String.format("%s,%s", str, str2));
            }
            PreferenceManager.getDefaultSharedPreferences(context).edit().putString(str, strA).commit();
        } catch (Throwable th) {
            c.a(th);
        }
    }

    public static String b(Context context, String str, String str2) {
        try {
            String string = PreferenceManager.getDefaultSharedPreferences(context).getString(str, str2);
            strB = TextUtils.isEmpty(string) ? null : com.alipay.sdk.encrypt.e.b(a(context), string);
            if (!TextUtils.isEmpty(string) && TextUtils.isEmpty(strB)) {
                com.alipay.sdk.app.statistic.a.a("cp", "TriDesEncryptError", String.format("%s,%s", str, string));
            }
        } catch (Exception e) {
            c.a(e);
        }
        return strB;
    }

    private static String a(Context context) {
        String packageName;
        if (TextUtils.isEmpty(f1321a)) {
            try {
                packageName = context.getApplicationContext().getPackageName();
            } catch (Throwable th) {
                c.a(th);
                packageName = "";
            }
            f1321a = (packageName + "0000000000000000000000000000").substring(0, 24);
        }
        return f1321a;
    }
}
