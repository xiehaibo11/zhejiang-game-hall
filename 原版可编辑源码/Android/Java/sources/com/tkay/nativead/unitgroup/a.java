package com.tkay.nativead.unitgroup;

import android.content.Context;
import android.view.View;
import com.tkay.core.api.ATShakeViewListener;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.ITYAdvertiserInfoOperate;
import com.tkay.core.api.TYEventInterface;
import com.tkay.core.api.TYNetworkConfirmInfo;
import com.tkay.core.common.b.k;
import com.tkay.core.common.b.l;
import com.tkay.core.common.f.d;
import com.tkay.nativead.api.TYNativePrepareInfo;
import com.xiaomi.mipush.sdk.Constants;

public abstract class a extends BaseAd {
    private static final String TAG = a.class.getSimpleName();
    protected d mAdTrackingInfo;
    protected TYEventInterface mDownloadListener;
    private k mNativeEventListener;
    private TYNativePrepareInfo nativePrepareInfo;
    public final int NETWORK_UNKNOW = -1;
    protected String mAdSourceType = "0";
    protected int mNetworkType = -1;

    public abstract void bindDislikeListener(View.OnClickListener onClickListener);

    public abstract void clear(View view);

    @Override
    public abstract View getAdIconView();

    @Override
    public abstract View getAdMediaView(Object... objArr);

    @Override
    public ITYAdvertiserInfoOperate getAdvertiserInfoOperate() {
        return null;
    }

    @Override
    public View getShakeView(int i, int i2, ATShakeViewListener aTShakeViewListener) {
        return null;
    }

    public abstract boolean isNativeExpress();

    public abstract void onPause();

    public abstract void onResume();

    public abstract void pauseVideo();

    public abstract void prepare(View view, TYNativePrepareInfo tYNativePrepareInfo);

    public abstract void resumeVideo();

    protected a() {
    }

    @Override
    public final void setTrackingInfo(d dVar) {
        this.mAdTrackingInfo = dVar;
    }

    @Override
    public final d getDetail() {
        return this.mAdTrackingInfo;
    }

    @Override
    public void setNativeEventListener(k kVar) {
        this.mNativeEventListener = kVar;
    }

    public final void notifyAdClicked() {
        k kVar = this.mNativeEventListener;
        if (kVar != null) {
            kVar.onAdClicked(null);
        }
    }

    public final void notifyAdImpression() {
        k kVar = this.mNativeEventListener;
        if (kVar != null) {
            kVar.onAdImpressed();
        }
    }

    public final void notifyAdVideoStart() {
        k kVar = this.mNativeEventListener;
        if (kVar != null) {
            kVar.onAdVideoStart();
        }
    }

    public final void notifyAdVideoEnd() {
        k kVar = this.mNativeEventListener;
        if (kVar != null) {
            kVar.onAdVideoEnd();
        }
    }

    public final void notifyAdVideoVideoPlayFail(String str, String str2) {
        StringBuilder sb = new StringBuilder("notifyAdVideoVideoPlayFail...");
        sb.append(str);
        sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
        sb.append(str2);
        k kVar = this.mNativeEventListener;
        if (kVar == null || !(kVar instanceof l)) {
            return;
        }
        ((l) kVar).a(str, str2);
    }

    public final void notifyDeeplinkCallback(boolean z) {
        k kVar = this.mNativeEventListener;
        if (kVar != null) {
            kVar.onDeeplinkCallback(z);
        }
    }

    public final void notifyAdVideoPlayProgress(int i) {
        k kVar = this.mNativeEventListener;
        if (kVar != null) {
            kVar.onAdVideoProgress(i);
        }
    }

    public final void notifyAdDislikeClick() {
        k kVar = this.mNativeEventListener;
        if (kVar != null) {
            kVar.onAdDislikeButtonClick();
        }
    }

    public final void notifyDownloadConfirm(Context context, View view, TYNetworkConfirmInfo tYNetworkConfirmInfo) {
        k kVar = this.mNativeEventListener;
        if (kVar != null) {
            kVar.onDownloadConfirmCallback(context, view, tYNetworkConfirmInfo);
        }
    }

    @Override
    public final String getAdType() {
        return this.mAdSourceType;
    }

    public final void setDownloadListener(TYEventInterface tYEventInterface) {
        this.mDownloadListener = tYEventInterface;
    }

    public final void setNativePrepareInfo(TYNativePrepareInfo tYNativePrepareInfo) {
        this.nativePrepareInfo = tYNativePrepareInfo;
    }

    public final TYNativePrepareInfo getNativePrepareInfo() {
        return this.nativePrepareInfo;
    }
}
