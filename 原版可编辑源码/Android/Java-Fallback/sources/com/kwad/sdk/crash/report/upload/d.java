package com.kwad.sdk.crash.report.upload;

public final class d {



    public static void a(java.io.File r3, boolean r4, java.util.concurrent.CountDownLatch r5) {
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "upload()"
            r4.<init>(r0)
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            java.lang.String r0 = "ExceptionCollector"
            com.kwad.sdk.core.e.c.d(r0, r4)
            com.kwad.sdk.crash.report.upload.f r4 = new com.kwad.sdk.crash.report.upload.f
            r4.<init>()
            java.lang.String r0 = com.kwad.sdk.utils.au.getDeviceId()
            r4.aBL = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = r3.getName()
            java.lang.String r1 = com.kwad.sdk.crash.utils.g.eR(r1)
            java.lang.String r2 = "mLogUUID"
            r0.put(r2, r1)
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>(r0)
            java.lang.String r0 = r1.toString()
            r4.aBN = r0
            java.lang.String r0 = r3.getName()
            java.lang.String r0 = com.kwad.sdk.utils.q.getExtension(r0)
            r4.aBO = r0
            r4.aBQ = r3
            com.kwad.sdk.crash.report.upload.d$1 r0 = new com.kwad.sdk.crash.report.upload.d$1
            r0.<init>(r4)
            com.kwad.sdk.crash.report.upload.d$2 r1 = new com.kwad.sdk.crash.report.upload.d$2
            r2 = 1
            r1.<init>(r4, r3, r5, r2)
            r0.request(r1)
            return
    }
}
