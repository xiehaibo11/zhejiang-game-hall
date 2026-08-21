package com.mbridge.msdk.mbbanner.common.bridge;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Base64;
import com.igexin.sdk.PushBuildConfig;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.l;
import com.mbridge.msdk.foundation.db.s;
import com.mbridge.msdk.foundation.download.download.H5DownLoadManager;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.o;
import com.mbridge.msdk.foundation.tools.ad;
import com.mbridge.msdk.foundation.tools.d;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.bridge.b;
import com.mbridge.msdk.mbjscommon.windvane.h;
import com.meizu.cloud.pushsdk.notification.model.AdvertisementOption;
import com.sigmob.sdk.base.mta.PointCategory;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import com.tkay.expressad.foundation.g.a.f;
import java.io.File;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public final class a extends com.mbridge.msdk.mbjscommon.bridge.a {
    private WeakReference<Context> b;
    private List<CampaignEx> c;
    private String d;
    private String e;
    private int f;
    private com.mbridge.msdk.mbbanner.common.b.a g;
    private BannerExpandDialog h;
    private boolean i = false;

    public a(Context context, String str, String str2) {
        this.d = str;
        this.e = str2;
        this.b = new WeakReference<>(context);
    }

    public final void a(com.mbridge.msdk.mbbanner.common.b.a aVar) {
        if (aVar != null) {
            this.g = aVar;
        }
    }

    public final void a(List<CampaignEx> list) {
        this.c = list;
    }

    public final void a(int i) {
        this.f = i;
    }

    public final void a() {
        if (this.g != null) {
            this.g = null;
        }
        if (this.h != null) {
            this.h = null;
        }
    }

    @Override
    public final void c(Object obj, String str) {
        if (obj != null) {
            try {
                int iOptInt = new JSONObject(str).optInt("isReady", 1);
                h.a().a(obj, b.a(0));
                if (this.g != null) {
                    this.g.b(iOptInt);
                }
            } catch (Throwable th) {
                z.c("BannerJSBridgeImpl", "readyStatus", th);
            }
        }
    }

    @Override
    public final void a(Object obj, String str) {
        z.d("BannerJSBridgeImpl", "BANNER INIT INVOKE");
        try {
            JSONObject jSONObject = new JSONObject();
            d dVar = new d(com.mbridge.msdk.foundation.controller.a.f().j());
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("dev_close_state", this.f);
            jSONObject.put("sdkSetting", jSONObject2);
            jSONObject.put("device", dVar.a());
            jSONObject.put("campaignList", CampaignEx.parseCamplistToJson(this.c));
            com.mbridge.msdk.c.d dVarE = com.mbridge.msdk.c.b.a().e(com.mbridge.msdk.foundation.controller.a.f().k(), this.e);
            if (dVarE == null) {
                dVarE = com.mbridge.msdk.c.d.d(this.e);
            }
            if (!TextUtils.isEmpty(this.d)) {
                dVarE.g(this.d);
            }
            jSONObject.put("unitSetting", dVarE.t());
            String strC = com.mbridge.msdk.c.b.a().c(com.mbridge.msdk.foundation.controller.a.f().k());
            if (!TextUtils.isEmpty(strC)) {
                jSONObject.put("appSetting", new JSONObject(strC));
            }
            h.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Throwable th) {
            z.c("BannerJSBridgeImpl", PointCategory.INIT, th);
        }
    }

    @Override
    public final void b(Object obj, String str) {
        z.d("BannerJSBridgeImpl", "click");
        try {
            if (this.c == null) {
                return;
            }
            CampaignEx campaignEx = null;
            if (this.c != null && this.c.size() > 0) {
                campaignEx = this.c.get(0);
            }
            if (TextUtils.isEmpty(str)) {
                return;
            }
            try {
                JSONObject jSONObjectCampaignToJsonObject = CampaignEx.campaignToJsonObject(campaignEx);
                JSONObject jSONObject = new JSONObject(str).getJSONObject(AdvertisementOption.PRIORITY_VALID_TIME);
                Iterator<String> itKeys = jSONObject.keys();
                while (itKeys.hasNext()) {
                    String next = itKeys.next();
                    jSONObjectCampaignToJsonObject.put(next, jSONObject.getString(next));
                }
                CampaignEx campaignWithBackData = CampaignEx.parseCampaignWithBackData(jSONObjectCampaignToJsonObject);
                String strOptString = jSONObjectCampaignToJsonObject.optString("unitId");
                if (!TextUtils.isEmpty(strOptString)) {
                    campaignWithBackData.setCampaignUnitId(strOptString);
                }
                campaignEx = campaignWithBackData;
            } catch (JSONException e) {
                e.printStackTrace();
            }
            if (this.g != null) {
                this.g.a(campaignEx);
            }
        } catch (Throwable th) {
            z.c("BannerJSBridgeImpl", "click", th);
        }
    }

    @Override
    public final void d(Object obj, String str) {
        z.d("BannerJSBridgeImpl", "toggleCloseBtn");
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            int iOptInt = new JSONObject(str).optInt(CallMraidJS.b);
            if (this.g != null) {
                this.g.a(iOptInt);
            }
        } catch (Throwable th) {
            z.c("BannerJSBridgeImpl", "toggleCloseBtn", th);
        }
    }

    @Override
    public final void e(Object obj, String str) {
        z.d("BannerJSBridgeImpl", "triggerCloseBtn");
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            String strOptString = new JSONObject(str).optString(CallMraidJS.b);
            if (this.g != null) {
                this.g.a(strOptString);
            }
            h.a().a(obj, b.a(0));
        } catch (Throwable th) {
            z.c("BannerJSBridgeImpl", "triggerCloseBtn", th);
            h.a().a(obj, b.a(-1));
        }
    }

    @Override
    public final void i(Object obj, String str) {
        z.a("BannerJSBridgeImpl", "sendImpressions:" + str);
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            JSONArray jSONArray = new JSONArray(str);
            final ArrayList arrayList = new ArrayList();
            for (int i = 0; i < jSONArray.length(); i++) {
                String string = jSONArray.getString(i);
                for (CampaignEx campaignEx : this.c) {
                    if (campaignEx.getId().equals(string)) {
                        com.mbridge.msdk.foundation.same.a.d.a(this.e, campaignEx, f.e);
                        arrayList.add(string);
                    }
                }
            }
            new Thread(new Runnable() {
                @Override
                public final void run() {
                    try {
                        l lVarA = l.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
                        Iterator it = arrayList.iterator();
                        while (it.hasNext()) {
                            lVarA.b((String) it.next());
                        }
                    } catch (Exception unused) {
                        z.d("BannerJSBridgeImpl", "campain can't insert db");
                    }
                }
            }).start();
        } catch (Throwable th) {
            z.c("BannerJSBridgeImpl", "sendImpressions", th);
        }
    }

    @Override
    public final void open(String str) {
        z.d("BannerJSBridgeImpl", PushBuildConfig.sdk_conf_channelid);
        try {
            z.d("BannerJSBridgeImpl", str);
            if (this.c.size() > 1) {
                com.mbridge.msdk.foundation.controller.a.f().j().startActivity(new Intent("android.intent.action.VIEW", Uri.parse(str)));
                str = null;
            }
            if (this.g != null) {
                this.g.a(true, str);
            }
        } catch (Throwable th) {
            z.c("BannerJSBridgeImpl", PushBuildConfig.sdk_conf_channelid, th);
        }
    }

    @Override
    public final void close() {
        z.d("BannerJSBridgeImpl", "close");
        try {
            if (this.g != null) {
                this.g.a();
            }
        } catch (Throwable th) {
            z.c("BannerJSBridgeImpl", "close", th);
        }
    }

    @Override
    public final void unload() {
        close();
    }

    @Override
    public final CampaignEx getMraidCampaign() {
        List<CampaignEx> list = this.c;
        if (list == null || list.size() <= 0) {
            return null;
        }
        return this.c.get(0);
    }

    @Override
    public final void useCustomClose(boolean z) {
        int i = z ? 2 : 1;
        try {
            if (this.g != null) {
                this.g.a(i);
            }
        } catch (Throwable th) {
            z.c("BannerJSBridgeImpl", "useCustomClose", th);
        }
    }

    @Override
    public final void expand(String str, boolean z) {
        Context context;
        try {
            String bannerUrl = "";
            if (getMraidCampaign() != null) {
                if (TextUtils.isEmpty(getMraidCampaign().getBannerHtml())) {
                    bannerUrl = getMraidCampaign().getBannerUrl();
                } else {
                    bannerUrl = "file:////" + getMraidCampaign().getBannerHtml();
                }
            }
            Bundle bundle = new Bundle();
            if (!TextUtils.isEmpty(str)) {
                bannerUrl = str;
            }
            bundle.putString("url", bannerUrl);
            bundle.putBoolean("shouldUseCustomClose", z);
            if (this.b != null && (context = this.b.get()) != null) {
                if (this.h != null && this.h.isShowing()) {
                    return;
                }
                BannerExpandDialog bannerExpandDialog = new BannerExpandDialog(context, bundle, this.g);
                this.h = bannerExpandDialog;
                bannerExpandDialog.setCampaignList(this.e, this.c);
                this.h.show();
            }
            if (this.g != null) {
                this.g.a(true);
            }
            com.mbridge.msdk.mbbanner.common.d.a.a(this.e, getMraidCampaign(), str);
        } catch (Throwable th) {
            z.c("BannerJSBridgeImpl", "expand", th);
        }
    }

    @Override
    public final void j(Object obj, String str) {
        if (TextUtils.isEmpty(str)) {
            b.a(obj, "params is empty");
            return;
        }
        try {
            a(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.a("BannerJSBridgeImpl", th.getMessage());
        }
    }

    private static void a(Object obj, JSONObject jSONObject) {
        String str;
        String str2;
        String str3;
        String str4;
        int i;
        boolean z;
        String str5;
        File file;
        JSONObject jSONObject2 = new JSONObject();
        String str6 = "message";
        String str7 = "code";
        int i2 = 1;
        if (jSONObject == null) {
            try {
                jSONObject2.put("code", 1);
                jSONObject2.put("message", "params is null");
                h.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
                return;
            } catch (JSONException e) {
                z.a("BannerJSBridgeImpl", e.getMessage());
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
                int i3 = 0;
                while (i3 < length) {
                    JSONObject jSONObject3 = jSONArray.getJSONObject(i3);
                    String strOptString = jSONObject3.optString("ref", "");
                    int i4 = jSONObject3.getInt("type");
                    JSONObject jSONObject4 = new JSONObject();
                    JSONArray jSONArray3 = jSONArray;
                    if (i4 == i2 && !TextUtils.isEmpty(strOptString)) {
                        JSONObject jSONObject5 = new JSONObject();
                        o oVarA = s.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j())).a(strOptString);
                        if (oVarA != null) {
                            i = length;
                            z.a("BannerJSBridgeImpl", "VideoBean not null");
                            jSONObject5.put("type", 1);
                            str3 = str6;
                            try {
                                jSONObject5.put("videoDataLength", oVarA.c());
                                String strE = oVarA.e();
                                str4 = str7;
                                if (TextUtils.isEmpty(strE)) {
                                    try {
                                        z.a("BannerJSBridgeImpl", "VideoPath null");
                                        jSONObject5.put("path", "");
                                        jSONObject5.put("path4Web", "");
                                    } catch (Throwable th) {
                                        th = th;
                                        str = str3;
                                        str2 = str4;
                                    }
                                } else {
                                    z.a("BannerJSBridgeImpl", "VideoPath not null");
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
                                jSONArray2.put(jSONObject4);
                            } catch (Throwable th2) {
                                th = th2;
                                str2 = str7;
                                str = str3;
                                jSONObject2.put(str2, 1);
                                jSONObject2.put(str, th.getLocalizedMessage());
                                h.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
                            }
                        } else {
                            str3 = str6;
                            str4 = str7;
                            i = length;
                            z = false;
                            z.a("BannerJSBridgeImpl", "VideoBean null");
                        }
                    } else {
                        str3 = str6;
                        str4 = str7;
                        i = length;
                        z = false;
                        if (i4 == 2 && !TextUtils.isEmpty(strOptString)) {
                            JSONObject jSONObject6 = new JSONObject();
                            jSONObject6.put("type", 2);
                            jSONObject6.put("path", H5DownLoadManager.getInstance().getResAddress(strOptString) == null ? "" : H5DownLoadManager.getInstance().getH5ResAddress(strOptString));
                            jSONObject4.put(strOptString, jSONObject6);
                            jSONArray2.put(jSONObject4);
                        } else if (i4 == 3 && !TextUtils.isEmpty(strOptString)) {
                            try {
                                file = new File(strOptString);
                            } catch (Throwable th3) {
                                if (MBridgeConstans.DEBUG) {
                                    th3.printStackTrace();
                                }
                            }
                            if (file.exists() && file.isFile() && file.canRead()) {
                                z.a("BannerJSBridgeImpl", "getFileInfo Mraid file " + strOptString);
                                str5 = "file:////" + strOptString;
                            } else {
                                str5 = "";
                            }
                            JSONObject jSONObject7 = new JSONObject();
                            jSONObject7.put("type", 3);
                            jSONObject7.put("path", str5);
                            jSONObject4.put(strOptString, jSONObject7);
                            jSONArray2.put(jSONObject4);
                        } else if (i4 == 4 && !TextUtils.isEmpty(strOptString)) {
                            JSONObject jSONObject8 = new JSONObject();
                            jSONObject8.put("type", 4);
                            jSONObject8.put("path", ad.a(strOptString) == null ? "" : ad.a(strOptString));
                            jSONObject4.put(strOptString, jSONObject8);
                            jSONArray2.put(jSONObject4);
                        }
                    }
                    i3++;
                    jSONArray = jSONArray3;
                    length = i;
                    str6 = str3;
                    str7 = str4;
                    i2 = 1;
                }
                str3 = str6;
                str4 = str7;
                jSONObject2.put("resource", jSONArray2);
                h.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
                return;
            }
            str3 = "message";
            str2 = "code";
            try {
                jSONObject2.put(str2, 1);
                str = str3;
                try {
                    try {
                        jSONObject2.put(str, "resource is null");
                        h.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
                        return;
                    } catch (JSONException e2) {
                        e = e2;
                        z.a("BannerJSBridgeImpl", e.getMessage());
                        return;
                    }
                } catch (Throwable th4) {
                    th = th4;
                }
            } catch (JSONException e3) {
                e = e3;
                str = str3;
            } catch (Throwable th5) {
                th = th5;
                str = str3;
            }
        } catch (Throwable th6) {
            th = th6;
            str = str6;
            str2 = str7;
        }
        try {
            jSONObject2.put(str2, 1);
            jSONObject2.put(str, th.getLocalizedMessage());
            h.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
        } catch (JSONException e4) {
            z.a("BannerJSBridgeImpl", e4.getMessage());
        }
    }
}
