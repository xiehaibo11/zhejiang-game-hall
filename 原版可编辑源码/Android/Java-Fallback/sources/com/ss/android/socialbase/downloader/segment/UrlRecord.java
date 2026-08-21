package com.ss.android.socialbase.downloader.segment;

class UrlRecord {
    private final java.util.concurrent.atomic.AtomicLong downloadBytes;
    private int failedTimes;
    private int hashCode;
    final java.lang.String ip;
    final java.lang.String ipFamily;
    private boolean isCurrentFailed;
    final boolean isMainUrl;
    private java.lang.String key;
    private final java.util.List<com.ss.android.socialbase.downloader.segment.SegmentReader> readers;
    final java.lang.String url;

    public UrlRecord(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.readers = r0
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r0.<init>()
            r1.downloadBytes = r0
            r1.url = r2
            r2 = 0
            r1.isMainUrl = r2
            r1.ip = r3
            java.lang.String r2 = r1.getIpFamily(r3)
            r1.ipFamily = r2
            return
    }

    public UrlRecord(java.lang.String r2, boolean r3) {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.readers = r0
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r0.<init>()
            r1.downloadBytes = r0
            r1.url = r2
            r1.isMainUrl = r3
            r2 = 0
            r1.ip = r2
            r1.ipFamily = r2
            return
    }

    private java.lang.String getIpFamily(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L1e
            java.lang.String r0 = "."
            int r0 = r3.lastIndexOf(r0)     // Catch: java.lang.Throwable -> L1a
            if (r0 <= 0) goto L1e
            int r1 = r3.length()     // Catch: java.lang.Throwable -> L1a
            if (r0 >= r1) goto L1e
            r1 = 0
            java.lang.String r3 = r3.substring(r1, r0)     // Catch: java.lang.Throwable -> L1a
            return r3
        L1a:
            r3 = move-exception
            r3.printStackTrace()
        L1e:
            r3 = 0
            return r3
    }

    private java.lang.String getKey() {
            r3 = this;
            java.lang.String r0 = r3.key
            if (r0 != 0) goto L2a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.url
            r0.append(r1)
            java.lang.String r1 = "_"
            r0.append(r1)
            java.lang.String r2 = r3.ip
            if (r2 != 0) goto L19
            java.lang.String r2 = ""
        L19:
            r0.append(r2)
            r0.append(r1)
            boolean r1 = r3.isMainUrl
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.key = r0
        L2a:
            java.lang.String r0 = r3.key
            return r0
    }

    public boolean equals(java.lang.Object r2) {
            r1 = this;
            if (r1 != r2) goto L4
            r2 = 1
            return r2
        L4:
            boolean r0 = r2 instanceof com.ss.android.socialbase.downloader.segment.UrlRecord
            if (r0 != 0) goto La
            r2 = 0
            return r2
        La:
            java.lang.String r0 = r1.getKey()
            com.ss.android.socialbase.downloader.segment.UrlRecord r2 = (com.ss.android.socialbase.downloader.segment.UrlRecord) r2
            java.lang.String r2 = r2.getKey()
            boolean r2 = r0.equals(r2)
            return r2
    }

    public synchronized int getCurrentUsers() {
            r1 = this;
            monitor-enter(r1)
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentReader> r0 = r1.readers     // Catch: java.lang.Throwable -> L9
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)
            return r0
        L9:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public long getDownloadBytes() {
            r5 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r5.downloadBytes
            long r0 = r0.get()
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentReader> r2 = r5.readers
            java.util.Iterator r2 = r2.iterator()
        Lc:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L1e
            java.lang.Object r3 = r2.next()
            com.ss.android.socialbase.downloader.segment.SegmentReader r3 = (com.ss.android.socialbase.downloader.segment.SegmentReader) r3
            long r3 = r3.getReadingBytes()
            long r0 = r0 + r3
            goto Lc
        L1e:
            return r0
    }

    public int hashCode() {
            r1 = this;
            int r0 = r1.hashCode
            if (r0 != 0) goto Le
            java.lang.String r0 = r1.getKey()
            int r0 = r0.hashCode()
            r1.hashCode = r0
        Le:
            int r0 = r1.hashCode
            return r0
    }

    public void increaseDownloadBytes(long r2) {
            r1 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r1.downloadBytes
            r0.addAndGet(r2)
            return
    }

    public synchronized boolean isCurrentFailed() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.isCurrentFailed     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized void recordFailed() {
            r2 = this;
            monitor-enter(r2)
            int r0 = r2.failedTimes     // Catch: java.lang.Throwable -> Lb
            r1 = 1
            int r0 = r0 + r1
            r2.failedTimes = r0     // Catch: java.lang.Throwable -> Lb
            r2.isCurrentFailed = r1     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r2)
            return
        Lb:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public synchronized void recordSucceed() {
            r1 = this;
            monitor-enter(r1)
            r0 = 0
            r1.isCurrentFailed = r0     // Catch: java.lang.Throwable -> L6
            monitor-exit(r1)
            return
        L6:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized void recordUnUse(com.ss.android.socialbase.downloader.segment.SegmentReader r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentReader> r0 = r1.readers     // Catch: java.lang.Throwable -> L6
            r0.remove(r2)     // Catch: java.lang.Throwable -> L6
        L6:
            monitor-exit(r1)
            return
    }

    public synchronized void recordUse(com.ss.android.socialbase.downloader.segment.SegmentReader r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.List<com.ss.android.socialbase.downloader.segment.SegmentReader> r0 = r1.readers     // Catch: java.lang.Throwable -> L8
            r0.add(r2)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "UrlRecord{url='"
            r0.append(r1)
            java.lang.String r1 = r3.url
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", ip='"
            r0.append(r2)
            java.lang.String r2 = r3.ip
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", ipFamily='"
            r0.append(r2)
            java.lang.String r2 = r3.ipFamily
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = ", isMainUrl="
            r0.append(r1)
            boolean r1 = r3.isMainUrl
            r0.append(r1)
            java.lang.String r1 = ", failedTimes="
            r0.append(r1)
            int r1 = r3.failedTimes
            r0.append(r1)
            java.lang.String r1 = ", isCurrentFailed="
            r0.append(r1)
            boolean r1 = r3.isCurrentFailed
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
