package com.kwad.framework.filedownloader.event;

public class a {
    private final java.util.concurrent.Executor adx;
    private final java.util.HashMap<java.lang.String, java.util.LinkedList<com.kwad.framework.filedownloader.event.c>> ady;


    public a() {
            r2 = this;
            r2.<init>()
            r0 = 10
            java.lang.String r1 = "EventPool"
            java.util.concurrent.ThreadPoolExecutor r0 = com.kwad.framework.filedownloader.f.b.j(r0, r1)
            r2.adx = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.ady = r0
            return
    }

    private static void a(java.util.LinkedList<com.kwad.framework.filedownloader.event.c> r3, com.kwad.framework.filedownloader.event.b r4) {
            java.lang.Object[] r3 = r3.toArray()
            int r0 = r3.length
            r1 = 0
        L6:
            if (r1 >= r0) goto L14
            r2 = r3[r1]
            if (r2 == 0) goto L11
            com.kwad.framework.filedownloader.event.c r2 = (com.kwad.framework.filedownloader.event.c) r2
            r2.a(r4)
        L11:
            int r1 = r1 + 1
            goto L6
        L14:
            java.lang.Runnable r3 = r4.adD
            if (r3 == 0) goto L1d
            java.lang.Runnable r3 = r4.adD
            r3.run()
        L1d:
            return
    }

    public final boolean a(java.lang.String r4, com.kwad.framework.filedownloader.event.c r5) {
            r3 = this;
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            if (r0 == 0) goto Lf
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r4
            java.lang.String r1 = "setListener %s"
            com.kwad.framework.filedownloader.f.d.e(r3, r1, r0)
        Lf:
            if (r5 == 0) goto L48
            java.util.HashMap<java.lang.String, java.util.LinkedList<com.kwad.framework.filedownloader.event.c>> r0 = r3.ady
            java.lang.Object r0 = r0.get(r4)
            java.util.LinkedList r0 = (java.util.LinkedList) r0
            if (r0 != 0) goto L3a
            java.lang.String r1 = r4.intern()
            monitor-enter(r1)
            java.util.HashMap<java.lang.String, java.util.LinkedList<com.kwad.framework.filedownloader.event.c>> r0 = r3.ady     // Catch: java.lang.Throwable -> L37
            java.lang.Object r0 = r0.get(r4)     // Catch: java.lang.Throwable -> L37
            java.util.LinkedList r0 = (java.util.LinkedList) r0     // Catch: java.lang.Throwable -> L37
            if (r0 != 0) goto L35
            java.util.HashMap<java.lang.String, java.util.LinkedList<com.kwad.framework.filedownloader.event.c>> r0 = r3.ady     // Catch: java.lang.Throwable -> L37
            java.util.LinkedList r2 = new java.util.LinkedList     // Catch: java.lang.Throwable -> L37
            r2.<init>()     // Catch: java.lang.Throwable -> L37
            r0.put(r4, r2)     // Catch: java.lang.Throwable -> L37
            r0 = r2
        L35:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L37
            goto L3a
        L37:
            r4 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L37
            throw r4
        L3a:
            java.lang.String r4 = r4.intern()
            monitor-enter(r4)
            boolean r5 = r0.add(r5)     // Catch: java.lang.Throwable -> L45
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L45
            return r5
        L45:
            r5 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L45
            throw r5
        L48:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r5 = "listener must not be null!"
            r4.<init>(r5)
            throw r4
    }

    public final boolean b(com.kwad.framework.filedownloader.event.b r6) {
            r5 = this;
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L13
            java.lang.Object[] r0 = new java.lang.Object[r2]
            java.lang.String r3 = r6.getId()
            r0[r1] = r3
            java.lang.String r3 = "publish %s"
            com.kwad.framework.filedownloader.f.d.e(r5, r3, r0)
        L13:
            if (r6 == 0) goto L4a
            java.lang.String r0 = r6.getId()
            java.util.HashMap<java.lang.String, java.util.LinkedList<com.kwad.framework.filedownloader.event.c>> r3 = r5.ady
            java.lang.Object r3 = r3.get(r0)
            java.util.LinkedList r3 = (java.util.LinkedList) r3
            if (r3 != 0) goto L46
            java.lang.String r4 = r0.intern()
            monitor-enter(r4)
            java.util.HashMap<java.lang.String, java.util.LinkedList<com.kwad.framework.filedownloader.event.c>> r3 = r5.ady     // Catch: java.lang.Throwable -> L43
            java.lang.Object r3 = r3.get(r0)     // Catch: java.lang.Throwable -> L43
            java.util.LinkedList r3 = (java.util.LinkedList) r3     // Catch: java.lang.Throwable -> L43
            if (r3 != 0) goto L41
            boolean r6 = com.kwad.framework.filedownloader.f.d.aeI     // Catch: java.lang.Throwable -> L43
            if (r6 == 0) goto L3f
            java.lang.String r6 = "No listener for this event %s"
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L43
            r2[r1] = r0     // Catch: java.lang.Throwable -> L43
            com.kwad.framework.filedownloader.f.d.c(r5, r6, r2)     // Catch: java.lang.Throwable -> L43
        L3f:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L43
            return r1
        L41:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L43
            goto L46
        L43:
            r6 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L43
            throw r6
        L46:
            a(r3, r6)
            return r2
        L4a:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "event must not be null!"
            r6.<init>(r0)
            throw r6
    }

    public final void c(com.kwad.framework.filedownloader.event.b r4) {
            r3 = this;
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            if (r0 == 0) goto L13
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.String r2 = r4.getId()
            r0[r1] = r2
            java.lang.String r1 = "asyncPublishInNewThread %s"
            com.kwad.framework.filedownloader.f.d.e(r3, r1, r0)
        L13:
            java.util.concurrent.Executor r0 = r3.adx
            com.kwad.framework.filedownloader.event.a$1 r1 = new com.kwad.framework.filedownloader.event.a$1
            r1.<init>(r3, r4)
            r0.execute(r1)
            return
    }
}
