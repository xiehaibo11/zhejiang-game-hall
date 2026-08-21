package com.xiaomi.push;

import android.content.Context;

class ax {
    private static volatile boolean a;

    private static void a(Class<?> cls, Context context) {
        if (a) {
            return;
        }
        try {
            a = true;
            cls.getDeclaredMethod("InitEntry", Context.class).invoke(cls, context);
        } catch (Throwable th) {
            com.xiaomi.channel.commonutils.logger.b.a("mdid:load lib error " + th);
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
            com.xiaomi.channel.commonutils.logger.b.a("mdid:check error " + th);
            return false;
        }
    }
}
