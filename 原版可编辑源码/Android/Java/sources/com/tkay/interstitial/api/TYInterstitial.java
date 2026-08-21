package com.tkay.interstitial.api;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import com.tkay.core.api.AdError;
import com.tkay.core.api.TYAdInfo;
import com.tkay.core.api.TYAdSourceStatusListener;
import com.tkay.core.api.TYAdStatusInfo;
import com.tkay.core.api.TYEventInterface;
import com.tkay.core.api.TYNetworkConfirmInfo;
import com.tkay.core.common.b.b;
import com.tkay.core.common.b.f;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.g;
import com.tkay.core.common.l.n;
import com.tkay.core.common.v;
import com.tkay.interstitial.a.a;
import java.lang.ref.WeakReference;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

public class TYInterstitial {
    public static final String TAG = TYInterstitial.class.getSimpleName();
    WeakReference<Activity> mActivityWef;
    a mAdLoadManager;
    b mAdSourceEventListener;
    public Context mContext;
    TYAdSourceStatusListener mDeveloperStatusListener;
    TYEventInterface mDownloadListener;
    public TYInterstitialListener mInterstitialListener;
    public String mPlacementId;
    Map<String, Object> mTKExtraMap;
    private TYInterstitialExListener mInterListener = new TYInterstitialExListener() {
        @Override
        public void onInterstitialAdLoadFail(AdError adError) {
        }

        @Override
        public void onInterstitialAdLoaded() {
        }

        @Override
        public void onDeeplinkCallback(final TYAdInfo tYAdInfo, final boolean z) {
            m.a().a(new Runnable() {
                @Override
                public final void run() {
                    if (TYInterstitial.this.mInterstitialListener == null || !(TYInterstitial.this.mInterstitialListener instanceof TYInterstitialExListener)) {
                        return;
                    }
                    ((TYInterstitialExListener) TYInterstitial.this.mInterstitialListener).onDeeplinkCallback(tYAdInfo, z);
                }
            });
        }

        @Override
        public void onDownloadConfirm(final Context context, final TYAdInfo tYAdInfo, final TYNetworkConfirmInfo tYNetworkConfirmInfo) {
            m.a().a(new Runnable() {
                @Override
                public final void run() {
                    if (TYInterstitial.this.mInterstitialListener == null || !(TYInterstitial.this.mInterstitialListener instanceof TYInterstitialExListener)) {
                        return;
                    }
                    TYInterstitialExListener tYInterstitialExListener = (TYInterstitialExListener) TYInterstitial.this.mInterstitialListener;
                    Context context2 = context;
                    if (context2 == null) {
                        context2 = TYInterstitial.this.mContext;
                    }
                    tYInterstitialExListener.onDownloadConfirm(context2, tYAdInfo, tYNetworkConfirmInfo);
                }
            });
        }

        @Override
        public void onInterstitialAdVideoStart(final TYAdInfo tYAdInfo) {
            m.a().a(new Runnable() {
                @Override
                public final void run() {
                    if (TYInterstitial.this.mInterstitialListener != null) {
                        TYInterstitial.this.mInterstitialListener.onInterstitialAdVideoStart(tYAdInfo);
                    }
                }
            });
        }

        @Override
        public void onInterstitialAdVideoEnd(final TYAdInfo tYAdInfo) {
            m.a().a(new Runnable() {
                @Override
                public final void run() {
                    if (TYInterstitial.this.mInterstitialListener != null) {
                        TYInterstitial.this.mInterstitialListener.onInterstitialAdVideoEnd(tYAdInfo);
                    }
                }
            });
        }

        @Override
        public void onInterstitialAdVideoError(final AdError adError) {
            m.a().a(new Runnable() {
                @Override
                public final void run() {
                    if (TYInterstitial.this.mInterstitialListener != null) {
                        TYInterstitial.this.mInterstitialListener.onInterstitialAdVideoError(adError);
                    }
                }
            });
        }

        @Override
        public void onInterstitialAdClose(final TYAdInfo tYAdInfo) {
            m.a().a(new Runnable() {
                @Override
                public final void run() {
                    if (TYInterstitial.this.mInterstitialListener != null) {
                        TYInterstitial.this.mInterstitialListener.onInterstitialAdClose(tYAdInfo);
                    }
                }
            });
        }

        @Override
        public void onInterstitialAdClicked(final TYAdInfo tYAdInfo) {
            m.a().a(new Runnable() {
                @Override
                public final void run() {
                    if (TYInterstitial.this.mInterstitialListener != null) {
                        TYInterstitial.this.mInterstitialListener.onInterstitialAdClicked(tYAdInfo);
                    }
                }
            });
        }

        @Override
        public void onInterstitialAdShow(final TYAdInfo tYAdInfo) {
            m.a().a(new Runnable() {
                @Override
                public final void run() {
                    if (TYInterstitial.this.mInterstitialListener != null) {
                        TYInterstitial.this.mInterstitialListener.onInterstitialAdShow(tYAdInfo);
                    }
                }
            });
        }
    };
    com.tkay.core.common.b.a adLoadListener = new com.tkay.core.common.b.a() {
        @Override
        public void onAdLoaded() {
            m.a().a(new Runnable() {
                @Override
                public final void run() {
                    if (TYInterstitial.this.mInterstitialListener != null) {
                        TYInterstitial.this.mInterstitialListener.onInterstitialAdLoaded();
                    }
                }
            });
        }

        @Override
        public void onAdLoadFail(final AdError adError) {
            m.a().a(new Runnable() {
                @Override
                public final void run() {
                    if (TYInterstitial.this.mInterstitialListener != null) {
                        TYInterstitial.this.mInterstitialListener.onInterstitialAdLoadFail(adError);
                    }
                }
            });
        }
    };

    public TYInterstitial(Context context, String str) {
        this.mContext = context.getApplicationContext();
        if (context instanceof Activity) {
            this.mActivityWef = new WeakReference<>((Activity) context);
        }
        this.mPlacementId = str;
        this.mAdLoadManager = a.a(context, str);
    }

    private Context getRequestContext() {
        WeakReference<Activity> weakReference = this.mActivityWef;
        Activity activity = weakReference != null ? weakReference.get() : null;
        return activity != null ? activity : this.mContext;
    }

    public void setLocalExtra(Map<String, Object> map) {
        v.a().a(this.mPlacementId, map);
    }

    public void load() {
        load(getRequestContext(), 0);
    }

    public void load(Context context) {
        if (context == null) {
            context = getRequestContext();
        }
        load(context, 0);
    }

    private void load(Context context, int i) {
        n.a(this.mPlacementId, f.i.p, f.i.w, f.i.n, "", true);
        this.mAdLoadManager.a(context, i, this.adLoadListener, this.mAdSourceEventListener, this.mTKExtraMap);
    }

    public void setAdListener(TYInterstitialListener tYInterstitialListener) {
        this.mInterstitialListener = tYInterstitialListener;
    }

    public boolean isAdReady() {
        TYAdStatusInfo adStatus = getAdStatus();
        if (adStatus == null) {
            return false;
        }
        boolean zIsReady = adStatus.isReady();
        n.b(this.mPlacementId, f.i.p, f.i.z, String.valueOf(zIsReady), "");
        return zIsReady;
    }

    public static void entryAdScenario(String str, String str2) {
        m.a().a(str, str2, "3", (Map<String, Object>) null);
    }

    public static void entryAdScenario(String str, String str2, Map<String, Object> map) {
        m.a().a(str, str2, "3", map);
    }

    public TYAdStatusInfo checkAdStatus() {
        TYAdStatusInfo adStatus = getAdStatus();
        if (adStatus == null) {
            return new TYAdStatusInfo(false, false, null);
        }
        n.b(this.mPlacementId, f.i.p, f.i.A, adStatus.toString(), "");
        return adStatus;
    }

    private TYAdStatusInfo getAdStatus() {
        if (m.a().f() == null || TextUtils.isEmpty(m.a().o()) || TextUtils.isEmpty(m.a().p())) {
            Log.e(TAG, "SDK init error!");
            return null;
        }
        return this.mAdLoadManager.a(this.mContext, this.mTKExtraMap);
    }

    public List<TYAdInfo> checkValidAdCaches() {
        a aVar = this.mAdLoadManager;
        if (aVar != null) {
            return aVar.a(this.mContext);
        }
        return null;
    }

    public void show(Activity activity, String str) {
        if (!g.c(str)) {
            str = "";
        }
        controlShow(activity, str);
    }

    public void show(Activity activity) {
        controlShow(activity, "");
    }

    private void controlShow(Activity activity, String str) {
        n.b(this.mPlacementId, f.i.p, f.i.y, f.i.n, "");
        if (m.a().f() == null || TextUtils.isEmpty(m.a().o()) || TextUtils.isEmpty(m.a().p())) {
            Log.e(TAG, "Show error: SDK init error!");
            return;
        }
        if (activity == null) {
            Context context = this.mContext;
            if (context instanceof Activity) {
                activity = (Activity) context;
            }
        }
        Activity activity2 = activity;
        if (activity2 == null) {
            Log.e(TAG, "Interstitial Show Activity is null.");
        }
        this.mAdLoadManager.a(activity2, str, this.mInterListener, this.mDownloadListener, this.mTKExtraMap);
    }

    public void setTKExtra(Map<String, Object> map) {
        if (this.mTKExtraMap == null) {
            this.mTKExtraMap = new ConcurrentHashMap();
        }
        this.mTKExtraMap.clear();
        this.mTKExtraMap.putAll(map);
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
