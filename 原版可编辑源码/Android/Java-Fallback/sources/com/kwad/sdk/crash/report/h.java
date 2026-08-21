package com.kwad.sdk.crash.report;

public final class h {
    private static void a(com.kwad.sdk.crash.report.ReportEvent r2) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r1 = 1
            r0.<init>(r1)
            r0.add(r2)
            r2 = 0
            com.kwad.sdk.crash.report.request.b.a(r0, r2)     // Catch: java.lang.Throwable -> Ld
        Ld:
            return
    }

    public static void a(java.lang.String r2, java.util.List<java.lang.String> r3, com.kwad.sdk.crash.report.request.b.a r4) {
            boolean r0 = r3.isEmpty()
            if (r0 == 0) goto L7
            return
        L7:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Iterator r3 = r3.iterator()
        L10:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L24
            java.lang.Object r1 = r3.next()
            java.lang.String r1 = (java.lang.String) r1
            com.kwad.sdk.crash.report.ReportEvent r1 = af(r2, r1)
            r0.add(r1)
            goto L10
        L24:
            a(r0, r4)
            return
    }

    private static void a(java.util.List<com.kwad.sdk.crash.report.ReportEvent> r1, com.kwad.sdk.crash.report.request.b.a r2) {
            r0 = 0
            com.kwad.sdk.crash.report.request.b.a(r1, r0, r2)     // Catch: java.lang.Throwable -> L4
        L4:
            return
    }

    public static void ae(java.lang.String r0, java.lang.String r1) {
            com.kwad.sdk.crash.report.ReportEvent r0 = af(r0, r1)
            a(r0)
            return
    }

    private static com.kwad.sdk.crash.report.ReportEvent af(java.lang.String r3, java.lang.String r4) {
            com.kwad.sdk.crash.report.ReportEvent r0 = new com.kwad.sdk.crash.report.ReportEvent
            r0.<init>()
            long r1 = java.lang.System.currentTimeMillis()
            r0.clientTimeStamp = r1
            java.util.Calendar r1 = java.util.Calendar.getInstance()
            java.util.TimeZone r1 = r1.getTimeZone()
            java.lang.String r1 = r1.getID()
            r0.timeZone = r1
            com.kwad.sdk.crash.report.ReportEvent$StatPackage r1 = new com.kwad.sdk.crash.report.ReportEvent$StatPackage
            r1.<init>()
            r0.statPackage = r1
            com.kwad.sdk.crash.report.ReportEvent$CustomStatEvent r1 = new com.kwad.sdk.crash.report.ReportEvent$CustomStatEvent
            r1.<init>()
            r1.key = r3
            r1.value = r4
            com.kwad.sdk.crash.report.ReportEvent$StatPackage r3 = r0.statPackage
            r3.customStatEvent = r1
            return r0
    }
}
