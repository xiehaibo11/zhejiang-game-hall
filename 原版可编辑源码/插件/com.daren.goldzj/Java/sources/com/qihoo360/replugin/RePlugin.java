package com.qihoo360.replugin;

import android.app.Activity;
import android.content.BroadcastReceiver;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageInfo;
import android.content.res.Resources;
import android.os.Bundle;
import android.os.IBinder;
import android.os.Parcelable;
import android.view.View;
import android.view.ViewGroup;
import com.qihoo360.replugin.model.PluginInfo;
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class RePlugin {
    public static final String PROCESS_AUTO = "-2147483648";
    public static final String PROCESS_PERSIST = "-2";
    public static final String PROCESS_UI = "-1";

    static class a {
        private static b A;
        private static b B;
        private static b C;
        private static b D;
        private static b E;
        private static b F;
        private static b G;
        private static b H;
        private static b I;
        private static b J;
        private static b K;
        private static b L;
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
        private static b r;
        private static b s;
        private static b t;
        private static b u;
        private static b v;
        private static b w;
        private static b x;
        private static b y;
        private static b z;

        static void a(ClassLoader classLoader) {
            a = new b(classLoader, "com.qihoo360.replugin.RePlugin", "install", new Class[]{String.class});
            b = new b(classLoader, "com.qihoo360.replugin.RePlugin", "preload", new Class[]{String.class});
            try {
                classLoader.loadClass("com.qihoo360.replugin.model.PluginInfo");
                c = new b(classLoader, "com.qihoo360.replugin.RePlugin", "preload", new Class[]{PluginInfo.class});
            } catch (ClassNotFoundException unused) {
            }
            d = new b(classLoader, "com.qihoo360.replugin.RePlugin", "startActivity", new Class[]{Context.class, Intent.class});
            e = new b(classLoader, "com.qihoo360.replugin.RePlugin", "startActivity", new Class[]{Context.class, Intent.class, String.class, String.class});
            f = new b(classLoader, "com.qihoo360.replugin.RePlugin", "startActivityForResult", new Class[]{Activity.class, Intent.class, Integer.TYPE});
            g = new b(classLoader, "com.qihoo360.replugin.RePlugin", "startActivityForResult", new Class[]{Activity.class, Intent.class, Integer.TYPE, Bundle.class});
            h = new b(classLoader, "com.qihoo360.replugin.RePlugin", "createIntent", new Class[]{String.class, String.class});
            i = new b(classLoader, "com.qihoo360.replugin.RePlugin", "createComponentName", new Class[]{String.class, String.class});
            j = new b(classLoader, "com.qihoo360.replugin.RePlugin", "isForDev", new Class[0]);
            k = new b(classLoader, "com.qihoo360.replugin.RePlugin", "getVersion", new Class[0]);
            l = new b(classLoader, "com.qihoo360.replugin.RePlugin", "fetchPackageInfo", new Class[]{String.class});
            m = new b(classLoader, "com.qihoo360.replugin.RePlugin", "fetchResources", new Class[]{String.class});
            n = new b(classLoader, "com.qihoo360.replugin.RePlugin", "fetchClassLoader", new Class[]{String.class});
            o = new b(classLoader, "com.qihoo360.replugin.RePlugin", "fetchContext", new Class[]{String.class});
            p = new b(classLoader, "com.qihoo360.replugin.RePlugin", "fetchBinder", new Class[]{String.class, String.class});
            q = new b(classLoader, "com.qihoo360.replugin.RePlugin", "fetchBinder", new Class[]{String.class, String.class, String.class});
            r = new b(classLoader, "com.qihoo360.replugin.RePlugin", "fetchPluginNameByClassLoader", new Class[]{ClassLoader.class});
            s = new b(classLoader, "com.qihoo360.replugin.RePlugin", "getPluginInfoList", new Class[0]);
            t = new b(classLoader, "com.qihoo360.replugin.RePlugin", "getPluginInfo", new Class[]{String.class});
            u = new b(classLoader, "com.qihoo360.replugin.RePlugin", "getPluginVersion", new Class[]{String.class});
            v = new b(classLoader, "com.qihoo360.replugin.RePlugin", "isPluginInstalled", new Class[]{String.class});
            w = new b(classLoader, "com.qihoo360.replugin.RePlugin", "isPluginUsed", new Class[]{String.class});
            x = new b(classLoader, "com.qihoo360.replugin.RePlugin", "isPluginDexExtracted", new Class[]{String.class});
            y = new b(classLoader, "com.qihoo360.replugin.RePlugin", "isPluginRunning", new Class[]{String.class});
            z = new b(classLoader, "com.qihoo360.replugin.RePlugin", "isPluginRunningInProcess", new Class[]{String.class, String.class});
            A = new b(classLoader, "com.qihoo360.replugin.RePlugin", "getRunningPlugins", new Class[0]);
            B = new b(classLoader, "com.qihoo360.replugin.RePlugin", "getRunningProcessesByPlugin", new Class[]{String.class});
            C = new b(classLoader, "com.qihoo360.replugin.RePlugin", "isCurrentPersistentProcess", new Class[0]);
            D = new b(classLoader, "com.qihoo360.replugin.RePlugin", "registerInstalledReceiver", new Class[]{Context.class, BroadcastReceiver.class});
            E = new b(classLoader, "com.qihoo360.replugin.RePlugin", "registerGlobalBinder", new Class[]{String.class, IBinder.class});
            Class<?> clsLoadClass = null;
            try {
                clsLoadClass = classLoader.loadClass("com.qihoo360.replugin.IBinderGetter");
            } catch (Exception unused2) {
            }
            F = new b(classLoader, "com.qihoo360.replugin.RePlugin", "registerGlobalBinderDelayed", new Class[]{String.class, clsLoadClass});
            G = new b(classLoader, "com.qihoo360.replugin.RePlugin", "unregisterGlobalBinder", new Class[]{String.class});
            H = new b(classLoader, "com.qihoo360.replugin.RePlugin", "getGlobalBinder", new Class[]{String.class});
            I = new b(classLoader, "com.qihoo360.replugin.RePlugin", "registerHookingClass", new Class[]{String.class, ComponentName.class, Class.class});
            J = new b(classLoader, "com.qihoo360.replugin.RePlugin", "isHookingClass", new Class[]{ComponentName.class});
            K = new b(classLoader, "com.qihoo360.replugin.RePlugin", "unregisterHookingClass", new Class[]{String.class});
            L = new b(classLoader, "com.qihoo360.replugin.RePlugin", "dump", new Class[]{FileDescriptor.class, PrintWriter.class, new String[0].getClass()});
        }
    }

    public static ComponentName createComponentName(String str, String str2) {
        if (!e.a) {
            return null;
        }
        try {
            return (ComponentName) a.i.a(null, str, str2);
        } catch (Exception unused) {
            return null;
        }
    }

    public static Intent createIntent(String str, String str2) {
        if (!e.a) {
            return null;
        }
        try {
            return (Intent) a.h.a(null, str, str2);
        } catch (Exception unused) {
            return null;
        }
    }

    public static void dump(FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
        if (e.a) {
            try {
                a.L.a(null, fileDescriptor, printWriter, strArr);
            } catch (Exception unused) {
            }
        }
    }

    public static IBinder fetchBinder(String str, String str2) {
        if (!e.a) {
            return null;
        }
        try {
            return (IBinder) a.p.a(null, str, str2);
        } catch (Exception unused) {
            return null;
        }
    }

    public static IBinder fetchBinder(String str, String str2, String str3) {
        if (!e.a) {
            return null;
        }
        try {
            return (IBinder) a.q.a(null, str, str2, str3);
        } catch (Exception unused) {
            return null;
        }
    }

    public static ClassLoader fetchClassLoader(String str) {
        if (!e.a) {
            return null;
        }
        try {
            return (ClassLoader) a.n.a(null, str);
        } catch (Exception unused) {
            return null;
        }
    }

    public static Context fetchContext(String str) {
        if (!e.a) {
            return null;
        }
        try {
            return (Context) a.o.a(null, str);
        } catch (Exception unused) {
            return null;
        }
    }

    public static PackageInfo fetchPackageInfo(String str) {
        if (!e.a) {
            return null;
        }
        try {
            return (PackageInfo) a.l.a(null, str);
        } catch (Exception unused) {
            return null;
        }
    }

    public static String fetchPluginNameByClassLoader(ClassLoader classLoader) {
        if (!e.a) {
            return null;
        }
        try {
            return (String) a.r.a(null, classLoader);
        } catch (Exception unused) {
            return null;
        }
    }

    public static int fetchResourceIdByName(String str, String str2) {
        if (e.a) {
            return c.a(str, str2);
        }
        return 0;
    }

    public static Resources fetchResources(String str) {
        if (!e.a) {
            return null;
        }
        try {
            return (Resources) a.m.a(null, str);
        } catch (Exception unused) {
            return null;
        }
    }

    public static <T extends View> T fetchViewByLayoutName(String str, String str2, ViewGroup viewGroup) {
        if (e.a) {
            return (T) c.a(str, str2, viewGroup);
        }
        return null;
    }

    public static IBinder getGlobalBinder(String str) {
        if (!e.a) {
            return null;
        }
        try {
            return (IBinder) a.H.a(null, str);
        } catch (Exception unused) {
            return null;
        }
    }

    public static ClassLoader getHostClassLoader() {
        return d.b();
    }

    public static Context getHostContext() {
        return d.a();
    }

    public static Context getPluginContext() {
        return d.c();
    }

    public static PluginInfo getPluginInfo(String str) {
        if (!e.a) {
            return null;
        }
        try {
            Object objA = a.t.a(null, str);
            if (objA != null) {
                return PluginInfo.CREATOR.createFromParcel(library.g.a((Parcelable) objA));
            }
        } catch (Exception unused) {
        }
        return null;
    }

    public static List<PluginInfo> getPluginInfoList() {
        if (!e.a) {
            return null;
        }
        try {
            List list = (List) a.s.a(null, new Object[0]);
            if (list != null && list.size() > 0) {
                ArrayList arrayList = new ArrayList();
                Iterator it = list.iterator();
                while (it.hasNext()) {
                    arrayList.add(PluginInfo.CREATOR.createFromParcel(library.g.a((Parcelable) it.next())));
                }
                return arrayList;
            }
        } catch (Exception unused) {
        }
        return null;
    }

    public static int getPluginVersion(String str) {
        if (!e.a) {
            return -1;
        }
        try {
            Object objA = a.u.a(null, str);
            if (objA != null) {
                return ((Integer) objA).intValue();
            }
        } catch (Exception unused) {
        }
        return -1;
    }

    public static library.f getRunningPlugins() {
        if (!e.a) {
            return null;
        }
        try {
            Object objA = a.A.a(null, new Object[0]);
            if (objA != null) {
                library.f.CREATOR.createFromParcel(library.g.a((Parcelable) objA));
            }
        } catch (Exception unused) {
        }
        return null;
    }

    public static String[] getRunningProcessesByPlugin(String str) {
        if (!e.a) {
            return null;
        }
        try {
            return (String[]) a.B.a(null, str);
        } catch (Exception unused) {
            return null;
        }
    }

    public static String getSDKVersion() {
        return getVersion();
    }

    public static String getVersion() {
        if (!e.a) {
            return null;
        }
        try {
            return (String) a.k.a(null, new Object[0]);
        } catch (Exception unused) {
            return null;
        }
    }

    public static PluginInfo install(String str) {
        if (!e.a) {
            return null;
        }
        try {
            Object objA = a.a.a(null, str);
            if (objA != null) {
                return PluginInfo.CREATOR.createFromParcel(library.g.a((Parcelable) objA));
            }
        } catch (Exception unused) {
        }
        return null;
    }

    public static boolean isCurrentPersistentProcess() {
        if (!e.a) {
            return false;
        }
        try {
            Object objA = a.C.a(null, new Object[0]);
            if (objA != null) {
                return ((Boolean) objA).booleanValue();
            }
        } catch (Exception unused) {
        }
        return false;
    }

    public static boolean isForDev() {
        if (!e.a) {
            return false;
        }
        try {
            Object objA = a.j.a(null, new Object[0]);
            if (objA != null) {
                return ((Boolean) objA).booleanValue();
            }
        } catch (Exception unused) {
        }
        return false;
    }

    public static boolean isHookingClass(ComponentName componentName) {
        if (!e.a) {
            return false;
        }
        try {
            Object objA = a.J.a(null, componentName);
            if (objA != null) {
                return ((Boolean) objA).booleanValue();
            }
        } catch (Exception unused) {
        }
        return false;
    }

    public static boolean isHostInitialized() {
        return e.a();
    }

    public static boolean isPluginDexExtracted(String str) {
        if (!e.a) {
            return false;
        }
        try {
            Object objA = a.x.a(null, str);
            if (objA != null) {
                return ((Boolean) objA).booleanValue();
            }
        } catch (Exception unused) {
        }
        return false;
    }

    public static boolean isPluginInstalled(String str) {
        if (!e.a) {
            return false;
        }
        try {
            Object objA = a.v.a(null, str);
            if (objA != null) {
                return ((Boolean) objA).booleanValue();
            }
        } catch (Exception unused) {
        }
        return false;
    }

    public static boolean isPluginRunning(String str) {
        if (!e.a) {
            return false;
        }
        try {
            Object objA = a.y.a(null, str);
            if (objA != null) {
                return ((Boolean) objA).booleanValue();
            }
        } catch (Exception unused) {
        }
        return false;
    }

    public static boolean isPluginRunningInProcess(String str, String str2) {
        if (!e.a) {
            return false;
        }
        try {
            Object objA = a.z.a(null, str, str2);
            if (objA != null) {
                return ((Boolean) objA).booleanValue();
            }
        } catch (Exception unused) {
        }
        return false;
    }

    public static boolean isPluginUsed(String str) {
        if (!e.a) {
            return false;
        }
        try {
            Object objA = a.w.a(null, str);
            if (objA != null) {
                return ((Boolean) objA).booleanValue();
            }
        } catch (Exception unused) {
        }
        return false;
    }

    public static boolean preload(PluginInfo pluginInfo) {
        if (!e.a) {
            return false;
        }
        try {
            Object objA = a.c.a(null, library.g.a(pluginInfo, d.b(), "com.qihoo360.replugin.model.PluginInfo"));
            if (objA != null) {
                return ((Boolean) objA).booleanValue();
            }
        } catch (Exception unused) {
        }
        return false;
    }

    public static boolean preload(String str) {
        if (!e.a) {
            return false;
        }
        try {
            Object objA = a.b.a(null, str);
            if (objA != null) {
                return ((Boolean) objA).booleanValue();
            }
        } catch (Exception unused) {
        }
        return false;
    }

    public static boolean registerGlobalBinder(String str, IBinder iBinder) {
        Object objA;
        if (e.a && (objA = a.E.a(null, str, iBinder)) != null) {
            return ((Boolean) objA).booleanValue();
        }
        return false;
    }

    public static boolean registerGlobalBinderDelayed(String str, com.qihoo360.replugin.a aVar) {
        if (!e.a) {
            return false;
        }
        try {
            Object objA = a.F.a(null, str, aVar);
            if (objA != null) {
                return ((Boolean) objA).booleanValue();
            }
        } catch (Exception unused) {
        }
        return false;
    }

    public static void registerHookingClass(String str, ComponentName componentName, Class cls) {
        if (e.a) {
            a.I.a(null, str, componentName, cls);
        }
    }

    public static void registerInstalledReceiver(Context context, BroadcastReceiver broadcastReceiver) {
        if (e.a) {
            a.D.a(null, context, broadcastReceiver);
        }
    }

    public static void registerPluginBinder(String str, IBinder iBinder) {
        g.a().a(str, iBinder);
    }

    public static boolean startActivity(Context context, Intent intent) {
        if (!e.a) {
            return false;
        }
        try {
            Object objA = a.d.a(null, context, intent);
            if (objA != null) {
                return ((Boolean) objA).booleanValue();
            }
        } catch (Exception unused) {
        }
        return false;
    }

    public static boolean startActivity(Context context, Intent intent, String str, String str2) {
        if (!e.a) {
            return false;
        }
        try {
            Object objA = a.e.a(null, context, intent, str, str2);
            if (objA != null) {
                return ((Boolean) objA).booleanValue();
            }
        } catch (Exception unused) {
        }
        return false;
    }

    public static boolean startActivityForResult(Activity activity, Intent intent, int i) {
        if (!e.a) {
            return false;
        }
        try {
            Object objA = a.f.a(null, activity, intent, Integer.valueOf(i));
            if (objA != null) {
                return ((Boolean) objA).booleanValue();
            }
        } catch (Exception unused) {
        }
        return false;
    }

    public static boolean startActivityForResult(Activity activity, Intent intent, int i, Bundle bundle) {
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
        return false;
    }

    public static boolean unregisterGlobalBinder(String str) {
        if (!e.a) {
            return false;
        }
        try {
            Object objA = a.G.a(null, str);
            if (objA != null) {
                return ((Boolean) objA).booleanValue();
            }
        } catch (Exception unused) {
        }
        return false;
    }

    public static void unregisterHookingClass(String str) {
        if (e.a) {
            a.K.a(null, str);
        }
    }
}
