package com.ss.android.socialbase.downloader.impls;

public class DownloadCache implements com.ss.android.socialbase.downloader.downloader.IDownloadCache {
    private final android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk>> chunkListMap;
    private final android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> downloadInfoMap;
    private final android.util.SparseArray<java.util.Map<java.lang.Long, com.ss.android.socialbase.downloader.segment.Segment>> segmentListMap;

    public DownloadCache() {
            r1 = this;
            r1.<init>()
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r1.downloadInfoMap = r0
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r1.chunkListMap = r0
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r1.segmentListMap = r0
            return
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskCancel(int r2, long r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r1.getDownloadInfo(r2)
            if (r2 == 0) goto Le
            r0 = 0
            r2.setCurBytes(r3, r0)
            r3 = -4
            r2.setStatus(r3)
        Le:
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskCompleted(int r2, long r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r1.getDownloadInfo(r2)
            if (r2 == 0) goto L14
            r0 = 0
            r2.setCurBytes(r3, r0)
            r3 = -3
            r2.setStatus(r3)
            r2.setFirstDownload(r0)
            r2.setFirstSuccess(r0)
        L14:
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskConnected(int r1, long r2, java.lang.String r4, java.lang.String r5) {
            r0 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r0.getDownloadInfo(r1)
            if (r1 == 0) goto L23
            r1.setTotalBytes(r2)
            r1.seteTag(r4)
            java.lang.String r2 = r1.getName()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L1f
            boolean r2 = android.text.TextUtils.isEmpty(r5)
            if (r2 != 0) goto L1f
            r1.setName(r5)
        L1f:
            r2 = 3
            r1.setStatus(r2)
        L23:
            return r1
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskError(int r2, long r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r1.getDownloadInfo(r2)
            if (r2 == 0) goto L11
            r0 = 0
            r2.setCurBytes(r3, r0)
            r3 = -1
            r2.setStatus(r3)
            r2.setFirstDownload(r0)
        L11:
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskIntercept(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r1.getDownloadInfo(r2)
            if (r2 == 0) goto La
            r0 = -7
            r2.setStatus(r0)
        La:
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskPause(int r2, long r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r1.getDownloadInfo(r2)
            if (r2 == 0) goto Le
            r0 = 0
            r2.setCurBytes(r3, r0)
            r3 = -2
            r2.setStatus(r3)
        Le:
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskPrepare(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r1.getDownloadInfo(r2)
            if (r2 == 0) goto La
            r0 = 1
            r2.setStatus(r0)
        La:
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskProgress(int r2, long r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r1.getDownloadInfo(r2)
            if (r2 == 0) goto L2d
            r0 = 0
            r2.setCurBytes(r3, r0)
            int r3 = r2.getStatus()
            r4 = -3
            if (r3 == r4) goto L2d
            int r3 = r2.getStatus()
            r4 = -2
            if (r3 == r4) goto L2d
            int r3 = r2.getStatus()
            boolean r3 = com.ss.android.socialbase.downloader.constants.DownloadStatus.isFailedStatus(r3)
            if (r3 != 0) goto L2d
            int r3 = r2.getStatus()
            r4 = -4
            if (r3 == r4) goto L2d
            r3 = 4
            r2.setStatus(r3)
        L2d:
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskRetry(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r1.getDownloadInfo(r2)
            if (r2 == 0) goto Le
            r0 = 5
            r2.setStatus(r0)
            r0 = 0
            r2.setFirstDownload(r0)
        Le:
            return r2
    }

    @Override
    public void addDownloadChunk(com.ss.android.socialbase.downloader.model.DownloadChunk r4) {
            r3 = this;
            int r0 = r4.getId()
            android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk>> r1 = r3.chunkListMap
            java.lang.Object r1 = r1.get(r0)
            java.util.List r1 = (java.util.List) r1
            if (r1 != 0) goto L18
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk>> r2 = r3.chunkListMap
            r2.put(r0, r1)
        L18:
            r1.add(r4)
            return
    }

    @Override
    public void addSubDownloadChunk(com.ss.android.socialbase.downloader.model.DownloadChunk r1) {
            r0 = this;
            return
    }

    @Override
    public boolean cacheExist(int r1) {
            r0 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r0.getDownloadInfo(r1)
            if (r1 == 0) goto L8
            r1 = 1
            goto L9
        L8:
            r1 = 0
        L9:
            return r1
    }

    @Override
    public synchronized void clearData() {
            r1 = this;
            monitor-enter(r1)
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r0 = r1.downloadInfoMap     // Catch: java.lang.Throwable -> Ld
            r0.clear()     // Catch: java.lang.Throwable -> Ld
            android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk>> r0 = r1.chunkListMap     // Catch: java.lang.Throwable -> Ld
            r0.clear()     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r1)
            return
        Ld:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    public boolean ensureDownloadCacheSyncSuccess() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public synchronized java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getAllDownloadInfo() {
            r3 = this;
            monitor-enter(r3)
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r0 = r3.downloadInfoMap     // Catch: java.lang.Throwable -> L32
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L32
            if (r0 != 0) goto Lc
            r0 = 0
            monitor-exit(r3)
            return r0
        Lc:
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L32
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r1 = r3.downloadInfoMap     // Catch: java.lang.Throwable -> L32
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L32
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L32
            r1 = 0
        L18:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r2 = r3.downloadInfoMap     // Catch: java.lang.Throwable -> L32
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L32
            if (r1 >= r2) goto L30
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r2 = r3.downloadInfoMap     // Catch: java.lang.Throwable -> L32
            java.lang.Object r2 = r2.valueAt(r1)     // Catch: java.lang.Throwable -> L32
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r2     // Catch: java.lang.Throwable -> L32
            if (r2 == 0) goto L2d
            r0.add(r2)     // Catch: java.lang.Throwable -> L32
        L2d:
            int r1 = r1 + 1
            goto L18
        L30:
            monitor-exit(r3)
            return r0
        L32:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    public android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk>> getChunkListMap() {
            r1 = this;
            android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk>> r0 = r1.chunkListMap
            return r0
    }

    @Override
    public synchronized java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> getDownloadChunk(int r2) {
            r1 = this;
            monitor-enter(r1)
            android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk>> r0 = r1.chunkListMap     // Catch: java.lang.Throwable -> Lb
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> Lb
            java.util.List r2 = (java.util.List) r2     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r1)
            return r2
        Lb:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public synchronized com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo(int r2) {
            r1 = this;
            monitor-enter(r1)
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r0 = r1.downloadInfoMap     // Catch: java.lang.Throwable -> La java.lang.Exception -> Lc
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> La java.lang.Exception -> Lc
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r2     // Catch: java.lang.Throwable -> La java.lang.Exception -> Lc
            goto L11
        La:
            r2 = move-exception
            goto L13
        Lc:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> La
            r2 = 0
        L11:
            monitor-exit(r1)
            return r2
        L13:
            monitor-exit(r1)
            throw r2
    }

    @Override
    public synchronized java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getDownloadInfoList(java.lang.String r6) {
            r5 = this;
            monitor-enter(r5)
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L2f
            r0.<init>()     // Catch: java.lang.Throwable -> L2f
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r1 = r5.downloadInfoMap     // Catch: java.lang.Exception -> L29 java.lang.Throwable -> L2f
            int r1 = r1.size()     // Catch: java.lang.Exception -> L29 java.lang.Throwable -> L2f
            r2 = 0
        Ld:
            if (r2 >= r1) goto L2d
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r3 = r5.downloadInfoMap     // Catch: java.lang.Exception -> L29 java.lang.Throwable -> L2f
            java.lang.Object r3 = r3.valueAt(r2)     // Catch: java.lang.Exception -> L29 java.lang.Throwable -> L2f
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r3     // Catch: java.lang.Exception -> L29 java.lang.Throwable -> L2f
            if (r6 == 0) goto L26
            java.lang.String r4 = r3.getUrl()     // Catch: java.lang.Exception -> L29 java.lang.Throwable -> L2f
            boolean r4 = r6.equals(r4)     // Catch: java.lang.Exception -> L29 java.lang.Throwable -> L2f
            if (r4 == 0) goto L26
            r0.add(r3)     // Catch: java.lang.Exception -> L29 java.lang.Throwable -> L2f
        L26:
            int r2 = r2 + 1
            goto Ld
        L29:
            r6 = move-exception
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L2f
        L2d:
            monitor-exit(r5)
            return r0
        L2f:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    public android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> getDownloadInfoMap() {
            r1 = this;
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r0 = r1.downloadInfoMap
            return r0
    }

    @Override
    public synchronized java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getFailedDownloadInfosWithMimeType(java.lang.String r5) {
            r4 = this;
            monitor-enter(r4)
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L58
            r1 = 0
            if (r0 == 0) goto La
            monitor-exit(r4)
            return r1
        La:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r0 = r4.downloadInfoMap     // Catch: java.lang.Throwable -> L58
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L58
            if (r0 != 0) goto L14
            monitor-exit(r4)
            return r1
        L14:
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L58
            r0.<init>()     // Catch: java.lang.Throwable -> L58
            r1 = 0
        L1a:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r2 = r4.downloadInfoMap     // Catch: java.lang.Throwable -> L58
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L58
            if (r1 >= r2) goto L56
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r2 = r4.downloadInfoMap     // Catch: java.lang.Throwable -> L58
            int r2 = r2.keyAt(r1)     // Catch: java.lang.Throwable -> L58
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r3 = r4.downloadInfoMap     // Catch: java.lang.Throwable -> L58
            java.lang.Object r2 = r3.get(r2)     // Catch: java.lang.Throwable -> L58
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r2     // Catch: java.lang.Throwable -> L58
            if (r2 == 0) goto L53
            java.lang.String r3 = r2.getMimeType()     // Catch: java.lang.Throwable -> L58
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L58
            if (r3 != 0) goto L53
            java.lang.String r3 = r2.getMimeType()     // Catch: java.lang.Throwable -> L58
            boolean r3 = r3.equals(r5)     // Catch: java.lang.Throwable -> L58
            if (r3 == 0) goto L53
            int r3 = r2.getStatus()     // Catch: java.lang.Throwable -> L58
            boolean r3 = com.ss.android.socialbase.downloader.constants.DownloadStatus.isFailedStatus(r3)     // Catch: java.lang.Throwable -> L58
            if (r3 == 0) goto L53
            r0.add(r2)     // Catch: java.lang.Throwable -> L58
        L53:
            int r1 = r1 + 1
            goto L1a
        L56:
            monitor-exit(r4)
            return r0
        L58:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    @Override
    public synchronized java.util.Map<java.lang.Long, com.ss.android.socialbase.downloader.segment.Segment> getSegmentMap(int r2) {
            r1 = this;
            monitor-enter(r1)
            android.util.SparseArray<java.util.Map<java.lang.Long, com.ss.android.socialbase.downloader.segment.Segment>> r0 = r1.segmentListMap     // Catch: java.lang.Throwable -> Lb
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> Lb
            java.util.Map r2 = (java.util.Map) r2     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r1)
            return r2
        Lb:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public synchronized java.util.List<com.ss.android.socialbase.downloader.segment.Segment> getSegments(int r2) {
            r1 = this;
            monitor-enter(r1)
            android.util.SparseArray<java.util.Map<java.lang.Long, com.ss.android.socialbase.downloader.segment.Segment>> r0 = r1.segmentListMap     // Catch: java.lang.Throwable -> L20
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L20
            java.util.Map r2 = (java.util.Map) r2     // Catch: java.lang.Throwable -> L20
            if (r2 == 0) goto L1d
            boolean r0 = r2.isEmpty()     // Catch: java.lang.Throwable -> L20
            if (r0 == 0) goto L12
            goto L1d
        L12:
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L20
            java.util.Collection r2 = r2.values()     // Catch: java.lang.Throwable -> L20
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L20
            monitor-exit(r1)
            return r0
        L1d:
            r2 = 0
            monitor-exit(r1)
            return r2
        L20:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public synchronized java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getSuccessedDownloadInfosWithMimeType(java.lang.String r6) {
            r5 = this;
            monitor-enter(r5)
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L55
            r1 = 0
            if (r0 == 0) goto La
            monitor-exit(r5)
            return r1
        La:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r0 = r5.downloadInfoMap     // Catch: java.lang.Throwable -> L55
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L55
            if (r0 != 0) goto L14
            monitor-exit(r5)
            return r1
        L14:
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L55
            r0.<init>()     // Catch: java.lang.Throwable -> L55
            r1 = 0
        L1a:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r2 = r5.downloadInfoMap     // Catch: java.lang.Throwable -> L55
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L55
            if (r1 >= r2) goto L53
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r2 = r5.downloadInfoMap     // Catch: java.lang.Throwable -> L55
            int r2 = r2.keyAt(r1)     // Catch: java.lang.Throwable -> L55
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r3 = r5.downloadInfoMap     // Catch: java.lang.Throwable -> L55
            java.lang.Object r2 = r3.get(r2)     // Catch: java.lang.Throwable -> L55
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r2     // Catch: java.lang.Throwable -> L55
            if (r2 == 0) goto L50
            java.lang.String r3 = r2.getMimeType()     // Catch: java.lang.Throwable -> L55
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L55
            if (r3 != 0) goto L50
            java.lang.String r3 = r2.getMimeType()     // Catch: java.lang.Throwable -> L55
            boolean r3 = r3.equals(r6)     // Catch: java.lang.Throwable -> L55
            if (r3 == 0) goto L50
            int r3 = r2.getStatus()     // Catch: java.lang.Throwable -> L55
            r4 = -3
            if (r3 != r4) goto L50
            r0.add(r2)     // Catch: java.lang.Throwable -> L55
        L50:
            int r1 = r1 + 1
            goto L1a
        L53:
            monitor-exit(r5)
            return r0
        L55:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    @Override
    public synchronized java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getUnCompletedDownloadInfosWithMimeType(java.lang.String r5) {
            r4 = this;
            monitor-enter(r4)
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L58
            r1 = 0
            if (r0 == 0) goto La
            monitor-exit(r4)
            return r1
        La:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r0 = r4.downloadInfoMap     // Catch: java.lang.Throwable -> L58
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L58
            if (r0 != 0) goto L14
            monitor-exit(r4)
            return r1
        L14:
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L58
            r0.<init>()     // Catch: java.lang.Throwable -> L58
            r1 = 0
        L1a:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r2 = r4.downloadInfoMap     // Catch: java.lang.Throwable -> L58
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L58
            if (r1 >= r2) goto L56
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r2 = r4.downloadInfoMap     // Catch: java.lang.Throwable -> L58
            int r2 = r2.keyAt(r1)     // Catch: java.lang.Throwable -> L58
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r3 = r4.downloadInfoMap     // Catch: java.lang.Throwable -> L58
            java.lang.Object r2 = r3.get(r2)     // Catch: java.lang.Throwable -> L58
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r2     // Catch: java.lang.Throwable -> L58
            if (r2 == 0) goto L53
            java.lang.String r3 = r2.getMimeType()     // Catch: java.lang.Throwable -> L58
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L58
            if (r3 != 0) goto L53
            java.lang.String r3 = r2.getMimeType()     // Catch: java.lang.Throwable -> L58
            boolean r3 = r3.equals(r5)     // Catch: java.lang.Throwable -> L58
            if (r3 == 0) goto L53
            int r3 = r2.getStatus()     // Catch: java.lang.Throwable -> L58
            boolean r3 = com.ss.android.socialbase.downloader.constants.DownloadStatus.isUnCompletedStatus(r3)     // Catch: java.lang.Throwable -> L58
            if (r3 == 0) goto L53
            r0.add(r2)     // Catch: java.lang.Throwable -> L58
        L53:
            int r1 = r1 + 1
            goto L1a
        L56:
            monitor-exit(r4)
            return r0
        L58:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    @Override
    public void init() {
            r0 = this;
            return
    }

    @Override
    public boolean isDownloadCacheSyncSuccess() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo onDownloadTaskStart(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r1.getDownloadInfo(r2)
            if (r2 == 0) goto La
            r0 = 2
            r2.setStatus(r0)
        La:
            return r2
    }

    @Override
    public synchronized void removeAllDownloadChunk(int r2) {
            r1 = this;
            monitor-enter(r1)
            android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk>> r0 = r1.chunkListMap     // Catch: java.lang.Throwable -> L8
            r0.remove(r2)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public synchronized boolean removeDownloadInfo(int r2) {
            r1 = this;
            monitor-enter(r1)
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r0 = r1.downloadInfoMap     // Catch: java.lang.Throwable -> L9
            r0.remove(r2)     // Catch: java.lang.Throwable -> L9
            r2 = 1
            monitor-exit(r1)
            return r2
        L9:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public boolean removeDownloadTaskData(int r1) {
            r0 = this;
            r0.removeDownloadInfo(r1)
            r0.removeAllDownloadChunk(r1)
            r0.removeSegments(r1)
            r1 = 1
            return r1
    }

    @Override
    public synchronized void removeSegments(int r2) {
            r1 = this;
            monitor-enter(r1)
            android.util.SparseArray<java.util.Map<java.lang.Long, com.ss.android.socialbase.downloader.segment.Segment>> r0 = r1.segmentListMap     // Catch: java.lang.Throwable -> L8
            r0.remove(r2)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public synchronized void syncDownloadChunks(int r2, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r3) {
            r1 = this;
            monitor-enter(r1)
            if (r3 != 0) goto L5
            monitor-exit(r1)
            return
        L5:
            r1.removeAllDownloadChunk(r2)     // Catch: java.lang.Throwable -> L3e
            java.util.Iterator r2 = r3.iterator()     // Catch: java.lang.Throwable -> L3e
        Lc:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L3e
            if (r3 == 0) goto L3c
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L3e
            com.ss.android.socialbase.downloader.model.DownloadChunk r3 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r3     // Catch: java.lang.Throwable -> L3e
            if (r3 != 0) goto L1b
            goto Lc
        L1b:
            r1.addDownloadChunk(r3)     // Catch: java.lang.Throwable -> L3e
            boolean r0 = r3.hasChunkDivided()     // Catch: java.lang.Throwable -> L3e
            if (r0 == 0) goto Lc
            java.util.List r3 = r3.getSubChunkList()     // Catch: java.lang.Throwable -> L3e
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L3e
        L2c:
            boolean r0 = r3.hasNext()     // Catch: java.lang.Throwable -> L3e
            if (r0 == 0) goto Lc
            java.lang.Object r0 = r3.next()     // Catch: java.lang.Throwable -> L3e
            com.ss.android.socialbase.downloader.model.DownloadChunk r0 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r0     // Catch: java.lang.Throwable -> L3e
            r1.addDownloadChunk(r0)     // Catch: java.lang.Throwable -> L3e
            goto L2c
        L3c:
            monitor-exit(r1)
            return
        L3e:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public void syncDownloadInfo(com.ss.android.socialbase.downloader.model.DownloadInfo r1) {
            r0 = this;
            r0.updateDownloadInfo(r1)
            return
    }

    @Override
    public void syncDownloadInfoFromOtherCache(int r1, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r2) {
            r0 = this;
            return
    }

    @Override
    public synchronized com.ss.android.socialbase.downloader.model.DownloadInfo updateChunkCount(int r1, int r2) {
            r0 = this;
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r0.getDownloadInfo(r1)     // Catch: java.lang.Throwable -> Lc
            if (r1 == 0) goto La
            r1.setChunkCount(r2)     // Catch: java.lang.Throwable -> Lc
        La:
            monitor-exit(r0)
            return r1
        Lc:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @Override
    public synchronized void updateDownloadChunk(int r3, int r4, long r5) {
            r2 = this;
            monitor-enter(r2)
            java.util.List r3 = r2.getDownloadChunk(r3)     // Catch: java.lang.Throwable -> L26
            if (r3 != 0) goto L9
            monitor-exit(r2)
            return
        L9:
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L26
        Ld:
            boolean r0 = r3.hasNext()     // Catch: java.lang.Throwable -> L26
            if (r0 == 0) goto L24
            java.lang.Object r0 = r3.next()     // Catch: java.lang.Throwable -> L26
            com.ss.android.socialbase.downloader.model.DownloadChunk r0 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r0     // Catch: java.lang.Throwable -> L26
            if (r0 == 0) goto Ld
            int r1 = r0.getChunkIndex()     // Catch: java.lang.Throwable -> L26
            if (r1 != r4) goto Ld
            r0.setCurrentOffset(r5)     // Catch: java.lang.Throwable -> L26
        L24:
            monitor-exit(r2)
            return
        L26:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    @Override
    public synchronized boolean updateDownloadInfo(com.ss.android.socialbase.downloader.model.DownloadInfo r4) {
            r3 = this;
            monitor-enter(r3)
            r0 = 1
            if (r4 != 0) goto L6
            monitor-exit(r3)
            return r0
        L6:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r1 = r3.downloadInfoMap     // Catch: java.lang.Throwable -> L1f
            int r2 = r4.getId()     // Catch: java.lang.Throwable -> L1f
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> L1f
            if (r1 == 0) goto L13
            goto L14
        L13:
            r0 = 0
        L14:
            android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r1 = r3.downloadInfoMap     // Catch: java.lang.Throwable -> L1f
            int r2 = r4.getId()     // Catch: java.lang.Throwable -> L1f
            r1.put(r2, r4)     // Catch: java.lang.Throwable -> L1f
            monitor-exit(r3)
            return r0
        L1f:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    @Override
    public synchronized boolean updateSegments(int r2, java.util.Map<java.lang.Long, com.ss.android.socialbase.downloader.segment.Segment> r3) {
            r1 = this;
            monitor-enter(r1)
            android.util.SparseArray<java.util.Map<java.lang.Long, com.ss.android.socialbase.downloader.segment.Segment>> r0 = r1.segmentListMap     // Catch: java.lang.Throwable -> L9
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L9
            r2 = 0
            monitor-exit(r1)
            return r2
        L9:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public synchronized void updateSubDownloadChunk(int r3, int r4, int r5, long r6) {
            r2 = this;
            monitor-enter(r2)
            java.util.List r3 = r2.getDownloadChunk(r3)     // Catch: java.lang.Throwable -> L4f
            if (r3 != 0) goto L9
            monitor-exit(r2)
            return
        L9:
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L4f
        Ld:
            boolean r0 = r3.hasNext()     // Catch: java.lang.Throwable -> L4f
            if (r0 == 0) goto L4d
            java.lang.Object r0 = r3.next()     // Catch: java.lang.Throwable -> L4f
            com.ss.android.socialbase.downloader.model.DownloadChunk r0 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r0     // Catch: java.lang.Throwable -> L4f
            if (r0 == 0) goto Ld
            int r1 = r0.getChunkIndex()     // Catch: java.lang.Throwable -> L4f
            if (r1 != r5) goto Ld
            boolean r1 = r0.hasChunkDivided()     // Catch: java.lang.Throwable -> L4f
            if (r1 != 0) goto Ld
            java.util.List r3 = r0.getSubChunkList()     // Catch: java.lang.Throwable -> L4f
            if (r3 != 0) goto L2e
            goto L4d
        L2e:
            java.util.List r3 = r0.getSubChunkList()     // Catch: java.lang.Throwable -> L4f
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L4f
        L36:
            boolean r5 = r3.hasNext()     // Catch: java.lang.Throwable -> L4f
            if (r5 == 0) goto L4d
            java.lang.Object r5 = r3.next()     // Catch: java.lang.Throwable -> L4f
            com.ss.android.socialbase.downloader.model.DownloadChunk r5 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r5     // Catch: java.lang.Throwable -> L4f
            if (r5 == 0) goto L36
            int r0 = r5.getChunkIndex()     // Catch: java.lang.Throwable -> L4f
            if (r0 != r4) goto L36
            r5.setCurrentOffset(r6)     // Catch: java.lang.Throwable -> L4f
        L4d:
            monitor-exit(r2)
            return
        L4f:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    @Override
    public void updateSubDownloadChunkIndex(int r1, int r2, int r3, int r4) {
            r0 = this;
            return
    }
}
