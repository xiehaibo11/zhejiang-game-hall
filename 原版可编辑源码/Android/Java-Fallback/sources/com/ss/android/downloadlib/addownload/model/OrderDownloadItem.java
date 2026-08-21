package com.ss.android.downloadlib.addownload.model;

public class OrderDownloadItem {
    public com.ss.android.downloadad.api.download.AdDownloadEventConfig c;
    public java.lang.String df;
    public boolean fw;
    public com.ss.android.downloadad.api.download.AdDownloadModel pp;
    public long pt;
    public int q;
    public java.lang.String rg;

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface OrderCheckStatus {
        public static final int DELETE_LATE_ORDER = 5;
        public static final int INSTALLED = 2;
        public static final int NORMAL = 1;
        public static final int NO_WIFI_PARAM = 4;
        public static final int REPEAT_DOWNLOAD = 3;
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface OrderStatus {
        public static final int HANDLE_FAILED = -2;
        public static final int ORDERING = 0;
        public static final int ORDER_CANCEL = 2;
        public static final int ORDER_OVERDUE = 3;
        public static final int QUERY_FAILED = -1;
        public static final int SHELVED = 1;
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "OrderDownloadItem{bizType='"
            r0.append(r1)
            java.lang.String r1 = r3.rg
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", orderId='"
            r0.append(r2)
            java.lang.String r2 = r3.df
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = ", orderStatus="
            r0.append(r1)
            int r1 = r3.q
            r0.append(r1)
            java.lang.String r1 = ", nextRequestInterval="
            r0.append(r1)
            long r1 = r3.pt
            r0.append(r1)
            java.lang.String r1 = ", downloadModel="
            r0.append(r1)
            com.ss.android.downloadad.api.download.AdDownloadModel r1 = r3.pp
            r0.append(r1)
            java.lang.String r1 = ", eventConfig="
            r0.append(r1)
            com.ss.android.downloadad.api.download.AdDownloadEventConfig r1 = r3.c
            r0.append(r1)
            java.lang.String r1 = ", enableDownload="
            r0.append(r1)
            boolean r1 = r3.fw
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
