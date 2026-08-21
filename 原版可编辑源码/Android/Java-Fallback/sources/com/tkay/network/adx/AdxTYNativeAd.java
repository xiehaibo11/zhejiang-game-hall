package com.tkay.network.adx;

public class AdxTYNativeAd extends com.tkay.nativead.unitgroup.api.CustomNativeAd {
    com.tkay.basead.d.h a;
    android.content.Context b;
    boolean c;
    boolean d;
    android.view.View e;



    public AdxTYNativeAd(android.content.Context r3, com.tkay.basead.d.h r4, boolean r5, boolean r6) {
            r2 = this;
            r2.<init>()
            android.content.Context r0 = r3.getApplicationContext()
            r2.b = r0
            r2.a = r4
            com.tkay.core.common.f.h r4 = r4.a()
            java.util.Map r4 = com.tkay.basead.b.a(r4)
            r2.setNetworkInfoMap(r4)
            com.tkay.basead.d.h r4 = r2.a
            com.tkay.network.adx.AdxTYNativeAd$1 r0 = new com.tkay.network.adx.AdxTYNativeAd$1
            com.tkay.core.common.f.h r1 = r4.a()
            r0.<init>(r2, r1, r3)
            r4.a(r0)
            r2.c = r5
            r2.d = r6
            if (r5 != 0) goto L69
            com.tkay.basead.d.h r3 = r2.a
            boolean r3 = r3.h()
            if (r3 == 0) goto L33
            goto L69
        L33:
            com.tkay.basead.d.h r3 = r2.a
            java.lang.String r3 = r3.g()
            r2.setAdChoiceIconUrl(r3)
            com.tkay.basead.d.h r3 = r2.a
            java.lang.String r3 = r3.b()
            r2.setTitle(r3)
            com.tkay.basead.d.h r3 = r2.a
            java.lang.String r3 = r3.c()
            r2.setDescriptionText(r3)
            com.tkay.basead.d.h r3 = r2.a
            java.lang.String r3 = r3.e()
            r2.setIconImageUrl(r3)
            com.tkay.basead.d.h r3 = r2.a
            java.lang.String r3 = r3.f()
            r2.setMainImageUrl(r3)
            com.tkay.basead.d.h r3 = r2.a
            java.lang.String r3 = r3.d()
            r2.setCallToActionText(r3)
        L69:
            return
    }

    @Override
    public void clear(android.view.View r1) {
            r0 = this;
            com.tkay.basead.d.h r1 = r0.a
            if (r1 == 0) goto L7
            r1.i()
        L7:
            return
    }

    @Override
    public void destroy() {
            r2 = this;
            com.tkay.basead.d.h r0 = r2.a
            if (r0 == 0) goto Ld
            r1 = 0
            r0.a(r1)
            com.tkay.basead.d.h r0 = r2.a
            r0.j()
        Ld:
            return
    }

    @Override
    public android.view.View getAdMediaView(java.lang.Object... r5) {
            r4 = this;
            android.view.View r5 = r4.e
            if (r5 != 0) goto L17
            com.tkay.basead.d.h r5 = r4.a
            android.content.Context r0 = r4.b
            boolean r1 = r4.c
            boolean r2 = r4.d
            com.tkay.network.adx.AdxTYNativeAd$2 r3 = new com.tkay.network.adx.AdxTYNativeAd$2
            r3.<init>(r4)
            android.view.View r5 = r5.a(r0, r1, r2, r3)
            r4.e = r5
        L17:
            android.view.View r5 = r4.e
            return r5
    }

    @Override
    public android.view.ViewGroup getCustomAdContainer() {
            r2 = this;
            com.tkay.basead.d.h r0 = r2.a
            if (r0 == 0) goto L10
            boolean r0 = r2.c
            if (r0 != 0) goto L10
            com.tkay.basead.ui.OwnNativeATView r0 = new com.tkay.basead.ui.OwnNativeATView
            android.content.Context r1 = r2.b
            r0.<init>(r1)
            return r0
        L10:
            r0 = 0
            return r0
    }

    @Override
    public boolean isNativeExpress() {
            r1 = this;
            boolean r0 = r1.c
            if (r0 != 0) goto Lf
            com.tkay.basead.d.h r0 = r1.a
            boolean r0 = r0.h()
            if (r0 == 0) goto Ld
            goto Lf
        Ld:
            r0 = 0
            return r0
        Lf:
            r0 = 1
            return r0
    }

    @Override
    public void onPause() {
            r1 = this;
            com.tkay.basead.d.h r0 = r1.a
            if (r0 == 0) goto L7
            r0.l()
        L7:
            return
    }

    @Override
    public void onResume() {
            r1 = this;
            com.tkay.basead.d.h r0 = r1.a
            if (r0 == 0) goto L7
            r0.k()
        L7:
            return
    }

    @Override
    public void prepare(android.view.View r2, com.tkay.nativead.api.TYNativePrepareInfo r3) {
            r1 = this;
            com.tkay.basead.d.h r0 = r1.a
            r0.k()
            boolean r0 = r1.c
            if (r0 != 0) goto L24
            com.tkay.basead.d.h r0 = r1.a
            if (r0 == 0) goto L24
            java.util.List r3 = r3.getClickViewList()
            if (r3 == 0) goto L1f
            int r0 = r3.size()
            if (r0 <= 0) goto L1f
            com.tkay.basead.d.h r0 = r1.a
            r0.a(r2, r3)
            return
        L1f:
            com.tkay.basead.d.h r3 = r1.a
            r3.a(r2)
        L24:
            return
    }
}
