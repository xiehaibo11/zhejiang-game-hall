package com.tramini.plugin.a.e;

import android.text.TextUtils;
import com.tramini.plugin.a.e.f;
import com.xiaomi.mipush.sdk.Constants;
import java.lang.reflect.Field;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes4.dex */
public final class h extends f {
    public static com.tramini.plugin.a.c.a a(JSONObject jSONObject, com.tramini.plugin.a.c.c cVar, String str) {
        int i;
        int i2;
        String[] strArr;
        String strOptString = jSONObject.optString("pre1");
        String strOptString2 = jSONObject.optString("pre2");
        String strOptString3 = jSONObject.optString("clna");
        String strOptString4 = jSONObject.optString("mena");
        String strOptString5 = jSONObject.optString("adaptna");
        String strOptString6 = jSONObject.optString("ctrlna");
        String strOptString7 = jSONObject.optString("in_na");
        String strOptString8 = jSONObject.optString("objna_arr");
        String strOptString9 = jSONObject.optString("obj2na");
        String strOptString10 = jSONObject.optString("html");
        Object objD = d(strOptString7, str);
        String str2 = objD instanceof String ? (String) objD : null;
        if (TextUtils.isEmpty(str2)) {
            return null;
        }
        String[] strArrSplit = strOptString3.split(Constants.ACCEPT_TIME_SEPARATOR_SP);
        int length = strArrSplit.length;
        int i3 = 0;
        while (i3 < length) {
            Object objB = b(strArrSplit[i3], strOptString4);
            if (objB != null) {
                i = i3;
                i2 = length;
                strArr = strArrSplit;
                com.tramini.plugin.a.c.a aVarA = a(objB, strOptString, strOptString6, strOptString5, strOptString2, str2, strOptString8, strOptString9, strOptString10, jSONObject, cVar.e);
                if (aVarA != null) {
                    return aVarA;
                }
            } else {
                i = i3;
                i2 = length;
                strArr = strArrSplit;
            }
            i3 = i + 1;
            length = i2;
            strArrSplit = strArr;
        }
        return null;
    }

    private static com.tramini.plugin.a.c.a a(Object obj, String str, String str2, JSONObject jSONObject, JSONArray jSONArray) {
        Object obj2;
        Object obj3;
        String str3;
        try {
            String[] strArrSplit = str2.split(Constants.COLON_SEPARATOR);
            if (strArrSplit.length != 2) {
                return null;
            }
            int i = 0;
            try {
                List list = (List) b(obj, str);
                obj2 = null;
                for (int i2 = 0; i2 < list.size() && (obj2 = list.get(i2)) == null; i2++) {
                    try {
                    } catch (Exception unused) {
                    }
                }
            } catch (Exception unused2) {
                obj2 = null;
            }
            Object objA = a(b(obj2, strArrSplit[0]), strArrSplit[1]);
            JSONObject jSONObject2 = new JSONObject();
            int i3 = 0;
            while (i3 < jSONArray.length()) {
                String strOptString = jSONArray.optString(i3);
                String strOptString2 = jSONObject.optString(strOptString);
                if (!TextUtils.isEmpty(strOptString2)) {
                    try {
                        str3 = (String) b(obj, strOptString2);
                    } catch (Throwable unused3) {
                    }
                    if (!TextUtils.isEmpty(str3)) {
                        jSONObject2.put(strOptString, str3);
                    } else {
                        String str4 = (String) b(obj2, strOptString2);
                        if (!TextUtils.isEmpty(str4)) {
                            jSONObject2.put(strOptString, str4);
                        } else {
                            if (objA instanceof String) {
                                String string = objA.toString();
                                JSONArray jSONArray2 = new JSONArray(strOptString2);
                                int i4 = i;
                                int i5 = i4;
                                while (i4 < jSONArray2.length()) {
                                    Matcher matcher = Pattern.compile(jSONArray2.optString(i4)).matcher(string);
                                    while (true) {
                                        if (!matcher.find()) {
                                            obj3 = objA;
                                            break;
                                        }
                                        String strGroup = matcher.group();
                                        int iIndexOf = strGroup.indexOf(">");
                                        int iIndexOf2 = strGroup.indexOf("<");
                                        obj3 = objA;
                                        if (iIndexOf != -1 && iIndexOf2 != -1) {
                                            try {
                                                String strSubstring = strGroup.substring(iIndexOf + 1, iIndexOf2);
                                                if (!TextUtils.isEmpty(strSubstring)) {
                                                    jSONObject2.put(strOptString, strSubstring);
                                                    i5 = 1;
                                                    break;
                                                }
                                            } catch (Throwable unused4) {
                                            }
                                        }
                                        objA = obj3;
                                    }
                                    if (i5 == 0) {
                                        i4++;
                                        objA = obj3;
                                    }
                                }
                            }
                            i3++;
                            objA = obj3;
                            i = 0;
                        }
                    }
                }
                obj3 = objA;
                i3++;
                objA = obj3;
                i = 0;
            }
            if (jSONObject2.length() <= 0) {
                return null;
            }
            com.tramini.plugin.a.c.a aVar = new com.tramini.plugin.a.c.a();
            aVar.f7836a = jSONObject2;
            return aVar;
        } catch (Throwable unused5) {
            return null;
        }
    }

    private static Object d(String str, String str2) {
        Map map;
        try {
            Object objInvoke = Class.forName(str).getMethod("getInstance", new Class[0]).invoke(null, new Object[0]);
            Field[] declaredFields = objInvoke.getClass().getDeclaredFields();
            if (declaredFields != null) {
                for (Field field : declaredFields) {
                    field.setAccessible(true);
                    if ((field.get(objInvoke) instanceof Map) && (map = (Map) field.get(objInvoke)) != null && map.containsKey(str2)) {
                        return map.get(str2);
                    }
                }
            }
        } catch (Throwable unused) {
        }
        return null;
    }

    /* JADX INFO: renamed from: com.tramini.plugin.a.e.h$1, reason: invalid class name */
    final class AnonymousClass1 implements f.c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ String f7850a;
        final /* synthetic */ String b;

        AnonymousClass1(String str, String str2) {
            this.f7850a = str;
            this.b = str2;
        }

        @Override // com.tramini.plugin.a.e.f.c
        public final boolean a(Object obj) {
            return obj instanceof Map;
        }

        @Override // com.tramini.plugin.a.e.f.c
        public final f.a b(Object obj) {
            Map map = (Map) obj;
            if (map == null || map.size() == 0) {
                return f.a.a();
            }
            if (map.containsKey(this.f7850a)) {
                Object obj2 = map.get(this.f7850a);
                if (obj2 == null) {
                    return f.a.a();
                }
                if (obj2.getClass().getName().contains(this.b)) {
                    return f.a.a(obj2);
                }
                return f.a.b(obj2);
            }
            return f.a.a();
        }
    }

    private static Object a(Object obj, String str, String str2, String str3, String str4) {
        Object objA = a(obj, str, new StringBuffer(), new AnonymousClass1(str2, str3));
        if (objA == null) {
            return null;
        }
        return a(objA, str, new StringBuffer(), new AnonymousClass2(str4));
    }

    /* JADX INFO: renamed from: com.tramini.plugin.a.e.h$2, reason: invalid class name */
    final class AnonymousClass2 implements f.c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ String f7851a;

        AnonymousClass2(String str) {
            this.f7851a = str;
        }

        @Override // com.tramini.plugin.a.e.f.c
        public final boolean a(Object obj) {
            return obj instanceof Map;
        }

        @Override // com.tramini.plugin.a.e.f.c
        public final f.a b(Object obj) {
            Map map = (Map) obj;
            if (map == null || map.size() == 0) {
                return f.a.a();
            }
            Iterator it = map.entrySet().iterator();
            if (it.hasNext()) {
                Object value = ((Map.Entry) it.next()).getValue();
                if (value == null) {
                    return f.a.a();
                }
                if (value.getClass().getSimpleName().contains(this.f7851a)) {
                    return f.a.a(value);
                }
                return f.a.b(value);
            }
            return f.a.a();
        }
    }

    private static Object a(Object obj, String str, String str2, String str3) {
        StringBuffer stringBuffer = new StringBuffer();
        Object objA = a(obj, str, stringBuffer, new AnonymousClass3(str, str3));
        return objA != null ? objA : a(obj, str, new StringBuffer(), new AnonymousClass4(str2, str, stringBuffer, str3));
    }

    /* JADX INFO: renamed from: com.tramini.plugin.a.e.h$3, reason: invalid class name */
    final class AnonymousClass3 implements f.c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ String f7852a;
        final /* synthetic */ String b;

        AnonymousClass3(String str, String str2) {
            this.f7852a = str;
            this.b = str2;
        }

        @Override // com.tramini.plugin.a.e.f.c
        public final boolean a(Object obj) {
            return obj.getClass().getName().startsWith(this.f7852a);
        }

        @Override // com.tramini.plugin.a.e.f.c
        public final f.a b(Object obj) {
            try {
                if (this.b != null && this.b.contains(obj.getClass().getName())) {
                    return f.a.a(obj);
                }
                return f.a.b(obj);
            } catch (Throwable unused) {
                return f.a.a();
            }
        }
    }

    /* JADX INFO: renamed from: com.tramini.plugin.a.e.h$4, reason: invalid class name */
    final class AnonymousClass4 implements f.c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ String f7853a;
        final /* synthetic */ String b;
        final /* synthetic */ StringBuffer c;
        final /* synthetic */ String d;

        AnonymousClass4(String str, String str2, StringBuffer stringBuffer, String str3) {
            this.f7853a = str;
            this.b = str2;
            this.c = stringBuffer;
            this.d = str3;
        }

        @Override // com.tramini.plugin.a.e.f.c
        public final boolean a(Object obj) {
            return obj instanceof Map;
        }

        @Override // com.tramini.plugin.a.e.f.c
        public final f.a b(Object obj) {
            Map map;
            try {
                map = (Map) obj;
            } catch (Throwable unused) {
            }
            if (map != null && map.size() > 0) {
                if (map.containsKey(this.f7853a)) {
                    Object obj2 = map.get(this.f7853a);
                    if (obj2 == null) {
                        return f.a.a();
                    }
                    Object objA = f.a(obj2, this.b, this.c, new f.c() { // from class: com.tramini.plugin.a.e.h.4.1
                        @Override // com.tramini.plugin.a.e.f.c
                        public final boolean a(Object obj3) {
                            return obj3.getClass().getName().startsWith(AnonymousClass4.this.b);
                        }

                        @Override // com.tramini.plugin.a.e.f.c
                        public final f.a b(Object obj3) {
                            if (AnonymousClass4.this.d != null && AnonymousClass4.this.d.contains(obj3.getClass().getName())) {
                                return f.a.a(obj3);
                            }
                            return f.a.b(obj3);
                        }
                    });
                    if (objA != null) {
                        return f.a.a(objA);
                    }
                    return f.a.a();
                }
                return f.a.a();
            }
            return f.a.a();
        }
    }

    private static com.tramini.plugin.a.c.a a(Object obj, String str, String str2, String str3, String str4, String str5, String str6, String str7, String str8, JSONObject jSONObject, JSONArray jSONArray) {
        try {
            Object objA = a(obj, str, new StringBuffer(), new AnonymousClass1(str5, str2));
            Object objA2 = objA == null ? null : a(objA, str, new StringBuffer(), new AnonymousClass2(str3));
            if (objA2 == null) {
                return null;
            }
            StringBuffer stringBuffer = new StringBuffer();
            Object objA3 = a(objA2, str4, stringBuffer, new AnonymousClass3(str4, str6));
            if (objA3 == null) {
                objA3 = a(objA2, str4, new StringBuffer(), new AnonymousClass4(str5, str4, stringBuffer, str6));
            }
            if (objA3 == null) {
                return null;
            }
            return a(objA3, str7, str8, jSONObject, jSONArray);
        } catch (Throwable th) {
            th.printStackTrace();
            return null;
        }
    }
}
