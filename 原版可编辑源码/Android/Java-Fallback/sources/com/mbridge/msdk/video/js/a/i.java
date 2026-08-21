package com.mbridge.msdk.video.js.a;

public final class i extends com.mbridge.msdk.video.js.a.b {
    private android.app.Activity a;
    private com.mbridge.msdk.video.bt.module.MBridgeBTContainer b;

    public i(android.app.Activity r1, com.mbridge.msdk.video.bt.module.MBridgeBTContainer r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    @Override
    public final void click(int r2, java.lang.String r3) {
            r1 = this;
            super.click(r2, r3)
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r1.b
            if (r0 == 0) goto La
            r0.click(r2, r3)
        La:
            return
    }

    @Override
    public final void handlerH5Exception(int r2, java.lang.String r3) {
            r1 = this;
            super.handlerH5Exception(r2, r3)
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r1.b
            if (r0 == 0) goto La
            r0.handlerH5Exception(r2, r3)
        La:
            return
    }

    @Override
    public final void reactDeveloper(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            super.reactDeveloper(r2, r3)
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r1.b
            if (r0 == 0) goto La
            r0.reactDeveloper(r2, r3)
        La:
            return
    }
}
