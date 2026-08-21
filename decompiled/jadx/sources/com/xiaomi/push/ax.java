package com.xiaomi.push;

import android.content.Context;

/* JADX INFO: loaded from: classes4.dex */
class ax {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile boolean f8045a;

    private static void a(Class<?> cls, Context context) {
        if (f8045a) {
            return;
        }
        try {
            f8045a = true;
            cls.getDeclaredMethod("InitEntry", Context.class).invoke(cls, context);
        } catch (Throwable th) {
            com.xiaomi.channel.commonutils.logger.b.m43a("mdid:load lib error " + th);
        }
    }

    public static boolean a(Context context) {
        try {
            Class<?> clsA = v.a(context, "com.bun.miitmdid.core.JLibrary");
            if (clsA == null) {
                return false;
            }
            a(clsA, context);
            return true;
        } catch (Throwable th) {
            com.xiaomi.channel.commonutils.logger.b.m43a("mdid:check error " + th);
            return false;
        }
    }
}
