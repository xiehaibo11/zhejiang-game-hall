package com.sigmob.sdk.rewardVideoAd;

import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import com.czhj.sdk.common.models.AdStatus;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.Sigmob;
import com.sigmob.sdk.base.common.f;
import com.sigmob.sdk.base.common.l;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.h;
import com.sigmob.sdk.base.i;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.LoadAdRequest;
import com.sigmob.sdk.base.models.SigMacroCommon;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.sdk.base.mta.PointEntitySigmob;
import com.sigmob.sdk.base.mta.PointEntitySigmobError;
import com.sigmob.sdk.base.network.d;
import com.sigmob.sdk.rewardVideoAd.e;
import com.sigmob.windad.WindAdError;
import com.sigmob.windad.WindAdRequest;
import com.sigmob.windad.rewardVideo.WindRewardInfo;
import java.io.UnsupportedEncodingException;
import java.net.URLEncoder;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class d implements f.b, d.a, e.a {
    private f b;
    private boolean c;
    private AdStatus d;
    private List<BaseAdUnit> e;
    private BaseAdUnit f;
    private long g;
    private long h;
    private LoadAdRequest i;
    private int j;
    private String l;
    private e m;
    private g n;
    private boolean o;
    private final int k = 8193;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Handler f5143a = new Handler(Looper.getMainLooper()) { // from class: com.sigmob.sdk.rewardVideoAd.d.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            if (message.what == 8193 && d.this.d == AdStatus.AdStatusLoading) {
                d.this.f5143a.removeMessages(8193);
                d.this.c(WindAdError.ERROR_SIGMOB_AD_TIME_OUT);
            }
        }
    };

    protected d(boolean z) {
        this.o = z;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(BaseAdUnit baseAdUnit, String str, final int i, final String str2, final String str3, WindAdError windAdError) {
        z.a(str, windAdError, baseAdUnit, new z.a() { // from class: com.sigmob.sdk.rewardVideoAd.d.7
            @Override // com.sigmob.sdk.base.common.z.a
            public void a(Object obj) {
                if (obj instanceof PointEntitySigmobError) {
                    PointEntitySigmobError pointEntitySigmobError = (PointEntitySigmobError) obj;
                    pointEntitySigmobError.setLoad_id(str3);
                    pointEntitySigmobError.setPlacement_id(str2);
                    pointEntitySigmobError.setAdtype(String.valueOf(i));
                }
            }
        });
    }

    private void a(LoadAdRequest loadAdRequest, a aVar, d.a aVar2) {
        String placementId = loadAdRequest.getPlacementId();
        g();
        loadAdRequest.setRequest_scene_type(aVar.a().intValue());
        if (aVar != a.NormalRequest) {
            z.a("request", PointCategory.PLAY, (BaseAdUnit) null, (WindAdRequest) null, loadAdRequest, (z.a) null);
        }
        loadAdRequest.setExpired(e());
        com.sigmob.sdk.base.network.d.a(loadAdRequest, aVar2);
        this.j = 0;
        SigmobLog.d("adsRequest loadAdRequest = [" + loadAdRequest + "], placementId = [" + placementId + "]");
    }

    private void a(final WindAdError windAdError) {
        g();
        this.f = null;
        this.f5143a.post(new Runnable() { // from class: com.sigmob.sdk.rewardVideoAd.d.8
            @Override // java.lang.Runnable
            public void run() {
                if (d.this.n == null || windAdError == null) {
                    return;
                }
                d.this.n.onVideoAdPlayError(windAdError, d.this.l);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(LoadAdRequest loadAdRequest) {
        a(loadAdRequest, a.AutoNextPreload, new d.a() { // from class: com.sigmob.sdk.rewardVideoAd.d.6
            @Override // com.sigmob.sdk.base.network.d.a
            public void a(int i, String str, String str2, LoadAdRequest loadAdRequest2) {
                z.a(PointCategory.RESPOND, "0", loadAdRequest2);
                z.a(PointCategory.RESPOND, "0", i, str, loadAdRequest2);
            }

            @Override // com.sigmob.sdk.base.network.d.a
            public void a(final List<BaseAdUnit> list, LoadAdRequest loadAdRequest2) {
                if (list == null || list.size() <= 0) {
                    return;
                }
                BaseAdUnit baseAdUnit = list.get(0);
                d.this.e = list;
                z.a(PointCategory.RESPOND, "1", (BaseAdUnit) null, loadAdRequest2, new z.a() { // from class: com.sigmob.sdk.rewardVideoAd.d.6.1
                    @Override // com.sigmob.sdk.base.common.z.a
                    public void a(Object obj) {
                        if (obj instanceof PointEntitySigmob) {
                            HashMap map = new HashMap();
                            map.put("ad_count", String.valueOf(list.size()));
                            ((PointEntitySigmob) obj).setOptions(map);
                        }
                    }
                });
                if (!d.this.m.a(baseAdUnit)) {
                    d.this.c(WindAdError.ERROR_SIGMOB_INFORMATION_LOSE);
                    return;
                }
                d.this.f();
                if (baseAdUnit.getAd_source_channel().equalsIgnoreCase("1000")) {
                    com.sigmob.sdk.base.common.f.e().e(baseAdUnit);
                }
                if (baseAdUnit.getPlayMode() != 0) {
                    d.this.g = baseAdUnit.getAdExpiredTime().intValue();
                    d.this.h = System.currentTimeMillis();
                }
                com.sigmob.sdk.base.common.f.a(list);
                f.b bVar = new f.b() { // from class: com.sigmob.sdk.rewardVideoAd.d.6.2
                    @Override // com.sigmob.sdk.base.common.f.b
                    public void a(BaseAdUnit baseAdUnit2) {
                        z.a(PointCategory.LOADSTART, (String) null, baseAdUnit2, (WindAdRequest) null, d.this.i, (z.a) null);
                        com.sigmob.sdk.base.network.f.a(baseAdUnit2, com.sigmob.sdk.base.common.a.AD_LOAD);
                    }

                    @Override // com.sigmob.sdk.base.common.f.b
                    public void a(BaseAdUnit baseAdUnit2, String str) {
                        com.sigmob.sdk.base.network.f.a(baseAdUnit2, TextUtils.isEmpty(str) ? com.sigmob.sdk.base.common.a.AD_LOAD_SUCCESS : com.sigmob.sdk.base.common.a.AD_LOAD_FAILURE);
                        d.this.f5143a.removeMessages(8193);
                        z.a(PointCategory.LOADEND, TextUtils.isEmpty(str) ? "1" : "0", baseAdUnit2, (WindAdRequest) null, d.this.i, (z.a) null);
                        if (baseAdUnit2 == null || baseAdUnit2.getPlayMode() != 0) {
                            return;
                        }
                        if (TextUtils.isEmpty(str)) {
                            d.this.g = baseAdUnit2.getAdExpiredTime().intValue();
                            d.this.h = System.currentTimeMillis();
                        } else {
                            WindAdError windAdError = WindAdError.ERROR_SIGMOB_FILE_DOWNLOAD;
                            windAdError.setMessage(str);
                            d.this.a(baseAdUnit2, PointCategory.LOAD, baseAdUnit2.getAd_type(), baseAdUnit2.getadslot_id(), baseAdUnit2.getLoad_id(), windAdError);
                            d.this.g();
                        }
                    }
                };
                if (baseAdUnit.getCreativeType() == l.CreativeTypeMRAIDTWO.a()) {
                    if (new com.sigmob.sdk.base.common.c(list, bVar, d.this.i).a(false)) {
                        d.this.m.a(new HashMap(), baseAdUnit);
                        return;
                    }
                    return;
                }
                if (baseAdUnit.getPlayMode() != 2) {
                    d.this.m.a(new HashMap(), baseAdUnit);
                    com.sigmob.sdk.base.common.f.e().a(baseAdUnit, bVar);
                }
            }
        });
    }

    private void b(final WindAdError windAdError) {
        if (this.d == AdStatus.AdStatusLoading && this.f == null) {
            this.f5143a.post(new Runnable() { // from class: com.sigmob.sdk.rewardVideoAd.d.10
                @Override // java.lang.Runnable
                public void run() {
                    if (d.this.b != null) {
                        d.this.b.onVideoAdPreLoadFail(windAdError, d.this.l);
                    }
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void c(final WindAdError windAdError) {
        if (this.d != AdStatus.AdStatusLoading) {
            return;
        }
        if (windAdError == null) {
            this.d = AdStatus.AdStatusReady;
            List<BaseAdUnit> list = this.e;
            if (list != null && list.size() > 0) {
                z.a(PointCategory.READY, (String) null, this.e.get(0), this.i, (z.a) null);
            }
        } else {
            this.d = AdStatus.AdStatusNone;
        }
        if (this.f != null) {
            return;
        }
        this.f5143a.post(new Runnable() { // from class: com.sigmob.sdk.rewardVideoAd.d.2
            @Override // java.lang.Runnable
            public void run() {
                if (d.this.b != null) {
                    if (windAdError != null) {
                        d.this.b.onVideoAdLoadError(windAdError, d.this.l);
                    } else {
                        d.this.b.onVideoAdLoadSuccess(d.this.l);
                    }
                }
            }
        });
    }

    private boolean e() {
        return (this.g == 0 || this.h == 0 || System.currentTimeMillis() - this.h <= this.g) ? false : true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void f() {
        if (this.d == AdStatus.AdStatusLoading && this.f == null) {
            this.f5143a.post(new Runnable() { // from class: com.sigmob.sdk.rewardVideoAd.d.9
                @Override // java.lang.Runnable
                public void run() {
                    if (d.this.b != null) {
                        d.this.b.onVideoAdPreLoadSuccess(d.this.l);
                    }
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void g() {
        BaseAdUnit baseAdUnit;
        List<BaseAdUnit> list = this.e;
        if (list != null && list.size() > 0 && (baseAdUnit = this.e.get(0)) != null && baseAdUnit.getAd_source_channel().equalsIgnoreCase("1000")) {
            com.sigmob.sdk.base.common.f.e().d(baseAdUnit);
        }
        this.e = null;
    }

    private boolean j(BaseAdUnit baseAdUnit) {
        try {
            if (baseAdUnit.getPlayMode() != 0) {
                return true;
            }
            boolean zIsEndCardIndexExist = baseAdUnit.isEndCardIndexExist();
            if (!zIsEndCardIndexExist) {
                SigmobLog.e("endIndex file not ready");
            }
            return zIsEndCardIndexExist;
        } catch (Throwable unused) {
            return false;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x003c  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x0048  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private com.sigmob.sdk.rewardVideoAd.e k(com.sigmob.sdk.base.models.BaseAdUnit r4) {
        /*
            r3 = this;
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_AD_PLAY_CHECK_FAIL
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r3.f
            if (r1 == 0) goto L10
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_AD_PLAY_HAS_PLAYING
            java.lang.String r1 = r1.getMessage()
        Lc:
            r0.setMessage(r1)
            goto L37
        L10:
            if (r4 != 0) goto L15
            java.lang.String r1 = "not ready adUnit"
            goto Lc
        L15:
            com.sigmob.sdk.rewardVideoAd.e r1 = r3.m
            if (r1 != 0) goto L1c
            java.lang.String r1 = "interstitial object is null"
            goto Lc
        L1c:
            com.czhj.sdk.common.models.AdStatus r1 = r3.d
            com.czhj.sdk.common.models.AdStatus r2 = com.czhj.sdk.common.models.AdStatus.AdStatusReady
            if (r1 == r2) goto L25
            java.lang.String r1 = "ad status is not ready"
            goto Lc
        L25:
            boolean r1 = r3.e()
            if (r1 == 0) goto L2e
            java.lang.String r1 = "ad unit is expired"
            goto Lc
        L2e:
            boolean r1 = r3.j(r4)
            if (r1 != 0) goto L39
            java.lang.String r1 = "check ad unit endcard is invalid"
            goto Lc
        L37:
            r1 = 0
            goto L3a
        L39:
            r1 = 1
        L3a:
            if (r1 != 0) goto L48
            r3.a(r0)
            com.sigmob.sdk.base.models.LoadAdRequest r1 = r3.i
            java.lang.String r2 = "play"
            com.sigmob.sdk.base.common.z.a(r2, r0, r4, r1)
            r4 = 0
            return r4
        L48:
            com.sigmob.sdk.rewardVideoAd.e r4 = r3.m
            return r4
        */
        throw new UnsupportedOperationException("Method not decompiled: com.sigmob.sdk.rewardVideoAd.d.k(com.sigmob.sdk.base.models.BaseAdUnit):com.sigmob.sdk.rewardVideoAd.e");
    }

    @Override // com.sigmob.sdk.base.network.d.a
    public void a(int i, String str, String str2, LoadAdRequest loadAdRequest) {
        z.a(PointCategory.RESPOND, "0", loadAdRequest);
        z.a(PointCategory.RESPOND, "0", i, str, loadAdRequest);
        WindAdError windAdError = WindAdError.getWindAdError(i);
        if (windAdError == null) {
            windAdError = WindAdError.ERROR_SIGMOB_REQUEST;
            windAdError.setErrorMessage(i, str);
        }
        b(windAdError);
        c(windAdError);
    }

    @Override // com.sigmob.sdk.base.common.f.b
    public void a(BaseAdUnit baseAdUnit) {
        z.a(PointCategory.LOADSTART, (String) null, baseAdUnit, (WindAdRequest) null, this.i, (z.a) null);
        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.AD_LOAD);
    }

    @Override // com.sigmob.sdk.base.common.f.b
    public void a(BaseAdUnit baseAdUnit, String str) {
        SigmobLog.d("onInterstitialLoaded() called");
        com.sigmob.sdk.base.network.f.a(baseAdUnit, TextUtils.isEmpty(str) ? com.sigmob.sdk.base.common.a.AD_LOAD_SUCCESS : com.sigmob.sdk.base.common.a.AD_LOAD_FAILURE);
        this.f5143a.removeMessages(8193);
        z.a(PointCategory.LOADEND, TextUtils.isEmpty(str) ? "1" : "0", baseAdUnit, (WindAdRequest) null, this.i, (z.a) null);
        if (baseAdUnit == null || baseAdUnit.getPlayMode() != 0) {
            return;
        }
        if (TextUtils.isEmpty(str)) {
            this.g = baseAdUnit.getAdExpiredTime().intValue();
            this.h = System.currentTimeMillis();
            c((WindAdError) null);
        } else {
            WindAdError windAdError = WindAdError.ERROR_SIGMOB_FILE_DOWNLOAD;
            windAdError.setMessage(str);
            a(baseAdUnit, PointCategory.LOAD, baseAdUnit.getAd_type(), baseAdUnit.getadslot_id(), baseAdUnit.getLoad_id(), windAdError);
            c(windAdError);
            g();
        }
    }

    void a(LoadAdRequest loadAdRequest) {
        WindAdError sigMobError;
        this.d = AdStatus.AdStatusLoading;
        if (loadAdRequest == null || TextUtils.isEmpty(loadAdRequest.getPlacementId())) {
            SigmobLog.e("loadAd error loadAdRequest or placementId is null");
            c(WindAdError.ERROR_SIGMOB_PLACEMENTID_EMPTY);
            return;
        }
        try {
            if (Sigmob.getInstance() != null && (sigMobError = Sigmob.getInstance().getSigMobError()) != null) {
                SigmobLog.e("check loadAd error " + sigMobError.toString());
                PointEntitySigmobError.SigmobError(PointCategory.LOAD, sigMobError.getErrorCode(), sigMobError.getMessage()).commit();
                c(sigMobError);
                return;
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        this.l = loadAdRequest.getPlacementId();
        this.i = loadAdRequest;
        if (this.m == null) {
            this.m = new e(this, this.o);
        }
        if (!TextUtils.isEmpty(this.i.getBidToken())) {
            g();
        }
        if (!a()) {
            loadAdRequest.setLastCampid(com.sigmob.sdk.base.common.f.e().l());
            loadAdRequest.setLastCrid(com.sigmob.sdk.base.common.f.e().k());
            this.f5143a.sendEmptyMessageDelayed(8193, i.a().p());
            a(loadAdRequest, a.NormalRequest, this);
            return;
        }
        this.j++;
        this.m.a((Map<String, Object>) null, this.e.get(0));
        SigmobLog.d("adsRequest isReady  placementId = [" + this.l + "]");
        f();
        c((WindAdError) null);
    }

    public void a(LoadAdRequest loadAdRequest, g gVar) {
        e eVarK;
        this.n = gVar;
        this.i = loadAdRequest;
        List<BaseAdUnit> list = this.e;
        if (list == null || list.size() <= 0 || (eVarK = k(this.e.get(0))) == null) {
            return;
        }
        BaseAdUnit baseAdUnit = this.e.get(0);
        this.f = baseAdUnit;
        baseAdUnit.setLoad_id(this.i.getLoadId());
        this.f.setBid_token(this.i.getBidToken());
        this.f.setAd_scene_id(this.i.getAdSceneId());
        this.f.setAd_scene_desc(this.i.getAdSceneDesc());
        SigMacroCommon macroCommon = this.f.getMacroCommon();
        if (macroCommon instanceof SigMacroCommon) {
            if (!TextUtils.isEmpty(this.i.getAdSceneDesc())) {
                macroCommon.addMarcoKey(SigMacroCommon._ADSCENE_, this.i.getAdSceneDesc());
            }
            if (!TextUtils.isEmpty(this.i.getAdSceneId())) {
                macroCommon.addMarcoKey(SigMacroCommon._ADSCENEID_, this.i.getAdSceneId());
            }
            if (!TextUtils.isEmpty(this.f.getVideo_url())) {
                macroCommon.addMarcoKey(SigMacroCommon._VMD5_, com.sigmob.sdk.base.common.f.e().e(this.f.getVideoPath()));
                try {
                    macroCommon.addMarcoKey(SigMacroCommon._VURL_, URLEncoder.encode(this.f.getVideo_url(), "UTF-8"));
                } catch (UnsupportedEncodingException e) {
                    SigmobLog.e(e.getMessage());
                }
            }
        }
        if (this.f.getCreativeType() == l.CreativeTypeMRAIDTWO.a()) {
            if (!new com.sigmob.sdk.base.common.c(this.e, this, this.i).a(true)) {
                eVarK.a(new HashMap(), this.f);
            }
        } else if (this.f.getPlayMode() == 2) {
            eVarK.a(new HashMap(), this.f);
            com.sigmob.sdk.base.common.f.e().a(this.f, this);
        }
        Bundle bundle = new Bundle();
        bundle.putBoolean(h.s, this.i.isEnable_keep_on());
        bundle.putBoolean(h.r, this.i.isEnable_screen_lock_displayad());
        eVarK.a(this.f, bundle);
        this.h = 0L;
        this.g = 0L;
    }

    public void a(f fVar) {
        this.b = fVar;
    }

    @Override // com.sigmob.sdk.base.network.d.a
    public void a(final List<BaseAdUnit> list, LoadAdRequest loadAdRequest) {
        if (list != null) {
            try {
                if (list.size() > 0) {
                    BaseAdUnit baseAdUnit = list.get(0);
                    this.e = list;
                    z.a(PointCategory.RESPOND, "1", (BaseAdUnit) null, loadAdRequest, new z.a() { // from class: com.sigmob.sdk.rewardVideoAd.d.3
                        @Override // com.sigmob.sdk.base.common.z.a
                        public void a(Object obj) {
                            if (obj instanceof PointEntitySigmob) {
                                HashMap map = new HashMap();
                                map.put("ad_count", String.valueOf(list.size()));
                                ((PointEntitySigmob) obj).setOptions(map);
                            }
                        }
                    });
                    if (this.m == null) {
                        this.m = new e(this, this.o);
                    }
                    if (!this.m.a(baseAdUnit)) {
                        c(WindAdError.ERROR_SIGMOB_INFORMATION_LOSE);
                        return;
                    }
                    f();
                    com.sigmob.sdk.base.common.f.a(list);
                    for (BaseAdUnit baseAdUnit2 : this.e) {
                        if (baseAdUnit2.getAd_source_channel().equalsIgnoreCase("1000")) {
                            com.sigmob.sdk.base.common.f.e().e(baseAdUnit2);
                        }
                    }
                    if (baseAdUnit.getCreativeType() == l.CreativeTypeMRAIDTWO.a()) {
                        if (new com.sigmob.sdk.base.common.c(list, this, this.i).a(false)) {
                            this.m.a(new HashMap(), baseAdUnit);
                            return;
                        }
                        this.g = baseAdUnit.getAdExpiredTime().intValue();
                        this.h = System.currentTimeMillis();
                        c((WindAdError) null);
                        return;
                    }
                    if (baseAdUnit.getPlayMode() != 0) {
                        this.g = baseAdUnit.getAdExpiredTime().intValue();
                        this.h = System.currentTimeMillis();
                        c((WindAdError) null);
                    }
                    if (baseAdUnit.getPlayMode() != 2) {
                        this.m.a(new HashMap(), baseAdUnit);
                        com.sigmob.sdk.base.common.f.e().a(baseAdUnit, this);
                        return;
                    }
                    return;
                }
            } catch (Throwable th) {
                SigmobLog.e(th.getMessage());
                g();
                WindAdError windAdError = WindAdError.ERROR_SIGMOB_INFORMATION_LOSE;
                windAdError.setMessage(th.getMessage());
                z.a(PointCategory.RESPOND, "0", windAdError.getErrorCode(), windAdError.getMessage(), loadAdRequest);
                c(windAdError);
                return;
            }
        }
        WindAdError windAdError2 = WindAdError.ERROR_SIGMOB_INFORMATION_LOSE;
        b(WindAdError.ERROR_SIGMOB_INFORMATION_LOSE);
        z.a(PointCategory.RESPOND, "0", windAdError2.getErrorCode(), windAdError2.getMessage(), loadAdRequest);
        c(WindAdError.ERROR_SIGMOB_INFORMATION_LOSE);
    }

    boolean a() {
        List<BaseAdUnit> list = this.e;
        if (list != null && list.size() > 0) {
            BaseAdUnit baseAdUnit = this.e.get(0);
            if (baseAdUnit != null && !e() && j(baseAdUnit)) {
                return true;
            }
            if (baseAdUnit != null) {
                com.sigmob.sdk.base.common.f.e().d(baseAdUnit);
            }
        }
        return false;
    }

    public void b() {
        g();
        this.f = null;
    }

    @Override // com.sigmob.sdk.base.common.m.b
    public void b(BaseAdUnit baseAdUnit) {
        SigmobLog.d("onInterstitialShown() called");
        this.c = false;
        g();
        if (baseAdUnit != null) {
            g gVar = this.n;
            if (gVar != null) {
                gVar.onVideoAdPlayStart(baseAdUnit.getAdslot_id());
            }
            if (!baseAdUnit.getDisableAutoLoad() && TextUtils.isEmpty(this.i.getBidToken()) && baseAdUnit.bidding_response == null) {
                SigmobLog.d(baseAdUnit.getPlayMode() + " adsRequest onInterstitialShown: " + this.i.getBidToken());
                if (baseAdUnit.getPlayMode() == 0 && TextUtils.isEmpty(this.i.getBidToken())) {
                    this.i.setLastCampid(baseAdUnit.getCamp_id());
                    this.i.setLastCrid(baseAdUnit.getCrid());
                    this.f5143a.post(new Runnable() { // from class: com.sigmob.sdk.rewardVideoAd.d.4
                        @Override // java.lang.Runnable
                        public void run() {
                            d dVar = d.this;
                            dVar.b(dVar.i);
                        }
                    });
                }
            }
        }
    }

    @Override // com.sigmob.sdk.base.common.m.b
    public void b(BaseAdUnit baseAdUnit, String str) {
        this.f5143a.removeMessages(8193);
        SigmobLog.d("onInterstitialFailed() called with: errorCode = [" + str + "]");
        z.a(PointCategory.LOADEND, "0", baseAdUnit, (WindAdRequest) null, this.i, (z.a) null);
        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.AD_LOAD_FAILURE);
        g();
        if (baseAdUnit == null || baseAdUnit.getPlayMode() != 0) {
            return;
        }
        WindAdError windAdError = WindAdError.ERROR_SIGMOB_FILE_DOWNLOAD;
        windAdError.setMessage(str);
        a(baseAdUnit, PointCategory.LOAD, baseAdUnit.getAd_type(), baseAdUnit.getadslot_id(), baseAdUnit.getLoad_id(), windAdError);
        c(windAdError);
    }

    public String c() {
        List<BaseAdUnit> list = this.e;
        if (list == null || list.size() <= 0 || this.e.get(0) == null || this.e.get(0).bidding_response == null) {
            return null;
        }
        return String.valueOf(this.e.get(0).bidding_response.ecpm);
    }

    @Override // com.sigmob.sdk.base.common.m.b
    public void c(BaseAdUnit baseAdUnit) {
        SigmobLog.d("onInterstitialClicked() called");
        g gVar = this.n;
        if (gVar == null || baseAdUnit == null) {
            return;
        }
        gVar.onVideoAdClicked(baseAdUnit.getAdslot_id());
    }

    @Override // com.sigmob.sdk.rewardVideoAd.e.a
    public void c(BaseAdUnit baseAdUnit, String str) {
        if (baseAdUnit != null && baseAdUnit.getAd_source_channel().equalsIgnoreCase("1000")) {
            com.sigmob.sdk.base.common.f.e().d(baseAdUnit);
        }
        if (baseAdUnit != null) {
            WindAdError windAdError = WindAdError.ERROR_SIGMOB_AD_PLAY;
            windAdError.setMessage(str);
            a(windAdError);
            a(baseAdUnit, PointCategory.PLAY, baseAdUnit.getAd_type(), baseAdUnit.getadslot_id(), baseAdUnit.getLoad_id(), windAdError);
        }
        SigmobLog.d("onVideoPlayFail() called");
    }

    public List<BaseAdUnit> d() {
        return this.e;
    }

    @Override // com.sigmob.sdk.base.common.m.b
    public void d(BaseAdUnit baseAdUnit) {
        SigmobLog.d("onInterstitialDismissed() called");
        this.f = null;
        if (baseAdUnit == null) {
            return;
        }
        e eVar = this.m;
        if (eVar != null) {
            eVar.b(baseAdUnit);
        }
        g gVar = this.n;
        if (gVar != null) {
            gVar.onVideoAdClosed(baseAdUnit.getAdslot_id());
        }
    }

    @Override // com.sigmob.sdk.base.common.m.b
    public void e(BaseAdUnit baseAdUnit) {
        if (baseAdUnit != null) {
            this.d = AdStatus.AdStatusPlaying;
            com.sigmob.sdk.base.common.f.e().d(baseAdUnit.getCamp_id());
            com.sigmob.sdk.base.common.f.e().c(baseAdUnit.getCrid());
            g();
        }
    }

    @Override // com.sigmob.sdk.rewardVideoAd.e.a
    public void f(BaseAdUnit baseAdUnit) {
        SigmobLog.d("onVideoComplete() called");
        this.c = true;
        g gVar = this.n;
        if (gVar == null || baseAdUnit == null) {
            return;
        }
        gVar.onVideoAdPlayComplete(new WindRewardInfo(true), baseAdUnit.getAdslot_id());
    }

    @Override // com.sigmob.sdk.rewardVideoAd.e.a
    public void g(BaseAdUnit baseAdUnit) {
        SigmobLog.d("onVideoPlay() called");
    }

    @Override // com.sigmob.sdk.rewardVideoAd.e.a
    public void h(BaseAdUnit baseAdUnit) {
        SigmobLog.d("onVideoSkip() called");
    }

    @Override // com.sigmob.sdk.rewardVideoAd.e.a
    public void i(BaseAdUnit baseAdUnit) {
        this.f = null;
        g gVar = this.n;
        if (gVar != null) {
            gVar.onVideoAdPlayEnd(baseAdUnit.getAdslot_id());
        }
        if (!baseAdUnit.getDisableAutoLoad() && TextUtils.isEmpty(this.i.getBidToken()) && baseAdUnit.bidding_response == null) {
            SigmobLog.d(baseAdUnit.getPlayMode() + " adsRequest onVideoClose: " + this.i.getBidToken());
            if (baseAdUnit.getPlayMode() == 0 || !TextUtils.isEmpty(this.i.getBidToken())) {
                return;
            }
            this.i.setLastCampid(baseAdUnit.getCamp_id());
            this.i.setLastCrid(baseAdUnit.getCrid());
            this.d = AdStatus.AdStatusNone;
            this.f5143a.post(new Runnable() { // from class: com.sigmob.sdk.rewardVideoAd.d.5
                @Override // java.lang.Runnable
                public void run() {
                    d dVar = d.this;
                    dVar.b(dVar.i);
                }
            });
        }
    }
}
