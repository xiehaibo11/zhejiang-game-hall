package com.igexin.push.extension.distribution.basic.g;

import android.content.Context;

public class a {
    private static int a;
    private static int b;

    public static boolean a(Context context) {
        int i = b;
        boolean zBooleanValue = false;
        if ((i & 1) != 0) {
            return (i & 2) != 0;
        }
        try {
            zBooleanValue = ((Boolean) Class.forName("com.igexin.assist.control.xiaomi.MiuiPushManager").getMethod("checkXMDevice", Context.class).invoke(null, context)).booleanValue();
            if (zBooleanValue) {
                b |= 2;
            }
        } catch (Throwable unused) {
        }
        b |= 1;
        return zBooleanValue;
    }

    public static boolean b(Context context) {
        int i = a;
        boolean zBooleanValue = false;
        if ((i & 1) != 0) {
            return (i & 2) != 0;
        }
        try {
            zBooleanValue = ((Boolean) Class.forName("com.igexin.assist.control.meizu.FlymePushManager").getMethod("checkMZDevice", Context.class).invoke(null, context)).booleanValue();
            if (zBooleanValue) {
                a |= 2;
            }
        } catch (Throwable unused) {
        }
        a |= 1;
        return zBooleanValue;
    }

    public static void c(Context context) {
        try {
            if (a(context)) {
                Class.forName("com.xiaomi.mipush.sdk.MiPushClient").getDeclaredMethod("clearNotification", Context.class).invoke(null, context);
                com.igexin.b.a.c.b.a("AssistUtil | cancelAllAssistNotification() XM ", new Object[0]);
            } else if (b(context)) {
                Class.forName("com.meizu.cloud.pushsdk.PushManager").getDeclaredMethod("clearNotification", Context.class).invoke(null, context);
                com.igexin.b.a.c.b.a("AssistUtil | cancelAllAssistNotification() MZ ", new Object[0]);
            }
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("AssistUtil | cancelAllAssistNotification() err " + th.toString(), new Object[0]);
        }
    }
}
