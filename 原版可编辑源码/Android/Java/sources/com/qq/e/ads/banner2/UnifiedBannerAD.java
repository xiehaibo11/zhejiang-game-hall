package com.qq.e.ads.banner2;

import android.app.Activity;
import android.content.Context;
import com.bianfeng.platform.UserInterface;
import com.qq.e.ads.LiteAbstractAD;
import com.qq.e.ads.cfg.DownAPPConfirmPolicy;
import com.qq.e.ads.rewardvideo.ServerSideVerificationOptions;
import com.qq.e.comm.constants.LoadAdParams;
import com.qq.e.comm.listeners.ADRewardListener;
import com.qq.e.comm.listeners.NegativeFeedbackListener;
import com.qq.e.comm.pi.IReward;
import com.qq.e.comm.pi.NFBI;
import com.qq.e.comm.pi.POFactory;
import com.qq.e.comm.pi.UBVI;
import com.qq.e.comm.util.AdErrorConvertor;
import java.util.concurrent.atomic.AtomicInteger;

class UnifiedBannerAD extends LiteAbstractAD<UBVI> implements NFBI, IReward {
    private UnifiedBannerADListener g;
    private DownAPPConfirmPolicy h;
    private AtomicInteger i;
    private int j;
    private LoadAdParams k;
    private UnifiedBannerView l;
    private final ADListenerAdapter m;
    private volatile ServerSideVerificationOptions n;

    UnifiedBannerAD(Activity activity, UnifiedBannerView unifiedBannerView, String str, UnifiedBannerADListener unifiedBannerADListener) {
        this(unifiedBannerView, unifiedBannerADListener);
        a(activity, str);
    }

    UnifiedBannerAD(Activity activity, UnifiedBannerView unifiedBannerView, String str, String str2, UnifiedBannerADListener unifiedBannerADListener) {
        this(unifiedBannerView, unifiedBannerADListener);
        a(activity, str, str2);
    }

    private UnifiedBannerAD(UnifiedBannerView unifiedBannerView, UnifiedBannerADListener unifiedBannerADListener) {
        this.i = new AtomicInteger(0);
        this.j = 30;
        this.k = null;
        this.g = unifiedBannerADListener;
        this.l = unifiedBannerView;
        this.m = new ADListenerAdapter(unifiedBannerADListener);
    }

    @Override
    protected Object a(Context context, POFactory pOFactory, String str, String str2, String str3) {
        return pOFactory.getUnifiedBannerViewDelegate(this.l, (Activity) context, str, str2, str3, this.m);
    }

    void a(DownAPPConfirmPolicy downAPPConfirmPolicy) {
        T t;
        this.h = downAPPConfirmPolicy;
        if (downAPPConfirmPolicy == null || (t = this.a) == 0) {
            return;
        }
        ((UBVI) t).setDownAPPConfirmPolicy(downAPPConfirmPolicy);
    }

    @Override
    protected void b(int i) {
        UnifiedBannerADListener unifiedBannerADListener = this.g;
        if (unifiedBannerADListener != null) {
            unifiedBannerADListener.onNoAD(AdErrorConvertor.formatErrorCode(i));
        }
    }

    void c(int i) {
        this.j = i;
        T t = this.a;
        if (t != 0) {
            ((UBVI) t).setRefresh(i);
        }
    }

    void destroy() {
        T t = this.a;
        if (t != 0) {
            ((UBVI) t).destroy();
        } else {
            a(UserInterface.FUNCTION_DESTROY);
        }
    }

    public String getAdNetWorkName() {
        T t = this.a;
        if (t != 0) {
            return ((UBVI) t).getAdNetWorkName();
        }
        a("getAdNetWorkName");
        return null;
    }

    void loadAD() {
        if (a()) {
            if (!b()) {
                this.i.incrementAndGet();
                return;
            }
            T t = this.a;
            if (t != 0) {
                ((UBVI) t).fetchAd();
            } else {
                a("loadAD");
            }
        }
    }

    void onWindowFocusChanged(boolean z) {
        T t = this.a;
        if (t != 0) {
            ((UBVI) t).onWindowFocusChanged(z);
        }
    }

    void setLoadAdParams(LoadAdParams loadAdParams) {
        this.k = loadAdParams;
        T t = this.a;
        if (t != 0) {
            ((UBVI) t).setLoadAdParams(loadAdParams);
        }
    }

    @Override
    public void setNegativeFeedbackListener(NegativeFeedbackListener negativeFeedbackListener) {
        this.m.setNegativeFeedbackListener(negativeFeedbackListener);
    }

    @Override
    public void setRewardListener(ADRewardListener aDRewardListener) {
        this.m.setAdRewardListener(aDRewardListener);
    }

    @Override
    public void setServerSideVerificationOptions(ServerSideVerificationOptions serverSideVerificationOptions) {
        this.n = serverSideVerificationOptions;
        T t = this.a;
        if (t != 0) {
            ((UBVI) t).setServerSideVerificationOptions(serverSideVerificationOptions);
        }
    }

    @Override
    protected void a(Object obj) {
        UBVI ubvi = (UBVI) obj;
        DownAPPConfirmPolicy downAPPConfirmPolicy = this.h;
        if (downAPPConfirmPolicy != null) {
            this.h = downAPPConfirmPolicy;
            T t = this.a;
            if (t != 0) {
                ((UBVI) t).setDownAPPConfirmPolicy(downAPPConfirmPolicy);
            }
        }
        int i = this.j;
        this.j = i;
        T t2 = this.a;
        if (t2 != 0) {
            ((UBVI) t2).setRefresh(i);
        }
        LoadAdParams loadAdParams = this.k;
        this.k = loadAdParams;
        T t3 = this.a;
        if (t3 != 0) {
            ((UBVI) t3).setLoadAdParams(loadAdParams);
        }
        ubvi.setServerSideVerificationOptions(this.n);
        while (this.i.getAndDecrement() > 0) {
            loadAD();
        }
    }
}
