package com.ss.android.downloadlib.addownload.model;

import com.ss.android.downloadad.api.download.AdDownloadEventConfig;
import com.ss.android.downloadad.api.download.AdDownloadModel;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

public class OrderDownloadItem {
    public AdDownloadEventConfig c;
    public String df;
    public boolean fw;
    public AdDownloadModel pp;
    public long pt;
    public int q;
    public String rg;

    @Retention(RetentionPolicy.SOURCE)
    public @interface OrderCheckStatus {
        public static final int DELETE_LATE_ORDER = 5;
        public static final int INSTALLED = 2;
        public static final int NORMAL = 1;
        public static final int NO_WIFI_PARAM = 4;
        public static final int REPEAT_DOWNLOAD = 3;
    }

    @Retention(RetentionPolicy.SOURCE)
    public @interface OrderStatus {
        public static final int HANDLE_FAILED = -2;
        public static final int ORDERING = 0;
        public static final int ORDER_CANCEL = 2;
        public static final int ORDER_OVERDUE = 3;
        public static final int QUERY_FAILED = -1;
        public static final int SHELVED = 1;
    }

    public String toString() {
        return "OrderDownloadItem{bizType='" + this.rg + "', orderId='" + this.df + "', orderStatus=" + this.q + ", nextRequestInterval=" + this.pt + ", downloadModel=" + this.pp + ", eventConfig=" + this.c + ", enableDownload=" + this.fw + '}';
    }
}
