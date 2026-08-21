package com.kwad.components.core.webview.jshandler;

public final class ad implements com.kwad.sdk.core.webview.c.a {
    private java.util.List<com.kwad.components.core.webview.jshandler.ad.c> mHolders;

    static class a extends com.kwad.sdk.core.download.a.a {
        private com.kwad.components.core.webview.jshandler.ad.c Vb;

        public a(com.kwad.components.core.webview.jshandler.ad.c r1) {
                r0 = this;
                r0.<init>()
                r0.Vb = r1
                return
        }

        @Override
        public final void onDownloadFailed() {
                r3 = this;
                com.kwad.components.core.webview.jshandler.ad$c r0 = r3.Vb
                r1 = 1
                r2 = 0
                com.kwad.components.core.webview.jshandler.ad.b(r0, r1, r2)
                return
        }

        @Override
        public final void onDownloadFinished() {
                r3 = this;
                com.kwad.components.core.webview.jshandler.ad$c r0 = r3.Vb
                r1 = 5
                r2 = 1065353216(0x3f800000, float:1.0)
                com.kwad.components.core.webview.jshandler.ad.b(r0, r1, r2)
                return
        }

        @Override
        public final void onIdle() {
                r3 = this;
                com.kwad.components.core.webview.jshandler.ad$c r0 = r3.Vb
                r1 = 1
                r2 = 0
                com.kwad.components.core.webview.jshandler.ad.b(r0, r1, r2)
                return
        }

        @Override
        public final void onInstalled() {
                r3 = this;
                com.kwad.components.core.webview.jshandler.ad$c r0 = r3.Vb
                r1 = 6
                r2 = 1065353216(0x3f800000, float:1.0)
                com.kwad.components.core.webview.jshandler.ad.b(r0, r1, r2)
                return
        }

        @Override
        public final void onPaused(int r3) {
                r2 = this;
                com.kwad.components.core.webview.jshandler.ad$c r0 = r2.Vb
                float r3 = (float) r3
                r1 = 1065353216(0x3f800000, float:1.0)
                float r3 = r3 * r1
                r1 = 1120403456(0x42c80000, float:100.0)
                float r3 = r3 / r1
                r1 = 3
                com.kwad.components.core.webview.jshandler.ad.b(r0, r1, r3)
                return
        }

        @Override
        public final void onProgressUpdate(int r3) {
                r2 = this;
                com.kwad.components.core.webview.jshandler.ad$c r0 = r2.Vb
                float r3 = (float) r3
                r1 = 1065353216(0x3f800000, float:1.0)
                float r3 = r3 * r1
                r1 = 1120403456(0x42c80000, float:100.0)
                float r3 = r3 / r1
                r1 = 2
                com.kwad.components.core.webview.jshandler.ad.b(r0, r1, r3)
                return
        }
    }

    public static class b extends com.kwad.sdk.core.response.a.a {
        public long creativeId;

        public b() {
                r2 = this;
                r2.<init>()
                r0 = -1
                r2.creativeId = r0
                return
        }
    }

    static class c {
        private com.kwad.components.core.e.d.c Vc;
        private com.kwad.components.core.webview.jshandler.ad.a Vd;
        private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
        private com.kwad.sdk.core.webview.c.c nA;

        public c(com.kwad.components.core.e.d.c r1, com.kwad.sdk.core.response.model.AdTemplate r2) {
                r0 = this;
                r0.<init>()
                r0.Vc = r1
                r0.mAdTemplate = r2
                return
        }

        static com.kwad.sdk.core.webview.c.c a(com.kwad.components.core.webview.jshandler.ad.c r0) {
                com.kwad.sdk.core.webview.c.c r0 = r0.nA
                return r0
        }

        static com.kwad.sdk.core.webview.c.c a(com.kwad.components.core.webview.jshandler.ad.c r0, com.kwad.sdk.core.webview.c.c r1) {
                r0.nA = r1
                return r1
        }

        static com.kwad.sdk.core.response.model.AdTemplate b(com.kwad.components.core.webview.jshandler.ad.c r0) {
                com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
                return r0
        }

        public final void a(com.kwad.components.core.webview.jshandler.ad.a r2) {
                r1 = this;
                com.kwad.components.core.e.d.c r0 = r1.Vc
                r0.b(r2)
                r1.Vd = r2
                return
        }

        public final void destroy() {
                r2 = this;
                com.kwad.components.core.e.d.c r0 = r2.Vc
                if (r0 == 0) goto Lb
                com.kwad.components.core.webview.jshandler.ad$a r1 = r2.Vd
                if (r1 == 0) goto Lb
                r0.c(r1)
            Lb:
                return
        }

        public final long rx() {
                r2 = this;
                com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
                if (r0 != 0) goto L7
                r0 = -1
                return r0
            L7:
                long r0 = com.kwad.sdk.core.response.b.d.cq(r0)
                return r0
        }
    }

    public ad(java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r6, java.util.List<com.kwad.components.core.e.d.c> r7) {
            r5 = this;
            r5.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r5.mHolders = r0
            if (r6 == 0) goto L2f
            if (r7 != 0) goto Lf
            goto L2f
        Lf:
            int r0 = r6.size()
            r1 = 0
        L14:
            if (r1 >= r0) goto L2f
            java.lang.Object r2 = r6.get(r1)
            com.kwad.sdk.core.response.model.AdTemplate r2 = (com.kwad.sdk.core.response.model.AdTemplate) r2
            java.lang.Object r3 = r7.get(r1)
            com.kwad.components.core.e.d.c r3 = (com.kwad.components.core.e.d.c) r3
            com.kwad.components.core.webview.jshandler.ad$c r4 = new com.kwad.components.core.webview.jshandler.ad$c
            r4.<init>(r3, r2)
            java.util.List<com.kwad.components.core.webview.jshandler.ad$c> r2 = r5.mHolders
            r2.add(r4)
            int r1 = r1 + 1
            goto L14
        L2f:
            return
    }

    private com.kwad.components.core.webview.jshandler.ad.c D(long r6) {
            r5 = this;
            r0 = -1
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            java.util.List<com.kwad.components.core.webview.jshandler.ad$c> r0 = r5.mHolders
            java.util.Iterator r0 = r0.iterator()
        Le:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L23
            java.lang.Object r2 = r0.next()
            com.kwad.components.core.webview.jshandler.ad$c r2 = (com.kwad.components.core.webview.jshandler.ad.c) r2
            long r3 = r2.rx()
            int r3 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r3 != 0) goto Le
            return r2
        L23:
            return r1
    }

    private static void a(com.kwad.components.core.webview.jshandler.ad.c r2, int r3, float r4) {
            if (r2 == 0) goto L45
            com.kwad.sdk.core.webview.c.c r0 = com.kwad.components.core.webview.jshandler.ad.c.a(r2)
            if (r0 != 0) goto L9
            goto L45
        L9:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "notifyDownloadProgress: "
            r0.<init>(r1)
            com.kwad.sdk.core.webview.c.c r1 = com.kwad.components.core.webview.jshandler.ad.c.a(r2)
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "MultiProgressListener"
            com.kwad.sdk.core.e.c.d(r1, r0)
            com.kwad.sdk.core.webview.c.c r0 = com.kwad.components.core.webview.jshandler.ad.c.a(r2)
            com.kwad.components.core.webview.jshandler.ap$a r1 = new com.kwad.components.core.webview.jshandler.ap$a
            r1.<init>()
            r1.Vv = r4
            r1.status = r3
            long r3 = r2.rx()
            r1.creativeId = r3
            com.kwad.sdk.core.response.model.AdTemplate r2 = com.kwad.components.core.webview.jshandler.ad.c.b(r2)
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            long r2 = r2.totalBytes
            r1.totalBytes = r2
            r0.a(r1)
        L45:
            return
    }

    static void b(com.kwad.components.core.webview.jshandler.ad.c r0, int r1, float r2) {
            a(r0, r1, r2)
            return
    }

    @Override
    public final void a(java.lang.String r3, com.kwad.sdk.core.webview.c.c r4) {
            r2 = this;
            if (r3 == 0) goto L22
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L22
            r0.<init>(r3)     // Catch: java.lang.Exception -> L22
            com.kwad.components.core.webview.jshandler.ad$b r3 = new com.kwad.components.core.webview.jshandler.ad$b     // Catch: java.lang.Exception -> L22
            r3.<init>()     // Catch: java.lang.Exception -> L22
            r3.parseJson(r0)     // Catch: java.lang.Exception -> L22
            long r0 = r3.creativeId     // Catch: java.lang.Exception -> L22
            com.kwad.components.core.webview.jshandler.ad$c r3 = r2.D(r0)     // Catch: java.lang.Exception -> L22
            if (r3 == 0) goto L22
            com.kwad.components.core.webview.jshandler.ad.c.a(r3, r4)     // Catch: java.lang.Exception -> L22
            com.kwad.components.core.webview.jshandler.ad$a r4 = new com.kwad.components.core.webview.jshandler.ad$a     // Catch: java.lang.Exception -> L22
            r4.<init>(r3)     // Catch: java.lang.Exception -> L22
            r3.a(r4)     // Catch: java.lang.Exception -> L22
        L22:
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "registerMultiProgressListener"
            return r0
    }

    @Override
    public final void onDestroy() {
            r2 = this;
            java.util.List<com.kwad.components.core.webview.jshandler.ad$c> r0 = r2.mHolders
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            com.kwad.components.core.webview.jshandler.ad$c r1 = (com.kwad.components.core.webview.jshandler.ad.c) r1
            r1.destroy()
            goto L6
        L16:
            return
    }
}
