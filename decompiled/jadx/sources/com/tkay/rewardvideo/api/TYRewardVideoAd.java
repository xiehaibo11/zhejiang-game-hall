package com.tkay.rewardvideo.api;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import com.tkay.core.api.AdError;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.api.TYAdInfo;
import com.tkay.core.api.TYAdSourceStatusListener;
import com.tkay.core.api.TYAdStatusInfo;
import com.tkay.core.api.TYEventInterface;
import com.tkay.core.api.TYNetworkConfirmInfo;
import com.tkay.core.c.d;
import com.tkay.core.c.e;
import com.tkay.core.common.b.b;
import com.tkay.core.common.b.f;
import com.tkay.core.common.b.i;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.g;
import com.tkay.core.common.l.n;
import com.tkay.core.common.v;
import com.tkay.rewardvideo.a.a;
import java.lang.ref.WeakReference;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes4.dex */
public class TYRewardVideoAd {
    WeakReference<Activity> mActivityWef;
    a mAdLoadManager;
    b mAdSourceEventListener;
    Context mContext;
    TYAdSourceStatusListener mDeveloperStatusListener;
    TYEventInterface mDownloadListener;
    TYRewardVideoListener mListener;
    String mPlacementId;
    Map<String, Object> mTKExtraMap;
    final String TAG = getClass().getSimpleName();
    private TYRewardVideoExListener mInterListener = new TYRewardVideoExListener() { // from class: com.tkay.rewardvideo.api.TYRewardVideoAd.1
        @Override // com.tkay.rewardvideo.api.TYRewardVideoListener
        public void onRewardedVideoAdFailed(AdError adError) {
        }

        @Override // com.tkay.rewardvideo.api.TYRewardVideoListener
        public void onRewardedVideoAdLoaded() {
        }

        @Override // com.tkay.rewardvideo.api.TYRewardVideoExListener
        public void onDeeplinkCallback(final TYAdInfo tYAdInfo, final boolean z) {
            m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.api.TYRewardVideoAd.1.1
                @Override // java.lang.Runnable
                public final void run() {
                    if (TYRewardVideoAd.this.mListener == null || !(TYRewardVideoAd.this.mListener instanceof TYRewardVideoExListener)) {
                        return;
                    }
                    ((TYRewardVideoExListener) TYRewardVideoAd.this.mListener).onDeeplinkCallback(tYAdInfo, z);
                }
            });
        }

        @Override // com.tkay.rewardvideo.api.TYRewardVideoExListener
        public void onDownloadConfirm(final Context context, final TYAdInfo tYAdInfo, final TYNetworkConfirmInfo tYNetworkConfirmInfo) {
            m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.api.TYRewardVideoAd.1.6
                @Override // java.lang.Runnable
                public final void run() {
                    if (TYRewardVideoAd.this.mListener == null || !(TYRewardVideoAd.this.mListener instanceof TYRewardVideoExListener)) {
                        return;
                    }
                    TYRewardVideoExListener tYRewardVideoExListener = (TYRewardVideoExListener) TYRewardVideoAd.this.mListener;
                    Context context2 = context;
                    if (context2 == null) {
                        context2 = TYRewardVideoAd.this.mContext;
                    }
                    tYRewardVideoExListener.onDownloadConfirm(context2, tYAdInfo, tYNetworkConfirmInfo);
                }
            });
        }

        @Override // com.tkay.rewardvideo.api.TYRewardVideoExListener
        public void onRewardedVideoAdAgainPlayStart(final TYAdInfo tYAdInfo) {
            m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.api.TYRewardVideoAd.1.7
                @Override // java.lang.Runnable
                public final void run() {
                    if (TYRewardVideoAd.this.mListener == null || !(TYRewardVideoAd.this.mListener instanceof TYRewardVideoExListener)) {
                        return;
                    }
                    ((TYRewardVideoExListener) TYRewardVideoAd.this.mListener).onRewardedVideoAdAgainPlayStart(tYAdInfo);
                }
            });
        }

        @Override // com.tkay.rewardvideo.api.TYRewardVideoExListener
        public void onRewardedVideoAdAgainPlayEnd(final TYAdInfo tYAdInfo) {
            m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.api.TYRewardVideoAd.1.8
                @Override // java.lang.Runnable
                public final void run() {
                    if (TYRewardVideoAd.this.mListener == null || !(TYRewardVideoAd.this.mListener instanceof TYRewardVideoExListener)) {
                        return;
                    }
                    ((TYRewardVideoExListener) TYRewardVideoAd.this.mListener).onRewardedVideoAdAgainPlayEnd(tYAdInfo);
                }
            });
        }

        @Override // com.tkay.rewardvideo.api.TYRewardVideoExListener
        public void onRewardedVideoAdAgainPlayFailed(final AdError adError, final TYAdInfo tYAdInfo) {
            m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.api.TYRewardVideoAd.1.9
                @Override // java.lang.Runnable
                public final void run() {
                    if (TYRewardVideoAd.this.mListener == null || !(TYRewardVideoAd.this.mListener instanceof TYRewardVideoExListener)) {
                        return;
                    }
                    ((TYRewardVideoExListener) TYRewardVideoAd.this.mListener).onRewardedVideoAdAgainPlayFailed(adError, tYAdInfo);
                }
            });
        }

        @Override // com.tkay.rewardvideo.api.TYRewardVideoExListener
        public void onRewardedVideoAdAgainPlayClicked(final TYAdInfo tYAdInfo) {
            m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.api.TYRewardVideoAd.1.10
                @Override // java.lang.Runnable
                public final void run() {
                    if (TYRewardVideoAd.this.mListener == null || !(TYRewardVideoAd.this.mListener instanceof TYRewardVideoExListener)) {
                        return;
                    }
                    ((TYRewardVideoExListener) TYRewardVideoAd.this.mListener).onRewardedVideoAdAgainPlayClicked(tYAdInfo);
                }
            });
        }

        @Override // com.tkay.rewardvideo.api.TYRewardVideoExListener
        public void onAgainReward(final TYAdInfo tYAdInfo) {
            m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.api.TYRewardVideoAd.1.11
                @Override // java.lang.Runnable
                public final void run() {
                    if (TYRewardVideoAd.this.mListener == null || !(TYRewardVideoAd.this.mListener instanceof TYRewardVideoExListener)) {
                        return;
                    }
                    ((TYRewardVideoExListener) TYRewardVideoAd.this.mListener).onAgainReward(tYAdInfo);
                }
            });
        }

        @Override // com.tkay.rewardvideo.api.TYRewardVideoListener
        public void onRewardedVideoAdPlayStart(final TYAdInfo tYAdInfo) {
            m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.api.TYRewardVideoAd.1.12
                @Override // java.lang.Runnable
                public final void run() {
                    if (TYRewardVideoAd.this.mListener != null) {
                        TYRewardVideoAd.this.mListener.onRewardedVideoAdPlayStart(tYAdInfo);
                    }
                }
            });
        }

        @Override // com.tkay.rewardvideo.api.TYRewardVideoListener
        public void onRewardedVideoAdPlayEnd(final TYAdInfo tYAdInfo) {
            m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.api.TYRewardVideoAd.1.13
                @Override // java.lang.Runnable
                public final void run() {
                    if (TYRewardVideoAd.this.mListener != null) {
                        TYRewardVideoAd.this.mListener.onRewardedVideoAdPlayEnd(tYAdInfo);
                    }
                }
            });
        }

        @Override // com.tkay.rewardvideo.api.TYRewardVideoListener
        public void onRewardedVideoAdPlayFailed(final AdError adError, final TYAdInfo tYAdInfo) {
            m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.api.TYRewardVideoAd.1.2
                @Override // java.lang.Runnable
                public final void run() {
                    if (TYRewardVideoAd.this.mListener != null) {
                        TYRewardVideoAd.this.mListener.onRewardedVideoAdPlayFailed(adError, tYAdInfo);
                    }
                }
            });
        }

        @Override // com.tkay.rewardvideo.api.TYRewardVideoListener
        public void onRewardedVideoAdClosed(final TYAdInfo tYAdInfo) {
            m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.api.TYRewardVideoAd.1.3
                @Override // java.lang.Runnable
                public final void run() {
                    if (TYRewardVideoAd.this.mListener != null) {
                        TYRewardVideoAd.this.mListener.onRewardedVideoAdClosed(tYAdInfo);
                    }
                }
            });
        }

        @Override // com.tkay.rewardvideo.api.TYRewardVideoListener
        public void onRewardedVideoAdPlayClicked(final TYAdInfo tYAdInfo) {
            m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.api.TYRewardVideoAd.1.4
                @Override // java.lang.Runnable
                public final void run() {
                    if (TYRewardVideoAd.this.mListener != null) {
                        TYRewardVideoAd.this.mListener.onRewardedVideoAdPlayClicked(tYAdInfo);
                    }
                }
            });
        }

        @Override // com.tkay.rewardvideo.api.TYRewardVideoListener
        public void onReward(final TYAdInfo tYAdInfo) {
            m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.api.TYRewardVideoAd.1.5
                @Override // java.lang.Runnable
                public final void run() {
                    if (TYRewardVideoAd.this.mListener != null) {
                        TYRewardVideoAd.this.mListener.onReward(tYAdInfo);
                    }
                }
            });
        }
    };
    com.tkay.core.common.b.a adLoadListener = new com.tkay.core.common.b.a() { // from class: com.tkay.rewardvideo.api.TYRewardVideoAd.2
        @Override // com.tkay.core.common.b.a
        public void onAdLoaded() {
            m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.api.TYRewardVideoAd.2.1
                @Override // java.lang.Runnable
                public final void run() {
                    if (TYRewardVideoAd.this.mListener != null) {
                        TYRewardVideoAd.this.mListener.onRewardedVideoAdLoaded();
                    }
                }
            });
        }

        @Override // com.tkay.core.common.b.a
        public void onAdLoadFail(final AdError adError) {
            m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.api.TYRewardVideoAd.2.2
                @Override // java.lang.Runnable
                public final void run() {
                    if (TYRewardVideoAd.this.mListener != null) {
                        TYRewardVideoAd.this.mListener.onRewardedVideoAdFailed(adError);
                    }
                }
            });
        }
    };

    public TYRewardVideoAd(Context context, String str) {
        this.mPlacementId = str;
        this.mContext = context.getApplicationContext();
        if (context instanceof Activity) {
            this.mActivityWef = new WeakReference<>((Activity) context);
        }
        this.mAdLoadManager = a.a(context, str);
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
        n.a(this.mPlacementId, f.i.q, f.i.w, f.i.n, "", true);
        this.mAdLoadManager.a(context, i, this.adLoadListener, this.mAdSourceEventListener, this.mTKExtraMap);
    }

    public static void entryAdScenario(String str, String str2) {
        m.a().a(str, str2, "1", (Map<String, Object>) null);
    }

    public static void entryAdScenario(String str, String str2, Map<String, Object> map) {
        m.a().a(str, str2, "1", map);
    }

    private Context getRequestContext() {
        WeakReference<Activity> weakReference = this.mActivityWef;
        Activity activity = weakReference != null ? weakReference.get() : null;
        return activity != null ? activity : this.mContext;
    }

    private boolean isPlaceStrategyNeedAutoLoad() {
        d dVarA = e.a(m.a().f()).a(this.mPlacementId);
        return dVarA != null && dVarA.W() == 1;
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

    public void setAdListener(TYRewardVideoListener tYRewardVideoListener) {
        this.mListener = tYRewardVideoListener;
    }

    public boolean isAdReady() {
        TYAdStatusInfo adStatus = getAdStatus();
        if (adStatus == null) {
            return false;
        }
        boolean zIsReady = adStatus.isReady();
        n.b(this.mPlacementId, f.i.q, f.i.z, String.valueOf(zIsReady), "");
        return zIsReady;
    }

    public TYAdStatusInfo checkAdStatus() {
        TYAdStatusInfo adStatus = getAdStatus();
        if (adStatus == null) {
            return new TYAdStatusInfo(false, false, null);
        }
        n.b(this.mPlacementId, f.i.q, f.i.A, adStatus.toString(), "");
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
        n.b(this.mPlacementId, f.i.q, f.i.y, f.i.n, "");
        if (m.a().f() == null || TextUtils.isEmpty(m.a().o()) || TextUtils.isEmpty(m.a().p())) {
            AdError errorCode = ErrorCode.getErrorCode(ErrorCode.exception, "", "sdk init error");
            TYRewardVideoListener tYRewardVideoListener = this.mListener;
            if (tYRewardVideoListener != null) {
                tYRewardVideoListener.onRewardedVideoAdPlayFailed(errorCode, i.a((com.tkay.core.common.b.n) null));
            }
            Log.e(this.TAG, "SDK init error!");
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
            Log.e(this.TAG, "RewardedVideo Show Activity is null.");
        }
        this.mAdLoadManager.a(activity2, str, this.mInterListener, this.mDownloadListener, this.mTKExtraMap);
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
