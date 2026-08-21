package com.kwad.components.offline.api.core.api;

public interface INet {
    public static final int HTTP_STATUS_CODE_INVALID = -1;

    public @interface HostType {
        public static final java.lang.String API = "api";
        public static final java.lang.String CDN = "cdn";
        public static final java.lang.String ULOG = "ulog";
        public static final java.lang.String ZT = "zt";
    }

    int getActiveNetworkType(android.content.Context r1);

    java.lang.String getCurrHost(java.lang.String r1, java.lang.String r2);

    void handleSwitchHost(java.lang.String r1, java.lang.String r2, int r3, java.lang.Throwable r4);

    boolean isMobileConnected(android.content.Context r1);

    boolean isNetworkConnected(android.content.Context r1);

    boolean isWifiConnected(android.content.Context r1);
}
