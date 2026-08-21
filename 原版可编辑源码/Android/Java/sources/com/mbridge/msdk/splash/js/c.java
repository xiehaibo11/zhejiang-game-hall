package com.mbridge.msdk.splash.js;

import android.text.TextUtils;
import android.util.Base64;
import android.webkit.WebView;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.l;
import com.mbridge.msdk.foundation.db.s;
import com.mbridge.msdk.foundation.download.download.H5DownLoadManager;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.o;
import com.mbridge.msdk.foundation.same.a.d;
import com.mbridge.msdk.foundation.tools.ad;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.h;
import com.tkay.expressad.foundation.g.a.f;
import java.io.File;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public final class c {
    private static String a = "SplashJsUtils";
    private static int b = 0;
    private static int c = 1;

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
                z.a(a, e.getMessage());
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
                                z.a(a, "VideoBean not null");
                                jSONObject5.put("type", 1);
                                jSONObject5.put("videoDataLength", oVarA.c());
                                String strE = oVarA.e();
                                str3 = str6;
                                if (TextUtils.isEmpty(strE)) {
                                    z.a(a, "VideoPath null");
                                    jSONObject5.put("path", str5);
                                    jSONObject5.put("path4Web", str5);
                                    str2 = str5;
                                } else {
                                    str2 = str5;
                                    z.a(a, "VideoPath not null");
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
                                z.a(a, "VideoBean null");
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
                                    z.a(a, "getFileInfo Mraid file " + strOptString);
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
                            z.a(a, e.getMessage());
                        }
                    } catch (Throwable th2) {
                        th = th2;
                        try {
                            jSONObject2.put("code", 1);
                            jSONObject2.put(str, th.getLocalizedMessage());
                            h.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
                        } catch (JSONException e3) {
                            z.a(a, e3.getMessage());
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

    public static String a(int i) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", i);
            String string = jSONObject.toString();
            return !TextUtils.isEmpty(string) ? Base64.encodeToString(string.getBytes(), 2) : "";
        } catch (Throwable unused) {
            z.d(a, "code to string is error");
            return "";
        }
    }

    public static void b(Object obj, JSONObject jSONObject) {
        try {
            JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("data");
            if (jSONObjectOptJSONObject == null) {
                a(obj, "data is empty");
                return;
            }
            final CampaignEx campaignWithBackData = CampaignEx.parseCampaignWithBackData(jSONObjectOptJSONObject);
            if (campaignWithBackData == null) {
                a(obj, "data camapign is empty");
                return;
            }
            new Thread(new Runnable() {
                @Override
                public final void run() {
                    try {
                        l lVarA = l.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
                        if (lVarA != null) {
                            if (!lVarA.a(campaignWithBackData.getId())) {
                                com.mbridge.msdk.foundation.entity.h hVar = new com.mbridge.msdk.foundation.entity.h();
                                hVar.a(campaignWithBackData.getId());
                                hVar.a(campaignWithBackData.getFca());
                                hVar.b(campaignWithBackData.getFcb());
                                hVar.d(0);
                                hVar.c(1);
                                hVar.a(System.currentTimeMillis());
                                lVarA.a(hVar);
                            } else {
                                lVarA.b(campaignWithBackData.getId());
                            }
                        }
                        c.a(campaignWithBackData.getCampaignUnitId(), campaignWithBackData);
                    } catch (Throwable th) {
                        z.c(c.a, th.getMessage(), th);
                    }
                }
            }).start();
            try {
                JSONObject jSONObject2 = new JSONObject();
                jSONObject2.put("code", b);
                JSONObject jSONObject3 = new JSONObject();
                jSONObject3.put("id", "");
                jSONObject2.put("data", jSONObject3);
                h.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
            } catch (Exception e) {
                a(obj, e.getMessage());
                z.a(a, e.getMessage());
            }
        } catch (Throwable th) {
            a(obj, th.getMessage());
        }
    }

    private static void a(Object obj, String str) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", c);
            jSONObject.put("message", str);
            jSONObject.put("data", new JSONObject());
            h.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception e) {
            z.a(a, e.getMessage());
        }
    }

    public static void a(WebView webView, String str, String str2) {
        h.a().a(webView, str, str2);
    }

    public static void a(WebView webView) {
        z.d(a, "fireOnJSBridgeConnected");
        h.a().a(webView);
    }

    static void a(String str, CampaignEx campaignEx) {
        if (d.i == null || TextUtils.isEmpty(campaignEx.getId())) {
            return;
        }
        d.a(str, campaignEx, f.f);
    }
}
