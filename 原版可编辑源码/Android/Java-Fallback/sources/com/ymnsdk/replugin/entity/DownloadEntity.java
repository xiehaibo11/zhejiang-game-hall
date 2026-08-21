package com.ymnsdk.replugin.entity;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class DownloadEntity {
    android.app.Activity activity;
    com.ymnsdk.replugin.patch.download.DownloadCallback callback;
    long downSize;
    int downloadType;
    java.lang.String downloadUri;
    java.lang.String md5;
    int noNetTimeout;
    java.lang.String pluginId;
    int weaknetTimeout;

    public DownloadEntity() {
            r0 = this;
            r0.<init>()
            return
    }

    public DownloadEntity(android.app.Activity r1, java.lang.String r2, java.lang.String r3, int r4, long r5, java.lang.String r7, int r8, int r9, com.ymnsdk.replugin.patch.download.DownloadCallback r10) {
            r0 = this;
            r0.<init>()
            r0.activity = r1
            r0.pluginId = r2
            r0.downloadUri = r3
            r0.downloadType = r4
            r0.downSize = r5
            r0.md5 = r7
            r0.noNetTimeout = r8
            r0.weaknetTimeout = r9
            r0.callback = r10
            return
    }

    public android.app.Activity getActivity() {
            r1 = this;
            android.app.Activity r0 = r1.activity
            return r0
    }

    public com.ymnsdk.replugin.patch.download.DownloadCallback getCallback() {
            r1 = this;
            com.ymnsdk.replugin.patch.download.DownloadCallback r0 = r1.callback
            return r0
    }

    public long getDownSize() {
            r2 = this;
            long r0 = r2.downSize
            return r0
    }

    public int getDownloadType() {
            r1 = this;
            int r0 = r1.downloadType
            return r0
    }

    public java.lang.String getDownloadUri() {
            r1 = this;
            java.lang.String r0 = r1.downloadUri
            return r0
    }

    public java.lang.String getMd5() {
            r1 = this;
            java.lang.String r0 = r1.md5
            return r0
    }

    public int getNoNetTimeout() {
            r1 = this;
            int r0 = r1.noNetTimeout
            return r0
    }

    public java.lang.String getPluginId() {
            r1 = this;
            java.lang.String r0 = r1.pluginId
            return r0
    }

    public int getWeaknetTimeout() {
            r1 = this;
            int r0 = r1.weaknetTimeout
            return r0
    }

    public void setActivity(android.app.Activity r1) {
            r0 = this;
            r0.activity = r1
            return
    }

    public void setCallback(com.ymnsdk.replugin.patch.download.DownloadCallback r1) {
            r0 = this;
            r0.callback = r1
            return
    }

    public void setDownSize(long r1) {
            r0 = this;
            r0.downSize = r1
            return
    }

    public void setDownloadType(int r1) {
            r0 = this;
            r0.downloadType = r1
            return
    }

    public void setDownloadUri(java.lang.String r1) {
            r0 = this;
            r0.downloadUri = r1
            return
    }

    public void setMd5(java.lang.String r1) {
            r0 = this;
            r0.md5 = r1
            return
    }

    public void setNoNetTimeout(int r1) {
            r0 = this;
            r0.noNetTimeout = r1
            return
    }

    public void setPluginId(java.lang.String r1) {
            r0 = this;
            r0.pluginId = r1
            return
    }

    public void setWeaknetTimeout(int r1) {
            r0 = this;
            r0.weaknetTimeout = r1
            return
    }
}
