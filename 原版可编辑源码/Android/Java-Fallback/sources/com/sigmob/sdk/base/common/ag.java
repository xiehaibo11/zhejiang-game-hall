package com.sigmob.sdk.base.common;

public class ag {
    private static final com.sigmob.sdk.base.common.ag.b a = null;
    private static final com.sigmob.sdk.base.common.ag.c b = null;
    private final java.util.EnumSet<com.sigmob.sdk.base.common.af> c;
    private final com.sigmob.sdk.base.common.ag.b d;
    private final com.sigmob.sdk.base.common.ag.b e;
    private final com.sigmob.sdk.base.common.ag.c f;
    private final com.sigmob.sdk.base.models.BaseAdUnit g;
    private final boolean h;
    private boolean i;
    private boolean j;
    private boolean k;





    public static class a {
        private java.util.EnumSet<com.sigmob.sdk.base.common.af> a;
        private com.sigmob.sdk.base.common.ag.b b;
        private com.sigmob.sdk.base.common.ag.b c;
        private com.sigmob.sdk.base.common.ag.c d;
        private boolean e;
        private boolean f;
        private com.sigmob.sdk.base.models.BaseAdUnit g;

        public a() {
                r1 = this;
                r1.<init>()
                com.sigmob.sdk.base.common.af r0 = com.sigmob.sdk.base.common.af.g
                java.util.EnumSet r0 = java.util.EnumSet.of(r0)
                r1.a = r0
                com.sigmob.sdk.base.common.ag$b r0 = com.sigmob.sdk.base.common.ag.c()
                r1.b = r0
                com.sigmob.sdk.base.common.ag$b r0 = com.sigmob.sdk.base.common.ag.c()
                r1.c = r0
                com.sigmob.sdk.base.common.ag$c r0 = com.sigmob.sdk.base.common.ag.d()
                r1.d = r0
                r0 = 0
                r1.e = r0
                r1.f = r0
                return
        }

        public com.sigmob.sdk.base.common.ag.a a(com.sigmob.sdk.base.common.af r1, com.sigmob.sdk.base.common.af... r2) {
                r0 = this;
                java.util.EnumSet r1 = java.util.EnumSet.of(r1, r2)
                r0.a = r1
                return r0
        }

        public com.sigmob.sdk.base.common.ag.a a(com.sigmob.sdk.base.common.ag.b r1) {
                r0 = this;
                r0.b = r1
                return r0
        }

        public com.sigmob.sdk.base.common.ag.a a(com.sigmob.sdk.base.common.ag.c r1) {
                r0 = this;
                r0.d = r1
                return r0
        }

        public com.sigmob.sdk.base.common.ag.a a(com.sigmob.sdk.base.models.BaseAdUnit r1) {
                r0 = this;
                r0.g = r1
                return r0
        }

        public com.sigmob.sdk.base.common.ag.a a(boolean r1) {
                r0 = this;
                r0.e = r1
                return r0
        }

        public com.sigmob.sdk.base.common.ag a() {
                r10 = this;
                com.sigmob.sdk.base.common.ag r9 = new com.sigmob.sdk.base.common.ag
                java.util.EnumSet<com.sigmob.sdk.base.common.af> r1 = r10.a
                com.sigmob.sdk.base.common.ag$b r2 = r10.b
                com.sigmob.sdk.base.common.ag$b r3 = r10.c
                com.sigmob.sdk.base.common.ag$c r4 = r10.d
                boolean r5 = r10.e
                com.sigmob.sdk.base.models.BaseAdUnit r6 = r10.g
                boolean r7 = r10.f
                r8 = 0
                r0 = r9
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
                return r9
        }

        public com.sigmob.sdk.base.common.ag.a b(com.sigmob.sdk.base.common.ag.b r1) {
                r0 = this;
                r0.c = r1
                return r0
        }

        public com.sigmob.sdk.base.common.ag.a b(boolean r1) {
                r0 = this;
                r0.f = r1
                return r0
        }
    }

    public interface b {
        void a(java.lang.String r1, com.sigmob.sdk.base.common.af r2);

        void b(java.lang.String r1, com.sigmob.sdk.base.common.af r2);
    }

    public interface c {
        void a();

        void b();

        void c();
    }

    static {
            com.sigmob.sdk.base.common.ag$1 r0 = new com.sigmob.sdk.base.common.ag$1
            r0.<init>()
            com.sigmob.sdk.base.common.ag.a = r0
            com.sigmob.sdk.base.common.ag$2 r0 = new com.sigmob.sdk.base.common.ag$2
            r0.<init>()
            com.sigmob.sdk.base.common.ag.b = r0
            return
    }

    private ag(java.util.EnumSet<com.sigmob.sdk.base.common.af> r1, com.sigmob.sdk.base.common.ag.b r2, com.sigmob.sdk.base.common.ag.b r3, com.sigmob.sdk.base.common.ag.c r4, boolean r5, com.sigmob.sdk.base.models.BaseAdUnit r6, boolean r7) {
            r0 = this;
            r0.<init>()
            java.util.EnumSet r1 = java.util.EnumSet.copyOf(r1)
            r0.c = r1
            r0.d = r2
            r0.e = r3
            r0.f = r4
            r0.h = r5
            r0.g = r6
            r1 = 0
            r0.i = r1
            r0.j = r1
            r0.k = r7
            return
    }

    ag(java.util.EnumSet r1, com.sigmob.sdk.base.common.ag.b r2, com.sigmob.sdk.base.common.ag.b r3, com.sigmob.sdk.base.common.ag.c r4, boolean r5, com.sigmob.sdk.base.models.BaseAdUnit r6, boolean r7, com.sigmob.sdk.base.common.ag.1 r8) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    static com.sigmob.sdk.base.models.BaseAdUnit a(com.sigmob.sdk.base.common.ag r0) {
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r0.g
            return r0
    }

    private void a(java.lang.String r1, com.sigmob.sdk.base.common.af r2, java.lang.String r3, java.lang.Throwable r4) {
            r0 = this;
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r3)
            if (r2 != 0) goto L7
            com.sigmob.sdk.base.common.af r2 = com.sigmob.sdk.base.common.af.g
        L7:
            com.czhj.sdk.logger.SigmobLog.d(r3, r4)
            com.sigmob.sdk.base.common.ag$b r3 = r0.d
            r3.b(r1, r2)
            return
    }

    static com.sigmob.sdk.base.common.ag.b b(com.sigmob.sdk.base.common.ag r0) {
            com.sigmob.sdk.base.common.ag$b r0 = r0.d
            return r0
    }

    private boolean b(android.content.Context r14, java.lang.String r15) {
            r13 = this;
            com.sigmob.sdk.base.common.af r0 = com.sigmob.sdk.base.common.af.g
            java.util.EnumSet<com.sigmob.sdk.base.common.af> r1 = r13.c
            java.util.Iterator r1 = r1.iterator()
            r2 = 0
            r3 = r2
        La:
            boolean r4 = r1.hasNext()
            if (r4 == 0) goto L9c
            java.lang.Object r4 = r1.next()
            com.sigmob.sdk.base.common.af r4 = (com.sigmob.sdk.base.common.af) r4
            com.sigmob.sdk.base.models.BaseAdUnit r5 = r13.g
            java.lang.String r5 = r4.a(r5)
            boolean r6 = android.text.TextUtils.isEmpty(r15)
            if (r6 != 0) goto L2c
            com.sigmob.sdk.base.models.BaseAdUnit r6 = r13.g
            int r6 = r6.getInteractionType()
            r7 = 7
            if (r6 == r7) goto L2c
            r5 = r15
        L2c:
            boolean r6 = android.text.TextUtils.isEmpty(r5)
            if (r6 != 0) goto La
            com.sigmob.sdk.base.models.BaseAdUnit r3 = r13.g
            com.sigmob.sdk.base.models.SigMacroCommon r3 = r3.getMacroCommon()
            java.lang.String r3 = r3.macroProcess(r5)
            android.net.Uri r11 = android.net.Uri.parse(r3)     // Catch: java.lang.Throwable -> L95
            com.sigmob.sdk.base.models.BaseAdUnit r5 = r13.g     // Catch: java.lang.Throwable -> L95
            com.sigmob.sdk.base.models.rtb.AndroidMarket r5 = r5.getAndroidMarket()     // Catch: java.lang.Throwable -> L95
            com.sigmob.sdk.base.common.af r6 = com.sigmob.sdk.base.common.af.c     // Catch: java.lang.Throwable -> L95
            if (r4 != r6) goto L61
            java.lang.String r6 = r11.getScheme()     // Catch: java.lang.Throwable -> L95
            java.lang.String r7 = "market"
            boolean r6 = r6.equalsIgnoreCase(r7)     // Catch: java.lang.Throwable -> L95
            if (r6 == 0) goto L61
            if (r5 == 0) goto L61
            java.lang.String r5 = r5.market_url     // Catch: java.lang.Throwable -> L95
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L95
            if (r5 != 0) goto L61
            goto La
        L61:
            boolean r5 = r4.a(r11)     // Catch: java.lang.Throwable -> L95
            if (r5 == 0) goto La
            boolean r5 = r13.k     // Catch: java.lang.Throwable -> L95
            if (r5 != 0) goto L7e
            com.sigmob.sdk.base.common.af r5 = com.sigmob.sdk.base.common.af.f     // Catch: java.lang.Throwable -> L95
            if (r5 != r4) goto L7e
            com.sigmob.sdk.base.common.ag$3 r12 = new com.sigmob.sdk.base.common.ag$3     // Catch: java.lang.Throwable -> L95
            r5 = r12
            r6 = r13
            r7 = r4
            r8 = r14
            r9 = r13
            r10 = r3
            r5.<init>(r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L95
            com.sigmob.sdk.base.common.ah.a(r3, r12)     // Catch: java.lang.Throwable -> L95
            goto L93
        L7e:
            com.sigmob.sdk.base.models.BaseAdUnit r5 = r13.g     // Catch: java.lang.Throwable -> L95
            r4.a(r14, r11, r13, r5)     // Catch: java.lang.Throwable -> L95
            com.sigmob.windad.WindAds r5 = com.sigmob.windad.WindAds.sharedAds()     // Catch: java.lang.Throwable -> L95
            android.os.Handler r5 = r5.getHandler()     // Catch: java.lang.Throwable -> L95
            com.sigmob.sdk.base.common.ag$4 r6 = new com.sigmob.sdk.base.common.ag$4     // Catch: java.lang.Throwable -> L95
            r6.<init>(r13, r3, r4)     // Catch: java.lang.Throwable -> L95
            r5.post(r6)     // Catch: java.lang.Throwable -> L95
        L93:
            r14 = 1
            return r14
        L95:
            com.sigmob.sdk.base.common.ag$b r5 = r13.d
            r5.b(r3, r4)
            goto La
        L9c:
            java.lang.String r14 = "Link ignored. Unable to handle url: "
            r13.a(r3, r0, r14, r2)     // Catch: java.lang.Throwable -> La2
            goto La8
        La2:
            r14 = move-exception
            java.lang.String r15 = "handleResolvedUrl eroor"
            com.czhj.sdk.logger.SigmobLog.e(r15, r14)
        La8:
            r14 = 0
            return r14
    }

    static com.sigmob.sdk.base.common.ag.b c() {
            com.sigmob.sdk.base.common.ag$b r0 = com.sigmob.sdk.base.common.ag.a
            return r0
    }

    static com.sigmob.sdk.base.common.ag.c d() {
            com.sigmob.sdk.base.common.ag$c r0 = com.sigmob.sdk.base.common.ag.b
            return r0
    }

    com.sigmob.sdk.base.common.ag.c a() {
            r1 = this;
            com.sigmob.sdk.base.common.ag$c r0 = r1.f
            return r0
    }

    public void a(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1)
            r0.b(r1, r2)
            return
    }

    boolean b() {
            r1 = this;
            boolean r0 = r1.h
            return r0
    }
}
