package com.tkay.basead.handler;

public class OfferClickHandler extends com.tkay.core.api.IOfferClickHandler {
    public OfferClickHandler() {
            r0 = this;
            r0.<init>()
            return
    }

    private static com.tkay.basead.c.d a(com.tkay.core.common.f.h r2) {
            com.tkay.basead.a.d r0 = com.tkay.basead.a.d.a()
            int r1 = r2.d()
            java.lang.String r2 = r2.p()
            com.tkay.basead.c.d r2 = r0.a(r1, r2)
            return r2
    }

    @Override
    public boolean startDownloadApp(android.content.Context r10, com.tkay.core.common.f.h r11, com.tkay.core.common.f.i r12, java.lang.String r13) {
            r9 = this;
            com.tkay.basead.a.d r0 = com.tkay.basead.a.d.a()
            int r1 = r11.d()
            java.lang.String r2 = r11.p()
            com.tkay.basead.c.d r6 = r0.a(r1, r2)
            com.tkay.basead.a.i r8 = new com.tkay.basead.a.i
            r8.<init>()
            r3 = r10
            r4 = r12
            r5 = r11
            r7 = r13
            boolean r10 = com.tkay.basead.a.b.a(r3, r4, r5, r6, r7, r8)
            return r10
    }
}
