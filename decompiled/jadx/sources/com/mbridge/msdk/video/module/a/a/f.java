package com.mbridge.msdk.video.module.a.a;

import com.mbridge.msdk.video.module.MBridgeClickMiniCardView;

/* JADX INFO: compiled from: MiniCardProxyNotifyListener.java */
/* JADX INFO: loaded from: classes3.dex */
public final class f extends h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private MBridgeClickMiniCardView f4369a;

    public f(MBridgeClickMiniCardView mBridgeClickMiniCardView, com.mbridge.msdk.video.module.a.a aVar) {
        super(aVar);
        this.f4369a = mBridgeClickMiniCardView;
    }

    @Override // com.mbridge.msdk.video.module.a.a.h, com.mbridge.msdk.video.module.a.a.e, com.mbridge.msdk.video.module.a.a
    public final void a(int i, Object obj) {
        boolean z = false;
        switch (i) {
            case 100:
                MBridgeClickMiniCardView mBridgeClickMiniCardView = this.f4369a;
                if (mBridgeClickMiniCardView != null) {
                    mBridgeClickMiniCardView.webviewshow();
                    MBridgeClickMiniCardView mBridgeClickMiniCardView2 = this.f4369a;
                    mBridgeClickMiniCardView2.onSelfConfigurationChanged(mBridgeClickMiniCardView2.getResources().getConfiguration());
                }
                break;
            case 101:
            case 102:
                z = true;
                break;
            case 103:
                i = 107;
                break;
        }
        if (z) {
            return;
        }
        super.a(i, obj);
    }
}
