package com.tkay.nativead.api;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import com.tkay.core.api.AdError;
import com.tkay.core.api.TYAdInfo;
import com.tkay.core.api.TYAdSourceStatusListener;
import com.tkay.core.api.TYAdStatusInfo;
import com.tkay.core.common.b.a;
import com.tkay.core.common.b.b;
import com.tkay.core.common.b.f;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.g;
import com.tkay.core.common.l.n;
import com.tkay.core.common.v;
import java.lang.ref.WeakReference;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes3.dex */
public class TYNative {
    private final String TAG = TYNative.class.getSimpleName();
    a adLoadListener = new a() { // from class: com.tkay.nativead.api.TYNative.1
        @Override // com.tkay.core.common.b.a
        public void onAdLoaded() {
            m.a().a(new Runnable() { // from class: com.tkay.nativead.api.TYNative.1.1
                @Override // java.lang.Runnable
                public final void run() {
                    if (TYNative.this.mListener != null) {
                        TYNative.this.mListener.onNativeAdLoaded();
                    }
                }
            });
        }

        @Override // com.tkay.core.common.b.a
        public void onAdLoadFail(final AdError adError) {
            m.a().a(new Runnable() { // from class: com.tkay.nativead.api.TYNative.1.2
                @Override // java.lang.Runnable
                public final void run() {
                    if (TYNative.this.mListener != null) {
                        TYNative.this.mListener.onNativeAdLoadFail(adError);
                    }
                }
            });
        }
    };
    WeakReference<Activity> mActivityRef;
    com.tkay.nativead.a.a mAdLoadManager;
    b mAdSourceEventListener;
    Context mContext;
    TYAdSourceStatusListener mDeveloperStatusListener;
    TYNativeNetworkListener mListener;
    String mPlacementId;
    Map<String, Object> mTKExtraMap;

    public TYNative(Context context, String str, TYNativeNetworkListener tYNativeNetworkListener) {
        this.mContext = context.getApplicationContext();
        if (context != null && (context instanceof Activity)) {
            this.mActivityRef = new WeakReference<>((Activity) context);
        }
        this.mPlacementId = str;
        this.mListener = tYNativeNetworkListener;
        this.mAdLoadManager = com.tkay.nativead.a.a.a(context, str);
    }

    public void setAdListener(TYNativeNetworkListener tYNativeNetworkListener) {
        this.mListener = tYNativeNetworkListener;
    }

    public static void entryAdScenario(String str, String str2) {
        m.a().a(str, str2, "0", (Map<String, Object>) null);
    }

    public static void entryAdScenario(String str, String str2, Map<String, Object> map) {
        m.a().a(str, str2, "0", map);
    }

    public void makeAdRequest() {
        n.a(this.mPlacementId, f.i.r, f.i.w, f.i.n, "", true);
        this.mAdLoadManager.a(getContext(), this.adLoadListener, this.mAdSourceEventListener, this.mTKExtraMap);
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

    public NativeAd getNativeAd() {
        com.tkay.core.common.f.a aVarA = this.mAdLoadManager.a("", this.mTKExtraMap);
        if (aVarA != null) {
            return new NativeAd(getContext(), this.mPlacementId, aVarA);
        }
        return null;
    }

    public NativeAd getNativeAd(String str) {
        if (!g.c(str)) {
            str = "";
        }
        com.tkay.core.common.f.a aVarA = this.mAdLoadManager.a(str, this.mTKExtraMap);
        if (aVarA != null) {
            return new NativeAd(getContext(), this.mPlacementId, aVarA);
        }
        return null;
    }

    public TYAdStatusInfo checkAdStatus() {
        if (m.a().f() == null || TextUtils.isEmpty(m.a().o()) || TextUtils.isEmpty(m.a().p())) {
            Log.e(this.TAG, "SDK init error!");
            return new TYAdStatusInfo(false, false, null);
        }
        TYAdStatusInfo tYAdStatusInfoA = this.mAdLoadManager.a(getContext(), this.mTKExtraMap);
        n.b(this.mPlacementId, f.i.r, f.i.A, tYAdStatusInfoA.toString(), "");
        return tYAdStatusInfoA;
    }

    public List<TYAdInfo> checkValidAdCaches() {
        com.tkay.nativead.a.a aVar = this.mAdLoadManager;
        if (aVar != null) {
            return aVar.a(getContext());
        }
        return null;
    }

    private Context getContext() {
        Activity activity;
        WeakReference<Activity> weakReference = this.mActivityRef;
        return (weakReference == null || (activity = weakReference.get()) == null) ? this.mContext : activity;
    }

    public void setAdSourceStatusListener(TYAdSourceStatusListener tYAdSourceStatusListener) {
        if (this.mAdSourceEventListener == null) {
            this.mAdSourceEventListener = new b();
        }
        this.mDeveloperStatusListener = tYAdSourceStatusListener;
        this.mAdSourceEventListener.a(tYAdSourceStatusListener);
    }
}
