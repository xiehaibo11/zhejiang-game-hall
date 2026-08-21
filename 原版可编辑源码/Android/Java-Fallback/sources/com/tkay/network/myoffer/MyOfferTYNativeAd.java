package com.tkay.network.myoffer;

public class MyOfferTYNativeAd extends com.tkay.nativead.unitgroup.api.CustomNativeAd {
    com.tkay.basead.f.e a;
    android.content.Context b;
    android.view.View c;


    public MyOfferTYNativeAd(android.content.Context r1, com.tkay.basead.f.e r2) {
            r0 = this;
            r0.<init>()
            android.content.Context r1 = r1.getApplicationContext()
            r0.b = r1
            r0.a = r2
            com.tkay.network.myoffer.MyOfferTYNativeAd$1 r1 = new com.tkay.network.myoffer.MyOfferTYNativeAd$1
            r1.<init>(r0)
            r2.a(r1)
            com.tkay.basead.f.e r1 = r0.a
            com.tkay.core.common.f.r r1 = r1.e()
            java.util.Map r1 = com.tkay.basead.b.a(r1)
            r0.setNetworkInfoMap(r1)
            com.tkay.basead.f.e r1 = r0.a
            java.lang.String r1 = r1.j()
            r0.setAdChoiceIconUrl(r1)
            com.tkay.basead.f.e r1 = r0.a
            java.lang.String r1 = r1.b()
            r0.setTitle(r1)
            com.tkay.basead.f.e r1 = r0.a
            java.lang.String r1 = r1.f()
            r0.setDescriptionText(r1)
            com.tkay.basead.f.e r1 = r0.a
            java.lang.String r1 = r1.h()
            r0.setIconImageUrl(r1)
            com.tkay.basead.f.e r1 = r0.a
            java.lang.String r1 = r1.i()
            r0.setMainImageUrl(r1)
            com.tkay.basead.f.e r1 = r0.a
            java.lang.String r1 = r1.g()
            r0.setCallToActionText(r1)
            return
    }

    @Override
    public void clear(android.view.View r1) {
            r0 = this;
            com.tkay.basead.f.e r1 = r0.a
            if (r1 == 0) goto L7
            r1.l()
        L7:
            return
    }

    @Override
    public void destroy() {
            r2 = this;
            com.tkay.basead.f.e r0 = r2.a
            if (r0 == 0) goto Ld
            r1 = 0
            r0.a(r1)
            com.tkay.basead.f.e r0 = r2.a
            r0.m()
        Ld:
            return
    }

    @Override
    public android.view.View getAdMediaView(java.lang.Object... r1) {
            r0 = this;
            android.view.View r1 = r0.c
            if (r1 != 0) goto La
            android.view.View r1 = com.tkay.basead.f.e.k()
            r0.c = r1
        La:
            android.view.View r1 = r0.c
            return r1
    }

    @Override
    public void prepare(android.view.View r2, com.tkay.nativead.api.TYNativePrepareInfo r3) {
            r1 = this;
            com.tkay.basead.f.e r0 = r1.a
            if (r0 == 0) goto L1b
            java.util.List r3 = r3.getClickViewList()
            if (r3 == 0) goto L16
            int r0 = r3.size()
            if (r0 <= 0) goto L16
            com.tkay.basead.f.e r0 = r1.a
            r0.a(r2, r3)
            return
        L16:
            com.tkay.basead.f.e r3 = r1.a
            r3.a(r2)
        L1b:
            return
    }
}
