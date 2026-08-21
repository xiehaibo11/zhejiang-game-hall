package com.tkay.network.mintegral;

import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import com.mbridge.msdk.out.MBNativeAdvancedHandler;
import com.mbridge.msdk.out.MBridgeIds;
import com.mbridge.msdk.out.NativeAdvancedAdListener;
import com.tkay.nativead.api.TYNativePrepareInfo;
import com.tkay.nativead.unitgroup.api.CustomNativeAd;

public class MintegralTYExpressNativeAd extends CustomNativeAd {
    MBNativeAdvancedHandler a;
    ViewGroup b;
    NativeAdvancedAdListener c;
    boolean d;
    private final String e = MintegralTYExpressNativeAd.class.getSimpleName();

    @Override
    public void clear(View view) {
    }

    @Override
    public boolean isNativeExpress() {
        return true;
    }

    public MintegralTYExpressNativeAd(Context context, MBNativeAdvancedHandler mBNativeAdvancedHandler, boolean z) {
        NativeAdvancedAdListener nativeAdvancedAdListener = new NativeAdvancedAdListener() {
            @Override
            public final void closeFullScreen(MBridgeIds mBridgeIds) {
            }

            @Override
            public final void onLeaveApp(MBridgeIds mBridgeIds) {
            }

            @Override
            public final void onLoadFailed(MBridgeIds mBridgeIds, String str) {
            }

            @Override
            public final void onLoadSuccessed(MBridgeIds mBridgeIds) {
            }

            @Override
            public final void showFullScreen(MBridgeIds mBridgeIds) {
            }

            @Override
            public final void onLogImpression(MBridgeIds mBridgeIds) {
                MintegralTYExpressNativeAd.this.notifyAdImpression();
            }

            @Override
            public final void onClick(MBridgeIds mBridgeIds) {
                MintegralTYExpressNativeAd.this.notifyAdClicked();
            }

            @Override
            public final void onClose(MBridgeIds mBridgeIds) {
                MintegralTYExpressNativeAd.this.notifyAdDislikeClick();
            }
        };
        this.c = nativeAdvancedAdListener;
        this.a = mBNativeAdvancedHandler;
        mBNativeAdvancedHandler.setAdListener(nativeAdvancedAdListener);
    }

    @Override
    public void prepare(View view, TYNativePrepareInfo tYNativePrepareInfo) {
        MBNativeAdvancedHandler mBNativeAdvancedHandler = this.a;
        if (mBNativeAdvancedHandler != null) {
            mBNativeAdvancedHandler.onResume();
        }
    }

    @Override
    public View getAdMediaView(Object... objArr) {
        try {
            if (this.b == null) {
                this.b = this.a.getAdViewGroup();
            }
            return this.b;
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    @Override
    public void destroy() {
        MBNativeAdvancedHandler mBNativeAdvancedHandler = this.a;
        if (mBNativeAdvancedHandler != null) {
            mBNativeAdvancedHandler.release();
            this.a.setAdListener(null);
            this.a = null;
        }
        this.c = null;
        this.b = null;
    }

    public void setIsAutoPlay(boolean z) {
        this.d = z;
    }

    @Override
    public void onResume() {
        super.onResume();
        MBNativeAdvancedHandler mBNativeAdvancedHandler = this.a;
        if (mBNativeAdvancedHandler != null) {
            mBNativeAdvancedHandler.onResume();
        }
    }

    @Override
    public void onPause() {
        super.onPause();
        MBNativeAdvancedHandler mBNativeAdvancedHandler = this.a;
        if (mBNativeAdvancedHandler != null) {
            mBNativeAdvancedHandler.onPause();
        }
    }
}
