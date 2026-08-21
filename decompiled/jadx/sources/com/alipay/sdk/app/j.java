package com.alipay.sdk.app;

/* JADX INFO: loaded from: classes.dex */
public class j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static boolean f1113a;
    private static String b;

    public static void a(String str) {
        b = str;
    }

    public static String a() {
        return b;
    }

    public static boolean b() {
        return f1113a;
    }

    public static void a(boolean z) {
        f1113a = z;
    }

    public static String c() {
        k kVarB = k.b(k.CANCELED.a());
        return a(kVarB.a(), kVarB.b(), "");
    }

    public static String d() {
        k kVarB = k.b(k.DOUBLE_REQUEST.a());
        return a(kVarB.a(), kVarB.b(), "");
    }

    public static String e() {
        k kVarB = k.b(k.PARAMS_ERROR.a());
        return a(kVarB.a(), kVarB.b(), "");
    }

    public static String a(int i, String str, String str2) {
        return "resultStatus={" + i + "};memo={" + str + "};result={" + str2 + "}";
    }
}
