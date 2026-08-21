package com.sigmob.windad.Splash;

import android.app.Activity;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.view.ViewGroup;
import android.view.Window;
import android.view.WindowManager;
import android.widget.RelativeLayout;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.models.AdStatus;
import com.czhj.sdk.common.utils.AdLifecycleManager;
import com.czhj.sdk.common.utils.ViewUtil;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.g;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.windad.WindAdError;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public final class WindSplashAD extends g implements AdLifecycleManager.LifecycleListener, WindSplashADListener {
    public AdStatus adStatus;
    private WindSplashADListener b;
    private ViewGroup c;
    private int d;
    private RelativeLayout e;
    private boolean f;
    private boolean g;
    private boolean h;
    private com.sigmob.sdk.splash.g i;
    private Handler j;

    public WindSplashAD(WindSplashAdRequest windSplashAdRequest, WindSplashADListener windSplashADListener) {
        super(windSplashAdRequest, false);
        this.adStatus = AdStatus.AdStatusNone;
        this.d = 5;
        this.g = false;
        this.b = windSplashADListener;
        this.j = new Handler(Looper.getMainLooper());
        this.i = new com.sigmob.sdk.splash.g(windSplashAdRequest, this);
        this.d = windSplashAdRequest.getFetchDelay();
        this.f = windSplashAdRequest.isDisableAutoHideAd();
    }

    private void a(final WindAdError windAdError, final String str) {
        SigmobLog.e("onSplashError: " + windAdError + " :placementId: " + str);
        if (this.g) {
            return;
        }
        this.j.removeMessages(1);
        this.j.post(new Runnable() { // from class: com.sigmob.windad.Splash.WindSplashAD.2
            @Override // java.lang.Runnable
            public void run() {
                if (WindSplashAD.this.b != null) {
                    WindSplashAD.this.g = true;
                    WindSplashAD.this.b.onSplashAdLoadFail(windAdError, str);
                }
            }
        });
        h();
    }

    private void d() {
        RelativeLayout relativeLayout = new RelativeLayout(this.c.getContext());
        this.e = relativeLayout;
        relativeLayout.setVisibility(4);
        this.e.setId(ClientMetadata.generateViewId());
        this.c.addView(this.e, new RelativeLayout.LayoutParams(-1, -1));
    }

    private void e() {
        if (this.i == null) {
            a(WindAdError.ERROR_SIGMOB_SPLASH_NOT_READY, a());
            return;
        }
        d();
        RelativeLayout relativeLayout = this.e;
        if (relativeLayout != null) {
            relativeLayout.setVisibility(0);
        }
        this.j.post(new Runnable() { // from class: com.sigmob.windad.Splash.WindSplashAD.1
            @Override // java.lang.Runnable
            public void run() {
                WindSplashAD.this.i.a(WindSplashAD.this.e);
            }
        });
        this.adStatus = AdStatus.AdStatusPlaying;
    }

    private boolean f() {
        if (!loadAdFilter()) {
            return false;
        }
        AdLifecycleManager.getInstance().addLifecycleListener(this);
        this.adStatus = AdStatus.AdStatusLoading;
        if (!this.i.g()) {
            b();
        }
        this.i.a(getBid_token(), getBidFloor(), getCurrency(), this.d, false);
        return true;
    }

    private void g() {
        ViewGroup viewGroup;
        Activity activityFromViewTop;
        if (Build.VERSION.SDK_INT < 19 || (viewGroup = this.c) == null || (activityFromViewTop = ViewUtil.getActivityFromViewTop(viewGroup)) == null) {
            return;
        }
        Window window = activityFromViewTop.getWindow();
        WindowManager.LayoutParams attributes = window.getAttributes();
        attributes.systemUiVisibility = 2050;
        window.setAttributes(attributes);
        window.addFlags(1024);
    }

    private void h() {
        RelativeLayout relativeLayout;
        if (this.f || (relativeLayout = this.e) == null) {
            return;
        }
        relativeLayout.setVisibility(8);
    }

    @Override // com.sigmob.sdk.base.g
    protected void a(WindAdError windAdError) {
        this.adStatus = AdStatus.AdStatusNone;
        WindSplashADListener windSplashADListener = this.b;
        if (windSplashADListener != null) {
            windSplashADListener.onSplashAdLoadFail(windAdError, a());
        }
    }

    @Override // com.sigmob.sdk.base.g
    protected List<BaseAdUnit> c() {
        com.sigmob.sdk.splash.g gVar = this.i;
        if (gVar != null) {
            return gVar.j();
        }
        return null;
    }

    public void destroy() {
        if (this.i != null) {
            this.j.removeCallbacksAndMessages(null);
            this.b = null;
        }
    }

    @Override // com.sigmob.sdk.base.g
    public String getEcpm() {
        com.sigmob.sdk.splash.g gVar = this.i;
        if (gVar != null) {
            return gVar.i();
        }
        return null;
    }

    public boolean isReady() {
        return this.adStatus == AdStatus.AdStatusReady && this.i.g();
    }

    @Override // com.sigmob.sdk.base.g
    public boolean loadAd() {
        this.h = false;
        super.loadAd();
        return f();
    }

    @Override // com.sigmob.sdk.base.g
    public boolean loadAd(String str) {
        super.loadAd(str);
        return f();
    }

    public void loadAndShow(ViewGroup viewGroup) {
        if (viewGroup == null) {
            a(WindAdError.ERROR_SIGMOB_ADCONTAINER_IS_NULL);
            return;
        }
        super.loadAd();
        this.c = viewGroup;
        this.h = true;
        f();
    }

    public void loadAndShow(String str, ViewGroup viewGroup) {
        if (viewGroup == null) {
            a(WindAdError.ERROR_SIGMOB_ADCONTAINER_IS_NULL);
            return;
        }
        super.loadAd(str);
        this.c = viewGroup;
        this.h = true;
        f();
    }

    @Override // com.czhj.sdk.common.utils.AdLifecycleManager.LifecycleListener
    public void onCreate(Activity activity) {
    }

    @Override // com.czhj.sdk.common.utils.AdLifecycleManager.LifecycleListener
    public void onDestroy(Activity activity) {
    }

    @Override // com.czhj.sdk.common.utils.AdLifecycleManager.LifecycleListener
    public void onPause(Activity activity) {
        com.sigmob.sdk.splash.g gVar = this.i;
        if (gVar != null) {
            gVar.a(activity);
        }
    }

    @Override // com.czhj.sdk.common.utils.AdLifecycleManager.LifecycleListener
    public void onResume(Activity activity) {
        com.sigmob.sdk.splash.g gVar = this.i;
        if (gVar != null) {
            gVar.b(activity);
        }
    }

    @Override // com.sigmob.windad.Splash.WindSplashADListener
    public void onSplashAdClick(String str) {
        this.adStatus = AdStatus.AdStatusClick;
        WindSplashADListener windSplashADListener = this.b;
        if (windSplashADListener != null) {
            windSplashADListener.onSplashAdClick(str);
        }
    }

    @Override // com.sigmob.windad.Splash.WindSplashADListener
    public void onSplashAdClose(String str) {
        this.adStatus = AdStatus.AdStatusClose;
        WindSplashADListener windSplashADListener = this.b;
        if (windSplashADListener != null) {
            windSplashADListener.onSplashAdClose(str);
        }
        h();
    }

    @Override // com.sigmob.windad.Splash.WindSplashADListener
    public void onSplashAdLoadFail(WindAdError windAdError, String str) {
        this.adStatus = AdStatus.AdStatusNone;
        WindSplashADListener windSplashADListener = this.b;
        if (windSplashADListener != null) {
            windSplashADListener.onSplashAdLoadFail(windAdError, str);
        }
    }

    @Override // com.sigmob.windad.Splash.WindSplashADListener
    public void onSplashAdLoadSuccess(String str) {
        this.adStatus = AdStatus.AdStatusReady;
        WindSplashADListener windSplashADListener = this.b;
        if (windSplashADListener != null) {
            windSplashADListener.onSplashAdLoadSuccess(str);
        }
        if (this.h) {
            e();
        }
    }

    @Override // com.sigmob.windad.Splash.WindSplashADListener
    public void onSplashAdShow(String str) {
        WindSplashADListener windSplashADListener = this.b;
        if (windSplashADListener != null) {
            windSplashADListener.onSplashAdShow(str);
        }
    }

    @Override // com.sigmob.windad.Splash.WindSplashADListener
    public void onSplashAdShowError(WindAdError windAdError, String str) {
        this.adStatus = AdStatus.AdStatusNone;
        WindSplashADListener windSplashADListener = this.b;
        if (windSplashADListener != null) {
            windSplashADListener.onSplashAdShowError(windAdError, str);
        }
    }

    @Override // com.sigmob.windad.Splash.WindSplashADListener
    public void onSplashAdSkip(String str) {
        WindSplashADListener windSplashADListener = this.b;
        if (windSplashADListener != null) {
            windSplashADListener.onSplashAdSkip(str);
        }
    }

    @Override // com.czhj.sdk.common.utils.AdLifecycleManager.LifecycleListener
    public void onStart(Activity activity) {
    }

    @Override // com.czhj.sdk.common.utils.AdLifecycleManager.LifecycleListener
    public void onStop(Activity activity) {
    }

    public void show(ViewGroup viewGroup) {
        if (this.h) {
            return;
        }
        if (this.adStatus != AdStatus.AdStatusReady) {
            a(WindAdError.ERROR_SIGMOB_SPLASH_NOT_READY, a());
        } else if (viewGroup == null) {
            onSplashAdShowError(WindAdError.ERROR_SIGMOB_ADCONTAINER_IS_NULL, a());
        } else {
            this.c = viewGroup;
            e();
        }
    }
}
