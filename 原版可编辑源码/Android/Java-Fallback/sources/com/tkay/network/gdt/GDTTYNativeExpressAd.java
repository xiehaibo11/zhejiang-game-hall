package com.tkay.network.gdt;

public class GDTTYNativeExpressAd extends com.tkay.nativead.unitgroup.api.CustomNativeAd {
    com.qq.e.ads.nativ.NativeExpressAD a;
    com.qq.e.ads.nativ.NativeExpressADView b;
    com.tkay.network.gdt.a c;
    java.lang.String d;



    protected GDTTYNativeExpressAd(android.content.Context r13, java.lang.String r14, int r15, int r16, int r17, int r18, int r19, java.lang.String r20) {
            r12 = this;
            r0 = r12
            r2 = r13
            r1 = r15
            r3 = r16
            r7 = r17
            r8 = r19
            r12.<init>()
            r6 = r20
            r0.d = r6
            com.tkay.network.gdt.GDTTYNativeExpressAd$1 r5 = new com.tkay.network.gdt.GDTTYNativeExpressAd$1
            r5.<init>(r12)
            r9 = -1
            if (r1 <= 0) goto L21
            com.tkay.network.gdt.GDTTYInitManager.getInstance()
            float r1 = (float) r1
            int r1 = com.tkay.network.gdt.GDTTYInitManager.a(r13, r1)
            goto L22
        L21:
            r1 = r9
        L22:
            if (r3 <= 0) goto L2d
            com.tkay.network.gdt.GDTTYInitManager.getInstance()
            float r3 = (float) r3
            int r3 = com.tkay.network.gdt.GDTTYInitManager.a(r13, r3)
            goto L2e
        L2d:
            r3 = -2
        L2e:
            boolean r4 = android.text.TextUtils.isEmpty(r20)
            if (r4 == 0) goto L42
            com.qq.e.ads.nativ.NativeExpressAD r4 = new com.qq.e.ads.nativ.NativeExpressAD
            com.qq.e.ads.nativ.ADSize r6 = new com.qq.e.ads.nativ.ADSize
            r6.<init>(r1, r3)
            r10 = r14
            r4.<init>(r13, r6, r14, r5)
            r0.a = r4
            goto L55
        L42:
            r10 = r14
            com.qq.e.ads.nativ.NativeExpressAD r11 = new com.qq.e.ads.nativ.NativeExpressAD
            com.qq.e.ads.nativ.ADSize r4 = new com.qq.e.ads.nativ.ADSize
            r4.<init>(r1, r3)
            r1 = r11
            r2 = r13
            r3 = r4
            r4 = r14
            r6 = r20
            r1.<init>(r2, r3, r4, r5, r6)
            r0.a = r11
        L55:
            com.qq.e.ads.cfg.VideoOption$Builder r1 = new com.qq.e.ads.cfg.VideoOption$Builder
            r1.<init>()
            r2 = 0
            r3 = 1
            if (r7 != r3) goto L60
            r4 = r3
            goto L61
        L60:
            r4 = r2
        L61:
            com.qq.e.ads.cfg.VideoOption$Builder r1 = r1.setAutoPlayMuted(r4)
            if (r7 != r3) goto L68
            r2 = r3
        L68:
            com.qq.e.ads.cfg.VideoOption$Builder r1 = r1.setDetailPageMuted(r2)
            r2 = r18
            com.qq.e.ads.cfg.VideoOption$Builder r1 = r1.setAutoPlayPolicy(r2)
            com.qq.e.ads.cfg.VideoOption r1 = r1.build()
            com.qq.e.ads.nativ.NativeExpressAD r2 = r0.a
            r2.setVideoOption(r1)
            if (r8 == r9) goto L82
            com.qq.e.ads.nativ.NativeExpressAD r1 = r0.a
            r1.setMaxVideoDuration(r8)
        L82:
            return
    }

    static java.lang.String a(com.tkay.network.gdt.GDTTYNativeExpressAd r0, java.lang.String r1) {
            r0.mAdSourceType = r1
            return r1
    }

    static java.lang.String b(com.tkay.network.gdt.GDTTYNativeExpressAd r0, java.lang.String r1) {
            r0.mAdSourceType = r1
            return r1
    }

    protected final void a(com.tkay.network.gdt.a r2, com.qq.e.comm.constants.LoadAdParams r3) {
            r1 = this;
            r1.c = r2
            java.lang.String r2 = r1.d
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            r0 = 1
            if (r2 == 0) goto L11
            com.qq.e.ads.nativ.NativeExpressAD r2 = r1.a
            r2.loadAD(r0, r3)
            return
        L11:
            com.qq.e.ads.nativ.NativeExpressAD r2 = r1.a
            r2.loadAD(r0)
            return
    }

    @Override
    public void destroy() {
            r2 = this;
            com.qq.e.ads.nativ.NativeExpressADView r0 = r2.b
            r1 = 0
            if (r0 == 0) goto Ld
            r0.setMediaListener(r1)
            com.qq.e.ads.nativ.NativeExpressADView r0 = r2.b
            r0.destroy()
        Ld:
            r2.b = r1
            r2.c = r1
            r2.a = r1
            return
    }

    @Override
    public android.view.View getAdMediaView(java.lang.Object... r1) {
            r0 = this;
            com.qq.e.ads.nativ.NativeExpressADView r1 = r0.b
            return r1
    }

    @Override
    public boolean isNativeExpress() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public void registerDownloadConfirmListener() {
            r2 = this;
            com.qq.e.ads.nativ.NativeExpressADView r0 = r2.b
            if (r0 == 0) goto Lc
            com.tkay.network.gdt.GDTTYNativeExpressAd$2 r1 = new com.tkay.network.gdt.GDTTYNativeExpressAd$2
            r1.<init>(r2)
            r0.setDownloadConfirmListener(r1)
        Lc:
            return
    }
}
