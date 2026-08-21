package com.kwad.sdk.core.config;

public final class b {
    public static final java.util.Map<java.lang.String, java.util.Set<com.kwad.sdk.core.config.item.b>> akk = null;
    private static android.content.SharedPreferences akl;

    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.kwad.sdk.core.config.b.akk = r0
            r0 = 0
            com.kwad.sdk.core.config.b.akl = r0
            return
    }

    static void a(android.content.Context r0, com.kwad.sdk.core.config.item.b<?> r1) {
            if (r1 == 0) goto L10
            android.content.SharedPreferences r0 = yW()
            if (r0 == 0) goto L10
            r1.a(r0)     // Catch: java.lang.Exception -> Lc
            return
        Lc:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
        L10:
            return
    }

    private static void a(android.content.SharedPreferences.Editor r3) {
            if (r3 == 0) goto L3e
            java.util.Map<java.lang.String, java.util.Set<com.kwad.sdk.core.config.item.b>> r0 = com.kwad.sdk.core.config.b.akk
            java.util.Set r0 = r0.keySet()
            java.util.Iterator r0 = r0.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L3e
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            java.util.Map<java.lang.String, java.util.Set<com.kwad.sdk.core.config.item.b>> r2 = com.kwad.sdk.core.config.b.akk
            java.lang.Object r1 = r2.get(r1)
            java.util.Set r1 = (java.util.Set) r1
            if (r1 == 0) goto Lc
            boolean r2 = r1.isEmpty()
            if (r2 != 0) goto Lc
            java.util.Iterator r1 = r1.iterator()
        L2c:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto Lc
            java.lang.Object r2 = r1.next()
            com.kwad.sdk.core.config.item.b r2 = (com.kwad.sdk.core.config.item.b) r2
            if (r2 == 0) goto L2c
            r2.b(r3)
            goto L2c
        L3e:
            return
    }

    private static void a(android.content.SharedPreferences r3) {
            if (r3 == 0) goto L43
            java.util.Map<java.lang.String, java.util.Set<com.kwad.sdk.core.config.item.b>> r0 = com.kwad.sdk.core.config.b.akk
            java.util.Set r0 = r0.keySet()
            java.util.Iterator r0 = r0.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L43
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            java.util.Map<java.lang.String, java.util.Set<com.kwad.sdk.core.config.item.b>> r2 = com.kwad.sdk.core.config.b.akk
            java.lang.Object r1 = r2.get(r1)
            java.util.Set r1 = (java.util.Set) r1
            if (r1 == 0) goto Lc
            boolean r2 = r1.isEmpty()
            if (r2 != 0) goto Lc
            java.util.Iterator r1 = r1.iterator()
        L2c:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto Lc
            java.lang.Object r2 = r1.next()
            com.kwad.sdk.core.config.item.b r2 = (com.kwad.sdk.core.config.item.b) r2
            if (r2 == 0) goto L2c
            r2.a(r3)     // Catch: java.lang.Exception -> L3e
            goto L2c
        L3e:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
            goto L2c
        L43:
            return
    }

    public static <T> void a(com.kwad.sdk.core.config.item.b<T> r3) {
            java.lang.String r0 = r3.getKey()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto Lb
            return
        Lb:
            java.util.Set r1 = cv(r0)
            if (r1 != 0) goto L1b
            java.util.concurrent.CopyOnWriteArraySet r1 = new java.util.concurrent.CopyOnWriteArraySet
            r1.<init>()
            java.util.Map<java.lang.String, java.util.Set<com.kwad.sdk.core.config.item.b>> r2 = com.kwad.sdk.core.config.b.akk
            r2.put(r0, r1)
        L1b:
            r1.add(r3)
            return
    }

    public static synchronized boolean aO(android.content.Context r1) {
            java.lang.Class<com.kwad.sdk.core.config.b> r1 = com.kwad.sdk.core.config.b.class
            monitor-enter(r1)
            android.content.SharedPreferences r0 = yW()     // Catch: java.lang.Throwable -> L19
            if (r0 == 0) goto L16
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Throwable -> L19
            a(r0)     // Catch: java.lang.Throwable -> L19
            boolean r0 = r0.commit()     // Catch: java.lang.Throwable -> L19
            monitor-exit(r1)
            return r0
        L16:
            r0 = 0
            monitor-exit(r1)
            return r0
        L19:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public static synchronized void aP(android.content.Context r1) {
            java.lang.Class<com.kwad.sdk.core.config.b> r1 = com.kwad.sdk.core.config.b.class
            monitor-enter(r1)
            android.content.SharedPreferences r0 = yW()     // Catch: java.lang.Throwable -> Le
            if (r0 == 0) goto Lc
            a(r0)     // Catch: java.lang.Throwable -> Le
        Lc:
            monitor-exit(r1)
            return
        Le:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    private static java.util.Set<com.kwad.sdk.core.config.item.b> cv(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto Lf
            java.util.Map<java.lang.String, java.util.Set<com.kwad.sdk.core.config.item.b>> r0 = com.kwad.sdk.core.config.b.akk
            java.lang.Object r1 = r0.get(r1)
            java.util.Set r1 = (java.util.Set) r1
            return r1
        Lf:
            r1 = 0
            return r1
    }

    public static void f(org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.util.Map<java.lang.String, java.util.Set<com.kwad.sdk.core.config.item.b>> r0 = com.kwad.sdk.core.config.b.akk
            java.util.Set r0 = r0.keySet()
            java.util.Iterator r0 = r0.iterator()
        Ld:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L45
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            java.util.Map<java.lang.String, java.util.Set<com.kwad.sdk.core.config.item.b>> r2 = com.kwad.sdk.core.config.b.akk
            java.lang.Object r2 = r2.get(r1)
            java.util.Set r2 = (java.util.Set) r2
            if (r2 == 0) goto Ld
            boolean r3 = r2.isEmpty()
            if (r3 != 0) goto Ld
            boolean r1 = r4.has(r1)
            if (r1 == 0) goto Ld
            java.util.Iterator r1 = r2.iterator()
        L33:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto Ld
            java.lang.Object r2 = r1.next()
            com.kwad.sdk.core.config.item.b r2 = (com.kwad.sdk.core.config.item.b) r2
            if (r2 == 0) goto L33
            r2.g(r4)
            goto L33
        L45:
            return
    }

    private static android.content.SharedPreferences yW() {
            android.content.SharedPreferences r0 = com.kwad.sdk.core.config.b.akl
            if (r0 != 0) goto Lc
            java.lang.String r0 = "ksadsdk_config"
            android.content.SharedPreferences r0 = com.kwad.sdk.utils.bb.fH(r0)
            com.kwad.sdk.core.config.b.akl = r0
        Lc:
            android.content.SharedPreferences r0 = com.kwad.sdk.core.config.b.akl
            return r0
    }
}
