package com.kwad.components.offline.api.tk;

public final class TkLoggerReporter {

    static class 1 {
    }

    static final class Holder {
        private static final com.kwad.components.offline.api.tk.TkLoggerReporter sInstance = null;

        static {
                com.kwad.components.offline.api.tk.TkLoggerReporter r0 = new com.kwad.components.offline.api.tk.TkLoggerReporter
                r1 = 0
                r0.<init>(r1)
                com.kwad.components.offline.api.tk.TkLoggerReporter.Holder.sInstance = r0
                return
        }

        private Holder() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.kwad.components.offline.api.tk.TkLoggerReporter access$100() {
                com.kwad.components.offline.api.tk.TkLoggerReporter r0 = com.kwad.components.offline.api.tk.TkLoggerReporter.Holder.sInstance
                return r0
        }
    }

    private TkLoggerReporter() {
            r0 = this;
            r0.<init>()
            return
    }

    TkLoggerReporter(com.kwad.components.offline.api.tk.TkLoggerReporter.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.components.offline.api.tk.TkLoggerReporter get() {
            com.kwad.components.offline.api.tk.TkLoggerReporter r0 = com.kwad.components.offline.api.tk.TkLoggerReporter.Holder.access$100()
            return r0
    }

    private void reportEvent(java.lang.String r3, java.lang.String r4, org.json.JSONObject r5) {
            r2 = this;
            com.kwad.components.offline.api.core.IOfflineHostApi r0 = com.kwad.components.offline.api.OfflineHostProvider.getApi()
            com.kwad.components.offline.api.core.api.ILoggerReporter r0 = r0.loggerReporter()
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.TACHIKOMA
            r0.reportEvent(r3, r1, r4, r5)
            return
    }

    public final void reportTKDownload(java.lang.String r2, org.json.JSONObject r3) {
            r1 = this;
            java.lang.String r0 = "ad_tk_download_performance"
            r1.reportEvent(r2, r0, r3)
            return
    }

    public final void reportTKPerform(java.lang.String r2, org.json.JSONObject r3) {
            r1 = this;
            java.lang.String r0 = "ad_tk_render_performance"
            r1.reportEvent(r2, r0, r3)
            return
    }

    public final void reportTKSODownload(java.lang.String r2, org.json.JSONObject r3) {
            r1 = this;
            java.lang.String r0 = "ad_tk_so_download_event"
            r1.reportEvent(r2, r0, r3)
            return
    }

    public final void reportTKSOLoad(java.lang.String r2, org.json.JSONObject r3) {
            r1 = this;
            java.lang.String r0 = "ad_tk_so_load_performence"
            r1.reportEvent(r2, r0, r3)
            return
    }
}
