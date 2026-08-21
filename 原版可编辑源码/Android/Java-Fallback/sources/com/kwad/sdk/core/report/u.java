package com.kwad.sdk.core.report;

public class u extends com.kwad.sdk.core.report.e {
    private static volatile com.kwad.sdk.core.report.u asB;
    private final java.util.List<com.kwad.sdk.core.report.s> asC;

    private u(android.content.Context r3) {
            r2 = this;
            com.kwad.sdk.core.report.t r0 = new com.kwad.sdk.core.report.t
            int r1 = com.kwad.sdk.core.report.t.If
            r0.<init>(r3, r1)
            r2.<init>(r0)
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            r2.asC = r3
            com.kwad.sdk.core.report.l r0 = new com.kwad.sdk.core.report.l
            r0.<init>()
            r3.add(r0)
            return
    }

    public static com.kwad.sdk.core.report.u bd(android.content.Context r2) {
            com.kwad.sdk.core.report.u r0 = com.kwad.sdk.core.report.u.asB
            if (r0 != 0) goto L17
            java.lang.Class<com.kwad.sdk.core.report.u> r0 = com.kwad.sdk.core.report.u.class
            monitor-enter(r0)
            com.kwad.sdk.core.report.u r1 = com.kwad.sdk.core.report.u.asB     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.sdk.core.report.u r1 = new com.kwad.sdk.core.report.u     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.kwad.sdk.core.report.u.asB = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.kwad.sdk.core.report.u r2 = com.kwad.sdk.core.report.u.asB
            return r2
    }

    private synchronized com.kwad.sdk.core.report.r h(android.database.Cursor r5) {
            r4 = this;
            monitor-enter(r4)
            r0 = 0
            java.lang.String r1 = r5.getString(r0)     // Catch: java.lang.Throwable -> L52
            java.lang.Class<com.kwad.sdk.service.a.f> r2 = com.kwad.sdk.service.a.f.class
            java.lang.Object r2 = com.kwad.sdk.service.ServiceProvider.get(r2)     // Catch: java.lang.Throwable -> L52
            com.kwad.sdk.service.a.f r2 = (com.kwad.sdk.service.a.f) r2     // Catch: java.lang.Throwable -> L52
            boolean r2 = r2.xM()     // Catch: java.lang.Throwable -> L52
            r3 = 1
            if (r2 == 0) goto L22
            java.lang.String r5 = r5.getString(r3)     // Catch: java.lang.Throwable -> L52
            com.kwad.sdk.core.report.r r2 = new com.kwad.sdk.core.report.r     // Catch: java.lang.Throwable -> L52
            r2.<init>(r1, r0)     // Catch: java.lang.Throwable -> L52
            r2.actionId = r5     // Catch: java.lang.Throwable -> L52
            monitor-exit(r4)
            return r2
        L22:
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: org.json.JSONException -> L45 java.lang.Throwable -> L52
            r5.<init>(r1)     // Catch: org.json.JSONException -> L45 java.lang.Throwable -> L52
            java.util.List<com.kwad.sdk.core.report.s> r0 = r4.asC     // Catch: org.json.JSONException -> L45 java.lang.Throwable -> L52
            int r0 = r0.size()     // Catch: org.json.JSONException -> L45 java.lang.Throwable -> L52
            int r0 = r0 - r3
            if (r0 < 0) goto L3e
            java.util.List<com.kwad.sdk.core.report.s> r1 = r4.asC     // Catch: org.json.JSONException -> L45 java.lang.Throwable -> L52
            java.lang.Object r0 = r1.get(r0)     // Catch: org.json.JSONException -> L45 java.lang.Throwable -> L52
            com.kwad.sdk.core.report.s r0 = (com.kwad.sdk.core.report.s) r0     // Catch: org.json.JSONException -> L45 java.lang.Throwable -> L52
            com.kwad.sdk.core.report.r r5 = r0.h(r5)     // Catch: org.json.JSONException -> L45 java.lang.Throwable -> L52
            monitor-exit(r4)
            return r5
        L3e:
            com.kwad.sdk.core.report.r r0 = new com.kwad.sdk.core.report.r     // Catch: org.json.JSONException -> L45 java.lang.Throwable -> L52
            r0.<init>(r5)     // Catch: org.json.JSONException -> L45 java.lang.Throwable -> L52
            monitor-exit(r4)
            return r0
        L45:
            r5 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r5)     // Catch: java.lang.Throwable -> L52
            com.kwad.sdk.core.report.r r5 = new com.kwad.sdk.core.report.r     // Catch: java.lang.Throwable -> L52
            java.lang.String r0 = ""
            r5.<init>(r0)     // Catch: java.lang.Throwable -> L52
            monitor-exit(r4)
            return r5
        L52:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    @Override
    protected final java.lang.String BV() {
            r1 = this;
            java.lang.String r0 = "ksad_actions"
            return r0
    }

    @Override
    protected final java.lang.String BW() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "select aLog, actionId from "
            r0.<init>(r1)
            java.lang.String r1 = r2.BV()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    protected final com.kwad.sdk.core.report.g g(android.database.Cursor r1) {
            r0 = this;
            com.kwad.sdk.core.report.r r1 = r0.h(r1)
            return r1
    }

    @Override
    protected final java.lang.String getTag() {
            r1 = this;
            java.lang.String r0 = "ReportActionDBManager"
            return r0
    }
}
