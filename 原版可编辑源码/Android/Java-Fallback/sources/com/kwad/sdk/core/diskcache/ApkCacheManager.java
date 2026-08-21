package com.kwad.sdk.core.diskcache;

public class ApkCacheManager {
    private java.util.concurrent.Future afI;
    private java.io.File amQ;
    private final java.util.concurrent.ExecutorService amR;
    private final java.util.concurrent.Callable<java.lang.Void> amS;



    enum Holder extends java.lang.Enum<com.kwad.sdk.core.diskcache.ApkCacheManager.Holder> {
        private static final com.kwad.sdk.core.diskcache.ApkCacheManager.Holder[] $VALUES = null;
        public static final com.kwad.sdk.core.diskcache.ApkCacheManager.Holder INSTANCE = null;
        private com.kwad.sdk.core.diskcache.ApkCacheManager mInstance;

        static {
                com.kwad.sdk.core.diskcache.ApkCacheManager$Holder r0 = new com.kwad.sdk.core.diskcache.ApkCacheManager$Holder
                r1 = 0
                java.lang.String r2 = "INSTANCE"
                r0.<init>(r2, r1)
                com.kwad.sdk.core.diskcache.ApkCacheManager.Holder.INSTANCE = r0
                r2 = 1
                com.kwad.sdk.core.diskcache.ApkCacheManager$Holder[] r2 = new com.kwad.sdk.core.diskcache.ApkCacheManager.Holder[r2]
                r2[r1] = r0
                com.kwad.sdk.core.diskcache.ApkCacheManager.Holder.$VALUES = r2
                return
        }

        Holder(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                com.kwad.sdk.core.diskcache.ApkCacheManager r1 = new com.kwad.sdk.core.diskcache.ApkCacheManager
                r2 = 0
                r1.<init>(r2)
                r0.mInstance = r1
                return
        }

        public static com.kwad.sdk.core.diskcache.ApkCacheManager.Holder valueOf(java.lang.String r1) {
                java.lang.Class<com.kwad.sdk.core.diskcache.ApkCacheManager$Holder> r0 = com.kwad.sdk.core.diskcache.ApkCacheManager.Holder.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.kwad.sdk.core.diskcache.ApkCacheManager$Holder r1 = (com.kwad.sdk.core.diskcache.ApkCacheManager.Holder) r1
                return r1
        }

        public static com.kwad.sdk.core.diskcache.ApkCacheManager.Holder[] values() {
                com.kwad.sdk.core.diskcache.ApkCacheManager$Holder[] r0 = com.kwad.sdk.core.diskcache.ApkCacheManager.Holder.$VALUES
                java.lang.Object r0 = r0.clone()
                com.kwad.sdk.core.diskcache.ApkCacheManager$Holder[] r0 = (com.kwad.sdk.core.diskcache.ApkCacheManager.Holder[]) r0
                return r0
        }

        final com.kwad.sdk.core.diskcache.ApkCacheManager getInstance() {
                r1 = this;
                com.kwad.sdk.core.diskcache.ApkCacheManager r0 = r1.mInstance
                return r0
        }
    }

    private ApkCacheManager() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ExecutorService r0 = com.kwad.sdk.core.threads.GlobalThreadPools.CZ()
            r1.amR = r0
            com.kwad.sdk.core.diskcache.ApkCacheManager$1 r0 = new com.kwad.sdk.core.diskcache.ApkCacheManager$1
            r0.<init>(r1)
            r1.amS = r0
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            if (r0 != 0) goto L1f
            return
        L1f:
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)     // Catch: java.lang.Throwable -> L31
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0     // Catch: java.lang.Throwable -> L31
            android.content.Context r0 = r0.getContext()     // Catch: java.lang.Throwable -> L31
            java.io.File r0 = com.kwad.sdk.utils.av.cK(r0)     // Catch: java.lang.Throwable -> L31
            r1.amQ = r0     // Catch: java.lang.Throwable -> L31
        L31:
            return
    }

    ApkCacheManager(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    private boolean Ai() {
            r4 = this;
            java.io.File r0 = r4.amQ
            r1 = 0
            if (r0 == 0) goto L29
            boolean r0 = r0.exists()
            if (r0 != 0) goto Lc
            goto L29
        Lc:
            java.io.File r0 = r4.amQ
            java.io.File[] r0 = r0.listFiles()
            int r2 = r0.length
            r3 = 5
            if (r2 <= r3) goto L27
            int r0 = r0.length
            r2 = 10
            if (r0 > r2) goto L26
            java.io.File r0 = r4.amQ
            int r0 = r4.l(r0)
            r2 = 400(0x190, float:5.6E-43)
            if (r0 > r2) goto L26
            goto L27
        L26:
            return r1
        L27:
            r0 = 1
            return r0
        L29:
            return r1
    }

    static java.io.File a(com.kwad.sdk.core.diskcache.ApkCacheManager r0) {
            java.io.File r0 = r0.amQ
            return r0
    }

    static java.util.List a(com.kwad.sdk.core.diskcache.ApkCacheManager r0, java.io.File r1) {
            java.util.List r0 = r0.n(r1)
            return r0
    }

    static void b(com.kwad.sdk.core.diskcache.ApkCacheManager r0, java.io.File r1) {
            r0.h(r1)
            return
    }

    static boolean b(com.kwad.sdk.core.diskcache.ApkCacheManager r0) {
            boolean r0 = r0.Ai()
            return r0
    }

    public static com.kwad.sdk.core.diskcache.ApkCacheManager getInstance() {
            com.kwad.sdk.core.diskcache.ApkCacheManager$Holder r0 = com.kwad.sdk.core.diskcache.ApkCacheManager.Holder.INSTANCE
            com.kwad.sdk.core.diskcache.ApkCacheManager r0 = r0.getInstance()
            return r0
    }

    private void h(java.io.File r5) {
            r4 = this;
            if (r5 == 0) goto L2c
            boolean r0 = r5.exists()
            if (r0 != 0) goto L9
            goto L2c
        L9:
            boolean r0 = r5.isDirectory()     // Catch: java.lang.Exception -> L2c
            if (r0 == 0) goto L23
            java.io.File[] r0 = r5.listFiles()     // Catch: java.lang.Exception -> L2c
            int r1 = r0.length     // Catch: java.lang.Exception -> L2c
            r2 = 0
        L15:
            if (r2 >= r1) goto L1f
            r3 = r0[r2]     // Catch: java.lang.Exception -> L2c
            r4.h(r3)     // Catch: java.lang.Exception -> L2c
            int r2 = r2 + 1
            goto L15
        L1f:
            r5.delete()     // Catch: java.lang.Exception -> L2c
            goto L2c
        L23:
            boolean r0 = r5.exists()     // Catch: java.lang.Exception -> L2c
            if (r0 == 0) goto L2c
            r5.delete()     // Catch: java.lang.Exception -> L2c
        L2c:
            return
    }

    private int l(java.io.File r3) {
            r2 = this;
            long r0 = r2.m(r3)
            float r3 = (float) r0
            r0 = 1148846080(0x447a0000, float:1000.0)
            float r3 = r3 / r0
            float r3 = r3 / r0
            int r3 = (int) r3
            return r3
    }

    private long m(java.io.File r7) {
            r6 = this;
            java.io.File[] r7 = r7.listFiles()
            r0 = 0
            if (r7 == 0) goto L25
            int r2 = r7.length
            r3 = 0
        La:
            if (r3 >= r2) goto L25
            r4 = r7[r3]
            boolean r4 = r4.isDirectory()
            if (r4 == 0) goto L1b
            r4 = r7[r3]
            long r4 = r6.m(r4)
            goto L21
        L1b:
            r4 = r7[r3]
            long r4 = r4.length()
        L21:
            long r0 = r0 + r4
            int r3 = r3 + 1
            goto La
        L25:
            return r0
    }

    private java.util.List<java.io.File> n(java.io.File r2) {
            r1 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.io.File[] r2 = r2.listFiles()
            if (r2 != 0) goto Lc
            return r0
        Lc:
            java.util.List r2 = java.util.Arrays.asList(r2)
            r0.addAll(r2)
            r1.r(r0)
            return r0
    }

    private void r(java.util.List<java.io.File> r2) {
            r1 = this;
            com.kwad.sdk.core.diskcache.ApkCacheManager$2 r0 = new com.kwad.sdk.core.diskcache.ApkCacheManager$2
            r0.<init>(r1)
            java.util.Collections.sort(r2, r0)
            return
    }

    public final void Aj() {
            r2 = this;
            java.io.File r0 = r2.amQ
            if (r0 == 0) goto L1f
            boolean r0 = r0.exists()
            if (r0 != 0) goto Lb
            goto L1f
        Lb:
            java.util.concurrent.Future r0 = r2.afI
            if (r0 == 0) goto L15
            boolean r0 = r0.isDone()
            if (r0 == 0) goto L1f
        L15:
            java.util.concurrent.ExecutorService r0 = r2.amR
            java.util.concurrent.Callable<java.lang.Void> r1 = r2.amS
            java.util.concurrent.Future r0 = r0.submit(r1)
            r2.afI = r0
        L1f:
            return
    }
}
