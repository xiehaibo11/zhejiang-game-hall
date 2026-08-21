package com.kwad.components.ad;

public final class KsAdLoadManager {

    enum Holder extends java.lang.Enum<com.kwad.components.ad.KsAdLoadManager.Holder> {
        private static final com.kwad.components.ad.KsAdLoadManager.Holder[] $VALUES = null;
        public static final com.kwad.components.ad.KsAdLoadManager.Holder INSTANCE = null;
        private final com.kwad.components.ad.KsAdLoadManager mInstance;

        static {
                com.kwad.components.ad.KsAdLoadManager$Holder r0 = new com.kwad.components.ad.KsAdLoadManager$Holder
                r1 = 0
                java.lang.String r2 = "INSTANCE"
                r0.<init>(r2, r1)
                com.kwad.components.ad.KsAdLoadManager.Holder.INSTANCE = r0
                r2 = 1
                com.kwad.components.ad.KsAdLoadManager$Holder[] r2 = new com.kwad.components.ad.KsAdLoadManager.Holder[r2]
                r2[r1] = r0
                com.kwad.components.ad.KsAdLoadManager.Holder.$VALUES = r2
                return
        }

        Holder(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                com.kwad.components.ad.KsAdLoadManager r1 = new com.kwad.components.ad.KsAdLoadManager
                r2 = 0
                r1.<init>(r2)
                r0.mInstance = r1
                return
        }

        static com.kwad.components.ad.KsAdLoadManager access$100(com.kwad.components.ad.KsAdLoadManager.Holder r0) {
                com.kwad.components.ad.KsAdLoadManager r0 = r0.mInstance
                return r0
        }

        public static com.kwad.components.ad.KsAdLoadManager.Holder valueOf(java.lang.String r1) {
                java.lang.Class<com.kwad.components.ad.KsAdLoadManager$Holder> r0 = com.kwad.components.ad.KsAdLoadManager.Holder.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.kwad.components.ad.KsAdLoadManager$Holder r1 = (com.kwad.components.ad.KsAdLoadManager.Holder) r1
                return r1
        }

        public static com.kwad.components.ad.KsAdLoadManager.Holder[] values() {
                com.kwad.components.ad.KsAdLoadManager$Holder[] r0 = com.kwad.components.ad.KsAdLoadManager.Holder.$VALUES
                java.lang.Object r0 = r0.clone()
                com.kwad.components.ad.KsAdLoadManager$Holder[] r0 = (com.kwad.components.ad.KsAdLoadManager.Holder[]) r0
                return r0
        }
    }

    private KsAdLoadManager() {
            r0 = this;
            r0.<init>()
            return
    }

    KsAdLoadManager(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.components.ad.KsAdLoadManager M() {
            com.kwad.components.ad.KsAdLoadManager$Holder r0 = com.kwad.components.ad.KsAdLoadManager.Holder.INSTANCE
            com.kwad.components.ad.KsAdLoadManager r0 = com.kwad.components.ad.KsAdLoadManager.Holder.access$100(r0)
            return r0
    }

    public static void a(com.kwad.components.core.p.a.a r1) {
            boolean r0 = com.kwad.components.ad.adbit.c.b(r1)
            if (r0 == 0) goto L7
            return
        L7:
            com.kwad.components.core.c.d r0 = com.kwad.components.core.c.d.mj()
            r0.c(r1)
            return
    }

    public final synchronized <T> void a(T r2) {
            r1 = this;
            monitor-enter(r1)
            com.kwad.components.core.c.f r0 = com.kwad.components.core.c.f.mu()     // Catch: java.lang.Throwable -> La
            r0.add(r2)     // Catch: java.lang.Throwable -> La
            monitor-exit(r1)
            return
        La:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final synchronized <T> void b(java.util.List<T> r3) {
            r2 = this;
            monitor-enter(r2)
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L19
        L5:
            boolean r0 = r3.hasNext()     // Catch: java.lang.Throwable -> L19
            if (r0 == 0) goto L17
            java.lang.Object r0 = r3.next()     // Catch: java.lang.Throwable -> L19
            com.kwad.components.core.c.f r1 = com.kwad.components.core.c.f.mu()     // Catch: java.lang.Throwable -> L19
            r1.add(r0)     // Catch: java.lang.Throwable -> L19
            goto L5
        L17:
            monitor-exit(r2)
            return
        L19:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }
}
