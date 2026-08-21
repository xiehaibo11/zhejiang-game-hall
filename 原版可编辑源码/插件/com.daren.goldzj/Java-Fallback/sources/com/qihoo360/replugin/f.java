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

        static b a() {
            return a;
        }

        static void a(ClassLoader r9) {
            a = new b(r9, "com.qihoo360.i.Factory2", "createActivityContext", new Class[]{Activity.class, Context.class});
            b = new b(r9, "com.qihoo360.i.Factory2", "handleActivityCreateBefore", new Class[]{Activity.class, Bundle.class});
            c = new b(r9, "com.qihoo360.i.Factory2", "handleActivityCreate", new Class[]{Activity.class, Bundle.class});
            d = new b(r9, "com.qihoo360.i.Factory2", "handleActivityDestroy", new Class[]{Activity.class});
            e = new b(r9, "com.qihoo360.i.Factory2", "handleRestoreInstanceState", new Class[]{Activity.class, Bundle.class});
            f = new b(r9, "com.qihoo360.i.Factory2", "startActivity", new Class[]{Activity.class, Intent.class});
            g = new b(r9, "com.qihoo360.i.Factory2", "startActivityForResult", new Class[]{Activity.class, Intent.class, Integer.TYPE, Bundle.class});
            h = new b(r9, "com.qihoo360.i.Factory", "loadPluginActivity", new Class[]{Intent.class, String.class, String.class, Integer.TYPE});
        }

        static b b() {
            return b;
        }

        static b c() {
            return c;
        }

        static b d() {
            return d;
        }

        static b e() {
            return e;
        }

        static b f() {
            return f;
        }

        static b g() {
            return g;
        }

        static b h() {
            return h;
        }
    }

    public static ComponentName a(Intent r4, String r5, String r6, int r7) {
        if (e.a == true) goto L8;
        return null;
    L8:
        return (ComponentName) a.h().a(null, new Object[]{r4, r5, r6, Integer.valueOf(r7)});
    L7:
        return null;
    }

    public static Context a(Activity r4, Context r5) {
        if (e.a == true) goto L9;
        return r5;
    L9:
        return (Context) a.a().a(null, new Object[]{r4, r5});
    L8:
        return null;
    }

    public static void a(Activity r4) {
        if (e.a == true) goto L5;
        return;
    L5:
        a.d().a(null, new Object[]{r4});
    }

    public static void a(Activity r4, Bundle r5) {
        if (e.a == true) goto L5;
        return;
    L5:
        a.b().a(null, new Object[]{r4, r5});
    }

    public static boolean a(Activity r4, Intent r5) {
        if (e.a == true) goto L11;
        return false;
    L11:
        Object r42 = a.f().a(null, new Object[]{r4, r5});     // Catch: Exception -> L10
        if (r42 == null) goto L9;
        return ((Boolean) r42).booleanValue();
    L9:
        return false;
    }

    public static boolean a(Activity r1, Intent r2, int r3) {
        return a(r1, r2, r3, null);
    }

    public static boolean a(Activity r5, Intent r6, int r7, Bundle r8) {
        if (e.a == true) goto L12;
        return false;
    L12:
        Object r0 = a.g().a(null, new Object[]{r5, r6, Integer.valueOf(r7), r8});     // Catch: Exception -> L11
        if (r0 == null) goto L10;
        return ((Boolean) r0).booleanValue();
    L10:
        return b(r5, r6, r7, r8);
    }

    private static String b(Activity r1, Intent r2) {
        if (r2.getComponent() == null) goto L5;
        String r22 = r2.getComponent().getPackageName();
    L7:
        if (TextUtils.isEmpty(r22) == true) goto L11;
        if (r22.contains(".") == true) goto L11;
        return r22;
    L11:
        return RePlugin.fetchPluginNameByClassLoader(r1.getClassLoader());
    L5:
        r22 = "";
        goto L7
    }

    public static void b(Activity r4, Bundle r5) {
        if (e.a == true) goto L5;
        return;
    L5:
        a.c().a(null, new Object[]{r4, r5});
    }

    private static boolean b(Activity r4, Intent r5, int r6, Bundle r7) {
        String r0 = b(r4, r5);
        if (TextUtils.isEmpty(r0) == false) goto L5;
        return false;
    L5:
        ComponentName r1 = r5.getComponent();
        if (r1 != null) goto L8;
        return false;
    L8:
        ComponentName r02 = a(r5, r0, r1.getClassName(), Integer.MIN_VALUE);
        if (r02 != null) goto L11;
        return false;
    L11:
        r5.setComponent(r02);
        if (Build.VERSION.SDK_INT < 16) goto L14;
        r4.startActivityForResult(r5, r6, r7);
        return true;
    L14:
        r4.startActivityForResult(r5, r6);
        return true;
    }

    public static void c(Activity r4, Bundle r5) {
        if (e.a == true) goto L5;
        return;
    L5:
        a.e().a(null, new Object[]{r4, r5});
    }
}
