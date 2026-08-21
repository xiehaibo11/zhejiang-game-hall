package com.loc;

import android.content.Context;
import android.content.SharedPreferences;
import android.net.Uri;
import android.os.Build;
import android.os.SystemClock;
import android.text.TextUtils;
import com.loc.br;
import com.loc.bt;
import java.net.Inet4Address;
import java.net.Inet6Address;
import java.net.InetAddress;
import java.net.InterfaceAddress;
import java.net.NetworkInterface;
import java.net.URLDecoder;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.Queue;
import java.util.Vector;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.atomic.AtomicInteger;
import org.json.JSONObject;

/* JADX INFO: compiled from: AuthConfigManager.java */
/* JADX INFO: loaded from: classes2.dex */
public final class m {
    private static volatile boolean D = false;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static int f3009a = -1;
    public static String b = "";
    public static Context c = null;
    private static String k = "6";
    private static String l = "4";
    private static String m = "9";
    private static String n = "8";
    private static volatile boolean o = true;
    private static Vector<e> p = new Vector<>();
    private static Map<String, Integer> q = new HashMap();
    private static String r = null;
    private static long s = 0;
    public static volatile boolean d = false;
    private static volatile ConcurrentHashMap<String, g> t = new ConcurrentHashMap<>(8);
    private static volatile ConcurrentHashMap<String, Long> u = new ConcurrentHashMap<>(8);
    private static volatile ConcurrentHashMap<String, d> v = new ConcurrentHashMap<>(8);
    private static boolean w = false;
    private static boolean x = false;
    public static int e = 5000;
    public static boolean f = true;
    public static boolean g = false;
    private static int y = 3;
    public static boolean h = true;
    public static boolean i = false;
    private static int z = 3;
    public static boolean j = false;
    private static ConcurrentHashMap<String, Boolean> A = new ConcurrentHashMap<>();
    private static ConcurrentHashMap<String, Boolean> B = new ConcurrentHashMap<>();
    private static ArrayList<br.a> C = new ArrayList<>();
    private static Queue<br.c> E = new LinkedList();

    /* JADX INFO: compiled from: AuthConfigManager.java */
    public interface a {
        void a(b bVar);
    }

    /* JADX INFO: compiled from: AuthConfigManager.java */
    public static class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        @Deprecated
        public JSONObject f3011a;

        @Deprecated
        public JSONObject b;
        public String c;
        public int d = -1;
        public long e = 0;
        public JSONObject f;
        public a g;
        public C0236b h;
        private boolean i;

        /* JADX INFO: compiled from: AuthConfigManager.java */
        public static class a {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            public boolean f3012a;
            public boolean b;
            public JSONObject c;
        }

        /* JADX INFO: renamed from: com.loc.m$b$b, reason: collision with other inner class name */
        /* JADX INFO: compiled from: AuthConfigManager.java */
        public static class C0236b {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            public boolean f3013a;
        }
    }

    /* JADX INFO: compiled from: AuthConfigManager.java */
    static class c extends bp {
        private String d;
        private Map<String, String> e;
        private String f;
        private String g;
        private String h;

        c(Context context, w wVar, String str, String str2, String str3, String str4) {
            super(context, wVar);
            this.d = str;
            this.e = null;
            this.f = str2;
            this.g = str3;
            this.h = str4;
            a(bt.c.HTTPS);
            a(bt.a.FIX);
        }

        private static String a(String str, String str2) {
            try {
                return !TextUtils.isEmpty(str2) ? Uri.parse(str).buildUpon().encodedAuthority(str2).build().toString() : str;
            } catch (Throwable unused) {
                return str;
            }
        }

        @Override // com.loc.bt
        public final Map<String, String> a() {
            if (TextUtils.isEmpty(this.h)) {
                return null;
            }
            HashMap map = new HashMap();
            map.put("host", this.h);
            return map;
        }

        @Override // com.loc.bp
        public final byte[] a_() {
            return null;
        }

        @Override // com.loc.bt
        public final String b() {
            return a("https://restsdk.amap.com/v3/iasdkauth", this.f);
        }

        @Override // com.loc.bp
        public final byte[] b_() {
            String strP = o.p(this.f2874a);
            if (!TextUtils.isEmpty(strP)) {
                strP = s.a(new StringBuilder(strP).reverse().toString());
            }
            HashMap map = new HashMap();
            map.put("authkey", TextUtils.isEmpty(this.d) ? "" : this.d);
            map.put("plattype", "android");
            map.put("ccver", "1");
            map.put("product", this.b.a());
            map.put("version", this.b.b());
            map.put("output", "json");
            StringBuilder sb = new StringBuilder();
            sb.append(Build.VERSION.SDK_INT);
            map.put("androidversion", sb.toString());
            map.put("deviceId", strP);
            map.put("manufacture", Build.MANUFACTURER);
            Map<String, String> map2 = this.e;
            if (map2 != null && !map2.isEmpty()) {
                map.putAll(this.e);
            }
            map.put("abitype", x.a(this.f2874a));
            map.put("ext", this.b.d());
            return x.a(x.a(map));
        }

        @Override // com.loc.r, com.loc.bt
        public final String c() {
            return a("https://dualstack-arestapi.amap.com/v3/iasdkauth", this.g);
        }

        @Override // com.loc.bp
        protected final String f() {
            return "3.0";
        }

        @Override // com.loc.bt
        protected final String g() {
            return !TextUtils.isEmpty(this.h) ? this.h : super.g();
        }
    }

    /* JADX INFO: compiled from: AuthConfigManager.java */
    private static class d {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        w f3014a;
        String b;
        a c;

        private d() {
        }

        /* synthetic */ d(byte b) {
            this();
        }
    }

    /* JADX INFO: compiled from: AuthConfigManager.java */
    public static class e {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private String f3015a;
        private String b;
        private AtomicInteger c;

        public e(String str, String str2, int i) {
            this.f3015a = str;
            this.b = str2;
            this.c = new AtomicInteger(i);
        }

        public static e b(String str) {
            if (TextUtils.isEmpty(str)) {
                return null;
            }
            try {
                JSONObject jSONObject = new JSONObject(str);
                return new e(jSONObject.optString("a"), jSONObject.optString("f"), jSONObject.optInt(at.g));
            } catch (Throwable unused) {
                return null;
            }
        }

        public final int a() {
            AtomicInteger atomicInteger = this.c;
            if (atomicInteger == null) {
                return 0;
            }
            return atomicInteger.get();
        }

        public final void a(String str) {
            this.b = str;
        }

        public final String b() {
            try {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("a", this.f3015a);
                jSONObject.put("f", this.b);
                jSONObject.put(at.g, this.c.get());
                return jSONObject.toString();
            } catch (Throwable unused) {
                return "";
            }
        }
    }

    /* JADX INFO: compiled from: AuthConfigManager.java */
    public static class f {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static boolean f3016a = true;
        public static boolean b = false;
        public static boolean c = true;
        public static int d;
        public static boolean e;
        public static int f;
    }

    /* JADX INFO: compiled from: AuthConfigManager.java */
    public static class g {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public long f3017a;
        public String b;

        g(Long l, String str) {
            this.f3017a = 0L;
            this.b = "";
            this.f3017a = l.longValue();
            this.b = str;
        }
    }

    public static long a(List<String> list) {
        if (list == null) {
            return 0L;
        }
        try {
            if (list.size() <= 0) {
                return 0L;
            }
            String str = list.get(0);
            if (TextUtils.isEmpty(str)) {
                return 0L;
            }
            return Long.valueOf(str).longValue();
        } catch (Exception e2) {
            e2.printStackTrace();
            return 0L;
        }
    }

    public static b a(Context context, w wVar, String str, String str2, String str3, String str4) {
        return b(context, wVar, str, str2, str3, str4);
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x002f A[DONT_GENERATE] */
    /* JADX WARN: Removed duplicated region for block: B:19:0x0031  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static synchronized com.loc.m.e a(android.content.Context r6, java.lang.String r7, java.lang.String r8) {
        /*
            java.lang.Class<com.loc.m> r0 = com.loc.m.class
            monitor-enter(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L6b
            r2 = 0
            r3 = 0
            if (r1 != 0) goto L2c
            r1 = 0
        Lc:
            java.util.Vector<com.loc.m$e> r4 = com.loc.m.p     // Catch: java.lang.Throwable -> L6b
            int r4 = r4.size()     // Catch: java.lang.Throwable -> L6b
            if (r1 >= r4) goto L2c
            java.util.Vector<com.loc.m$e> r4 = com.loc.m.p     // Catch: java.lang.Throwable -> L6b
            java.lang.Object r4 = r4.get(r1)     // Catch: java.lang.Throwable -> L6b
            com.loc.m$e r4 = (com.loc.m.e) r4     // Catch: java.lang.Throwable -> L6b
            if (r4 == 0) goto L29
            java.lang.String r5 = com.loc.m.e.c(r4)     // Catch: java.lang.Throwable -> L6b
            boolean r5 = r7.equals(r5)     // Catch: java.lang.Throwable -> L6b
            if (r5 == 0) goto L29
            goto L2d
        L29:
            int r1 = r1 + 1
            goto Lc
        L2c:
            r4 = r2
        L2d:
            if (r4 == 0) goto L31
            monitor-exit(r0)
            return r4
        L31:
            if (r6 != 0) goto L35
            monitor-exit(r0)
            return r2
        L35:
            java.lang.String r1 = ""
            java.lang.String r6 = com.loc.bd.b(r6, r8, r7, r1)     // Catch: java.lang.Throwable -> L6b
            com.loc.m$e r6 = com.loc.m.e.b(r6)     // Catch: java.lang.Throwable -> L6b
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L6b
            java.lang.String r8 = "yyyyMMdd"
            java.lang.String r8 = com.loc.x.a(r1, r8)     // Catch: java.lang.Throwable -> L6b
            if (r6 != 0) goto L50
            com.loc.m$e r6 = new com.loc.m$e     // Catch: java.lang.Throwable -> L6b
            r6.<init>(r7, r8, r3)     // Catch: java.lang.Throwable -> L6b
        L50:
            java.lang.String r7 = com.loc.m.e.a(r6)     // Catch: java.lang.Throwable -> L6b
            boolean r7 = r8.equals(r7)     // Catch: java.lang.Throwable -> L6b
            if (r7 != 0) goto L64
            r6.a(r8)     // Catch: java.lang.Throwable -> L6b
            java.util.concurrent.atomic.AtomicInteger r7 = com.loc.m.e.b(r6)     // Catch: java.lang.Throwable -> L6b
            r7.set(r3)     // Catch: java.lang.Throwable -> L6b
        L64:
            java.util.Vector<com.loc.m$e> r7 = com.loc.m.p     // Catch: java.lang.Throwable -> L6b
            r7.add(r6)     // Catch: java.lang.Throwable -> L6b
            monitor-exit(r0)
            return r6
        L6b:
            r6 = move-exception
            monitor-exit(r0)
            throw r6
        */
        throw new UnsupportedOperationException("Method not decompiled: com.loc.m.a(android.content.Context, java.lang.String, java.lang.String):com.loc.m$e");
    }

    public static String a(String str) {
        d dVar;
        if (!v.containsKey(str) || (dVar = v.get(str)) == null) {
            return null;
        }
        return dVar.b;
    }

    public static void a(Context context) {
        if (context != null) {
            c = context.getApplicationContext();
        }
    }

    private static void a(Context context, w wVar, String str) {
        HashMap map = new HashMap();
        map.put("amap_sdk_auth_fail", "1");
        map.put("amap_sdk_auth_fail_type", str);
        map.put("amap_sdk_name", wVar.a());
        map.put("amap_sdk_version", wVar.c());
        String string = new JSONObject((Map<String, Object>) map).toString();
        if (TextUtils.isEmpty(string)) {
            return;
        }
        try {
            bz bzVar = new bz(context, "core", "2.0", "O001");
            bzVar.a(string);
            ca.a(bzVar, context);
        } catch (k unused) {
        }
    }

    public static synchronized void a(Context context, w wVar, String str, a aVar) {
        if (context == null || wVar == null) {
            return;
        }
        try {
            if (c == null) {
                c = context.getApplicationContext();
            }
            String strA = wVar.a();
            if (TextUtils.isEmpty(strA)) {
                return;
            }
            a(wVar);
            if (v == null) {
                v = new ConcurrentHashMap<>(8);
            }
            if (u == null) {
                u = new ConcurrentHashMap<>(8);
            }
            if (t == null) {
                t = new ConcurrentHashMap<>(8);
            }
            if (!v.containsKey(strA)) {
                d dVar = new d((byte) 0);
                dVar.f3014a = wVar;
                dVar.b = str;
                dVar.c = aVar;
                v.put(strA, dVar);
                t.put(strA, new g(Long.valueOf(bd.a(c, "open_common", strA, 0L)), bd.b(c, "open_common", strA + "lct-info", "")));
                d(c);
                e(c);
            }
        } catch (Throwable th) {
            as.a(th, "at", "rglc");
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:117:0x02cb  */
    /* JADX WARN: Removed duplicated region for block: B:139:0x0232 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:153:0x032a A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:159:0x02ed A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:163:0x02d5 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:168:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:93:0x0226  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static void a(android.content.Context r18, com.loc.w r19, java.lang.String r20, com.loc.m.b r21, org.json.JSONObject r22) throws org.json.JSONException {
        /*
            Method dump skipped, instruction units count: 863
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.loc.m.a(android.content.Context, com.loc.w, java.lang.String, com.loc.m$b, org.json.JSONObject):void");
    }

    private static void a(Context context, w wVar, Throwable th) {
        a(context, wVar, th.getMessage());
    }

    public static void a(Context context, String str) {
        l.a(context, str);
    }

    private static void a(Context context, String str, String str2, e eVar) {
        if (eVar == null || TextUtils.isEmpty(eVar.f3015a)) {
            return;
        }
        String strB = eVar.b();
        if (TextUtils.isEmpty(strB) || context == null) {
            return;
        }
        SharedPreferences.Editor editorA = bd.a(context, str2);
        editorA.putString(str, strB);
        bd.a(editorA);
    }

    public static void a(br.c cVar) {
        if (cVar == null || c == null) {
            return;
        }
        HashMap map = new HashMap();
        map.put("serverip", cVar.c);
        map.put("hostname", cVar.e);
        map.put("path", cVar.d);
        map.put("csid", cVar.f2882a);
        map.put("degrade", String.valueOf(cVar.b.a()));
        map.put("errorcode", String.valueOf(cVar.m));
        map.put("errorsubcode", String.valueOf(cVar.n));
        map.put("connecttime", String.valueOf(cVar.h));
        map.put("writetime", String.valueOf(cVar.i));
        map.put("readtime", String.valueOf(cVar.j));
        map.put("datasize", String.valueOf(cVar.l));
        map.put("totaltime", String.valueOf(cVar.f));
        String string = new JSONObject((Map<String, Object>) map).toString();
        "--埋点--".concat(String.valueOf(string));
        br.a();
        if (TextUtils.isEmpty(string)) {
            return;
        }
        try {
            bz bzVar = new bz(c, "core", "2.0", "O008");
            bzVar.a(string);
            ca.a(bzVar, c);
        } catch (k unused) {
        }
    }

    private static void a(w wVar) {
        if (wVar != null) {
            try {
                if (TextUtils.isEmpty(wVar.a())) {
                    return;
                }
                String strC = wVar.c();
                if (TextUtils.isEmpty(strC)) {
                    strC = wVar.b();
                }
                if (TextUtils.isEmpty(strC)) {
                    return;
                }
                ag.a(wVar.a(), strC);
            } catch (Throwable unused) {
            }
        }
    }

    private static synchronized void a(String str, long j2, String str2) {
        try {
            if (v != null && v.containsKey(str)) {
                if (t == null) {
                    t = new ConcurrentHashMap<>(8);
                }
                t.put(str, new g(Long.valueOf(j2), str2));
                if (c != null) {
                    SharedPreferences.Editor editorA = bd.a(c, "open_common");
                    bd.a(editorA, str, j2);
                    bd.a(editorA, str + "lct-info", str2);
                    bd.a(editorA);
                }
            }
        } catch (Throwable th) {
            as.a(th, "at", "ucut");
        }
    }

    private static void a(String str, String str2) {
        e eVarA = a(c, str, str2);
        String strA = x.a(System.currentTimeMillis(), "yyyyMMdd");
        if (!strA.equals(eVarA.b)) {
            eVarA.a(strA);
            eVarA.c.set(0);
        }
        eVarA.c.incrementAndGet();
        a(c, str, str2, eVarA);
    }

    public static synchronized void a(final String str, boolean z2, final String str2, final String str3, final String str4) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            if (u == null) {
                u = new ConcurrentHashMap<>(8);
            }
            u.put(str, Long.valueOf(SystemClock.elapsedRealtime()));
            if (v == null) {
                return;
            }
            if (v.containsKey(str)) {
                if (TextUtils.isEmpty(str)) {
                    return;
                }
                if (z2) {
                    bq.a(true, str);
                }
                cr.a().b(new cs() { // from class: com.loc.m.1
                    @Override // com.loc.cs
                    public final void a() {
                        d dVar = (d) m.v.get(str);
                        if (dVar == null) {
                            return;
                        }
                        a aVar = dVar.c;
                        b bVarA = m.a(m.c, dVar.f3014a, dVar.b, str2, str3, str4);
                        if (bVarA == null || aVar == null) {
                            return;
                        }
                        aVar.a(bVarA);
                    }
                });
            }
        } catch (Throwable th) {
            as.a(th, "at", "lca");
        }
    }

    public static void a(String str, boolean z2, boolean z3, boolean z4) {
        if (TextUtils.isEmpty(str) || c == null) {
            return;
        }
        HashMap map = new HashMap();
        map.put("url", str);
        map.put("downLevel", String.valueOf(z2));
        map.put("ant", o.j(c) == 0 ? "0" : "1");
        map.put("type", z4 ? z2 ? m : n : z2 ? k : l);
        map.put("status", z3 ? "0" : "1");
        String string = new JSONObject((Map<String, Object>) map).toString();
        if (TextUtils.isEmpty(string)) {
            return;
        }
        try {
            bz bzVar = new bz(c, "core", "2.0", "O002");
            bzVar.a(string);
            ca.a(bzVar, c);
        } catch (k unused) {
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:26:0x006b A[Catch: all -> 0x009c, LOOP:0: B:24:0x0062->B:26:0x006b, LOOP_END, TryCatch #0 {, blocks: (B:9:0x000d, B:10:0x0013, B:12:0x0019, B:14:0x0029, B:16:0x0033, B:18:0x0039, B:20:0x003f, B:21:0x0042, B:22:0x0046, B:23:0x0059, B:24:0x0062, B:26:0x006b, B:27:0x0097, B:28:0x009a), top: B:34:0x000d }] */
    /* JADX WARN: Removed duplicated region for block: B:36:0x0097 A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static void a(boolean r4, com.loc.br.a r5) {
        /*
            boolean r0 = com.loc.m.D
            if (r0 == 0) goto L9f
            if (r5 != 0) goto L8
            goto L9f
        L8:
            java.util.ArrayList<com.loc.br$a> r0 = com.loc.m.C
            monitor-enter(r0)
            if (r4 == 0) goto L59
            java.util.ArrayList<com.loc.br$a> r4 = com.loc.m.C     // Catch: java.lang.Throwable -> L9c
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> L9c
        L13:
            boolean r1 = r4.hasNext()     // Catch: java.lang.Throwable -> L9c
            if (r1 == 0) goto L59
            java.lang.Object r1 = r4.next()     // Catch: java.lang.Throwable -> L9c
            com.loc.br$a r1 = (com.loc.br.a) r1     // Catch: java.lang.Throwable -> L9c
            java.lang.String r2 = r1.b     // Catch: java.lang.Throwable -> L9c
            java.lang.String r3 = r5.b     // Catch: java.lang.Throwable -> L9c
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Throwable -> L9c
            if (r2 == 0) goto L13
            java.lang.String r2 = r1.e     // Catch: java.lang.Throwable -> L9c
            java.lang.String r3 = r5.e     // Catch: java.lang.Throwable -> L9c
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Throwable -> L9c
            if (r2 == 0) goto L13
            int r2 = r1.f     // Catch: java.lang.Throwable -> L9c
            int r3 = r5.f     // Catch: java.lang.Throwable -> L9c
            if (r2 != r3) goto L13
            java.util.concurrent.atomic.AtomicInteger r2 = r1.j     // Catch: java.lang.Throwable -> L9c
            java.util.concurrent.atomic.AtomicInteger r3 = r5.j     // Catch: java.lang.Throwable -> L9c
            if (r2 != r3) goto L46
            r4.remove()     // Catch: java.lang.Throwable -> L9c
        L42:
            com.loc.br.a()     // Catch: java.lang.Throwable -> L9c
            goto L13
        L46:
            java.util.concurrent.atomic.AtomicInteger r2 = r1.j     // Catch: java.lang.Throwable -> L9c
            java.util.concurrent.atomic.AtomicInteger r1 = r1.j     // Catch: java.lang.Throwable -> L9c
            int r1 = r1.get()     // Catch: java.lang.Throwable -> L9c
            java.util.concurrent.atomic.AtomicInteger r3 = r5.j     // Catch: java.lang.Throwable -> L9c
            int r3 = r3.get()     // Catch: java.lang.Throwable -> L9c
            int r1 = r1 - r3
            r2.set(r1)     // Catch: java.lang.Throwable -> L9c
            goto L42
        L59:
            r4 = 0
            com.loc.m.D = r4     // Catch: java.lang.Throwable -> L9c
            java.util.ArrayList<com.loc.br$a> r4 = com.loc.m.C     // Catch: java.lang.Throwable -> L9c
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> L9c
        L62:
            com.loc.br.a()     // Catch: java.lang.Throwable -> L9c
            boolean r5 = r4.hasNext()     // Catch: java.lang.Throwable -> L9c
            if (r5 == 0) goto L97
            java.lang.Object r5 = r4.next()     // Catch: java.lang.Throwable -> L9c
            com.loc.br$a r5 = (com.loc.br.a) r5     // Catch: java.lang.Throwable -> L9c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9c
            java.lang.String r2 = "----path="
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r2 = r5.e     // Catch: java.lang.Throwable -> L9c
            r1.append(r2)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r2 = "-counts="
            r1.append(r2)     // Catch: java.lang.Throwable -> L9c
            java.util.concurrent.atomic.AtomicInteger r2 = r5.j     // Catch: java.lang.Throwable -> L9c
            r1.append(r2)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r2 = "-code="
            r1.append(r2)     // Catch: java.lang.Throwable -> L9c
            int r5 = r5.f     // Catch: java.lang.Throwable -> L9c
            r1.append(r5)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r5 = "----"
            r1.append(r5)     // Catch: java.lang.Throwable -> L9c
            goto L62
        L97:
            com.loc.br.a()     // Catch: java.lang.Throwable -> L9c
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L9c
            return
        L9c:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L9c
            throw r4
        L9f:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.loc.m.a(boolean, com.loc.br$a):void");
    }

    public static void a(boolean z2, String str) {
        try {
            "--markHostNameFailed---hostname=".concat(String.valueOf(str));
            br.a();
            if (f || z2) {
                if ((i || !z2) && !TextUtils.isEmpty(str)) {
                    if (z2) {
                        if (B.get(str) != null) {
                            return;
                        }
                        B.put(str, Boolean.TRUE);
                        a(b(str, "a15"), "open_common");
                        return;
                    }
                    if (A.get(str) != null) {
                        return;
                    }
                    A.put(str, Boolean.TRUE);
                    a(b(str, "a14"), "open_common");
                }
            }
        } catch (Throwable unused) {
        }
    }

    public static boolean a() {
        e eVarA;
        if (c != null) {
            i();
            if (!c()) {
                return false;
            }
            if (b()) {
                return true;
            }
        }
        return o && (eVarA = a(c, "IPV6_CONFIG_NAME", "open_common")) != null && eVarA.a() < 5;
    }

    public static synchronized boolean a(String str, long j2) {
        boolean z2 = false;
        try {
            if (TextUtils.isEmpty(str)) {
                return false;
            }
            g gVarF = f(str);
            long jLongValue = 0;
            if (j2 != (gVarF != null ? gVarF.f3017a : 0L)) {
                if (u != null && u.containsKey(str)) {
                    jLongValue = u.get(str).longValue();
                }
                if (SystemClock.elapsedRealtime() - jLongValue > 30000) {
                    z2 = true;
                }
            }
        } catch (Throwable unused) {
        }
        return z2;
    }

    public static boolean a(String str, boolean z2) {
        try {
            if (TextUtils.isEmpty(str)) {
                return z2;
            }
            String[] strArrSplit = URLDecoder.decode(str).split("/");
            return strArrSplit[strArrSplit.length - 1].charAt(4) % 2 == 1;
        } catch (Throwable unused) {
            return z2;
        }
    }

    private static boolean a(InetAddress inetAddress) {
        return inetAddress.isLoopbackAddress() || inetAddress.isLinkLocalAddress() || inetAddress.isAnyLocalAddress();
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:77:0x0184 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:78:0x0185  */
    /* JADX WARN: Type inference failed for: r12v0, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r12v1 */
    /* JADX WARN: Type inference failed for: r12v10, types: [com.loc.m$b] */
    /* JADX WARN: Type inference failed for: r12v14, types: [com.loc.m$b] */
    /* JADX WARN: Type inference failed for: r12v15 */
    /* JADX WARN: Type inference failed for: r12v16 */
    /* JADX WARN: Type inference failed for: r12v17 */
    /* JADX WARN: Type inference failed for: r12v2 */
    /* JADX WARN: Type inference failed for: r12v3 */
    /* JADX WARN: Type inference failed for: r12v4 */
    /* JADX WARN: Type inference failed for: r12v5 */
    /* JADX WARN: Type inference failed for: r12v6 */
    /* JADX WARN: Type inference failed for: r12v7 */
    /* JADX WARN: Type inference failed for: r12v8 */
    /* JADX WARN: Type inference failed for: r12v9, types: [com.loc.m$b] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static com.loc.m.b b(android.content.Context r22, com.loc.w r23, java.lang.String r24, java.lang.String r25, java.lang.String r26, java.lang.String r27) throws com.loc.k {
        /*
            Method dump skipped, instruction units count: 584
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.loc.m.b(android.content.Context, com.loc.w, java.lang.String, java.lang.String, java.lang.String, java.lang.String):com.loc.m$b");
    }

    public static w b(String str) {
        d dVar = v.get(str);
        if (dVar != null) {
            return dVar.f3014a;
        }
        return null;
    }

    private static String b(String str, String str2) {
        return str2 + "_" + s.a(str.getBytes());
    }

    private static String b(List<String> list) {
        if (list == null) {
            return "";
        }
        try {
            if (list.size() <= 0) {
                return "";
            }
            String str = list.get(0);
            return !TextUtils.isEmpty(str) ? str : "";
        } catch (Exception unused) {
            return "";
        }
    }

    public static void b(Context context) {
        if (context == null) {
            return;
        }
        o = bd.a(context, "open_common", "a2", true);
    }

    public static void b(br.c cVar) {
        synchronized (C) {
            boolean z2 = false;
            for (int i2 = 0; i2 < C.size(); i2++) {
                br.a aVar = C.get(i2);
                if (cVar.c.equals(aVar.b) && cVar.d.equals(aVar.e) && cVar.m == aVar.f) {
                    if (aVar.f == 1) {
                        aVar.i = ((((long) aVar.j.get()) * aVar.i) + cVar.f) / ((long) (aVar.j.get() + 1));
                    }
                    aVar.j.getAndIncrement();
                    z2 = true;
                }
            }
            if (!z2) {
                C.add(new br.a(cVar));
            }
            br.a();
        }
    }

    public static synchronized void b(String str, boolean z2) {
        a(str, z2, (String) null, (String) null, (String) null);
    }

    public static boolean b() {
        Integer num;
        Context context = c;
        if (context == null) {
            return false;
        }
        String strO = o.o(context);
        return (TextUtils.isEmpty(strO) || (num = q.get(strO.toUpperCase())) == null || num.intValue() != 2) ? false : true;
    }

    public static String c(String str) {
        if (TextUtils.isEmpty(str)) {
            return str;
        }
        return str + ";15K;16H;17I;1A4;17S;183";
    }

    private static void c(Context context) {
        if (context == null) {
            return;
        }
        f = bd.a(context, "open_common", "a13", true);
        h = bd.a(context, "open_common", "a6", true);
        g = bd.a(context, "open_common", "a7", false);
        e = bd.a(context, "open_common", "a8", 5000);
        y = bd.a(context, "open_common", "a9", 3);
        i = bd.a(context, "open_common", "a10", false);
        z = bd.a(context, "open_common", "a11", 3);
        j = bd.a(context, "open_common", "a12", false);
    }

    public static void c(br.c cVar) {
        if (cVar != null && j) {
            synchronized (E) {
                E.offer(cVar);
                br.a();
            }
        }
    }

    public static boolean c() {
        Integer num;
        Context context = c;
        if (context == null) {
            return false;
        }
        String strO = o.o(context);
        return (TextUtils.isEmpty(strO) || (num = q.get(strO.toUpperCase())) == null || num.intValue() < 2) ? false : true;
    }

    public static void d() {
        try {
            e eVarA = a(c, "IPV6_CONFIG_NAME", "open_common");
            String strA = x.a(System.currentTimeMillis(), "yyyyMMdd");
            if (!strA.equals(eVarA.b)) {
                eVarA.a(strA);
                eVarA.c.set(0);
            }
            eVarA.c.incrementAndGet();
            a(c, "IPV6_CONFIG_NAME", "open_common", eVarA);
        } catch (Throwable unused) {
        }
    }

    private static void d(Context context) {
        try {
            if (w) {
                return;
            }
            ag.d = bd.a(context, "open_common", "a4", true);
            ag.e = bd.a(context, "open_common", "a5", true);
            w = true;
        } catch (Throwable unused) {
        }
    }

    public static synchronized boolean d(String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return false;
            }
            if (v == null) {
                return false;
            }
            if (u == null) {
                u = new ConcurrentHashMap<>(8);
            }
            if (v.containsKey(str) && !u.containsKey(str)) {
                u.put(str, Long.valueOf(SystemClock.elapsedRealtime()));
                return true;
            }
        } finally {
        }
        return false;
    }

    public static void e() {
        if (d) {
            return;
        }
        try {
            Context context = c;
            if (context == null) {
                return;
            }
            d = true;
            q.a().a(context);
            b(context);
            c(context);
            f.f3016a = bd.a(context, "open_common", "ucf", f.f3016a);
            f.b = bd.a(context, "open_common", "fsv2", f.b);
            f.c = bd.a(context, "open_common", "usc", f.c);
            f.d = bd.a(context, "open_common", "umv", f.d);
            f.e = bd.a(context, "open_common", "ust", f.e);
            f.f = bd.a(context, "open_common", "ustv", f.f);
        } catch (Throwable unused) {
        }
    }

    private static void e(Context context) {
        try {
            if (x) {
                return;
            }
            z.d = a(bd.b(context, "open_common", "a16", ""), true);
            z.b = bd.a(context, "open_common", "a17", z.f3042a);
            x = true;
        } catch (Throwable unused) {
        }
    }

    public static synchronized void e(String str) {
        if (u == null) {
            return;
        }
        if (u.containsKey(str)) {
            u.remove(str);
        }
    }

    public static br.a f() {
        if (D) {
            return null;
        }
        synchronized (C) {
            if (D) {
                return null;
            }
            Collections.sort(C);
            if (C.size() <= 0) {
                return null;
            }
            br.a aVarClone = C.get(0).clone();
            D = true;
            return aVarClone;
        }
    }

    public static synchronized g f(String str) {
        try {
            if (t == null) {
                t = new ConcurrentHashMap<>(8);
            }
        } catch (Throwable th) {
            as.a(th, "at", "glcut");
        }
        if (t.containsKey(str)) {
            return t.get(str);
        }
        return new g(0L, "");
    }

    public static br.c g() {
        synchronized (E) {
            br.c cVarPoll = E.poll();
            if (cVarPoll != null) {
                return cVarPoll;
            }
            return null;
        }
    }

    public static boolean g(String str) {
        e eVarA;
        try {
            if (TextUtils.isEmpty(str)) {
                return true;
            }
            if (!f) {
                return false;
            }
            if (!(A.get(str) == null)) {
                return false;
            }
            if (c == null || (eVarA = a(c, b(str, "a14"), "open_common")) == null) {
                return true;
            }
            return eVarA.a() < y;
        } catch (Throwable unused) {
            return true;
        }
    }

    public static boolean h(String str) {
        e eVarA;
        try {
            if (TextUtils.isEmpty(str) || !i) {
                return false;
            }
            if (!(B.get(str) == null)) {
                return false;
            }
            if (c == null || (eVarA = a(c, b(str, "a15"), "open_common")) == null) {
                return true;
            }
            if (eVarA.a() < z) {
                return true;
            }
        } catch (Throwable unused) {
        }
        return false;
    }

    private static void i() {
        Map<String, Integer> map;
        String str;
        Integer numValueOf;
        try {
            if (c != null) {
                String strO = o.o(c);
                if (!TextUtils.isEmpty(r) && !TextUtils.isEmpty(strO) && r.equals(strO) && System.currentTimeMillis() - s < 60000) {
                    return;
                }
                if (!TextUtils.isEmpty(strO)) {
                    r = strO;
                }
            } else if (System.currentTimeMillis() - s < com.heytap.mcssdk.constant.a.q) {
                return;
            }
            s = System.currentTimeMillis();
            q.clear();
            for (NetworkInterface networkInterface : Collections.list(NetworkInterface.getNetworkInterfaces())) {
                if (!networkInterface.getInterfaceAddresses().isEmpty()) {
                    String displayName = networkInterface.getDisplayName();
                    int i2 = 0;
                    Iterator<InterfaceAddress> it = networkInterface.getInterfaceAddresses().iterator();
                    while (it.hasNext()) {
                        InetAddress address = it.next().getAddress();
                        if (address instanceof Inet6Address) {
                            if (!a((Inet6Address) address)) {
                                i2 |= 2;
                            }
                        } else if (address instanceof Inet4Address) {
                            Inet4Address inet4Address = (Inet4Address) address;
                            if (!a(inet4Address) && !inet4Address.getHostAddress().startsWith(x.c("FMTkyLjE2OC40My4"))) {
                                i2 |= 1;
                            }
                        }
                    }
                    if (i2 != 0) {
                        if (displayName != null && displayName.startsWith("wlan")) {
                            map = q;
                            str = "WIFI";
                            numValueOf = Integer.valueOf(i2);
                        } else if (displayName != null && displayName.startsWith("rmnet")) {
                            map = q;
                            str = "MOBILE";
                            numValueOf = Integer.valueOf(i2);
                        }
                        map.put(str, numValueOf);
                    }
                }
            }
        } catch (Throwable th) {
            as.a(th, "at", "ipstack");
        }
    }
}
