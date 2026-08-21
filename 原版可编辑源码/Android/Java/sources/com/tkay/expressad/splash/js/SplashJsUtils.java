package com.tkay.expressad.splash.js;

import android.text.TextUtils;
import android.util.Base64;
import android.webkit.WebView;
import com.tkay.core.common.a.i;
import com.tkay.expressad.atsignalcommon.windvane.j;
import com.tkay.expressad.b;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.foundation.g.a.f;
import com.tkay.expressad.foundation.h.s;
import com.tkay.expressad.videocommon.b.g;
import com.tkay.expressad.videocommon.b.l;
import java.io.File;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class SplashJsUtils {
    public static final String a = "onSystemPause";
    public static final String b = "onSystemResume";
    public static final String c = "onSystemDestory";
    private static String d = "SplashJsUtils";
    private static int e = 0;
    private static int f = 1;

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r3v1 */
    /* JADX WARN: Type inference failed for: r3v4 */
    /* JADX WARN: Type inference failed for: r3v7 */
    public static void getFileInfo(Object obj, JSONObject jSONObject) {
        String str;
        String str2;
        String str3;
        String str4;
        boolean z;
        File file;
        JSONObject jSONObject2 = new JSONObject();
        String str5 = "message";
        String str6 = "code";
        int i = 1;
        if (jSONObject == null) {
            try {
                jSONObject2.put("code", 1);
                jSONObject2.put("message", "params is null");
                j.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
                return;
            } catch (JSONException e2) {
                e2.getMessage();
                return;
            }
        }
        try {
            jSONObject2.put("code", 0);
            jSONObject2.put("message", "");
            JSONArray jSONArray = jSONObject.getJSONArray("resource");
            if (jSONArray != null && jSONArray.length() > 0) {
                JSONArray jSONArray2 = new JSONArray();
                int length = jSONArray.length();
                int i2 = 0;
                while (i2 < length) {
                    JSONObject jSONObject3 = jSONArray.getJSONObject(i2);
                    String strOptString = jSONObject3.optString("ref", "");
                    int i3 = jSONObject3.getInt("type");
                    JSONObject jSONObject4 = new JSONObject();
                    if (i3 == i && !TextUtils.isEmpty(strOptString)) {
                        JSONObject jSONObject5 = new JSONObject();
                        l.a();
                        i iVarB = l.b(strOptString);
                        if (iVarB != null) {
                            jSONObject5.put("type", i);
                            str3 = str5;
                            str4 = str6;
                            try {
                                jSONObject5.put("videoDataLength", iVarB.d());
                                String strB = iVarB.b();
                                if (TextUtils.isEmpty(strB)) {
                                    jSONObject5.put("path", "");
                                    jSONObject5.put("path4Web", "");
                                } else {
                                    jSONObject5.put("path", strB);
                                    jSONObject5.put("path4Web", strB);
                                }
                                if (iVarB.c() == 100) {
                                    jSONObject5.put("downloaded", 1);
                                    z = false;
                                } else {
                                    z = false;
                                    jSONObject5.put("downloaded", 0);
                                }
                                jSONObject4.put(strOptString, jSONObject5);
                                jSONArray2.put(jSONObject4);
                            } catch (Throwable th) {
                                th = th;
                                str2 = str4;
                            }
                        } else {
                            str3 = str5;
                            str4 = str6;
                            z = false;
                        }
                    } else {
                        str3 = str5;
                        str4 = str6;
                        z = false;
                        if (i3 == 2 && !TextUtils.isEmpty(strOptString)) {
                            JSONObject jSONObject6 = new JSONObject();
                            jSONObject6.put("type", 2);
                            jSONObject6.put("path", g.a().c(strOptString) == null ? "" : g.a().c(strOptString));
                            jSONObject4.put(strOptString, jSONObject6);
                            jSONArray2.put(jSONObject4);
                        } else if (i3 == 3 && !TextUtils.isEmpty(strOptString)) {
                            try {
                                file = new File(strOptString);
                            } catch (Throwable th2) {
                                if (b.a) {
                                    th2.printStackTrace();
                                }
                            }
                            String strConcat = (file.exists() && file.isFile() && file.canRead()) ? "file:////".concat(String.valueOf(strOptString)) : "";
                            JSONObject jSONObject7 = new JSONObject();
                            jSONObject7.put("type", 3);
                            jSONObject7.put("path", strConcat);
                            jSONObject4.put(strOptString, jSONObject7);
                            jSONArray2.put(jSONObject4);
                        } else if (i3 == 4 && !TextUtils.isEmpty(strOptString)) {
                            JSONObject jSONObject8 = new JSONObject();
                            jSONObject8.put("type", 4);
                            jSONObject8.put("path", s.a(strOptString) == null ? "" : s.a(strOptString));
                            jSONObject4.put(strOptString, jSONObject8);
                            jSONArray2.put(jSONObject4);
                        }
                    }
                    i2++;
                    str6 = str4;
                    str5 = str3;
                    i = 1;
                }
                str3 = str5;
                str4 = str6;
                jSONObject2.put("resource", jSONArray2);
                j.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
                return;
            }
            str3 = "message";
            str2 = "code";
            str = 1;
            try {
                try {
                    jSONObject2.put(str2, 1);
                    try {
                        jSONObject2.put(str3, "resource is null");
                        j.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
                        return;
                    } catch (JSONException e3) {
                        e = e3;
                        e.getMessage();
                        return;
                    }
                } catch (Throwable th3) {
                    th = th3;
                }
            } catch (JSONException e4) {
                e = e4;
            } catch (Throwable th4) {
                th = th4;
                str = str3;
            }
            str = str3;
        } catch (Throwable th5) {
            th = th5;
            str = str5;
            str2 = str6;
        }
        try {
            jSONObject2.put(str2, 1);
            jSONObject2.put(str, th.getLocalizedMessage());
            j.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
        } catch (JSONException e5) {
            e5.getMessage();
        }
    }

    public static String codeToJsonString(int i) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", i);
            String string = jSONObject.toString();
            return !TextUtils.isEmpty(string) ? Base64.encodeToString(string.getBytes(), 2) : "";
        } catch (Throwable unused) {
            return "";
        }
    }

    public static void increaseOfferFrequence(Object obj, JSONObject jSONObject) {
        try {
            JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("data");
            if (jSONObjectOptJSONObject == null) {
                callbackExcep(obj, "data is empty");
                return;
            }
            c cVarB = c.b(jSONObjectOptJSONObject);
            if (cVarB == null) {
                callbackExcep(obj, "data camapign is empty");
            } else {
                updateFrequence(cVarB);
                callbackSuccess(obj, "");
            }
        } catch (Throwable th) {
            callbackExcep(obj, th.getMessage());
        }
    }

    public static void callbackExcep(Object obj, String str) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", f);
            jSONObject.put("message", str);
            jSONObject.put("data", new JSONObject());
            j.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception e2) {
            e2.getMessage();
        }
    }

    public static void callbackSuccess(Object obj, String str) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", e);
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("id", str);
            jSONObject.put("data", jSONObject2);
            j.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception e2) {
            callbackExcep(obj, e2.getMessage());
            e2.getMessage();
        }
    }

    public static void updateFrequence(final c cVar) {
        new Thread(new Runnable() {
            @Override
            public void run() {
                try {
                    SplashJsUtils.a(cVar.K(), cVar);
                } catch (Throwable th) {
                    String unused = SplashJsUtils.d;
                    th.getMessage();
                }
            }
        }).start();
    }

    private static void b(String str, c cVar) {
        if (f.o == null || TextUtils.isEmpty(cVar.aZ())) {
            return;
        }
        f.a(str, cVar, f.f);
    }

    public static void sendEventToH5(WebView webView, String str, String str2) {
        j.a();
        j.a(webView, str, str2);
    }

    public static void fireOnJSBridgeConnected(WebView webView) {
        j.a();
        j.b(webView);
    }

    static void a(String str, c cVar) {
        if (f.o == null || TextUtils.isEmpty(cVar.aZ())) {
            return;
        }
        f.a(str, cVar, f.f);
    }
}
