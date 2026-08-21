package com.tkay.banner.a;

public final class b implements com.tkay.banner.unitgroup.api.CustomBannerEventListener {
    java.lang.ref.WeakReference<com.tkay.banner.a.e> a;
    com.tkay.banner.unitgroup.api.CustomBannerAdapter b;
    boolean c;

    public b(com.tkay.banner.a.e r2, com.tkay.banner.unitgroup.api.CustomBannerAdapter r3, boolean r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.c = r0
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.a = r0
            r1.b = r3
            r1.c = r4
            return
    }

    @Override
    public final void onBannerAdClicked() {
            r4 = this;
            com.tkay.banner.unitgroup.api.CustomBannerAdapter r0 = r4.b
            if (r0 == 0) goto L30
            com.tkay.core.common.f.d r0 = r0.getTrackingInfo()
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            com.tkay.core.common.k.a r1 = com.tkay.core.common.k.a.a(r1)
            r2 = 6
            r1.a(r2, r0)
            java.lang.String r1 = com.tkay.core.common.b.f.i.d
            java.lang.String r2 = com.tkay.core.common.b.f.i.l
            java.lang.String r3 = ""
            com.tkay.core.common.l.g.a(r0, r1, r2, r3)
            java.lang.ref.WeakReference<com.tkay.banner.a.e> r0 = r4.a
            java.lang.Object r0 = r0.get()
            com.tkay.banner.a.e r0 = (com.tkay.banner.a.e) r0
            if (r0 == 0) goto L30
            com.tkay.banner.unitgroup.api.CustomBannerAdapter r1 = r4.b
            r0.onBannerClicked(r1)
        L30:
            return
    }

    @Override
    public final void onBannerAdClose() {
            r4 = this;
            com.tkay.banner.unitgroup.api.CustomBannerAdapter r0 = r4.b
            if (r0 == 0) goto L28
            java.lang.ref.WeakReference<com.tkay.banner.a.e> r0 = r4.a
            java.lang.Object r0 = r0.get()
            com.tkay.banner.a.e r0 = (com.tkay.banner.a.e) r0
            if (r0 == 0) goto L13
            com.tkay.banner.unitgroup.api.CustomBannerAdapter r1 = r4.b
            r0.onBannerClose(r1)
        L13:
            com.tkay.banner.unitgroup.api.CustomBannerAdapter r0 = r4.b
            com.tkay.core.common.f.d r0 = r0.getTrackingInfo()
            java.lang.String r1 = com.tkay.core.common.b.f.i.e
            java.lang.String r2 = com.tkay.core.common.b.f.i.l
            java.lang.String r3 = ""
            com.tkay.core.common.l.g.a(r0, r1, r2, r3)
            if (r0 == 0) goto L28
            r1 = 0
            com.tkay.core.common.k.c.a(r0, r1)
        L28:
            return
    }

    @Override
    public final void onBannerAdShow() {
            r4 = this;
            com.tkay.banner.unitgroup.api.CustomBannerAdapter r0 = r4.b
            if (r0 == 0) goto L3a
            java.lang.ref.WeakReference<com.tkay.banner.a.e> r0 = r4.a
            java.lang.Object r0 = r0.get()
            com.tkay.banner.a.e r0 = (com.tkay.banner.a.e) r0
            if (r0 == 0) goto L15
            com.tkay.banner.unitgroup.api.CustomBannerAdapter r1 = r4.b
            boolean r2 = r4.c
            r0.onBannerShow(r1, r2)
        L15:
            com.tkay.banner.unitgroup.api.CustomBannerAdapter r0 = r4.b
            com.tkay.core.common.f.d r0 = r0.getTrackingInfo()
            java.lang.String r1 = com.tkay.core.common.b.f.i.c
            java.lang.String r2 = com.tkay.core.common.b.f.i.l
            java.lang.String r3 = ""
            com.tkay.core.common.l.g.a(r0, r1, r2, r3)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            com.tkay.core.common.k.a r1 = com.tkay.core.common.k.a.a(r1)
            r2 = 4
            com.tkay.banner.unitgroup.api.CustomBannerAdapter r3 = r4.b
            com.tkay.core.common.f.aj r3 = r3.getUnitGroupInfo()
            r1.a(r2, r0, r3)
        L3a:
            return
    }

    @Override
    public final void onDeeplinkCallback(boolean r4) {
            r3 = this;
            java.lang.ref.WeakReference<com.tkay.banner.a.e> r0 = r3.a
            java.lang.Object r0 = r0.get()
            com.tkay.banner.a.e r0 = (com.tkay.banner.a.e) r0
            if (r0 == 0) goto Lf
            com.tkay.banner.unitgroup.api.CustomBannerAdapter r1 = r3.b
            r0.onDeeplinkCallback(r1, r4)
        Lf:
            com.tkay.banner.unitgroup.api.CustomBannerAdapter r0 = r3.b
            if (r0 == 0) goto L25
            com.tkay.core.common.f.d r0 = r0.getTrackingInfo()
            if (r4 == 0) goto L1c
            java.lang.String r4 = com.tkay.core.common.b.f.i.l
            goto L1e
        L1c:
            java.lang.String r4 = com.tkay.core.common.b.f.i.m
        L1e:
            java.lang.String r1 = com.tkay.core.common.b.f.i.i
            java.lang.String r2 = ""
            com.tkay.core.common.l.g.a(r0, r1, r4, r2)
        L25:
            return
    }

    @Override
    public final void onDownloadConfirm(android.content.Context r3, com.tkay.core.api.TYNetworkConfirmInfo r4) {
            r2 = this;
            java.lang.ref.WeakReference<com.tkay.banner.a.e> r0 = r2.a
            java.lang.Object r0 = r0.get()
            com.tkay.banner.a.e r0 = (com.tkay.banner.a.e) r0
            if (r0 == 0) goto Lf
            com.tkay.banner.unitgroup.api.CustomBannerAdapter r1 = r2.b
            r0.onDownloadConfirm(r3, r1, r4)
        Lf:
            com.tkay.banner.unitgroup.api.CustomBannerAdapter r3 = r2.b
            if (r3 == 0) goto L20
            com.tkay.core.common.f.d r3 = r3.getTrackingInfo()
            java.lang.String r4 = com.tkay.core.common.b.f.i.j
            java.lang.String r0 = com.tkay.core.common.b.f.i.l
            java.lang.String r1 = ""
            com.tkay.core.common.l.g.a(r3, r4, r0, r1)
        L20:
            return
    }
}
