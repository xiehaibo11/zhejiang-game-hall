package com.tkay.expressad.video.module;

public class TkayLandingPageView extends com.tkay.expressad.video.module.TkayH5EndCardView {

    static class 1 {
    }

    private static final class a implements com.tkay.expressad.atsignalcommon.base.a {
        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        a(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final boolean a(java.lang.String r3) {
                r2 = this;
                boolean r0 = android.text.TextUtils.isEmpty(r3)
                r1 = 0
                if (r0 != 0) goto L1c
                boolean r0 = android.webkit.URLUtil.isNetworkUrl(r3)
                if (r0 == 0) goto Le
                return r1
            Le:
                com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
                android.content.Context r0 = r0.f()
                r1 = 0
                com.tkay.expressad.foundation.h.s.a(r0, r3, r1)
                r3 = 1
                return r3
            L1c:
                return r1
        }
    }

    public TkayLandingPageView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public TkayLandingPageView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    protected final java.lang.String a() {
            r1 = this;
            com.tkay.expressad.foundation.d.c r0 = r1.b
            if (r0 == 0) goto Lb
            com.tkay.expressad.foundation.d.c r0 = r1.b
            java.lang.String r0 = r0.ad()
            return r0
        Lb:
            r0 = 0
            return r0
    }

    @Override
    public void init(android.content.Context r1) {
            r0 = this;
            super.init(r1)
            return
    }

    @Override
    public void preLoadData(com.tkay.expressad.video.signal.factory.b r4) {
            r3 = this;
            boolean r0 = r3.f
            r1 = 0
            if (r0 == 0) goto Lf
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r3.s
            com.tkay.expressad.video.module.TkayLandingPageView$a r2 = new com.tkay.expressad.video.module.TkayLandingPageView$a
            r2.<init>(r1)
            r0.setFilter(r2)
        Lf:
            super.preLoadData(r4)
            r3.setVisibility(r1)
            r3.setCloseVisible(r1)
            return
    }

    @Override
    public void webviewshow() {
            r3 = this;
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> Ld
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r3.s     // Catch: java.lang.Exception -> Ld
            java.lang.String r1 = "webviewshow"
            java.lang.String r2 = ""
            com.tkay.expressad.atsignalcommon.windvane.j.a(r0, r1, r2)     // Catch: java.lang.Exception -> Ld
            return
        Ld:
            r0 = move-exception
            r0.printStackTrace()
            return
    }
}
