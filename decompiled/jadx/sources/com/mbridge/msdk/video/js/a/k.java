package com.mbridge.msdk.video.js.a;

import com.mbridge.msdk.video.module.MBridgeContainerView;

/* JADX INFO: compiled from: JSContainerModule.java */
/* JADX INFO: loaded from: classes3.dex */
public final class k extends d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private MBridgeContainerView f4198a;

    public k(MBridgeContainerView mBridgeContainerView) {
        this.f4198a = mBridgeContainerView;
    }

    @Override // com.mbridge.msdk.video.js.a.d, com.mbridge.msdk.video.js.e
    public final boolean showAlertWebView() {
        super.showAlertWebView();
        MBridgeContainerView mBridgeContainerView = this.f4198a;
        if (mBridgeContainerView != null) {
            return mBridgeContainerView.showAlertWebView();
        }
        return false;
    }

    @Override // com.mbridge.msdk.video.js.a.d, com.mbridge.msdk.video.js.e
    public final void showVideoClickView(int i) {
        super.showVideoClickView(i);
        MBridgeContainerView mBridgeContainerView = this.f4198a;
        if (mBridgeContainerView != null) {
            mBridgeContainerView.showVideoClickView(i);
        }
    }

    @Override // com.mbridge.msdk.video.js.a.d, com.mbridge.msdk.video.js.e
    public final void showEndcard(int i) {
        super.showEndcard(i);
        try {
            if (this.f4198a != null) {
                this.f4198a.showEndcard(i);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override // com.mbridge.msdk.video.js.a.d, com.mbridge.msdk.video.js.e
    public final void showVideoEndCover() {
        super.showVideoEndCover();
        try {
            if (this.f4198a != null) {
                this.f4198a.showVideoEndCover();
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override // com.mbridge.msdk.video.js.a.d, com.mbridge.msdk.video.js.g
    public final void toggleCloseBtn(int i) {
        super.toggleCloseBtn(i);
        try {
            if (this.f4198a != null) {
                this.f4198a.toggleCloseBtn(i);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override // com.mbridge.msdk.video.js.a.d, com.mbridge.msdk.video.js.e
    public final boolean endCardShowing() {
        try {
            if (this.f4198a != null) {
                return this.f4198a.endCardShowing();
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        return super.endCardShowing();
    }

    @Override // com.mbridge.msdk.video.js.a.d, com.mbridge.msdk.video.js.e
    public final boolean miniCardShowing() {
        try {
            if (this.f4198a != null) {
                return this.f4198a.miniCardShowing();
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        return super.miniCardShowing();
    }

    @Override // com.mbridge.msdk.video.js.a.d, com.mbridge.msdk.video.js.e
    public final void readyStatus(int i) {
        try {
            if (this.f4198a != null) {
                this.f4198a.readyStatus(i);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        super.readyStatus(i);
    }

    @Override // com.mbridge.msdk.video.js.a.d, com.mbridge.msdk.video.js.e
    public final void showMiniCard(int i, int i2, int i3, int i4, int i5) {
        super.showMiniCard(i, i2, i3, i4, i5);
        try {
            if (this.f4198a != null) {
                this.f4198a.showMiniCard(i, i2, i3, i4, i5);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override // com.mbridge.msdk.video.js.a.d, com.mbridge.msdk.video.js.e
    public final void resizeMiniCard(int i, int i2, int i3) {
        super.resizeMiniCard(i, i2, i3);
        try {
            if (this.f4198a != null) {
                this.f4198a.resizeMiniCard(i, i2, i3);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override // com.mbridge.msdk.video.js.a.d, com.mbridge.msdk.video.js.e
    public final void configurationChanged(int i, int i2, int i3) {
        super.configurationChanged(i, i2, i3);
        try {
            if (this.f4198a != null) {
                this.f4198a.configurationChanged(i, i2, i3);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override // com.mbridge.msdk.video.js.a.d, com.mbridge.msdk.video.js.e
    public final void hideAlertWebview() {
        super.hideAlertWebview();
        MBridgeContainerView mBridgeContainerView = this.f4198a;
        if (mBridgeContainerView != null) {
            mBridgeContainerView.hideAlertWebview();
        }
    }

    @Override // com.mbridge.msdk.video.js.a.d, com.mbridge.msdk.video.js.e
    public final void ivRewardAdsWithoutVideo(String str) {
        super.ivRewardAdsWithoutVideo(str);
        MBridgeContainerView mBridgeContainerView = this.f4198a;
        if (mBridgeContainerView != null) {
            mBridgeContainerView.ivRewardAdsWithoutVideo(str);
        }
    }
}
