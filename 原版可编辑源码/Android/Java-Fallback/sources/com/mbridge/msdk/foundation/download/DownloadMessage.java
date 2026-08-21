package com.mbridge.msdk.foundation.download;

public class DownloadMessage<T> {
    private T campaign;
    private boolean checkMD5;
    private int downloadRate;
    private com.mbridge.msdk.foundation.download.DownloadResourceType downloadResourceType;
    private java.lang.String downloadUrl;
    private java.util.Map<java.lang.String, java.lang.Object> extraData;
    private int from;
    private java.lang.String md5;
    private java.lang.String resourceUrl;
    private java.lang.String saveFileName;
    private java.lang.String saveFilePath;

    public DownloadMessage(T r4, java.lang.String r5, java.lang.String r6, int r7, com.mbridge.msdk.foundation.download.DownloadResourceType r8) {
            r3 = this;
            r3.<init>()
            java.lang.String r0 = ""
            r3.md5 = r0
            r1 = 0
            r3.checkMD5 = r1
            r2 = 100
            r3.downloadRate = r2
            r3.from = r1
            r3.campaign = r4
            r3.downloadUrl = r5
            r3.saveFileName = r6
            r3.downloadRate = r7
            r3.downloadResourceType = r8
            java.net.URL r4 = new java.net.URL     // Catch: java.net.MalformedURLException -> L65
            r4.<init>(r5)     // Catch: java.net.MalformedURLException -> L65
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.net.MalformedURLException -> L65
            r5.<init>()     // Catch: java.net.MalformedURLException -> L65
            java.lang.String r6 = r4.getProtocol()     // Catch: java.net.MalformedURLException -> L65
            r5.append(r6)     // Catch: java.net.MalformedURLException -> L65
            java.lang.String r6 = "://"
            r5.append(r6)     // Catch: java.net.MalformedURLException -> L65
            java.lang.String r6 = r4.getHost()     // Catch: java.net.MalformedURLException -> L65
            r5.append(r6)     // Catch: java.net.MalformedURLException -> L65
            java.lang.String r4 = r4.getPath()     // Catch: java.net.MalformedURLException -> L65
            r5.append(r4)     // Catch: java.net.MalformedURLException -> L65
            java.lang.String r4 = r5.toString()     // Catch: java.net.MalformedURLException -> L65
            r3.resourceUrl = r4     // Catch: java.net.MalformedURLException -> L65
            com.mbridge.msdk.foundation.download.core.GlobalComponent r4 = com.mbridge.msdk.foundation.download.core.GlobalComponent.getInstance()     // Catch: java.net.MalformedURLException -> L65
            com.mbridge.msdk.foundation.download.utils.ILogger r4 = r4.getLogger()     // Catch: java.net.MalformedURLException -> L65
            java.lang.String r5 = "DownloadMessage"
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.net.MalformedURLException -> L65
            r6.<init>()     // Catch: java.net.MalformedURLException -> L65
            java.lang.String r7 = " resourceUrl: "
            r6.append(r7)     // Catch: java.net.MalformedURLException -> L65
            java.lang.String r7 = r3.resourceUrl     // Catch: java.net.MalformedURLException -> L65
            r6.append(r7)     // Catch: java.net.MalformedURLException -> L65
            java.lang.String r6 = r6.toString()     // Catch: java.net.MalformedURLException -> L65
            r4.log(r5, r6)     // Catch: java.net.MalformedURLException -> L65
            goto L67
        L65:
            r3.resourceUrl = r0
        L67:
            return
    }

    public void addExtra(java.lang.String r3, java.lang.Object r4) {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.extraData
            if (r0 != 0) goto Lc
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 4
            r0.<init>(r1)
            r2.extraData = r0
        Lc:
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.extraData
            r0.put(r3, r4)
            return
    }

    public T getCampaign() {
            r1 = this;
            T r0 = r1.campaign
            return r0
    }

    public int getDownloadRate() {
            r1 = this;
            int r0 = r1.downloadRate
            return r0
    }

    public com.mbridge.msdk.foundation.download.DownloadResourceType getDownloadResourceType() {
            r1 = this;
            com.mbridge.msdk.foundation.download.DownloadResourceType r0 = r1.downloadResourceType
            return r0
    }

    public java.lang.String getDownloadUrl() {
            r1 = this;
            java.lang.String r0 = r1.downloadUrl
            return r0
    }

    public java.lang.Object getExtra(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.extraData
            if (r0 == 0) goto L11
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L11
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.extraData
            java.lang.Object r2 = r0.get(r2)
            return r2
        L11:
            r2 = 0
            return r2
    }

    public int getFrom() {
            r1 = this;
            int r0 = r1.from
            return r0
    }

    public java.lang.String getMd5() {
            r1 = this;
            java.lang.String r0 = r1.md5
            return r0
    }

    public java.lang.String getResourceUrl() {
            r1 = this;
            java.lang.String r0 = r1.resourceUrl
            return r0
    }

    public java.lang.String getSaveFileName() {
            r1 = this;
            java.lang.String r0 = r1.saveFileName
            return r0
    }

    public java.lang.String getSaveFilePath() {
            r1 = this;
            java.lang.String r0 = r1.saveFilePath
            return r0
    }

    public boolean isCheckMD5() {
            r1 = this;
            boolean r0 = r1.checkMD5
            return r0
    }

    public void setCheckMD5(boolean r1) {
            r0 = this;
            r0.checkMD5 = r1
            return
    }

    public void setDownloadRate(int r1) {
            r0 = this;
            r0.downloadRate = r1
            return
    }

    public void setFrom(int r1) {
            r0 = this;
            r0.from = r1
            return
    }

    public void setMd5(java.lang.String r1) {
            r0 = this;
            r0.md5 = r1
            return
    }

    public void setSaveFilePath(java.lang.String r1) {
            r0 = this;
            r0.saveFilePath = r1
            return
    }
}
