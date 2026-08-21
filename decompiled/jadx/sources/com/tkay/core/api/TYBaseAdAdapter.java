package com.tkay.core.api;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.common.b.n;
import com.tkay.core.common.b.o;
import com.tkay.core.common.l.g;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public abstract class TYBaseAdAdapter extends n {
    public TYBiddingListener mBiddingListener;
    protected TYEventInterface mDownloadListener;
    protected TYCustomLoadListener mLoadListener;
    protected String mUserId = "";
    protected String mUserData = "";
    protected String mScenario = "";
    protected int mMixedFormatAdType = -1;
    protected int mDismissType = 0;

    public abstract void destory();

    public BaseAd getBaseAdObject(Context context) {
        return null;
    }

    public MediationBidManager getBidManager() {
        return null;
    }

    public String getILRD() {
        return null;
    }

    public TYInitMediation getMediationInitManager() {
        return null;
    }

    public Map<String, Object> getNetworkInfoMap() {
        return null;
    }

    public abstract String getNetworkName();

    public abstract String getNetworkPlacementId();

    public abstract String getNetworkSDKVersion();

    public boolean initNetworkObjectByPlacementId(Context context, Map<String, Object> map, Map<String, Object> map2) {
        return false;
    }

    public abstract boolean isAdReady();

    public abstract void loadCustomNetworkAd(Context context, Map<String, Object> map, Map<String, Object> map2);

    public boolean setUserDataConsent(Context context, boolean z, boolean z2) {
        return false;
    }

    public boolean startBiddingRequest(Context context, Map<String, Object> map, Map<String, Object> map2, TYBiddingListener tYBiddingListener) {
        return false;
    }

    public boolean supportImpressionCallback() {
        return true;
    }

    public final void setScenario(String str) {
        this.mScenario = str;
    }

    public final boolean internalInitNetworkObjectByPlacementId(Context context, Map<String, Object> map, Map<String, Object> map2) {
        fillParams(map);
        parseGloableParams(map, map2);
        return initNetworkObjectByPlacementId(context, map, map2);
    }

    private void cleanLoadListener() {
        this.mBiddingListener = null;
        this.mLoadListener = null;
    }

    public final void internalLoad(Context context, Map<String, Object> map, Map<String, Object> map2, TYCustomLoadListener tYCustomLoadListener) {
        this.mLoadListener = tYCustomLoadListener;
        fillParams(map);
        parseGloableParams(map, map2);
        loadCustomNetworkAd(context, map, map2);
    }

    private void fillParams(Map<String, Object> map) {
        if (getTrackingInfo() != null) {
            g.a(map, getTrackingInfo().N());
        }
    }

    private void parseGloableParams(Map<String, Object> map, Map<String, Object> map2) {
        if (map2 != null) {
            this.mUserId = map2.get("user_id") != null ? map2.get("user_id").toString() : "";
            this.mUserData = map2.get(TYAdConst.KEY.USER_CUSTOM_DATA) != null ? map2.get(TYAdConst.KEY.USER_CUSTOM_DATA).toString() : "";
        }
        if (map == null || !map.containsKey("ad_type")) {
            return;
        }
        this.mMixedFormatAdType = Integer.parseInt(map.get("ad_type").toString());
    }

    public void releaseLoadResource() {
        cleanLoadListener();
    }

    public final boolean internalStartBiddingRequest(Context context, Map<String, Object> map, Map<String, Object> map2, TYBiddingListener tYBiddingListener) {
        fillParams(map);
        parseGloableParams(map, map2);
        this.mBiddingListener = tYBiddingListener;
        boolean zStartBiddingRequest = startBiddingRequest(context, map, map2, tYBiddingListener);
        if (!zStartBiddingRequest) {
            this.mBiddingListener = null;
        }
        return zStartBiddingRequest;
    }

    public final String getUserCustomData() {
        return this.mUserData;
    }

    public void setAdDownloadListener(TYEventInterface tYEventInterface) {
        this.mDownloadListener = tYEventInterface;
    }

    public final String getUserId() {
        return this.mUserId;
    }

    public final int getMixedFormatAdType() {
        return this.mMixedFormatAdType;
    }

    public void getBidRequestInfo(Context context, Map<String, Object> map, Map<String, Object> map2, TYBidRequestInfoListener tYBidRequestInfoListener) {
        if (tYBidRequestInfoListener != null) {
            tYBidRequestInfoListener.onFailed(TYBidRequestInfo.NO_SUPPORT_BIDDING_TYPE);
        }
    }

    public final void thirdPartyLoad(TYBaseAdAdapter tYBaseAdAdapter, Context context, Map<String, Object> map, Map<String, Object> map2) {
        tYBaseAdAdapter.internalLoad(context, map, map2, new o(this.mLoadListener, map));
    }

    public final void notifyATLoadFail(String str, String str2) {
        String str3;
        if (this.mBiddingListener != null) {
            if (TextUtils.isEmpty(str)) {
                str3 = str2;
            } else {
                str3 = str + "|" + str2;
            }
            this.mBiddingListener.onC2SBiddingResultWithCache(TYBiddingResult.fail(str3), null);
        }
        TYCustomLoadListener tYCustomLoadListener = this.mLoadListener;
        if (tYCustomLoadListener != null) {
            tYCustomLoadListener.onAdLoadError(str, str2);
        }
    }

    public final int getDismissType() {
        return this.mDismissType;
    }
}
