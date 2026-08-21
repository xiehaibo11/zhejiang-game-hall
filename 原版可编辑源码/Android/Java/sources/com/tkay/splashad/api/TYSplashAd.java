package com.tkay.splashad.api;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import android.view.ViewGroup;
import com.tkay.core.api.AdError;
import com.tkay.core.api.TYAdInfo;
import com.tkay.core.api.TYAdSourceStatusListener;
import com.tkay.core.api.TYAdStatusInfo;
import com.tkay.core.api.TYEventInterface;
import com.tkay.core.api.TYMediationRequestInfo;
import com.tkay.core.api.TYNetworkConfirmInfo;
import com.tkay.core.common.b.b;
import com.tkay.core.common.b.f;
import com.tkay.core.common.b.m;
import com.tkay.core.common.h;
import com.tkay.core.common.l.b.a;
import com.tkay.core.common.l.g;
import com.tkay.core.common.l.n;
import com.tkay.core.common.v;
import com.tkay.splashad.a.c;
import java.lang.ref.WeakReference;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

public class TYSplashAd {
    public final int DEFAULT_SPLASH_TIMEOUT_TIME;
    final String TAG;
    WeakReference<Activity> mActivityWeakRef;
    c mAdLoadManager;
    b mAdSourceEventListener;
    Context mContext;
    String mDefaultAdSourceConfig;
    TYMediationRequestInfo mDefaultRequestInfo;
    TYAdSourceStatusListener mDeveloperStatusListener;
    TYEventInterface mDownloadListener;
    int mFetchAdTimeout;
    TYSplashAdListener mListener;
    String mPlacementId;
    Map<String, Object> mTKExtraMap;

    @Deprecated
    public void onDestory() {
    }

    public TYSplashAd(Context context, String str, TYSplashAdListener tYSplashAdListener) {
        this(context, str, tYSplashAdListener, 0, "");
    }

    @Deprecated
    public TYSplashAd(Context context, String str, TYMediationRequestInfo tYMediationRequestInfo, TYSplashAdListener tYSplashAdListener) {
        this(context, str, tYMediationRequestInfo, tYSplashAdListener, 0);
    }

    @Deprecated
    public TYSplashAd(Context context, String str, TYMediationRequestInfo tYMediationRequestInfo, TYSplashAdListener tYSplashAdListener, int i) {
        this.TAG = getClass().getSimpleName();
        this.DEFAULT_SPLASH_TIMEOUT_TIME = 5000;
        this.mContext = context.getApplicationContext();
        this.mPlacementId = str;
        this.mListener = tYSplashAdListener;
        this.mDefaultRequestInfo = tYMediationRequestInfo;
        this.mFetchAdTimeout = i;
        if (context instanceof Activity) {
            this.mActivityWeakRef = new WeakReference<>((Activity) context);
        }
        TYMediationRequestInfo tYMediationRequestInfo2 = this.mDefaultRequestInfo;
        if (tYMediationRequestInfo2 != null) {
            tYMediationRequestInfo2.setFormat("4");
        }
        this.mAdLoadManager = c.a(context, str);
    }

    public TYSplashAd(Context context, String str, TYSplashAdListener tYSplashAdListener, String str2) {
        this(context, str, tYSplashAdListener, 0, str2);
    }

    public TYSplashAd(Context context, String str, TYSplashAdListener tYSplashAdListener, int i, String str2) {
        this.TAG = getClass().getSimpleName();
        this.DEFAULT_SPLASH_TIMEOUT_TIME = 5000;
        this.mContext = context.getApplicationContext();
        this.mPlacementId = str;
        this.mListener = tYSplashAdListener;
        this.mDefaultAdSourceConfig = str2;
        this.mFetchAdTimeout = i;
        if (context instanceof Activity) {
            this.mActivityWeakRef = new WeakReference<>((Activity) context);
        }
        TYMediationRequestInfo tYMediationRequestInfo = this.mDefaultRequestInfo;
        if (tYMediationRequestInfo != null) {
            tYMediationRequestInfo.setFormat("4");
        }
        this.mAdLoadManager = c.a(context, str);
    }

    public void setAdListener(TYSplashAdListener tYSplashAdListener) {
        this.mListener = tYSplashAdListener;
    }

    public static void entryAdScenario(String str, String str2) {
        m.a().a(str, str2, "4", (Map<String, Object>) null);
    }

    public static void entryAdScenario(String str, String str2, Map<String, Object> map) {
        m.a().a(str, str2, "4", map);
    }

    public void setLocalExtra(Map<String, Object> map) {
        v.a().a(this.mPlacementId, map);
    }

    public void setTKExtra(Map<String, Object> map) {
        if (this.mTKExtraMap == null) {
            this.mTKExtraMap = new ConcurrentHashMap();
        }
        this.mTKExtraMap.clear();
        this.mTKExtraMap.putAll(map);
    }

    public void loadAd() {
        loadAd(0);
    }

    private void loadAd(int i) {
        n.a(this.mPlacementId, f.i.s, f.i.w, f.i.n, "", true);
        a.a().a(new 1(i));
    }

    class 1 implements Runnable {
        final int val$loadType;

        1(int i) {
            this.val$loadType = i;
        }

        @Override
        public void run() {
            int iV = TYSplashAd.this.mFetchAdTimeout;
            if (iV <= 0) {
                com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(TYSplashAd.this.mContext).b(m.a().o());
                iV = aVarB.V() == 0 ? 5000 : (int) aVarB.V();
            }
            int i = iV;
            1 r1 = null;
            Activity activity = TYSplashAd.this.mActivityWeakRef != null ? TYSplashAd.this.mActivityWeakRef.get() : null;
            if (this.val$loadType == 0) {
                r1 = new 1();
                r1.startCountDown(i);
            }
            1 r5 = r1;
            c cVar = TYSplashAd.this.mAdLoadManager;
            if (activity == null) {
                activity = TYSplashAd.this.mContext;
            }
            cVar.a(activity, TYSplashAd.this.mDefaultRequestInfo, TYSplashAd.this.mDefaultAdSourceConfig, r5, i, this.val$loadType, TYSplashAd.this.mAdSourceEventListener, TYSplashAd.this.mTKExtraMap);
        }

        class 1 extends com.tkay.splashad.a.b {
            boolean hasCacheWhenTimeout = false;

            1() {
            }

            @Override
            public void onAdLoaded(String str, final boolean z) {
                m.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        if (TYSplashAd.this.mListener != null) {
                            TYSplashAd.this.mListener.onAdLoaded(!1.this.hasCacheWhenTimeout && z);
                        }
                    }
                });
            }

            @Override
            public void onNoAdError(String str, final AdError adError) {
                m.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        if (TYSplashAd.this.mListener != null) {
                            TYSplashAd.this.mListener.onNoAdError(adError);
                        }
                    }
                });
            }

            @Override
            public void onTimeout(String str) {
                if (TYSplashAd.this.mAdLoadManager.a(TYSplashAd.this.mContext, false, false, TYSplashAd.this.mTKExtraMap) != null) {
                    this.hasCacheWhenTimeout = true;
                    h hVarC = TYSplashAd.this.mAdLoadManager.c(str);
                    if (hVarC != null) {
                        Log.i(TYSplashAd.this.TAG, "has cache when timeout: " + TYSplashAd.this.mPlacementId);
                        hVarC.b(9);
                        return;
                    }
                }
                m.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        if (TYSplashAd.this.mListener != null) {
                            TYSplashAd.this.mListener.onAdLoadTimeout();
                        }
                    }
                });
            }
        }
    }

    public boolean isAdReady() {
        TYAdStatusInfo adStatus = getAdStatus();
        if (adStatus == null) {
            return false;
        }
        boolean zIsReady = adStatus.isReady();
        n.b(this.mPlacementId, f.i.s, f.i.z, String.valueOf(zIsReady), "");
        return zIsReady;
    }

    public TYAdStatusInfo checkAdStatus() {
        TYAdStatusInfo adStatus = getAdStatus();
        if (adStatus == null) {
            return new TYAdStatusInfo(false, false, null);
        }
        n.b(this.mPlacementId, f.i.s, f.i.A, adStatus.toString(), "");
        return adStatus;
    }

    private TYAdStatusInfo getAdStatus() {
        if (m.a().f() == null || TextUtils.isEmpty(m.a().o()) || TextUtils.isEmpty(m.a().p())) {
            Log.e(this.TAG, "SDK init error!");
            return null;
        }
        return this.mAdLoadManager.a(this.mContext, this.mTKExtraMap);
    }

    public List<TYAdInfo> checkValidAdCaches() {
        c cVar = this.mAdLoadManager;
        if (cVar != null) {
            return cVar.a(this.mContext);
        }
        return null;
    }

    public void show(Activity activity, ViewGroup viewGroup) {
        show(activity, viewGroup, null, "");
    }

    public void show(Activity activity, ViewGroup viewGroup, String str) {
        if (!g.c(str)) {
            str = "";
        }
        show(activity, viewGroup, null, str);
    }

    public void show(Activity activity, ViewGroup viewGroup, TYSplashSkipInfo tYSplashSkipInfo) {
        show(activity, viewGroup, tYSplashSkipInfo, "");
    }

    public void show(Activity activity, ViewGroup viewGroup, TYSplashSkipInfo tYSplashSkipInfo, String str) {
        n.b(this.mPlacementId, f.i.s, f.i.y, f.i.n, "");
        if (m.a().f() == null || TextUtils.isEmpty(m.a().o()) || TextUtils.isEmpty(m.a().p())) {
            Log.e(this.TAG, "SDK init error!");
            return;
        }
        if (activity == null) {
            Log.e(this.TAG, "Splash Activity is null.");
        }
        if (viewGroup == null) {
            Log.e(this.TAG, "Splash Container is null.");
        } else {
            this.mAdLoadManager.a(activity, viewGroup, new com.tkay.splashad.a.a() {
                @Override
                public void onDeeplinkCallback(final TYAdInfo tYAdInfo, final boolean z) {
                    m.a().a(new Runnable() {
                        @Override
                        public final void run() {
                            if (TYSplashAd.this.mListener == null || !(TYSplashAd.this.mListener instanceof TYSplashExListener)) {
                                return;
                            }
                            ((TYSplashExListener) TYSplashAd.this.mListener).onDeeplinkCallback(tYAdInfo, z);
                        }
                    });
                }

                @Override
                public void onDownloadConfirm(final Context context, final TYAdInfo tYAdInfo, final TYNetworkConfirmInfo tYNetworkConfirmInfo) {
                    m.a().a(new Runnable() {
                        @Override
                        public final void run() {
                            if (TYSplashAd.this.mListener == null || !(TYSplashAd.this.mListener instanceof TYSplashExListener)) {
                                return;
                            }
                            TYSplashExListener tYSplashExListener = (TYSplashExListener) TYSplashAd.this.mListener;
                            Context context2 = context;
                            if (context2 == null) {
                                context2 = TYSplashAd.this.mContext;
                            }
                            tYSplashExListener.onDownloadConfirm(context2, tYAdInfo, tYNetworkConfirmInfo);
                        }
                    });
                }

                @Override
                public void onAdShow(final TYAdInfo tYAdInfo) {
                    m.a().a(new Runnable() {
                        @Override
                        public final void run() {
                            if (TYSplashAd.this.mListener != null) {
                                TYSplashAd.this.mListener.onAdShow(tYAdInfo);
                            }
                        }
                    });
                    if (TYSplashAd.this.mAdLoadManager.a((TYAdStatusInfo) null)) {
                        TYSplashAd.this.loadAd(6);
                    }
                }

                @Override
                public void onAdClick(final TYAdInfo tYAdInfo) {
                    m.a().a(new Runnable() {
                        @Override
                        public final void run() {
                            if (TYSplashAd.this.mListener != null) {
                                TYSplashAd.this.mListener.onAdClick(tYAdInfo);
                            }
                        }
                    });
                }

                @Override
                public void onAdDismiss(final TYAdInfo tYAdInfo, final TYSplashAdExtraInfo tYSplashAdExtraInfo) {
                    m.a().a(new Runnable() {
                        @Override
                        public final void run() {
                            if (TYSplashAd.this.mListener != null) {
                                TYSplashAd.this.mListener.onAdDismiss(tYAdInfo, tYSplashAdExtraInfo);
                            }
                        }
                    });
                }
            }, this.mDownloadListener, tYSplashSkipInfo, str, this.mTKExtraMap);
        }
    }

    @Deprecated
    public static void checkSplashDefaultConfigList(Context context, String str, Map<String, Object> map) {
        m.a().a(context, str, map);
    }

    public void setAdDownloadListener(TYEventInterface tYEventInterface) {
        this.mDownloadListener = tYEventInterface;
    }

    public void setAdSourceStatusListener(TYAdSourceStatusListener tYAdSourceStatusListener) {
        if (this.mAdSourceEventListener == null) {
            this.mAdSourceEventListener = new b();
        }
        this.mDeveloperStatusListener = tYAdSourceStatusListener;
        this.mAdSourceEventListener.a(tYAdSourceStatusListener);
    }
}
