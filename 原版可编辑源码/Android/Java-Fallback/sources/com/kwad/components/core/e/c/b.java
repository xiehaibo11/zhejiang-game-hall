package com.kwad.components.core.e.c;

public final class b extends com.kwad.components.core.n.d {
    private static com.kwad.components.core.e.c.b Jp;
    private final com.kwad.components.core.e.c.b.b Jq;
    private com.kwad.components.core.e.c.a Jt;
    private boolean Ju;


    public static class a {
        private android.content.DialogInterface.OnShowListener Jw;
        private android.content.DialogInterface.OnDismissListener Jx;
        private com.kwad.sdk.core.response.model.AdTemplate adTemplate;
        private java.lang.String url;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.kwad.sdk.core.response.model.AdTemplate a(com.kwad.components.core.e.c.b.a r0) {
                com.kwad.sdk.core.response.model.AdTemplate r0 = r0.adTemplate
                return r0
        }

        static java.lang.String b(com.kwad.components.core.e.c.b.a r0) {
                java.lang.String r0 = r0.url
                return r0
        }

        static android.content.DialogInterface.OnShowListener c(com.kwad.components.core.e.c.b.a r0) {
                android.content.DialogInterface$OnShowListener r0 = r0.Jw
                return r0
        }

        static android.content.DialogInterface.OnDismissListener d(com.kwad.components.core.e.c.b.a r0) {
                android.content.DialogInterface$OnDismissListener r0 = r0.Jx
                return r0
        }

        public final com.kwad.components.core.e.c.b.a O(com.kwad.sdk.core.response.model.AdTemplate r1) {
                r0 = this;
                r0.adTemplate = r1
                return r0
        }

        public final com.kwad.components.core.e.c.b.a a(android.content.DialogInterface.OnShowListener r1) {
                r0 = this;
                r0.Jw = r1
                return r0
        }

        public final com.kwad.components.core.e.c.b.a ak(java.lang.String r1) {
                r0 = this;
                r0.url = r1
                return r0
        }

        public final com.kwad.components.core.e.c.b.a c(android.content.DialogInterface.OnDismissListener r1) {
                r0 = this;
                r0.Jx = r1
                return r0
        }

        public final com.kwad.components.core.e.c.b.b nc() {
                r2 = this;
                java.lang.Boolean r0 = com.kwad.components.core.a.ml
                boolean r0 = r0.booleanValue()
                if (r0 == 0) goto L1d
                com.kwad.sdk.core.response.model.AdTemplate r0 = r2.adTemplate
                if (r0 == 0) goto L15
                java.lang.String r0 = r2.url
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 != 0) goto L15
                goto L1d
            L15:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r1 = "param is error, please check it"
                r0.<init>(r1)
                throw r0
            L1d:
                com.kwad.components.core.e.c.b$b r0 = new com.kwad.components.core.e.c.b$b
                r1 = 0
                r0.<init>(r2, r1)
                return r0
        }
    }

    public static class b {
        protected android.content.DialogInterface.OnShowListener Jw;
        protected android.content.DialogInterface.OnDismissListener Jx;
        protected final com.kwad.sdk.core.response.model.AdTemplate adTemplate;
        protected java.lang.String url;

        private b(com.kwad.components.core.e.c.b.a r2) {
                r1 = this;
                r1.<init>()
                com.kwad.sdk.core.response.model.AdTemplate r0 = com.kwad.components.core.e.c.b.a.a(r2)
                r1.adTemplate = r0
                java.lang.String r0 = com.kwad.components.core.e.c.b.a.b(r2)
                r1.url = r0
                android.content.DialogInterface$OnShowListener r0 = com.kwad.components.core.e.c.b.a.c(r2)
                r1.Jw = r0
                android.content.DialogInterface$OnDismissListener r2 = com.kwad.components.core.e.c.b.a.d(r2)
                r1.Jx = r2
                return
        }

        b(com.kwad.components.core.e.c.b.a r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    private b(android.app.Activity r2, com.kwad.components.core.e.c.b.b r3) {
            r1 = this;
            r1.<init>(r2)
            r0 = 0
            r1.Ju = r0
            r1.Jq = r3
            boolean r2 = com.kwad.sdk.d.a.a.b(r2)
            if (r2 == 0) goto L17
            android.view.Window r2 = r1.getWindow()
            r0 = 1024(0x400, float:1.435E-42)
            r2.addFlags(r0)
        L17:
            android.content.DialogInterface$OnShowListener r2 = r3.Jw
            r1.setOnShowListener(r2)
            android.content.DialogInterface$OnDismissListener r2 = r3.Jx
            r1.setOnDismissListener(r2)
            return
    }

    public static boolean a(android.content.Context r2, com.kwad.components.core.e.c.b.b r3) {
            com.kwad.components.core.e.c.b r0 = com.kwad.components.core.e.c.b.Jp
            r1 = 0
            if (r0 == 0) goto Lc
            boolean r0 = r0.isShowing()
            if (r0 == 0) goto Lc
            return r1
        Lc:
            if (r2 != 0) goto Lf
            return r1
        Lf:
            android.app.Activity r2 = com.kwad.sdk.m.l.dr(r2)
            if (r2 == 0) goto L3b
            boolean r0 = r2.isFinishing()
            if (r0 == 0) goto L1c
            goto L3b
        L1c:
            com.kwad.sdk.a.a.c r0 = com.kwad.sdk.a.a.c.yb()
            r0.dismiss()
            com.kwad.components.core.e.c.b r0 = new com.kwad.components.core.e.c.b     // Catch: java.lang.Throwable -> L37
            r0.<init>(r2, r3)     // Catch: java.lang.Throwable -> L37
            com.kwad.components.core.e.c.b.Jp = r0     // Catch: java.lang.Throwable -> L37
            r0.show()     // Catch: java.lang.Throwable -> L37
            com.kwad.sdk.core.response.model.AdTemplate r2 = r3.adTemplate     // Catch: java.lang.Throwable -> L37
            r3 = 86
            r0 = 0
            com.kwad.sdk.core.report.a.b(r2, r3, r0)     // Catch: java.lang.Throwable -> L37
            r2 = 1
            return r2
        L37:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r2)
        L3b:
            return r1
    }

    public static boolean mZ() {
            com.kwad.components.core.e.c.b r0 = com.kwad.components.core.e.c.b.Jp
            if (r0 == 0) goto L9
            boolean r0 = r0.isShowing()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public final void al(boolean r1) {
            r0 = this;
            r0.Ju = r1
            r0.dismiss()
            return
    }

    @Override
    public final android.view.ViewGroup cf() {
            r3 = this;
            com.kwad.components.core.e.c.a r0 = new com.kwad.components.core.e.c.a
            android.content.Context r1 = r3.mContext
            com.kwad.components.core.e.c.b$b r2 = r3.Jq
            r0.<init>(r1, r3, r2)
            r3.Jt = r0
            return r0
    }

    @Override
    public final void dismiss() {
            r1 = this;
            super.dismiss()
            r0 = 0
            com.kwad.components.core.e.c.b.Jp = r0
            return
    }

    @Override
    public final void g(android.view.View r2) {
            r1 = this;
            com.kwad.components.core.e.c.a r2 = r1.Jt
            com.kwad.components.core.e.c.b$1 r0 = new com.kwad.components.core.e.c.b$1
            r0.<init>(r1)
            r2.setChangeListener(r0)
            return
    }

    @Override
    public final int getLayoutId() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final boolean isShowing() {
            r1 = this;
            boolean r0 = super.isShowing()
            return r0
    }

    @Override
    public final boolean na() {
            r1 = this;
            r0 = 1
            return r0
    }

    public final boolean nb() {
            r1 = this;
            boolean r0 = r1.Ju
            return r0
    }

    @Override
    public final void onBackPressed() {
            r1 = this;
            super.onBackPressed()
            com.kwad.components.core.e.c.b$b r0 = r1.Jq
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.adTemplate
            com.kwad.sdk.core.report.a.aD(r0)
            return
    }

    @Override
    public final void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()
            r0 = 0
            com.kwad.components.core.e.c.b.Jp = r0
            return
    }

    @Override
    public final void onStart() {
            r2 = this;
            super.onStart()
            com.kwad.components.core.e.c.b r0 = com.kwad.components.core.e.c.b.Jp
            if (r0 == 0) goto Lb
            r1 = 0
            r0.setTitle(r1)
        Lb:
            return
    }

    @Override
    public final void show() {
            r1 = this;
            super.show()     // Catch: java.lang.Exception -> L4
            return
        L4:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            return
    }
}
