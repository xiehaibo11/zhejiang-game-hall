package com.tkay.expressad.video.module.a.a;

public final class g extends com.tkay.expressad.video.module.a.a.i {
    private com.tkay.expressad.video.module.TkayClickMiniCardView a;

    public g(com.tkay.expressad.video.module.TkayClickMiniCardView r1, com.tkay.expressad.video.module.a.a r2) {
            r0 = this;
            r0.<init>(r2)
            r0.a = r1
            return
    }

    @Override
    public final void a(int r4, java.lang.Object r5) {
            r3 = this;
            r0 = 0
            switch(r4) {
                case 100: goto La;
                case 101: goto L8;
                case 102: goto L8;
                case 103: goto L5;
                default: goto L4;
            }
        L4:
            goto L1e
        L5:
            r4 = 107(0x6b, float:1.5E-43)
            goto L1e
        L8:
            r0 = 1
            goto L1e
        La:
            com.tkay.expressad.video.module.TkayClickMiniCardView r1 = r3.a
            if (r1 == 0) goto L1e
            r1.webviewshow()
            com.tkay.expressad.video.module.TkayClickMiniCardView r1 = r3.a
            android.content.res.Resources r2 = r1.getResources()
            android.content.res.Configuration r2 = r2.getConfiguration()
            r1.onSelfConfigurationChanged(r2)
        L1e:
            if (r0 != 0) goto L23
            super.a(r4, r5)
        L23:
            return
    }
}
