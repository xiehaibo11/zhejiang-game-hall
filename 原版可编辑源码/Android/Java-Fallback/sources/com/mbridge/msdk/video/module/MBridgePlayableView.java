package com.mbridge.msdk.video.module;

public class MBridgePlayableView extends com.mbridge.msdk.video.module.MBridgeH5EndCardView {
    public MBridgePlayableView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public MBridgePlayableView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    protected final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = super.a()
            return r0
    }

    @Override
    public void init(android.content.Context r1) {
            r0 = this;
            super.init(r1)
            return
    }

    @Override
    public void onBackPress() {
            r0 = this;
            super.onBackPress()
            return
    }

    @Override
    public void preLoadData(com.mbridge.msdk.video.js.factory.b r1) {
            r0 = this;
            super.preLoadData(r1)
            r1 = 1
            super.setLoadPlayable(r1)
            return
    }
}
