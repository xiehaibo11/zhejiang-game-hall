package com.alipay.sdk.m.j;

/* JADX INFO: loaded from: classes.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static boolean f1195a;
    public static String b;

    public static void a(String str) {
        b = str;
    }

    public static String b() {
        c cVarB = c.b(c.DOUBLE_REQUEST.b());
        return a(cVarB.b(), cVarB.a(), "");
    }

    public static boolean c() {
        return f1195a;
    }

    public static String d() {
        return b;
    }

    public static String e() {
        c cVarB = c.b(c.PARAMS_ERROR.b());
        return a(cVarB.b(), cVarB.a(), "");
    }

    public static void a(boolean z) {
        f1195a = z;
    }

    public static String a() {
        c cVarB = c.b(c.CANCELED.b());
        return a(cVarB.b(), cVarB.a(), "");
    }

    public static String a(int i, String str, String str2) {
        return "resultStatus={" + i + "};memo={" + str + "};result={" + str2 + "}";
    }
}
