package com.loc;

import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import android.webkit.JavascriptInterface;
import android.webkit.ValueCallback;
import android.webkit.WebView;
import com.amap.api.location.AMapLocation;
import com.amap.api.location.AMapLocationClient;
import com.amap.api.location.AMapLocationClientOption;
import com.amap.api.location.AMapLocationListener;
import com.github.lzyzsd.jsbridge.BridgeUtil;
import com.huawei.hms.push.constant.RemoteMessageConst;
import org.json.JSONObject;

/* JADX INFO: compiled from: H5LocationClient.java */
/* JADX INFO: loaded from: classes2.dex */
public final class i {
    a c;
    private Context d;
    private WebView f;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    Object f3001a = new Object();
    private AMapLocationClient e = null;
    private String g = "AMap.Geolocation.cbk";
    AMapLocationClientOption b = null;
    private volatile boolean h = false;

    /* JADX INFO: compiled from: H5LocationClient.java */
    class a implements AMapLocationListener {
        a() {
        }

        @Override // com.amap.api.location.AMapLocationListener
        public final void onLocationChanged(AMapLocation aMapLocation) {
            if (i.this.h) {
                i.this.b(i.b(aMapLocation));
            }
        }
    }

    public i(Context context, WebView webView) {
        this.f = null;
        this.c = null;
        this.d = context.getApplicationContext();
        this.f = webView;
        this.c = new a();
    }

    private void a(String str) {
        boolean z;
        boolean z2;
        AMapLocationClientOption aMapLocationClientOption;
        AMapLocationClientOption.AMapLocationMode aMapLocationMode;
        JSONObject jSONObject;
        if (this.b == null) {
            this.b = new AMapLocationClientOption();
        }
        int iOptInt = 5;
        long jOptLong = 30000;
        boolean z3 = true;
        try {
            jSONObject = new JSONObject(str);
            jOptLong = jSONObject.optLong(RemoteMessageConst.TO, 30000L);
            z = jSONObject.optInt("useGPS", 1) == 1;
        } catch (Throwable unused) {
            z = false;
        }
        try {
            z2 = jSONObject.optInt("watch", 0) == 1;
            try {
                iOptInt = jSONObject.optInt("interval", 5);
                String strOptString = jSONObject.optString(com.alipay.sdk.authjs.a.b, null);
                if (TextUtils.isEmpty(strOptString)) {
                    strOptString = "AMap.Geolocation.cbk";
                }
                this.g = strOptString;
            } catch (Throwable unused2) {
            }
        } catch (Throwable unused3) {
            z2 = false;
        }
        try {
            this.b.setHttpTimeOut(jOptLong);
            if (z) {
                aMapLocationClientOption = this.b;
                aMapLocationMode = AMapLocationClientOption.AMapLocationMode.Hight_Accuracy;
            } else {
                aMapLocationClientOption = this.b;
                aMapLocationMode = AMapLocationClientOption.AMapLocationMode.Battery_Saving;
            }
            aMapLocationClientOption.setLocationMode(aMapLocationMode);
            AMapLocationClientOption aMapLocationClientOption2 = this.b;
            if (z2) {
                z3 = false;
            }
            aMapLocationClientOption2.setOnceLocation(z3);
            if (z2) {
                this.b.setInterval(iOptInt * 1000);
            }
        } catch (Throwable unused4) {
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static String b(AMapLocation aMapLocation) {
        String locationDetail;
        JSONObject jSONObject = new JSONObject();
        String str = "errorInfo";
        if (aMapLocation == null) {
            jSONObject.put("errorCode", -1);
            locationDetail = "unknownError";
        } else {
            if (aMapLocation.getErrorCode() == 0) {
                jSONObject.put("errorCode", 0);
                JSONObject jSONObject2 = new JSONObject();
                jSONObject2.put("x", aMapLocation.getLongitude());
                jSONObject2.put("y", aMapLocation.getLatitude());
                jSONObject2.put(com.tkay.core.common.l.P, aMapLocation.getAccuracy());
                jSONObject2.put("type", aMapLocation.getLocationType());
                jSONObject2.put("country", aMapLocation.getCountry());
                jSONObject2.put("province", aMapLocation.getProvince());
                jSONObject2.put("city", aMapLocation.getCity());
                jSONObject2.put("cityCode", aMapLocation.getCityCode());
                jSONObject2.put("district", aMapLocation.getDistrict());
                jSONObject2.put("adCode", aMapLocation.getAdCode());
                jSONObject2.put("street", aMapLocation.getStreet());
                jSONObject2.put("streetNum", aMapLocation.getStreetNum());
                jSONObject2.put("floor", aMapLocation.getFloor());
                jSONObject2.put("address", aMapLocation.getAddress());
                jSONObject.put("result", jSONObject2);
                return jSONObject.toString();
            }
            jSONObject.put("errorCode", aMapLocation.getErrorCode());
            jSONObject.put("errorInfo", aMapLocation.getErrorInfo());
            str = "locationDetail";
            locationDetail = aMapLocation.getLocationDetail();
        }
        jSONObject.put(str, locationDetail);
        return jSONObject.toString();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(final String str) {
        try {
            if (this.f != null) {
                if (Build.VERSION.SDK_INT < 19) {
                    this.f.post(new Runnable() { // from class: com.loc.i.2
                        @Override // java.lang.Runnable
                        public final void run() {
                            i.this.f.loadUrl(BridgeUtil.JAVASCRIPT_STR + i.this.g + "('" + str + "')");
                        }
                    });
                    return;
                }
                this.f.evaluateJavascript(BridgeUtil.JAVASCRIPT_STR + this.g + "('" + str + "')", new ValueCallback<String>() { // from class: com.loc.i.1
                    @Override // android.webkit.ValueCallback
                    public final /* bridge */ /* synthetic */ void onReceiveValue(String str2) {
                    }
                });
            }
        } catch (Throwable th) {
            fr.a(th, "H5LocationClient", "callbackJs()");
        }
    }

    public final void a() {
        if (this.f == null || this.d == null || Build.VERSION.SDK_INT < 17 || this.h) {
            return;
        }
        try {
            this.f.getSettings().setJavaScriptEnabled(true);
            this.f.addJavascriptInterface(this, "AMapAndroidLoc");
            if (!TextUtils.isEmpty(this.f.getUrl())) {
                this.f.reload();
            }
            if (this.e == null) {
                AMapLocationClient aMapLocationClient = new AMapLocationClient(this.d);
                this.e = aMapLocationClient;
                aMapLocationClient.setLocationListener(this.c);
            }
            this.h = true;
        } catch (Throwable unused) {
        }
    }

    public final void b() {
        synchronized (this.f3001a) {
            this.h = false;
            if (this.e != null) {
                this.e.unRegisterLocationListener(this.c);
                this.e.stopLocation();
                this.e.onDestroy();
                this.e = null;
            }
            this.b = null;
        }
    }

    @JavascriptInterface
    public final void getLocation(String str) {
        synchronized (this.f3001a) {
            if (this.h) {
                a(str);
                if (this.e != null) {
                    this.e.setLocationOption(this.b);
                    this.e.stopLocation();
                    this.e.startLocation();
                }
            }
        }
    }

    @JavascriptInterface
    public final void stopLocation() {
        AMapLocationClient aMapLocationClient;
        if (this.h && (aMapLocationClient = this.e) != null) {
            aMapLocationClient.stopLocation();
        }
    }
}
