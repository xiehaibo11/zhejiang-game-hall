package com.tkay.network.onlineapi;

public class OnlineApiTYNativeAd extends com.tkay.nativead.unitgroup.api.CustomNativeAd {
    com.tkay.basead.d.h a;
    android.content.Context b;
    android.view.View c;


    public OnlineApiTYNativeAd(android.content.Context r1, com.tkay.basead.d.h r2) {
            r0 = this;
            r0.<init>()
            android.content.Context r1 = r1.getApplicationContext()
            r0.b = r1
            r0.a = r2
            com.tkay.network.onlineapi.OnlineApiTYNativeAd$1 r1 = new com.tkay.network.onlineapi.OnlineApiTYNativeAd$1
            r1.<init>(r0)
            r2.a(r1)
            com.tkay.basead.d.h r1 = r0.a
            com.tkay.core.common.f.h r1 = r1.a()
            java.util.Map r1 = com.tkay.basead.b.a(r1)
            r0.setNetworkInfoMap(r1)
            com.tkay.basead.d.h r1 = r0.a
            java.lang.String r1 = r1.g()
            r0.setAdChoiceIconUrl(r1)
            com.tkay.basead.d.h r1 = r0.a
            java.lang.String r1 = r1.b()
            r0.setTitle(r1)
            com.tkay.basead.d.h r1 = r0.a
            java.lang.String r1 = r1.c()
            r0.setDescriptionText(r1)
            com.tkay.basead.d.h r1 = r0.a
            java.lang.String r1 = r1.e()
            r0.setIconImageUrl(r1)
            com.tkay.basead.d.h r1 = r0.a
            java.lang.String r1 = r1.f()
            r0.setMainImageUrl(r1)
            com.tkay.basead.d.h r1 = r0.a
            java.lang.String r1 = r1.d()
            r0.setCallToActionText(r1)
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
    public android.view.View getAdMediaView(java.lang.Object... r4) {
            r3 = this;
            android.view.View r4 = r3.c
            if (r4 != 0) goto L10
            com.tkay.basead.d.h r4 = r3.a
            android.content.Context r0 = r3.b
            r1 = 0
            r2 = 0
            android.view.View r4 = r4.a(r0, r2, r2, r1)
            r3.c = r4
        L10:
            android.view.View r4 = r3.c
            return r4
    }

    @Override
    public android.view.ViewGroup getCustomAdContainer() {
            r2 = this;
            com.tkay.basead.d.h r0 = r2.a
            if (r0 == 0) goto Lc
            com.tkay.basead.ui.OwnNativeATView r0 = new com.tkay.basead.ui.OwnNativeATView
            android.content.Context r1 = r2.b
            r0.<init>(r1)
            return r0
        Lc:
            r0 = 0
            return r0
    }

    @Override
    public void prepare(android.view.View r2, com.tkay.nativead.api.TYNativePrepareInfo r3) {
            r1 = this;
            com.tkay.basead.d.h r0 = r1.a
            if (r0 == 0) goto L1b
            java.util.List r3 = r3.getClickViewList()
            if (r3 == 0) goto L16
            int r0 = r3.size()
            if (r0 <= 0) goto L16
            com.tkay.basead.d.h r0 = r1.a
            r0.a(r2, r3)
            return
        L16:
            com.tkay.basead.d.h r3 = r1.a
            r3.a(r2)
        L1b:
            return
    }
}
