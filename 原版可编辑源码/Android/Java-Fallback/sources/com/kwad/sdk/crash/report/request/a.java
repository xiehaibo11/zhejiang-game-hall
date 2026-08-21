package com.kwad.sdk.crash.report.request;

public final class a extends com.kwad.sdk.core.network.d {
    public a(java.util.List<com.kwad.sdk.crash.report.ReportEvent> r3) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "eventList"
            r2.putBody(r0, r3)
            boolean r0 = com.kwad.sdk.crash.utils.c.b(r3)
            if (r0 != 0) goto L3b
            r0 = 0
            java.lang.Object r1 = r3.get(r0)
            if (r1 == 0) goto L3b
            java.lang.Object r3 = r3.get(r0)
            com.kwad.sdk.crash.report.ReportEvent r3 = (com.kwad.sdk.crash.report.ReportEvent) r3
            com.kwad.sdk.crash.report.ReportEvent$StatPackage r3 = r3.statPackage
            if (r3 == 0) goto L3b
            com.kwad.sdk.crash.report.ReportEvent$CustomStatEvent r0 = r3.customStatEvent
            if (r0 == 0) goto L3b
            com.kwad.sdk.crash.report.ReportEvent$CustomStatEvent r3 = r3.customStatEvent
            java.lang.String r3 = r3.key
            java.lang.String r0 = "perf-block"
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto L3b
            r3 = 1
            java.lang.String r0 = "3.3.42"
            java.lang.String r3 = com.kwad.sdk.crash.model.message.ExceptionMessage.getSdkCrashVersionName(r0, r3)
            java.lang.String r0 = "versionForKeep"
            r2.putBody(r0, r3)
        L3b:
            return
    }

    @Override
    public final java.lang.String getUrl() {
            r1 = this;
            java.lang.String r0 = com.kwad.sdk.h.xh()
            return r0
    }
}
