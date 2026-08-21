package com.kwad.sdk.crash.report.request;

public final class c {
    public static com.kwad.sdk.crash.report.ReportEvent d(com.kwad.sdk.crash.model.message.ExceptionMessage r3) {
            com.kwad.sdk.crash.report.ReportEvent r0 = new com.kwad.sdk.crash.report.ReportEvent
            r0.<init>()
            long r1 = com.kwad.sdk.crash.utils.e.Cm()
            r0.clientIncrementId = r1
            long r1 = r3.mCurrentTimeStamp
            r0.clientTimeStamp = r1
            java.lang.String r1 = r3.mCustomMsg
            java.lang.String r1 = eP(r1)
            r0.sessionId = r1
            java.util.Calendar r1 = java.util.Calendar.getInstance()
            java.util.TimeZone r1 = r1.getTimeZone()
            java.lang.String r1 = r1.getID()
            r0.timeZone = r1
            com.kwad.sdk.crash.report.ReportEvent$StatPackage r1 = new com.kwad.sdk.crash.report.ReportEvent$StatPackage
            r1.<init>()
            r0.statPackage = r1
            com.kwad.sdk.crash.report.ReportEvent$ExceptionEvent r1 = new com.kwad.sdk.crash.report.ReportEvent$ExceptionEvent
            r1.<init>()
            int r2 = r3.mExceptionType
            r1.type = r2
            org.json.JSONObject r3 = r3.toJson()
            java.lang.String r3 = r3.toString()
            r1.message = r3
            com.kwad.sdk.crash.report.ReportEvent$UrlPackage r3 = new com.kwad.sdk.crash.report.ReportEvent$UrlPackage
            r3.<init>()
            r1.urlPackage = r3
            com.kwad.sdk.crash.report.ReportEvent$StatPackage r3 = r0.statPackage
            r3.exceptionEvent = r1
            return r0
    }

    private static java.lang.String eP(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            java.lang.String r1 = "Unknown"
            if (r0 != 0) goto L24
            boolean r0 = r1.equals(r2)
            if (r0 != 0) goto L24
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L20
            r0.<init>(r2)     // Catch: java.lang.Exception -> L20
            java.lang.String r2 = com.kwad.sdk.crash.d.azU     // Catch: java.lang.Exception -> L20
            java.lang.String r2 = r0.optString(r2)     // Catch: java.lang.Exception -> L20
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L20
            if (r0 != 0) goto L24
            return r2
        L20:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
        L24:
            return r1
    }
}
