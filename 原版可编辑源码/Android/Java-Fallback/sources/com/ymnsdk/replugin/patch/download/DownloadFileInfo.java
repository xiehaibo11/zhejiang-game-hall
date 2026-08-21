package com.ymnsdk.replugin.patch.download;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class DownloadFileInfo implements java.io.Serializable {
    private java.lang.String fileName;
    private java.lang.String hash;
    private int networkRetryCount;
    private int retryCount;
    private java.util.ArrayList<java.lang.Integer> roadmap;
    private java.lang.String savePath;
    private long savedSize;
    private long totalSize;
    private java.lang.String url;
    private boolean valid;

    public DownloadFileInfo() {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.hash = r0
            r3.fileName = r0
            r3.savePath = r0
            r3.url = r0
            r1 = 0
            r3.savedSize = r1
            r3.totalSize = r1
            r1 = 0
            r3.retryCount = r1
            r3.networkRetryCount = r1
            r1 = 1
            r3.valid = r1
            r3.roadmap = r0
            return
    }

    public void addNetworkRetryCount() {
            r1 = this;
            int r0 = r1.networkRetryCount
            int r0 = r0 + 1
            r1.networkRetryCount = r0
            return
    }

    public void addRetryCount() {
            r1 = this;
            int r0 = r1.retryCount
            int r0 = r0 + 1
            r1.retryCount = r0
            return
    }

    public void addRoadMap(com.ymnsdk.replugin.patch.download.DownloadCode.Code r2) {
            r1 = this;
            java.util.ArrayList<java.lang.Integer> r0 = r1.roadmap
            if (r0 != 0) goto Lb
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.roadmap = r0
        Lb:
            java.util.ArrayList<java.lang.Integer> r0 = r1.roadmap
            int r2 = r2.ordinal()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0.add(r2)
            return
    }

    public boolean addSavedSize(long r3) {
            r2 = this;
            long r0 = r2.savedSize
            long r0 = r0 + r3
            r2.savedSize = r0
            r3 = 1
            return r3
    }

    public java.lang.String getHash() {
            r1 = this;
            java.lang.String r0 = r1.hash
            return r0
    }

    public int getNetworkRetryCount() {
            r1 = this;
            int r0 = r1.networkRetryCount
            return r0
    }

    public int getRetryCount() {
            r1 = this;
            int r0 = r1.retryCount
            return r0
    }

    public java.util.ArrayList<java.lang.Integer> getRoadmap() {
            r1 = this;
            java.util.ArrayList<java.lang.Integer> r0 = r1.roadmap
            return r0
    }

    public java.lang.String getSaveCachePath() {
            r2 = this;
            java.lang.String r0 = r2.savePath
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto Ld
            return r1
        Ld:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.savePath
            r0.append(r1)
            java.lang.String r1 = ".cache"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public java.lang.String getSavePath() {
            r1 = this;
            java.lang.String r0 = r1.savePath
            return r0
    }

    public long getSavedSize() {
            r2 = this;
            long r0 = r2.savedSize
            return r0
    }

    public long getTotalSize() {
            r2 = this;
            long r0 = r2.totalSize
            return r0
    }

    public java.lang.String getURL() {
            r1 = this;
            java.lang.String r0 = r1.url
            return r0
    }

    public boolean getValid() {
            r1 = this;
            boolean r0 = r1.valid
            return r0
    }

    public synchronized boolean setHash(java.lang.String r1) {
            r0 = this;
            monitor-enter(r0)
            r0.hash = r1     // Catch: java.lang.Throwable -> L6
            r1 = 1
            monitor-exit(r0)
            return r1
        L6:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public void setNetworkRetryCount(int r1) {
            r0 = this;
            r0.networkRetryCount = r1
            return
    }

    public void setRetryCount(int r1) {
            r0 = this;
            r0.retryCount = r1
            return
    }

    public synchronized boolean setSavePath(java.lang.String r3) {
            r2 = this;
            monitor-enter(r2)
            r2.savePath = r3     // Catch: java.lang.Throwable -> L20
            java.lang.String r0 = "\\"
            java.lang.String r1 = "/"
            java.lang.String r3 = r3.replace(r0, r1)     // Catch: java.lang.Throwable -> L20
            java.lang.String r0 = "/"
            java.lang.String[] r3 = r3.split(r0)     // Catch: java.lang.Throwable -> L20
            int r0 = r3.length     // Catch: java.lang.Throwable -> L20
            if (r0 > 0) goto L17
            r3 = 0
            monitor-exit(r2)
            return r3
        L17:
            int r0 = r3.length     // Catch: java.lang.Throwable -> L20
            r1 = 1
            int r0 = r0 - r1
            r3 = r3[r0]     // Catch: java.lang.Throwable -> L20
            r2.fileName = r3     // Catch: java.lang.Throwable -> L20
            monitor-exit(r2)
            return r1
        L20:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public boolean setSavedSize(long r1) {
            r0 = this;
            r0.savedSize = r1
            r1 = 1
            return r1
    }

    public boolean setTotalSize(long r1) {
            r0 = this;
            r0.totalSize = r1
            r1 = 1
            return r1
    }

    public synchronized boolean setURL(java.lang.String r1) {
            r0 = this;
            monitor-enter(r0)
            r0.url = r1     // Catch: java.lang.Throwable -> L6
            r1 = 1
            monitor-exit(r0)
            return r1
        L6:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public void setValid(boolean r1) {
            r0 = this;
            r0.valid = r1
            return
    }
}
