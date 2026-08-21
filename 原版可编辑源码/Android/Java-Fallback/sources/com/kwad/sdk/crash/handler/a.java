package com.kwad.sdk.crash.handler;

public final class a {
    private static void a(com.kwad.sdk.crash.model.message.ExceptionMessage r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "upload msg="
            r0.<init>(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ExceptionCollector"
            com.kwad.sdk.core.e.c.d(r1, r0)
            java.util.ArrayList r0 = new java.util.ArrayList
            r1 = 1
            r0.<init>(r1)
            com.kwad.sdk.crash.report.ReportEvent r2 = com.kwad.sdk.crash.report.request.c.d(r2)
            r0.add(r2)
            r2 = 0
            com.kwad.sdk.crash.report.request.b.a(r0, r2)
            return
    }

    public static void n(java.lang.Throwable r2) {
            com.kwad.sdk.crash.model.message.CaughtExceptionMessage r0 = new com.kwad.sdk.crash.model.message.CaughtExceptionMessage
            r0.<init>()
            java.util.UUID r1 = java.util.UUID.randomUUID()
            java.lang.String r1 = r1.toString()
            r0.mLogUUID = r1
            java.lang.String r1 = r2.toString()
            r0.mCrashDetail = r1
            r1 = 1
            r0.mCrashSource = r1
            com.kwad.sdk.crash.e r1 = com.kwad.sdk.crash.e.EC()
            android.content.Context r1 = r1.getContext()
            com.kwad.sdk.crash.utils.g.b(r2, r0, r1)
            r2 = 2
            com.kwad.sdk.crash.utils.g.a(r0, r2)
            a(r0)
            return
    }
}
