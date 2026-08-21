package com.kwad.sdk.crash.online.monitor.block.report;

public class a extends com.kwad.sdk.core.report.e {
    public static int If = 1;
    private static volatile com.kwad.sdk.crash.online.monitor.block.report.a aAS;

    static {
            return
    }

    private a(android.content.Context r3) {
            r2 = this;
            com.kwad.sdk.crash.online.monitor.block.a.a r0 = new com.kwad.sdk.crash.online.monitor.block.a.a
            int r1 = com.kwad.sdk.crash.online.monitor.block.report.a.If
            r0.<init>(r3, r1)
            r2.<init>(r0)
            return
    }

    public static com.kwad.sdk.crash.online.monitor.block.report.a bw(android.content.Context r2) {
            com.kwad.sdk.crash.online.monitor.block.report.a r0 = com.kwad.sdk.crash.online.monitor.block.report.a.aAS
            if (r0 != 0) goto L17
            java.lang.Class<com.kwad.sdk.crash.online.monitor.block.report.a> r0 = com.kwad.sdk.crash.online.monitor.block.report.a.class
            monitor-enter(r0)
            com.kwad.sdk.crash.online.monitor.block.report.a r1 = com.kwad.sdk.crash.online.monitor.block.report.a.aAS     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.sdk.crash.online.monitor.block.report.a r1 = new com.kwad.sdk.crash.online.monitor.block.report.a     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.kwad.sdk.crash.online.monitor.block.report.a.aAS = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.kwad.sdk.crash.online.monitor.block.report.a r2 = com.kwad.sdk.crash.online.monitor.block.report.a.aAS
            return r2
    }

    private synchronized com.kwad.sdk.crash.online.monitor.block.report.BlockReportAction j(android.database.Cursor r2) {
            r1 = this;
            monitor-enter(r1)
            r0 = 0
            java.lang.String r2 = r2.getString(r0)     // Catch: java.lang.Throwable -> L1f
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L12 java.lang.Throwable -> L1f
            r0.<init>(r2)     // Catch: org.json.JSONException -> L12 java.lang.Throwable -> L1f
            com.kwad.sdk.crash.online.monitor.block.report.BlockReportAction r2 = new com.kwad.sdk.crash.online.monitor.block.report.BlockReportAction     // Catch: org.json.JSONException -> L12 java.lang.Throwable -> L1f
            r2.<init>(r0)     // Catch: org.json.JSONException -> L12 java.lang.Throwable -> L1f
            monitor-exit(r1)
            return r2
        L12:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r2)     // Catch: java.lang.Throwable -> L1f
            com.kwad.sdk.crash.online.monitor.block.report.BlockReportAction r2 = new com.kwad.sdk.crash.online.monitor.block.report.BlockReportAction     // Catch: java.lang.Throwable -> L1f
            java.lang.String r0 = ""
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L1f
            monitor-exit(r1)
            return r2
        L1f:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public final java.lang.String BV() {
            r1 = this;
            java.lang.String r0 = "ksad_block_actions"
            return r0
    }

    @Override
    public final java.lang.String BW() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "select aLog from "
            r0.<init>(r1)
            java.lang.String r1 = r2.BV()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public final com.kwad.sdk.core.report.g g(android.database.Cursor r1) {
            r0 = this;
            com.kwad.sdk.crash.online.monitor.block.report.BlockReportAction r1 = r0.j(r1)
            return r1
    }

    @Override
    public final java.lang.String getTag() {
            r1 = this;
            java.lang.String r0 = "perfMonitor.BlockReportDBManager"
            return r0
    }
}
