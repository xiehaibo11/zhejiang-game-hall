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
import android.os.Parcel;
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

        static b A() {
            return A;
        }

        static b B() {
            return B;
        }

        static b C() {
            return C;
        }

        static b D() {
            return D;
        }

        static b E() {
            return E;
        }

        static b F() {
            return F;
        }

        static b G() {
            return G;
        }

        static b H() {
            return H;
        }

        static b I() {
            return I;
        }

        static b J() {
            return J;
        }

        static b K() {
            return K;
        }

        static b L() {
            return L;
        }

        static b a() {
            return a;
        }

        static void a(ClassLoader r10) {
            a = new b(r10, "com.qihoo360.replugin.RePlugin", "install", new Class[]{String.class});
            b = new b(r10, "com.qihoo360.replugin.RePlugin", "preload", new Class[]{String.class});
            r10.loadClass("com.qihoo360.replugin.model.PluginInfo");     // Catch: ClassNotFoundException -> L8
            c = new b(r10, "com.qihoo360.replugin.RePlugin", "preload", new Class[]{PluginInfo.class});     // Catch: ClassNotFoundException -> L8
        L4:
            d = new b(r10, "com.qihoo360.replugin.RePlugin", "startActivity", new Class[]{Context.class, Intent.class});
            e = new b(r10, "com.qihoo360.replugin.RePlugin", "startActivity", new Class[]{Context.class, Intent.class, String.class, String.class});
            f = new b(r10, "com.qihoo360.replugin.RePlugin", "startActivityForResult", new Class[]{Activity.class, Intent.class, Integer.TYPE});
            g = new b(r10, "com.qihoo360.replugin.RePlugin", "startActivityForResult", new Class[]{Activity.class, Intent.class, Integer.TYPE, Bundle.class});
            h = new b(r10, "com.qihoo360.replugin.RePlugin", "createIntent", new Class[]{String.class, String.class});
            i = new b(r10, "com.qihoo360.replugin.RePlugin", "createComponentName", new Class[]{String.class, String.class});
            j = new b(r10, "com.qihoo360.replugin.RePlugin", "isForDev", new Class[0]);
            k = new b(r10, "com.qihoo360.replugin.RePlugin", "getVersion", new Class[0]);
            l = new b(r10, "com.qihoo360.replugin.RePlugin", "fetchPackageInfo", new Class[]{String.class});
            m = new b(r10, "com.qihoo360.replugin.RePlugin", "fetchResources", new Class[]{String.class});
            n = new b(r10, "com.qihoo360.replugin.RePlugin", "fetchClassLoader", new Class[]{String.class});
            o = new b(r10, "com.qihoo360.replugin.RePlugin", "fetchContext", new Class[]{String.class});
            p = new b(r10, "com.qihoo360.replugin.RePlugin", "fetchBinder", new Class[]{String.class, String.class});
            q = new b(r10, "com.qihoo360.replugin.RePlugin", "fetchBinder", new Class[]{String.class, String.class, String.class});
            r = new b(r10, "com.qihoo360.replugin.RePlugin", "fetchPluginNameByClassLoader", new Class[]{ClassLoader.class});
            s = new b(r10, "com.qihoo360.replugin.RePlugin", "getPluginInfoList", new Class[0]);
            t = new b(r10, "com.qihoo360.replugin.RePlugin", "getPluginInfo", new Class[]{String.class});
            u = new b(r10, "com.qihoo360.replugin.RePlugin", "getPluginVersion", new Class[]{String.class});
            v = new b(r10, "com.qihoo360.replugin.RePlugin", "isPluginInstalled", new Class[]{String.class});
            w = new b(r10, "com.qihoo360.replugin.RePlugin", "isPluginUsed", new Class[]{String.class});
            x = new b(r10, "com.qihoo360.replugin.RePlugin", "isPluginDexExtracted", new Class[]{String.class});
            y = new b(r10, "com.qihoo360.replugin.RePlugin", "isPluginRunning", new Class[]{String.class});
            z = new b(r10, "com.qihoo360.replugin.RePlugin", "isPluginRunningInProcess", new Class[]{String.class, String.class});
            A = new b(r10, "com.qihoo360.replugin.RePlugin", "getRunningPlugins", new Class[0]);
            B = new b(r10, "com.qihoo360.replugin.RePlugin", "getRunningProcessesByPlugin", new Class[]{String.class});
            C = new b(r10, "com.qihoo360.replugin.RePlugin", "isCurrentPersistentProcess", new Class[0]);
            D = new b(r10, "com.qihoo360.replugin.RePlugin", "registerInstalledReceiver", new Class[]{Context.class, BroadcastReceiver.class});
            E = new b(r10, "com.qihoo360.replugin.RePlugin", "registerGlobalBinder", new Class[]{String.class, IBinder.class});
            Class<?> r0 = null;
            r0 = r10.loadClass("com.qihoo360.replugin.IBinderGetter");     // Catch: Exception -> L9
        L6:
            F = new b(r10, "com.qihoo360.replugin.RePlugin", "registerGlobalBinderDelayed", new Class[]{String.class, r0});
            G = new b(r10, "com.qihoo360.replugin.RePlugin", "unregisterGlobalBinder", new Class[]{String.class});
            H = new b(r10, "com.qihoo360.replugin.RePlugin", "getGlobalBinder", new Class[]{String.class});
            I = new b(r10, "com.qihoo360.replugin.RePlugin", "registerHookingClass", new Class[]{String.class, ComponentName.class, Class.class});
            J = new b(r10, "com.qihoo360.replugin.RePlugin", "isHookingClass", new Class[]{ComponentName.class});
            K = new b(r10, "com.qihoo360.replugin.RePlugin", "unregisterHookingClass", new Class[]{String.class});
            L = new b(r10, "com.qihoo360.replugin.RePlugin", "dump", new Class[]{FileDescriptor.class, PrintWriter.class, new String[0].getClass()});
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
            return q;
        }

        static b q() {
            return p;
        }

        static b r() {
            return r;
        }

        static b s() {
            return s;
        }

        static b t() {
            return t;
        }

        static b u() {
            return u;
        }

        static b v() {
            return v;
        }

        static b w() {
            return w;
        }

        static b x() {
            return x;
        }

        static b y() {
            return y;
        }

        static b z() {
            return z;
        }
    }

    public RePlugin() {
    }

    public static ComponentName createComponentName(String r4, String r5) {
        if (e.a == true) goto L8;
        return null;
    L8:
        return (ComponentName) a.i().a(null, new Object[]{r4, r5});
    L7:
        return null;
    }

    public static Intent createIntent(String r4, String r5) {
        if (e.a == true) goto L8;
        return null;
    L8:
        return (Intent) a.h().a(null, new Object[]{r4, r5});
    L7:
        return null;
    }

    public static void dump(FileDescriptor r4, PrintWriter r5, String[] r6) {
        if (e.a == true) goto L8;
        return;
    L8:
        a.L().a(null, new Object[]{r4, r5, r6});     // Catch: Exception -> L7
        return;
    }

    public static IBinder fetchBinder(String r4, String r5) {
        if (e.a == true) goto L8;
        return null;
    L8:
        return (IBinder) a.q().a(null, new Object[]{r4, r5});
    L7:
        return null;
    }

    public static IBinder fetchBinder(String r4, String r5, String r6) {
        if (e.a == true) goto L8;
        return null;
    L8:
        return (IBinder) a.p().a(null, new Object[]{r4, r5, r6});
    L7:
        return null;
    }

    public static ClassLoader fetchClassLoader(String r4) {
        if (e.a == true) goto L8;
        return null;
    L8:
        return (ClassLoader) a.n().a(null, new Object[]{r4});
    L7:
        return null;
    }

    public static Context fetchContext(String r4) {
        if (e.a == true) goto L8;
        return null;
    L8:
        return (Context) a.o().a(null, new Object[]{r4});
    L7:
        return null;
    }

    public static PackageInfo fetchPackageInfo(String r4) {
        if (e.a == true) goto L8;
        return null;
    L8:
        return (PackageInfo) a.l().a(null, new Object[]{r4});
    L7:
        return null;
    }

    public static String fetchPluginNameByClassLoader(ClassLoader r4) {
        if (e.a == true) goto L8;
        return null;
    L8:
        return (String) a.r().a(null, new Object[]{r4});
    L7:
        return null;
    }

    public static int fetchResourceIdByName(String r1, String r2) {
        if (e.a == true) goto L7;
        return 0;
    L7:
        return c.a(r1, r2);
    }

    public static Resources fetchResources(String r4) {
        if (e.a == true) goto L8;
        return null;
    L8:
        return (Resources) a.m().a(null, new Object[]{r4});
    L7:
        return null;
    }

    public static <T extends View> T fetchViewByLayoutName(String r1, String r2, ViewGroup r3) {
        if (e.a == true) goto L7;
        return null;
    L7:
        return (T) c.a(r1, r2, r3);
    }

    public static IBinder getGlobalBinder(String r4) {
        if (e.a == true) goto L8;
        return null;
    L8:
        return (IBinder) a.H().a(null, new Object[]{r4});
    L7:
        return null;
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

    public static PluginInfo getPluginInfo(String r4) {
        if (e.a == true) goto L11;
        return null;
    L11:
        Object r42 = a.t().a(null, new Object[]{r4});     // Catch: Exception -> L10
        if (r42 == null) goto L9;
        return PluginInfo.CREATOR.createFromParcel(library.g.a((Parcelable) r42));
    L9:
        return null;
    }

    public static List<PluginInfo> getPluginInfoList() {
        if (e.a == true) goto L17;
        return null;
    L17:
        List r0 = (List) a.s().a(null, new Object[0]);     // Catch: Exception -> L16
        if (r0 == null) goto L15;
        if (r0.size() <= 0) goto L15;
        ArrayList r2 = new ArrayList();     // Catch: Exception -> L16
        Iterator r02 = r0.iterator();     // Catch: Exception -> L16
    L10:
        if (r02.hasNext() == false) goto L14;
        Parcel r3 = library.g.a((Parcelable) r02.next());     // Catch: Exception -> L16
        r2.add(PluginInfo.CREATOR.createFromParcel(r3));     // Catch: Exception -> L16
        goto L10
    L14:
        return r2;
    L15:
        return null;
    }

    public static int getPluginVersion(String r5) {
        if (e.a == true) goto L11;
        return -1;
    L11:
        Object r52 = a.u().a(null, new Object[]{r5});     // Catch: Exception -> L10
        if (r52 == null) goto L9;
        return ((Integer) r52).intValue();
    L9:
        return -1;
    }

    public static library.f getRunningPlugins() {
        if (e.a == true) goto L10;
        return null;
    L10:
        Object r0 = a.A().a(null, new Object[0]);     // Catch: Exception -> L9
        if (r0 == null) goto L8;
        Parcel r02 = library.g.a((Parcelable) r0);     // Catch: Exception -> L9
        library.f.CREATOR.createFromParcel(r02);     // Catch: Exception -> L9
    L8:
        return null;
    }

    public static String[] getRunningProcessesByPlugin(String r4) {
        if (e.a == true) goto L8;
        return null;
    L8:
        return (String[]) a.B().a(null, new Object[]{r4});
    L7:
        return null;
    }

    public static String getSDKVersion() {
        return getVersion();
    }

    public static String getVersion() {
        if (e.a == true) goto L8;
        return null;
    L8:
        return (String) a.k().a(null, new Object[0]);
    L7:
        return null;
    }

    public static PluginInfo install(String r4) {
        if (e.a == true) goto L11;
        return null;
    L11:
        Object r42 = a.a().a(null, new Object[]{r4});     // Catch: Exception -> L10
        if (r42 == null) goto L9;
        return PluginInfo.CREATOR.createFromParcel(library.g.a((Parcelable) r42));
    L9:
        return null;
    }

    public static boolean isCurrentPersistentProcess() {
        if (e.a == true) goto L11;
        return false;
    L11:
        Object r0 = a.C().a(null, new Object[0]);     // Catch: Exception -> L10
        if (r0 == null) goto L9;
        return ((Boolean) r0).booleanValue();
    L9:
        return false;
    }

    public static boolean isForDev() {
        if (e.a == true) goto L11;
        return false;
    L11:
        Object r0 = a.j().a(null, new Object[0]);     // Catch: Exception -> L10
        if (r0 == null) goto L9;
        return ((Boolean) r0).booleanValue();
    L9:
        return false;
    }

    public static boolean isHookingClass(ComponentName r4) {
        if (e.a == true) goto L11;
        return false;
    L11:
        Object r42 = a.J().a(null, new Object[]{r4});     // Catch: Exception -> L10
        if (r42 == null) goto L9;
        return ((Boolean) r42).booleanValue();
    L9:
        return false;
    }

    public static boolean isHostInitialized() {
        return e.a();
    }

    public static boolean isPluginDexExtracted(String r4) {
        if (e.a == true) goto L11;
        return false;
    L11:
        Object r42 = a.x().a(null, new Object[]{r4});     // Catch: Exception -> L10
        if (r42 == null) goto L9;
        return ((Boolean) r42).booleanValue();
    L9:
        return false;
    }

    public static boolean isPluginInstalled(String r4) {
        if (e.a == true) goto L11;
        return false;
    L11:
        Object r42 = a.v().a(null, new Object[]{r4});     // Catch: Exception -> L10
        if (r42 == null) goto L9;
        return ((Boolean) r42).booleanValue();
    L9:
        return false;
    }

    public static boolean isPluginRunning(String r4) {
        if (e.a == true) goto L11;
        return false;
    L11:
        Object r42 = a.y().a(null, new Object[]{r4});     // Catch: Exception -> L10
        if (r42 == null) goto L9;
        return ((Boolean) r42).booleanValue();
    L9:
        return false;
    }

    public static boolean isPluginRunningInProcess(String r4, String r5) {
        if (e.a == true) goto L11;
        return false;
    L11:
        Object r42 = a.z().a(null, new Object[]{r4, r5});     // Catch: Exception -> L10
        if (r42 == null) goto L9;
        return ((Boolean) r42).booleanValue();
    L9:
        return false;
    }

    public static boolean isPluginUsed(String r4) {
        if (e.a == true) goto L11;
        return false;
    L11:
        Object r42 = a.w().a(null, new Object[]{r4});     // Catch: Exception -> L10
        if (r42 == null) goto L9;
        return ((Boolean) r42).booleanValue();
    L9:
        return false;
    }

    public static boolean preload(PluginInfo r4) {
        if (e.a == true) goto L11;
        return false;
    L11:
        Object r42 = library.g.a(r4, d.b(), "com.qihoo360.replugin.model.PluginInfo");     // Catch: Exception -> L10
        Object r43 = a.c().a(null, new Object[]{r42});     // Catch: Exception -> L10
        if (r43 == null) goto L9;
        return ((Boolean) r43).booleanValue();
    L9:
        return false;
    }

    public static boolean preload(String r4) {
        if (e.a == true) goto L11;
        return false;
    L11:
        Object r42 = a.b().a(null, new Object[]{r4});     // Catch: Exception -> L10
        if (r42 == null) goto L9;
        return ((Boolean) r42).booleanValue();
    L9:
        return false;
    }

    public static boolean registerGlobalBinder(String r4, IBinder r5) {
        if (e.a == true) goto L5;
        return false;
    L5:
        Object r42 = a.E().a(null, new Object[]{r4, r5});
        if (r42 != null) goto L8;
        return false;
    L8:
        return ((Boolean) r42).booleanValue();
    }

    public static boolean registerGlobalBinderDelayed(String r4, com.qihoo360.replugin.a r5) {
        if (e.a == true) goto L11;
        return false;
    L11:
        Object r42 = a.F().a(null, new Object[]{r4, r5});     // Catch: Exception -> L10
        if (r42 == null) goto L9;
        return ((Boolean) r42).booleanValue();
    L9:
        return false;
    }

    public static void registerHookingClass(String r4, ComponentName r5, Class r6) {
        if (e.a == true) goto L5;
        return;
    L5:
        a.I().a(null, new Object[]{r4, r5, r6});
    }

    public static void registerInstalledReceiver(Context r4, BroadcastReceiver r5) {
        if (e.a == true) goto L5;
        return;
    L5:
        a.D().a(null, new Object[]{r4, r5});
    }

    public static void registerPluginBinder(String r1, IBinder r2) {
        g.a().a(r1, r2);
    }

    public static boolean startActivity(Context r4, Intent r5) {
        if (e.a == true) goto L11;
        return false;
    L11:
        Object r42 = a.d().a(null, new Object[]{r4, r5});     // Catch: Exception -> L10
        if (r42 == null) goto L9;
        return ((Boolean) r42).booleanValue();
    L9:
        return false;
    }

    public static boolean startActivity(Context r4, Intent r5, String r6, String r7) {
        if (e.a == true) goto L11;
        return false;
    L11:
        Object r42 = a.e().a(null, new Object[]{r4, r5, r6, r7});     // Catch: Exception -> L10
        if (r42 == null) goto L9;
        return ((Boolean) r42).booleanValue();
    L9:
        return false;
    }

    public static boolean startActivityForResult(Activity r4, Intent r5, int r6) {
        if (e.a == true) goto L11;
        return false;
    L11:
        Object r42 = a.f().a(null, new Object[]{r4, r5, Integer.valueOf(r6)});     // Catch: Exception -> L10
        if (r42 == null) goto L9;
        return ((Boolean) r42).booleanValue();
    L9:
        return false;
    }

    public static boolean startActivityForResult(Activity r4, Intent r5, int r6, Bundle r7) {
        if (e.a == true) goto L11;
        return false;
    L11:
        Object r42 = a.g().a(null, new Object[]{r4, r5, Integer.valueOf(r6), r7});     // Catch: Exception -> L10
        if (r42 == null) goto L9;
        return ((Boolean) r42).booleanValue();
    L9:
        return false;
    }

    public static boolean unregisterGlobalBinder(String r4) {
        if (e.a == true) goto L11;
        return false;
    L11:
        Object r42 = a.G().a(null, new Object[]{r4});     // Catch: Exception -> L10
        if (r42 == null) goto L9;
        return ((Boolean) r42).booleanValue();
    L9:
        return false;
    }

    public static void unregisterHookingClass(String r4) {
        if (e.a == true) goto L5;
        return;
    L5:
        a.K().a(null, new Object[]{r4});
    }
}
