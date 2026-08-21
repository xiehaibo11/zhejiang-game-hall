package com.kwad.sdk.components;

public final class c {
    private static final java.util.Map<java.lang.Class, com.kwad.sdk.components.a> ajZ = null;


    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.kwad.sdk.components.c.ajZ = r0
            return
    }

    public static void a(java.lang.Class r1, com.kwad.sdk.components.a r2) {
            java.util.Map<java.lang.Class, com.kwad.sdk.components.a> r0 = com.kwad.sdk.components.c.ajZ
            r0.put(r1, r2)
            return
    }

    public static <T extends com.kwad.sdk.components.a> T f(java.lang.Class<T> r2) {
            java.util.Map<java.lang.Class, com.kwad.sdk.components.a> r0 = com.kwad.sdk.components.c.ajZ
            java.lang.Object r0 = r0.get(r2)
            com.kwad.sdk.components.a r0 = (com.kwad.sdk.components.a) r0
            if (r0 == 0) goto Lb
            return r0
        Lb:
            com.kwad.sdk.components.ComponentsNotFoundException r0 = new com.kwad.sdk.components.ComponentsNotFoundException
            java.lang.String r1 = r2.getSimpleName()
            r0.<init>(r1)
            java.lang.String r1 = "KSAdSDK"
            com.kwad.sdk.core.e.c.w(r1, r0)
            java.lang.Class<com.kwad.sdk.components.DevelopMangerComponents> r0 = com.kwad.sdk.components.DevelopMangerComponents.class
            boolean r0 = r0.isAssignableFrom(r2)     // Catch: java.lang.Throwable -> L2c
            if (r0 == 0) goto L30
            com.kwad.sdk.components.e r0 = new com.kwad.sdk.components.e     // Catch: java.lang.Throwable -> L2c
            r0.<init>()     // Catch: java.lang.Throwable -> L2c
            java.util.Map<java.lang.Class, com.kwad.sdk.components.a> r1 = com.kwad.sdk.components.c.ajZ     // Catch: java.lang.Throwable -> L2c
            r1.put(r2, r0)     // Catch: java.lang.Throwable -> L2c
            return r0
        L2c:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
        L30:
            r2 = 0
            return r2
    }

    public static void init(android.content.Context r2) {
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.Map<java.lang.Class, com.kwad.sdk.components.a> r1 = com.kwad.sdk.components.c.ajZ
            java.util.Collection r1 = r1.values()
            r0.<init>(r1)
            com.kwad.sdk.components.c$1 r1 = new com.kwad.sdk.components.c$1
            r1.<init>()
            java.util.Collections.sort(r0, r1)
            java.util.Iterator r0 = r0.iterator()
        L17:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2e
            java.lang.Object r1 = r0.next()
            com.kwad.sdk.components.a r1 = (com.kwad.sdk.components.a) r1
            if (r1 == 0) goto L17
            r1.init(r2)     // Catch: java.lang.Throwable -> L29
            goto L17
        L29:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r1)
            goto L17
        L2e:
            return
    }
}
