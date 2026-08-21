package com.tkay.expressad.foundation.g.a;

import android.text.TextUtils;
import com.tkay.expressad.foundation.h.w;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONObject;

public class f {
    public static final String a = "native";
    public static final String b = "reward";
    public static final String c = "interactive";
    public static final String d = "interstitial";
    public static final String e = "banner";
    public static final String f = "splash";
    public static final String g = "h5_native";
    private static final String q = f.class.getSimpleName();
    public static Map<String, Long> h = new HashMap();
    public static Map<String, List<com.tkay.expressad.foundation.g.e.a>> i = new HashMap();
    public static Map<String, List<com.tkay.expressad.foundation.g.e.a>> j = new HashMap();
    public static Map<String, List<com.tkay.expressad.foundation.g.e.a>> k = new HashMap();
    public static Map<String, List<com.tkay.expressad.foundation.g.e.a>> l = new HashMap();
    public static Map<String, List<com.tkay.expressad.foundation.g.e.a>> m = new HashMap();
    public static Map<String, List<com.tkay.expressad.foundation.g.e.a>> n = new HashMap();
    public static Map<String, List<com.tkay.expressad.foundation.g.e.a>> o = new HashMap();
    public static Map<String, List<com.tkay.expressad.foundation.g.e.a>> p = new HashMap();

    private static void b(String str, com.tkay.expressad.foundation.d.c cVar, String str2) {
        Map<String, List<com.tkay.expressad.foundation.g.e.a>> mapB = b(str2);
        if (cVar == null || mapB == null) {
            return;
        }
        try {
            if (TextUtils.isEmpty(cVar.aZ())) {
                return;
            }
            com.tkay.expressad.foundation.g.e.a aVar = new com.tkay.expressad.foundation.g.e.a(cVar.aZ(), cVar.Z());
            if (mapB.containsKey(str)) {
                List<com.tkay.expressad.foundation.g.e.a> list = mapB.get(str);
                if (list != null) {
                    list.add(aVar);
                    return;
                }
                return;
            }
            ArrayList arrayList = new ArrayList();
            arrayList.add(aVar);
            mapB.put(str, arrayList);
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    public static void a(String str, com.tkay.expressad.foundation.d.c cVar, String str2) {
        Map<String, List<com.tkay.expressad.foundation.g.e.a>> mapB = b(str2);
        if (cVar == null || mapB == null) {
            return;
        }
        try {
            if (TextUtils.isEmpty(cVar.aZ())) {
                return;
            }
            com.tkay.expressad.foundation.g.e.a aVar = new com.tkay.expressad.foundation.g.e.a(cVar.aZ(), cVar.Z());
            if (mapB.containsKey(str)) {
                List<com.tkay.expressad.foundation.g.e.a> list = mapB.get(str);
                if (list != null && list.size() == 20) {
                    list.remove(0);
                }
                if (list != null) {
                    list.add(aVar);
                    return;
                }
                return;
            }
            ArrayList arrayList = new ArrayList();
            arrayList.add(aVar);
            mapB.put(str, arrayList);
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    private static String a(String str, String str2) {
        Map<String, List<com.tkay.expressad.foundation.g.e.a>> mapB;
        List<com.tkay.expressad.foundation.g.e.a> list;
        JSONArray jSONArray = new JSONArray();
        if (!TextUtils.isEmpty(str2)) {
            mapB = b(str2);
        } else {
            mapB = null;
            if (j.containsKey(str)) {
                mapB = j;
            } else if (k.containsKey(str)) {
                mapB = k;
            } else if (l.containsKey(str)) {
                mapB = l;
            } else if (m.containsKey(str)) {
                mapB = m;
            } else if (n.containsKey(str)) {
                mapB = n;
            } else if (o.containsKey(str)) {
                mapB = o;
            } else if (p.containsKey(str)) {
                mapB = p;
            }
        }
        if (mapB != null) {
            try {
                if (w.b(str) && mapB.containsKey(str) && (list = mapB.get(str)) != null && list.size() > 0) {
                    for (int i2 = 0; i2 < list.size(); i2++) {
                        JSONObject jSONObject = new JSONObject();
                        jSONObject.put("cid", list.get(i2).a());
                        jSONObject.put("rid", list.get(i2).b());
                        jSONArray.put(jSONObject);
                    }
                }
            } catch (Exception e2) {
                e2.printStackTrace();
            }
        }
        return jSONArray.toString();
    }

    private static void a(Map... mapArr) {
        try {
            for (Map map : mapArr) {
                if (map != null) {
                    map.clear();
                }
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    private static Map<String, List<com.tkay.expressad.foundation.g.e.a>> a(String str) {
        if (j.containsKey(str)) {
            return j;
        }
        if (k.containsKey(str)) {
            return k;
        }
        if (l.containsKey(str)) {
            return l;
        }
        if (m.containsKey(str)) {
            return m;
        }
        if (n.containsKey(str)) {
            return n;
        }
        if (o.containsKey(str)) {
            return o;
        }
        if (p.containsKey(str)) {
            return p;
        }
        return null;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:26:0x004e  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static Map<String, List<com.tkay.expressad.foundation.g.e.a>> b(String str) {
        switch (str) {
            case "native":
                return j;
            case "reward":
                return k;
            case "interactive":
                return l;
            case "interstitial":
                return m;
            case "banner":
                return n;
            case "splash":
                return o;
            case "h5_native":
                return p;
            default:
                return null;
        }
    }
}
