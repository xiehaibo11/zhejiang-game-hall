package com.qihoo360.replugin.base;

import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import com.qihoo360.replugin.b;
import com.qihoo360.replugin.e;

public class IPC {

    public static class a {
        private static b a;
        private static b b;
        private static b c;
        private static b d;
        private static b e;
        private static b f;
        private static b g;
        private static b h;
        private static b i;
        private static b j;
        private static b k;
        private static b l;
        private static b m;
        private static b n;
        private static b o;
        private static b p;
        private static b q;

        static b a() {
            return a;
        }

        public static void a(ClassLoader r8) {
            a = new b(r8, "com.qihoo360.replugin.base.IPC", "getCurrentProcessName", new Class[0]);
            b = new b(r8, "com.qihoo360.replugin.base.IPC", "getCurrentProcessId", new Class[0]);
            c = new b(r8, "com.qihoo360.replugin.base.IPC", "getPersistentProcessName", new Class[0]);
            d = new b(r8, "com.qihoo360.replugin.base.IPC", "getPluginHostProcessName", new Class[0]);
            e = new b(r8, "com.qihoo360.replugin.base.IPC", "isPluginHostProcess", new Class[0]);
            f = new b(r8, "com.qihoo360.replugin.base.IPC", "isUIProcess", new Class[0]);
            g = new b(r8, "com.qihoo360.replugin.base.IPC", "isPersistentProcess", new Class[0]);
            h = new b(r8, "com.qihoo360.replugin.base.IPC", "isPersistentEnable", new Class[0]);
            i = new b(r8, "com.qihoo360.replugin.base.IPC", "getPidByProcessName", new Class[]{String.class});
            j = new b(r8, "com.qihoo360.replugin.base.IPC", "getProcessNameByPid", new Class[]{Integer.TYPE});
            k = new b(r8, "com.qihoo360.replugin.base.IPC", "getPackageName", new Class[0]);
            l = new b(r8, "com.qihoo360.replugin.base.IPC", "sendLocalBroadcast2Plugin", new Class[]{Context.class, String.class, Intent.class});
            m = new b(r8, "com.qihoo360.replugin.base.IPC", "sendLocalBroadcast2Process", new Class[]{Context.class, String.class, Intent.class});
            n = new b(r8, "com.qihoo360.replugin.base.IPC", "sendLocalBroadcast2All", new Class[]{Context.class, Intent.class});
            o = new b(r8, "com.qihoo360.replugin.base.IPC", "sendLocalBroadcast2PluginSync", new Class[]{Context.class, String.class, Intent.class});
            p = new b(r8, "com.qihoo360.replugin.base.IPC", "sendLocalBroadcast2ProcessSync", new Class[]{Context.class, String.class, Intent.class});
            q = new b(r8, "com.qihoo360.replugin.base.IPC", "sendLocalBroadcast2AllSync", new Class[]{Context.class, Intent.class});
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

        static b i() {
            return i;
        }

        static b j() {
            return j;
        }

        static b k() {
            return k;
        }

        static b l() {
            return l;
        }

        static b m() {
            return m;
        }

        static b n() {
            return n;
        }

        static b o() {
            return o;
        }

        static b p() {
            return p;
        }

        static b q() {
            return q;
        }
    }

    public IPC() {
    }

    public static int getCurrentProcessId() {
        if (e.a() == true) goto L11;
        return -1;
    L11:
        Object r0 = a.b().a(null, new Object[0]);     // Catch: Exception -> L10
        if (r0 == null) goto L9;
        return ((Integer) r0).intValue();
    L9:
        return -1;
    }

    public static String getCurrentProcessName() {
        if (e.a() == true) goto L8;
        return null;
    L8:
        return (String) a.a().a(null, new Object[0]);
    L7:
        return null;
    }

    public static String getPackageName() {
        if (e.a() == true) goto L8;
        return null;
    L8:
        return (String) a.k().a(null, new Object[0]);
    L7:
        return null;
    }

    public static String getPersistentProcessName() {
        if (e.a() == true) goto L8;
        return null;
    L8:
        return (String) a.c().a(null, new Object[0]);
    L7:
        return null;
    }

    public static int getPidByProcessName(String r5) {
        if (e.a() == true) goto L11;
        return -1;
    L11:
        Object r52 = a.i().a(null, new Object[]{r5});     // Catch: Exception -> L10
        if (r52 == null) goto L9;
        return ((Integer) r52).intValue();
    L9:
        return -1;
    }

    public static String getPluginHostProcessName() {
        if (e.a() == true) goto L8;
        return null;
    L8:
        return (String) a.d().a(null, new Object[0]);
    L7:
        return null;
    }

    public static String getProcessNameByPid(int r4) {
        if (e.a() == true) goto L8;
        return null;
    L8:
        return (String) a.j().a(null, new Object[]{Integer.valueOf(r4)});
    L7:
        return null;
    }

    public static boolean isPersistentEnable() {
        if (e.a() == true) goto L11;
        return false;
    L11:
        Object r0 = a.h().a(null, new Object[0]);     // Catch: Exception -> L10
        if (r0 == null) goto L9;
        return ((Boolean) r0).booleanValue();
    L9:
        return false;
    }

    public static boolean isPersistentProcess() {
        if (e.a() == true) goto L11;
        return false;
    L11:
        Object r0 = a.g().a(null, new Object[0]);     // Catch: Exception -> L10
        if (r0 == null) goto L9;
        return ((Boolean) r0).booleanValue();
    L9:
        return false;
    }

    public static boolean isPluginHostProcess() {
        if (e.a() == true) goto L11;
        return false;
    L11:
        Object r0 = a.e().a(null, new Object[0]);     // Catch: Exception -> L10
        if (r0 == null) goto L9;
        return ((Boolean) r0).booleanValue();
    L9:
        return false;
    }

    public static boolean isUIProcess() {
        if (e.a() == true) goto L11;
        return false;
    L11:
        Object r0 = a.f().a(null, new Object[0]);     // Catch: Exception -> L10
        if (r0 == null) goto L9;
        return ((Boolean) r0).booleanValue();
    L9:
        return false;
    }

    public static boolean sendLocalBroadcast2All(Context r4, Intent r5) {
        if (e.a() == true) goto L11;
        return false;
    L11:
        Object r42 = a.n().a(null, new Object[]{r4, r5});     // Catch: Exception -> L10
        if (r42 == null) goto L9;
        return ((Boolean) r42).booleanValue();
    L9:
        return false;
    }

    public static boolean sendLocalBroadcast2AllSync(Context r4, Intent r5) {
        if (e.a() == true) goto L11;
        return false;
    L11:
        Object r42 = a.q().a(null, new Object[]{r4, r5});     // Catch: Exception -> L10
        if (r42 == null) goto L9;
        return ((Boolean) r42).booleanValue();
    L9:
        return false;
    }

    public static boolean sendLocalBroadcast2Plugin(Context r4, String r5, Intent r6) {
        if (TextUtils.isEmpty(r5) == false) goto L6;
        return false;
    L6:
        if (e.a() == true) goto L14;
        return false;
    L14:
        Object r42 = a.l().a(null, new Object[]{r4, r5, r6});     // Catch: Exception -> L13
        if (r42 == null) goto L12;
        return ((Boolean) r42).booleanValue();
    L12:
        return false;
    }

    public static boolean sendLocalBroadcast2PluginSync(Context r4, String r5, Intent r6) {
        if (TextUtils.isEmpty(r5) == false) goto L6;
        return false;
    L6:
        if (e.a() == true) goto L14;
        return false;
    L14:
        Object r42 = a.o().a(null, new Object[]{r4, r5, r6});     // Catch: Exception -> L13
        if (r42 == null) goto L12;
        return ((Boolean) r42).booleanValue();
    L12:
        return false;
    }

    public static boolean sendLocalBroadcast2Process(Context r4, String r5, Intent r6) {
        if (TextUtils.isEmpty(r5) == false) goto L6;
        return false;
    L6:
        if (e.a() == true) goto L15;
        return false;
    L15:
        Object r42 = a.m().a(null, new Object[]{r4, r5, r6});     // Catch: Exception -> L12
        if (r42 == null) goto L14;
        return ((Boolean) r42).booleanValue();
    L14:
        return false;
    L12:
        e = move-exception;
        e.printStackTrace();
        goto L14
    }

    public static boolean sendLocalBroadcast2ProcessSync(Context r4, String r5, Intent r6) {
        if (TextUtils.isEmpty(r5) == false) goto L6;
        return false;
    L6:
        if (e.a() == true) goto L14;
        return false;
    L14:
        Object r42 = a.p().a(null, new Object[]{r4, r5, r6});     // Catch: Exception -> L13
        if (r42 == null) goto L12;
        return ((Boolean) r42).booleanValue();
    L12:
        return false;
    }
}
