package com.qq.e.comm.managers.plugin;

import java.lang.reflect.Method;

/* JADX INFO: loaded from: classes3.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Method f4685a;
    private static boolean b;

    public static void a(Throwable th, String str) {
        try {
            Exception exc = new Exception("插件错误：" + str, th);
            if (b) {
                return;
            }
            if (f4685a == null) {
                Method declaredMethod = Class.forName("com.tencent.bugly.crashreport.CrashReport").getDeclaredMethod("postCatchedException", Throwable.class);
                f4685a = declaredMethod;
                declaredMethod.setAccessible(true);
            }
            f4685a.invoke(null, exc);
        } catch (Throwable unused) {
            b = true;
        }
    }
}
