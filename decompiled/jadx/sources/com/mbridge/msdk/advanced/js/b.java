package com.mbridge.msdk.advanced.js;

import android.text.TextUtils;
import android.util.Base64;
import android.webkit.WebView;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.s;
import com.mbridge.msdk.foundation.download.download.H5DownLoadManager;
import com.mbridge.msdk.foundation.entity.o;
import com.mbridge.msdk.foundation.tools.ad;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.h;
import com.tkay.expressad.advanced.js.NativeAdvancedJsUtils;
import java.io.File;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: NativeAdvancedJsUtils.java */
/* JADX INFO: loaded from: classes2.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f3102a = "NativeAdvancedJsUtils";

    public static void a(Object obj, JSONObject jSONObject) {
        String str;
        String str2;
        String str3;
        JSONArray jSONArray;
        int i;
        boolean z;
        String str4;
        File file;
        String str5 = "";
        JSONObject jSONObject2 = new JSONObject();
        String str6 = "message";
        int i2 = 1;
        if (jSONObject == null) {
            try {
                jSONObject2.put("code", 1);
                jSONObject2.put("message", "params is null");
                h.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
                return;
            } catch (JSONException e) {
                z.a(f3102a, e.getMessage());
                return;
            }
        }
        try {
            jSONObject2.put("code", 0);
            jSONObject2.put("message", "");
            JSONArray jSONArray2 = jSONObject.getJSONArray("resource");
            try {
                if (jSONArray2 != null && jSONArray2.length() > 0) {
                    JSONArray jSONArray3 = new JSONArray();
                    int length = jSONArray2.length();
                    int i3 = 0;
                    while (i3 < length) {
                        JSONObject jSONObject3 = jSONArray2.getJSONObject(i3);
                        String strOptString = jSONObject3.optString("ref", str5);
                        int i4 = jSONObject3.getInt("type");
                        JSONObject jSONObject4 = new JSONObject();
                        if (i4 == i2 && !TextUtils.isEmpty(strOptString)) {
                            JSONObject jSONObject5 = new JSONObject();
                            o oVarA = s.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j())).a(strOptString);
                            if (oVarA != null) {
                                jSONArray = jSONArray2;
                                i = length;
                                z.a(f3102a, "VideoBean not null");
                                jSONObject5.put("type", 1);
                                jSONObject5.put("videoDataLength", oVarA.c());
                                String strE = oVarA.e();
                                str3 = str6;
                                if (TextUtils.isEmpty(strE)) {
                                    z.a(f3102a, "VideoPath null");
                                    jSONObject5.put("path", str5);
                                    jSONObject5.put("path4Web", str5);
                                    str2 = str5;
                                } else {
                                    str2 = str5;
                                    z.a(f3102a, "VideoPath not null");
                                    jSONObject5.put("path", strE);
                                    jSONObject5.put("path4Web", strE);
                                }
                                if (oVarA.d() == 5) {
                                    jSONObject5.put("downloaded", 1);
                                    z = false;
                                } else {
                                    z = false;
                                    jSONObject5.put("downloaded", 0);
                                }
                                jSONObject4.put(strOptString, jSONObject5);
                                jSONArray3.put(jSONObject4);
                            } else {
                                str2 = str5;
                                str3 = str6;
                                jSONArray = jSONArray2;
                                i = length;
                                z = false;
                                z.a(f3102a, "VideoBean null");
                            }
                        } else {
                            str2 = str5;
                            str3 = str6;
                            jSONArray = jSONArray2;
                            i = length;
                            z = false;
                            if (i4 == 2 && !TextUtils.isEmpty(strOptString)) {
                                JSONObject jSONObject6 = new JSONObject();
                                jSONObject6.put("type", 2);
                                jSONObject6.put("path", H5DownLoadManager.getInstance().getH5ResAddress(strOptString) == null ? str2 : H5DownLoadManager.getInstance().getH5ResAddress(strOptString));
                                jSONObject4.put(strOptString, jSONObject6);
                                jSONArray3.put(jSONObject4);
                            } else if (i4 == 3 && !TextUtils.isEmpty(strOptString)) {
                                try {
                                    file = new File(strOptString);
                                } catch (Throwable th) {
                                    if (MBridgeConstans.DEBUG) {
                                        th.printStackTrace();
                                    }
                                }
                                if (file.exists() && file.isFile() && file.canRead()) {
                                    z.a(f3102a, "getFileInfo Mraid file " + strOptString);
                                    str4 = "file:////" + strOptString;
                                } else {
                                    str4 = str2;
                                }
                                JSONObject jSONObject7 = new JSONObject();
                                jSONObject7.put("type", 3);
                                jSONObject7.put("path", str4);
                                jSONObject4.put(strOptString, jSONObject7);
                                jSONArray3.put(jSONObject4);
                            } else if (i4 == 4 && !TextUtils.isEmpty(strOptString)) {
                                JSONObject jSONObject8 = new JSONObject();
                                jSONObject8.put("type", 4);
                                jSONObject8.put("path", ad.a(strOptString) == null ? str2 : ad.a(strOptString));
                                jSONObject4.put(strOptString, jSONObject8);
                                jSONArray3.put(jSONObject4);
                            }
                        }
                        i3++;
                        jSONArray2 = jSONArray;
                        length = i;
                        str6 = str3;
                        str5 = str2;
                        i2 = 1;
                    }
                    jSONObject2.put("resource", jSONArray3);
                    h.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
                    return;
                }
                try {
                    jSONObject2.put("code", 1);
                    str = "message";
                    try {
                        try {
                            jSONObject2.put(str, "resource is null");
                            h.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
                        } catch (JSONException e2) {
                            e = e2;
                            z.a(f3102a, e.getMessage());
                        }
                    } catch (Throwable th2) {
                        th = th2;
                        try {
                            jSONObject2.put("code", 1);
                            jSONObject2.put(str, th.getLocalizedMessage());
                            h.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
                        } catch (JSONException e3) {
                            z.a(f3102a, e3.getMessage());
                        }
                    }
                } catch (JSONException e4) {
                    e = e4;
                    str = "message";
                }
            } catch (Throwable th3) {
                th = th3;
                str = str3;
                jSONObject2.put("code", 1);
                jSONObject2.put(str, th.getLocalizedMessage());
                h.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
            }
        } catch (Throwable th4) {
            th = th4;
            str = str6;
        }
    }

    public static void a(WebView webView, String str, String str2) {
        h.a().a(webView, str, str2);
    }

    public static void a(WebView webView, String str, String str2, Object obj) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put(NativeAdvancedJsUtils.n, 1);
            jSONObject.put("action", str);
            if (!TextUtils.isEmpty(str2)) {
                JSONObject jSONObject2 = new JSONObject();
                jSONObject2.put(str2, obj);
                jSONObject.put("params", jSONObject2);
            }
            if (TextUtils.isEmpty(str2) && obj != null) {
                jSONObject.put("params", obj);
            }
            h.a().a(webView, NativeAdvancedJsUtils.o, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public static void a(WebView webView) {
        z.d(f3102a, "fireOnJSBridgeConnected");
        h.a().a(webView);
    }

    public static void a(Object obj) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", com.mbridge.msdk.mbjscommon.bridge.b.b);
            h.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception e) {
            z.a(f3102a, e.getMessage());
        }
    }
}
