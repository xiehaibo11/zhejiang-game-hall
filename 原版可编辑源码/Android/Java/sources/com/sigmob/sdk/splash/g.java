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
import java.io.File;
import java.util.List;
import java.util.Map;

public final class g implements f.b, d.a, f.a {
    private static final int n = 131073;
    private final LoadAdRequest a;
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
    private final Runnable b = new Runnable() {
        @Override
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
        this.a = new LoadAdRequest(windSplashAdRequest);
        this.e = windSplashADListener;
    }

    private void a(WindAdError windAdError, boolean z) {
        WindSplashADListener windSplashADListener;
        this.g = AdStatus.AdStatusNone;
        Handler handler = this.c;
        if (handler != null) {
            handler.removeCallbacksAndMessages(null);
            this.c = null;
        }
        if (this.a.getRequest_scene_type() != com.sigmob.sdk.rewardVideoAd.a.e.a().intValue() && (windSplashADListener = this.e) != null) {
            if (z) {
                windSplashADListener.onSplashAdLoadFail(windAdError, this.a.getPlacementId());
            } else {
                windSplashADListener.onSplashAdShowError(windAdError, this.a.getPlacementId());
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

    static int d(g gVar) {
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

    @Override
    public void a() {
    }

    @Override
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

    @Override
    public void a(BaseAdUnit baseAdUnit) {
    }

    @Override
    public void a(BaseAdUnit baseAdUnit, String str) {
        SigmobLog.d(" loadEnd");
        if (!TextUtils.isEmpty(str)) {
            b(this.i, str);
            return;
        }
        z.a(PointCategory.READY, (String) null, baseAdUnit, this.a, (z.a) null);
        if (this.g == AdStatus.AdStatusClose) {
            SigmobLog.d(" next load");
            FileUtil.writeToCache(baseAdUnit, com.sigmob.sdk.base.utils.b.a(this.a.getPlacementId()));
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
        WindAds.sharedAds().getHandler().post(new Runnable() {
            @Override
            public void run() {
                if (g.this.e != null) {
                    g.this.e.onSplashAdLoadSuccess(g.this.a.getPlacementId());
                }
            }
        });
    }

    public void a(String str, int i, String str2, int i2, boolean z) {
        f fVar;
        if (z) {
            this.a.setRequest_scene_type(com.sigmob.sdk.rewardVideoAd.a.e.a().intValue());
            z.a("request", PointCategory.PLAY, this.a);
        } else {
            this.g = AdStatus.AdStatusLoading;
            if (g() && (fVar = this.d) != null) {
                fVar.a((Map<String, Object>) null, this.i);
                com.sigmob.sdk.base.common.f.e().a(this.i, this);
                return;
            }
            this.a.setRequest_scene_type(com.sigmob.sdk.rewardVideoAd.a.c.a().intValue());
        }
        Handler handler = new Handler(Looper.getMainLooper()) {
            @Override
            public void handleMessage(Message message) {
                super.handleMessage(message);
                if (message.what != g.n) {
                    return;
                }
                WindAdError windAdError = WindAdError.ERROR_SIGMOB_SPLASH_TIMEOUT;
                z.a("request", (String) null, windAdError.getErrorCode(), windAdError.getMessage(), g.this.a);
                g.this.a(windAdError, true);
            }
        };
        this.c = handler;
        handler.sendEmptyMessageDelayed(n, i2 * 1000);
        this.a.setBidToken(str);
        this.a.setBidFloor(i);
        this.a.setCurrency(str2);
        com.sigmob.sdk.base.network.d.a(this.a, this);
    }

    @Override
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

    @Override
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

    @Override
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
            windSplashADListener.onSplashAdShow(this.a.getPlacementId());
        }
        if (this.c == null) {
            this.c = new Handler(Looper.getMainLooper());
        }
        this.k = this.f;
        this.c.post(this.b);
    }

    @Override
    public void b(BaseAdUnit baseAdUnit, String str) {
        WindAdError windAdError = WindAdError.ERROR_SIGMOB_FILE_DOWNLOAD;
        windAdError.setMessage(str);
        a(windAdError, true);
        z.a(PointCategory.LOAD, windAdError, this.i);
    }

    @Override
    public void c() {
        z.a(PointCategory.PLAY, WindAdError.ERROR_SIGMOB_SPLASH_UNSUPPORT_RESOURCE, this.i);
        a(WindAdError.ERROR_SIGMOB_SPLASH_UNSUPPORT_RESOURCE, false);
        l();
    }

    public void c(Activity activity) {
    }

    @Override
    public void c(BaseAdUnit baseAdUnit) {
        this.g = AdStatus.AdStatusClick;
        WindSplashADListener windSplashADListener = this.e;
        if (windSplashADListener != null) {
            windSplashADListener.onSplashAdClick(this.a.getPlacementId());
        }
    }

    @Override
    public void d() {
        f fVar = this.d;
        if (fVar != null && fVar.d != null) {
            this.d.d.c(com.sigmob.sdk.b.b(), 0, this.i);
        }
        this.h.setDuration(0);
        WindSplashADListener windSplashADListener = this.e;
        if (windSplashADListener != null) {
            windSplashADListener.onSplashAdSkip(this.a.getPlacementId());
        }
    }

    @Override
    public void d(BaseAdUnit baseAdUnit) {
        WindSplashADListener windSplashADListener = this.e;
        if (windSplashADListener != null) {
            windSplashADListener.onSplashAdClose(this.a.getPlacementId());
        }
        this.g = AdStatus.AdStatusClose;
        l();
        com.sigmob.sdk.base.common.f.c(baseAdUnit);
        if (TextUtils.isEmpty(this.a.getBidToken()) && baseAdUnit.bidding_response == null) {
            a(null, 0, WindAds.CNY, 45, true);
        }
    }

    @Override
    public void e() {
    }

    @Override
    public void e(BaseAdUnit baseAdUnit) {
    }

    @Override
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
    */
    public boolean g() {
        boolean z;
        try {
            if (this.i == null) {
                Object fromCache = FileUtil.readFromCache(com.sigmob.sdk.base.utils.b.a(this.a.getPlacementId()));
                if ((fromCache instanceof BaseAdUnit) && ((BaseAdUnit) fromCache).getAd() != null) {
                    FileUtil.deleteFile(com.sigmob.sdk.base.utils.b.a(this.a.getPlacementId()));
                    this.i = (BaseAdUnit) fromCache;
                }
            }
            if (this.i != null) {
                boolean zCanRead = new File(this.i.getSplashFilePath()).canRead();
                if (this.i.getAd().expired_time.intValue() != 0) {
                    z = System.currentTimeMillis() - this.i.getCreate_time() > ((long) this.i.getAdExpiredTime().intValue());
                }
                return zCanRead && !z;
            }
        } catch (Exception e) {
            SigmobLog.e(e.getMessage());
        }
        return false;
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
