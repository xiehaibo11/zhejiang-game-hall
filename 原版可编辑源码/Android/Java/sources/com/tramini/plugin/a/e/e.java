package com.tramini.plugin.a.e;

import android.text.TextUtils;
import com.tramini.plugin.a.e.f;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONObject;

public final class e extends f {
    public static com.tramini.plugin.a.c.a a(JSONObject jSONObject, com.tramini.plugin.a.c.c cVar, String str, String str2) {
        return a(a(jSONObject.optString("in_na"), str), jSONObject.optString("pre"), jSONObject.optString("clna"), jSONObject, cVar.e, str2);
    }

    private static com.tramini.plugin.a.c.a a(Object obj, String str, final String str2, JSONObject jSONObject, JSONArray jSONArray, String str3) {
        try {
            StringBuffer stringBuffer = new StringBuffer();
            if (!TextUtils.equals(str3, "0")) {
                obj = a(obj, str, stringBuffer, new f.c() {
                    @Override
                    public final boolean a(Object obj2) {
                        return (obj2 instanceof List) || obj2.getClass().getName().contains(str2);
                    }

                    @Override
                    public final f.a b(Object obj2) {
                        try {
                            if (obj2 instanceof List) {
                                List list = (List) obj2;
                                if (list != null && list.size() > 0) {
                                    for (int i = 0; i < list.size(); i++) {
                                        Object obj3 = list.get(i);
                                        if (obj3.getClass().getName().contains(str2)) {
                                            return f.a.a(obj3);
                                        }
                                    }
                                    return f.a.a();
                                }
                                return f.a.a();
                            }
                            return f.a.a(obj2);
                        } catch (Throwable unused) {
                            return null;
                        }
                    }
                });
            }
            if (obj == null) {
                return null;
            }
            JSONObject jSONObject2 = new JSONObject();
            for (int i = 0; i < jSONArray.length(); i++) {
                try {
                    String strOptString = jSONArray.optString(i);
                    Object objA = a(obj, jSONObject.optString(strOptString));
                    if (objA != null) {
                        String string = objA.toString();
                        if (!TextUtils.isEmpty(string)) {
                            jSONObject2.put(strOptString, string);
                        }
                    }
                } catch (Throwable unused) {
                }
            }
            if (jSONObject2.length() > 0) {
                com.tramini.plugin.a.c.a aVar = new com.tramini.plugin.a.c.a();
                aVar.a = jSONObject2;
                return aVar;
            }
        } catch (Throwable unused2) {
        }
        return null;
    }
}
