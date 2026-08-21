package com.mbridge.msdk.video.module.a.a;

import com.mbridge.msdk.video.module.MBridgeClickMiniCardView;

public final class f extends h {
    private MBridgeClickMiniCardView a;

    public f(MBridgeClickMiniCardView mBridgeClickMiniCardView, com.mbridge.msdk.video.module.a.a aVar) {
        super(aVar);
        this.a = mBridgeClickMiniCardView;
    }

    @Override
    public final void a(int i, Object obj) {
        boolean z = false;
        switch (i) {
            case 100:
                MBridgeClickMiniCardView mBridgeClickMiniCardView = this.a;
                if (mBridgeClickMiniCardView != null) {
                    mBridgeClickMiniCardView.webviewshow();
                    MBridgeClickMiniCardView mBridgeClickMiniCardView2 = this.a;
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
