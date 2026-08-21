package com.kwad.components.core.webview.b.a;

public final class h extends com.kwad.components.core.webview.b.a.v {
    private com.kwad.components.core.webview.b.a.h.a Wy;

    public interface a {
        void a(com.kwad.components.core.webview.b.a.h r1);
    }

    public static class b extends com.kwad.sdk.core.response.a.a {
        public int Wz;

        public b() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public h() {
            r0 = this;
            r0.<init>()
            return
    }

    public final void a(com.kwad.components.core.webview.b.a.h.a r1) {
            r0 = this;
            r0.Wy = r1
            return
    }

    @Override
    public final void a(java.lang.String r1, com.kwad.sdk.core.webview.c.c r2) {
            r0 = this;
            super.a(r1, r2)
            com.kwad.components.core.webview.b.a.h$a r1 = r0.Wy
            if (r1 == 0) goto La
            r1.a(r0)
        La:
            return
    }

    public final void aN(boolean r2) {
            r1 = this;
            if (r2 == 0) goto L4
            r2 = 1
            goto L5
        L4:
            r2 = 2
        L5:
            com.kwad.components.core.webview.b.a.h$b r0 = new com.kwad.components.core.webview.b.a.h$b
            r0.<init>()
            r0.Wz = r2
            r1.b(r0)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "getPlayEndType"
            return r0
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            super.onDestroy()
            r0 = 0
            r1.Wy = r0
            return
    }
}
