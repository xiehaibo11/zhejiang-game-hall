package com.tramini.plugin.a.e;

import android.text.TextUtils;
import com.xiaomi.mipush.sdk.Constants;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes4.dex */
public final class g extends f {
    public static com.tramini.plugin.a.c.a a(JSONObject jSONObject, com.tramini.plugin.a.c.c cVar, String str) {
        return a(a(jSONObject.optString("in_na"), str), "", jSONObject.optString("pre"), jSONObject.optString("mena"), jSONObject.optString("agu"), jSONObject, cVar.e);
    }

    private static com.tramini.plugin.a.c.a a(Object obj, String str, String str2, String str3, String str4, JSONObject jSONObject, JSONArray jSONArray) {
        com.tramini.plugin.a.c.a aVarA;
        int i;
        Method[] methodArr;
        Object objInvoke;
        Method[] methodArr2;
        int i2;
        Object obj2 = obj;
        if (obj2 == null || !obj.getClass().getName().startsWith(str2)) {
            return null;
        }
        String str5 = str + obj.getClass().getName() + Constants.ACCEPT_TIME_SEPARATOR_SP;
        try {
            ArrayList arrayList = new ArrayList();
            a(obj.getClass(), arrayList);
            int size = arrayList.size();
            Field[] fieldArr = new Field[size];
            arrayList.toArray(fieldArr);
            if (size == 0) {
                return null;
            }
            int i3 = 0;
            int i4 = 0;
            while (i4 < size) {
                Field field = fieldArr[i4];
                boolean z = true;
                field.setAccessible(true);
                Object obj3 = field.get(obj2);
                Method[] methodArrC = c(obj3, str3);
                if (obj3 != null && methodArrC != null) {
                    int length = methodArrC.length;
                    int i5 = i3;
                    while (i5 < length) {
                        Method method = methodArrC[i5];
                        method.setAccessible(z);
                        try {
                            objInvoke = method.invoke(obj3, new Object[i3]);
                        } catch (Throwable unused) {
                        }
                        if (objInvoke instanceof JSONObject) {
                            try {
                                if (((JSONObject) objInvoke).has(str4)) {
                                    JSONObject jSONObject2 = new JSONObject();
                                    int i6 = i3;
                                    while (i6 < jSONArray.length()) {
                                        try {
                                            String strOptString = jSONArray.optString(i6);
                                            methodArr2 = methodArrC;
                                            try {
                                                String strOptString2 = jSONObject.optString(strOptString);
                                                i2 = length;
                                                try {
                                                    if (TextUtils.equals(strOptString2, "all")) {
                                                        jSONObject2.put(strOptString, objInvoke.toString());
                                                    } else {
                                                        String strA = a(strOptString2, (JSONObject) objInvoke);
                                                        if (!TextUtils.isEmpty(strA)) {
                                                            jSONObject2.put(strOptString, strA);
                                                        }
                                                    }
                                                } catch (Throwable unused2) {
                                                }
                                            } catch (Throwable unused3) {
                                                i2 = length;
                                            }
                                        } catch (Throwable unused4) {
                                            methodArr2 = methodArrC;
                                        }
                                        i6++;
                                        methodArrC = methodArr2;
                                        length = i2;
                                    }
                                    methodArr = methodArrC;
                                    i = length;
                                    try {
                                        com.tramini.plugin.a.c.a aVar = new com.tramini.plugin.a.c.a();
                                        aVar.f7836a = jSONObject2;
                                        return aVar;
                                    } catch (Throwable unused5) {
                                        continue;
                                    }
                                }
                            } catch (Throwable unused6) {
                            }
                        }
                        methodArr = methodArrC;
                        i = length;
                        i5++;
                        z = true;
                        i3 = 0;
                        methodArrC = methodArr;
                        length = i;
                    }
                } else if (obj3 != null && !str5.contains(obj3.getClass().getName()) && (aVarA = a(obj3, str5, str2, str3, str4, jSONObject, jSONArray)) != null) {
                    return aVarA;
                }
                i4++;
                i3 = 0;
                obj2 = obj;
            }
            return null;
        } catch (Throwable unused7) {
            return null;
        }
    }

    private static Method[] c(Object obj, String str) {
        try {
            ArrayList arrayList = new ArrayList();
            for (Method method : obj.getClass().getDeclaredMethods()) {
                if (method.getGenericReturnType().toString().contains(str)) {
                    arrayList.add(method);
                }
            }
            return (Method[]) arrayList.toArray(new Method[0]);
        } catch (Exception unused) {
            return null;
        }
    }

    private static String a(String str, JSONObject jSONObject) {
        String[] strArrSplit;
        int i;
        try {
            strArrSplit = str.split(Constants.COLON_SEPARATOR);
            i = 0;
        } catch (Throwable unused) {
            return "";
        }
        while (i < strArrSplit.length) {
            int i2 = i + 1;
            if (i2 == strArrSplit.length) {
                return jSONObject.optString(strArrSplit[i]);
            }
            try {
                jSONObject = new JSONObject(jSONObject.optString(strArrSplit[i]));
            } catch (JSONException unused2) {
                jSONObject = new JSONArray(jSONObject.optString(strArrSplit[i])).getJSONObject(0);
            }
            i = i2;
            return "";
        }
        return "";
    }
}
