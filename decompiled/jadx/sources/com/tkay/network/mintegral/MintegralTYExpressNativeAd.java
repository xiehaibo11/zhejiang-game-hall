package com.tkay.network.mintegral;

import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import com.mbridge.msdk.out.MBNativeAdvancedHandler;
import com.mbridge.msdk.out.MBridgeIds;
import com.mbridge.msdk.out.NativeAdvancedAdListener;
import com.tkay.nativead.api.TYNativePrepareInfo;
import com.tkay.nativead.unitgroup.api.CustomNativeAd;

/* JADX INFO: loaded from: classes3.dex */
public class MintegralTYExpressNativeAd extends CustomNativeAd {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    MBNativeAdvancedHandler f7623a;
    ViewGroup b;
    NativeAdvancedAdListener c;
    boolean d;
    private final String e = MintegralTYExpressNativeAd.class.getSimpleName();

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a
    public void clear(View view) {
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a
    public boolean isNativeExpress() {
        return true;
    }

    public MintegralTYExpressNativeAd(Context context, MBNativeAdvancedHandler mBNativeAdvancedHandler, boolean z) {
        NativeAdvancedAdListener nativeAdvancedAdListener = new NativeAdvancedAdListener() { // from class: com.tkay.network.mintegral.MintegralTYExpressNativeAd.1
            @Override // com.mbridge.msdk.out.NativeAdvancedAdListener
            public final void closeFullScreen(MBridgeIds mBridgeIds) {
            }

            @Override // com.mbridge.msdk.out.NativeAdvancedAdListener
            public final void onLeaveApp(MBridgeIds mBridgeIds) {
            }

            @Override // com.mbridge.msdk.out.NativeAdvancedAdListener
            public final void onLoadFailed(MBridgeIds mBridgeIds, String str) {
            }

            @Override // com.mbridge.msdk.out.NativeAdvancedAdListener
            public final void onLoadSuccessed(MBridgeIds mBridgeIds) {
            }

            @Override // com.mbridge.msdk.out.NativeAdvancedAdListener
            public final void showFullScreen(MBridgeIds mBridgeIds) {
            }

            @Override // com.mbridge.msdk.out.NativeAdvancedAdListener
            public final void onLogImpression(MBridgeIds mBridgeIds) {
                MintegralTYExpressNativeAd.this.notifyAdImpression();
            }

            @Override // com.mbridge.msdk.out.NativeAdvancedAdListener
            public final void onClick(MBridgeIds mBridgeIds) {
                MintegralTYExpressNativeAd.this.notifyAdClicked();
            }

            @Override // com.mbridge.msdk.out.NativeAdvancedAdListener
            public final void onClose(MBridgeIds mBridgeIds) {
                MintegralTYExpressNativeAd.this.notifyAdDislikeClick();
            }
        };
        this.c = nativeAdvancedAdListener;
        this.f7623a = mBNativeAdvancedHandler;
        mBNativeAdvancedHandler.setAdListener(nativeAdvancedAdListener);
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a
    public void prepare(View view, TYNativePrepareInfo tYNativePrepareInfo) {
        MBNativeAdvancedHandler mBNativeAdvancedHandler = this.f7623a;
        if (mBNativeAdvancedHandler != null) {
            mBNativeAdvancedHandler.onResume();
        }
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a, com.tkay.core.api.IATThirdPartyMaterial
    public View getAdMediaView(Object... objArr) {
        try {
            if (this.b == null) {
                this.b = this.f7623a.getAdViewGroup();
            }
            return this.b;
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.core.api.BaseAd
    public void destroy() {
        MBNativeAdvancedHandler mBNativeAdvancedHandler = this.f7623a;
        if (mBNativeAdvancedHandler != null) {
            mBNativeAdvancedHandler.release();
            this.f7623a.setAdListener(null);
            this.f7623a = null;
        }
        this.c = null;
        this.b = null;
    }

    public void setIsAutoPlay(boolean z) {
        this.d = z;
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a
    public void onResume() {
        super.onResume();
        MBNativeAdvancedHandler mBNativeAdvancedHandler = this.f7623a;
        if (mBNativeAdvancedHandler != null) {
            mBNativeAdvancedHandler.onResume();
        }
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a
    public void onPause() {
        super.onPause();
        MBNativeAdvancedHandler mBNativeAdvancedHandler = this.f7623a;
        if (mBNativeAdvancedHandler != null) {
            mBNativeAdvancedHandler.onPause();
        }
    }
}
