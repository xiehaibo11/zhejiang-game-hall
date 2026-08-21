package com.kwad.components.core.p.a;

public final class a {
    public final com.kwad.components.core.p.a.b Lj;
    public final com.kwad.components.core.p.b PI;
    public java.util.List<java.lang.String> PJ;
    public boolean PK;
    public boolean PL;
    public com.kwad.components.core.p.a.d PM;

    public static class a {
        public com.kwad.components.core.p.a.b Lj;
        public com.kwad.components.core.p.b PI;
        public boolean PK;
        public boolean PL;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public final com.kwad.components.core.p.a.a.a a(com.kwad.components.core.p.b r1) {
                r0 = this;
                r0.PI = r1
                return r0
        }

        public final com.kwad.components.core.p.a.a.a aE(boolean r1) {
                r0 = this;
                r1 = 1
                r0.PK = r1
                return r0
        }

        public final com.kwad.components.core.p.a.a.a aF(boolean r1) {
                r0 = this;
                r0.PL = r1
                return r0
        }

        public final com.kwad.components.core.p.a.a.a e(com.kwad.components.core.p.a.b r1) {
                r0 = this;
                r0.Lj = r1
                return r0
        }

        public final com.kwad.components.core.p.a.a pI() {
                r2 = this;
                java.lang.Boolean r0 = com.kwad.components.ad.e.a.ml
                boolean r0 = r0.booleanValue()
                if (r0 == 0) goto L19
                com.kwad.components.core.p.a.b r0 = r2.Lj
                if (r0 == 0) goto L11
                com.kwad.components.core.p.b r0 = r2.PI
                if (r0 == 0) goto L11
                goto L19
            L11:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                java.lang.String r1 = "AdRequestParams build Illegal"
                r0.<init>(r1)
                throw r0
            L19:
                com.kwad.components.core.p.a.a r0 = new com.kwad.components.core.p.a.a
                r1 = 0
                r0.<init>(r2, r1)
                return r0
        }
    }

    private a(com.kwad.components.core.p.a.a.a r2) {
            r1 = this;
            r1.<init>()
            com.kwad.components.core.p.a.b r0 = r2.Lj
            r1.Lj = r0
            com.kwad.components.core.p.b r0 = r2.PI
            r1.PI = r0
            boolean r0 = r2.PK
            r1.PK = r0
            boolean r2 = r2.PL
            r1.PL = r2
            return
    }

    a(com.kwad.components.core.p.a.a.a r1, byte r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static void a(com.kwad.components.core.p.a.a r0, int r1, java.lang.String r2, boolean r3) {
            com.kwad.components.core.p.b r0 = r0.PI
            r0.a(r1, r2, r3)
            return
    }

    public static void a(com.kwad.components.core.p.a.a r2, com.kwad.components.core.response.model.AdResultData r3, boolean r4) {
            boolean r0 = r3.isAdResultDataEmpty()
            com.kwad.components.core.p.b r2 = r2.PI
            if (r0 == 0) goto L1f
            com.kwad.sdk.core.network.f r0 = com.kwad.sdk.core.network.f.aoU
            int r0 = r0.errorCode
            java.lang.String r1 = r3.testErrorMsg
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L19
            com.kwad.sdk.core.network.f r3 = com.kwad.sdk.core.network.f.aoU
            java.lang.String r3 = r3.msg
            goto L1b
        L19:
            java.lang.String r3 = r3.testErrorMsg
        L1b:
            r2.a(r0, r3, r4)
            return
        L1f:
            r2.a(r3, r4)
            return
    }

    public final int getAdNum() {
            r1 = this;
            com.kwad.components.core.p.a.b r0 = r1.Lj
            com.kwad.sdk.internal.api.SceneImpl r0 = r0.PN
            if (r0 == 0) goto Lf
            com.kwad.components.core.p.a.b r0 = r1.Lj
            com.kwad.sdk.internal.api.SceneImpl r0 = r0.PN
            int r0 = r0.getAdNum()
            return r0
        Lf:
            r0 = 1
            return r0
    }

    public final int getAdStyle() {
            r1 = this;
            com.kwad.components.core.p.a.b r0 = r1.Lj
            com.kwad.sdk.internal.api.SceneImpl r0 = r0.PN
            if (r0 == 0) goto Ld
            com.kwad.components.core.p.a.b r0 = r1.Lj
            com.kwad.sdk.internal.api.SceneImpl r0 = r0.PN
            int r0 = r0.adStyle
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public final long getPosId() {
            r2 = this;
            com.kwad.components.core.p.a.b r0 = r2.Lj
            com.kwad.sdk.internal.api.SceneImpl r0 = r0.PN
            if (r0 == 0) goto Lf
            com.kwad.components.core.p.a.b r0 = r2.Lj
            com.kwad.sdk.internal.api.SceneImpl r0 = r0.PN
            long r0 = r0.getPosId()
            return r0
        Lf:
            r0 = -1
            return r0
    }
}
