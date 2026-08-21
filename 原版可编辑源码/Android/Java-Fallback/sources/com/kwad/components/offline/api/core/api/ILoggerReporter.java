package com.kwad.components.offline.api.core.api;

public interface ILoggerReporter {

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface Category {
        public static final java.lang.String APM_LOG = "ad_client_apm_log";
        public static final java.lang.String ERROR_LOG = "ad_client_error_log";
    }

    void reportEvent(java.lang.String r1, com.kwai.adclient.kscommerciallogger.model.BusinessType r2, java.lang.String r3, org.json.JSONObject r4);
}
