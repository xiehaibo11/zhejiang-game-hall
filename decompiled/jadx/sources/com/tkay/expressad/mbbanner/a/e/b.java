package com.tkay.expressad.mbbanner.a.e;

import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import com.tkay.core.common.b.m;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.foundation.g.a.f;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.foundation.h.w;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f7010a = b.class.getSimpleName();

    public static void a() {
    }

    private static String b() {
        return "";
    }

    private static String c() {
        return "";
    }

    private static String a(String str) {
        List<com.tkay.expressad.foundation.g.e.a> list;
        try {
            if (f.i == null) {
                return "";
            }
            Map<String, List<com.tkay.expressad.foundation.g.e.a>> map = f.i;
            if (!w.b(str) || !map.containsKey(str) || (list = map.get(str)) == null || list.size() <= 0) {
                return "";
            }
            JSONArray jSONArray = new JSONArray();
            for (int i = 0; i < list.size(); i++) {
                JSONObject jSONObject = new JSONObject();
                com.tkay.expressad.foundation.g.e.a aVar = list.get(i);
                jSONObject.put("cid", aVar.a());
                jSONObject.put("crid", aVar.c());
                jSONArray.put(jSONObject);
            }
            return jSONArray.toString();
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }

    private static void a(String str, List<c> list) {
        Map<String, List<com.tkay.expressad.foundation.g.e.a>> map = f.i;
        if (map == null || list == null || list.size() <= 0) {
            return;
        }
        if (w.b(str)) {
            if (map.containsKey(str)) {
                map.put(str, a(map.get(str), list));
            } else {
                map.put(str, a(new ArrayList(), list));
            }
        }
        f.i = map;
    }

    private static synchronized List<com.tkay.expressad.foundation.g.e.a> a(List<com.tkay.expressad.foundation.g.e.a> list, List<c> list2) {
        if (list2 != null) {
            if (list2.size() > 0) {
                if (list == null) {
                    list = new ArrayList<>();
                }
                for (c cVar : list2) {
                    if (cVar != null) {
                        com.tkay.expressad.foundation.g.e.a aVar = new com.tkay.expressad.foundation.g.e.a(cVar.aZ(), cVar.r());
                        if (list.size() >= 20) {
                            list.remove(0);
                        }
                        list.add(aVar);
                    }
                }
            }
        }
        return list;
    }

    public static c a(String str, c cVar) {
        if (TextUtils.isEmpty(str)) {
            return cVar;
        }
        if (TextUtils.isEmpty(str) && cVar == null) {
            return null;
        }
        if (!str.contains("notice")) {
            try {
                JSONObject jSONObjectA = c.a(cVar);
                c cVarB = c.b(jSONObjectA);
                if (cVarB == null) {
                    cVarB = cVar;
                }
                if (!TextUtils.isEmpty(str)) {
                    String strOptString = jSONObjectA.optString("unitId");
                    if (!TextUtils.isEmpty(strOptString)) {
                        cVarB.l(strOptString);
                    }
                    JSONObject jSONObjectOptJSONObject = new JSONObject(str).optJSONObject(com.tkay.expressad.foundation.g.a.ce);
                    if (jSONObjectOptJSONObject != null) {
                        String.valueOf(t.b(m.a().f(), Integer.valueOf(jSONObjectOptJSONObject.getString(com.tkay.expressad.foundation.g.a.cc)).intValue()));
                        String.valueOf(t.b(m.a().f(), Integer.valueOf(jSONObjectOptJSONObject.getString(com.tkay.expressad.foundation.g.a.cd)).intValue()));
                    }
                    cVarB.p(cVarB.ad());
                    String strAh = cVarB.ah();
                    if (jSONObjectOptJSONObject != null) {
                        Iterator<String> itKeys = jSONObjectOptJSONObject.keys();
                        StringBuilder sb = new StringBuilder();
                        while (itKeys.hasNext()) {
                            sb.append("&");
                            String next = itKeys.next();
                            String strOptString2 = jSONObjectOptJSONObject.optString(next);
                            if (com.tkay.expressad.foundation.g.a.cc.equals(next) || com.tkay.expressad.foundation.g.a.cd.equals(next)) {
                                strOptString2 = String.valueOf(t.b(m.a().f(), Integer.valueOf(strOptString2).intValue()));
                            }
                            sb.append(next);
                            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
                            sb.append(strOptString2);
                        }
                        cVarB.q(strAh + ((Object) sb));
                    }
                }
                return cVarB;
            } catch (Throwable unused) {
                return cVar;
            }
        }
        try {
            JSONObject jSONObjectA2 = c.a(cVar);
            JSONObject jSONObject = new JSONObject(str);
            try {
                if (!jSONObject.has("deep_link")) {
                    jSONObjectA2.put("deep_link", "");
                }
            } catch (Exception unused2) {
            }
            Iterator<String> itKeys2 = jSONObject.keys();
            while (itKeys2.hasNext()) {
                String next2 = itKeys2.next();
                jSONObjectA2.put(next2, jSONObject.getString(next2));
            }
            c cVarB2 = c.b(jSONObjectA2);
            String strOptString3 = jSONObjectA2.optString("unitId");
            if (!TextUtils.isEmpty(strOptString3)) {
                cVarB2.l(strOptString3);
            }
            return cVarB2;
        } catch (JSONException e) {
            e.printStackTrace();
            return cVar;
        }
    }
}
