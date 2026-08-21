package com.tkay.splashad.a;

import android.content.Context;
import android.os.SystemClock;
import android.text.TextUtils;
import com.tkay.core.api.AdError;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.api.TYBaseAdAdapter;
import com.tkay.core.api.TYCustomLoadListener;
import com.tkay.core.api.TYMediationRequestInfo;
import com.tkay.core.common.b.f;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l;
import com.tkay.core.common.l.h;
import com.tkay.core.common.l.i;
import com.tkay.core.common.v;
import com.tkay.splashad.unitgroup.api.CustomSplashAdapter;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONObject;

public final class d {
    boolean a;
    b b;
    long c;
    com.tkay.core.common.f.a d;
    String e;
    String f;
    String g;
    int h;
    String i;
    String j;
    int k = -1;
    Map<String, Object> l;
    private Context m;
    private boolean n;

    public final void a(CustomSplashAdapter customSplashAdapter, BaseAd... baseAdArr) {
        if (this.a) {
            return;
        }
        if (customSplashAdapter != null) {
            customSplashAdapter.getTrackingInfo().d(SystemClock.elapsedRealtime() - this.c);
            customSplashAdapter.getTrackingInfo().g(customSplashAdapter.getNetworkPlacementId());
            com.tkay.core.common.l.g.a(customSplashAdapter.getTrackingInfo(), f.i.b, f.i.l, "");
            com.tkay.core.common.k.a.a(this.m).a(12, customSplashAdapter.getTrackingInfo());
            com.tkay.core.common.k.a.a(this.m).a(2, customSplashAdapter.getTrackingInfo());
            com.tkay.core.common.f.a aVar = new com.tkay.core.common.f.a();
            aVar.b(0);
            aVar.a(customSplashAdapter);
            aVar.c(System.currentTimeMillis());
            aVar.b(600000L);
            aVar.a(customSplashAdapter.getTrackingInfo().X());
            aVar.a(600000L);
            if (baseAdArr != null && baseAdArr.length > 0) {
                baseAdArr[0].setTrackingInfo(customSplashAdapter.getTrackingInfo().N());
                aVar.a(baseAdArr[0]);
            }
            this.d = aVar;
        }
        this.a = true;
        this.n = false;
        m.a().a(new 1());
    }

    public final void a(CustomSplashAdapter customSplashAdapter, AdError adError) {
        if (this.a) {
            return;
        }
        if (customSplashAdapter != null) {
            com.tkay.core.common.l.g.a(customSplashAdapter.getTrackingInfo(), f.i.b, f.i.m, adError.printStackTrace());
        }
        this.a = true;
        this.n = false;
        m.a().a(new 2(customSplashAdapter, adError));
    }

    public d(Context context) {
        this.m = context.getApplicationContext();
    }

    final class 1 implements Runnable {
        1() {
        }

        @Override
        public final void run() {
            if (d.this.b != null) {
                d.this.b.onAdLoaded();
            }
            d.this.b = null;
        }
    }

    private void b() {
        m.a().a(new 1());
    }

    protected final boolean a() {
        return this.n;
    }

    public final void a(Context context, String str, String str2, TYMediationRequestInfo tYMediationRequestInfo, String str3, b bVar, int i) {
        this.b = bVar;
        this.e = str2;
        this.f = str;
        if (!TextUtils.isEmpty(str3)) {
            this.g = "0";
            this.l = new HashMap(1);
            try {
                JSONObject jSONObject = new JSONObject(str3);
                this.g = jSONObject.optString("unit_id");
                this.h = jSONObject.optInt("nw_firm_id");
                this.i = jSONObject.optString(l.z);
                this.j = jSONObject.optString("content");
                this.k = jSONObject.optInt("ad_type", -1);
                Map<String, Object> mapC = h.c(this.j);
                this.l = mapC;
                mapC.put("ad_type", Integer.valueOf(this.k));
            } catch (Throwable th) {
                th.printStackTrace();
            }
        } else if (tYMediationRequestInfo != null) {
            this.g = tYMediationRequestInfo.getAdSourceId();
            this.h = tYMediationRequestInfo.getNetworkFirmId();
            this.i = tYMediationRequestInfo.getClassName();
            Map<String, Object> requestParamMap = tYMediationRequestInfo.getRequestParamMap();
            this.l = requestParamMap;
            this.k = 4;
            requestParamMap.put("ad_type", 4);
        }
        m.a();
        m.n(this.g);
        com.tkay.core.common.f.d dVar = new com.tkay.core.common.f.d();
        dVar.x(str);
        dVar.y(str2);
        dVar.u(this.h);
        dVar.z("4");
        dVar.l(TextUtils.isEmpty(this.g) ? "0" : this.g);
        dVar.w("0");
        dVar.a(true);
        if (!TextUtils.isEmpty(this.j)) {
            dVar.n(this.j);
        }
        if (!TextUtils.isEmpty(str3)) {
            dVar.c(8);
        }
        dVar.w(this.k);
        try {
            TYBaseAdAdapter tYBaseAdAdapterA = i.a(this.i);
            if (tYBaseAdAdapterA instanceof CustomSplashAdapter) {
                ((CustomSplashAdapter) tYBaseAdAdapterA).setFetchAdTimeout(i);
                this.n = true;
                this.a = false;
                this.c = SystemClock.elapsedRealtime();
                try {
                    dVar.v(tYBaseAdAdapterA.getNetworkName());
                    dVar.u = tYBaseAdAdapterA.getNetworkSDKVersion();
                    dVar.q = 2;
                } catch (Throwable unused) {
                }
                tYBaseAdAdapterA.setTrackingInfo(dVar);
                com.tkay.core.common.l.g.a(dVar, f.i.a, f.i.n, "");
                com.tkay.core.common.k.a.a(this.m).a(10, dVar);
                com.tkay.core.common.k.a.a(this.m).a(1, dVar);
                tYBaseAdAdapterA.internalLoad(context, this.l, v.a().b(str), new a((CustomSplashAdapter) tYBaseAdAdapterA));
                return;
            }
            throw new Exception("The class isn't instanceof CustomSplashAdapter");
        } catch (Throwable th2) {
            if (this.b != null) {
                this.b.onAdLoadFail(ErrorCode.getErrorCode("2002", "", th2.getMessage()));
            }
            this.b = null;
        }
    }

    private void a(String str) {
        this.g = "0";
        this.l = new HashMap(1);
        try {
            JSONObject jSONObject = new JSONObject(str);
            this.g = jSONObject.optString("unit_id");
            this.h = jSONObject.optInt("nw_firm_id");
            this.i = jSONObject.optString(l.z);
            this.j = jSONObject.optString("content");
            this.k = jSONObject.optInt("ad_type", -1);
            Map<String, Object> mapC = h.c(this.j);
            this.l = mapC;
            mapC.put("ad_type", Integer.valueOf(this.k));
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    private void a(TYMediationRequestInfo tYMediationRequestInfo) {
        this.g = tYMediationRequestInfo.getAdSourceId();
        this.h = tYMediationRequestInfo.getNetworkFirmId();
        this.i = tYMediationRequestInfo.getClassName();
        Map<String, Object> requestParamMap = tYMediationRequestInfo.getRequestParamMap();
        this.l = requestParamMap;
        this.k = 4;
        requestParamMap.put("ad_type", 4);
    }

    final class 2 implements Runnable {
        final CustomSplashAdapter a;
        final AdError b;

        2(CustomSplashAdapter customSplashAdapter, AdError adError) {
            this.a = customSplashAdapter;
            this.b = adError;
        }

        @Override
        public final void run() {
            CustomSplashAdapter customSplashAdapter = this.a;
            if (customSplashAdapter != null) {
                customSplashAdapter.destory();
            }
            if (d.this.b != null) {
                d.this.b.onAdLoadFail(this.b);
            }
            d.this.b = null;
        }
    }

    private void b(CustomSplashAdapter customSplashAdapter, AdError adError) {
        m.a().a(new 2(customSplashAdapter, adError));
    }

    private void c() {
        this.b = null;
    }

    private void d() {
        this.d = null;
    }

    private class a implements TYCustomLoadListener {
        CustomSplashAdapter a;

        @Override
        public final void onAdDataLoaded() {
        }

        public a(CustomSplashAdapter customSplashAdapter) {
            this.a = customSplashAdapter;
        }

        @Override
        public final void onAdCacheLoaded(BaseAd... baseAdArr) {
            d.this.a(this.a, baseAdArr);
        }

        @Override
        public final void onAdLoadError(String str, String str2) {
            d.this.a(this.a, ErrorCode.getErrorCode(ErrorCode.noADError, str, str2));
        }
    }

    private void e() {
        com.tkay.core.common.f.d dVar = new com.tkay.core.common.f.d();
        dVar.x(this.f);
        dVar.y(this.e);
        dVar.z("4");
        dVar.w("0");
        dVar.a(true);
        com.tkay.core.common.k.c.a(dVar, ErrorCode.getErrorCode(ErrorCode.timeOutError, "", "Splash FetchAd Timeout."));
    }

    private com.tkay.core.common.f.a f() {
        com.tkay.core.common.f.a aVar = this.d;
        if (aVar == null || aVar.d() > 0) {
            return null;
        }
        return this.d;
    }

    private com.tkay.core.common.f.a g() {
        return this.d;
    }
}
