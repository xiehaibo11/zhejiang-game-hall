package com.tkay.core.common;

import android.text.TextUtils;
import com.tkay.core.api.AdError;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.common.f.aj;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONObject;

public class c {
    public static String a = c.class.getSimpleName();
    private static volatile c f;
    ConcurrentHashMap<String, Long> b = new ConcurrentHashMap<>();
    ConcurrentHashMap<String, Long> c = new ConcurrentHashMap<>();
    Map<String, a> d = new ConcurrentHashMap(5);
    Map<String, Map<String, Long>> e;

    public static class a {
        String a;
        long b;
    }

    public static c a() {
        if (f == null) {
            synchronized (c.class) {
                if (f == null) {
                    f = new c();
                }
            }
        }
        return f;
    }

    private c() {
    }

    public final boolean a(aj ajVar) {
        if (ajVar.G() == 0) {
            return false;
        }
        return (this.b.get(ajVar.t()) != null ? this.b.get(ajVar.t()).longValue() : 0L) + ajVar.G() >= System.currentTimeMillis();
    }

    public final void a(String str, long j) {
        this.b.put(str, Long.valueOf(j));
    }

    public final boolean b(aj ajVar) {
        if (ajVar.l() == 7) {
            return false;
        }
        if (ajVar.H() == 0) {
            return false;
        }
        return (this.c.get(ajVar.t()) != null ? this.c.get(ajVar.t()).longValue() : 0L) + ajVar.H() >= System.currentTimeMillis();
    }

    private void b(String str, long j) {
        this.c.put(str, Long.valueOf(j));
    }

    public final void a(String str) {
        this.e = new ConcurrentHashMap(3);
        try {
            JSONObject jSONObject = new JSONObject(str);
            Iterator<String> itKeys = jSONObject.keys();
            while (itKeys.hasNext()) {
                try {
                    String next = itKeys.next();
                    JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(next);
                    HashMap map = new HashMap(3);
                    Iterator<String> itKeys2 = jSONObjectOptJSONObject.keys();
                    while (itKeys2.hasNext()) {
                        try {
                            String next2 = itKeys2.next();
                            map.put(next2, Long.valueOf(jSONObjectOptJSONObject.getLong(next2)));
                        } catch (Throwable unused) {
                        }
                    }
                    this.e.put(next, map);
                } catch (Throwable unused2) {
                }
            }
        } catch (Throwable unused3) {
        }
    }

    public final void a(String str, long j, AdError adError) {
        if (TextUtils.equals(adError.getCode(), ErrorCode.noADError)) {
            a aVar = this.d.get(str);
            if (aVar == null) {
                aVar = new a();
            }
            aVar.a = adError.getPlatformCode();
            aVar.b = j;
            this.d.put(str, aVar);
        }
    }

    public final boolean a(int i, com.tkay.core.c.d dVar, aj ajVar) {
        int i2;
        Long l;
        if (this.e == null) {
            return false;
        }
        List<Integer> listC = dVar.c();
        if (listC.size() == 0) {
            return false;
        }
        a aVar = this.d.get(ajVar.t());
        if (aVar == null) {
            return false;
        }
        switch (i) {
            case 1:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
                i2 = 3;
                break;
            case 2:
            default:
                i2 = 1;
                break;
            case 8:
                i2 = 2;
                break;
        }
        if (!listC.contains(Integer.valueOf(i2))) {
            StringBuilder sb = new StringBuilder("The current load mode is: ");
            sb.append(i2);
            sb.append(", no need to filter");
            return false;
        }
        Map<String, Long> map = this.e.get(String.valueOf(ajVar.c()));
        return (map == null || (l = map.get(aVar.a)) == null || aVar.b + l.longValue() < System.currentTimeMillis()) ? false : true;
    }
}
