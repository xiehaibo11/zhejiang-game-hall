package com.kwad.sdk.crash.online.monitor.block;

public final class a {
    private static volatile boolean aAA;
    private static volatile boolean aAB;
    private static volatile boolean aAw;
    private static java.lang.String aAx;
    private static java.util.List<java.lang.String> aAy;
    private static java.util.List<java.lang.String> aAz;

    public static boolean EW() {
            boolean r0 = com.kwad.sdk.crash.online.monitor.block.a.aAw
            r1 = 0
            if (r0 == 0) goto L6
            return r1
        L6:
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r2 = 1
            java.lang.String r3 = "mLogging"
            java.lang.Object r0 = com.kwad.sdk.utils.s.f(r0, r3)     // Catch: java.lang.Exception -> L17
            android.util.Printer r0 = (android.util.Printer) r0     // Catch: java.lang.Exception -> L17
            if (r0 != 0) goto L16
            return r1
        L16:
            return r2
        L17:
            r0 = move-exception
            java.lang.String r3 = "perfMonitor.MonitorDetector"
            java.lang.String r4 = "hasBlockMonitor "
            com.kwad.sdk.core.e.c.e(r3, r4, r0)
            com.kwad.sdk.crash.online.monitor.block.a.aAw = r2
            return r1
    }

    public static boolean EX() {
            boolean r0 = com.kwad.sdk.crash.online.monitor.block.a.aAB
            if (r0 == 0) goto L7
            boolean r0 = com.kwad.sdk.crash.online.monitor.block.a.aAA
            return r0
        L7:
            r0 = 1
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.ClassNotFoundException -> L31
            com.kwad.sdk.core.a.c$a r2 = com.kwad.sdk.core.a.c.AL()     // Catch: java.lang.ClassNotFoundException -> L31
            java.lang.String r3 = "Y29tLnRlbmNlbnQubWF0cml4Lk1hdHJpeA=="
            byte[] r2 = r2.decode(r3)     // Catch: java.lang.ClassNotFoundException -> L31
            r1.<init>(r2)     // Catch: java.lang.ClassNotFoundException -> L31
            java.lang.String r2 = "perfMonitor.MonitorDetector"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.ClassNotFoundException -> L31
            java.lang.String r4 = "hasMatrix after:"
            r3.<init>(r4)     // Catch: java.lang.ClassNotFoundException -> L31
            r3.append(r1)     // Catch: java.lang.ClassNotFoundException -> L31
            java.lang.String r3 = r3.toString()     // Catch: java.lang.ClassNotFoundException -> L31
            com.kwad.sdk.core.e.c.d(r2, r3)     // Catch: java.lang.ClassNotFoundException -> L31
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> L31
            if (r1 == 0) goto L31
            return r0
        L31:
            r1 = 0
            com.kwad.sdk.crash.online.monitor.block.a.aAA = r1
            com.kwad.sdk.crash.online.monitor.block.a.aAB = r0
            boolean r0 = com.kwad.sdk.crash.online.monitor.block.a.aAA
            return r0
    }

    public static void a(com.kwad.sdk.crash.online.monitor.a.a r1) {
            java.util.List<java.lang.String> r0 = r1.aAV
            com.kwad.sdk.crash.online.monitor.block.a.aAy = r0
            java.util.List<java.lang.String> r1 = r1.aAW
            com.kwad.sdk.crash.online.monitor.block.a.aAz = r1
            return
    }

    private static boolean a(java.util.List<java.lang.String> r6, boolean r7) {
            java.lang.String r0 = "perfMonitor.MonitorDetector"
            boolean r1 = com.kwad.sdk.crash.online.monitor.block.a.aAw
            r2 = 0
            if (r1 == 0) goto L8
            return r2
        L8:
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r3 = 1
            java.lang.String r4 = "mLogging"
            java.lang.Object r1 = com.kwad.sdk.utils.s.f(r1, r4)     // Catch: java.lang.Exception -> L89
            android.util.Printer r1 = (android.util.Printer) r1     // Catch: java.lang.Exception -> L89
            if (r1 == 0) goto L83
            java.lang.Class r4 = r1.getClass()     // Catch: java.lang.Exception -> L89
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Exception -> L89
            com.kwad.sdk.crash.online.monitor.block.a.aAx = r4     // Catch: java.lang.Exception -> L89
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L89
            java.lang.String r5 = "originPrinter name:"
            r4.<init>(r5)     // Catch: java.lang.Exception -> L89
            java.lang.Class r5 = r1.getClass()     // Catch: java.lang.Exception -> L89
            java.lang.String r5 = r5.getName()     // Catch: java.lang.Exception -> L89
            r4.append(r5)     // Catch: java.lang.Exception -> L89
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L89
            com.kwad.sdk.core.e.c.d(r0, r4)     // Catch: java.lang.Exception -> L89
            if (r7 == 0) goto L41
            java.lang.String r7 = com.kwad.sdk.crash.online.monitor.block.a.aAx     // Catch: java.lang.Exception -> L89
            com.kwad.sdk.crash.online.monitor.block.e.eI(r7)     // Catch: java.lang.Exception -> L89
        L41:
            java.util.Iterator r6 = r6.iterator()     // Catch: java.lang.Exception -> L89
        L45:
            boolean r7 = r6.hasNext()     // Catch: java.lang.Exception -> L89
            if (r7 == 0) goto L91
            java.lang.Object r7 = r6.next()     // Catch: java.lang.Exception -> L89
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Exception -> L89
            java.lang.String r4 = new java.lang.String     // Catch: java.lang.Exception -> L89
            com.kwad.sdk.core.a.c$a r5 = com.kwad.sdk.core.a.c.AL()     // Catch: java.lang.Exception -> L89
            byte[] r7 = r5.decode(r7)     // Catch: java.lang.Exception -> L89
            r4.<init>(r7)     // Catch: java.lang.Exception -> L89
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L89
            java.lang.String r5 = "printer after:"
            r7.<init>(r5)     // Catch: java.lang.Exception -> L89
            r7.append(r4)     // Catch: java.lang.Exception -> L89
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Exception -> L89
            com.kwad.sdk.core.e.c.d(r0, r7)     // Catch: java.lang.Exception -> L89
            java.lang.Class r7 = r1.getClass()     // Catch: java.lang.Exception -> L89
            java.lang.String r7 = r7.getName()     // Catch: java.lang.Exception -> L89
            boolean r7 = r7.contains(r4)     // Catch: java.lang.Exception -> L89
            if (r7 == 0) goto L45
            java.lang.String r6 = "printer monitor"
            com.kwad.sdk.core.e.c.d(r0, r6)     // Catch: java.lang.Exception -> L89
            return r3
        L83:
            java.lang.String r6 = "printer not hook"
            com.kwad.sdk.core.e.c.d(r0, r6)     // Catch: java.lang.Exception -> L89
            goto L91
        L89:
            r6 = move-exception
            java.lang.String r7 = "hasBlockMonitor "
            com.kwad.sdk.core.e.c.e(r0, r7, r6)
            com.kwad.sdk.crash.online.monitor.block.a.aAw = r3
        L91:
            return r2
    }

    public static boolean bq(boolean r1) {
            java.util.List<java.lang.String> r1 = com.kwad.sdk.crash.online.monitor.block.a.aAy
            r0 = 1
            if (r1 == 0) goto L13
            boolean r1 = r1.isEmpty()
            if (r1 == 0) goto Lc
            goto L13
        Lc:
            java.util.List<java.lang.String> r1 = com.kwad.sdk.crash.online.monitor.block.a.aAy
            boolean r1 = a(r1, r0)
            return r1
        L13:
            java.lang.String r1 = "Y29tLnRlbmNlbnQubWF0cml4LnRyYWNlLmNvcmUuTG9vcGVyTW9uaXRvcg=="
            boolean r1 = f(r1, r0)
            return r1
    }

    public static boolean br(boolean r1) {
            java.util.List<java.lang.String> r1 = com.kwad.sdk.crash.online.monitor.block.a.aAz
            r0 = 0
            if (r1 == 0) goto L12
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L12
            java.util.List<java.lang.String> r1 = com.kwad.sdk.crash.online.monitor.block.a.aAz
            boolean r1 = a(r1, r0)
            return r1
        L12:
            return r0
    }

    private static boolean f(java.lang.String r1, boolean r2) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r0.add(r1)
            boolean r1 = a(r0, r2)
            return r1
    }
}
