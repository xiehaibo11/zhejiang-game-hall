package com.tkay.expressad.foundation.g.a;

import android.text.TextUtils;
import com.tkay.expressad.foundation.h.w;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f6871a = "native";
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
        To view partially-correct add '--show-bad-code' argument
    */
    private static java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.e.a>> b(java.lang.String r1) {
        /*
            int r0 = r1.hashCode()
            switch(r0) {
                case -1396342996: goto L44;
                case -1052618729: goto L3a;
                case -934326481: goto L30;
                case -895866265: goto L26;
                case 538816457: goto L1c;
                case 604727084: goto L12;
                case 1844104930: goto L8;
                default: goto L7;
            }
        L7:
            goto L4e
        L8:
            java.lang.String r0 = "interactive"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L4e
            r1 = 2
            goto L4f
        L12:
            java.lang.String r0 = "interstitial"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L4e
            r1 = 3
            goto L4f
        L1c:
            java.lang.String r0 = "h5_native"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L4e
            r1 = 6
            goto L4f
        L26:
            java.lang.String r0 = "splash"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L4e
            r1 = 5
            goto L4f
        L30:
            java.lang.String r0 = "reward"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L4e
            r1 = 1
            goto L4f
        L3a:
            java.lang.String r0 = "native"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L4e
            r1 = 0
            goto L4f
        L44:
            java.lang.String r0 = "banner"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L4e
            r1 = 4
            goto L4f
        L4e:
            r1 = -1
        L4f:
            switch(r1) {
                case 0: goto L66;
                case 1: goto L63;
                case 2: goto L60;
                case 3: goto L5d;
                case 4: goto L5a;
                case 5: goto L57;
                case 6: goto L54;
                default: goto L52;
            }
        L52:
            r1 = 0
            goto L68
        L54:
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.e.a>> r1 = com.tkay.expressad.foundation.g.a.f.p
            goto L68
        L57:
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.e.a>> r1 = com.tkay.expressad.foundation.g.a.f.o
            goto L68
        L5a:
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.e.a>> r1 = com.tkay.expressad.foundation.g.a.f.n
            goto L68
        L5d:
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.e.a>> r1 = com.tkay.expressad.foundation.g.a.f.m
            goto L68
        L60:
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.e.a>> r1 = com.tkay.expressad.foundation.g.a.f.l
            goto L68
        L63:
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.e.a>> r1 = com.tkay.expressad.foundation.g.a.f.k
            goto L68
        L66:
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.e.a>> r1 = com.tkay.expressad.foundation.g.a.f.j
        L68:
            return r1
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.foundation.g.a.f.b(java.lang.String):java.util.Map");
    }
}
