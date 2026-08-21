package com.kwad.components.core.h;

public final class a {



    static final class a {
        private static final com.kwad.components.core.h.a KH = null;

        static {
                com.kwad.components.core.h.a r0 = new com.kwad.components.core.h.a
                r1 = 0
                r0.<init>(r1)
                com.kwad.components.core.h.a.a.KH = r0
                return
        }

        static com.kwad.components.core.h.a nZ() {
                com.kwad.components.core.h.a r0 = com.kwad.components.core.h.a.a.KH
                return r0
        }
    }

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

    private void a(android.content.Context r8, long r9) {
            r7 = this;
            java.io.File r8 = ad(r8)
            com.kwad.components.core.h.a$2 r0 = new com.kwad.components.core.h.a$2
            r0.<init>(r7)
            java.io.File[] r8 = r8.listFiles(r0)
            if (r8 == 0) goto L43
            int r0 = r8.length
            if (r0 <= 0) goto L43
            r0 = 0
            int r2 = r8.length
            r3 = 0
            r4 = r3
        L17:
            if (r4 >= r2) goto L26
            r5 = r8[r4]
            long r5 = r5.lastModified()
            long r0 = java.lang.Math.max(r0, r5)
            int r4 = r4 + 1
            goto L17
        L26:
            long r9 = java.lang.Math.min(r9, r0)
            int r0 = r8.length
        L2b:
            if (r3 >= r0) goto L43
            r1 = r8[r3]
            boolean r2 = r1.exists()
            if (r2 == 0) goto L40
            long r4 = r1.lastModified()
            int r2 = (r4 > r9 ? 1 : (r4 == r9 ? 0 : -1))
            if (r2 >= 0) goto L40
            r1.delete()
        L40:
            int r3 = r3 + 1
            goto L2b
        L43:
            return
    }

    static void a(com.kwad.components.core.h.a r0, android.content.Context r1, long r2) {
            r0.a(r1, r2)
            return
    }

    private static java.io.File ad(android.content.Context r2) {
            java.io.File r0 = new java.io.File
            android.content.pm.ApplicationInfo r2 = r2.getApplicationInfo()
            java.lang.String r2 = r2.dataDir
            java.lang.String r1 = "ksad_dynamic"
            r0.<init>(r2, r1)
            return r0
    }

    public static com.kwad.components.core.h.a nY() {
            com.kwad.components.core.h.a r0 = com.kwad.components.core.h.a.a.nZ()
            return r0
    }

    public final void ac(android.content.Context r4) {
            r3 = this;
            long r0 = java.lang.System.currentTimeMillis()
            com.kwad.components.core.h.a$1 r2 = new com.kwad.components.core.h.a$1
            r2.<init>(r3, r4, r0)
            java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.SECONDS
            r0 = 10
            com.kwad.sdk.utils.g.schedule(r2, r0, r4)
            return
    }
}
