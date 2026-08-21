package com.tramini.plugin.a.e;

import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import com.tkay.basead.b.a;
import com.tramini.plugin.a.c.a;
import com.tramini.plugin.a.e.f;
import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public final class a extends f {
    static final String a = "naitve";
    static final String b = "html";
    static final String c = "html_background";
    static final String d = "html_play";
    static final String e = "html_css";
    static final String f = "html_x3d";
    static final String g = "html_doctype";
    static final String h = "html_doctype_write";
    static final String i = "html_unknow";
    static final String j = "0";
    static final String k = "1";
    static final String l = "2";
    static final String m = "3";
    static final String n = "4";
    static final String o = "5";
    static final String p = "6";
    static final String q = "7";
    static final String r = "8";
    static final String s = "9";
    private static final String t = JSONObject.class.getName();

    public static com.tramini.plugin.a.c.a a(JSONObject jSONObject, com.tramini.plugin.a.c.c cVar, String str, String str2) {
        return a(a(jSONObject.optString("in_na"), str), jSONObject.optString("pre"), a(jSONObject.optJSONArray("p_key")), jSONObject, cVar.e, str2);
    }

    /* JADX WARN: Removed duplicated region for block: B:69:0x0111 A[PHI: r0
      0x0111: PHI (r0v3 org.json.JSONObject) = (r0v2 org.json.JSONObject), (r0v10 org.json.JSONObject), (r0v10 org.json.JSONObject) binds: [B:72:0x0125, B:13:0x0043, B:15:0x004f] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static com.tramini.plugin.a.c.a a(Object obj, String str, String[] strArr, JSONObject jSONObject, JSONArray jSONArray, String str2) {
        JSONObject jSONObjectA;
        String str3;
        String str4;
        String str5;
        JSONObject jSONObject2 = new JSONObject();
        if (obj == null) {
            return null;
        }
        try {
            jSONArray.put(jSONArray.length(), a.a.A);
            HashSet hashSet = new HashSet();
            byte b2 = -1;
            int i2 = 0;
            if (str2.hashCode() == 48 && str2.equals("0")) {
                b2 = 0;
            }
            if (b2 == 0) {
                jSONObjectA = a(obj, hashSet, strArr[1], str);
                String string = jSONObjectA.toString();
                if (!TextUtils.isEmpty(string)) {
                    String strD = d(string, a);
                    str3 = "";
                    str4 = str3;
                    str5 = str4;
                    while (i2 < jSONArray.length()) {
                        try {
                            String strOptString = jSONArray.optString(i2);
                            String strOptString2 = jSONObject.optString(strOptString);
                            if (TextUtils.equals(strOptString2, a.a.A)) {
                                str3 = strOptString;
                            } else if (TextUtils.equals(strOptString2, "all")) {
                                str5 = strOptString;
                            } else if (!TextUtils.isEmpty(strOptString2)) {
                                String strA = a(strD, a, strOptString, jSONObject);
                                if (TextUtils.equals(strOptString, "i_lr")) {
                                    str4 = strA;
                                }
                                if (!TextUtils.isEmpty(strA)) {
                                    if (strOptString.equals(a.a.A) && !TextUtils.isEmpty(str3)) {
                                        jSONObject2.put(str3, strA);
                                    }
                                    jSONObject2.put(strOptString, strA);
                                }
                            }
                        } catch (Throwable unused) {
                        }
                        i2++;
                    }
                }
            } else {
                jSONObjectA = a(obj, hashSet, strArr[0], str);
                if (jSONObjectA != null) {
                    String strOptString3 = jSONObjectA.optString(strArr[0]);
                    if (TextUtils.isEmpty(strOptString3)) {
                        str3 = "";
                        str4 = str3;
                        str5 = str4;
                    } else {
                        String str6 = i;
                        if (strOptString3.contains("div id=\"mys-wrapper\" class=\"mys-wrapper\">")) {
                            str6 = (strOptString3.contains("https://rr") || strOptString3.contains(".mp4")) ? b : c;
                        } else if (strOptString3.contains("html5AdData") && strOptString3.contains("google_template_data")) {
                            str6 = d;
                        } else if (strOptString3.contains("<link") && strOptString3.contains("type=\"text/css")) {
                            str6 = e;
                        } else if (strOptString3.contains("new videoInterstitial") && strOptString3.contains("x3c")) {
                            str6 = f;
                        } else if (strOptString3.contains("<!doctype html>")) {
                            str6 = strOptString3.contains("doc.write") ? h : g;
                        }
                        String strD2 = d(strOptString3, str6);
                        str3 = "";
                        str4 = str3;
                        str5 = str4;
                        while (i2 < jSONArray.length()) {
                            try {
                                String strOptString4 = jSONArray.optString(i2);
                                String strOptString5 = jSONObject.optString(strOptString4);
                                if (TextUtils.equals(strOptString5, a.a.A)) {
                                    str3 = strOptString4;
                                } else if (TextUtils.equals(strOptString5, "all")) {
                                    str5 = strOptString4;
                                } else if (!TextUtils.isEmpty(strOptString5)) {
                                    String strA2 = a(strD2, str6, strOptString4, jSONObject);
                                    if (TextUtils.equals(strOptString4, "i_lr")) {
                                        str4 = strA2;
                                    }
                                    if (!TextUtils.isEmpty(strA2)) {
                                        if (strOptString4.equals(a.a.A) && !TextUtils.isEmpty(str3)) {
                                            jSONObject2.put(str3, strA2);
                                        }
                                        jSONObject2.put(strOptString4, strA2);
                                    }
                                }
                            } catch (Throwable unused2) {
                            }
                            i2++;
                        }
                    }
                }
            }
            com.tramini.plugin.a.c.a aVar = new com.tramini.plugin.a.c.a();
            if (jSONObject2.length() <= 0) {
                if (jSONObjectA == null) {
                    aVar.b = new a.a("1", "");
                } else {
                    aVar.b = new a.a("2", jSONObjectA.toString());
                }
                return aVar;
            }
            if (!TextUtils.isEmpty(str3) && TextUtils.isEmpty(jSONObject2.optString(str3, "")) && !TextUtils.isEmpty(str4)) {
                String strB = b(str4);
                if (!TextUtils.isEmpty(strB)) {
                    jSONObject2.put(str3, strB);
                } else {
                    String strA3 = a(str4);
                    if (!TextUtils.isEmpty(strA3)) {
                        jSONObject2.put(str3, strA3);
                    }
                }
            }
            if (jSONObjectA != null && !TextUtils.isEmpty(str5)) {
                jSONObject2.put(str5, com.tramini.plugin.a.g.c.a(jSONObjectA.toString().getBytes()));
            }
            aVar.a = jSONObject2;
            return aVar;
        } catch (Throwable unused3) {
            return null;
        }
    }

    private static JSONObject a(Object obj, Set<Object> set, String str, String str2) {
        if (obj != null && !set.contains(obj)) {
            set.add(obj);
            Class<?> superclass = obj.getClass();
            ArrayList<Field> arrayList = new ArrayList();
            do {
                arrayList.addAll(Arrays.asList(superclass.getDeclaredFields()));
                superclass = superclass.getSuperclass();
            } while (superclass.getName().startsWith(str2));
            for (Field field : arrayList) {
                field.setAccessible(true);
                try {
                    Object obj2 = field.get(obj);
                    if (obj2 != null) {
                        if (field.getType().getName().equals("interface") || obj2.getClass().getName().startsWith(str2)) {
                            JSONObject jSONObjectA = a(obj2, set, str, str2);
                            if (jSONObjectA != null) {
                                return jSONObjectA;
                            }
                        } else if (field.getType().getName().equals(t)) {
                            JSONObject jSONObject = (JSONObject) obj2;
                            if (jSONObject.has(str)) {
                                return jSONObject;
                            }
                        } else {
                            continue;
                        }
                    }
                } catch (Throwable unused) {
                }
            }
        }
        return null;
    }

    private static String[] a(JSONArray jSONArray) {
        try {
            int length = jSONArray.length();
            String[] strArr = new String[length];
            for (int i2 = 0; i2 < length; i2++) {
                try {
                    strArr[i2] = jSONArray.getString(i2);
                } catch (JSONException unused) {
                    return strArr;
                }
            }
            return strArr;
        } catch (JSONException unused2) {
            return null;
        }
    }

    private static String e(String str) {
        return str.contains("div id=\"mys-wrapper\" class=\"mys-wrapper\">") ? (str.contains("https://rr") || str.contains(".mp4")) ? b : c : (str.contains("html5AdData") && str.contains("google_template_data")) ? d : (str.contains("<link") && str.contains("type=\"text/css")) ? e : (str.contains("new videoInterstitial") && str.contains("x3c")) ? f : str.contains("<!doctype html>") ? str.contains("doc.write") ? h : g : i;
    }

    private static String f(String str) {
        return str.replaceAll("&amp;", "&").replaceAll("&quot;", "\"");
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:17:0x0033  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static String d(String str, String str2) {
        byte b2;
        switch (str2.hashCode()) {
            case -1852354744:
                b2 = !str2.equals(d) ? (byte) -1 : (byte) 1;
                break;
            case -1052935859:
                if (str2.equals(a)) {
                    b2 = 0;
                    break;
                }
                break;
            case -336842123:
                if (str2.equals(f)) {
                    b2 = 2;
                    break;
                }
                break;
            case 45377598:
                if (str2.equals(h)) {
                    b2 = 3;
                    break;
                }
                break;
        }
        if (b2 == 0) {
            return str.replace("\\/", "/");
        }
        if (b2 == 1 || b2 == 2) {
            return f(c(str.replace("\\\\\\\\x", "%").replaceAll("\\\\x", "%").replaceAll("\\\\n", "")));
        }
        if (b2 == 3) {
            return f(c(str.replace("x22", "\"").replace("x26", "&").replace("x27", "'").replace("x3c", "<").replace("x3d", ContainerUtils.KEY_VALUE_DELIMITER).replace("x3e", ">")));
        }
        return f(c(str));
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:32:0x0063  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static String a(String str, String str2, String str3, JSONObject jSONObject) {
        switch (str2) {
            case "naitve":
                return e(jSONObject.optJSONObject(str3).optString("0"), str);
            case "html":
                return e(jSONObject.optJSONObject(str3).optString("1"), str);
            case "html_background":
                return e(jSONObject.optJSONObject(str3).optString("2"), str);
            case "html_css":
                return e(jSONObject.optJSONObject(str3).optString("5"), str);
            case "html_doctype":
                return e(jSONObject.optJSONObject(str3).optString("7"), str);
            case "html_play":
                String strOptString = jSONObject.optString("3");
                String strOptString2 = jSONObject.optString("4");
                String strA = f.b.a(str, strOptString);
                if (!TextUtils.isEmpty(strA)) {
                    return e(jSONObject.optJSONObject(str3).optString("3"), d(strA));
                }
                return e(jSONObject.optJSONObject(str3).optString("4"), f.b.a(str, strOptString2));
            case "html_x3d":
                String strA2 = f.b.a(str, jSONObject.optString("6"));
                if (TextUtils.isEmpty(strA2)) {
                    return "";
                }
                return e(jSONObject.optJSONObject(str3).optString("3"), d(strA2));
            case "html_doctype_write":
                return e(jSONObject.optJSONObject(str3).optString("2"), f.b.a(str, jSONObject.optString("8")));
            case "html_unknow":
            default:
                return e(jSONObject.optJSONObject(str3).optString("9"), str);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:38:0x0077 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:44:0x0078 A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static String e(String str, String str2) {
        try {
            JSONArray jSONArray = new JSONArray(str);
            String strA = "";
            for (int i2 = 0; i2 < jSONArray.length(); i2++) {
                JSONObject jSONObjectOptJSONObject = jSONArray.optJSONObject(i2);
                if (jSONObjectOptJSONObject != null) {
                    int iOptInt = jSONObjectOptJSONObject.optInt("action", -1);
                    String strOptString = jSONObjectOptJSONObject.optString("param", "");
                    if (iOptInt != 11) {
                        if (iOptInt != 13) {
                            if (iOptInt == 101) {
                                if (TextUtils.isEmpty(str2)) {
                                    continue;
                                } else {
                                    strA = f.b.a(str2, strOptString);
                                    if (TextUtils.isEmpty(strA)) {
                                    }
                                }
                            } else {
                                if (iOptInt == 102) {
                                    if (TextUtils.isEmpty(str2)) {
                                        continue;
                                    } else {
                                        strA = f.c(str2, "'" + strOptString + "'\\s*:\\s*'(.*?)'");
                                    }
                                }
                                if (TextUtils.isEmpty(strA)) {
                                    return strA;
                                }
                            }
                        } else if (TextUtils.isEmpty(str2)) {
                            continue;
                        } else {
                            strA = f.d.b(str2, strOptString);
                            if (TextUtils.isEmpty(strA)) {
                            }
                        }
                    } else if (TextUtils.isEmpty(str2)) {
                        continue;
                    } else {
                        strA = f.d.a(str2, strOptString);
                        if (TextUtils.isEmpty(strA)) {
                        }
                    }
                }
            }
        } catch (Throwable unused) {
        }
        return "";
    }
}
