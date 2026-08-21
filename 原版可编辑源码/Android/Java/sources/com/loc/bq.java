package com.loc;

import android.content.Context;
import android.content.SharedPreferences;
import android.net.Uri;
import android.os.SystemClock;
import android.text.TextUtils;
import java.net.URL;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Random;
import java.util.UUID;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONArray;
import org.json.JSONObject;

public final class bq {
    public static volatile ConcurrentHashMap<String, c> a = new ConcurrentHashMap<>(8);
    public static volatile List<String> b = Collections.synchronizedList(new ArrayList(8));
    private static volatile ConcurrentHashMap<String, b> c = new ConcurrentHashMap<>(8);
    private static Random d = new Random();
    private static ConcurrentHashMap<String, String> e = new ConcurrentHashMap<>(8);
    private static List<bz> f = Collections.synchronizedList(new ArrayList(16));

    private static class a {
        String a;
        int b;
        double c;

        private a() {
        }

        a(byte b) {
            this();
        }
    }

    private static class b {
        bu a;
        long b;

        private b() {
        }

        b(byte b) {
            this();
        }
    }

    private static class c {
        Map<String, List<a>> a;
        Map<String, String> b;

        private c() {
            this.a = new HashMap(8);
            this.b = new HashMap(8);
        }

        c(byte b) {
            this();
        }

        public final boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                c cVar = (c) obj;
                if (this.a.equals(cVar.a) && this.b.equals(cVar.b)) {
                    return true;
                }
            }
            return false;
        }

        public final int hashCode() {
            Map<String, List<a>> map = this.a;
            int iHashCode = map != null ? map.hashCode() : 0;
            Map<String, String> map2 = this.b;
            return iHashCode + (map2 != null ? map2.hashCode() : 0);
        }
    }

    public static synchronized String a(String str, String str2) throws k {
        try {
            try {
                System.currentTimeMillis();
                if (!TextUtils.isEmpty(str2) && !TextUtils.isEmpty(str)) {
                    Context context = m.c;
                    try {
                        if (b == null) {
                            b = Collections.synchronizedList(new ArrayList(8));
                        }
                        if (context != null && !b.contains(str2)) {
                            b.add(str2);
                            String strA = bd.a(context, "Yb3Blbl9odHRwX2NvbnRyb2w", str2);
                            if (!TextUtils.isEmpty(strA)) {
                                a(str2, new JSONObject(strA));
                            }
                        }
                    } catch (Throwable th) {
                        as.a(th, "hlUtil", "llhl");
                    }
                    if (a != null && a.size() > 0) {
                        if (!a.containsKey(str2)) {
                            return str;
                        }
                        c cVar = a.get(str2);
                        if (cVar == null) {
                            return str;
                        }
                        if (a(str, cVar, str2)) {
                            throw new k("服务QPS超限");
                        }
                        return b(str, cVar, str2);
                    }
                    return str;
                }
                return str;
            } finally {
            }
        } catch (k e2) {
            throw e2;
        } catch (Throwable th2) {
            as.a(th2, "hlUtil", "pcr");
            return str;
        }
    }

    public static void a() {
        try {
            Context context = m.c;
            if (context == null) {
                return;
            }
            ca.a(b(), context);
        } catch (Throwable unused) {
        }
    }

    private static void a(c cVar, JSONObject jSONObject) {
        try {
            JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("block");
            if (jSONArrayOptJSONArray == null) {
                return;
            }
            HashMap map = new HashMap(8);
            byte b2 = 0;
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                JSONObject jSONObjectOptJSONObject = jSONArrayOptJSONArray.optJSONObject(i);
                if (jSONObjectOptJSONObject != null) {
                    String strOptString = jSONObjectOptJSONObject.optString("api");
                    if (!TextUtils.isEmpty(strOptString)) {
                        if (!strOptString.startsWith("/")) {
                            strOptString = "/".concat(String.valueOf(strOptString));
                        }
                        if (strOptString.endsWith("/")) {
                            strOptString = strOptString.substring(0, strOptString.length() - 1);
                        }
                        JSONArray jSONArrayOptJSONArray2 = jSONObjectOptJSONObject.optJSONArray("periods");
                        if (jSONArrayOptJSONArray != null) {
                            ArrayList arrayList = new ArrayList();
                            for (int i2 = 0; i2 < jSONArrayOptJSONArray2.length(); i2++) {
                                JSONObject jSONObjectOptJSONObject2 = jSONArrayOptJSONArray2.optJSONObject(i2);
                                if (jSONObjectOptJSONObject2 != null) {
                                    a aVar = new a(b2);
                                    aVar.a = jSONObjectOptJSONObject2.optString("begin");
                                    aVar.b = jSONObjectOptJSONObject2.optInt(com.tkay.expressad.foundation.d.r.ag);
                                    aVar.c = jSONObjectOptJSONObject2.optDouble("percent");
                                    arrayList.add(aVar);
                                }
                            }
                            map.put(strOptString, arrayList);
                        }
                    }
                }
            }
            cVar.a = map;
        } catch (Throwable th) {
            as.a(th, "hlUtil", "pbr");
        }
    }

    public static synchronized void a(w wVar, JSONObject jSONObject) {
        if (wVar == null) {
            return;
        }
        try {
            String strA = wVar.a();
            if (TextUtils.isEmpty(strA)) {
                return;
            }
            if (jSONObject == null) {
                a(strA);
            }
            if (!m.a(jSONObject.optString("able", null), false)) {
                a(strA);
            } else {
                bd.a(m.c, "Yb3Blbl9odHRwX2NvbnRyb2w", strA, jSONObject.toString());
                a(strA, jSONObject);
            }
        } catch (Throwable th) {
            as.a(th, "hlUtil", "par");
        }
    }

    private static synchronized void a(String str) {
        try {
            if (a.containsKey(str)) {
                a.remove(str);
            }
            SharedPreferences.Editor editorA = bd.a(m.c, "Yb3Blbl9odHRwX2NvbnRyb2w");
            bd.a(editorA, str);
            bd.a(editorA);
        } catch (Throwable th) {
            as.a(th, "hlUtil", "rc");
        }
    }

    private static void a(String str, c cVar) {
        try {
            if (a == null) {
                a = new ConcurrentHashMap<>(8);
            }
            a.put(str, cVar);
        } catch (Throwable th) {
            as.a(th, "hlUtil", "ucr");
        }
    }

    private static void a(String str, String str2, String str3) {
        try {
            Context context = m.c;
            if (context != null && !TextUtils.isEmpty(str)) {
                if (e == null) {
                    e = new ConcurrentHashMap<>(8);
                }
                synchronized (e) {
                    if (e.containsKey(str2)) {
                        return;
                    }
                    e.put(str2, str3);
                    JSONObject jSONObject = new JSONObject();
                    jSONObject.put("timestamp", System.currentTimeMillis());
                    jSONObject.put("type", ag.j);
                    jSONObject.put("name", str);
                    jSONObject.put("version", ag.a(str));
                    jSONObject.put("hostname", str2 + "#" + str3);
                    String string = jSONObject.toString();
                    if (TextUtils.isEmpty(string)) {
                        return;
                    }
                    bz bzVar = new bz(context, "core", "2.0", "O005");
                    bzVar.a(string);
                    ca.a(bzVar, context);
                }
            }
        } catch (Throwable unused) {
        }
    }

    private static void a(String str, JSONObject jSONObject) {
        try {
            c cVar = new c((byte) 0);
            a(cVar, jSONObject);
            b(cVar, jSONObject);
            if (cVar.b == null && cVar.a == null) {
                a(str);
            } else {
                a(str, cVar);
            }
        } catch (Throwable unused) {
        }
    }

    public static void a(URL url, bu buVar) {
        List<String> list;
        try {
            if (c == null) {
                c = new ConcurrentHashMap<>(8);
            }
            if (buVar.b != null && buVar.b.containsKey("nb") && (list = buVar.b.get("nb")) != null && list.size() > 0) {
                byte b2 = 0;
                String[] strArrSplit = list.get(0).split("#");
                if (strArrSplit.length < 2) {
                    return;
                }
                int i = Integer.parseInt(strArrSplit[0]);
                long j = Integer.parseInt(strArrSplit[1]);
                b bVar = new b(b2);
                bVar.a = buVar;
                if (j <= 0) {
                    j = 30;
                }
                bVar.b = SystemClock.elapsedRealtime() + (j * 1000);
                if (i == 1) {
                    c.put("app", bVar);
                } else {
                    if (i != 2 || url == null) {
                        return;
                    }
                    c.put(url.getPath(), bVar);
                }
            }
        } catch (Throwable unused) {
        }
    }

    public static void a(boolean z, String str) {
        try {
            Context context = m.c;
            if (context != null && !TextUtils.isEmpty(str)) {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("timestamp", Long.valueOf(System.currentTimeMillis()));
                jSONObject.put("type", z ? ag.g : ag.f);
                jSONObject.put("name", str);
                jSONObject.put("version", ag.a(str));
                String string = jSONObject.toString();
                bz bzVar = new bz(context, "core", "2.0", "O005");
                bzVar.a(string);
                ca.a(bzVar, context);
            }
        } catch (Throwable unused) {
        }
    }

    private static void a(boolean z, String str, String str2, int i) {
        String str3;
        Integer num;
        try {
            Context context = m.c;
            if (context != null && !TextUtils.isEmpty(str) && !TextUtils.isEmpty(str2)) {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("timestamp", System.currentTimeMillis());
                String strA = ag.a(str);
                if (z) {
                    str3 = "type";
                    num = ag.i;
                } else {
                    str3 = "type";
                    num = ag.h;
                }
                jSONObject.put(str3, num);
                jSONObject.put("name", str);
                jSONObject.put("version", strA);
                jSONObject.put("uri", Uri.parse(str2).getPath());
                jSONObject.put("blockLevel", i);
                String string = jSONObject.toString();
                if (TextUtils.isEmpty(string)) {
                    return;
                }
                bz bzVar = new bz(context, "core", "2.0", "O005");
                bzVar.a(string);
                if (f == null) {
                    f = Collections.synchronizedList(new ArrayList(16));
                }
                synchronized (f) {
                    f.add(bzVar);
                    if (f.size() >= 15) {
                        a();
                    }
                }
            }
        } catch (Throwable unused) {
        }
    }

    private static boolean a(a aVar) {
        if (aVar == null || aVar.c == 1.0d) {
            return false;
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (!TextUtils.isEmpty(aVar.a) && aVar.b > 0) {
            long timeInMillis = jCurrentTimeMillis - x.a(aVar.a, "HH:mm:ss").getTimeInMillis();
            if (timeInMillis > 0 && timeInMillis < aVar.b * 1000) {
                if (aVar.c == 0.0d) {
                    return true;
                }
                if (d == null) {
                    d = new Random();
                }
                d.setSeed(((long) UUID.randomUUID().hashCode()) + jCurrentTimeMillis);
                if (d.nextDouble() > aVar.c) {
                    return true;
                }
            }
        }
        return false;
    }

    private static boolean a(String str, c cVar, String str2) {
        Map<String, List<a>> map;
        try {
            map = cVar.a;
        } catch (Throwable th) {
            as.a(th, "hlUtil", "inb");
        }
        if (map != null && map.size() > 0) {
            if (map.containsKey("*")) {
                Iterator<Map.Entry<String, List<a>>> it = map.entrySet().iterator();
                while (it.hasNext()) {
                    if (a(it.next().getValue())) {
                        a(false, str2, str, 1);
                        return true;
                    }
                }
            } else {
                String path = Uri.parse(str).getPath();
                if (map.containsKey(path) && a(map.get(path))) {
                    a(false, str2, str, 2);
                    return true;
                }
            }
            return false;
        }
        return false;
    }

    private static boolean a(List<a> list) {
        if (list != null && list.size() > 0) {
            Iterator<a> it = list.iterator();
            while (it.hasNext()) {
                if (a(it.next())) {
                    return true;
                }
            }
        }
        return false;
    }

    public static bu b(String str, String str2) {
        Uri uri;
        String path = "app";
        if (c == null) {
            return null;
        }
        if (!c.containsKey("app")) {
            if (!TextUtils.isEmpty(str) && (uri = Uri.parse(str)) != null) {
                path = uri.getPath();
                if (c.containsKey(path)) {
                    b bVar = c.get(path);
                    if (SystemClock.elapsedRealtime() <= bVar.b) {
                        bu buVar = bVar.a;
                        if (buVar != null) {
                            buVar.e = false;
                        }
                        a(true, str2, str, 2);
                        return buVar;
                    }
                }
            }
            return null;
        }
        b bVar2 = c.get("app");
        if (SystemClock.elapsedRealtime() <= bVar2.b) {
            bu buVar2 = bVar2.a;
            if (buVar2 != null) {
                buVar2.e = false;
            }
            a(true, str2, str, 1);
            return buVar2;
        }
        c.remove(path);
        return null;
    }

    private static String b(String str, c cVar, String str2) {
        try {
            Map<String, String> map = cVar.b;
            if (map != null && map.size() > 0) {
                Uri uri = Uri.parse(str);
                String authority = uri.getAuthority();
                if (!map.containsKey(authority)) {
                    return str;
                }
                String str3 = map.get(authority);
                str = uri.buildUpon().authority(str3).toString();
                a(str2, authority, str3);
                return str;
            }
            return str;
        } catch (Throwable th) {
            as.a(th, "hlUtil", "pdr");
            return str;
        }
    }

    /*  JADX ERROR: JadxRuntimeException in pass: RegionMakerVisitor
        jadx.core.utils.exceptions.JadxRuntimeException: Can't find top splitter block for handler:B:19:0x002a
        	at jadx.core.utils.BlockUtils.getTopSplitterForHandler(BlockUtils.java:1182)
        	at jadx.core.dex.visitors.regions.maker.ExcHandlersRegionMaker.collectHandlerRegions(ExcHandlersRegionMaker.java:53)
        	at jadx.core.dex.visitors.regions.maker.ExcHandlersRegionMaker.process(ExcHandlersRegionMaker.java:38)
        	at jadx.core.dex.visitors.regions.RegionMakerVisitor.visit(RegionMakerVisitor.java:27)
        */
    public static java.util.List<com.loc.bz> b() {
        /*
            r0 = 0
            java.util.List<com.loc.bz> r1 = com.loc.bq.f     // Catch: java.lang.Throwable -> L2c
            monitor-enter(r1)     // Catch: java.lang.Throwable -> L2c
            java.util.List<com.loc.bz> r2 = com.loc.bq.f     // Catch: java.lang.Throwable -> L22
            if (r2 == 0) goto L20
            java.util.List<com.loc.bz> r2 = com.loc.bq.f     // Catch: java.lang.Throwable -> L22
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L22
            if (r2 <= 0) goto L20
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L22
            r2.<init>()     // Catch: java.lang.Throwable -> L22
            java.util.List<com.loc.bz> r0 = com.loc.bq.f     // Catch: java.lang.Throwable -> L2a
            r2.addAll(r0)     // Catch: java.lang.Throwable -> L2a
            java.util.List<com.loc.bz> r0 = com.loc.bq.f     // Catch: java.lang.Throwable -> L2a
            r0.clear()     // Catch: java.lang.Throwable -> L2a
            r0 = r2
        L20:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L22
            goto L2c
        L22:
            r2 = move-exception
            r3 = r2
            r2 = r0
            r0 = r3
        L26:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L2a
            throw r0     // Catch: java.lang.Throwable -> L28
        L28:
            r0 = r2
            goto L2c
        L2a:
            r0 = move-exception
            goto L26
        L2c:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.loc.bq.b():java.util.List");
    }

    private static void b(c cVar, JSONObject jSONObject) {
        JSONArray jSONArrayNames;
        try {
            JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("domainMap");
            if (jSONObjectOptJSONObject == null || (jSONArrayNames = jSONObjectOptJSONObject.names()) == null) {
                return;
            }
            HashMap map = new HashMap(8);
            int length = jSONArrayNames.length();
            for (int i = 0; i < length; i++) {
                String strOptString = jSONArrayNames.optString(i);
                map.put(strOptString, jSONObjectOptJSONObject.optString(strOptString));
            }
            cVar.b = map;
        } catch (Throwable th) {
            as.a(th, "hlUtil", "pdr");
        }
    }
}
