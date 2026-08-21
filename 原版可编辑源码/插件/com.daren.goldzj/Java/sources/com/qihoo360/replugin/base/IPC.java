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

        public static void a(ClassLoader classLoader) {
            a = new b(classLoader, "com.qihoo360.replugin.base.IPC", "getCurrentProcessName", new Class[0]);
            b = new b(classLoader, "com.qihoo360.replugin.base.IPC", "getCurrentProcessId", new Class[0]);
            c = new b(classLoader, "com.qihoo360.replugin.base.IPC", "getPersistentProcessName", new Class[0]);
            d = new b(classLoader, "com.qihoo360.replugin.base.IPC", "getPluginHostProcessName", new Class[0]);
            e = new b(classLoader, "com.qihoo360.replugin.base.IPC", "isPluginHostProcess", new Class[0]);
            f = new b(classLoader, "com.qihoo360.replugin.base.IPC", "isUIProcess", new Class[0]);
            g = new b(classLoader, "com.qihoo360.replugin.base.IPC", "isPersistentProcess", new Class[0]);
            h = new b(classLoader, "com.qihoo360.replugin.base.IPC", "isPersistentEnable", new Class[0]);
            i = new b(classLoader, "com.qihoo360.replugin.base.IPC", "getPidByProcessName", new Class[]{String.class});
            j = new b(classLoader, "com.qihoo360.replugin.base.IPC", "getProcessNameByPid", new Class[]{Integer.TYPE});
            k = new b(classLoader, "com.qihoo360.replugin.base.IPC", "getPackageName", new Class[0]);
            l = new b(classLoader, "com.qihoo360.replugin.base.IPC", "sendLocalBroadcast2Plugin", new Class[]{Context.class, String.class, Intent.class});
            m = new b(classLoader, "com.qihoo360.replugin.base.IPC", "sendLocalBroadcast2Process", new Class[]{Context.class, String.class, Intent.class});
            n = new b(classLoader, "com.qihoo360.replugin.base.IPC", "sendLocalBroadcast2All", new Class[]{Context.class, Intent.class});
            o = new b(classLoader, "com.qihoo360.replugin.base.IPC", "sendLocalBroadcast2PluginSync", new Class[]{Context.class, String.class, Intent.class});
            p = new b(classLoader, "com.qihoo360.replugin.base.IPC", "sendLocalBroadcast2ProcessSync", new Class[]{Context.class, String.class, Intent.class});
            q = new b(classLoader, "com.qihoo360.replugin.base.IPC", "sendLocalBroadcast2AllSync", new Class[]{Context.class, Intent.class});
        }
    }

    public static int getCurrentProcessId() {
        if (!e.a()) {
            return -1;
        }
        try {
            Object objA = a.b.a(null, new Object[0]);
            if (objA != null) {
                return ((Integer) objA).intValue();
            }
        } catch (Exception unused) {
        }
        return -1;
    }

    public static String getCurrentProcessName() {
        if (!e.a()) {
            return null;
        }
        try {
            return (String) a.a.a(null, new Object[0]);
        } catch (Exception unused) {
            return null;
        }
    }

    public static String getPackageName() {
        if (!e.a()) {
            return null;
        }
        try {
            return (String) a.k.a(null, new Object[0]);
        } catch (Exception unused) {
            return null;
        }
    }

    public static String getPersistentProcessName() {
        if (!e.a()) {
            return null;
        }
        try {
            return (String) a.c.a(null, new Object[0]);
        } catch (Exception unused) {
            return null;
        }
    }

    public static int getPidByProcessName(String str) {
        if (!e.a()) {
            return -1;
        }
        try {
            Object objA = a.i.a(null, str);
            if (objA != null) {
                return ((Integer) objA).intValue();
            }
        } catch (Exception unused) {
        }
        return -1;
    }

    public static String getPluginHostProcessName() {
        if (!e.a()) {
            return null;
        }
        try {
            return (String) a.d.a(null, new Object[0]);
        } catch (Exception unused) {
            return null;
        }
    }

    public static String getProcessNameByPid(int i) {
        if (!e.a()) {
            return null;
        }
        try {
            return (String) a.j.a(null, Integer.valueOf(i));
        } catch (Exception unused) {
            return null;
        }
    }

    public static boolean isPersistentEnable() {
        if (!e.a()) {
            return false;
        }
        try {
            Object objA = a.h.a(null, new Object[0]);
            if (objA != null) {
                return ((Boolean) objA).booleanValue();
            }
        } catch (Exception unused) {
        }
        return false;
    }

    public static boolean isPersistentProcess() {
        if (!e.a()) {
            return false;
        }
        try {
            Object objA = a.g.a(null, new Object[0]);
            if (objA != null) {
                return ((Boolean) objA).booleanValue();
            }
        } catch (Exception unused) {
        }
        return false;
    }

    public static boolean isPluginHostProcess() {
        if (!e.a()) {
            return false;
        }
        try {
            Object objA = a.e.a(null, new Object[0]);
            if (objA != null) {
                return ((Boolean) objA).booleanValue();
            }
        } catch (Exception unused) {
        }
        return false;
    }

    public static boolean isUIProcess() {
        if (!e.a()) {
            return false;
        }
        try {
            Object objA = a.f.a(null, new Object[0]);
            if (objA != null) {
                return ((Boolean) objA).booleanValue();
            }
        } catch (Exception unused) {
        }
        return false;
    }

    public static boolean sendLocalBroadcast2All(Context context, Intent intent) {
        if (!e.a()) {
            return false;
        }
        try {
            Object objA = a.n.a(null, context, intent);
            if (objA != null) {
                return ((Boolean) objA).booleanValue();
            }
        } catch (Exception unused) {
        }
        return false;
    }

    public static boolean sendLocalBroadcast2AllSync(Context context, Intent intent) {
        if (!e.a()) {
            return false;
        }
        try {
            Object objA = a.q.a(null, context, intent);
            if (objA != null) {
                return ((Boolean) objA).booleanValue();
            }
        } catch (Exception unused) {
        }
        return false;
    }

    public static boolean sendLocalBroadcast2Plugin(Context context, String str, Intent intent) {
        if (TextUtils.isEmpty(str) || !e.a()) {
            return false;
        }
        try {
            Object objA = a.l.a(null, context, str, intent);
            if (objA != null) {
                return ((Boolean) objA).booleanValue();
            }
        } catch (Exception unused) {
        }
        return false;
    }

    public static boolean sendLocalBroadcast2PluginSync(Context context, String str, Intent intent) {
        if (TextUtils.isEmpty(str) || !e.a()) {
            return false;
        }
        try {
            Object objA = a.o.a(null, context, str, intent);
            if (objA != null) {
                return ((Boolean) objA).booleanValue();
            }
        } catch (Exception unused) {
        }
        return false;
    }

    public static boolean sendLocalBroadcast2Process(Context context, String str, Intent intent) {
        if (TextUtils.isEmpty(str) || !e.a()) {
            return false;
        }
        try {
            Object objA = a.m.a(null, context, str, intent);
            if (objA != null) {
                return ((Boolean) objA).booleanValue();
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return false;
    }

    public static boolean sendLocalBroadcast2ProcessSync(Context context, String str, Intent intent) {
        if (TextUtils.isEmpty(str) || !e.a()) {
            return false;
        }
        try {
            Object objA = a.p.a(null, context, str, intent);
            if (objA != null) {
                return ((Boolean) objA).booleanValue();
            }
        } catch (Exception unused) {
        }
        return false;
    }
}
