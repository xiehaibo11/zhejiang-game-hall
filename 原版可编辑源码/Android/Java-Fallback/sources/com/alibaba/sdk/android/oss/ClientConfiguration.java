package com.alibaba.sdk.android.oss;

public class ClientConfiguration {
    private static final int DEFAULT_MAX_RETRIES = 2;
    private boolean checkCRC64;
    private int connectionTimeout;
    private java.util.List<java.lang.String> customCnameExcludeList;
    private boolean customPathPrefixEnable;
    private boolean httpDnsEnable;
    private java.lang.String ipWithHeader;
    private java.lang.String mUserAgentMark;
    private int maxConcurrentRequest;
    private int maxErrorRetry;
    private long max_log_size;
    private boolean pathStyleAccessEnable;
    private java.lang.String proxyHost;
    private int proxyPort;
    private int socketTimeout;

    public ClientConfiguration() {
            r2 = this;
            r2.<init>()
            r0 = 5
            r2.maxConcurrentRequest = r0
            r0 = 60000(0xea60, float:8.4078E-41)
            r2.socketTimeout = r0
            r2.connectionTimeout = r0
            r0 = 5242880(0x500000, double:2.590327E-317)
            r2.max_log_size = r0
            r0 = 2
            r2.maxErrorRetry = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.customCnameExcludeList = r0
            r0 = 1
            r2.httpDnsEnable = r0
            r0 = 0
            r2.checkCRC64 = r0
            r2.pathStyleAccessEnable = r0
            r2.customPathPrefixEnable = r0
            return
    }

    public static com.alibaba.sdk.android.oss.ClientConfiguration getDefaultConf() {
            com.alibaba.sdk.android.oss.ClientConfiguration r0 = new com.alibaba.sdk.android.oss.ClientConfiguration
            r0.<init>()
            return r0
    }

    public int getConnectionTimeout() {
            r1 = this;
            int r0 = r1.connectionTimeout
            return r0
    }

    public java.util.List<java.lang.String> getCustomCnameExcludeList() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.customCnameExcludeList
            java.util.List r0 = java.util.Collections.unmodifiableList(r0)
            return r0
    }

    public java.lang.String getCustomUserMark() {
            r1 = this;
            java.lang.String r0 = r1.mUserAgentMark
            return r0
    }

    public java.lang.String getIpWithHeader() {
            r1 = this;
            java.lang.String r0 = r1.ipWithHeader
            return r0
    }

    public int getMaxConcurrentRequest() {
            r1 = this;
            int r0 = r1.maxConcurrentRequest
            return r0
    }

    public int getMaxErrorRetry() {
            r1 = this;
            int r0 = r1.maxErrorRetry
            return r0
    }

    public long getMaxLogSize() {
            r2 = this;
            long r0 = r2.max_log_size
            return r0
    }

    public java.lang.String getProxyHost() {
            r1 = this;
            java.lang.String r0 = r1.proxyHost
            return r0
    }

    public int getProxyPort() {
            r1 = this;
            int r0 = r1.proxyPort
            return r0
    }

    public int getSocketTimeout() {
            r1 = this;
            int r0 = r1.socketTimeout
            return r0
    }

    public boolean isCheckCRC64() {
            r1 = this;
            boolean r0 = r1.checkCRC64
            return r0
    }

    public boolean isCustomPathPrefixEnable() {
            r1 = this;
            boolean r0 = r1.customPathPrefixEnable
            return r0
    }

    public boolean isHttpDnsEnable() {
            r1 = this;
            boolean r0 = r1.httpDnsEnable
            return r0
    }

    public boolean isPathStyleAccessEnable() {
            r1 = this;
            boolean r0 = r1.pathStyleAccessEnable
            return r0
    }

    public void setCheckCRC64(boolean r1) {
            r0 = this;
            r0.checkCRC64 = r1
            return
    }

    public void setConnectionTimeout(int r1) {
            r0 = this;
            r0.connectionTimeout = r1
            return
    }

    public void setCustomCnameExcludeList(java.util.List<java.lang.String> r4) {
            r3 = this;
            if (r4 == 0) goto L3c
            int r0 = r4.size()
            if (r0 == 0) goto L3c
            java.util.List<java.lang.String> r0 = r3.customCnameExcludeList
            r0.clear()
            java.util.Iterator r4 = r4.iterator()
        L11:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L3b
            java.lang.Object r0 = r4.next()
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = "://"
            boolean r2 = r0.contains(r1)
            if (r2 == 0) goto L35
            java.util.List<java.lang.String> r2 = r3.customCnameExcludeList
            int r1 = r0.indexOf(r1)
            int r1 = r1 + 3
            java.lang.String r0 = r0.substring(r1)
            r2.add(r0)
            goto L11
        L35:
            java.util.List<java.lang.String> r1 = r3.customCnameExcludeList
            r1.add(r0)
            goto L11
        L3b:
            return
        L3c:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "cname exclude list should not be null."
            r4.<init>(r0)
            goto L45
        L44:
            throw r4
        L45:
            goto L44
    }

    public void setCustomPathPrefixEnable(boolean r1) {
            r0 = this;
            r0.customPathPrefixEnable = r1
            return
    }

    public void setHttpDnsEnable(boolean r1) {
            r0 = this;
            r0.httpDnsEnable = r1
            return
    }

    public void setIpWithHeader(java.lang.String r1) {
            r0 = this;
            r0.ipWithHeader = r1
            return
    }

    public void setMaxConcurrentRequest(int r1) {
            r0 = this;
            r0.maxConcurrentRequest = r1
            return
    }

    public void setMaxErrorRetry(int r1) {
            r0 = this;
            r0.maxErrorRetry = r1
            return
    }

    public void setMaxLogSize(long r1) {
            r0 = this;
            r0.max_log_size = r1
            return
    }

    public void setPathStyleAccessEnable(boolean r1) {
            r0 = this;
            r0.pathStyleAccessEnable = r1
            return
    }

    public void setProxyHost(java.lang.String r1) {
            r0 = this;
            r0.proxyHost = r1
            return
    }

    public void setProxyPort(int r1) {
            r0 = this;
            r0.proxyPort = r1
            return
    }

    public void setSocketTimeout(int r1) {
            r0 = this;
            r0.socketTimeout = r1
            return
    }

    public void setUserAgentMark(java.lang.String r1) {
            r0 = this;
            r0.mUserAgentMark = r1
            return
    }
}
