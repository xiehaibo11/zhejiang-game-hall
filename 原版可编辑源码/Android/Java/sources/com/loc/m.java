package com.loc;

import android.content.Context;
import android.content.SharedPreferences;
import android.net.Uri;
import android.os.Build;
import android.os.SystemClock;
import android.text.TextUtils;
import com.loc.br;
import com.loc.bt;
import com.qihoo360.replugin.model.PluginInfo;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
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
import javax.crypto.Cipher;
import javax.crypto.IllegalBlockSizeException;
import javax.crypto.spec.IvParameterSpec;
import javax.crypto.spec.SecretKeySpec;
import org.json.JSONException;
import org.json.JSONObject;

public final class m {
    private static volatile boolean D = false;
    public static int a = -1;
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

    public interface a {
        void a(b bVar);
    }

    public static class b {

        @Deprecated
        public JSONObject a;

        @Deprecated
        public JSONObject b;
        public String c;
        public int d = -1;
        public long e = 0;
        public JSONObject f;
        public a g;
        public b h;
        private boolean i;

        public static class a {
            public boolean a;
            public boolean b;
            public JSONObject c;
        }

        public static class b {
            public boolean a;
        }
    }

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
            a(bt.c.b);
            a(bt.a.d);
        }

        private static String a(String str, String str2) {
            try {
                return !TextUtils.isEmpty(str2) ? Uri.parse(str).buildUpon().encodedAuthority(str2).build().toString() : str;
            } catch (Throwable unused) {
                return str;
            }
        }

        @Override
        public final Map<String, String> a() {
            if (TextUtils.isEmpty(this.h)) {
                return null;
            }
            HashMap map = new HashMap();
            map.put("host", this.h);
            return map;
        }

        @Override
        public final byte[] a_() {
            return null;
        }

        @Override
        public final String b() {
            return a("https://restsdk.amap.com/v3/iasdkauth", this.f);
        }

        @Override
        public final byte[] b_() {
            String strP = o.p(this.a);
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
            map.put("abitype", x.a(this.a));
            map.put("ext", this.b.d());
            return x.a(x.a(map));
        }

        @Override
        public final String c() {
            return a("https://dualstack-arestapi.amap.com/v3/iasdkauth", this.g);
        }

        @Override
        protected final String f() {
            return "3.0";
        }

        @Override
        protected final String g() {
            return !TextUtils.isEmpty(this.h) ? this.h : super.g();
        }
    }

    private static class d {
        w a;
        String b;
        a c;

        private d() {
        }

        d(byte b) {
            this();
        }
    }

    public static class e {
        private String a;
        private String b;
        private AtomicInteger c;

        public e(String str, String str2, int i) {
            this.a = str;
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
                jSONObject.put("a", this.a);
                jSONObject.put("f", this.b);
                jSONObject.put(at.g, this.c.get());
                return jSONObject.toString();
            } catch (Throwable unused) {
                return "";
            }
        }
    }

    public static class f {
        public static boolean a = true;
        public static boolean b = false;
        public static boolean c = true;
        public static int d;
        public static boolean e;
        public static int f;
    }

    public static class g {
        public long a;
        public String b;

        g(Long l, String str) {
            this.a = 0L;
            this.b = "";
            this.a = l.longValue();
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
    */
    private static synchronized e a(Context context, String str, String str2) {
        e eVar;
        if (!TextUtils.isEmpty(str)) {
            for (int i2 = 0; i2 < p.size(); i2++) {
                eVar = p.get(i2);
                if (eVar != null && str.equals(eVar.a)) {
                    break;
                }
            }
            eVar = null;
            if (eVar == null) {
                return eVar;
            }
            if (context == null) {
                return null;
            }
            e eVarB = e.b(bd.b(context, str2, str, ""));
            String strA = x.a(System.currentTimeMillis(), "yyyyMMdd");
            if (eVarB == null) {
                eVarB = new e(str, strA, 0);
            }
            if (!strA.equals(eVarB.b)) {
                eVarB.a(strA);
                eVarB.c.set(0);
            }
            p.add(eVarB);
            return eVarB;
        }
        eVar = null;
        if (eVar == null) {
        }
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
                dVar.a = wVar;
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
    */
    private static void a(Context context, w wVar, String str, b bVar, JSONObject jSONObject) throws JSONException {
        String str2;
        String str3;
        boolean zA;
        Context context2;
        b.a aVar = new b.a();
        aVar.a = false;
        aVar.b = false;
        bVar.g = aVar;
        try {
            String[] strArrSplit = str.split(";");
            if (strArrSplit != null && strArrSplit.length > 0) {
                for (String str4 : strArrSplit) {
                    if (jSONObject.has(str4)) {
                        bVar.f.putOpt(str4, jSONObject.get(str4));
                    }
                }
            }
        } catch (Throwable th) {
            as.a(th, "at", "co");
        }
        if (x.a(jSONObject, "16H")) {
            try {
                bVar.i = a(jSONObject.getJSONObject("16H").optString("able"), false);
            } catch (Throwable th2) {
                as.a(th2, "AuthConfigManager", "load 16H");
            }
        }
        if (x.a(jSONObject, "11K")) {
            try {
                JSONObject jSONObject2 = jSONObject.getJSONObject("11K");
                aVar.a = a(jSONObject2.getString("able"), false);
                if (jSONObject2.has("off")) {
                    aVar.c = jSONObject2.getJSONObject("off");
                }
            } catch (Throwable th3) {
                as.a(th3, "AuthConfigManager", "load 11K");
            }
        }
        if (x.a(jSONObject, "145")) {
            try {
                bVar.a = jSONObject.getJSONObject("145");
            } catch (Throwable th4) {
                as.a(th4, "AuthConfigManager", "load 145");
            }
        }
        if (x.a(jSONObject, "14D")) {
            try {
                bVar.b = jSONObject.getJSONObject("14D");
            } catch (Throwable th5) {
                as.a(th5, "AuthConfigManager", "load 14D");
            }
        }
        if (x.a(jSONObject, "151")) {
            try {
                JSONObject jSONObject3 = jSONObject.getJSONObject("151");
                b.b bVar2 = new b.b();
                if (jSONObject3 != null) {
                    bVar2.a = a(jSONObject3.optString("able"), false);
                }
                bVar.h = bVar2;
            } catch (Throwable th6) {
                as.a(th6, "AuthConfigManager", "load 151");
            }
        }
        if (x.a(jSONObject, "17S")) {
            try {
                JSONObject jSONObject4 = jSONObject.getJSONObject("17S");
                if (jSONObject4 != null && (zA = a(jSONObject4.optString("able"), false)) != o) {
                    o = zA;
                    if (context != null) {
                        SharedPreferences.Editor editorA = bd.a(context, "open_common");
                        bd.a(editorA, "a2", zA);
                        bd.a(editorA);
                    }
                }
                if (jSONObject4 != null) {
                    boolean zA2 = a(jSONObject4.optString("static_enable"), true);
                    boolean zA3 = a(jSONObject4.optString("static_ip_direct_enable"), false);
                    int iOptInt = jSONObject4.optInt("static_timeout", 5) * 1000;
                    int iOptInt2 = jSONObject4.optInt("static_retry", 3);
                    boolean zA4 = a(jSONObject4.optString("bgp_enable"), true);
                    str2 = "ust";
                    try {
                        boolean zA5 = a(jSONObject4.optString("bgp_ip_direct_enable"), false);
                        str3 = "umv";
                        try {
                            int iOptInt3 = jSONObject4.optInt("bgp_retry", 3);
                            boolean zA6 = a(jSONObject4.optString("perf_data_upload_enable"), false);
                            if (zA2 != f || zA3 != g || iOptInt != e || iOptInt2 != y || zA4 != h || zA5 != i || iOptInt3 != z || zA6 != j) {
                                f = zA2;
                                g = zA3;
                                e = iOptInt;
                                y = iOptInt2;
                                h = zA4;
                                i = zA5;
                                z = iOptInt3;
                                j = zA6;
                                if (context != null) {
                                    SharedPreferences.Editor editorA2 = bd.a(context, "open_common");
                                    bd.a(editorA2, "a13", zA2);
                                    bd.a(editorA2, "a6", zA4);
                                    bd.a(editorA2, "a7", zA3);
                                    bd.a(editorA2, "a8", iOptInt);
                                    bd.a(editorA2, "a9", iOptInt2);
                                    bd.a(editorA2, "a10", zA5);
                                    bd.a(editorA2, "a11", iOptInt3);
                                    bd.a(editorA2, "a12", zA6);
                                    bd.a(editorA2);
                                }
                            }
                            new StringBuilder("static_enable=").append(f);
                            br.a();
                            new StringBuilder("bgp_enable=").append(h);
                            br.a();
                            new StringBuilder("static_ip_direct_enable=").append(g);
                            br.a();
                            new StringBuilder("bgp_ip_direct_enable=").append(i);
                            br.a();
                            new StringBuilder("perf_data_upload_enable=").append(j);
                            br.a();
                        } catch (Throwable th7) {
                            th = th7;
                            as.a(th, "AuthConfigManager", "load 17S");
                        }
                    } catch (Throwable th8) {
                        th = th8;
                        str3 = "umv";
                        as.a(th, "AuthConfigManager", "load 17S");
                        if (!x.a(jSONObject, "15K")) {
                        }
                        if (x.a(jSONObject, "183")) {
                        }
                        if (x.a(jSONObject, "17I")) {
                        }
                        if (x.a(jSONObject, "1A4")) {
                        }
                    }
                } else {
                    str2 = "ust";
                    str3 = "umv";
                }
            } catch (Throwable th9) {
                th = th9;
                str2 = "ust";
            }
        }
        if (!x.a(jSONObject, "15K")) {
            try {
                JSONObject jSONObject5 = jSONObject.getJSONObject("15K");
                if (jSONObject5 != null) {
                    boolean zA7 = a(jSONObject5.optString("ucf"), f.a);
                    boolean zA8 = a(jSONObject5.optString("fsv2"), f.b);
                    boolean zA9 = a(jSONObject5.optString("usc"), f.c);
                    String str5 = str3;
                    int iOptInt4 = jSONObject5.optInt(str5, f.d);
                    String str6 = str2;
                    boolean zA10 = a(jSONObject5.optString(str6), f.e);
                    int iOptInt5 = jSONObject5.optInt("ustv", f.f);
                    if (zA7 == f.a && zA8 == f.b && zA9 == f.c && iOptInt4 == f.d && zA10 == f.e && iOptInt5 == f.d) {
                        context2 = context;
                    } else {
                        f.a = zA7;
                        f.b = zA8;
                        f.c = zA9;
                        f.d = iOptInt4;
                        f.e = zA10;
                        f.f = iOptInt5;
                        context2 = context;
                        try {
                            SharedPreferences.Editor editorA3 = bd.a(context2, "open_common");
                            bd.a(editorA3, "ucf", f.a);
                            bd.a(editorA3, "fsv2", f.b);
                            bd.a(editorA3, "usc", f.c);
                            bd.a(editorA3, str5, f.d);
                            bd.a(editorA3, str6, f.e);
                            bd.a(editorA3, "ustv", f.f);
                            bd.a(editorA3);
                        } catch (Throwable unused) {
                        }
                    }
                }
            } catch (Throwable th10) {
                context2 = context;
                as.a(th10, "AuthConfigManager", "load 15K");
            }
        }
        if (x.a(jSONObject, "183")) {
            try {
                bq.a(wVar, jSONObject.getJSONObject("183"));
            } catch (Throwable th11) {
                as.a(th11, "AuthConfigManager", "load 183");
            }
        }
        if (x.a(jSONObject, "17I")) {
            try {
                JSONObject jSONObject6 = jSONObject.getJSONObject("17I");
                boolean zA11 = a(jSONObject6.optString("na"), false);
                boolean zA12 = a(jSONObject6.optString(com.tkay.expressad.d.a.b.w), false);
                ag.d = zA11;
                ag.e = zA12;
                SharedPreferences.Editor editorA4 = bd.a(context2, "open_common");
                bd.a(editorA4, "a4", zA11);
                bd.a(editorA4, "a5", zA12);
                bd.a(editorA4);
            } catch (Throwable th12) {
                as.a(th12, "AuthConfigManager", "load 17I");
            }
        }
        if (x.a(jSONObject, "1A4")) {
            return;
        }
        try {
            JSONObject jSONObject7 = jSONObject.getJSONObject("1A4");
            String strOptString = jSONObject7.optString("ada");
            boolean zA13 = a(strOptString, z.c);
            long jOptLong = jSONObject7.optLong("iv", z.a);
            z.d = zA13;
            z.b = jOptLong;
            SharedPreferences.Editor editorA5 = bd.a(context2, "open_common");
            bd.a(editorA5, "a16", strOptString);
            bd.a(editorA5, "a17", jOptLong);
            bd.a(editorA5);
        } catch (Throwable th13) {
            as.a(th13, "AuthConfigManager", "load 1A4");
        }
    }

    private static void a(Context context, w wVar, Throwable th) {
        a(context, wVar, th.getMessage());
    }

    public static void a(Context context, String str) {
        l.a(context, str);
    }

    private static void a(Context context, String str, String str2, e eVar) {
        if (eVar == null || TextUtils.isEmpty(eVar.a)) {
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
        map.put("csid", cVar.a);
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
                cr.a().b(new cs() {
                    @Override
                    public final void a() {
                        d dVar = (d) m.v.get(str);
                        if (dVar == null) {
                            return;
                        }
                        a aVar = dVar.c;
                        b bVarA = m.a(m.c, dVar.a, dVar.b, str2, str3, str4);
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
    */
    public static void a(boolean z2, br.a aVar) {
        Iterator<br.a> it;
        if (!D || aVar == null) {
            return;
        }
        synchronized (C) {
            if (z2) {
                Iterator<br.a> it2 = C.iterator();
                while (it2.hasNext()) {
                    br.a next = it2.next();
                    if (next.b.equals(aVar.b) && next.e.equals(aVar.e) && next.f == aVar.f) {
                        if (next.j == aVar.j) {
                            it2.remove();
                        } else {
                            next.j.set(next.j.get() - aVar.j.get());
                        }
                        br.a();
                    }
                }
                D = false;
                it = C.iterator();
                while (true) {
                    br.a();
                    if (it.hasNext()) {
                        br.a();
                    } else {
                        br.a next2 = it.next();
                        StringBuilder sb = new StringBuilder("----path=");
                        sb.append(next2.e);
                        sb.append("-counts=");
                        sb.append(next2.j);
                        sb.append("-code=");
                        sb.append(next2.f);
                        sb.append("----");
                    }
                }
            } else {
                D = false;
                it = C.iterator();
                while (true) {
                    br.a();
                    if (it.hasNext()) {
                    }
                    br.a next22 = it.next();
                    StringBuilder sb2 = new StringBuilder("----path=");
                    sb2.append(next22.e);
                    sb2.append("-counts=");
                    sb2.append(next22.j);
                    sb2.append("-code=");
                    sb2.append(next22.f);
                    sb2.append("----");
                }
            }
        }
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
            if (j2 != (gVarF != null ? gVarF.a : 0L)) {
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
    */
    private static b b(Context context, w wVar, String str, String str2, String str3, String str4) throws k {
        String str5;
        String str6;
        String str7;
        String strC;
        bu buVarA;
        byte[] bArr;
        ?? r12;
        String str8;
        String str9;
        boolean zIsEmpty;
        String str10 = "infocode";
        ?? r122 = "result";
        String str11 = PluginInfo.PI_VER;
        b bVar = new b();
        bVar.f = new JSONObject();
        if (context != null) {
            c = context.getApplicationContext();
        }
        e();
        String strA = null;
        try {
            a(wVar);
            new bo();
            zIsEmpty = TextUtils.isEmpty(str);
            try {
                if (zIsEmpty) {
                    strC = str;
                } else {
                    try {
                        strC = c(str);
                    } catch (k e2) {
                        e = e2;
                        throw e;
                    } catch (Throwable unused) {
                        throw new k("未知的错误");
                    }
                }
                try {
                    d(context);
                    e(context);
                    str6 = "result";
                    String str12 = strC;
                    r122 = bVar;
                    str7 = PluginInfo.PI_VER;
                    str11 = "at";
                    str5 = "infocode";
                    str10 = "lc";
                    try {
                        buVarA = bo.a(new c(context, wVar, str12, str2, str3, str4));
                    } catch (k e3) {
                        throw e3;
                    } catch (Throwable unused2) {
                        throw new k("未知的错误");
                    }
                } catch (k e4) {
                    e = e4;
                    throw e;
                } catch (Throwable unused3) {
                    throw new k("未知的错误");
                }
            } catch (k e5) {
                e = e5;
                buVarA = null;
                bArr = null;
                r122.c = e.a();
                a(context, wVar, e.a());
                av.a(wVar, "/v3/iasdkauth", e);
                r12 = r122;
                String str13 = strC;
                if (bArr != null) {
                }
            } catch (IllegalBlockSizeException e6) {
                e = e6;
                buVarA = null;
                bArr = null;
                a(context, wVar, e);
                r12 = r122;
                String str132 = strC;
                if (bArr != null) {
                }
            } catch (Throwable th) {
                e = th;
                buVarA = null;
                bArr = null;
                av.b(e, str11, str10);
                a(context, wVar, e);
                r12 = r122;
                String str1322 = strC;
                if (bArr != null) {
                }
            }
        } catch (k e7) {
            e = e7;
            str5 = "infocode";
            str6 = "result";
            str7 = PluginInfo.PI_VER;
            r122 = bVar;
            str11 = "at";
            str10 = "lc";
            strC = str;
        } catch (IllegalBlockSizeException e8) {
            e = e8;
            str5 = "infocode";
            str6 = "result";
            str7 = PluginInfo.PI_VER;
            r122 = bVar;
            str11 = "at";
            str10 = "lc";
            strC = str;
        } catch (Throwable th2) {
            e = th2;
            str5 = "infocode";
            str6 = "result";
            str7 = PluginInfo.PI_VER;
            r122 = bVar;
            str11 = "at";
            str10 = "lc";
            strC = str;
        }
        if (zIsEmpty) {
            return r122;
        }
        if (buVarA != null) {
            try {
                bArr = buVarA.a;
                try {
                    Map<String, List<String>> map = buVarA.b;
                    if (map != null && map.containsKey("lct")) {
                        List<String> list = map.get("lct");
                        List<String> list2 = map.get("lct-info");
                        r122.e = a(list);
                        String strB = b(list2);
                        if (r122.e != 0 && wVar != null) {
                            String strA2 = wVar.a();
                            if (!TextUtils.isEmpty(strA2)) {
                                a(strA2, r122.e, strB);
                            }
                        }
                    }
                } catch (Throwable th3) {
                    try {
                        th3.printStackTrace();
                        av.b(th3, str11, "lct");
                    } catch (k e9) {
                        e = e9;
                        r122.c = e.a();
                        a(context, wVar, e.a());
                        av.a(wVar, "/v3/iasdkauth", e);
                        r12 = r122;
                    } catch (IllegalBlockSizeException e10) {
                        e = e10;
                        a(context, wVar, e);
                        r12 = r122;
                    } catch (Throwable th4) {
                        e = th4;
                        av.b(e, str11, str10);
                        a(context, wVar, e);
                        r12 = r122;
                    }
                }
            } catch (k e11) {
                e = e11;
                bArr = null;
                r122.c = e.a();
                a(context, wVar, e.a());
                av.a(wVar, "/v3/iasdkauth", e);
                r12 = r122;
            } catch (IllegalBlockSizeException e12) {
                e = e12;
                bArr = null;
                a(context, wVar, e);
                r12 = r122;
            } catch (Throwable th5) {
                e = th5;
                bArr = null;
                av.b(e, str11, str10);
                a(context, wVar, e);
                r12 = r122;
            }
        } else {
            bArr = null;
        }
        byte[] bArr2 = new byte[16];
        byte[] bArr3 = new byte[bArr.length - 16];
        System.arraycopy(bArr, 0, bArr2, 0, 16);
        System.arraycopy(bArr, 16, bArr3, 0, bArr.length - 16);
        SecretKeySpec secretKeySpec = new SecretKeySpec(bArr2, x.c("EQUVT"));
        Cipher cipher = Cipher.getInstance(x.c("CQUVTL0NCQy9QS0NTNVBhZGRpbmc"));
        cipher.init(2, secretKeySpec, new IvParameterSpec(x.c()));
        strA = x.a(cipher.doFinal(bArr3));
        r12 = r122;
        String str13222 = strC;
        if (bArr != null) {
            return r12;
        }
        if (TextUtils.isEmpty(strA)) {
            strA = x.a(bArr);
        }
        String str14 = strA;
        if (TextUtils.isEmpty(str14)) {
            a(context, wVar, "result is null");
        }
        try {
            JSONObject jSONObject = new JSONObject(str14);
            if (jSONObject.has("status")) {
                int i2 = jSONObject.getInt("status");
                if (i2 == 1) {
                    a = 1;
                } else if (i2 == 0) {
                    if (buVarA != null) {
                        str8 = buVarA.c;
                        str9 = buVarA.d;
                    } else {
                        str8 = "authcsid";
                        str9 = "authgsid";
                    }
                    x.a(context, str8, str9, jSONObject);
                    a = 0;
                    if (jSONObject.has(DBDefinition.SEGMENT_INFO)) {
                        b = jSONObject.getString(DBDefinition.SEGMENT_INFO);
                    }
                    String str15 = str5;
                    av.a(wVar, "/v3/iasdkauth", b, str9, str8, jSONObject.has(str15) ? jSONObject.getString(str15) : "");
                    if (a == 0) {
                        r12.c = b;
                        return r12;
                    }
                }
                String str16 = str7;
                try {
                    if (jSONObject.has(str16)) {
                        r12.d = jSONObject.getInt(str16);
                    }
                } catch (Throwable th6) {
                    as.a(th6, str11, str10);
                }
                String str17 = str6;
                if (x.a(jSONObject, str17)) {
                    JSONObject jSONObject2 = jSONObject.getJSONObject(str17);
                    a(context, wVar, str13222, (b) r12, jSONObject2);
                    try {
                        JSONObject jSONObject3 = jSONObject2.getJSONObject("15K");
                        boolean zA = a(jSONObject3.optString("isTargetAble"), false);
                        if (a(jSONObject3.optString("able"), false)) {
                            q.a().a(context, zA);
                        } else {
                            q.a();
                            q.b(context);
                        }
                    } catch (Throwable unused4) {
                    }
                }
            }
        } catch (Throwable th7) {
            as.a(th7, str11, str10);
        }
        return r12;
    }

    public static w b(String str) {
        d dVar = v.get(str);
        if (dVar != null) {
            return dVar.a;
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
            f.a = bd.a(context, "open_common", "ucf", f.a);
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
            z.b = bd.a(context, "open_common", "a17", z.a);
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
