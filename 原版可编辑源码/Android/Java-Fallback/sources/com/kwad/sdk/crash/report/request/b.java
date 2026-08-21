package com.kwad.sdk.crash.report.request;

public final class b {



    public interface a {
        void onError(int r1, java.lang.String r2);

        void onSuccess();
    }

    public static void a(java.util.List<com.kwad.sdk.crash.report.ReportEvent> r1, java.util.concurrent.CountDownLatch r2) {
            r0 = 0
            a(r1, r2, r0)
            return
    }

    public static void a(java.util.List<com.kwad.sdk.crash.report.ReportEvent> r2, java.util.concurrent.CountDownLatch r3, com.kwad.sdk.crash.report.request.b.a r4) {
            java.lang.String r0 = "ExceptionCollector"
            java.lang.String r1 = "CrashReportRequestManager request"
            com.kwad.sdk.core.e.c.d(r0, r1)
            if (r2 == 0) goto L1c
            int r0 = r2.size()
            if (r0 <= 0) goto L1c
            com.kwad.sdk.crash.report.request.b$1 r0 = new com.kwad.sdk.crash.report.request.b$1
            r0.<init>(r2)
            com.kwad.sdk.crash.report.request.b$2 r1 = new com.kwad.sdk.crash.report.request.b$2
            r1.<init>(r2, r3, r4)
            r0.request(r1)
        L1c:
            return
    }
}
