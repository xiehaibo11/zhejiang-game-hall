package com.meizu.cloud.pushsdk.c.a;

import com.meizu.cloud.pushinternal.DebugLogger;

/* JADX INFO: loaded from: classes3.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static boolean f4512a = false;
    private static String b = "AndroidNetworking";

    public static void a() {
        f4512a = true;
    }

    public static void a(String str) {
        if (f4512a) {
            DebugLogger.d(b, str);
        }
    }

    public static void b(String str) {
        if (f4512a) {
            DebugLogger.i(b, str);
        }
    }
}
