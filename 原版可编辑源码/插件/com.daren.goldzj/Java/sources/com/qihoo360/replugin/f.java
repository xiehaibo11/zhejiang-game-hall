package com.qihoo360.replugin;

import android.app.Activity;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;

public class f {

    static class a {
        private static b a;
        private static b b;
        private static b c;
        private static b d;
        private static b e;
        private static b f;
        private static b g;
        private static b h;

        static void a(ClassLoader classLoader) {
            a = new b(classLoader, "com.qihoo360.i.Factory2", "createActivityContext", new Class[]{Activity.class, Context.class});
            b = new b(classLoader, "com.qihoo360.i.Factory2", "handleActivityCreateBefore", new Class[]{Activity.class, Bundle.class});
            c = new b(classLoader, "com.qihoo360.i.Factory2", "handleActivityCreate", new Class[]{Activity.class, Bundle.class});
            d = new b(classLoader, "com.qihoo360.i.Factory2", "handleActivityDestroy", new Class[]{Activity.class});
            e = new b(classLoader, "com.qihoo360.i.Factory2", "handleRestoreInstanceState", new Class[]{Activity.class, Bundle.class});
            f = new b(classLoader, "com.qihoo360.i.Factory2", "startActivity", new Class[]{Activity.class, Intent.class});
            g = new b(classLoader, "com.qihoo360.i.Factory2", "startActivityForResult", new Class[]{Activity.class, Intent.class, Integer.TYPE, Bundle.class});
            h = new b(classLoader, "com.qihoo360.i.Factory", "loadPluginActivity", new Class[]{Intent.class, String.class, String.class, Integer.TYPE});
        }
    }

    public static ComponentName a(Intent intent, String str, String str2, int i) {
        if (!e.a) {
            return null;
        }
        try {
            return (ComponentName) a.h.a(null, intent, str, str2, Integer.valueOf(i));
        } catch (Exception unused) {
            return null;
        }
    }

    public static Context a(Activity activity, Context context) {
        if (!e.a) {
            return context;
        }
        try {
            return (Context) a.a.a(null, activity, context);
        } catch (Exception unused) {
            return null;
        }
    }

    public static void a(Activity activity) {
        if (e.a) {
            a.d.a(null, activity);
        }
    }

    public static void a(Activity activity, Bundle bundle) {
        if (e.a) {
            a.b.a(null, activity, bundle);
        }
    }

    public static boolean a(Activity activity, Intent intent) {
        if (!e.a) {
            return false;
        }
        try {
            Object objA = a.f.a(null, activity, intent);
            if (objA != null) {
                return ((Boolean) objA).booleanValue();
            }
        } catch (Exception unused) {
        }
        return false;
    }

    public static boolean a(Activity activity, Intent intent, int i) {
        return a(activity, intent, i, (Bundle) null);
    }

    public static boolean a(Activity activity, Intent intent, int i, Bundle bundle) {
        if (!e.a) {
            return false;
        }
        try {
            Object objA = a.g.a(null, activity, intent, Integer.valueOf(i), bundle);
            if (objA != null) {
                return ((Boolean) objA).booleanValue();
            }
        } catch (Exception unused) {
        }
        return b(activity, intent, i, bundle);
    }

    private static String b(Activity activity, Intent intent) {
        String packageName = intent.getComponent() != null ? intent.getComponent().getPackageName() : "";
        return (TextUtils.isEmpty(packageName) || packageName.contains(".")) ? RePlugin.fetchPluginNameByClassLoader(activity.getClassLoader()) : packageName;
    }

    public static void b(Activity activity, Bundle bundle) {
        if (e.a) {
            a.c.a(null, activity, bundle);
        }
    }

    private static boolean b(Activity activity, Intent intent, int i, Bundle bundle) {
        ComponentName component;
        ComponentName componentNameA;
        String strB = b(activity, intent);
        if (TextUtils.isEmpty(strB) || (component = intent.getComponent()) == null || (componentNameA = a(intent, strB, component.getClassName(), Integer.MIN_VALUE)) == null) {
            return false;
        }
        intent.setComponent(componentNameA);
        if (Build.VERSION.SDK_INT >= 16) {
            activity.startActivityForResult(intent, i, bundle);
            return true;
        }
        activity.startActivityForResult(intent, i);
        return true;
    }

    public static void c(Activity activity, Bundle bundle) {
        if (e.a) {
            a.e.a(null, activity, bundle);
        }
    }
}
