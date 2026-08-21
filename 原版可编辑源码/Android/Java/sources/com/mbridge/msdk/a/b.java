package com.mbridge.msdk.a;

import android.content.Context;
import android.text.TextUtils;
import android.webkit.WebView;
import com.iab.omid.library.mmadbridge.Omid;
import com.iab.omid.library.mmadbridge.adsession.AdSession;
import com.iab.omid.library.mmadbridge.adsession.AdSessionConfiguration;
import com.iab.omid.library.mmadbridge.adsession.AdSessionContext;
import com.iab.omid.library.mmadbridge.adsession.CreativeType;
import com.iab.omid.library.mmadbridge.adsession.ImpressionType;
import com.iab.omid.library.mmadbridge.adsession.Owner;
import com.iab.omid.library.mmadbridge.adsession.Partner;
import com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.b.c;
import com.mbridge.msdk.foundation.same.b.e;
import com.mbridge.msdk.foundation.same.report.d;
import com.mbridge.msdk.foundation.tools.x;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.out.MBConfiguration;
import java.io.File;
import java.net.MalformedURLException;
import java.net.URL;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public final class b {
    public static void a(final Context context) {
        if (TextUtils.isEmpty(MBridgeConstans.OMID_JS_SERVICE_URL)) {
            MBridgeConstans.OMID_JS_SERVICE_CONTENT = "";
            new d(context).a("", "", "", "", "fetch OM failed, OMID_JS_SERVICE_URL null");
        } else {
            if (context == null) {
                return;
            }
            try {
                new a(context.getApplicationContext()).get(0, MBridgeConstans.OMID_JS_SERVICE_URL, null, new com.mbridge.msdk.foundation.same.net.b.a() {
                    @Override
                    public final void a(final String str) {
                        MBridgeConstans.OMID_JS_SERVICE_CONTENT = str;
                        z.a("OMSDK", "fetch OMJSContent success, content = " + str);
                        new Thread(new Runnable() {
                            @Override
                            public final void run() throws Throwable {
                                try {
                                    File file = new File(e.b(c.j), "/omsdk/om_js_content.txt");
                                    if (file.exists()) {
                                        file.delete();
                                    }
                                    x.a(str.getBytes(), file);
                                } catch (Exception e) {
                                    z.a("OMSDK", e.getMessage());
                                }
                            }
                        }).start();
                    }

                    @Override
                    public final void b(String str) {
                        z.a("OMSDK", "fetch OMJSContent failed, errorCode = " + str);
                        new d(context).a("", "", "", "", "fetch OM failed, request failed");
                    }
                });
            } catch (Exception e) {
                z.d("OMSDK", e.getMessage());
            }
        }
    }

    public static void b(final Context context) {
        if (TextUtils.isEmpty(MBridgeConstans.OMID_JS_H5_URL)) {
            MBridgeConstans.OMID_JS_H5_CONTENT = "";
            new d(context).a("", "", "", "", "fetch OM failed, OMID_JS_H5_URL null");
        } else {
            if (context == null) {
                return;
            }
            try {
                new a(context.getApplicationContext()).get(0, MBridgeConstans.OMID_JS_H5_URL, null, new com.mbridge.msdk.foundation.same.net.b.a() {
                    @Override
                    public final void a(final String str) {
                        MBridgeConstans.OMID_JS_H5_CONTENT = str;
                        z.a("OMSDK", "fetch OMJSH5Content success, content = " + str);
                        new Thread(new Runnable() {
                            @Override
                            public final void run() throws Throwable {
                                try {
                                    File file = new File(e.b(c.j), "/omsdk/om_js_h5_content.txt");
                                    if (file.exists()) {
                                        file.delete();
                                    }
                                    x.a(str.getBytes(), file);
                                } catch (Exception e) {
                                    z.a("OMSDK", e.getMessage());
                                }
                            }
                        }).start();
                    }

                    @Override
                    public final void b(String str) {
                        z.a("OMSDK", "fetch OMJSH5Content failed, errorCode = " + str);
                        new d(context).a("", "", "", "", "fetch OM H5 failed, request failed");
                    }
                });
            } catch (Exception e) {
                z.d("OMSDK", e.getMessage());
            }
        }
    }

    private static void c(Context context) {
        if (Omid.isActive()) {
            return;
        }
        Omid.activate(context);
    }

    private static List<VerificationScriptResource> a(String str, Context context, String str2, String str3, String str4, String str5) {
        VerificationScriptResource verificationScriptResourceCreateVerificationScriptResourceWithParameters;
        ArrayList arrayList = new ArrayList();
        try {
            JSONArray jSONArray = new JSONArray(str);
            if (str != null) {
                for (int i = 0; i < jSONArray.length(); i++) {
                    JSONObject jSONObjectOptJSONObject = jSONArray.optJSONObject(i);
                    String strOptString = jSONObjectOptJSONObject.optString("vkey", "");
                    URL url = new URL(jSONObjectOptJSONObject.optString("et_url", ""));
                    String strOptString2 = jSONObjectOptJSONObject.optString("verification_p", "");
                    if (TextUtils.isEmpty(strOptString2)) {
                        if (TextUtils.isEmpty(strOptString)) {
                            verificationScriptResourceCreateVerificationScriptResourceWithParameters = VerificationScriptResource.createVerificationScriptResourceWithoutParameters(url);
                        } else {
                            verificationScriptResourceCreateVerificationScriptResourceWithParameters = VerificationScriptResource.createVerificationScriptResourceWithoutParameters(url);
                        }
                    } else {
                        verificationScriptResourceCreateVerificationScriptResourceWithParameters = VerificationScriptResource.createVerificationScriptResourceWithParameters(strOptString, url, strOptString2);
                    }
                    arrayList.add(verificationScriptResourceCreateVerificationScriptResourceWithParameters);
                }
            }
        } catch (IllegalArgumentException e) {
            z.d("OMSDK", e.getMessage());
            new d(context).a(str2, str5, str3, str4, "failed, exception " + e.getMessage());
        } catch (MalformedURLException e2) {
            z.d("OMSDK", e2.getMessage());
            new d(context).a(str2, str5, str3, str4, "failed, exception " + e2.getMessage());
        } catch (JSONException e3) {
            z.d("OMSDK", e3.getMessage());
            new d(context).a(str2, str5, str3, str4, "failed, exception " + e3.getMessage());
        }
        return arrayList;
    }

    public static AdSession a(Context context, WebView webView, String str, CampaignEx campaignEx) {
        if (TextUtils.isEmpty(MBridgeConstans.OMID_JS_SERVICE_CONTENT)) {
            MBridgeConstans.OMID_JS_SERVICE_CONTENT = a();
        }
        if (TextUtils.isEmpty(MBridgeConstans.OMID_JS_H5_CONTENT)) {
            MBridgeConstans.OMID_JS_H5_CONTENT = b();
        }
        if (TextUtils.isEmpty(MBridgeConstans.OMID_JS_SERVICE_CONTENT) || TextUtils.isEmpty(campaignEx.getOmid())) {
            z.a("OMSDK", "createNativeAdSession: TextUtils.isEmpty(omid) = " + TextUtils.isEmpty(campaignEx.getOmid()) + " TextUtils.isEmpty(MIntegralConstans.OMID_JS_SERVICE_CONTENT) = " + TextUtils.isEmpty(MBridgeConstans.OMID_JS_SERVICE_CONTENT));
            new d(context).a(campaignEx.getRequestId(), campaignEx.getRequestIdNotice(), campaignEx.getId(), campaignEx.getCampaignUnitId(), "failed, OMID_JS_SERVICE_CONTENT null or omid null");
            return null;
        }
        CreativeType creativeType = CreativeType.DEFINED_BY_JAVASCRIPT;
        c(context);
        AdSession adSessionCreateAdSession = AdSession.createAdSession(AdSessionConfiguration.createAdSessionConfiguration(creativeType, ImpressionType.BEGIN_TO_RENDER, Owner.JAVASCRIPT, (creativeType == CreativeType.HTML_DISPLAY || creativeType == CreativeType.DEFINED_BY_JAVASCRIPT) ? Owner.NONE : Owner.NATIVE, false), AdSessionContext.createHtmlAdSessionContext(Partner.createPartner("Mintegral", MBConfiguration.SDK_VERSION), webView, null, null));
        adSessionCreateAdSession.registerAdView(webView);
        return adSessionCreateAdSession;
    }

    public static AdSession a(Context context, boolean z, String str, String str2, String str3, String str4, String str5, String str6) {
        if (TextUtils.isEmpty(MBridgeConstans.OMID_JS_SERVICE_CONTENT)) {
            MBridgeConstans.OMID_JS_SERVICE_CONTENT = a();
        }
        AdSession adSessionCreateAdSession = null;
        if (TextUtils.isEmpty(MBridgeConstans.OMID_JS_SERVICE_CONTENT) || TextUtils.isEmpty(str)) {
            z.a("OMSDK", "createNativeAdSession: TextUtils.isEmpty(omid) = " + TextUtils.isEmpty(str) + " TextUtils.isEmpty(MIntegralConstans.OMID_JS_SERVICE_CONTENT) = " + TextUtils.isEmpty(MBridgeConstans.OMID_JS_SERVICE_CONTENT));
            new d(context).a(str2, str6, str3, str4, "failed, OMID_JS_SERVICE_CONTENT null or omid null");
            return null;
        }
        try {
            c(context);
        } catch (IllegalArgumentException e) {
            e = e;
        } catch (Exception e2) {
            e = e2;
        }
        try {
            adSessionCreateAdSession = AdSession.createAdSession(AdSessionConfiguration.createAdSessionConfiguration(CreativeType.NATIVE_DISPLAY, ImpressionType.LOADED, Owner.NATIVE, z ? Owner.NONE : Owner.NATIVE, false), AdSessionContext.createNativeAdSessionContext(Partner.createPartner("Mintegral", MBConfiguration.SDK_VERSION), MBridgeConstans.OMID_JS_SERVICE_CONTENT, a(str, context, str2, str3, str4, str6), str5, str2));
            z.a("OMSDK", "adSession create success");
            return adSessionCreateAdSession;
        } catch (IllegalArgumentException e3) {
            e = e3;
            z.d("OMSDK", e.getMessage());
            new d(context).a(str2, str6, str3, str4, "failed, exception " + e.getMessage());
            return adSessionCreateAdSession;
        } catch (Exception e4) {
            e = e4;
            z.d("OMSDK", e.getMessage());
            new d(context).a(str2, str6, str3, str4, "failed, exception " + e.getMessage());
            return adSessionCreateAdSession;
        }
    }

    private static String a() {
        try {
            return x.a(new File(e.b(c.j), "/omsdk/om_js_content.txt"));
        } catch (Exception e) {
            z.a("OMSDK", e.getMessage());
            return "";
        }
    }

    private static String b() {
        try {
            File file = new File(e.b(c.j), "/omsdk/om_js_h5_content.txt");
            return file.exists() ? x.a(file) : "";
        } catch (Exception e) {
            z.a("OMSDK", e.getMessage());
            return "";
        }
    }

    public static String a(String str) {
        if (TextUtils.isEmpty(MBridgeConstans.OMID_JS_H5_CONTENT)) {
            MBridgeConstans.OMID_JS_H5_CONTENT = b();
        }
        return TextUtils.isEmpty(str) ? str : str.replace("/*OMSDK_INSERT_HERE*/", MBridgeConstans.OMID_JS_H5_CONTENT).replace("[INSERT RESOURCE URL]", "https://s3-us-west-2.amazonaws.com/omsdk-files/compliance-js/omid-validation-verification-script-v1.js");
    }
}
