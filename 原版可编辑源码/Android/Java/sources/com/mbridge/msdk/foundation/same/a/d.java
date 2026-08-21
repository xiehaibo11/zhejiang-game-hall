package com.mbridge.msdk.foundation.same.a;

import android.text.TextUtils;
import com.mbridge.msdk.foundation.db.f;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.ai;
import com.mbridge.msdk.foundation.tools.z;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;
import org.json.JSONArray;
import org.json.JSONObject;

public class d {
    public static ConcurrentHashMap<String, ConcurrentHashMap<String, com.mbridge.msdk.foundation.entity.c>> k;
    public static ConcurrentHashMap<String, CopyOnWriteArrayList<String>> l;
    public static ConcurrentHashMap<String, ConcurrentHashMap<String, String>> m;
    private static final String n = d.class.getSimpleName();
    public static Map<String, Long> a = new HashMap();
    public static Map<String, List<com.mbridge.msdk.foundation.same.d.a>> b = new HashMap();
    public static Map<String, List<com.mbridge.msdk.foundation.same.d.a>> c = new HashMap();
    public static Map<String, List<com.mbridge.msdk.foundation.same.d.a>> d = new HashMap();
    public static Map<String, List<com.mbridge.msdk.foundation.same.d.a>> e = new HashMap();
    public static Map<String, List<com.mbridge.msdk.foundation.same.d.a>> f = new HashMap();
    public static Map<String, List<com.mbridge.msdk.foundation.same.d.a>> g = new HashMap();
    public static Map<String, List<com.mbridge.msdk.foundation.same.d.a>> h = new HashMap();
    public static Map<String, List<com.mbridge.msdk.foundation.same.d.a>> i = new HashMap();
    public static Map<String, List<com.mbridge.msdk.foundation.same.d.a>> j = new HashMap();

    public static void a(String str, CampaignEx campaignEx, String str2) {
        Map<String, List<com.mbridge.msdk.foundation.same.d.a>> mapD = d(str2);
        if (campaignEx == null || mapD == null) {
            return;
        }
        try {
            if (TextUtils.isEmpty(campaignEx.getId())) {
                return;
            }
            com.mbridge.msdk.foundation.same.d.a aVar = new com.mbridge.msdk.foundation.same.d.a(campaignEx.getId(), campaignEx.getRequestIdNotice());
            if (mapD.containsKey(str)) {
                List<com.mbridge.msdk.foundation.same.d.a> list = mapD.get(str);
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
            mapD.put(str, arrayList);
        } catch (Throwable th) {
            z.c(n, th.getMessage(), th);
        }
    }

    public static String a(String str, String str2) {
        Map<String, List<com.mbridge.msdk.foundation.same.d.a>> mapD;
        List<com.mbridge.msdk.foundation.same.d.a> list;
        JSONArray jSONArray = new JSONArray();
        if (!TextUtils.isEmpty(str2)) {
            mapD = d(str2);
        } else {
            mapD = null;
            if (c.containsKey(str)) {
                mapD = c;
            } else if (d.containsKey(str)) {
                mapD = d;
            } else if (e.containsKey(str)) {
                mapD = e;
            } else if (f.containsKey(str)) {
                mapD = f;
            } else if (g.containsKey(str)) {
                mapD = g;
            } else if (h.containsKey(str)) {
                mapD = h;
            } else if (i.containsKey(str)) {
                mapD = i;
            } else if (j.containsKey(str)) {
                mapD = j;
            }
        }
        if (mapD != null) {
            try {
                if (ai.b(str) && mapD.containsKey(str) && (list = mapD.get(str)) != null && list.size() > 0) {
                    for (int i2 = 0; i2 < list.size(); i2++) {
                        JSONObject jSONObject = new JSONObject();
                        jSONObject.put("2", list.get(i2).a());
                        jSONObject.put("1", list.get(i2).b());
                        jSONArray.put(jSONObject);
                    }
                }
            } catch (Exception e2) {
                e2.printStackTrace();
            }
        }
        return jSONArray.toString();
    }

    public static void a(String str, String str2, int i2) {
        CopyOnWriteArrayList<String> copyOnWriteArrayList;
        int size;
        if (TextUtils.isEmpty(str2) || TextUtils.isEmpty(str)) {
            return;
        }
        if (l == null) {
            l = new ConcurrentHashMap<>();
        }
        try {
            if (l.containsKey(str)) {
                copyOnWriteArrayList = l.get(str);
                copyOnWriteArrayList.add(str2);
            } else {
                CopyOnWriteArrayList<String> copyOnWriteArrayList2 = new CopyOnWriteArrayList<>();
                copyOnWriteArrayList2.add(str2);
                l.put(str, copyOnWriteArrayList2);
                copyOnWriteArrayList = copyOnWriteArrayList2;
            }
            if (copyOnWriteArrayList == null || (size = copyOnWriteArrayList.size() - i2) < 0) {
                return;
            }
            for (int i3 = 0; i3 < size; i3++) {
                copyOnWriteArrayList.remove(i3);
            }
        } catch (Exception e2) {
            z.a(n, e2.getMessage());
        }
    }

    public static void a(String str) {
        ConcurrentHashMap<String, CopyOnWriteArrayList<String>> concurrentHashMap;
        CopyOnWriteArrayList<String> copyOnWriteArrayList;
        if (TextUtils.isEmpty(str) || (concurrentHashMap = l) == null || !concurrentHashMap.containsKey(str) || (copyOnWriteArrayList = l.get(str)) == null || copyOnWriteArrayList.size() <= 0) {
            return;
        }
        copyOnWriteArrayList.remove(0);
    }

    public static String b(String str) {
        ConcurrentHashMap<String, CopyOnWriteArrayList<String>> concurrentHashMap;
        CopyOnWriteArrayList<String> copyOnWriteArrayList;
        return (TextUtils.isEmpty(str) || (concurrentHashMap = l) == null || !concurrentHashMap.containsKey(str) || (copyOnWriteArrayList = l.get(str)) == null || copyOnWriteArrayList.size() <= 0) ? "" : copyOnWriteArrayList.get(0);
    }

    public static void a(String str, String str2, String str3) {
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2) || TextUtils.isEmpty(str3)) {
            return;
        }
        try {
            if (m == null) {
                m = new ConcurrentHashMap<>();
            }
            if (m.containsKey(str)) {
                if (m.get(str) == null) {
                    ConcurrentHashMap<String, String> concurrentHashMap = new ConcurrentHashMap<>();
                    concurrentHashMap.put(str2, str3);
                    m.put(str, concurrentHashMap);
                    return;
                }
                return;
            }
            ConcurrentHashMap<String, String> concurrentHashMap2 = new ConcurrentHashMap<>();
            concurrentHashMap2.put(str2, str3);
            m.put(str, concurrentHashMap2);
        } catch (Exception e2) {
            z.a(n, e2.getMessage());
        }
    }

    public static com.mbridge.msdk.foundation.entity.d b(String str, String str2) {
        ConcurrentHashMap<String, String> concurrentHashMap;
        com.mbridge.msdk.foundation.entity.d dVar = new com.mbridge.msdk.foundation.entity.d();
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
            return dVar;
        }
        try {
            if (m != null && m.containsKey(str) && (concurrentHashMap = m.get(str)) != null && concurrentHashMap.containsKey(str2)) {
                dVar.b(1);
                dVar.c(concurrentHashMap.get(str2));
            }
        } catch (Exception e2) {
            z.a(n, e2.getMessage());
        }
        return dVar;
    }

    public static void c(String str, String str2) {
        ConcurrentHashMap<String, String> concurrentHashMap;
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
            return;
        }
        try {
            if (m == null || !m.containsKey(str) || (concurrentHashMap = m.get(str2)) == null || !concurrentHashMap.containsKey(str2)) {
                return;
            }
            concurrentHashMap.remove(str2);
        } catch (Exception e2) {
            z.a(n, e2.getMessage());
        }
    }

    public static void a(String str, String str2, String str3, long j2, long j3, long j4) {
        if (k == null) {
            k = new ConcurrentHashMap<>();
        }
        try {
            if (k.containsKey(str)) {
                ConcurrentHashMap<String, com.mbridge.msdk.foundation.entity.c> concurrentHashMap = k.get(str);
                if (concurrentHashMap != null) {
                    com.mbridge.msdk.foundation.entity.c cVar = concurrentHashMap.get(str2);
                    if (cVar == null) {
                        com.mbridge.msdk.foundation.entity.c cVar2 = new com.mbridge.msdk.foundation.entity.c();
                        ArrayList arrayList = new ArrayList();
                        arrayList.add(str3);
                        cVar2.a(arrayList);
                        cVar2.a(j2);
                        cVar2.b(j3);
                        cVar2.c(j4);
                        concurrentHashMap.put(str2, cVar2);
                        return;
                    }
                    if (cVar.c() != null) {
                        cVar.a(j2);
                        cVar.b(j3);
                        cVar.c(j4);
                        cVar.c().add(str3);
                        return;
                    }
                    return;
                }
                return;
            }
            ArrayList arrayList2 = new ArrayList();
            arrayList2.add(str3);
            ConcurrentHashMap<String, com.mbridge.msdk.foundation.entity.c> concurrentHashMap2 = new ConcurrentHashMap<>();
            com.mbridge.msdk.foundation.entity.c cVar3 = new com.mbridge.msdk.foundation.entity.c();
            cVar3.a(arrayList2);
            cVar3.a(j2);
            cVar3.b(j3);
            cVar3.c(j4);
            concurrentHashMap2.put(str2, cVar3);
            k.put(str, concurrentHashMap2);
        } catch (Throwable th) {
            z.d(n, th.getMessage());
        }
    }

    public static void d(String str, String str2) {
        ConcurrentHashMap<String, ConcurrentHashMap<String, com.mbridge.msdk.foundation.entity.c>> concurrentHashMap;
        if (TextUtils.isEmpty(str) || (concurrentHashMap = k) == null || !concurrentHashMap.containsKey(str)) {
            return;
        }
        if (TextUtils.isEmpty(str2)) {
            k.remove(str);
            return;
        }
        ConcurrentHashMap<String, com.mbridge.msdk.foundation.entity.c> concurrentHashMap2 = k.get(str);
        if (concurrentHashMap2 == null || !concurrentHashMap2.containsKey(str2)) {
            return;
        }
        concurrentHashMap2.remove(str2);
    }

    public static ConcurrentHashMap<String, com.mbridge.msdk.foundation.entity.c> c(String str) {
        ConcurrentHashMap<String, ConcurrentHashMap<String, com.mbridge.msdk.foundation.entity.c>> concurrentHashMap = k;
        if (concurrentHashMap == null) {
            f fVarA = f.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
            if (fVarA != null) {
                fVarA.e(str, "");
                k = new ConcurrentHashMap<>();
            }
        } else if (concurrentHashMap.containsKey(str)) {
            return k.get(str);
        }
        return null;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:29:0x0058  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static Map<String, List<com.mbridge.msdk.foundation.same.d.a>> d(String str) {
        switch (str) {
            case "native":
                return c;
            case "reward":
                return d;
            case "interactive":
                return e;
            case "videofeeds":
                return f;
            case "interstitial":
                return g;
            case "banner":
                return h;
            case "splash":
                return i;
            case "h5_native":
                return j;
            default:
                return null;
        }
    }
}
