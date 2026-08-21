package com.kwad.components.ad.reward.j;

public final class e implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.components.ad.reward.j.e.a xv;

    public interface a {
        void jc();
    }

    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    public final void a(com.kwad.components.ad.reward.j.e.a r1) {
            r0 = this;
            r0.xv = r1
            return
    }

    @Override
    public final void a(java.lang.String r1, com.kwad.sdk.core.webview.c.c r2) {
            r0 = this;
            com.kwad.components.ad.reward.j.e$a r1 = r0.xv
            if (r1 == 0) goto L7
            r1.jc()
        L7:
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "clickGift"
            return r0
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            r0 = 0
            r1.xv = r0
            return
    }
}
