package com.igexin.assist.sdk;

import android.content.Context;
import android.util.Log;
import com.igexin.assist.control.AbstractPushManager;
import com.igexin.push.config.j;
import com.igexin.push.core.b.i;

public class a {
    private static int a;
    private static int b;
    private static int c;
    private static int d;
    private static int e;
    private static int f;
    private static int g;
    private static int h;

    static AbstractPushManager a(Context context) {
        if (b(context)) {
            Log.d("Assist_PM", "support xm device");
            com.igexin.b.a.c.b.a("Assist_PM|MiuiPushManager checkDevice flag = true", new Object[0]);
            return a("com.igexin.assist.control.xiaomi.MiuiPushManager", context);
        }
        if (c(context)) {
            Log.d("Assist_PM", "support mz device");
            com.igexin.b.a.c.b.a("Assist_PM|FlymePushManager checkDevice flag = true", new Object[0]);
            return a("com.igexin.assist.control.meizu.FlymePushManager", context);
        }
        if (d(context)) {
            Log.d("Assist_PM", "support hw device");
            com.igexin.b.a.c.b.a("Assist_PM|HmsPushManager checkDevice flag = true", new Object[0]);
            return a("com.igexin.assist.control.huawei.HmsPushManager", context);
        }
        if (e(context)) {
            Log.d("Assist_PM", "support oppo device");
            com.igexin.b.a.c.b.a("Assist_PM|OppoPushManager checkDevice flag = true", new Object[0]);
            return a("com.igexin.assist.control.oppo.OppoPushManager", context);
        }
        if (f(context)) {
            Log.d("Assist_PM", "support vivo device");
            com.igexin.b.a.c.b.a("Assist_PM|VivoPushManager checkDevice flag = true", new Object[0]);
            return a("com.igexin.assist.control.vivo.VivoPushManager", context);
        }
        if (g(context)) {
            Log.d("Assist_PM", "support smartisan device");
            com.igexin.b.a.c.b.a("Assist_PM|SmartisanPushManager checkDevice flag = true", new Object[0]);
            return a("com.igexin.assist.control.st.SmartisanPushManager", context);
        }
        if (h(context) && j.u) {
            com.igexin.b.a.c.b.a("Assist_PM|FcmPushManager checkDevice flag = true", new Object[0]);
            return a("com.igexin.assist.control.fcm.FcmPushManager", context);
        }
        com.igexin.b.a.c.b.a("Assist_PM|getPushManager = null, setToken = false", new Object[0]);
        i.a().c("false");
        com.igexin.b.a.c.b.a("Assist_PM|OtherPushManager = null", new Object[0]);
        return null;
    }

    private static AbstractPushManager a(String str, Context context) {
        try {
            return (AbstractPushManager) Class.forName(str).getConstructor(Context.class).newInstance(context);
        } catch (Exception unused) {
            return null;
        }
    }

    public static boolean b(Context context) {
        int i = d;
        boolean zBooleanValue = false;
        if ((i & 1) != 0) {
            return (i & 2) != 0;
        }
        try {
            zBooleanValue = ((Boolean) Class.forName("com.igexin.assist.control.xiaomi.MiuiPushManager").getMethod("checkXMDevice", Context.class).invoke(null, context)).booleanValue();
            if (zBooleanValue) {
                d |= 2;
            }
        } catch (Throwable unused) {
        }
        d |= 1;
        return zBooleanValue;
    }

    public static boolean c(Context context) {
        int i = c;
        boolean zBooleanValue = false;
        if ((i & 1) != 0) {
            return (i & 2) != 0;
        }
        try {
            zBooleanValue = ((Boolean) Class.forName("com.igexin.assist.control.meizu.FlymePushManager").getMethod("checkMZDevice", Context.class).invoke(null, context)).booleanValue();
            if (zBooleanValue) {
                c |= 2;
            }
        } catch (Throwable unused) {
        }
        c |= 1;
        return zBooleanValue;
    }

    public static boolean d(Context context) {
        int i = a;
        boolean zBooleanValue = false;
        if ((i & 1) != 0) {
            return (i & 2) != 0;
        }
        try {
            zBooleanValue = ((Boolean) Class.forName("com.igexin.assist.control.huawei.HmsPushManager").getMethod("checkHWDevice", Context.class).invoke(null, context)).booleanValue();
            if (zBooleanValue) {
                a |= 2;
            }
        } catch (Throwable unused) {
        }
        a |= 1;
        return zBooleanValue;
    }

    public static boolean e(Context context) {
        int i = b;
        boolean zBooleanValue = false;
        if ((i & 1) != 0) {
            return (i & 2) != 0;
        }
        try {
            zBooleanValue = ((Boolean) Class.forName("com.igexin.assist.control.oppo.OppoPushManager").getMethod("checkOppoDevice", Context.class).invoke(null, context)).booleanValue();
            if (zBooleanValue) {
                b |= 2;
            }
        } catch (Throwable unused) {
        }
        b |= 1;
        return zBooleanValue;
    }

    public static boolean f(Context context) {
        int i = e;
        boolean zBooleanValue = false;
        if ((i & 1) != 0) {
            return (i & 2) != 0;
        }
        try {
            zBooleanValue = ((Boolean) Class.forName("com.igexin.assist.control.vivo.VivoPushManager").getMethod("checkVivoDevice", Context.class).invoke(null, context)).booleanValue();
            if (zBooleanValue) {
                e |= 2;
            }
        } catch (Throwable unused) {
        }
        e |= 1;
        return zBooleanValue;
    }

    public static boolean g(Context context) {
        int i = f;
        boolean zBooleanValue = false;
        if ((i & 1) != 0) {
            return (i & 2) != 0;
        }
        try {
            zBooleanValue = ((Boolean) Class.forName("com.igexin.assist.control.st.SmartisanPushManager").getMethod("checkSTDevice", Context.class).invoke(null, context)).booleanValue();
            if (zBooleanValue) {
                f |= 2;
            }
        } catch (Throwable unused) {
        }
        f |= 1;
        return zBooleanValue;
    }

    public static boolean h(Context context) {
        int i = g;
        boolean zBooleanValue = false;
        if ((i & 1) != 0) {
            return (i & 2) != 0;
        }
        try {
            zBooleanValue = ((Boolean) Class.forName("com.igexin.assist.control.fcm.FcmPushManager").getMethod("checkFcmDevice", Context.class).invoke(null, context)).booleanValue();
            int i2 = g | 1;
            g = i2;
            if (zBooleanValue) {
                g = i2 | 2;
            }
        } catch (Throwable unused) {
        }
        g |= 1;
        return zBooleanValue;
    }

    public static boolean i(Context context) {
        int i = h;
        if ((i & 1) != 0) {
            return (i & 2) != 0;
        }
        boolean z = c(context) || b(context) || d(context) || e(context) || f(context) || g(context);
        if (z) {
            h |= 2;
        }
        h |= 1;
        return z;
    }

    public static void j(Context context) {
        try {
            if (b(context)) {
                Class.forName("com.xiaomi.mipush.sdk.MiPushClient").getDeclaredMethod("clearNotification", Context.class).invoke(null, context);
                com.igexin.b.a.c.b.a("Assist_PM | cancelAllAssistNotification() XM ", new Object[0]);
            } else if (c(context)) {
                Class.forName("com.meizu.cloud.pushsdk.PushManager").getDeclaredMethod("clearNotification", Context.class).invoke(null, context);
                com.igexin.b.a.c.b.a("Assist_PM | cancelAllAssistNotification() MZ ", new Object[0]);
            }
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("Assist_PM | cancelAllAssistNotification() err " + th.toString(), new Object[0]);
        }
    }
}
