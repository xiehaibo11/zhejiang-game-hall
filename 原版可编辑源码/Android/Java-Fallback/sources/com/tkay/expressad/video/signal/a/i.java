package com.tkay.expressad.video.signal.a;

public final class i extends com.tkay.expressad.video.signal.a.b {
    private android.app.Activity a;
    private com.tkay.expressad.video.bt.module.TkayBTContainer d;

    public i(android.app.Activity r1, com.tkay.expressad.video.bt.module.TkayBTContainer r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.d = r2
            return
    }

    @Override
    public final void click(int r2, java.lang.String r3) {
            r1 = this;
            super.click(r2, r3)
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r1.d
            if (r0 == 0) goto La
            r0.click(r2, r3)
        La:
            return
    }

    @Override
    public final void handlerH5Exception(int r2, java.lang.String r3) {
            r1 = this;
            super.handlerH5Exception(r2, r3)
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r1.d
            if (r0 == 0) goto La
            r0.handlerH5Exception(r2, r3)
        La:
            return
    }

    @Override
    public final void reactDeveloper(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            super.reactDeveloper(r2, r3)
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r1.d
            if (r0 == 0) goto La
            r0.reactDeveloper(r2, r3)
        La:
            return
    }
}
