package com.ss.android.socialbase.downloader.network;

public abstract class AbsDownloadHttpConnection implements com.ss.android.socialbase.downloader.network.IDownloadHttpConnection {
    public AbsDownloadHttpConnection() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getHostIp() {
            r1 = this;
            java.lang.String r0 = ""
            return r0
    }

    public java.lang.String getRequestLog() {
            r1 = this;
            java.lang.String r0 = ""
            return r0
    }

    public void monitorNetworkInfo(org.json.JSONObject r1, boolean r2) {
            r0 = this;
            return
    }

    public void onThrowable(java.lang.Throwable r1) {
            r0 = this;
            return
    }

    public void setThrottleNetSpeedWhenRunning(long r1) {
            r0 = this;
            return
    }
}
