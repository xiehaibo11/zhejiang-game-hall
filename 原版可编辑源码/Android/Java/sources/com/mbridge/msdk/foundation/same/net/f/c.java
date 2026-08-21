package com.mbridge.msdk.foundation.same.net.f;

import android.text.TextUtils;
import com.mbridge.msdk.foundation.same.net.k;
import com.mbridge.msdk.foundation.tools.z;
import com.tkay.core.common.c.l;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONObject;

public final class c {
    private final String a;
    private int b;
    private ArrayList<Integer> c;
    private ConcurrentHashMap<String, a> d;

    private static class b {
        private static final c a = new c();
    }

    private c() {
        this.a = "IDErrorUtil";
        this.c = new ArrayList<>();
        this.d = new ConcurrentHashMap<>();
        com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
        aVarB = aVarB == null ? com.mbridge.msdk.c.b.a().b() : aVarB;
        this.b = aVarB.aU() * 1000;
        if (aVarB.aV() != null && aVarB.aV().size() > 0) {
            z.d("IDErrorUtil", "Setting ercd not EMPTY will use setting.");
            this.c.addAll(aVarB.aV());
        } else {
            z.d("IDErrorUtil", "Setting ercd is EMPTY and use default code list.");
            this.c.addAll(Arrays.asList(-1, -10, -1201, -1202, -1203, -1205, -1206, -1208, -1301, -1302, -1305, -1306, -1307, -1915, 10602, 10603, 10604, 10609, 10610, 10616));
        }
    }

    public static c a() {
        return b.a;
    }

    public final synchronized void a(String str, int i, String str2, long j) {
        if (this.d.containsKey(str)) {
            return;
        }
        if (TextUtils.isEmpty(str2)) {
            return;
        }
        if (this.c.contains(Integer.valueOf(i))) {
            z.d("IDErrorUtil", "addErrorInfo : " + str + " " + str2);
            this.d.put(str, new a(j, i, str2));
        }
    }

    private synchronized a a(String str) {
        a aVar;
        z.d("IDErrorUtil", "getErrorInfo : " + str);
        if (!this.d.containsKey(str) || (aVar = this.d.get(str)) == null) {
            return null;
        }
        if (aVar.b == -1) {
            return aVar;
        }
        if (System.currentTimeMillis() > aVar.a + ((long) this.b)) {
            this.d.remove(str);
            if (this.d.size() > 0) {
                for (Map.Entry<String, a> entry : this.d.entrySet()) {
                    z.d("IDErrorUtil", "getErrorInfo : delete timeout entry");
                    if (System.currentTimeMillis() - entry.getValue().a > this.b) {
                        this.d.remove(entry.getKey());
                    }
                }
            }
            return null;
        }
        z.d("IDErrorUtil", "getErrorInfo : " + aVar.c);
        return aVar;
    }

    public final k a(com.mbridge.msdk.foundation.same.net.g.d dVar) {
        int i;
        String str = dVar.b().get("app_id");
        String str2 = dVar.b().get(l.a.c);
        String str3 = dVar.b().get("unit_id");
        String str4 = dVar.b().get("ad_type");
        String str5 = dVar.b().get("token");
        String str6 = str + "_" + str2 + "_" + str3 + "_" + str4;
        a aVarA = a(str6);
        if (aVarA != null && !TextUtils.isEmpty(aVarA.c)) {
            try {
                if (aVarA.b != -1) {
                    return k.a(new JSONObject(aVarA.c), new com.mbridge.msdk.foundation.same.net.e.c(200, aVarA.c.getBytes(), null));
                }
                if (!TextUtils.isEmpty(str5)) {
                    return null;
                }
                if (str4 != null && !TextUtils.isEmpty(str4) && (i = Integer.parseInt(str4)) != 287 && i != 94) {
                    if (System.currentTimeMillis() < ((long) (com.mbridge.msdk.c.b.a().d(str, str3).w() * 1000)) + aVarA.a) {
                        return k.a(new JSONObject(aVarA.c), new com.mbridge.msdk.foundation.same.net.e.c(200, aVarA.c.getBytes(), null));
                    }
                    this.d.remove(str6);
                    return null;
                }
            } catch (Exception e) {
                z.d("IDErrorUtil", e.getMessage());
            }
        }
        z.d("IDErrorUtil", "getErrorInfo RETURN NULL");
        return null;
    }

    private static class a {
        public long a;
        public int b;
        public String c;

        public a(long j, int i, String str) {
            this.a = j;
            this.b = i;
            this.c = str;
        }
    }
}
