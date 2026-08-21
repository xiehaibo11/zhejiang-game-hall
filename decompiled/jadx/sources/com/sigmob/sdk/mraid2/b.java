package com.sigmob.sdk.mraid2;

import android.os.Build;
import android.text.TextUtils;
import android.util.DisplayMetrics;
import android.util.Log;
import android.view.View;
import android.webkit.ConsoleMessage;
import android.webkit.JavascriptInterface;
import android.webkit.JsPromptResult;
import android.webkit.JsResult;
import android.webkit.ValueCallback;
import android.webkit.WebChromeClient;
import android.webkit.WebView;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.bykv.vk.openvk.downloadnew.core.TTDownloadField;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.json.JSONSerializer;
import com.czhj.sdk.common.network.Networking;
import com.czhj.sdk.common.utils.Dips;
import com.czhj.sdk.common.utils.ReflectionUtil;
import com.czhj.sdk.logger.SigmobLog;
import com.github.lzyzsd.jsbridge.BridgeUtil;
import com.igexin.sdk.PushBuildConfig;
import com.sigmob.sdk.Sigmob;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.LoadAdRequest;
import com.sigmob.sdk.base.models.rtb.Ad;
import com.sigmob.sdk.base.models.rtb.BidResponse;
import com.sigmob.sdk.base.models.rtb.MaterialMeta;
import com.sigmob.sdk.base.models.rtb.Template;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.sdk.base.mta.PointEntitySigmob;
import com.sigmob.sdk.base.network.d;
import com.sigmob.sdk.mraid2.j;
import com.tkay.core.api.TYAdConst;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import com.tkay.expressad.foundation.d.r;
import com.vivo.push.PushClientConstants;
import com.xiaomi.mipush.sdk.Constants;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import org.bouncycastle.math.ec.Tnaf;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f5046a = "Mraid2Bridge";
    private static j e;
    private List<BaseAdUnit> b;
    private InterfaceC0340b c;
    private e d;
    private List<BaseAdUnit> f;

    static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final WeakReference<b> f5052a;

        public a(b bVar) {
            this.f5052a = new WeakReference<>(bVar);
        }

        public b a() {
            return this.f5052a.get();
        }

        @JavascriptInterface
        public String addDclog(JSONObject jSONObject) {
            try {
                if (jSONObject == null) {
                    return b.a(400, "not params", (Object) null);
                }
                Log.d(b.f5046a, "----------addDclog----------" + jSONObject);
                final JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("data");
                if (jSONObjectOptJSONObject == null || !jSONObjectOptJSONObject.has("_ac_type")) {
                    return b.a(300, "_ac_type is empty", (Object) null);
                }
                String strOptString = jSONObjectOptJSONObject.optString("_ac_type");
                BaseAdUnit baseAdUnitB = a() != null ? a().b(jSONObject.optString("vid")) : null;
                z.a(strOptString, baseAdUnitB, baseAdUnitB == null ? a().j() : null, new z.a() { // from class: com.sigmob.sdk.mraid2.b.a.1
                    @Override // com.sigmob.sdk.base.common.z.a
                    public void a(Object obj) {
                        HashMap map = new HashMap();
                        Iterator<String> itKeys = jSONObjectOptJSONObject.keys();
                        while (itKeys.hasNext()) {
                            String next = itKeys.next();
                            if (!next.equalsIgnoreCase("_ac_type")) {
                                map.put(next, jSONObjectOptJSONObject.optString(next));
                            }
                        }
                        if (obj instanceof PointEntitySigmob) {
                            ((PointEntitySigmob) obj).setOptions(map);
                        }
                    }
                });
                return b.a(200, "add dc log success", (Object) null);
            } catch (Throwable th) {
                return b.a(500, th.toString(), (Object) null);
            }
        }

        @JavascriptInterface
        public String func(String str) {
            try {
                JSONObject jSONObject = new JSONObject(str);
                String string = jSONObject.has(com.alipay.sdk.authjs.a.f) ? jSONObject.getString(com.alipay.sdk.authjs.a.f) : null;
                if (TextUtils.isEmpty(string)) {
                    return b.a(400, "func is empty", (Object) null);
                }
                ReflectionUtil.MethodBuilder methodBuilder = new ReflectionUtil.MethodBuilder(this, string.replace(Constants.COLON_SEPARATOR, ""));
                methodBuilder.addParam(JSONObject.class, jSONObject);
                return (String) methodBuilder.execute();
            } catch (Throwable th) {
                return b.a(500, th.getMessage(), (Object) null);
            }
        }

        @JavascriptInterface
        public String getDeviceInfo() {
            try {
                Log.d(b.f5046a, "---------getDeviceInfo----------");
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("clientType", ClientMetadata.getDeviceModel());
                jSONObject.put("osVersion", ClientMetadata.getDeviceOsVersion());
                jSONObject.put("appVersion", ClientMetadata.getInstance().getAppVersion());
                jSONObject.put("deviceWidth", ClientMetadata.getInstance().getDisplayMetrics().widthPixels);
                jSONObject.put("deviceHeight", ClientMetadata.getInstance().getDisplayMetrics().heightPixels);
                jSONObject.put("screenDensity", ClientMetadata.getInstance().getDensityDpi());
                jSONObject.put("networkType", ClientMetadata.getInstance().getActiveNetworkType());
                jSONObject.put(PushClientConstants.TAG_PKG_NAME, ClientMetadata.getInstance().getAppPackageName());
                jSONObject.put(TTDownloadField.TT_USERAGENT, Networking.getUserAgent());
                jSONObject.put(IUserFeature.LOGIN_SUC_RS_UID, ClientMetadata.getUid());
                jSONObject.put("udid", ClientMetadata.getInstance().getAndroidId());
                JSONObject jSONObject2 = new JSONObject();
                jSONObject2.put("imei", ClientMetadata.getInstance().getDeviceId());
                jSONObject2.put("androidId", ClientMetadata.getInstance().getAndroidId());
                jSONObject2.put("googleId", ClientMetadata.getInstance().getAdvertisingId());
                jSONObject2.put("oaid", ClientMetadata.getInstance().getOAID());
                jSONObject.put("android", jSONObject2);
                return jSONObject.toString();
            } catch (Throwable th) {
                th.printStackTrace();
                return null;
            }
        }

        /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
        @JavascriptInterface
        public String handleMacro(JSONObject jSONObject) {
            if (jSONObject == null) {
                return null;
            }
            try {
                Log.d(b.f5046a, "-----------handleMacro---------" + jSONObject);
                String strOptString = jSONObject.optString("event");
                JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("args");
                String strOptString2 = jSONObjectOptJSONObject.optString("key");
                String strOptString3 = jSONObjectOptJSONObject.optString("value");
                BaseAdUnit baseAdUnitB = a() != null ? a().b(jSONObjectOptJSONObject.optString("vid")) : null;
                byte b = -1;
                switch (strOptString.hashCode()) {
                    case -1253019733:
                        if (strOptString.equals("addMacro")) {
                            b = 0;
                        }
                        break;
                    case -750002817:
                        if (strOptString.equals("clearMacro")) {
                            b = 3;
                        }
                        break;
                    case -310745688:
                        if (strOptString.equals("removeMacro")) {
                            b = 2;
                        }
                        break;
                    case 1959477782:
                        if (strOptString.equals("getMacro")) {
                            b = 1;
                        }
                        break;
                }
                if (b == 0) {
                    if (!TextUtils.isEmpty(strOptString2) && !TextUtils.isEmpty(strOptString3)) {
                        (baseAdUnitB != null ? baseAdUnitB.getMacroCommon() : Sigmob.getInstance().getMacroCommon()).addMarcoKey(strOptString2, strOptString3);
                    }
                    return null;
                }
                if (b == 1) {
                    if (TextUtils.isEmpty(strOptString2)) {
                        return null;
                    }
                    return baseAdUnitB != null ? baseAdUnitB.getMacroCommon().getMarcoKey(strOptString2) : Sigmob.getInstance().getMacroCommon().getMarcoKey(strOptString2);
                }
                if (b == 2) {
                    if (TextUtils.isEmpty(strOptString2)) {
                        return null;
                    }
                    (baseAdUnitB != null ? baseAdUnitB.getMacroCommon() : Sigmob.getInstance().getMacroCommon()).removeMarcoKey(strOptString2);
                } else if (b == 3) {
                    (baseAdUnitB != null ? baseAdUnitB.getMacroCommon() : Sigmob.getInstance().getMacroCommon()).clearMacro();
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
            return null;
        }

        @JavascriptInterface
        public void postMessage(final String str) {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            Log.d(b.f5046a, "-----------postMessage---------" + str);
            final b bVarA = a();
            if (bVarA == null || bVarA.d == null) {
                return;
            }
            bVarA.d.post(new Runnable() { // from class: com.sigmob.sdk.mraid2.b.a.3
                @Override // java.lang.Runnable
                public void run() {
                    b bVar = bVarA;
                    bVar.a(bVar, str);
                }
            });
        }

        /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
        @JavascriptInterface
        public String storage(String str) {
            try {
            } catch (Exception e) {
                e.printStackTrace();
            }
            if (TextUtils.isEmpty(str)) {
                return null;
            }
            Log.d(b.f5046a, "-----------storage---------" + str);
            JSONObject jSONObject = new JSONObject(str);
            String strOptString = jSONObject.optString("event");
            JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("args");
            int iOptInt = jSONObjectOptJSONObject.optInt("type");
            String strOptString2 = jSONObjectOptJSONObject.optString("key");
            String strOptString3 = jSONObjectOptJSONObject.optString("value");
            if (iOptInt == 1 || iOptInt == 2) {
                if (b.e == null) {
                    j unused = b.e = new j(a().d.getContext());
                }
                byte b = -1;
                switch (strOptString.hashCode()) {
                    case -1106363674:
                        if (strOptString.equals("length")) {
                            b = 4;
                        }
                        break;
                    case -625809843:
                        if (strOptString.equals("addEventListener")) {
                            b = 5;
                        }
                        break;
                    case -75439223:
                        if (strOptString.equals("getItem")) {
                            b = 1;
                        }
                        break;
                    case 94746189:
                        if (strOptString.equals("clear")) {
                            b = 3;
                        }
                        break;
                    case 1098253751:
                        if (strOptString.equals("removeItem")) {
                            b = 2;
                        }
                        break;
                    case 1984670357:
                        if (strOptString.equals("setItem")) {
                            b = 0;
                        }
                        break;
                }
                if (b == 0) {
                    b.e.a(iOptInt, strOptString2, strOptString3);
                } else {
                    if (b == 1) {
                        return b.e.a(iOptInt, strOptString2);
                    }
                    if (b == 2) {
                        b.e.b(iOptInt, strOptString2);
                    } else if (b == 3) {
                        b.e.a(iOptInt);
                    } else {
                        if (b == 4) {
                            return String.valueOf(b.e.b(iOptInt));
                        }
                        if (b == 5) {
                            b.e.a(iOptInt, strOptString2, new j.a() { // from class: com.sigmob.sdk.mraid2.b.a.2
                                @Override // com.sigmob.sdk.mraid2.j.a
                                public void a(final JSONObject jSONObject2) {
                                    if (a.this.a() == null || a.this.a().a() == null) {
                                        return;
                                    }
                                    a.this.a().a().post(new Runnable() { // from class: com.sigmob.sdk.mraid2.b.a.2.1
                                        @Override // java.lang.Runnable
                                        public void run() {
                                            a.this.a().b(jSONObject2);
                                        }
                                    });
                                }
                            });
                        }
                    }
                }
            }
            return null;
        }

        @JavascriptInterface
        public String tracking(JSONObject jSONObject) {
            String strOptString;
            boolean zOptBoolean;
            boolean zOptBoolean2;
            int iOptInt;
            try {
                if (jSONObject == null) {
                    return b.a(400, "not params", (Object) null);
                }
                Log.d(b.f5046a, "---------tracking----------" + jSONObject);
                String strOptString2 = jSONObject.optString("event");
                JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("urls");
                JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("data");
                if (jSONObjectOptJSONObject != null) {
                    zOptBoolean = jSONObjectOptJSONObject.optBoolean("inQueue");
                    zOptBoolean2 = jSONObjectOptJSONObject.optBoolean("statistic");
                    iOptInt = jSONObjectOptJSONObject.optInt("retry");
                    strOptString = jSONObjectOptJSONObject.optString("vid");
                } else {
                    strOptString = "";
                    zOptBoolean = false;
                    zOptBoolean2 = false;
                    iOptInt = 0;
                }
                BaseAdUnit baseAdUnitB = a() != null ? a().b(strOptString) : null;
                if (jSONArrayOptJSONArray == null || jSONArrayOptJSONArray.length() <= 0) {
                    return b.a(300, "urls is empty", (Object) null);
                }
                for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                    com.sigmob.sdk.base.common.g gVar = new com.sigmob.sdk.base.common.g(jSONArrayOptJSONArray.optString(i), strOptString2, baseAdUnitB != null ? baseAdUnitB.getRequestId() : "");
                    gVar.a(Integer.valueOf(iOptInt));
                    gVar.a("js");
                    com.sigmob.sdk.base.network.f.a(gVar, baseAdUnitB, false, zOptBoolean, zOptBoolean2);
                }
                return b.a(200, "tracking success", (Object) null);
            } catch (Throwable th) {
                return b.a(500, "unknown error: " + th.getMessage(), (Object) null);
            }
        }
    }

    /* JADX INFO: renamed from: com.sigmob.sdk.mraid2.b$b, reason: collision with other inner class name */
    public interface InterfaceC0340b {
        void a();

        void a(BaseAdUnit baseAdUnit, JSONObject jSONObject);

        void a(String str);

        void a(String str, JSONObject jSONObject);

        void a(JSONObject jSONObject);

        void b();

        void b(String str, JSONObject jSONObject);

        void b(JSONObject jSONObject);

        void c();

        void c(String str, JSONObject jSONObject);

        void c(JSONObject jSONObject);

        void d(JSONObject jSONObject);

        void e(JSONObject jSONObject);
    }

    public interface c {
        void a(e eVar, int i, int i2);
    }

    b(List<BaseAdUnit> list) {
        LinkedList linkedList = new LinkedList();
        this.f = linkedList;
        this.b = list;
        linkedList.addAll(list);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public BidResponse a(List<BaseAdUnit> list) {
        Template templateBuild;
        ArrayList arrayList = new ArrayList();
        for (int i = 0; i < list.size(); i++) {
            Ad ad = list.get(i).getAd();
            ArrayList arrayList2 = new ArrayList();
            if (ad != null && ad.materials != null && ad.materials.size() > 0) {
                MaterialMeta.Builder builderNewBuilder = ad.materials.get(0).newBuilder();
                if (builderNewBuilder.main_template != null && builderNewBuilder.main_template.type.intValue() == 2) {
                    Template templateBuild2 = builderNewBuilder.main_template.newBuilder().context(null).build();
                    templateBuild2.templateId = builderNewBuilder.main_template.templateId;
                    builderNewBuilder.main_template(templateBuild2);
                }
                if (builderNewBuilder.sub_template != null && builderNewBuilder.sub_template.type.intValue() == 2) {
                    Template templateBuild3 = builderNewBuilder.sub_template.newBuilder().context(null).build();
                    templateBuild3.templateId = builderNewBuilder.sub_template.templateId;
                    builderNewBuilder.sub_template(templateBuild3);
                }
                arrayList2.add(builderNewBuilder.html_snippet(null).build());
            }
            arrayList.add(ad.newBuilder().materials(arrayList2).build());
        }
        BidResponse.Builder builder = new BidResponse.Builder();
        if (list.get(0) != null) {
            if (list.get(0).scene != null) {
                if (list.get(0).scene.type.intValue() == 2) {
                    templateBuild = list.get(0).scene.newBuilder().context(null).build();
                    templateBuild.templateId = list.get(0).scene.templateId;
                } else {
                    templateBuild = list.get(0).scene.newBuilder().build();
                }
                builder.scene(templateBuild);
            }
            if (list.get(0).slotAdSetting != null) {
                builder.slot_ad_setting(list.get(0).slotAdSetting.newBuilder().build());
            }
            if (list.get(0).bidding_response != null) {
                builder.bidding_response(list.get(0).bidding_response.newBuilder().build());
            }
            builder.request_id(list.get(0).getRequestId());
            builder.uid(list.get(0).uid);
            builder.expiration_time(Integer.valueOf(list.get(0).expiration_time));
        }
        return builder.ads(arrayList).build();
    }

    public static String a(int i, String str, Object obj) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", i);
            if (!TextUtils.isEmpty(str)) {
                jSONObject.put("message", str);
            }
            if (obj != null) {
                jSONObject.put("data", obj);
            }
            return jSONObject.toString();
        } catch (Throwable th) {
            return th.getMessage();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    public void a(final b bVar, String str) {
        try {
            JSONObject jSONObject = new JSONObject(str);
            String strOptString = jSONObject.optString("event");
            String strOptString2 = jSONObject.optString("subEvent");
            JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("args");
            byte b = -1;
            switch (strOptString.hashCode()) {
                case -1608145821:
                    if (strOptString.equals("touchStart")) {
                        b = Tnaf.POW_2_WIDTH;
                    }
                    break;
                case -1347417095:
                    if (strOptString.equals("useScrollView")) {
                        b = 10;
                    }
                    break;
                case -1219368489:
                    if (strOptString.equals("dispatch_after")) {
                        b = 1;
                    }
                    break;
                case -934326481:
                    if (strOptString.equals("reward")) {
                        b = 6;
                    }
                    break;
                case -840442113:
                    if (strOptString.equals("unload")) {
                        b = 5;
                    }
                    break;
                case -819563236:
                    if (strOptString.equals("touchEnd")) {
                        b = 18;
                    }
                    break;
                case -723150523:
                    if (strOptString.equals("mraidJsLoaded")) {
                        b = 0;
                    }
                    break;
                case -309701417:
                    if (strOptString.equals("curPlayAd")) {
                        b = 7;
                    }
                    break;
                case 3417674:
                    if (strOptString.equals(PushBuildConfig.sdk_conf_channelid)) {
                        b = 3;
                    }
                    break;
                case 40710404:
                    if (strOptString.equals("addSubview")) {
                        b = 8;
                    }
                    break;
                case 94756344:
                    if (strOptString.equals("close")) {
                        b = 4;
                    }
                    break;
                case 110364485:
                    if (strOptString.equals("timer")) {
                        b = 12;
                    }
                    break;
                case 112408642:
                    if (strOptString.equals("vpaid")) {
                        b = 13;
                    }
                    break;
                case 363583408:
                    if (strOptString.equals("touchMove")) {
                        b = 17;
                    }
                    break;
                case 692531200:
                    if (strOptString.equals("mraidLoadAd")) {
                        b = 2;
                    }
                    break;
                case 1118509956:
                    if (strOptString.equals("animation")) {
                        b = 15;
                    }
                    break;
                case 1182268276:
                    if (strOptString.equals("belowSubview")) {
                        b = 9;
                    }
                    break;
                case 1223471129:
                    if (strOptString.equals("webView")) {
                        b = 14;
                    }
                    break;
                case 1614272768:
                    if (strOptString.equals("useCustomClose")) {
                        b = 11;
                    }
                    break;
            }
            switch (b) {
                case 0:
                    i();
                    return;
                case 1:
                    final String strOptString3 = jSONObjectOptJSONObject.optString("event");
                    int iOptInt = jSONObjectOptJSONObject.optInt("delay");
                    if (TextUtils.isEmpty(strOptString3) || iOptInt < 0) {
                        return;
                    }
                    bVar.a().postDelayed(new Runnable() { // from class: com.sigmob.sdk.mraid2.b.3
                        @Override // java.lang.Runnable
                        public void run() {
                            bVar.f(strOptString3);
                        }
                    }, iOptInt);
                    return;
                case 2:
                    final String strOptString4 = jSONObjectOptJSONObject.optString("event");
                    JSONObject jSONObjectOptJSONObject2 = jSONObjectOptJSONObject.optJSONObject("data");
                    HashMap map = new HashMap();
                    if (jSONObjectOptJSONObject2 != null) {
                        Iterator<String> itKeys = jSONObjectOptJSONObject2.keys();
                        while (itKeys.hasNext()) {
                            String next = itKeys.next();
                            map.put(next, jSONObjectOptJSONObject2.optString(next));
                        }
                    }
                    if (this.b.get(0) != null) {
                        LoadAdRequest adRequest = this.b.get(0).getAdRequest();
                        adRequest.setOptions(map);
                        adRequest.setLastCampid(com.sigmob.sdk.base.common.f.e().l());
                        adRequest.setLastCrid(com.sigmob.sdk.base.common.f.e().k());
                        com.sigmob.sdk.base.network.d.a(adRequest, new d.a() { // from class: com.sigmob.sdk.mraid2.b.4
                            @Override // com.sigmob.sdk.base.network.d.a
                            public void a(int i, String str2, String str3, LoadAdRequest loadAdRequest) {
                                Log.d(b.f5046a, "-----------onErrorResponse---------" + i + Constants.COLON_SEPARATOR + str2);
                                bVar.a(strOptString4, (BidResponse) null, i, str2);
                                z.a(PointCategory.RESPOND, "0", loadAdRequest);
                            }

                            @Override // com.sigmob.sdk.base.network.d.a
                            public void a(final List<BaseAdUnit> list, LoadAdRequest loadAdRequest) {
                                if (list == null || list.size() <= 0) {
                                    return;
                                }
                                Log.d(b.f5046a, "-----------onSuccess---------" + list.size());
                                b.this.f.addAll(list);
                                bVar.a(strOptString4, b.this.a(list), 0, (String) null);
                                z.a(PointCategory.RESPOND, "1", (BaseAdUnit) null, new z.a() { // from class: com.sigmob.sdk.mraid2.b.4.1
                                    @Override // com.sigmob.sdk.base.common.z.a
                                    public void a(Object obj) {
                                        if (obj instanceof PointEntitySigmob) {
                                            HashMap map2 = new HashMap();
                                            map2.put("ad_count", String.valueOf(list.size()));
                                            map2.put(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, ((BaseAdUnit) list.get(0)).getRequestId());
                                            ((PointEntitySigmob) obj).setOptions(map2);
                                        }
                                    }
                                });
                            }
                        });
                        return;
                    }
                    return;
                case 3:
                    JSONObject jSONObjectOptJSONObject3 = jSONObjectOptJSONObject.optJSONObject("data");
                    String strOptString5 = jSONObjectOptJSONObject3 != null ? jSONObjectOptJSONObject3.optString("vid") : null;
                    BaseAdUnit baseAdUnitB = TextUtils.isEmpty(strOptString5) ? null : bVar.b(strOptString5);
                    if (this.c != null) {
                        this.c.a(baseAdUnitB, jSONObjectOptJSONObject);
                        return;
                    }
                    return;
                case 4:
                    if (this.c != null) {
                        this.c.a();
                        return;
                    }
                    return;
                case 5:
                    if (this.c != null) {
                        this.c.b();
                        return;
                    }
                    return;
                case 6:
                    if (this.c != null) {
                        this.c.c();
                        return;
                    }
                    return;
                case 7:
                    String strOptString6 = jSONObjectOptJSONObject.optString("vid");
                    if (this.c != null) {
                        this.c.a(strOptString6);
                        return;
                    }
                    return;
                case 8:
                    if (this.c != null) {
                        this.c.b(jSONObjectOptJSONObject);
                    }
                    break;
                case 9:
                    if (this.c != null) {
                        this.c.c(jSONObjectOptJSONObject);
                    }
                    break;
                case 10:
                    if (this.c != null) {
                        this.c.d(jSONObjectOptJSONObject);
                    }
                    break;
                case 11:
                    if (this.c != null) {
                        this.c.e(jSONObjectOptJSONObject);
                        return;
                    }
                    return;
                case 12:
                    if (this.c != null) {
                        this.c.b(strOptString2, jSONObjectOptJSONObject);
                    }
                    break;
                case 13:
                    if (this.c != null) {
                        this.c.a(strOptString2, jSONObjectOptJSONObject);
                    }
                    break;
                case 14:
                    if (this.c != null) {
                        this.c.c(strOptString2, jSONObjectOptJSONObject);
                    }
                    break;
                case 15:
                    if (this.c != null) {
                        this.c.a(jSONObjectOptJSONObject);
                        return;
                    }
                    return;
                case 16:
                    if (this.d.getScrollTouchListener() != null) {
                        this.d.getScrollTouchListener().a(jSONObjectOptJSONObject);
                        return;
                    }
                    return;
                case 17:
                    if (this.d.getScrollTouchListener() != null) {
                        this.d.getScrollTouchListener().b(jSONObjectOptJSONObject);
                        return;
                    }
                    return;
                case 18:
                    if (this.d.getScrollTouchListener() != null) {
                        this.d.getScrollTouchListener().a(this.d, jSONObjectOptJSONObject);
                        return;
                    }
                    return;
                default:
                    return;
            }
            bVar.d(str);
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    private void i() {
        this.d.post(new Runnable() { // from class: com.sigmob.sdk.mraid2.b.2
            @Override // java.lang.Runnable
            public void run() {
                try {
                    b.this.a(true);
                    b.this.d();
                    b.this.a(b.this.d.getAdSize());
                    b.this.e();
                    b.this.a(100);
                    b.this.a(b.this.a((List<BaseAdUnit>) b.this.b));
                } catch (Throwable th) {
                    SigmobLog.e("handleMraidLoad", th);
                }
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public LoadAdRequest j() {
        List<BaseAdUnit> list = this.b;
        if (list == null || list.size() <= 0) {
            return null;
        }
        return this.b.get(0).getAdRequest();
    }

    public e a() {
        return this.d;
    }

    void a(int i) {
        a("mraidbridge.fireChangeEvent({\"exposure\":" + i + "});");
    }

    void a(int i, int i2) {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("type", i);
            jSONObject.put("index", i2);
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        a("mraidbridge.notifyPageChangeEvent(" + jSONObject + ");");
    }

    public void a(com.sigmob.sdk.base.common.e eVar) {
        int iPixelsToIntDips;
        int iPixelsToIntDips2;
        DisplayMetrics displayMetrics = this.d.getContext().getResources().getDisplayMetrics();
        JSONObject jSONObject = new JSONObject();
        try {
            JSONObject jSONObject2 = new JSONObject();
            if (eVar != null) {
                iPixelsToIntDips = Dips.pixelsToIntDips(eVar.a(), this.d.getContext());
                iPixelsToIntDips2 = Dips.pixelsToIntDips(eVar.b(), this.d.getContext());
            } else {
                int iPixelsToIntDips3 = Dips.pixelsToIntDips(displayMetrics.widthPixels, this.d.getContext());
                int iPixelsToIntDips4 = Dips.pixelsToIntDips(displayMetrics.heightPixels, this.d.getContext());
                iPixelsToIntDips = iPixelsToIntDips3;
                iPixelsToIntDips2 = iPixelsToIntDips4;
            }
            jSONObject2.put("width", iPixelsToIntDips);
            jSONObject2.put("height", iPixelsToIntDips2);
            jSONObject.put("screenSize", jSONObject2);
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        a("mraidbridge.fireChangeEvent(" + jSONObject + ");");
    }

    void a(BidResponse bidResponse) {
        a("mraidbridge.fireChangeEvent(" + JSONSerializer.Serialize(bidResponse, "bidResponse", true, true) + ");");
    }

    void a(InterfaceC0340b interfaceC0340b) {
        this.c = interfaceC0340b;
    }

    public void a(e eVar) {
        this.d = eVar;
        eVar.setScrollContainer(false);
        this.d.setVerticalScrollBarEnabled(false);
        this.d.setHorizontalScrollBarEnabled(false);
        this.d.setBackgroundColor(0);
        this.d.setWebChromeClient(new WebChromeClient() { // from class: com.sigmob.sdk.mraid2.b.1
            @Override // android.webkit.WebChromeClient
            public boolean onConsoleMessage(ConsoleMessage consoleMessage) {
                return super.onConsoleMessage(consoleMessage);
            }

            @Override // android.webkit.WebChromeClient
            public boolean onJsAlert(WebView webView, String str, String str2, JsResult jsResult) {
                return super.onJsAlert(webView, str, str2, jsResult);
            }

            @Override // android.webkit.WebChromeClient
            public boolean onJsPrompt(WebView webView, String str, String str2, String str3, JsPromptResult jsPromptResult) {
                return super.onJsPrompt(webView, str, str2, str3, jsPromptResult);
            }

            @Override // android.webkit.WebChromeClient
            public void onShowCustomView(View view, WebChromeClient.CustomViewCallback customViewCallback) {
                super.onShowCustomView(view, customViewCallback);
            }
        });
    }

    void a(String str) {
        if (this.d == null) {
            SigmobLog.e("Attempted to inject Javascript into MRAID WebView while was not attached:\n\t" + str);
            return;
        }
        SigmobLog.d("Injecting Javascript into MRAID WebView:\n\t" + str);
        if (Build.VERSION.SDK_INT >= 19) {
            this.d.evaluateJavascript(str, null);
            return;
        }
        this.d.loadUrl(BridgeUtil.JAVASCRIPT_STR + str);
    }

    public void a(String str, int i) {
        JSONObject jSONObject = new JSONObject();
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("uniqueId", str);
            jSONObject2.put(CallMraidJS.b, i);
            jSONObject.put("vdPlayStateChanged", jSONObject2);
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        a("mraidbridge.fireChangeEvent(" + jSONObject + ");");
    }

    public void a(String str, int i, int i2) {
        JSONObject jSONObject = new JSONObject();
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("uniqueId", str);
            jSONObject2.put("currentTime", i / 1000.0f);
            jSONObject2.put(r.ag, i2 / 1000.0f);
            jSONObject.put("vdPlayCurrentTime", jSONObject2);
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        a("mraidbridge.fireChangeEvent(" + jSONObject + ");");
    }

    void a(String str, int i, int i2, int i3) {
        JSONObject jSONObject = new JSONObject();
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("uniqueId", str);
            jSONObject2.put(r.ag, i / 1000.0f);
            jSONObject2.put("width", i2);
            jSONObject2.put("height", i3);
            jSONObject.put("vdReadyToPlay", jSONObject2);
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        a("mraidbridge.fireChangeEvent(" + jSONObject + ");");
    }

    public void a(String str, int i, String str2) {
        JSONObject jSONObject = new JSONObject();
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("code", i);
            jSONObject2.put("message", str2);
            JSONObject jSONObject3 = new JSONObject();
            jSONObject3.put("uniqueId", str);
            jSONObject3.put("error", jSONObject2);
            jSONObject.put("wvError", jSONObject3);
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        a("mraidbridge.fireChangeEvent(" + jSONObject + ");");
    }

    void a(String str, ValueCallback valueCallback) {
        if (this.d == null) {
            SigmobLog.e("Attempted to inject Javascript into MRAID WebView while was not attached:\n\t" + str);
            return;
        }
        SigmobLog.d("Injecting Javascript into MRAID WebView:\n\t" + str);
        if (Build.VERSION.SDK_INT >= 19) {
            this.d.evaluateJavascript(str, valueCallback);
            return;
        }
        SigmobLog.e("Injecting Javascript into MRAID WebView:\n\t can't support less KITKAT" + str);
    }

    void a(String str, BidResponse bidResponse, int i, String str2) {
        JSONObject jSONObject;
        JSONObject jSONObject2 = new JSONObject();
        try {
            if (bidResponse == null) {
                jSONObject = new JSONObject();
                jSONObject.put("data", (Object) null);
            } else {
                jSONObject = new JSONObject(JSONSerializer.Serialize(bidResponse, "data", true, true));
            }
            jSONObject.put("code", i);
            jSONObject.put("message", str2);
            JSONObject jSONObject3 = new JSONObject();
            jSONObject3.put("event", str);
            jSONObject3.put("message", jSONObject);
            jSONObject2.put("notify", jSONObject3);
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        a("mraidbridge.fireChangeEvent(" + jSONObject2 + ");");
    }

    public void a(String str, String str2) {
        JSONObject jSONObject = new JSONObject();
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("uniqueId", str);
            jSONObject2.put("error", str2);
            jSONObject.put("vdPlayError", jSONObject2);
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        a("mraidbridge.fireChangeEvent(" + jSONObject + ");");
    }

    void a(JSONObject jSONObject) {
        JSONObject jSONObject2 = new JSONObject();
        try {
            jSONObject2.put("bindData", jSONObject);
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        a("mraidbridge.fireChangeEvent(" + jSONObject2 + ");");
    }

    void a(boolean z) {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put(CallMraidJS.c, z);
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        a("mraidbridge.fireChangeEvent(" + jSONObject + ")");
    }

    public BaseAdUnit b(String str) {
        List<BaseAdUnit> list;
        if (!TextUtils.isEmpty(str) && (list = this.f) != null && list.size() > 0) {
            for (int i = 0; i < this.f.size(); i++) {
                BaseAdUnit baseAdUnit = this.b.get(i);
                if (str.equals(baseAdUnit.getAd().vid)) {
                    return baseAdUnit;
                }
            }
        }
        return null;
    }

    public List<BaseAdUnit> b() {
        return this.f;
    }

    public void b(String str, int i) {
        JSONObject jSONObject = new JSONObject();
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("uniqueId", str);
            jSONObject2.put(CallMraidJS.b, i);
            jSONObject.put("vdLoadStateChanged", jSONObject2);
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        a("mraidbridge.fireChangeEvent(" + jSONObject + ");");
    }

    void b(String str, String str2) {
        JSONObject jSONObject = new JSONObject();
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("event", str);
            if (!TextUtils.isEmpty(str2)) {
                jSONObject2.put("message", str2);
            }
            jSONObject.put("notify", jSONObject2);
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        a("mraidbridge.fireChangeEvent(" + jSONObject + ");");
    }

    void b(JSONObject jSONObject) {
        a("mraidbridge.onStorageChanged(" + jSONObject.toString() + ");");
    }

    void c() {
        a("mraidbridge.fireReadyEvent();");
    }

    public void c(String str) {
        JSONObject jSONObject = new JSONObject();
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("uniqueId", str);
            jSONObject.put("wvFinished", jSONObject2);
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        a("mraidbridge.fireChangeEvent(" + jSONObject + ");");
    }

    public void c(String str, int i) {
        JSONObject jSONObject = new JSONObject();
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("uniqueId", str);
            jSONObject2.put("currentTime", i / 1000.0f);
            jSONObject.put("vdPlayToEnd", jSONObject2);
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        a("mraidbridge.fireChangeEvent(" + jSONObject + ");");
    }

    void d() {
        JSONObject jSONObject = new JSONObject();
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("orientation", ClientMetadata.getInstance().getOrientationInt());
            jSONObject2.put("locked", true);
            jSONObject.put("orientation", jSONObject2);
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        a("mraidbridge.fireChangeEvent(" + jSONObject + ");");
    }

    void d(String str) {
        a("mraidbridge.nativeCallComplete(" + JSONObject.quote(str) + ")");
    }

    void e() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put(com.heytap.mcssdk.constant.b.C, "4.9.0");
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        a("mraidbridge.fireChangeEvent(" + jSONObject + ")");
    }

    void e(String str) {
        JSONObject jSONObject = new JSONObject();
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("event", "fire_" + str);
            jSONObject.put("notify", jSONObject2);
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        a("mraidbridge.fireChangeEvent(" + jSONObject + ");");
    }

    public void f() {
        if (e != null) {
            e = null;
        }
    }

    void f(String str) {
        JSONObject jSONObject = new JSONObject();
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("event", str);
            jSONObject.put("notify", jSONObject2);
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        a("mraidbridge.fireChangeEvent(" + jSONObject + ");");
    }

    void g(String str) {
        JSONObject jSONObject = new JSONObject();
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("event", str);
            jSONObject.put("notify", jSONObject2);
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        a("mraidbridge.fireChangeEvent(" + jSONObject + ");");
    }
}
