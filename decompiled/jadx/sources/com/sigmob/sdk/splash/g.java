package com.sigmob.sdk.splash;

import android.app.Activity;
import android.content.Context;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.models.AdStatus;
import com.czhj.sdk.common.utils.FileUtil;
import com.czhj.sdk.common.utils.ViewUtil;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.common.BaseBroadcastReceiver;
import com.sigmob.sdk.base.common.f;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.IntentActions;
import com.sigmob.sdk.base.models.LoadAdRequest;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.sdk.base.network.d;
import com.sigmob.sdk.splash.f;
import com.sigmob.windad.Splash.WindSplashADListener;
import com.sigmob.windad.Splash.WindSplashAdRequest;
import com.sigmob.windad.WindAdError;
import com.sigmob.windad.WindAds;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public final class g implements f.b, d.a, f.a {
    private static final int n = 131073;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final LoadAdRequest f5159a;
    private Handler c;
    private WindSplashADListener e;
    private int f;
    private i h;
    private BaseAdUnit i;
    private List<BaseAdUnit> o;
    private int j = 0;
    private int k = 0;
    private int l = 0;
    private int m = 0;
    private final Runnable b = new Runnable() { // from class: com.sigmob.sdk.splash.g.1
        @Override // java.lang.Runnable
        public void run() {
            if (g.this.c != null) {
                g.this.c.removeCallbacksAndMessages(null);
                if (g.this.h == null) {
                    return;
                }
                if (g.this.f <= 0) {
                    g.this.h.setDuration(0);
                    z.a("complete", (String) null, g.this.i);
                    return;
                }
                g.this.h.setDuration(g.this.f);
                g.d(g.this);
                if (g.this.l != 2 && g.this.m > 0 && ((g.this.k - g.this.f) * 100) / g.this.k >= g.this.m) {
                    SigmobLog.e("performAdClick: " + (((g.this.k - g.this.f) * 100) / g.this.k));
                    g.this.h.d();
                }
                g.this.c.postDelayed(g.this.b, 1000L);
            }
        }
    };
    private AdStatus g = AdStatus.AdStatusNone;
    private f d = new f(this);

    public g(WindSplashAdRequest windSplashAdRequest, WindSplashADListener windSplashADListener) {
        this.f5159a = new LoadAdRequest(windSplashAdRequest);
        this.e = windSplashADListener;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(WindAdError windAdError, boolean z) {
        WindSplashADListener windSplashADListener;
        this.g = AdStatus.AdStatusNone;
        Handler handler = this.c;
        if (handler != null) {
            handler.removeCallbacksAndMessages(null);
            this.c = null;
        }
        if (this.f5159a.getRequest_scene_type() != com.sigmob.sdk.rewardVideoAd.a.SplashCloseRequest.a().intValue() && (windSplashADListener = this.e) != null) {
            if (z) {
                windSplashADListener.onSplashAdLoadFail(windAdError, this.f5159a.getPlacementId());
            } else {
                windSplashADListener.onSplashAdShowError(windAdError, this.f5159a.getPlacementId());
            }
            this.e = null;
        }
        f fVar = this.d;
        if (fVar != null) {
            fVar.b(this.i);
        }
    }

    private boolean a(Context context, BaseAdUnit baseAdUnit) {
        if (baseAdUnit == null) {
            return false;
        }
        i iVar = new i(context.getApplicationContext());
        this.h = iVar;
        if (iVar == null) {
            return false;
        }
        iVar.b();
        this.h.setShowAppLogo(this.j != 0);
        return this.h.a(baseAdUnit);
    }

    static /* synthetic */ int d(g gVar) {
        int i = gVar.f;
        gVar.f = i - 1;
        return i;
    }

    private Activity k() {
        return ViewUtil.getActivityFromViewTop(this.h);
    }

    private void l() {
        f fVar = this.d;
        if (fVar != null) {
            if (fVar.d != null) {
                this.d.d.b(com.sigmob.sdk.b.b(), 0, this.i);
            }
            this.d.b(this.i);
        }
        Handler handler = this.c;
        if (handler != null) {
            handler.removeCallbacksAndMessages(null);
            this.c = null;
        }
        i iVar = this.h;
        if (iVar != null) {
            ViewUtil.removeFromParent(iVar);
            this.h = null;
        }
        this.i = null;
        this.e = null;
    }

    @Override // com.sigmob.sdk.base.common.m.c
    public void a() {
    }

    @Override // com.sigmob.sdk.base.network.d.a
    public void a(int i, String str, String str2, LoadAdRequest loadAdRequest) {
        WindAdError windAdError = WindAdError.getWindAdError(i);
        if (windAdError == null) {
            windAdError = WindAdError.ERROR_SIGMOB_REQUEST;
            windAdError.setErrorMessage(i, str);
        }
        z.a(PointCategory.RESPOND, "0", loadAdRequest);
        z.a("request", (String) null, i, str, loadAdRequest);
        a(windAdError, true);
    }

    public void a(Activity activity) {
        if (this.h == null || activity != k()) {
            return;
        }
        this.h.e();
        Handler handler = this.c;
        if (handler != null) {
            handler.removeCallbacksAndMessages(null);
            this.c = null;
        }
    }

    public void a(ViewGroup viewGroup) {
        if (!(1 == ClientMetadata.getInstance().getOrientationInt().intValue())) {
            h();
            return;
        }
        if (viewGroup != null) {
            viewGroup.removeAllViews();
            if (!a(viewGroup.getContext(), this.i)) {
                c();
                return;
            }
            viewGroup.addView(this.h, new FrameLayout.LayoutParams(-1, -1));
            this.d.a(this.i, (Bundle) null);
            this.f = this.d.d.l();
            this.l = this.d.d.n();
            this.m = this.d.d.o();
            this.h.setDuration(this.f);
            if (this.h.c()) {
                return;
            }
        }
        c();
    }

    @Override // com.sigmob.sdk.base.common.f.b
    public void a(BaseAdUnit baseAdUnit) {
    }

    @Override // com.sigmob.sdk.base.common.f.b
    public void a(BaseAdUnit baseAdUnit, String str) {
        SigmobLog.d(" loadEnd");
        if (!TextUtils.isEmpty(str)) {
            b(this.i, str);
            return;
        }
        z.a(PointCategory.READY, (String) null, baseAdUnit, this.f5159a, (z.a) null);
        if (this.g == AdStatus.AdStatusClose) {
            SigmobLog.d(" next load");
            FileUtil.writeToCache(baseAdUnit, com.sigmob.sdk.base.utils.b.a(this.f5159a.getPlacementId()));
        }
        if (this.g != AdStatus.AdStatusLoading) {
            return;
        }
        if (!(1 == ClientMetadata.getInstance().getOrientationInt().intValue())) {
            h();
            return;
        }
        Handler handler = this.c;
        if (handler != null) {
            handler.removeCallbacksAndMessages(null);
        }
        this.g = AdStatus.AdStatusReady;
        WindAds.sharedAds().getHandler().post(new Runnable() { // from class: com.sigmob.sdk.splash.g.3
            @Override // java.lang.Runnable
            public void run() {
                if (g.this.e != null) {
                    g.this.e.onSplashAdLoadSuccess(g.this.f5159a.getPlacementId());
                }
            }
        });
    }

    public void a(String str, int i, String str2, int i2, boolean z) {
        f fVar;
        if (z) {
            this.f5159a.setRequest_scene_type(com.sigmob.sdk.rewardVideoAd.a.SplashCloseRequest.a().intValue());
            z.a("request", PointCategory.PLAY, this.f5159a);
        } else {
            this.g = AdStatus.AdStatusLoading;
            if (g() && (fVar = this.d) != null) {
                fVar.a((Map<String, Object>) null, this.i);
                com.sigmob.sdk.base.common.f.e().a(this.i, this);
                return;
            }
            this.f5159a.setRequest_scene_type(com.sigmob.sdk.rewardVideoAd.a.NormalRequest.a().intValue());
        }
        Handler handler = new Handler(Looper.getMainLooper()) { // from class: com.sigmob.sdk.splash.g.2
            @Override // android.os.Handler
            public void handleMessage(Message message) {
                super.handleMessage(message);
                if (message.what != g.n) {
                    return;
                }
                WindAdError windAdError = WindAdError.ERROR_SIGMOB_SPLASH_TIMEOUT;
                z.a("request", (String) null, windAdError.getErrorCode(), windAdError.getMessage(), g.this.f5159a);
                g.this.a(windAdError, true);
            }
        };
        this.c = handler;
        handler.sendEmptyMessageDelayed(n, i2 * 1000);
        this.f5159a.setBidToken(str);
        this.f5159a.setBidFloor(i);
        this.f5159a.setCurrency(str2);
        com.sigmob.sdk.base.network.d.a(this.f5159a, this);
    }

    @Override // com.sigmob.sdk.base.network.d.a
    public void a(List<BaseAdUnit> list, LoadAdRequest loadAdRequest) {
        BaseAdUnit baseAdUnit = list.get(0);
        z.b(PointCategory.RESPOND, "1", baseAdUnit);
        if (!this.d.a(baseAdUnit)) {
            a(WindAdError.ERROR_SIGMOB_INFORMATION_LOSE, true);
            return;
        }
        this.i = baseAdUnit;
        this.o = list;
        f fVar = this.d;
        if (fVar != null) {
            fVar.a((Map<String, Object>) null, baseAdUnit);
        }
        com.sigmob.sdk.base.common.f.e().a(this.i, this);
    }

    @Override // com.sigmob.sdk.base.common.m.c
    public void b() {
        BaseBroadcastReceiver.a(com.sigmob.sdk.b.b(), this.i.getUuid(), IntentActions.ACTION_INTERSTITIAL_DISMISS);
    }

    public void b(Activity activity) {
        if (this.h == null || activity != k()) {
            return;
        }
        this.h.f();
        if (this.c == null) {
            this.c = new Handler(Looper.getMainLooper());
        }
        this.c.post(this.b);
    }

    @Override // com.sigmob.sdk.base.common.m.b
    public void b(BaseAdUnit baseAdUnit) {
        this.g = AdStatus.AdStatusPlaying;
        com.sigmob.sdk.base.common.f.b(baseAdUnit);
        if (this.h.getDuration() > 0 && this.h.getDuration() < this.f) {
            this.f = this.h.getDuration();
        }
        i iVar = this.h;
        if (iVar != null) {
            iVar.setDuration(this.f);
            this.h.setVisibility(0);
        }
        WindSplashADListener windSplashADListener = this.e;
        if (windSplashADListener != null) {
            windSplashADListener.onSplashAdShow(this.f5159a.getPlacementId());
        }
        if (this.c == null) {
            this.c = new Handler(Looper.getMainLooper());
        }
        this.k = this.f;
        this.c.post(this.b);
    }

    @Override // com.sigmob.sdk.base.common.m.b
    public void b(BaseAdUnit baseAdUnit, String str) {
        WindAdError windAdError = WindAdError.ERROR_SIGMOB_FILE_DOWNLOAD;
        windAdError.setMessage(str);
        a(windAdError, true);
        z.a(PointCategory.LOAD, windAdError, this.i);
    }

    @Override // com.sigmob.sdk.splash.f.a
    public void c() {
        z.a(PointCategory.PLAY, WindAdError.ERROR_SIGMOB_SPLASH_UNSUPPORT_RESOURCE, this.i);
        a(WindAdError.ERROR_SIGMOB_SPLASH_UNSUPPORT_RESOURCE, false);
        l();
    }

    public void c(Activity activity) {
    }

    @Override // com.sigmob.sdk.base.common.m.b
    public void c(BaseAdUnit baseAdUnit) {
        this.g = AdStatus.AdStatusClick;
        WindSplashADListener windSplashADListener = this.e;
        if (windSplashADListener != null) {
            windSplashADListener.onSplashAdClick(this.f5159a.getPlacementId());
        }
    }

    @Override // com.sigmob.sdk.splash.f.a
    public void d() {
        f fVar = this.d;
        if (fVar != null && fVar.d != null) {
            this.d.d.c(com.sigmob.sdk.b.b(), 0, this.i);
        }
        this.h.setDuration(0);
        WindSplashADListener windSplashADListener = this.e;
        if (windSplashADListener != null) {
            windSplashADListener.onSplashAdSkip(this.f5159a.getPlacementId());
        }
    }

    @Override // com.sigmob.sdk.base.common.m.b
    public void d(BaseAdUnit baseAdUnit) {
        WindSplashADListener windSplashADListener = this.e;
        if (windSplashADListener != null) {
            windSplashADListener.onSplashAdClose(this.f5159a.getPlacementId());
        }
        this.g = AdStatus.AdStatusClose;
        l();
        com.sigmob.sdk.base.common.f.c(baseAdUnit);
        if (TextUtils.isEmpty(this.f5159a.getBidToken()) && baseAdUnit.bidding_response == null) {
            a(null, 0, WindAds.CNY, 45, true);
        }
    }

    @Override // com.sigmob.sdk.splash.f.a
    public void e() {
    }

    @Override // com.sigmob.sdk.base.common.m.b
    public void e(BaseAdUnit baseAdUnit) {
    }

    @Override // com.sigmob.sdk.splash.f.a
    public void f() {
        Handler handler = this.c;
        if (handler != null) {
            handler.removeCallbacksAndMessages(null);
            this.c = null;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x006f  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public boolean g() {
        /*
            r8 = this;
            r0 = 0
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r8.i     // Catch: java.lang.Exception -> L76
            if (r1 != 0) goto L31
            com.sigmob.sdk.base.models.LoadAdRequest r1 = r8.f5159a     // Catch: java.lang.Exception -> L76
            java.lang.String r1 = r1.getPlacementId()     // Catch: java.lang.Exception -> L76
            java.lang.String r1 = com.sigmob.sdk.base.utils.b.a(r1)     // Catch: java.lang.Exception -> L76
            java.lang.Object r1 = com.czhj.sdk.common.utils.FileUtil.readFromCache(r1)     // Catch: java.lang.Exception -> L76
            boolean r2 = r1 instanceof com.sigmob.sdk.base.models.BaseAdUnit     // Catch: java.lang.Exception -> L76
            if (r2 == 0) goto L31
            r2 = r1
            com.sigmob.sdk.base.models.BaseAdUnit r2 = (com.sigmob.sdk.base.models.BaseAdUnit) r2     // Catch: java.lang.Exception -> L76
            com.sigmob.sdk.base.models.rtb.Ad r2 = r2.getAd()     // Catch: java.lang.Exception -> L76
            if (r2 == 0) goto L31
            com.sigmob.sdk.base.models.LoadAdRequest r2 = r8.f5159a     // Catch: java.lang.Exception -> L76
            java.lang.String r2 = r2.getPlacementId()     // Catch: java.lang.Exception -> L76
            java.lang.String r2 = com.sigmob.sdk.base.utils.b.a(r2)     // Catch: java.lang.Exception -> L76
            com.czhj.sdk.common.utils.FileUtil.deleteFile(r2)     // Catch: java.lang.Exception -> L76
            com.sigmob.sdk.base.models.BaseAdUnit r1 = (com.sigmob.sdk.base.models.BaseAdUnit) r1     // Catch: java.lang.Exception -> L76
            r8.i = r1     // Catch: java.lang.Exception -> L76
        L31:
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r8.i     // Catch: java.lang.Exception -> L76
            if (r1 == 0) goto L7e
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> L76
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r8.i     // Catch: java.lang.Exception -> L76
            java.lang.String r2 = r2.getSplashFilePath()     // Catch: java.lang.Exception -> L76
            r1.<init>(r2)     // Catch: java.lang.Exception -> L76
            boolean r1 = r1.canRead()     // Catch: java.lang.Exception -> L76
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r8.i     // Catch: java.lang.Exception -> L76
            com.sigmob.sdk.base.models.rtb.Ad r2 = r2.getAd()     // Catch: java.lang.Exception -> L76
            java.lang.Integer r2 = r2.expired_time     // Catch: java.lang.Exception -> L76
            int r2 = r2.intValue()     // Catch: java.lang.Exception -> L76
            r3 = 1
            if (r2 == 0) goto L6f
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L76
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r8.i     // Catch: java.lang.Exception -> L76
            long r6 = r2.getCreate_time()     // Catch: java.lang.Exception -> L76
            long r4 = r4 - r6
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r8.i     // Catch: java.lang.Exception -> L76
            java.lang.Integer r2 = r2.getAdExpiredTime()     // Catch: java.lang.Exception -> L76
            int r2 = r2.intValue()     // Catch: java.lang.Exception -> L76
            long r6 = (long) r2
            int r2 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r2 <= 0) goto L6f
            r2 = r3
            goto L70
        L6f:
            r2 = r0
        L70:
            if (r1 == 0) goto L75
            if (r2 != 0) goto L75
            r0 = r3
        L75:
            return r0
        L76:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r1)
        L7e:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.sigmob.sdk.splash.g.g():boolean");
    }

    public void h() {
        z.a(PointCategory.PLAY, WindAdError.ERROR_SIGMOB_SPLASH_UNSUPPORT_ORIENTATION, this.i);
        a(WindAdError.ERROR_SIGMOB_SPLASH_UNSUPPORT_ORIENTATION, false);
        l();
    }

    public String i() {
        BaseAdUnit baseAdUnit = this.i;
        if (baseAdUnit == null || baseAdUnit.bidding_response == null) {
            return null;
        }
        return String.valueOf(this.i.bidding_response.ecpm);
    }

    public List<BaseAdUnit> j() {
        return this.o;
    }
}
