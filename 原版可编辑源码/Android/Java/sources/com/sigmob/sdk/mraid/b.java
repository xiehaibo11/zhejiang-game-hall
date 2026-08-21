package com.sigmob.sdk.mraid;

import android.content.Context;
import android.graphics.Rect;
import android.location.Location;
import android.net.Uri;
import android.os.Build;
import android.text.TextUtils;
import android.util.Base64;
import android.view.MotionEvent;
import android.view.View;
import android.webkit.ConsoleMessage;
import android.webkit.JavascriptInterface;
import android.webkit.JsPromptResult;
import android.webkit.JsResult;
import android.webkit.RenderProcessGoneDetail;
import android.webkit.ValueCallback;
import android.webkit.WebChromeClient;
import android.webkit.WebResourceResponse;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import com.bianfeng.libuniverse.Device;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.json.JSONSerializer;
import com.czhj.sdk.common.network.Networking;
import com.czhj.sdk.common.utils.Md5Util;
import com.czhj.sdk.common.utils.ReflectionUtil;
import com.czhj.sdk.common.utils.TouchLocation;
import com.czhj.sdk.logger.SigmobLog;
import com.github.lzyzsd.jsbridge.BridgeUtil;
import com.huawei.hms.framework.common.ContainerUtils;
import com.qihoo360.replugin.model.PluginInfo;
import com.sigmob.sdk.base.common.aj;
import com.sigmob.sdk.base.common.m;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.models.AppInfo;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.ClickCommon;
import com.sigmob.sdk.base.models.CurrentAppOrientation;
import com.sigmob.sdk.base.models.ExposureChange;
import com.sigmob.sdk.base.models.LoadAdRequest;
import com.sigmob.sdk.base.models.MraidEnv;
import com.sigmob.sdk.base.models.PlacementType;
import com.sigmob.sdk.base.models.SigMacroCommon;
import com.sigmob.sdk.base.models.VideoItem;
import com.sigmob.sdk.base.models.ViewState;
import com.sigmob.sdk.base.models.rtb.Ad;
import com.sigmob.sdk.base.models.rtb.MaterialMeta;
import com.sigmob.sdk.base.models.rtb.RvAdSetting;
import com.sigmob.sdk.base.mta.PointEntitySigmob;
import com.sigmob.sdk.mraid.a;
import com.sigmob.sdk.mraid.h;
import com.sigmob.sdk.mraid.o;
import com.sigmob.windad.WindAdError;
import com.sigmob.windad.WindAds;
import com.ss.android.downloadlib.OrderDownloader;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.common.c.l;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.lang.ref.WeakReference;
import java.net.URI;
import java.net.URISyntaxException;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.bouncycastle.math.ec.Tnaf;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class b {
    static final String a = "mraid://open?url=";
    private final BaseAdUnit b;
    private final PlacementType c;
    private final h d;
    private String e;
    private b f;
    private o g;
    private aj h;
    private boolean i;
    private final WebViewClient j;
    private c k;

    static class 6 {
        static final int[] a;

        static {
            int[] iArr = new int[g.values().length];
            a = iArr;
            try {
                iArr[g.a.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                a[g.e.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                a[g.f.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                a[g.g.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                a[g.b.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                a[g.c.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                a[g.d.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
            try {
                a[g.h.ordinal()] = 8;
            } catch (NoSuchFieldError unused8) {
            }
            try {
                a[g.i.ordinal()] = 9;
            } catch (NoSuchFieldError unused9) {
            }
            try {
                a[g.j.ordinal()] = 10;
            } catch (NoSuchFieldError unused10) {
            }
            try {
                a[g.k.ordinal()] = 11;
            } catch (NoSuchFieldError unused11) {
            }
            try {
                a[g.l.ordinal()] = 12;
            } catch (NoSuchFieldError unused12) {
            }
            try {
                a[g.m.ordinal()] = 13;
            } catch (NoSuchFieldError unused13) {
            }
            try {
                a[g.n.ordinal()] = 14;
            } catch (NoSuchFieldError unused14) {
            }
        }
    }

    static class a {
        private final WeakReference<b> a;

        public a(b bVar) {
            this.a = new WeakReference<>(bVar);
        }

        public b a() {
            return this.a.get();
        }

        @JavascriptInterface
        public String addMacro(JSONObject jSONObject) {
            try {
                BaseAdUnit baseAdUnitB = b();
                String string = jSONObject.has("key") ? jSONObject.getString("key") : null;
                String string2 = jSONObject.has("value") ? jSONObject.getString("value") : null;
                if (!TextUtils.isEmpty(string) && !TextUtils.isEmpty(string2)) {
                    baseAdUnitB.getMacroCommon().addMarcoKey(string, string2);
                    return b.a(200, "addMacro success", (Object) null);
                }
                return b.a(300, "key or value is empty", (Object) null);
            } catch (Throwable th) {
                return b.a(500, "addMacro add fail " + th.getMessage(), (Object) null);
            }
        }

        public BaseAdUnit b() {
            b bVarA = a();
            if (bVarA != null) {
                return bVarA.b;
            }
            return null;
        }

        @JavascriptInterface
        public String excuteRewardAdTrack(JSONObject jSONObject) {
            try {
                BaseAdUnit baseAdUnitB = b();
                String string = jSONObject.getString("event");
                int iA = com.sigmob.sdk.base.network.f.a(baseAdUnitB, string, true);
                if (iA == 0) {
                    return b.a(200, "excuteRewardAdTrack success", (Object) null);
                }
                if (iA == -1) {
                    return b.a(300, "event is empty", (Object) null);
                }
                if (iA == -2) {
                    return b.a(300, string + " can't find in trackers", (Object) null);
                }
                return b.a(400, "unknown error: " + iA, (Object) null);
            } catch (Throwable th) {
                return b.a(500, "unknown error: " + th.getMessage(), (Object) null);
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

        /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
        @JavascriptInterface
        public String getAppInfo(JSONObject jSONObject) {
            Object deviceId;
            int densityDpi;
            try {
                JSONObject jSONObject2 = new JSONObject();
                BaseAdUnit baseAdUnitB = b();
                if (jSONObject != null && baseAdUnitB != null && jSONObject.has("arguments")) {
                    JSONArray jSONArray = jSONObject.getJSONArray("arguments");
                    for (int i = 0; i < jSONArray.length(); i++) {
                        String string = jSONArray.getString(i);
                        byte b = -1;
                        try {
                            switch (string.hashCode()) {
                                case -1776992973:
                                    if (string.equals("ad_source_logo")) {
                                        b = 20;
                                    }
                                    break;
                                case -1590994477:
                                    if (string.equals("display_orientation")) {
                                        b = 32;
                                    }
                                    break;
                                case -1581153970:
                                    if (string.equals("settlement_price_enc")) {
                                        b = 29;
                                    }
                                    break;
                                case -1534836170:
                                    if (string.equals("google_aid")) {
                                        b = 3;
                                    }
                                    break;
                                case -1342627961:
                                    if (string.equals("bid_price")) {
                                        b = 27;
                                    }
                                    break;
                                case -1295727824:
                                    if (string.equals("device_height")) {
                                        b = 10;
                                    }
                                    break;
                                case -1152230954:
                                    if (string.equals("ad_type")) {
                                        b = Tnaf.POW_2_WIDTH;
                                    }
                                    break;
                                case -1093016302:
                                    if (string.equals("client_pixel")) {
                                        b = 8;
                                    }
                                    break;
                                case -918718184:
                                    if (string.equals("forbiden_parse_landingpage")) {
                                        b = 31;
                                    }
                                    break;
                                case -901870406:
                                    if (string.equals("app_version")) {
                                        b = 5;
                                    }
                                    break;
                                case -702722614:
                                    if (string.equals("creative_type")) {
                                        b = 15;
                                    }
                                    break;
                                case -582019427:
                                    if (string.equals("device_width")) {
                                        b = 9;
                                    }
                                    break;
                                case -568274923:
                                    if (string.equals("screen_density")) {
                                        b = 11;
                                    }
                                    break;
                                case -516987305:
                                    if (string.equals(PluginInfo.PI_PKGNAME)) {
                                        b = 13;
                                    }
                                    break;
                                case -376724013:
                                    if (string.equals("sdk_version")) {
                                        b = 6;
                                    }
                                    break;
                                case -205033663:
                                    if (string.equals("is_override")) {
                                        b = 30;
                                    }
                                    break;
                                case -41411609:
                                    if (string.equals("screenangle")) {
                                        b = 14;
                                    }
                                    break;
                                case -19457365:
                                    if (string.equals("network_type")) {
                                        b = 12;
                                    }
                                    break;
                                case 3556:
                                    if (string.equals("os")) {
                                        b = 0;
                                    }
                                    break;
                                case 116753:
                                    if (string.equals("vid")) {
                                        b = 23;
                                    }
                                    break;
                                case 3062218:
                                    if (string.equals("crid")) {
                                        b = 24;
                                    }
                                    break;
                                case 3236040:
                                    if (string.equals("imei")) {
                                        b = 1;
                                    }
                                    break;
                                case 37109963:
                                    if (string.equals(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID)) {
                                        b = 17;
                                    }
                                    break;
                                case 93029116:
                                    if (string.equals("appid")) {
                                        b = 19;
                                    }
                                    break;
                                case 549673881:
                                    if (string.equals("camp_id")) {
                                        b = 25;
                                    }
                                    break;
                                case 672836989:
                                    if (string.equals(com.tkay.expressad.foundation.g.a.bd)) {
                                        b = 7;
                                    }
                                    break;
                                case 722989291:
                                    if (string.equals("android_id")) {
                                        b = 2;
                                    }
                                    break;
                                case 1103406469:
                                    if (string.equals("clienttype")) {
                                        b = 4;
                                    }
                                    break;
                                case 1127917191:
                                    if (string.equals("cust_id")) {
                                        b = 26;
                                    }
                                    break;
                                case 1139668345:
                                    if (string.equals("adslot_id")) {
                                        b = 22;
                                    }
                                    break;
                                case 1224358069:
                                    if (string.equals(l.a.c)) {
                                        b = 18;
                                    }
                                    break;
                                case 1437471655:
                                    if (string.equals("expired_time")) {
                                        b = 33;
                                    }
                                    break;
                                case 1753008747:
                                    if (string.equals("product_id")) {
                                        b = 28;
                                    }
                                    break;
                                case 1765767291:
                                    if (string.equals("ad_source_channel")) {
                                        b = 21;
                                    }
                                    break;
                            }
                            switch (b) {
                                case 0:
                                    jSONObject2.put(string, 2);
                                    break;
                                case 1:
                                    deviceId = ClientMetadata.getInstance().getDeviceId();
                                    jSONObject2.put(string, deviceId);
                                    break;
                                case 2:
                                    deviceId = ClientMetadata.getInstance().getAndroidId();
                                    jSONObject2.put(string, deviceId);
                                    break;
                                case 3:
                                    deviceId = ClientMetadata.getInstance().getAdvertisingId();
                                    jSONObject2.put(string, deviceId);
                                    break;
                                case 4:
                                    deviceId = ClientMetadata.getDeviceModel();
                                    jSONObject2.put(string, deviceId);
                                    break;
                                case 5:
                                    deviceId = ClientMetadata.getInstance().getAppVersion();
                                    jSONObject2.put(string, deviceId);
                                    break;
                                case 6:
                                    deviceId = "4.9.0";
                                    jSONObject2.put(string, deviceId);
                                    break;
                                case 7:
                                    deviceId = ClientMetadata.getDeviceOsVersion();
                                    jSONObject2.put(string, deviceId);
                                    break;
                                case 8:
                                    deviceId = String.format("%sx%s", Integer.valueOf(ClientMetadata.getInstance().getDisplayMetrics().widthPixels), Integer.valueOf(ClientMetadata.getInstance().getDisplayMetrics().heightPixels));
                                    jSONObject2.put(string, deviceId);
                                    break;
                                case 9:
                                    deviceId = ClientMetadata.getInstance().getDeviceScreenWidthDip();
                                    jSONObject2.put(string, deviceId);
                                    break;
                                case 10:
                                    deviceId = ClientMetadata.getInstance().getDeviceScreenHeightDip();
                                    jSONObject2.put(string, deviceId);
                                    break;
                                case 11:
                                    densityDpi = ClientMetadata.getInstance().getDensityDpi();
                                    jSONObject2.put(string, densityDpi);
                                    break;
                                case 12:
                                    densityDpi = ClientMetadata.getInstance().getActiveNetworkType();
                                    jSONObject2.put(string, densityDpi);
                                    break;
                                case 13:
                                    deviceId = ClientMetadata.getInstance().getAppPackageName();
                                    jSONObject2.put(string, deviceId);
                                    break;
                                case 14:
                                    densityDpi = Math.abs(ClientMetadata.getInstance().getOrientationInt().intValue() - 1) * 90;
                                    jSONObject2.put(string, densityDpi);
                                    break;
                                case 15:
                                    densityDpi = baseAdUnitB.getCreativeType();
                                    jSONObject2.put(string, densityDpi);
                                    break;
                                case 16:
                                    densityDpi = baseAdUnitB.getAd_type();
                                    jSONObject2.put(string, densityDpi);
                                    break;
                                case 17:
                                    deviceId = baseAdUnitB.getRequestId();
                                    jSONObject2.put(string, deviceId);
                                    break;
                                case 18:
                                case 22:
                                    deviceId = baseAdUnitB.getadslot_id();
                                    jSONObject2.put(string, deviceId);
                                    break;
                                case 19:
                                    deviceId = WindAds.sharedAds().getAppId();
                                    jSONObject2.put(string, deviceId);
                                    break;
                                case 20:
                                    deviceId = baseAdUnitB.getAd_source_logo();
                                    jSONObject2.put(string, deviceId);
                                    break;
                                case 21:
                                    deviceId = baseAdUnitB.getAd_source_channel();
                                    jSONObject2.put(string, deviceId);
                                    break;
                                case 23:
                                    deviceId = baseAdUnitB.getAd().vid;
                                    jSONObject2.put(string, deviceId);
                                    break;
                                case 24:
                                    deviceId = baseAdUnitB.getCrid();
                                    jSONObject2.put(string, deviceId);
                                    break;
                                case 25:
                                    deviceId = baseAdUnitB.getCamp_id();
                                    jSONObject2.put(string, deviceId);
                                    break;
                                case 26:
                                    deviceId = baseAdUnitB.getAd().cust_id;
                                    jSONObject2.put(string, deviceId);
                                    break;
                                case 27:
                                    deviceId = baseAdUnitB.getAd().bid_price;
                                    jSONObject2.put(string, deviceId);
                                    break;
                                case 28:
                                    deviceId = baseAdUnitB.getAd().product_id;
                                    jSONObject2.put(string, deviceId);
                                    break;
                                case 29:
                                    deviceId = baseAdUnitB.getAd().settlement_price_enc;
                                    jSONObject2.put(string, deviceId);
                                    break;
                                case 30:
                                    deviceId = baseAdUnitB.getAd().is_override;
                                    jSONObject2.put(string, deviceId);
                                    break;
                                case 31:
                                    deviceId = baseAdUnitB.getAd().forbiden_parse_landingpage;
                                    jSONObject2.put(string, deviceId);
                                    break;
                                case 32:
                                    deviceId = baseAdUnitB.getAd().display_orientation;
                                    jSONObject2.put(string, deviceId);
                                    break;
                                case 33:
                                    deviceId = baseAdUnitB.getAd().expired_time;
                                    jSONObject2.put(string, deviceId);
                                    break;
                            }
                        } catch (Throwable unused) {
                        }
                    }
                }
                return b.a(200, "getAppInfo success ", jSONObject2);
            } catch (Throwable th) {
                return b.a(500, "getAppInfo error: " + th.getMessage(), (Object) null);
            }
        }

        @JavascriptInterface
        public String hello(JSONObject jSONObject) {
            try {
                return jSONObject.toString();
            } catch (Throwable unused) {
                return null;
            }
        }

        @JavascriptInterface
        public String javascriptAddDcLog(final JSONObject jSONObject) {
            try {
                if (jSONObject == null) {
                    return b.a(400, "not params", (Object) null);
                }
                if (!jSONObject.has("_ac_type")) {
                    return b.a(300, "_ac_type is empty", (Object) null);
                }
                z.a(jSONObject.getString("_ac_type"), b(), (LoadAdRequest) null, new z.a() {
                    @Override
                    public void a(Object obj) {
                        HashMap map = new HashMap();
                        Iterator<String> itKeys = jSONObject.keys();
                        while (itKeys.hasNext()) {
                            String next = itKeys.next();
                            if (next.equalsIgnoreCase("ext")) {
                                try {
                                    try {
                                        JSONObject jSONObject2 = new JSONObject(jSONObject.optString(next));
                                        Iterator<String> itKeys2 = jSONObject2.keys();
                                        while (itKeys2.hasNext()) {
                                            String next2 = itKeys2.next();
                                            map.put(next2, jSONObject2.optString(next2));
                                        }
                                    } catch (JSONException e) {
                                        e.printStackTrace();
                                    }
                                } catch (Exception unused) {
                                    map.put("ext", Base64.encodeToString(jSONObject.getString("ext").getBytes(), 2));
                                }
                            } else if (!next.equalsIgnoreCase("_ac_type")) {
                                try {
                                    map.put(next, jSONObject.getString(next));
                                } catch (Throwable unused2) {
                                }
                            }
                        }
                        map.put("source", "js");
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
        public String mraidJsLoaded() {
            b bVarA = a();
            if (bVarA == null || bVarA.f == null) {
                return null;
            }
            bVarA.f.b();
            return null;
        }

        @JavascriptInterface
        public void postMessage(final String str) {
            final b bVarA = a();
            SigmobLog.d("postMessage: raw " + str);
            if (bVarA != null) {
                bVarA.g.post(new Runnable() {
                    @Override
                    public void run() {
                        try {
                            JSONObject jSONObject = new JSONObject(str);
                            bVarA.a(jSONObject.optString("event"), jSONObject.optString("subEvent"), jSONObject.optJSONObject("args"));
                        } catch (JSONException e) {
                            e.printStackTrace();
                        }
                        bVarA.e(str);
                    }
                });
            }
        }

        @JavascriptInterface
        public String tracking(JSONObject jSONObject) {
            try {
                BaseAdUnit baseAdUnitB = b();
                String strOptString = jSONObject.optString("event");
                JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("urls");
                if (jSONArrayOptJSONArray == null || jSONArrayOptJSONArray.length() <= 0) {
                    return b.a(300, "urls is empty", (Object) null);
                }
                for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                    com.sigmob.sdk.base.common.g gVar = new com.sigmob.sdk.base.common.g(jSONArrayOptJSONArray.optString(i), strOptString, baseAdUnitB.getRequestId());
                    gVar.a(Integer.valueOf(baseAdUnitB.getTrackingRetryNum()));
                    gVar.a("js");
                    com.sigmob.sdk.base.network.f.a(gVar, baseAdUnitB, false);
                }
                return b.a(200, "tracking success", (Object) null);
            } catch (Throwable th) {
                return b.a(500, "unknown error: " + th.getMessage(), (Object) null);
            }
        }
    }

    public interface b {
        void a();

        void a(int i, int i2, int i3, int i4, a.a aVar, boolean z);

        void a(WindAdError windAdError);

        void a(String str, Map<String, String> map);

        void a(URI uri);

        void a(URI uri, int i, String str);

        void a(URI uri, boolean z) throws com.sigmob.sdk.mraid.c;

        void a(boolean z);

        void a(boolean z, j jVar) throws com.sigmob.sdk.mraid.c;

        boolean a(ConsoleMessage consoleMessage);

        boolean a(String str, JsResult jsResult);

        void b();

        void b(String str, Map<String, String> map);

        void b(boolean z);

        void c();

        void d();

        void e();

        void f();
    }

    public interface c {
        void a(String str, JSONObject jSONObject);

        void b(String str, JSONObject jSONObject);
    }

    b(BaseAdUnit baseAdUnit, PlacementType placementType) {
        this(baseAdUnit, placementType, new h());
    }

    b(BaseAdUnit baseAdUnit, PlacementType placementType, h hVar) {
        this.j = new p() {
            @Override
            public void onPageFinished(WebView webView, String str) {
                b.this.o();
            }

            @Override
            public void onReceivedError(WebView webView, int i, String str, String str2) {
                SigmobLog.e("Error: " + str);
                super.onReceivedError(webView, i, str, str2);
            }

            @Override
            public boolean onRenderProcessGone(WebView webView, RenderProcessGoneDetail renderProcessGoneDetail) {
                b.this.a(renderProcessGoneDetail);
                return true;
            }

            @Override
            public WebResourceResponse shouldInterceptRequest(WebView webView, String str) {
                if (!TextUtils.isEmpty(b.this.b.getVideoPath()) && str.endsWith(b.this.b.getVideoPath()) && b.this.b.isVideoExist()) {
                    try {
                        return new WebResourceResponse("video/mp4", "UTF-8", new FileInputStream(b.this.b.getVideoPath()));
                    } catch (FileNotFoundException e) {
                        SigmobLog.e(e.getMessage());
                    }
                }
                return super.shouldInterceptRequest(webView, str);
            }

            @Override
            public boolean shouldOverrideUrlLoading(WebView webView, String str) {
                return b.this.a(webView, str);
            }
        };
        this.b = baseAdUnit;
        this.c = placementType;
        this.d = hVar;
    }

    private int a(int i, int i2, int i3) throws com.sigmob.sdk.mraid.c {
        if (i >= i2 && i <= i3) {
            return i;
        }
        throw new com.sigmob.sdk.mraid.c("Integer parameter out of range: " + i);
    }

    private a.a a(String str, a.a aVar) throws com.sigmob.sdk.mraid.c {
        if (TextUtils.isEmpty(str)) {
            return aVar;
        }
        if (str.equals("top-left")) {
            return a.a.a;
        }
        if (str.equals("top-right")) {
            return a.a.c;
        }
        if (str.equals("center")) {
            return a.a.d;
        }
        if (str.equals("bottom-left")) {
            return a.a.e;
        }
        if (str.equals("bottom-right")) {
            return a.a.g;
        }
        if (str.equals("top-center")) {
            return a.a.b;
        }
        if (str.equals("bottom-center")) {
            return a.a.f;
        }
        throw new com.sigmob.sdk.mraid.c("Invalid close position: " + str);
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

    private String a(Rect rect) {
        return rect.left + Constants.ACCEPT_TIME_SEPARATOR_SP + rect.top + Constants.ACCEPT_TIME_SEPARATOR_SP + rect.width() + Constants.ACCEPT_TIME_SEPARATOR_SP + rect.height();
    }

    public static String a(String str) {
        if (str == null || str.equalsIgnoreCase("null") || str.equalsIgnoreCase("undefined")) {
            return null;
        }
        return str;
    }

    private URI a(String str, URI uri) throws com.sigmob.sdk.mraid.c {
        return str == null ? uri : i(str);
    }

    private void a(g gVar) {
        c("window.mraidbridge.nativeCallComplete(" + JSONObject.quote(gVar.a()) + ")");
    }

    private void a(g gVar, String str) {
        c("window.mraidbridge.notifyErrorEvent(" + JSONObject.quote(gVar.a()) + ", " + JSONObject.quote(str) + ")");
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x0024  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void a(String str, String str2, JSONObject jSONObject) {
        byte b2;
        int iHashCode = str.hashCode();
        if (iHashCode != 112408642) {
            b2 = (iHashCode == 1182268276 && str.equals("belowSubview")) ? (byte) 1 : (byte) -1;
        } else if (str.equals("vpaid")) {
            b2 = 0;
        }
        if (b2 == 0) {
            this.k.a(str2, jSONObject);
        } else {
            if (b2 != 1) {
                return;
            }
            this.k.b(str2, jSONObject);
        }
    }

    private boolean a(String str, boolean z) throws com.sigmob.sdk.mraid.c {
        return str == null ? z : h(str);
    }

    private String b(Rect rect) {
        return rect.width() + Constants.ACCEPT_TIME_SEPARATOR_SP + rect.height();
    }

    private URI c(String str, String str2) throws com.sigmob.sdk.mraid.c {
        try {
            try {
                return str == null ? new URI(str2) : new URI(str);
            } catch (URISyntaxException unused) {
                return new URI(str2);
            }
        } catch (URISyntaxException unused2) {
            throw new com.sigmob.sdk.mraid.c("Invalid URL parameter: " + str);
        }
    }

    private int f(String str) throws com.sigmob.sdk.mraid.c {
        try {
            return Integer.parseInt(str, 10);
        } catch (NumberFormatException unused) {
            throw new com.sigmob.sdk.mraid.c("Invalid numeric parameter: " + str);
        }
    }

    private j g(String str) throws com.sigmob.sdk.mraid.c {
        if ("portrait".equals(str)) {
            return j.a;
        }
        if ("landscape".equals(str)) {
            return j.b;
        }
        if (Device.NETWORN_NONE.equals(str)) {
            return j.c;
        }
        throw new com.sigmob.sdk.mraid.c("Invalid orientation: " + str);
    }

    private boolean h(String str) throws com.sigmob.sdk.mraid.c {
        if ("true".equals(str)) {
            return true;
        }
        if ("false".equals(str)) {
            return false;
        }
        throw new com.sigmob.sdk.mraid.c("Invalid boolean parameter: " + str);
    }

    private URI i(String str) throws com.sigmob.sdk.mraid.c {
        if (str == null) {
            throw new com.sigmob.sdk.mraid.c("Parameter cannot be null");
        }
        try {
            return new URI(str);
        } catch (URISyntaxException unused) {
            throw new com.sigmob.sdk.mraid.c("Invalid URL parameter: " + str);
        }
    }

    private void o() {
        if (this.i) {
            return;
        }
        this.i = true;
        b bVar = this.f;
        if (bVar != null) {
            bVar.a();
        }
    }

    public String a() {
        return this.e;
    }

    void a(int i) {
        c("sigmob.notifyApkDownloadProcessEvent(" + i + ");");
    }

    public void a(Context context, String str) {
        o oVar = this.g;
        if (oVar == null) {
            SigmobLog.e("MRAID bridge called setContentHtml before WebView was attached");
            return;
        }
        oVar.addJavascriptInterface(new a(this), "sigandroid");
        this.i = false;
        File fileA = com.sigmob.sdk.base.utils.b.a(str, Md5Util.md5(str) + ".html");
        if (fileA == null || TextUtils.isEmpty(fileA.getAbsolutePath())) {
            this.g.loadDataWithBaseURL(Networking.getBaseUrlScheme() + "://localhost/", str, "text/html", "UTF-8", null);
            return;
        }
        this.g.loadUrl("file://" + fileA.getAbsolutePath());
    }

    public void a(Location location) {
        c("mraidbridge.setLocation(" + location.getLatitude() + Constants.ACCEPT_TIME_SEPARATOR_SP + location.getLongitude() + ",\"" + location.getProvider() + "\");");
    }

    void a(RenderProcessGoneDetail renderProcessGoneDetail) {
        WindAdError windAdError = (renderProcessGoneDetail == null || !renderProcessGoneDetail.didCrash()) ? WindAdError.RENDER_PROCESS_GONE_UNSPECIFIED : WindAdError.RENDER_PROCESS_GONE_WITH_CRASH;
        SigmobLog.e("handleRenderProcessGone " + windAdError.toString());
        b();
        b bVar = this.f;
        if (bVar != null) {
            bVar.a(windAdError);
        }
    }

    void a(ValueCallback valueCallback) {
        a("mraidbridge.getPlayProgress();", valueCallback);
    }

    void a(AppInfo appInfo) {
        c("sigmob.fireChangeEvent({" + appInfo.toString().replace(ContainerUtils.KEY_VALUE_DELIMITER, Constants.COLON_SEPARATOR) + "});");
    }

    void a(CurrentAppOrientation currentAppOrientation) {
        c("mraidbridge.fireChangeEvent({" + currentAppOrientation.toString().replace(ContainerUtils.KEY_VALUE_DELIMITER, Constants.COLON_SEPARATOR) + "});");
    }

    void a(ExposureChange exposureChange) {
        c("mraidbridge.fireChangeEvent({" + exposureChange.toString().replace(ContainerUtils.KEY_VALUE_DELIMITER, Constants.COLON_SEPARATOR) + "});");
    }

    void a(MraidEnv mraidEnv) {
        c("mraidbridge.fireChangeEvent(" + JSONSerializer.Serialize(mraidEnv, "env", true) + ");");
    }

    void a(PlacementType placementType) {
        c("mraidbridge.setPlacementType(" + JSONObject.quote(placementType.toJavascriptString()) + ")");
    }

    void a(VideoItem videoItem) {
        c("sigmob.fireChangeEvent(" + JSONSerializer.Serialize(videoItem, "video", false) + ");");
    }

    void a(ViewState viewState) {
        c("mraidbridge.setState(" + JSONObject.quote(viewState.toJavascriptString()) + ")");
    }

    void a(Ad ad) {
        c("sigmob.fireChangeEvent(" + JSONSerializer.Serialize(ad, OrderDownloader.BizType.AD, true) + ");");
    }

    void a(MaterialMeta materialMeta) {
        c("sigmob.fireChangeEvent(" + JSONSerializer.Serialize(materialMeta, ClickCommon.CLICK_AREA_MATERIAL, true) + ");");
    }

    void a(RvAdSetting rvAdSetting) {
        c("sigmob.fireChangeEvent(" + JSONSerializer.Serialize(rvAdSetting, "rvSetting", false) + ");");
    }

    void a(b bVar) {
        this.f = bVar;
    }

    void a(c cVar) {
        this.k = cVar;
    }

    void a(final g gVar, Map<String, String> map) throws com.sigmob.sdk.mraid.c {
        if (this.f == null) {
            throw new com.sigmob.sdk.mraid.c("Invalid state to execute this command");
        }
        if (this.g == null) {
            throw new com.sigmob.sdk.mraid.c("The current WebView is being destroyed");
        }
        switch (6.a[gVar.ordinal()]) {
            case 1:
                this.f.d();
                return;
            case 2:
                this.f.e();
                return;
            case 3:
                this.f.f();
                return;
            case 4:
                this.f.a(a(f(map.get("width")), 0, 100000), a(f(map.get("height")), 0, 100000), a(f(map.get("offsetX")), -100000, 100000), a(f(map.get("offsetY")), -100000, 100000), a(map.get("customClosePosition"), a.a.c), a(map.get("allowOffscreen"), true));
                return;
            case 5:
                this.f.a(a(map.get("url"), (URI) null), a(map.get("shouldUseCustomClose"), false));
                return;
            case 6:
                this.f.b(a(map.get("shouldUseCustomClose"), false));
                return;
            case 7:
                this.f.a(c(map.get("url"), "https://m.sigmob.com"), 1, a(map.get("ext")));
                return;
            case 8:
                this.f.a(h(map.get("allowOrientationChange")), g(map.get("forceOrientation")));
                return;
            case 9:
                this.f.a(i(map.get("uri")));
                return;
            case 10:
                this.d.a(this.g.getContext(), i(map.get("uri")).toString(), new h.a() {
                    @Override
                    public void a(com.sigmob.sdk.mraid.c cVar) {
                        b.this.a(gVar, cVar.getMessage());
                    }
                });
                return;
            case 11:
                this.d.a(this.g.getContext(), map);
                return;
            case 12:
                this.f.a(map.get("event"), map);
                return;
            case 13:
                this.f.b(map.get("event"), map);
                return;
            case 14:
                throw new com.sigmob.sdk.mraid.c("Unspecified MRAID Javascript command");
            default:
                return;
        }
    }

    public void a(k kVar) {
        c("mraidbridge.setScreenSize(" + b(kVar.c()) + ");mraidbridge.setMaxSize(" + b(kVar.e()) + ");mraidbridge.setCurrentPosition(" + a(kVar.g()) + ");mraidbridge.setDefaultPosition(" + a(kVar.i()) + ")");
        StringBuilder sb = new StringBuilder();
        sb.append("mraidbridge.notifySizeChangeEvent(");
        sb.append(b(kVar.g()));
        sb.append(")");
        c(sb.toString());
    }

    public void a(o oVar) {
        this.g = oVar;
        try {
            ReflectionUtil.MethodBuilder methodBuilder = new ReflectionUtil.MethodBuilder(oVar.getSettings(), new String(Base64.decode(com.sigmob.sdk.base.h.C, 2)));
            methodBuilder.addParam(Boolean.TYPE, true);
            methodBuilder.execute();
        } catch (Exception e) {
            e.printStackTrace();
        }
        try {
            ReflectionUtil.MethodBuilder methodBuilder2 = new ReflectionUtil.MethodBuilder(oVar.getSettings(), new String(Base64.decode(com.sigmob.sdk.base.h.D, 2)));
            methodBuilder2.addParam(Boolean.TYPE, true);
            methodBuilder2.execute();
        } catch (Exception e2) {
            e2.printStackTrace();
        }
        if (Build.VERSION.SDK_INT >= 17 && this.c == PlacementType.INTERSTITIAL) {
            oVar.getSettings().setMediaPlaybackRequiresUserGesture(false);
        }
        this.g.setScrollContainer(false);
        this.g.setVerticalScrollBarEnabled(false);
        this.g.setHorizontalScrollBarEnabled(false);
        this.g.setBackgroundColor(0);
        this.g.setAdUnit(this.b);
        this.g.a((m.a) null);
        this.g.setWebViewClient(this.j);
        this.g.setWebChromeClient(new WebChromeClient() {
            @Override
            public boolean onConsoleMessage(ConsoleMessage consoleMessage) {
                return b.this.f != null ? b.this.f.a(consoleMessage) : super.onConsoleMessage(consoleMessage);
            }

            @Override
            public boolean onJsAlert(WebView webView, String str, String str2, JsResult jsResult) {
                return b.this.f != null ? b.this.f.a(str2, jsResult) : super.onJsAlert(webView, str, str2, jsResult);
            }

            @Override
            public boolean onJsPrompt(WebView webView, String str, String str2, String str3, JsPromptResult jsPromptResult) {
                return super.onJsPrompt(webView, str, str2, str3, jsPromptResult);
            }

            @Override
            public void onShowCustomView(View view, WebChromeClient.CustomViewCallback customViewCallback) {
                super.onShowCustomView(view, customViewCallback);
            }
        });
        this.h = new aj(this.g.getContext(), this.g, this.b);
        this.g.setOnTouchListener(new View.OnTouchListener() {
            private MotionEvent b;

            @Override
            public boolean onTouch(View view, MotionEvent motionEvent) {
                b.this.h.onTouchEvent(motionEvent);
                int action = motionEvent.getAction();
                if ((action == 0 || action == 1) && !view.hasFocus()) {
                    view.requestFocus();
                }
                if (motionEvent.getAction() == 1) {
                    b.this.e = String.format("%d,%d,%d,%d", Integer.valueOf((int) this.b.getRawX()), Integer.valueOf((int) this.b.getRawY()), Integer.valueOf((int) motionEvent.getRawX()), Integer.valueOf((int) motionEvent.getRawY()));
                    if (this.b == null) {
                        this.b = motionEvent;
                    }
                    SigMacroCommon macroCommon = b.this.b.getMacroCommon();
                    if (macroCommon instanceof SigMacroCommon) {
                        SigMacroCommon sigMacroCommon = macroCommon;
                        sigMacroCommon.addMarcoKey(SigMacroCommon._DOWNX_, String.valueOf((int) this.b.getRawX()));
                        sigMacroCommon.addMarcoKey(SigMacroCommon._DOWNY_, String.valueOf((int) this.b.getRawY()));
                        sigMacroCommon.addMarcoKey(SigMacroCommon._UPX_, String.valueOf((int) motionEvent.getRawX()));
                        sigMacroCommon.addMarcoKey(SigMacroCommon._UPY_, String.valueOf((int) motionEvent.getRawY()));
                    }
                } else if (motionEvent.getAction() == 0) {
                    this.b = MotionEvent.obtain(motionEvent);
                }
                return false;
            }
        });
        this.g.setVisibilityChangedListener(new o.a() {
            @Override
            public void a(boolean z) {
                if (b.this.f != null) {
                    b.this.f.a(z);
                }
            }
        });
    }

    public void a(String str, int i) {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("uniqueId", str);
            jSONObject.put("currentTime", i / 1000.0f);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        c("mraidbridge.setvdPlayToEnd(" + jSONObject + ")");
    }

    public void a(String str, int i, int i2) {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("uniqueId", str);
            jSONObject.put("currentTime", i / 1000.0f);
            jSONObject.put(com.tkay.expressad.foundation.d.r.ag, i2 / 1000.0f);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        c("mraidbridge.setvdPlayCurrentTime(" + jSONObject + ")");
    }

    void a(String str, int i, int i2, int i3) {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("uniqueId", str);
            jSONObject.put(com.tkay.expressad.foundation.d.r.ag, i / 1000.0f);
            jSONObject.put("width", i2);
            jSONObject.put("height", i3);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        c("mraidbridge.setvdReadyToPlay(" + jSONObject + ")");
    }

    void a(String str, ValueCallback valueCallback) {
        if (this.g == null) {
            SigmobLog.e("Attempted to inject Javascript into MRAID WebView while was not attached:\n\t" + str);
            return;
        }
        SigmobLog.d("Injecting Javascript into MRAID WebView:\n\t" + str);
        if (Build.VERSION.SDK_INT >= 19) {
            this.g.evaluateJavascript(str, valueCallback);
            return;
        }
        SigmobLog.e("Injecting Javascript into MRAID WebView:\n\t can't support less KITKAT" + str);
    }

    void a(String str, String str2) {
        this.e = String.format("%s,%s,%s,%s", str, str2, str, str2);
        SigMacroCommon macroCommon = this.b.getMacroCommon();
        if (macroCommon instanceof SigMacroCommon) {
            SigMacroCommon sigMacroCommon = macroCommon;
            sigMacroCommon.addMarcoKey(SigMacroCommon._DOWNX_, str);
            sigMacroCommon.addMarcoKey(SigMacroCommon._DOWNY_, str2);
            sigMacroCommon.addMarcoKey(SigMacroCommon._UPX_, str);
            sigMacroCommon.addMarcoKey(SigMacroCommon._UPY_, str2);
        }
        this.b.getClickCommon().down = new TouchLocation(Integer.parseInt(str), Integer.parseInt(str2));
        this.b.getClickCommon().up = new TouchLocation(Integer.parseInt(str), Integer.parseInt(str2));
    }

    void a(boolean z) {
        c("mraidbridge.setIsViewable(" + z + ")");
    }

    void a(boolean z, boolean z2, boolean z3, boolean z4, boolean z5, boolean z6, boolean z7) {
        c("mraidbridge.setSupports(" + z + Constants.ACCEPT_TIME_SEPARATOR_SP + z2 + Constants.ACCEPT_TIME_SEPARATOR_SP + z3 + Constants.ACCEPT_TIME_SEPARATOR_SP + z4 + Constants.ACCEPT_TIME_SEPARATOR_SP + z5 + Constants.ACCEPT_TIME_SEPARATOR_SP + z6 + Constants.ACCEPT_TIME_SEPARATOR_SP + z7 + ")");
    }

    boolean a(WebView webView, String str) {
        int i;
        b bVar;
        try {
            new URI(str);
            Uri uri = Uri.parse(str);
            String scheme = uri.getScheme();
            String host = uri.getHost();
            if ("sigmob".equals(scheme)) {
                if ("failLoad".equals(host) && this.c == PlacementType.INLINE && (bVar = this.f) != null) {
                    bVar.c();
                }
                return true;
            }
            if ("mraid".equals(scheme)) {
                g gVarA = g.a(host);
                try {
                    a(gVarA, ClientMetadata.getQueryParamMap(uri));
                } catch (Throwable th) {
                    a(gVarA, th.getMessage());
                }
                a(gVarA);
                return true;
            }
            if (!TextUtils.isEmpty(str)) {
                if (str.startsWith("http")) {
                    webView.loadUrl(str);
                } else {
                    try {
                        List<String> list = this.b.getAdSetting() != null ? this.b.getAdSetting().scheme_white_list : null;
                        if (list != null && list.size() > 0) {
                            while (i < list.size()) {
                                String str2 = list.get(i);
                                i = (str.startsWith(str2) || str2.equals("*")) ? 0 : i + 1;
                                com.sigmob.sdk.base.common.s.a(this.g.getContext(), Uri.parse(str));
                                return true;
                            }
                        }
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                }
            }
            return true;
        } catch (URISyntaxException unused) {
            SigmobLog.e("Invalid MRAID URL: " + str);
            a(g.n, "Mraid command sent an invalid URL");
            return true;
        }
    }

    void b() {
        o oVar = this.g;
        if (oVar != null) {
            oVar.destroy();
            this.g = null;
        }
    }

    void b(ValueCallback valueCallback) {
        a("mraidbridge.getAdDuration();", valueCallback);
    }

    public void b(String str) {
        o oVar = this.g;
        if (oVar == null) {
            SigmobLog.e("MRAID bridge called setContentHtml while WebView was not attached");
            return;
        }
        oVar.addJavascriptInterface(new a(this), "sigandroid");
        this.i = false;
        this.g.loadUrl(str);
    }

    public void b(String str, int i) {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("uniqueId", str);
            jSONObject.put(CallMraidJS.b, i);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        c("mraidbridge.setvdLoadStateChanged(" + jSONObject + ")");
    }

    public void b(String str, String str2) {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("uniqueId", str);
            jSONObject.put("error", str2);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        c("mraidbridge.setvdPlayError(" + jSONObject + ")");
    }

    void c() {
        c("sigmob.fireChangeEvent({\"osType\":2});");
    }

    void c(String str) {
        if (this.g == null) {
            SigmobLog.e("Attempted to inject Javascript into MRAID WebView while was not attached:\n\t" + str);
            return;
        }
        SigmobLog.d("Injecting Javascript into MRAID WebView:\n\t" + str);
        if (Build.VERSION.SDK_INT >= 19) {
            this.g.evaluateJavascript(str, null);
            return;
        }
        this.g.loadUrl(BridgeUtil.JAVASCRIPT_STR + str);
    }

    public void c(String str, int i) {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("uniqueId", str);
            jSONObject.put(CallMraidJS.b, i);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        c("mraidbridge.setvdPlayStateChanged(" + jSONObject + ")");
    }

    void d() {
        c("mraidbridge.fireChangeEvent({\"hostSDKVersion\":4.9.0});");
    }

    void d(String str) {
        c("mraidbridge.fireVideoSrc(\"" + str + "\")");
    }

    void e() {
        c("mraidbridge.notifyReadyEvent();");
    }

    void e(String str) {
        c("mraidbridge.nativeCallCompleteV2(" + JSONObject.quote(str) + ")");
    }

    void f() {
        c("sigmob.notifyApkDownloadStartEvent();");
    }

    void g() {
        c("sigmob.notifyApkDownloadFailEvent();");
    }

    void h() {
        c("sigmob.notifyApkDownloadEndEvent();");
    }

    void i() {
        c("sigmob.notifyApkDownloadInstalledEvent();");
    }

    void j() {
        c("mraidbridge.startAd();");
    }

    boolean k() {
        aj ajVar = this.h;
        return ajVar != null && ajVar.c();
    }

    boolean l() {
        o oVar = this.g;
        return oVar != null && oVar.h();
    }

    boolean m() {
        return this.g != null;
    }

    boolean n() {
        return this.i;
    }
}
