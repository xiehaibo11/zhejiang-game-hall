package com.kwad.components.core.c;

public class d implements com.kwad.components.core.c.c {
    private static volatile com.kwad.components.core.c.d Ij = null;
    private static boolean Ik = true;
    private android.util.SparseArray<com.kwad.components.core.c.c> Ii;



    static class a implements java.util.Comparator<com.kwad.sdk.core.response.model.AdTemplate> {
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

        private static int a(com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.sdk.core.response.model.AdTemplate r3) {
                int r0 = com.kwad.sdk.core.response.b.d.cv(r3)
                int r1 = com.kwad.sdk.core.response.b.d.cv(r2)
                int r0 = r0 - r1
                if (r0 == 0) goto Lc
                return r0
            Lc:
                boolean r0 = r2.fromCache
                if (r0 == 0) goto L16
                boolean r3 = r3.fromCache
                if (r3 == 0) goto L16
                r2 = 0
                return r2
            L16:
                boolean r2 = r2.fromCache
                if (r2 == 0) goto L1c
                r2 = 1
                return r2
            L1c:
                r2 = -1
                return r2
        }

        @Override
        public final int compare(com.kwad.sdk.core.response.model.AdTemplate r1, com.kwad.sdk.core.response.model.AdTemplate r2) {
                r0 = this;
                com.kwad.sdk.core.response.model.AdTemplate r1 = (com.kwad.sdk.core.response.model.AdTemplate) r1
                com.kwad.sdk.core.response.model.AdTemplate r2 = (com.kwad.sdk.core.response.model.AdTemplate) r2
                int r1 = a(r1, r2)
                return r1
        }
    }

    static class b extends com.kwad.sdk.core.network.p<com.kwad.components.core.p.a, com.kwad.components.core.response.model.AdResultData> {
        private com.kwad.components.core.p.a.a Ip;


        public b(com.kwad.components.core.p.a.a r1) {
                r0 = this;
                r0.<init>()
                r0.Ip = r1
                return
        }

        static void a(com.kwad.components.core.c.d.b r0, com.kwad.components.core.response.model.AdResultData r1) {
                f(r1)
                return
        }

        private void a(com.kwad.components.core.p.a r2, com.kwad.components.core.response.model.AdResultData r3) {
                r1 = this;
                super.onSuccess(r2, r3)
                java.util.concurrent.ExecutorService r2 = com.kwad.sdk.core.threads.GlobalThreadPools.CW()
                com.kwad.components.core.c.d$b$1 r0 = new com.kwad.components.core.c.d$b$1
                r0.<init>(r1, r3)
                r2.submit(r0)
                com.kwad.components.core.p.a.a r2 = r1.Ip
                boolean r2 = r1.a(r2, r3)
                if (r2 != 0) goto L1d
                com.kwad.components.core.p.a.a r2 = r1.Ip
                r0 = 0
                com.kwad.components.core.p.a.a.a(r2, r3, r0)
            L1d:
                return
        }

        private static void f(com.kwad.components.core.response.model.AdResultData r4) {
                java.util.List r0 = r4.getProceedTemplateList()
                com.kwad.components.core.c.a r1 = com.kwad.components.core.c.a.mg()
                if (r1 == 0) goto L30
                int r2 = r0.size()
                if (r2 <= 0) goto L30
                r2 = 0
                java.lang.Object r0 = r0.get(r2)
                com.kwad.sdk.core.response.model.AdTemplate r0 = (com.kwad.sdk.core.response.model.AdTemplate) r0
                long r2 = r4.getPosId()
                com.kwad.components.core.c.e r2 = com.kwad.components.core.c.e.p(r2)
                r1.mh()
                java.util.List r4 = com.kwad.components.core.c.g.a(r2, r4)
                r1.g(r4)
                com.kwad.components.core.c.e r4 = com.kwad.components.core.c.e.I(r0)
                r1.a(r4)
            L30:
                return
        }

        public void a(com.kwad.components.core.p.a r2, int r3, java.lang.String r4) {
                r1 = this;
                super.onError(r2, r3, r4)
                com.kwad.components.core.p.a.a r2 = r1.Ip
                r0 = 0
                com.kwad.components.core.p.a.a.a(r2, r3, r4, r0)
                return
        }

        protected boolean a(com.kwad.components.core.p.a.a r1, com.kwad.components.core.response.model.AdResultData r2) {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public void onError(com.kwad.sdk.core.network.g r1, int r2, java.lang.String r3) {
                r0 = this;
                com.kwad.components.core.p.a r1 = (com.kwad.components.core.p.a) r1
                r0.a(r1, r2, r3)
                return
        }

        @Override
        public void onSuccess(com.kwad.sdk.core.network.g r1, com.kwad.sdk.core.network.BaseResultData r2) {
                r0 = this;
                com.kwad.components.core.p.a r1 = (com.kwad.components.core.p.a) r1
                com.kwad.components.core.response.model.AdResultData r2 = (com.kwad.components.core.response.model.AdResultData) r2
                r0.a(r1, r2)
                return
        }
    }

    interface c {
        void mo();
    }

    public static class d implements com.kwad.components.core.c.c {
        public d() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final void c(com.kwad.components.core.p.a.a r2) {
                r1 = this;
                com.kwad.components.core.c.d$b r0 = new com.kwad.components.core.c.d$b
                r0.<init>(r2)
                com.kwad.components.core.c.d.b(r2, r0)
                return
        }
    }

    public static class e implements com.kwad.components.core.c.c {


        public e() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final void c(com.kwad.components.core.p.a.a r3) {
                r2 = this;
                java.util.concurrent.ExecutorService r0 = com.kwad.sdk.core.threads.GlobalThreadPools.CW()
                com.kwad.components.core.c.d$e$1 r1 = new com.kwad.components.core.c.d$e$1
                r1.<init>(r2, r3)
                r0.submit(r1)
                return
        }
    }

    public static class f implements com.kwad.components.core.c.c {

        final class 1 extends com.kwad.components.core.c.d.b {
            final com.kwad.components.core.c.d.f It;
            final com.kwad.components.core.p.a.a bv;



            1(com.kwad.components.core.c.d.f r1, com.kwad.components.core.p.a.a r2, com.kwad.components.core.p.a.a r3) {
                    r0 = this;
                    r0.It = r1
                    r0.bv = r3
                    r0.<init>(r2)
                    return
            }

            static void a(com.kwad.components.core.c.d.f.1 r0, com.kwad.sdk.internal.api.SceneImpl r1, com.kwad.components.core.response.model.AdResultData r2, int r3, com.kwad.components.core.c.d.c r4) {
                    r0.a(r1, r2, r3, r4)
                    return
            }

            private void a(com.kwad.sdk.internal.api.SceneImpl r3, com.kwad.components.core.response.model.AdResultData r4, int r5, com.kwad.components.core.c.d.c r6) {
                    r2 = this;
                    com.kwad.components.core.p.a.a r0 = r2.bv
                    com.kwad.components.core.response.model.AdResultData r0 = com.kwad.components.core.c.d.e(r0)
                    if (r0 == 0) goto L41
                    boolean r1 = r0.isAdResultDataEmpty()
                    if (r1 == 0) goto Lf
                    goto L41
                Lf:
                    r6 = 1
                    java.util.List[] r6 = new java.util.List[r6]
                    java.util.List r0 = r0.getProceedTemplateList()
                    r1 = 0
                    r6[r1] = r0
                    java.util.List r6 = com.kwad.components.core.c.d.b(r6)
                    int r0 = r6.size()
                    int r5 = java.lang.Math.min(r5, r0)
                    java.util.List r5 = r6.subList(r1, r5)
                    int r6 = r5.size()
                    if (r6 <= 0) goto L46
                    if (r4 != 0) goto L36
                    com.kwad.components.core.response.model.AdResultData r4 = new com.kwad.components.core.response.model.AdResultData
                    r4.<init>(r3)
                L36:
                    com.kwad.components.core.response.model.AdResultData r6 = new com.kwad.components.core.response.model.AdResultData
                    r6.<init>(r4, r3, r5)
                    com.kwad.components.core.p.a.a r3 = r2.bv
                    com.kwad.components.core.p.a.a.a(r3, r6, r1)
                    goto L46
                L41:
                    if (r6 == 0) goto L46
                    r6.mo()
                L46:
                    return
            }

            @Override
            public final void a(com.kwad.components.core.p.a r3, int r4, java.lang.String r5) {
                    r2 = this;
                    java.util.concurrent.ExecutorService r0 = com.kwad.sdk.core.threads.GlobalThreadPools.CW()
                    com.kwad.components.core.c.d$f$1$2 r1 = new com.kwad.components.core.c.d$f$1$2
                    r1.<init>(r2, r3, r4, r5)
                    r0.submit(r1)
                    return
            }

            @Override
            protected final boolean a(com.kwad.components.core.p.a.a r10, com.kwad.components.core.response.model.AdResultData r11) {
                    r9 = this;
                    long r0 = r10.getPosId()
                    com.kwad.sdk.internal.api.SceneImpl r4 = r11.getAdScene(r0)
                    int r6 = r4.getAdNum()
                    boolean r0 = r11.isAdResultDataEmpty()
                    r1 = 1
                    if (r0 == 0) goto L24
                    java.util.concurrent.ExecutorService r0 = com.kwad.sdk.core.threads.GlobalThreadPools.CW()
                    com.kwad.components.core.c.d$f$1$1 r8 = new com.kwad.components.core.c.d$f$1$1
                    r2 = r8
                    r3 = r9
                    r5 = r11
                    r7 = r10
                    r2.<init>(r3, r4, r5, r6, r7)
                    r0.submit(r8)
                    return r1
                L24:
                    boolean r0 = r11.isBidding()
                    r2 = 0
                    if (r0 == 0) goto L68
                    com.kwad.components.core.response.model.AdResultData r0 = com.kwad.components.core.c.d.e(r10)
                    if (r0 == 0) goto L68
                    boolean r3 = r0.isAdResultDataEmpty()
                    if (r3 == 0) goto L38
                    goto L68
                L38:
                    r3 = 2
                    java.util.List[] r3 = new java.util.List[r3]
                    java.util.List r0 = r0.getProceedTemplateList()
                    r3[r2] = r0
                    java.util.List r0 = r11.getProceedTemplateList()
                    r3[r1] = r0
                    java.util.List r0 = com.kwad.components.core.c.d.b(r3)
                    int r3 = r0.size()
                    int r3 = java.lang.Math.min(r6, r3)
                    java.util.List r0 = r0.subList(r2, r3)
                    if (r0 == 0) goto L68
                    int r3 = r0.size()
                    if (r3 <= 0) goto L68
                    com.kwad.components.core.response.model.AdResultData r2 = new com.kwad.components.core.response.model.AdResultData
                    r2.<init>(r11, r4, r0)
                    com.kwad.components.core.p.a.a.a(r10, r2, r1)
                    return r1
                L68:
                    return r2
            }

            @Override
            public final void onError(com.kwad.sdk.core.network.g r1, int r2, java.lang.String r3) {
                    r0 = this;
                    com.kwad.components.core.p.a r1 = (com.kwad.components.core.p.a) r1
                    r0.a(r1, r2, r3)
                    return
            }
        }

        public f() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final void c(com.kwad.components.core.p.a.a r2) {
                r1 = this;
                com.kwad.components.core.c.d$f$1 r0 = new com.kwad.components.core.c.d$f$1
                r0.<init>(r1, r2, r2)
                com.kwad.components.core.c.d.b(r2, r0)
                return
        }
    }

    static {
            return
    }

    private d() {
            r3 = this;
            r3.<init>()
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r3.Ii = r0
            com.kwad.components.core.c.d$f r1 = new com.kwad.components.core.c.d$f
            r1.<init>()
            r2 = 1
            r0.append(r2, r1)
            android.util.SparseArray<com.kwad.components.core.c.c> r0 = r3.Ii
            com.kwad.components.core.c.d$e r1 = new com.kwad.components.core.c.d$e
            r1.<init>()
            r2 = 2
            r0.append(r2, r1)
            android.util.SparseArray<com.kwad.components.core.c.c> r0 = r3.Ii
            com.kwad.components.core.c.d$d r1 = new com.kwad.components.core.c.d$d
            r1.<init>()
            r2 = 0
            r0.append(r2, r1)
            return
    }

    private static <T extends com.kwad.components.core.p.a> T a(com.kwad.sdk.g.c<T> r0) {
            java.lang.Object r0 = r0.get()
            com.kwad.components.core.p.a r0 = (com.kwad.components.core.p.a) r0
            return r0
    }

    private static java.util.List<com.kwad.sdk.core.response.model.AdTemplate> a(java.util.List<com.kwad.sdk.core.response.model.AdTemplate>... r6) {
            if (r6 != 0) goto L4
            r6 = 0
            return r6
        L4:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            int r1 = r6.length
            r2 = 0
            r3 = r2
        Lc:
            if (r3 >= r1) goto L16
            r4 = r6[r3]
            r0.addAll(r4)
            int r3 = r3 + 1
            goto Lc
        L16:
            com.kwad.components.core.c.d$a r6 = new com.kwad.components.core.c.d$a
            r6.<init>(r2)
            java.util.Collections.sort(r0, r6)
            java.util.ArrayList r6 = new java.util.ArrayList
            r6.<init>()
            java.util.HashSet r1 = new java.util.HashSet
            r1.<init>()
            java.util.Iterator r0 = r0.iterator()
        L2c:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L51
            java.lang.Object r2 = r0.next()
            com.kwad.sdk.core.response.model.AdTemplate r2 = (com.kwad.sdk.core.response.model.AdTemplate) r2
            long r3 = com.kwad.sdk.core.response.b.d.cq(r2)
            java.lang.Long r5 = java.lang.Long.valueOf(r3)
            boolean r5 = r1.contains(r5)
            if (r5 != 0) goto L2c
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r1.add(r3)
            r6.add(r2)
            goto L2c
        L51:
            return r6
    }

    private static void a(com.kwad.components.core.p.a.a r2, com.kwad.sdk.core.network.p<com.kwad.components.core.p.a, com.kwad.components.core.response.model.AdResultData> r3) {
            com.kwad.components.core.c.d$1 r0 = new com.kwad.components.core.c.d$1
            com.kwad.components.core.p.a.b r1 = r2.Lj
            r0.<init>(r1, r2)
            r0.request(r3)
            return
    }

    static boolean a(com.kwad.components.core.c.d r0) {
            boolean r0 = mk()
            return r0
    }

    static com.kwad.components.core.c.c b(com.kwad.components.core.c.d r0) {
            com.kwad.components.core.c.c r0 = r0.ml()
            return r0
    }

    static com.kwad.components.core.p.a b(com.kwad.sdk.g.c r0) {
            com.kwad.components.core.p.a r0 = a(r0)
            return r0
    }

    static java.util.List b(java.util.List[] r0) {
            java.util.List r0 = a(r0)
            return r0
    }

    static void b(com.kwad.components.core.p.a.a r0, com.kwad.sdk.core.network.p r1) {
            a(r0, r1)
            return
    }

    static android.util.SparseArray c(com.kwad.components.core.c.d r0) {
            android.util.SparseArray<com.kwad.components.core.c.c> r0 = r0.Ii
            return r0
    }

    private static com.kwad.components.core.response.model.AdResultData d(com.kwad.components.core.p.a.a r8) {
            com.kwad.components.core.c.a r0 = com.kwad.components.core.c.a.mg()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            int r2 = r8.getAdNum()
            long r3 = r8.getPosId()
            java.lang.String r3 = java.lang.String.valueOf(r3)
            long r4 = r8.getPosId()
            com.kwad.components.core.c.e r8 = com.kwad.components.core.c.e.p(r4)
            long r4 = java.lang.System.currentTimeMillis()
            r6 = 1000(0x3e8, double:4.94E-321)
            long r4 = r4 / r6
            int r8 = r8.mr()
            java.util.List r8 = r0.b(r3, r4, r8)
            boolean r0 = com.kwad.sdk.core.config.d.zT()
            if (r0 == 0) goto L34
            h(r8)
        L34:
            if (r8 == 0) goto L51
            int r0 = r8.size()
            if (r0 <= 0) goto L51
            java.util.Collections.sort(r8)
            int r0 = r8.size()
            r1 = 0
            int r0 = java.lang.Math.min(r0, r2)
            java.util.List r8 = r8.subList(r1, r0)
            com.kwad.components.core.response.model.AdResultData r8 = com.kwad.components.core.c.g.i(r8)
            return r8
        L51:
            return r1
    }

    static com.kwad.components.core.response.model.AdResultData e(com.kwad.components.core.p.a.a r0) {
            com.kwad.components.core.response.model.AdResultData r0 = d(r0)
            return r0
    }

    private static void h(java.util.List<com.kwad.components.core.c.g> r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.util.Iterator r3 = r3.iterator()
        L7:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L38
            java.lang.Object r0 = r3.next()
            com.kwad.components.core.c.g r0 = (com.kwad.components.core.c.g) r0
            com.kwad.components.core.c.f r1 = com.kwad.components.core.c.f.mu()
            boolean r1 = r1.a(r0)
            if (r1 == 0) goto L7
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "filterByMemCached contain: "
            r1.<init>(r2)
            java.lang.String r0 = r0.mB()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "AdCacheFetcherHolder"
            com.kwad.sdk.core.e.c.d(r1, r0)
            r3.remove()
            goto L7
        L38:
            return
    }

    public static com.kwad.components.core.c.d mj() {
            com.kwad.components.core.c.d r0 = com.kwad.components.core.c.d.Ij
            if (r0 != 0) goto L17
            java.lang.Class<com.kwad.components.core.c.d> r0 = com.kwad.components.core.c.d.class
            monitor-enter(r0)
            com.kwad.components.core.c.d r1 = com.kwad.components.core.c.d.Ij     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.components.core.c.d r1 = new com.kwad.components.core.c.d     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.kwad.components.core.c.d.Ij = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.kwad.components.core.c.d r0 = com.kwad.components.core.c.d.Ij
            return r0
    }

    private static boolean mk() {
            boolean r0 = com.kwad.components.core.c.d.Ik
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            java.lang.String r0 = "com.kwad.devTools.PosConfigFetcher"
            java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> Lf
            r0 = 1
            com.kwad.components.core.c.d.Ik = r0     // Catch: java.lang.ClassNotFoundException -> Lf
            goto L11
        Lf:
            com.kwad.components.core.c.d.Ik = r1
        L11:
            boolean r0 = com.kwad.components.core.c.d.Ik
            return r0
    }

    private com.kwad.components.core.c.c ml() {
            r2 = this;
            android.util.SparseArray<com.kwad.components.core.c.c> r0 = r2.Ii
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.kwad.components.core.c.c r0 = (com.kwad.components.core.c.c) r0
            return r0
    }

    @Override
    public final void c(com.kwad.components.core.p.a.a r3) {
            r2 = this;
            java.util.concurrent.ExecutorService r0 = com.kwad.sdk.core.threads.GlobalThreadPools.CW()
            com.kwad.components.core.c.d$2 r1 = new com.kwad.components.core.c.d$2
            r1.<init>(r2, r3)
            r0.submit(r1)
            return
    }
}
