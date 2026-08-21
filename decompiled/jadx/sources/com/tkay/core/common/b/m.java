package com.tkay.core.common.b;

import android.app.Activity;
import android.app.Application;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.ProviderInfo;
import android.content.res.XmlResourceParser;
import android.location.Location;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.support.v4.content.LocalBroadcastManager;
import android.text.TextUtils;
import android.util.Log;
import com.tkay.core.api.ATDebuggerConfig;
import com.tkay.core.api.ATPrivacyConfig;
import com.tkay.core.api.AdError;
import com.tkay.core.api.DeviceInfoCallback;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.api.IExHandler;
import com.tkay.core.api.ITYAdFilter;
import com.tkay.core.api.TYCustomAdapterConfig;
import com.tkay.core.api.TYInitConfig;
import com.tkay.core.api.TYInitMediation;
import com.tkay.core.api.TYNetworkConfig;
import com.tkay.core.common.b.f;
import com.tkay.core.common.f.aj;
import com.tkay.core.common.f.al;
import com.tkay.core.common.l.s;
import com.tkay.core.common.r;
import com.tkay.core.common.t;
import com.tkay.core.common.u;
import com.tkay.core.common.v;
import com.tkay.core.common.x;
import com.tkay.core.common.y;
import dalvik.system.DexFile;
import java.io.File;
import java.lang.ref.WeakReference;
import java.lang.reflect.Constructor;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Date;
import java.util.Enumeration;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Random;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class m {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f6071a = 0;
    public static final int b = 1;
    private static volatile m j;
    private String F;
    private String G;
    private boolean I;
    private com.tkay.core.common.g.c K;
    private Location L;
    private JSONArray N;
    private List<String> O;
    private String Q;
    private ATDebuggerConfig R;
    private boolean S;
    private ConcurrentHashMap<String, ITYAdFilter> W;
    private ATPrivacyConfig Y;
    private al aa;
    Boolean c;
    WeakReference<Activity> e;
    private int f;
    private Context k;
    private String l;
    private String m;
    private String o;
    private ConcurrentHashMap<String, TYCustomAdapterConfig> r;
    private Map<String, Boolean> s;
    private String t;
    private BroadcastReceiver v;
    private String w;
    private String x;
    private String y;
    private IExHandler z;
    private final String g = "SDK.init";
    private final String h = "com.tkay.pd.ExHandler";
    private boolean i = false;
    private boolean B = false;
    private boolean C = false;
    private long D = 0;
    private long E = 0;
    private boolean J = false;
    private String M = "";
    private int T = 1;
    private boolean U = false;
    private boolean V = false;
    private String X = "";
    private int Z = 1;
    long d = 0;
    private Handler n = new Handler(Looper.getMainLooper());
    private ConcurrentHashMap<String, Map<String, Object>> q = new ConcurrentHashMap<>();
    private ConcurrentHashMap<String, Object> p = new ConcurrentHashMap<>();
    private final String A = File.separator + "tkay.test";
    private boolean H = true;
    private ConcurrentHashMap<String, List<String>> P = new ConcurrentHashMap<>();
    private JSONObject u = new JSONObject();
    private long ab = System.currentTimeMillis();

    public static m a() {
        if (j == null) {
            synchronized (m.class) {
                if (j == null) {
                    j = new m();
                }
            }
        }
        return j;
    }

    public final synchronized IExHandler b() {
        if (this.i) {
            return this.z;
        }
        try {
            Constructor declaredConstructor = Class.forName("com.tkay.pd.ExHandler").asSubclass(IExHandler.class).getDeclaredConstructor((Class[]) null);
            declaredConstructor.setAccessible(true);
            this.z = (IExHandler) declaredConstructor.newInstance(new Object[0]);
        } catch (Exception unused) {
        }
        this.i = true;
        return this.z;
    }

    private m() {
    }

    public final void a(String str) {
        this.o = str;
    }

    public final String c() {
        return this.o;
    }

    public final synchronized void a(String str, TYCustomAdapterConfig tYCustomAdapterConfig) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        if (this.r == null) {
            this.r = new ConcurrentHashMap<>();
        }
        if (tYCustomAdapterConfig == null) {
            this.r.remove(str);
        } else {
            this.r.put(str, tYCustomAdapterConfig);
        }
    }

    public final TYCustomAdapterConfig b(String str) {
        if (this.r == null || TextUtils.isEmpty(str)) {
            return null;
        }
        return this.r.get(str);
    }

    public final void a(int i) {
        if (i == 2) {
            this.T = 2;
        } else {
            this.T = 1;
        }
    }

    public final int d() {
        return this.T;
    }

    public final synchronized void a(String... strArr) {
        if (strArr != null) {
            this.s = new HashMap();
            for (String str : strArr) {
                this.s.put(str, Boolean.TRUE);
            }
            return;
        }
        this.s = null;
    }

    public final synchronized boolean c(String str) {
        if (this.s == null) {
            return false;
        }
        return this.s.containsKey(str);
    }

    public final synchronized String[] e() {
        Set<String> setKeySet;
        int size;
        if (this.s == null || (size = (setKeySet = this.s.keySet()).size()) <= 0) {
            return null;
        }
        String[] strArr = new String[size];
        setKeySet.toArray(strArr);
        return strArr;
    }

    public final void a(Context context) {
        if (context == null) {
            Log.w("SDK.init", "TYSDK.setContext() is null!");
        } else {
            this.k = context;
        }
    }

    public final Context f() {
        return this.k;
    }

    public final long g() {
        return this.D;
    }

    public final long h() {
        return this.E;
    }

    public final int i() {
        return this.f;
    }

    public final void a(Map<String, Object> map) {
        if (map != null && map.containsKey("channel")) {
            Object obj = map.get("channel");
            String string = obj != null ? obj.toString() : "";
            this.F = string;
            if (!com.tkay.core.common.l.g.a(string)) {
                this.F = null;
                map.remove("channel");
            }
        }
        if (map != null && map.containsKey("sub_channel")) {
            Object obj2 = map.get("sub_channel");
            String string2 = obj2 != null ? obj2.toString() : "";
            this.G = string2;
            if (!com.tkay.core.common.l.g.b(string2)) {
                this.G = null;
                map.remove("sub_channel");
            }
        }
        this.p.clear();
        if (map != null) {
            this.p.putAll(map);
        }
        if (!TextUtils.isEmpty(this.F)) {
            this.p.put("channel", this.F);
        }
        if (TextUtils.isEmpty(this.G)) {
            return;
        }
        this.p.put("sub_channel", this.G);
    }

    public final void a(String str, Map<String, Object> map) {
        if (map != null) {
            this.q.put(str, map);
        }
    }

    private Map<String, Object> q(String str) {
        if (this.q == null || TextUtils.isEmpty(str)) {
            return null;
        }
        return this.q.get(str);
    }

    public final void a(List<String> list) {
        try {
            this.O = list;
            if (list != null && !list.isEmpty()) {
                this.N = new JSONArray((Collection<Object>) list);
            } else {
                this.N = null;
            }
        } catch (Exception unused) {
        }
    }

    public final List<String> j() {
        return this.O;
    }

    public final JSONArray k() {
        return this.N;
    }

    public final Map<String, Object> l() {
        return this.p;
    }

    public final Map<String, Object> d(String str) {
        HashMap map = new HashMap();
        Map<String, Object> map2 = this.q.get(str);
        ConcurrentHashMap<String, Object> concurrentHashMap = this.p;
        if (concurrentHashMap != null) {
            map.putAll(concurrentHashMap);
        }
        if (map2 != null) {
            map.putAll(map2);
        }
        map.remove("channel");
        map.remove("sub_channel");
        Object obj = this.p.get("channel");
        Object obj2 = this.p.get("sub_channel");
        if (obj != null) {
            map.put("channel", obj);
        }
        if (obj2 != null) {
            map.put("sub_channel", obj2);
        }
        return map;
    }

    public final String m() {
        Object obj = this.p.get("channel");
        return obj != null ? obj.toString() : "";
    }

    public final void e(String str) {
        this.F = str;
        this.p.put("channel", str);
    }

    public final String n() {
        Object obj = this.p.get("sub_channel");
        return obj != null ? obj.toString() : "";
    }

    public final void f(String str) {
        this.G = str;
        this.p.put("sub_channel", str);
    }

    public final String o() {
        if (TextUtils.isEmpty(this.l)) {
            this.l = com.tkay.core.common.l.p.b(this.k, f.o, f.p, "");
        }
        return this.l;
    }

    private void r(String str) {
        this.l = str;
        com.tkay.core.common.l.p.a(this.k, f.o, f.p, str);
    }

    public final String p() {
        if (TextUtils.isEmpty(this.m)) {
            this.m = com.tkay.core.common.l.p.b(this.k, f.o, f.q, "");
        }
        return this.m;
    }

    private void s(String str) {
        this.m = str;
        com.tkay.core.common.l.p.a(this.k, f.o, f.q, str);
    }

    public final String q() {
        try {
            if (TextUtils.isEmpty(this.t)) {
                a(this.k, o(), 0);
            }
        } catch (Exception unused) {
        }
        return this.t;
    }

    public final String g(String str) {
        if (TextUtils.isEmpty(str)) {
            return "";
        }
        String strOptString = this.u.optString(str);
        if (TextUtils.isEmpty(strOptString)) {
            return u(str);
        }
        StringBuilder sb = new StringBuilder();
        sb.append(str);
        sb.append(": sessionid exists.");
        return strOptString;
    }

    public final synchronized void a(Location location) {
        this.L = location;
    }

    public final synchronized void a(boolean z) {
        this.M = z ? "1" : "2";
    }

    public final Location r() {
        return this.L;
    }

    public final String s() {
        return this.M;
    }

    /* JADX INFO: renamed from: com.tkay.core.common.b.m$1, reason: invalid class name */
    final class AnonymousClass1 implements Runnable {
        AnonymousClass1() {
        }

        @Override // java.lang.Runnable
        public final void run() {
            try {
                com.tkay.core.common.l.d.a(m.this.k);
                com.tkay.core.common.l.d.q(m.this.k);
            } catch (Exception unused) {
            }
            if (m.this.z()) {
                String strD = com.tkay.core.common.l.d.d(m.this.k);
                Log.i("tkay", "********************************** " + com.tkay.core.common.l.g.a() + " *************************************");
                Log.i("tkay", "GAID(ADID): " + com.tkay.core.common.l.d.f() + " , AndroidID: " + strD);
                StringBuilder sb = new StringBuilder("********************************** ");
                sb.append(com.tkay.core.common.l.g.a());
                sb.append(" *************************************");
                Log.i("tkay", sb.toString());
                if (TextUtils.isEmpty(strD)) {
                    return;
                }
                Log.i("tkay", "You can use \"TYSDK.setDebuggerConfig(context, \"" + strD + "\",new ATDebuggerConfig.Builder(the NetworkFirmId you want to test).build());\" to open the debugger mode.");
            }
        }
    }

    private void M() {
        com.tkay.core.common.l.b.a.a().a(new AnonymousClass1());
    }

    public final synchronized void a(final Context context, final String str, String str2, final TYNetworkConfig tYNetworkConfig) {
        if (context == null) {
            return;
        }
        this.k = context.getApplicationContext();
        if (!TextUtils.isEmpty(str) && !TextUtils.isEmpty(str2)) {
            if (this.I) {
                return;
            }
            this.I = true;
            try {
                long jCurrentTimeMillis = System.currentTimeMillis();
                long jLongValue = com.tkay.core.common.l.p.a(context, f.o, f.o.k, (Long) 0L).longValue();
                this.D = jLongValue;
                if (jLongValue == 0) {
                    this.D = jCurrentTimeMillis;
                    com.tkay.core.common.l.p.a(context, f.o, f.o.k, jCurrentTimeMillis);
                }
                this.E = ((a(jCurrentTimeMillis) - a(this.D)) / 86400000) + 1;
                this.d = 0L;
                com.tkay.core.a.a.a(context.getApplicationContext()).a();
                this.Z = com.tkay.core.common.l.p.b(context, f.o, "r", 1);
                final Context applicationContext = context.getApplicationContext();
                a(applicationContext);
                this.l = str;
                com.tkay.core.common.l.p.a(this.k, f.o, f.p, str);
                this.m = str2;
                com.tkay.core.common.l.p.a(this.k, f.o, f.q, str2);
                this.U = com.tkay.core.common.l.h.a();
                com.tkay.core.common.e.a.a().a(context);
                try {
                    if (this.v != null) {
                        this.k.unregisterReceiver(this.v);
                        j.a(this.k).a(this.v);
                    }
                    this.v = null;
                } catch (Throwable unused) {
                }
                try {
                    this.v = new AnonymousClass10();
                    IntentFilter intentFilter = new IntentFilter();
                    intentFilter.addAction("android.net.conn.CONNECTIVITY_CHANGE");
                    intentFilter.addAction(f.C);
                    this.k.registerReceiver(this.v, intentFilter);
                    j.a(this.k).a(this.v, intentFilter);
                } catch (Throwable unused2) {
                }
                com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.common.b.m.6
                    @Override // java.lang.Runnable
                    public final void run() {
                        try {
                            com.tkay.core.common.k.b.a().a(applicationContext);
                            m.this.a(applicationContext, str, 0);
                            m.a(m.this, context);
                            g.a(applicationContext).a();
                            m.b(m.this);
                            m.c(applicationContext);
                            com.tkay.core.common.a.j.a().b();
                            com.tkay.core.common.res.d.a(m.this.f()).b();
                            com.tkay.core.common.res.d.a(m.this.f()).c();
                        } catch (Exception unused3) {
                        }
                    }
                });
                ((Application) this.k).registerActivityLifecycleCallbacks(new e(e(this.k)));
                a(new Runnable() { // from class: com.tkay.core.common.b.m.7
                    @Override // java.lang.Runnable
                    public final void run() {
                        com.tkay.core.common.l.d.p(applicationContext);
                    }
                }, 5000L);
                com.tkay.core.common.l.b.a.a().a(new AnonymousClass1());
                com.tkay.core.common.p.a().a(this.k);
                com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.common.b.m.8
                    @Override // java.lang.Runnable
                    public final void run() {
                        m.this.b();
                        if (m.this.z != null) {
                            m.this.z.initDeviceInfo(context);
                        }
                        com.tkay.core.c.e.a(applicationContext).a();
                        com.tkay.core.common.l.d.r(m.this.k);
                        y.a(context);
                    }
                });
                com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.common.b.m.9
                    @Override // java.lang.Runnable
                    public final void run() {
                        m mVar = m.this;
                        m.a(mVar, mVar.k, tYNetworkConfig);
                    }
                });
                a(context.getApplicationContext(), str, str2);
                com.tkay.core.common.l.b.a.a().a(new AnonymousClass11(context, str));
            } catch (Exception unused3) {
            }
        }
    }

    private static void d(Context context) {
        try {
            Class<?> cls = Class.forName("com.tkay.network.adx.AdxTYInitManager");
            Object objInvoke = null;
            try {
                objInvoke = cls.getDeclaredMethod("getInstance", new Class[0]).invoke(null, new Object[0]);
            } catch (Throwable unused) {
                Log.e("tkay", "Cannot instantiate " + cls.getName() + ", please check if SDK is imported");
            }
            if (objInvoke == null || !(objInvoke instanceof TYInitMediation)) {
                return;
            }
            a(context, (List<String>) ((TYInitMediation) objInvoke).getResourceStatus(), true);
        } catch (Throwable unused2) {
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:10:0x002d, code lost:
    
        if (r2.importance != 100) goto L13;
     */
    /* JADX WARN: Code restructure failed: missing block: B:11:0x002f, code lost:
    
        return true;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static boolean e(android.content.Context r5) {
        /*
            r0 = 0
            java.lang.String r1 = "activity"
            java.lang.Object r1 = r5.getSystemService(r1)     // Catch: java.lang.Throwable -> L32
            android.app.ActivityManager r1 = (android.app.ActivityManager) r1     // Catch: java.lang.Throwable -> L32
            java.util.List r1 = r1.getRunningAppProcesses()     // Catch: java.lang.Throwable -> L32
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L32
        L11:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L32
            if (r2 == 0) goto L31
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L32
            android.app.ActivityManager$RunningAppProcessInfo r2 = (android.app.ActivityManager.RunningAppProcessInfo) r2     // Catch: java.lang.Throwable -> L32
            java.lang.String r3 = r2.processName     // Catch: java.lang.Throwable -> L32
            java.lang.String r4 = r5.getPackageName()     // Catch: java.lang.Throwable -> L32
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Throwable -> L32
            if (r3 == 0) goto L11
            int r5 = r2.importance     // Catch: java.lang.Throwable -> L32
            r1 = 100
            if (r5 != r1) goto L31
            r5 = 1
            return r5
        L31:
            return r0
        L32:
            r5 = move-exception
            r5.printStackTrace()
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.b.m.e(android.content.Context):boolean");
    }

    public final void b(int i) {
        this.f = i;
    }

    @Deprecated
    private void t(String str) {
        this.Q = str;
    }

    public final boolean t() {
        return this.S;
    }

    public final void a(Context context, String str, ATDebuggerConfig aTDebuggerConfig) {
        IExHandler iExHandlerB;
        if (context == null) {
            if (z()) {
                Log.e("SDK.init", "setDebuggerConfig fail, because context is null.");
                return;
            }
            return;
        }
        if (a().k == null) {
            a().a(context.getApplicationContext());
        }
        this.Q = str;
        this.R = aTDebuggerConfig;
        String strD = com.tkay.core.common.l.d.d(context);
        boolean z = true;
        if (TextUtils.isEmpty(strD) || !strD.equals(this.Q)) {
            String strF = com.tkay.core.common.l.d.f();
            if ((TextUtils.isEmpty(strF) || !strF.equals(this.Q)) && ((iExHandlerB = a().b()) == null || !iExHandlerB.checkDebuggerDevice(context, this.Q))) {
                z = false;
            }
        }
        this.S = z;
        if (TextUtils.isEmpty(this.Q)) {
            if (z()) {
                Log.e("SDK.init", "Setting Debugger's device fail, because deviceId is empty.");
            }
            this.S = false;
        } else {
            if (this.S) {
                if (z()) {
                    Log.i("SDK.init", "Setting Debugger's device success.");
                }
                if (this.R == null || !z()) {
                    return;
                }
                Log.i("SDK.init", "Debugger config is in effect now.");
                return;
            }
            if (z()) {
                Log.e("SDK.init", "The incoming device id does not match the current device id, and the debugger mode cannot take effect.");
            }
        }
    }

    private boolean f(Context context) {
        String strD = com.tkay.core.common.l.d.d(context);
        if (!TextUtils.isEmpty(strD) && strD.equals(this.Q)) {
            return true;
        }
        String strF = com.tkay.core.common.l.d.f();
        if (!TextUtils.isEmpty(strF) && strF.equals(this.Q)) {
            return true;
        }
        IExHandler iExHandlerB = a().b();
        return iExHandlerB != null && iExHandlerB.checkDebuggerDevice(context, this.Q);
    }

    public final boolean u() {
        return this.S && this.R != null;
    }

    public final ATDebuggerConfig v() {
        return this.R;
    }

    private void g(Context context) {
        long jCurrentTimeMillis = this.d;
        try {
            String strB = com.tkay.core.common.l.p.b(a().k, f.o, a().o() + "playRecord", "");
            if (!TextUtils.isEmpty(strB)) {
                JSONObject jSONObject = new JSONObject(strB);
                long jOptLong = jSONObject.optLong(d.f6043a);
                long jOptLong2 = jSONObject.optLong(d.b);
                String strOptString = jSONObject.optString(d.c);
                int iOptInt = jSONObject.optInt(d.d);
                if (jCurrentTimeMillis != 0) {
                    com.tkay.core.common.k.c.a(iOptInt == 1 ? 4 : 2, jOptLong, jOptLong2, strOptString);
                    new StringBuilder("Create new psid, SDKContext.init to send playTime:").append((jOptLong2 - jOptLong) / 1000);
                } else {
                    try {
                        new StringBuilder("Psid is old, use pervioud statime,close before:").append((jOptLong2 - jOptLong) / 1000);
                        jCurrentTimeMillis = jOptLong;
                    } catch (Exception unused) {
                        jCurrentTimeMillis = jOptLong;
                        com.tkay.core.common.l.p.a(a().k, f.o, a().o() + "playRecord", "");
                    }
                }
                com.tkay.core.common.l.p.a(a().k, f.o, a().o() + "playRecord", "");
            }
        } catch (Exception unused2) {
        }
        if (jCurrentTimeMillis == 0) {
            jCurrentTimeMillis = com.tkay.core.common.l.p.a(context, f.o, f.o.h, (Long) 0L).longValue();
        }
        if (jCurrentTimeMillis == 0) {
            jCurrentTimeMillis = System.currentTimeMillis();
        }
        ((Application) context.getApplicationContext()).registerActivityLifecycleCallbacks(new d(jCurrentTimeMillis));
    }

    private void N() {
        try {
            if (this.v != null) {
                this.k.unregisterReceiver(this.v);
                j.a(this.k).a(this.v);
            }
            this.v = null;
        } catch (Throwable unused) {
        }
        try {
            this.v = new AnonymousClass10();
            IntentFilter intentFilter = new IntentFilter();
            intentFilter.addAction("android.net.conn.CONNECTIVITY_CHANGE");
            intentFilter.addAction(f.C);
            this.k.registerReceiver(this.v, intentFilter);
            j.a(this.k).a(this.v, intentFilter);
        } catch (Throwable unused2) {
        }
    }

    /* JADX INFO: renamed from: com.tkay.core.common.b.m$10, reason: invalid class name */
    final class AnonymousClass10 extends BroadcastReceiver {
        AnonymousClass10() {
        }

        @Override // android.content.BroadcastReceiver
        public final void onReceive(Context context, Intent intent) {
            if (com.tkay.core.common.l.h.a(context)) {
                com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.common.b.m.10.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        u.a().b();
                    }
                });
                com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.common.b.m.10.2
                    @Override // java.lang.Runnable
                    public final void run() {
                        t.a().b();
                    }
                });
                com.tkay.core.common.k.b.a().b();
                m mVar = m.this;
                mVar.a(context, mVar.o(), m.this.p());
            }
            if (TextUtils.equals(intent.getAction(), f.C)) {
                com.tkay.core.common.k.c.a(intent.getStringExtra(f.D));
            }
        }
    }

    protected final synchronized long a(Context context, String str, int i) {
        com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(context).b(str);
        String strB = com.tkay.core.common.l.p.b(context, f.o, f.o.f, "");
        String strB2 = com.tkay.core.common.l.p.b(context, f.o, f.o.g, "");
        long jLongValue = com.tkay.core.common.l.p.a(context, f.o, f.o.h, (Long) 0L).longValue();
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (jCurrentTimeMillis - jLongValue < 0) {
            jLongValue = 0;
        }
        if (jCurrentTimeMillis - jLongValue <= (i == 0 ? aVarB.N() : aVarB.B())) {
            new StringBuilder("psid updataTime<=").append(aVarB.N());
            this.t = strB;
            if (!TextUtils.isEmpty(strB2)) {
                this.u = new JSONObject(strB2);
            }
            new StringBuilder("psid :").append(this.t);
            return 0L;
        }
        new StringBuilder("psid updataTime>").append(aVarB.N());
        String strW = w();
        String strValueOf = "";
        if (TextUtils.isEmpty(strW)) {
            strW = com.tkay.core.common.l.d.d(context) + com.tkay.core.common.l.d.f();
            strValueOf = String.valueOf(new Random().nextInt(10000000));
        }
        this.t = com.tkay.core.common.l.f.a(strW + str + strValueOf + jCurrentTimeMillis);
        this.u = new JSONObject();
        com.tkay.core.common.l.p.a(context, f.o, f.o.f, this.t);
        com.tkay.core.common.l.p.a(context, f.o, f.o.g, "");
        com.tkay.core.common.l.p.a(context, f.o, f.o.h, jCurrentTimeMillis);
        new StringBuilder("psid :").append(this.t);
        com.tkay.core.common.k.c.a((String) null, "1", strValueOf, String.valueOf(jCurrentTimeMillis));
        if (i == 0) {
            this.d = jCurrentTimeMillis;
        }
        return jCurrentTimeMillis;
    }

    private synchronized String u(String str) {
        String strOptString = this.u.optString(str);
        if (!TextUtils.isEmpty(strOptString)) {
            return strOptString;
        }
        StringBuilder sb = new StringBuilder();
        sb.append(str);
        sb.append(": sessionid is empty.");
        String strW = w();
        String string = "";
        if (TextUtils.isEmpty(strW)) {
            strW = com.tkay.core.common.l.d.d(this.k) + com.tkay.core.common.l.d.f();
            StringBuilder sb2 = new StringBuilder();
            sb2.append(new Random().nextInt(10000000));
            string = sb2.toString();
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        String strA = com.tkay.core.common.l.f.a(strW + str + string + jCurrentTimeMillis);
        try {
            this.u.put(str, strA);
        } catch (Exception unused) {
        }
        com.tkay.core.common.l.p.a(this.k, f.o, f.o.g, this.u.toString());
        if (!TextUtils.isEmpty(w())) {
            string = null;
        }
        com.tkay.core.common.k.c.a(str, "2", string, String.valueOf(jCurrentTimeMillis));
        return strA;
    }

    private void b(Context context, String str, String str2) {
        a(context.getApplicationContext(), str, str2);
        com.tkay.core.common.l.b.a.a().a(new AnonymousClass11(context, str));
    }

    /* JADX INFO: renamed from: com.tkay.core.common.b.m$11, reason: invalid class name */
    final class AnonymousClass11 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ Context f6076a;
        final /* synthetic */ String b;

        AnonymousClass11(Context context, String str) {
            this.f6076a = context;
            this.b = str;
        }

        @Override // java.lang.Runnable
        public final void run() {
            com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(this.f6076a.getApplicationContext()).b(this.b);
            if (aVarB != null) {
                if (!aVarB.G()) {
                    r.a(m.this.k).a(aVarB);
                }
                if (com.tkay.core.c.b.a(this.f6076a.getApplicationContext()).a(this.b)) {
                    return;
                }
                com.tkay.core.c.b.a(this.f6076a.getApplicationContext());
            }
        }
    }

    public final void b(final Context context) {
        if (z()) {
            com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.common.b.m.12
                @Override // java.lang.Runnable
                public final void run() {
                    boolean z;
                    try {
                        LocalBroadcastManager.class.getName();
                        z = true;
                    } catch (Throwable unused) {
                        z = false;
                    }
                    try {
                        androidx.localbroadcastmanager.content.LocalBroadcastManager.class.getName();
                        z = true;
                    } catch (Throwable unused2) {
                    }
                    if (!z) {
                        try {
                            Log.e("tkay", "Missing: LocalBroadcastManager");
                        } catch (Exception unused3) {
                            return;
                        }
                    }
                    ArrayList arrayList = new ArrayList();
                    Enumeration<String> enumerationEntries = new DexFile(context.getPackageCodePath()).entries();
                    while (enumerationEntries.hasMoreElements()) {
                        String strNextElement = enumerationEntries.nextElement();
                        if (strNextElement.contains("com.tkay.network") && strNextElement.contains("InitManager") && !strNextElement.contains("$")) {
                            arrayList.add(strNextElement);
                        }
                    }
                    Log.i("tkay", "********************************** Network Integration Status *************************************");
                    if (arrayList.size() != 0) {
                        Log.i("tkay", "----------------------------------------");
                    }
                    Iterator it = arrayList.iterator();
                    while (it.hasNext()) {
                        try {
                            Class<?> cls = Class.forName((String) it.next());
                            Object objInvoke = null;
                            try {
                                objInvoke = cls.getDeclaredMethod("getInstance", new Class[0]).invoke(null, new Object[0]);
                            } catch (Throwable unused4) {
                                Log.e("tkay", "Cannot instantiate " + cls.getName() + ", please check if a third-party SDK is imported");
                                Log.i("tkay", "----------------------------------------");
                            }
                            if (objInvoke != null && (objInvoke instanceof TYInitMediation)) {
                                TYInitMediation tYInitMediation = (TYInitMediation) objInvoke;
                                String networkName = tYInitMediation.getNetworkName();
                                if (!TextUtils.isEmpty(networkName)) {
                                    String networkVersion = tYInitMediation.getNetworkVersion();
                                    if (!TextUtils.isEmpty(networkVersion)) {
                                        Log.i("tkay", "NetworkName: " + networkName + "  (v" + networkVersion + ")");
                                    } else {
                                        Log.i("tkay", "NetworkName: ".concat(String.valueOf(networkName)));
                                    }
                                    if (m.h(tYInitMediation.getNetworkSDKClass()) && m.b(tYInitMediation.getPluginClassStatus()) && m.a(context, (List<String>) tYInitMediation.getActivityStatus()) && m.b(context, (List<String>) tYInitMediation.getServiceStatus()) && m.c(context, tYInitMediation.getProviderStatus()) && m.d(context, tYInitMediation.getMetaValutStatus()) && m.e(context, tYInitMediation.getPermissionStatus()) && m.a(context, (List<String>) tYInitMediation.getResourceStatus(), false)) {
                                        Log.i("tkay", "Status: Success");
                                    } else {
                                        Log.e("tkay", "Status: Fail");
                                    }
                                    Log.i("tkay", "----------------------------------------");
                                }
                            }
                        } catch (Throwable unused5) {
                        }
                    }
                    Log.i("tkay", "********************************** Network Integration Status *************************************");
                }
            });
        }
    }

    public final void a(Context context, final String str, Map<String, Object> map) {
        if (z()) {
            Log.i("tkay", "Requesting placement(" + str + ") setting Info,please wait a moment.");
            new com.tkay.core.common.h.l(context, a().o(), a().p(), str, "", map, new HashMap(1)).a(0, new com.tkay.core.common.h.k() { // from class: com.tkay.core.common.b.m.13
                @Override // com.tkay.core.common.h.k
                public final void onLoadCanceled(int i) {
                }

                @Override // com.tkay.core.common.h.k
                public final void onLoadStart(int i) {
                }

                @Override // com.tkay.core.common.h.k
                public final void onLoadFinish(int i, Object obj) {
                    com.tkay.core.c.d dVarB = com.tkay.core.c.d.b((String) obj);
                    if (!"4".equals(String.valueOf(dVarB.Y()))) {
                        Log.i("tkay", "********************************** Get Splash Config Start(" + str + ") *************************************");
                        Log.i("tkay", "This placement(" + str + ") does not belong to Splash!");
                        Log.i("tkay", "********************************** Get Splash Config End(" + str + ") *************************************");
                        return;
                    }
                    Log.i("tkay", "********************************** Get Splash Config Start(" + str + ") *************************************");
                    List<aj> listG = dVarB.G();
                    if (listG == null || listG.size() == 0) {
                        Log.i("tkay", ErrorCode.getErrorCode(ErrorCode.noAdsourceConfig, "", "").getDesc());
                    } else {
                        for (aj ajVar : listG) {
                            Log.i("tkay", "------------------------------------------------");
                            Log.i("tkay", "Network Firm Id:" + ajVar.c());
                            Log.i("tkay", "AdSource Id:" + ajVar.t());
                            Log.i("tkay", "Network Content:" + ajVar.g());
                            Log.i("tkay", "------------------------------------------------");
                        }
                    }
                    Log.i("tkay", "********************************** Get Splash Config End(" + str + ") *************************************");
                }

                @Override // com.tkay.core.common.h.k
                public final void onLoadError(int i, String str2, AdError adError) {
                    Log.i("tkay", "********************************** Get Splash Config Start(" + str + ") *************************************");
                    Log.i("tkay", "This placement(" + str + ") request error:" + adError.printStackTrace());
                    StringBuilder sb = new StringBuilder("********************************** Get Splash Config End(");
                    sb.append(str);
                    sb.append(") *************************************");
                    Log.i("tkay", sb.toString());
                }
            });
            return;
        }
        Log.i("tkay", "********************************** Get Splash Config Start(" + str + ") *************************************");
        Log.i("tkay", "Only use in debug mode!");
        Log.i("tkay", "********************************** Get Splash Config End(" + str + ") *************************************");
    }

    static boolean h(String str) {
        try {
            Class.forName(str);
            Log.i("tkay", "SDK: VERIFIED");
            return true;
        } catch (Throwable unused) {
            Log.i("tkay", "SDK: NOT VERIFIED");
            return false;
        }
    }

    static boolean b(Map<String, Boolean> map) {
        boolean z = true;
        if (map == null) {
            return true;
        }
        StringBuilder sb = new StringBuilder();
        for (String str : map.keySet()) {
            if (!map.get(str).booleanValue()) {
                sb.append(", ");
                sb.append(str);
                z = false;
            }
        }
        if (sb.length() > 2) {
            sb.delete(0, 2);
        }
        if (z) {
            Log.i("tkay", "Dependence Plugin: VERIFIED");
        } else {
            Log.e("tkay", "Dependence Plugin: Missing ".concat(String.valueOf(sb)));
        }
        return z;
    }

    static boolean a(Context context, List<String> list) {
        boolean z = true;
        if (list == null) {
            return true;
        }
        StringBuilder sb = new StringBuilder();
        for (String str : list) {
            try {
            } catch (Throwable th) {
                sb.append(", error: ");
                sb.append(th.getMessage());
            }
            if (context.getPackageManager().queryIntentActivities(new Intent(context, Class.forName(str)), 131072).size() <= 0) {
                sb.append(", ");
                sb.append(str);
                z = false;
            }
        }
        if (sb.length() > 2) {
            sb.delete(0, 2);
        }
        if (z) {
            Log.i("tkay", "Activities : VERIFIED");
        } else {
            Log.e("tkay", "Activities : Missing " + sb.toString() + " declare in AndroidManifest");
        }
        return z;
    }

    static boolean b(Context context, List<String> list) {
        boolean z = true;
        if (list == null) {
            return true;
        }
        StringBuilder sb = new StringBuilder();
        PackageManager packageManager = context.getPackageManager();
        for (String str : list) {
            try {
            } catch (Throwable th) {
                sb.append(", error: ");
                sb.append(th.getMessage());
            }
            if (packageManager.queryIntentServices(new Intent(context, Class.forName(str)), 131072).size() <= 0) {
                sb.append(", ");
                sb.append(str);
                z = false;
            }
        }
        if (sb.length() > 2) {
            sb.delete(0, 2);
        }
        if (z) {
            Log.i("tkay", "Services : VERIFIED");
        } else {
            Log.e("tkay", "Services : Missing " + sb.toString() + " declare in AndroidManifest");
        }
        return z;
    }

    static boolean c(Context context, List<String> list) {
        boolean z;
        boolean z2;
        if (list == null) {
            return true;
        }
        StringBuilder sb = new StringBuilder();
        PackageInfo packageInfo = null;
        try {
            packageInfo = context.getPackageManager().getPackageInfo(context.getPackageName(), 8);
            z = true;
        } catch (Throwable th) {
            sb.append(", error: ");
            sb.append(th.getMessage());
            z = false;
        }
        if (packageInfo == null) {
            return false;
        }
        ProviderInfo[] providerInfoArr = packageInfo.providers;
        for (String str : list) {
            int length = providerInfoArr.length;
            int i = 0;
            while (true) {
                if (i >= length) {
                    z2 = false;
                    break;
                }
                if (TextUtils.equals(providerInfoArr[i].name, str)) {
                    z2 = true;
                    break;
                }
                i++;
            }
            if (!z2) {
                sb.append(", ");
                sb.append(str);
                z = false;
            }
        }
        if (sb.length() > 2) {
            sb.delete(0, 2);
        }
        if (z) {
            Log.i("tkay", "Providers : VERIFIED");
        } else {
            Log.e("tkay", "Providers : Missing " + sb.toString() + " declare in AndroidManifest");
        }
        return z;
    }

    static boolean d(Context context, List<String> list) {
        boolean z = true;
        if (list == null || list.size() == 0) {
            return true;
        }
        StringBuilder sb = new StringBuilder();
        boolean z2 = false;
        try {
            ApplicationInfo applicationInfo = context.getPackageManager().getApplicationInfo(context.getPackageName(), 128);
            int size = list.size();
            for (int i = 0; i < size; i++) {
                String str = list.get(i);
                if (TextUtils.isEmpty(applicationInfo.metaData.getString(str))) {
                    sb.append(", \"");
                    sb.append(str);
                    sb.append("\"");
                    z = false;
                }
            }
            if (sb.length() > 2) {
                sb.delete(0, 2);
            }
            z2 = z;
        } catch (Throwable th) {
            th.printStackTrace();
        }
        if (z2) {
            Log.i("tkay", "meta-data: VERIFIED");
        } else {
            Log.e("tkay", "meta-data: Missing " + sb.toString() + " declare in AndroidManifest");
        }
        return z2;
    }

    static boolean e(Context context, List<String> list) {
        int size;
        boolean z;
        if (list == null || (size = list.size()) == 0) {
            return true;
        }
        StringBuilder sb = new StringBuilder();
        boolean z2 = false;
        try {
            String[] strArr = context.getPackageManager().getPackageInfo(context.getPackageName(), 4096).requestedPermissions;
            if (strArr != null) {
                boolean z3 = true;
                for (int i = 0; i < size; i++) {
                    String str = list.get(i);
                    int length = strArr.length;
                    int i2 = 0;
                    while (true) {
                        if (i2 >= length) {
                            z = false;
                            break;
                        }
                        if (TextUtils.equals(str, strArr[i2])) {
                            z = true;
                            break;
                        }
                        i2++;
                    }
                    if (!z) {
                        if (sb.length() == 0) {
                            sb.append(str);
                        } else {
                            sb.append(", ");
                            sb.append(str);
                        }
                        z3 = false;
                    }
                }
                z2 = z3;
            } else {
                for (int i3 = 0; i3 < size; i3++) {
                    String str2 = list.get(i3);
                    if (i3 == 0) {
                        sb.append(str2);
                    } else {
                        sb.append(", ");
                        sb.append(str2);
                    }
                }
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        if (z2) {
            Log.i("tkay", "Permission: VERIFIED");
        } else {
            Log.e("tkay", "Permission: Missing " + sb.toString() + " declare in AndroidManifest");
        }
        return z2;
    }

    static boolean a(Context context, List<String> list, boolean z) {
        if (list == null || list.size() == 0) {
            return true;
        }
        String str = "";
        boolean z2 = false;
        try {
            int size = list.size();
            boolean z3 = true;
            int i = 0;
            while (true) {
                if (i >= size) {
                    z2 = z3;
                    break;
                }
                String str2 = list.get(i);
                try {
                    if (TextUtils.isEmpty(str)) {
                        str = str2.split("_")[0] + "_*";
                    }
                    int identifier = context.getResources().getIdentifier(str2, "layout", context.getPackageName());
                    if (identifier <= 0) {
                        break;
                    }
                    XmlResourceParser layout = null;
                    try {
                        layout = context.getResources().getLayout(identifier);
                    } finally {
                        try {
                            i++;
                        } finally {
                        }
                    }
                    while (true) {
                        int next = layout.next();
                        if (next == 1) {
                            break;
                        }
                        if (next == 2) {
                            if ("x".equalsIgnoreCase(layout.getName())) {
                                if (layout.getAttributeCount() == 0) {
                                    z3 = false;
                                    break;
                                }
                            } else if (layout.getAttributeCount() >= 0) {
                                break;
                            }
                            i++;
                        }
                    }
                    if (layout != null) {
                        layout.close();
                    }
                    i++;
                } catch (Throwable unused) {
                }
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        if (!z2) {
            Log.e("tkay", "Resource: The " + str + " resources are missing. If shrinkResources is enabled, the " + str + " resources must be added to the whitelist (keep.xml)");
        } else if (!z) {
            Log.i("tkay", "Resource: VERIFIED");
        }
        return z2;
    }

    public final void a(final Context context, final String str, final String str2) {
        com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.common.b.m.2
            @Override // java.lang.Runnable
            public final void run() {
                if (com.tkay.core.c.b.a(context).a(str)) {
                    com.tkay.core.c.b.a(context).a(str, str2);
                }
            }
        });
    }

    public final void a(Runnable runnable) {
        if (Looper.getMainLooper() == Looper.myLooper()) {
            runnable.run();
        } else {
            this.n.post(runnable);
        }
    }

    public static void b(Runnable runnable) {
        com.tkay.core.common.l.b.a.a().a(runnable);
    }

    public final void a(Runnable runnable, long j2) {
        if (j2 <= 0 && Looper.getMainLooper() == Looper.myLooper()) {
            runnable.run();
        } else {
            this.n.postDelayed(runnable, j2);
        }
    }

    public final void c(Runnable runnable) {
        this.n.removeCallbacks(runnable);
    }

    public static void d(Runnable runnable) {
        com.tkay.core.common.l.b.a.a().a(runnable, 1000L);
    }

    public final String w() {
        if (TextUtils.isEmpty(this.w)) {
            this.w = com.tkay.core.common.l.p.b(this.k, f.o, f.o.i, "");
        }
        return this.w;
    }

    public final String x() {
        if (TextUtils.isEmpty(this.x)) {
            this.x = com.tkay.core.common.l.p.b(this.k, f.w, f.o.l, "");
        }
        return this.x;
    }

    public final String y() {
        if (TextUtils.isEmpty(this.y)) {
            this.y = com.tkay.core.common.l.p.b(this.k, f.w, f.o.m, "");
        }
        return this.y;
    }

    public final void i(String str) {
        this.x = str;
        com.tkay.core.common.l.p.a(this.k, f.w, f.o.l, str);
    }

    public final void j(String str) {
        this.y = str;
        com.tkay.core.common.l.p.a(this.k, f.w, f.o.m, str);
    }

    public final void k(String str) {
        com.tkay.core.common.l.p.a(this.k, f.o, f.o.i, str);
        this.w = str;
    }

    public final void b(boolean z) {
        this.C = z;
    }

    private void O() {
        Throwable th;
        boolean zExists;
        boolean z = false;
        if (this.k != null) {
            try {
                zExists = new File(this.k.getExternalFilesDir(null), this.A).exists();
                if (!zExists) {
                    try {
                        zExists = new File(this.k.getFilesDir(), this.A).exists();
                    } catch (Throwable th2) {
                        th = th2;
                        th.printStackTrace();
                    }
                }
            } catch (Throwable th3) {
                th = th3;
                zExists = false;
            }
            z = zExists;
        }
        this.B = z;
    }

    public final boolean z() {
        return this.B || this.C;
    }

    private static long a(long j2) {
        Date date = new Date(j2);
        return new Date(date.getYear(), date.getMonth(), date.getDate()).getTime();
    }

    public final com.tkay.core.common.g.c A() {
        if (this.K == null) {
            this.K = new com.tkay.core.common.i.d();
        }
        return this.K;
    }

    public final void c(boolean z) {
        this.H = z;
    }

    private boolean P() {
        return this.H;
    }

    public final void a(String str, List<String> list) {
        this.P.put(str, list);
    }

    public final List<String> l(String str) {
        return this.P.get(str);
    }

    public final void b(String str, List<String> list) {
        this.P.put(str + "_network_firm", list);
    }

    public final List<String> m(String str) {
        return this.P.get(str + "_network_firm");
    }

    private void e(boolean z) {
        this.U = z;
    }

    public final boolean B() {
        return this.U;
    }

    public final void d(boolean z) {
        this.V = z;
    }

    public final boolean C() {
        return this.V;
    }

    public final void a(final Context context, final DeviceInfoCallback deviceInfoCallback) {
        if (!this.I) {
            Log.e("tkay", "You should init SDK first.");
            if (deviceInfoCallback != null) {
                deviceInfoCallback.deviceInfo("You should init SDK first.");
                return;
            }
            return;
        }
        com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.common.b.m.3
            @Override // java.lang.Runnable
            public final void run() {
                com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(context).b(m.a().o());
                String strF = aVarB != null ? aVarB.F() : "";
                boolean z = true;
                if (!TextUtils.isEmpty(strF)) {
                    try {
                        JSONObject jSONObject = new JSONObject(strF);
                        if (!jSONObject.isNull("a")) {
                            if (jSONObject.optInt("a") != 1) {
                                z = false;
                            }
                        }
                    } catch (Exception unused) {
                    }
                }
                try {
                    JSONObject jSONObject2 = new JSONObject();
                    IExHandler iExHandlerB = m.a().b();
                    if (iExHandlerB != null) {
                        iExHandlerB.fillTestDeviceData(jSONObject2, aVarB);
                    }
                    jSONObject2.put("GAID", com.tkay.core.common.l.d.r(context));
                    jSONObject2.put("AndroidID", z ? com.tkay.core.common.l.d.d(context) : "");
                    jSONObject2.put("How to config TestMode", "Please visit the document center and learn more through: Integration(Basic) -> How To Test");
                    com.tkay.core.common.l.n.a("testModeDeviceInfo", jSONObject2.toString());
                    if (deviceInfoCallback != null) {
                        deviceInfoCallback.deviceInfo(jSONObject2.toString());
                    }
                } catch (Throwable unused2) {
                }
            }
        });
    }

    public static void n(String str) {
        if (TextUtils.isEmpty(str)) {
            Log.e("tkay", "AdSourceId is empty");
            return;
        }
        try {
            if (Long.parseLong(str) == 0) {
                Log.e("tkay", "AdSourceId can't set 0");
            }
        } catch (Exception unused) {
            Log.e("tkay", "AdSourceId '" + str + "' is not compliant");
        }
    }

    public final void a(final String str, final String str2, final String str3, final Map<String, Object> map) {
        com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.common.b.m.4
            @Override // java.lang.Runnable
            public final void run() {
                boolean z;
                if (!m.this.I) {
                    Log.e("SDK.init", "SDK should be inited first!");
                    return;
                }
                com.tkay.core.common.f fVarA = v.a().a(str, str3);
                com.tkay.core.c.d dVarA = com.tkay.core.c.e.a(m.this.k).a(str);
                String strB = x.a().b(str);
                String str4 = (TextUtils.isEmpty(str2) || !com.tkay.core.common.l.g.c(str2)) ? "" : str2;
                com.tkay.core.common.f.a aVarA = null;
                if (fVarA != null) {
                    boolean zE = fVarA.e();
                    aVarA = fVarA.a(m.this.k, false, false, map);
                    z = zE;
                } else {
                    z = false;
                }
                if (aVarA != null) {
                    com.tkay.core.common.f.d dVarN = aVarA.h().N();
                    dVarN.d(1);
                    dVarN.C = str4;
                    com.tkay.core.common.k.a.a(m.this.k).a(16, dVarN);
                    return;
                }
                com.tkay.core.common.f.d dVarA2 = s.a(TextUtils.isEmpty(strB) ? "" : strB, str, "", dVarA, "", 0, 0, 0, map);
                dVarA2.d(z ? 3 : 2);
                if (dVarA == null) {
                    dVarA2.z(str3);
                }
                dVarA2.C = str4;
                com.tkay.core.common.k.a.a(m.this.k).a(16, dVarA2);
            }
        });
    }

    public final void a(Activity activity) {
        WeakReference<Activity> weakReference = this.e;
        if (weakReference == null || weakReference.get() == null) {
            this.e = new WeakReference<>(activity);
        }
    }

    public final Context D() {
        WeakReference<Activity> weakReference = this.e;
        if (weakReference != null && weakReference.get() != null) {
            return this.e.get();
        }
        return this.k;
    }

    public final Activity E() {
        WeakReference<Activity> weakReference = this.e;
        if (weakReference == null || weakReference.get() == null) {
            return null;
        }
        return this.e.get();
    }

    private void a(Context context, TYNetworkConfig tYNetworkConfig) {
        if (tYNetworkConfig == null) {
            tYNetworkConfig = new TYNetworkConfig();
        }
        List<TYInitConfig> tYInitConfigList = tYNetworkConfig.getTYInitConfigList();
        if (tYInitConfigList == null) {
            tYInitConfigList = new ArrayList<>(2);
        }
        if (u()) {
            tYInitConfigList.clear();
        }
        boolean z = false;
        this.J = tYInitConfigList.size() > 0;
        TYInitConfig tYInitConfig = null;
        if (Build.VERSION.SDK_INT != 29) {
            try {
                Constructor declaredConstructor = Class.forName("com.tkay.network.facebook.FacebookTYInitConfig").asSubclass(TYInitConfig.class).getDeclaredConstructor((Class[]) null);
                declaredConstructor.setAccessible(true);
                TYInitConfig tYInitConfig2 = (TYInitConfig) declaredConstructor.newInstance(new Object[0]);
                try {
                    tYInitConfigList.add(0, tYInitConfig2);
                } catch (Throwable unused) {
                }
                tYInitConfig = tYInitConfig2;
            } catch (Throwable unused2) {
            }
        }
        for (TYInitConfig tYInitConfig3 : tYInitConfigList) {
            if (tYInitConfig3 != null) {
                if (tYInitConfig != null && TextUtils.equals(tYInitConfig.getClass().getSimpleName(), tYInitConfig3.getClass().getSimpleName())) {
                    if (!z) {
                        z = true;
                    }
                }
                com.tkay.core.common.l.b.a.a().a(new AnonymousClass5(tYInitConfig3, context));
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.core.common.b.m$5, reason: invalid class name */
    final class AnonymousClass5 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ TYInitConfig f6082a;
        final /* synthetic */ Context b;

        AnonymousClass5(TYInitConfig tYInitConfig, Context context) {
            this.f6082a = tYInitConfig;
            this.b = context;
        }

        @Override // java.lang.Runnable
        public final void run() {
            Map<String, Object> requestParamMap;
            boolean zC;
            boolean zD;
            try {
                TYInitMediation initMediation = this.f6082a.getInitMediation();
                if (initMediation != null) {
                    String networkName = initMediation.getNetworkName();
                    String strB = com.tkay.core.common.l.p.b(m.this.k, f.x, networkName, "");
                    if (!TextUtils.isEmpty(strB)) {
                        requestParamMap = com.tkay.core.common.l.h.c(strB);
                    } else {
                        requestParamMap = this.f6082a.getRequestParamMap();
                        requestParamMap.put(TYInitMediation.KEY_LOCAL, Boolean.TRUE);
                    }
                    boolean z = false;
                    try {
                        zC = p.a(this.b).c();
                        try {
                            zD = p.a(this.b).d();
                            try {
                                initMediation.setUserDataConsent(this.b, zC, zD);
                            } catch (Throwable th) {
                                th = th;
                                th.printStackTrace();
                            }
                        } catch (Throwable th2) {
                            th = th2;
                            zD = false;
                        }
                    } catch (Throwable th3) {
                        th = th3;
                        zC = false;
                        zD = false;
                    }
                    com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(this.b).b(m.this.l);
                    requestParamMap.put(f.k.c, Boolean.valueOf(aVarB.p() == 3));
                    boolean zB = com.tkay.core.common.l.g.b();
                    if (aVarB.q() == 2 && zB) {
                        z = true;
                    }
                    requestParamMap.put(f.k.d, Boolean.valueOf(z));
                    if (m.a().z()) {
                        Log.i("tkay", "pre init network: [" + networkName + "], params: " + new JSONObject(requestParamMap).toString() + ", gdpr: " + zC + ", in eu: " + zD);
                    }
                    initMediation.initSDK(m.this.k, requestParamMap, null);
                }
            } catch (Throwable th4) {
                th4.printStackTrace();
            }
        }
    }

    public final void a(String str, Map<String, Object> map, String... strArr) {
        com.tkay.core.common.f.d dVar;
        if (map == null || map.containsKey(TYInitMediation.KEY_LOCAL)) {
            return;
        }
        try {
            dVar = (com.tkay.core.common.f.d) map.get(f.k.h);
        } catch (Throwable unused) {
            dVar = null;
        }
        map.remove(f.k.h);
        String string = new JSONObject(map).toString();
        Log.e("tkay", "Mismatched initialization parameters! server params: [" + str + "], " + string);
        com.tkay.core.common.l.p.a(this.k, f.x, str, string);
        if (dVar == null || strArr == null) {
            return;
        }
        try {
            com.tkay.core.common.k.c.a(dVar, strArr[0], strArr.length > 1 ? strArr[1] : null);
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public final void a(String[] strArr, ITYAdFilter iTYAdFilter) {
        ConcurrentHashMap<String, ITYAdFilter> concurrentHashMap = this.W;
        if (concurrentHashMap != null) {
            concurrentHashMap.clear();
        }
        if (strArr == null || strArr.length <= 0) {
            return;
        }
        if (this.W == null) {
            this.W = new ConcurrentHashMap<>();
        }
        for (String str : strArr) {
            this.W.put(str, iTYAdFilter);
        }
    }

    public final ITYAdFilter o(String str) {
        ConcurrentHashMap<String, ITYAdFilter> concurrentHashMap;
        if (TextUtils.isEmpty(str) || (concurrentHashMap = this.W) == null) {
            return null;
        }
        return concurrentHashMap.get(str);
    }

    public final String F() {
        return this.X;
    }

    public final void p(String str) {
        this.X = str;
    }

    public final boolean G() {
        Boolean bool = this.c;
        if (bool != null) {
            return bool.booleanValue();
        }
        try {
            Class.forName("com.reyun.mobdna.MobDNA");
            this.c = Boolean.TRUE;
        } catch (Throwable unused) {
            this.c = Boolean.FALSE;
        }
        return this.c.booleanValue();
    }

    public final boolean H() {
        return this.J;
    }

    public final void a(ATPrivacyConfig aTPrivacyConfig) {
        this.Y = aTPrivacyConfig;
    }

    public final ATPrivacyConfig I() {
        return this.Y;
    }

    public final int J() {
        return this.Z;
    }

    public final void c(int i) {
        this.Z = i;
    }

    public final al K() {
        if (this.aa == null) {
            this.aa = new al();
        }
        try {
            this.aa.a(com.tkay.core.common.l.d.s(a().k));
            this.aa.b(com.tkay.core.common.l.d.k());
            this.aa.c(com.tkay.core.common.l.d.m());
            this.aa.d(com.tkay.core.common.l.d.b(com.tkay.core.common.l.d.l()));
        } catch (Throwable unused) {
        }
        return this.aa;
    }

    public final long d(int i) {
        if (i != 1 && i != 4) {
            return 26214400L;
        }
        com.tkay.core.c.b.a(this.k);
        return com.tkay.core.c.b.a() * 1024;
    }

    public final void L() {
        this.ab = System.currentTimeMillis();
    }

    private long Q() {
        return this.ab;
    }

    private static void h(Context context) {
        com.tkay.core.common.e.a.a().a(context);
    }

    static /* synthetic */ void a(m mVar, Context context) {
        long jCurrentTimeMillis = mVar.d;
        try {
            String strB = com.tkay.core.common.l.p.b(a().k, f.o, a().o() + "playRecord", "");
            if (!TextUtils.isEmpty(strB)) {
                JSONObject jSONObject = new JSONObject(strB);
                long jOptLong = jSONObject.optLong(d.f6043a);
                long jOptLong2 = jSONObject.optLong(d.b);
                String strOptString = jSONObject.optString(d.c);
                int iOptInt = jSONObject.optInt(d.d);
                if (jCurrentTimeMillis != 0) {
                    com.tkay.core.common.k.c.a(iOptInt == 1 ? 4 : 2, jOptLong, jOptLong2, strOptString);
                    new StringBuilder("Create new psid, SDKContext.init to send playTime:").append((jOptLong2 - jOptLong) / 1000);
                } else {
                    try {
                        new StringBuilder("Psid is old, use pervioud statime,close before:").append((jOptLong2 - jOptLong) / 1000);
                        jCurrentTimeMillis = jOptLong;
                    } catch (Exception unused) {
                        jCurrentTimeMillis = jOptLong;
                        com.tkay.core.common.l.p.a(a().k, f.o, a().o() + "playRecord", "");
                    }
                }
                com.tkay.core.common.l.p.a(a().k, f.o, a().o() + "playRecord", "");
            }
        } catch (Exception unused2) {
        }
        if (jCurrentTimeMillis == 0) {
            jCurrentTimeMillis = com.tkay.core.common.l.p.a(context, f.o, f.o.h, (Long) 0L).longValue();
        }
        if (jCurrentTimeMillis == 0) {
            jCurrentTimeMillis = System.currentTimeMillis();
        }
        ((Application) context.getApplicationContext()).registerActivityLifecycleCallbacks(new d(jCurrentTimeMillis));
    }

    static /* synthetic */ void b(m mVar) {
        Throwable th;
        boolean zExists;
        boolean z = false;
        if (mVar.k != null) {
            try {
                zExists = new File(mVar.k.getExternalFilesDir(null), mVar.A).exists();
                if (!zExists) {
                    try {
                        zExists = new File(mVar.k.getFilesDir(), mVar.A).exists();
                    } catch (Throwable th2) {
                        th = th2;
                        th.printStackTrace();
                    }
                }
            } catch (Throwable th3) {
                th = th3;
                zExists = false;
            }
            z = zExists;
        }
        mVar.B = z;
    }

    static /* synthetic */ void c(Context context) {
        try {
            Class<?> cls = Class.forName("com.tkay.network.adx.AdxTYInitManager");
            Object objInvoke = null;
            try {
                objInvoke = cls.getDeclaredMethod("getInstance", new Class[0]).invoke(null, new Object[0]);
            } catch (Throwable unused) {
                Log.e("tkay", "Cannot instantiate " + cls.getName() + ", please check if SDK is imported");
            }
            if (objInvoke == null || !(objInvoke instanceof TYInitMediation)) {
                return;
            }
            a(context, (List<String>) ((TYInitMediation) objInvoke).getResourceStatus(), true);
        } catch (Throwable unused2) {
        }
    }

    static /* synthetic */ void a(m mVar, Context context, TYNetworkConfig tYNetworkConfig) {
        if (tYNetworkConfig == null) {
            tYNetworkConfig = new TYNetworkConfig();
        }
        List<TYInitConfig> tYInitConfigList = tYNetworkConfig.getTYInitConfigList();
        if (tYInitConfigList == null) {
            tYInitConfigList = new ArrayList<>(2);
        }
        if (mVar.u()) {
            tYInitConfigList.clear();
        }
        boolean z = false;
        mVar.J = tYInitConfigList.size() > 0;
        TYInitConfig tYInitConfig = null;
        if (Build.VERSION.SDK_INT != 29) {
            try {
                Constructor declaredConstructor = Class.forName("com.tkay.network.facebook.FacebookTYInitConfig").asSubclass(TYInitConfig.class).getDeclaredConstructor((Class[]) null);
                declaredConstructor.setAccessible(true);
                TYInitConfig tYInitConfig2 = (TYInitConfig) declaredConstructor.newInstance(new Object[0]);
                try {
                    tYInitConfigList.add(0, tYInitConfig2);
                } catch (Throwable unused) {
                }
                tYInitConfig = tYInitConfig2;
            } catch (Throwable unused2) {
            }
        }
        for (TYInitConfig tYInitConfig3 : tYInitConfigList) {
            if (tYInitConfig3 != null) {
                if (tYInitConfig != null && TextUtils.equals(tYInitConfig.getClass().getSimpleName(), tYInitConfig3.getClass().getSimpleName())) {
                    if (!z) {
                        z = true;
                    }
                }
                com.tkay.core.common.l.b.a.a().a(mVar.new AnonymousClass5(tYInitConfig3, context));
            }
        }
    }
}
