package com.kwad.components.core.i;

public final class a {
    private static int KI = 12;
    private static int KJ = 4;
    private static int KK = 1;




    public interface a {
        void c(java.util.List<com.kwad.components.core.i.c> r1);

        void onError(int r1, java.lang.String r2);

        void onRequestResult(int r1);
    }

    static {
            return
    }

    private static void a(int r8, int r9, com.kwad.sdk.internal.api.SceneImpl r10, int r11, com.kwad.components.core.i.a.a r12) {
            com.kwad.sdk.internal.api.SceneImpl r10 = r10.clone()
            long r0 = android.os.SystemClock.elapsedRealtime()
            r10.setAdStyle(r8)
            r10.setAdNum(r9)
            com.kwad.components.core.p.a.b r2 = new com.kwad.components.core.p.a.b
            r2.<init>(r10)
            com.kwad.components.core.i.a$1 r6 = new com.kwad.components.core.i.a$1
            r6.<init>(r12, r11, r0)
            r3 = 0
            r4 = 0
            r5 = 1
            r7 = 0
            a(r2, r3, r4, r5, r6, r7)
            return
    }

    private static void a(com.kwad.components.core.p.a.b r6, java.util.List<java.lang.String> r7, boolean r8, boolean r9, com.kwad.components.core.p.h r10, boolean r11) {
            com.kwad.components.core.i.a$2 r7 = new com.kwad.components.core.i.a$2
            r3 = 0
            r4 = 0
            r5 = 1
            r0 = r7
            r1 = r6
            r2 = r6
            r0.<init>(r1, r2, r3, r4, r5)
            com.kwad.components.core.i.a$3 r6 = new com.kwad.components.core.i.a$3
            r8 = 0
            r6.<init>(r8, r10)
            r7.request(r6)
            return
    }

    private static void a(com.kwad.components.core.response.model.AdResultData r3, long r4) {
            long r0 = android.os.SystemClock.elapsedRealtime()
            java.util.List r2 = r3.getAdTemplateList()
            int r2 = r2.size()
            if (r2 <= 0) goto L23
            java.util.List r3 = r3.getAdTemplateList()
            r2 = 0
            java.lang.Object r3 = r3.get(r2)
            com.kwad.sdk.core.response.model.AdTemplate r3 = (com.kwad.sdk.core.response.model.AdTemplate) r3
            if (r3 == 0) goto L23
            com.kwad.components.core.o.a r2 = com.kwad.components.core.o.a.pA()
            long r0 = r0 - r4
            r2.f(r3, r0)
        L23:
            return
    }

    public static void a(com.kwad.sdk.internal.api.SceneImpl r3, com.kwad.components.core.i.a.a r4) {
            int r0 = com.kwad.components.core.i.a.KJ
            int r1 = com.kwad.components.core.i.e.AGGREGATION
            r2 = 15
            a(r2, r0, r3, r1, r4)
            return
    }

    private static java.util.List<com.kwad.components.core.i.c> b(java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r3, int r4) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Iterator r3 = r3.iterator()
        L9:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L1e
            java.lang.Object r1 = r3.next()
            com.kwad.sdk.core.response.model.AdTemplate r1 = (com.kwad.sdk.core.response.model.AdTemplate) r1
            com.kwad.components.core.i.c r2 = new com.kwad.components.core.i.c
            r2.<init>(r1, r4)
            r0.add(r2)
            goto L9
        L1e:
            return r0
    }

    static void b(com.kwad.components.core.response.model.AdResultData r0, long r1) {
            a(r0, r1)
            return
    }

    public static void b(com.kwad.sdk.internal.api.SceneImpl r3, com.kwad.components.core.i.a.a r4) {
            int r0 = com.kwad.components.core.i.a.KK
            int r1 = com.kwad.components.core.i.e.KU
            r2 = 17
            a(r2, r0, r3, r1, r4)
            return
    }

    static java.util.List c(java.util.List r0, int r1) {
            java.util.List r0 = b(r0, r1)
            return r0
    }
}
