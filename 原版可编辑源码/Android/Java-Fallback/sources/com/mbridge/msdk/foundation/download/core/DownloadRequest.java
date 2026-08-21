package com.mbridge.msdk.foundation.download.core;

public class DownloadRequest<T> {
    private static final java.lang.String TAG = "DownloadRequest";
    private int cacheDirectorPathType;
    private java.lang.String cacheDirectoryPath;
    private long connectTimeout;
    private java.lang.String directoryPathExternal;
    private java.lang.String directoryPathInternal;
    private java.lang.String downloadId;
    private com.mbridge.msdk.foundation.download.DownloadMessage<T> downloadMessage;
    private com.mbridge.msdk.foundation.download.DownloadPriority downloadPriority;
    private long downloadedBytes;
    private java.util.Map<java.lang.String, java.lang.String> extraMap;
    private java.util.concurrent.Future future;
    private java.util.HashMap<java.lang.String, java.util.List<java.lang.String>> headerMap;
    private volatile com.mbridge.msdk.foundation.download.OnDownloadStateListener onDownloadListener;
    private volatile com.mbridge.msdk.foundation.download.OnProgressStateListener onProgressListener;
    private long readTimeout;
    private int retry;
    private volatile int retryedCount;
    private int sequence;
    private com.mbridge.msdk.foundation.download.DownloadStatus status;
    private long timeout;
    private long totalBytes;
    private java.lang.String userAgent;
    private long writeTimeout;






    DownloadRequest(com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder<T> r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.totalBytes = r0
            r0 = 0
            r2.retryedCount = r0
            java.util.HashMap<java.lang.String, java.util.List<java.lang.String>> r0 = r3.headerMap
            r2.headerMap = r0
            com.mbridge.msdk.foundation.download.DownloadPriority r0 = r3.downloadPriority
            r2.downloadPriority = r0
            long r0 = r3.readTimeout
            r2.readTimeout = r0
            long r0 = r3.connectTimeout
            r2.connectTimeout = r0
            java.lang.String r0 = r3.userAgent
            r2.userAgent = r0
            com.mbridge.msdk.foundation.download.DownloadMessage<T> r0 = r3.downloadMessage
            r2.downloadMessage = r0
            long r0 = r3.writeTimeout
            r2.writeTimeout = r0
            com.mbridge.msdk.foundation.download.OnDownloadStateListener r0 = r3.downloadStateListener
            r2.onDownloadListener = r0
            com.mbridge.msdk.foundation.download.OnProgressStateListener r0 = r3.progressStateListener
            r2.onProgressListener = r0
            java.lang.String r0 = r3.directoryPathExternal
            r2.directoryPathExternal = r0
            java.lang.String r0 = r3.directoryPathInternal
            r2.directoryPathInternal = r0
            int r0 = r3.retry
            r2.retry = r0
            long r0 = r3.timeout
            r2.timeout = r0
            java.util.Map<java.lang.String, java.lang.String> r3 = r3.extraMap
            r2.extraMap = r3
            return
    }

    static int access$000(com.mbridge.msdk.foundation.download.core.DownloadRequest r0) {
            int r0 = r0.retryedCount
            return r0
    }

    static int access$002(com.mbridge.msdk.foundation.download.core.DownloadRequest r0, int r1) {
            r0.retryedCount = r1
            return r1
    }

    static int access$100(com.mbridge.msdk.foundation.download.core.DownloadRequest r0) {
            int r0 = r0.retry
            return r0
    }

    static com.mbridge.msdk.foundation.download.OnDownloadStateListener access$200(com.mbridge.msdk.foundation.download.core.DownloadRequest r0) {
            com.mbridge.msdk.foundation.download.OnDownloadStateListener r0 = r0.onDownloadListener
            return r0
    }

    static void access$300(com.mbridge.msdk.foundation.download.core.DownloadRequest r0) {
            r0.finish()
            return
    }

    static com.mbridge.msdk.foundation.download.OnProgressStateListener access$400(com.mbridge.msdk.foundation.download.core.DownloadRequest r0) {
            com.mbridge.msdk.foundation.download.OnProgressStateListener r0 = r0.onProgressListener
            return r0
    }

    public static com.mbridge.msdk.foundation.download.core.DownloadRequest create(com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder r1) {
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = new com.mbridge.msdk.foundation.download.core.DownloadRequest
            r0.<init>(r1)
            return r0
    }

    private void destroy() {
            r1 = this;
            r0 = 0
            r1.onProgressListener = r0
            r1.onDownloadListener = r0
            return
    }

    private void finish() {
            r1 = this;
            r1.destroy()
            com.mbridge.msdk.foundation.download.core.DownloadRequestQueue r0 = com.mbridge.msdk.foundation.download.core.DownloadRequestQueue.getInstance()
            r0.finish(r1)
            return
    }

    public void cancel(com.mbridge.msdk.foundation.download.DownloadMessage<T> r2) {
            r1 = this;
            com.mbridge.msdk.foundation.download.DownloadStatus r2 = com.mbridge.msdk.foundation.download.DownloadStatus.CANCELLED
            r1.status = r2
            java.util.concurrent.Future r2 = r1.future
            if (r2 == 0) goto Lc
            r0 = 0
            r2.cancel(r0)
        Lc:
            return
    }

    public java.lang.String get(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.extraMap
            boolean r0 = com.mbridge.msdk.foundation.download.utils.Objects.isNull(r0)
            if (r0 != 0) goto L27
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.extraMap
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L27
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L17
            goto L27
        L17:
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.extraMap
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L26
            return r3
        L26:
            return r2
        L27:
            return r3
    }

    public int getCacheDirectorPathType() {
            r1 = this;
            int r0 = r1.cacheDirectorPathType
            return r0
    }

    public java.lang.String getCacheDirectoryPath() {
            r1 = this;
            java.lang.String r0 = r1.cacheDirectoryPath
            return r0
    }

    public long getConnectTimeout() {
            r2 = this;
            long r0 = r2.connectTimeout
            return r0
    }

    public java.lang.String getDirectoryPathExternal() {
            r1 = this;
            java.lang.String r0 = r1.directoryPathExternal
            return r0
    }

    public java.lang.String getDirectoryPathInternal() {
            r1 = this;
            java.lang.String r0 = r1.directoryPathInternal
            return r0
    }

    public java.lang.String getDownloadId() {
            r1 = this;
            java.lang.String r0 = r1.downloadId
            return r0
    }

    public com.mbridge.msdk.foundation.download.DownloadMessage<T> getDownloadMessage() {
            r1 = this;
            com.mbridge.msdk.foundation.download.DownloadMessage<T> r0 = r1.downloadMessage
            return r0
    }

    public com.mbridge.msdk.foundation.download.DownloadPriority getDownloadPriority() {
            r1 = this;
            com.mbridge.msdk.foundation.download.DownloadPriority r0 = r1.downloadPriority
            return r0
    }

    public long getDownloadedBytes() {
            r2 = this;
            long r0 = r2.downloadedBytes
            return r0
    }

    public java.util.HashMap<java.lang.String, java.util.List<java.lang.String>> getHeaders() {
            r1 = this;
            java.util.HashMap<java.lang.String, java.util.List<java.lang.String>> r0 = r1.headerMap
            return r0
    }

    public long getReadTimeout() {
            r2 = this;
            long r0 = r2.readTimeout
            return r0
    }

    public int getRetry() {
            r1 = this;
            int r0 = r1.retry
            return r0
    }

    public int getRetryedCount() {
            r1 = this;
            int r0 = r1.retryedCount
            return r0
    }

    public int getSequence() {
            r1 = this;
            int r0 = r1.sequence
            return r0
    }

    public com.mbridge.msdk.foundation.download.DownloadStatus getStatus() {
            r1 = this;
            com.mbridge.msdk.foundation.download.DownloadStatus r0 = r1.status
            return r0
    }

    public long getTimeout() {
            r2 = this;
            long r0 = r2.timeout
            return r0
    }

    public long getTotalBytes() {
            r2 = this;
            long r0 = r2.totalBytes
            return r0
    }

    public long getWriteTimeout() {
            r2 = this;
            long r0 = r2.writeTimeout
            return r0
    }

    public void handlerCancelEvent(com.mbridge.msdk.foundation.download.DownloadMessage<T> r3) {
            r2 = this;
            com.mbridge.msdk.foundation.download.core.ExecutorManager r0 = com.mbridge.msdk.foundation.download.core.ExecutorManager.getInstance()
            com.mbridge.msdk.foundation.download.core.ExecutorSupplier r0 = r0.getExecutorSupplier()
            java.util.concurrent.ExecutorService r0 = r0.getDownloadResultTasks()
            com.mbridge.msdk.foundation.download.core.DownloadRequest$4 r1 = new com.mbridge.msdk.foundation.download.core.DownloadRequest$4
            r1.<init>(r2, r3)
            r0.execute(r1)
            return
    }

    public void handlerErrorEvent(com.mbridge.msdk.foundation.download.DownloadMessage<T> r3, com.mbridge.msdk.foundation.download.DownloadError r4) {
            r2 = this;
            com.mbridge.msdk.foundation.download.DownloadStatus r0 = r2.status
            com.mbridge.msdk.foundation.download.DownloadStatus r1 = com.mbridge.msdk.foundation.download.DownloadStatus.CANCELLED
            if (r0 == r1) goto L1f
            com.mbridge.msdk.foundation.download.DownloadStatus r0 = com.mbridge.msdk.foundation.download.DownloadStatus.FAILED
            r2.setStatus(r0)
            com.mbridge.msdk.foundation.download.core.ExecutorManager r0 = com.mbridge.msdk.foundation.download.core.ExecutorManager.getInstance()
            com.mbridge.msdk.foundation.download.core.ExecutorSupplier r0 = r0.getExecutorSupplier()
            java.util.concurrent.ExecutorService r0 = r0.getDownloadResultTasks()
            com.mbridge.msdk.foundation.download.core.DownloadRequest$1 r1 = new com.mbridge.msdk.foundation.download.core.DownloadRequest$1
            r1.<init>(r2, r3, r4)
            r0.execute(r1)
        L1f:
            return
    }

    public void handlerProcessEvent(com.mbridge.msdk.foundation.download.DownloadMessage<T> r3, com.mbridge.msdk.foundation.download.DownloadProgress r4) {
            r2 = this;
            com.mbridge.msdk.foundation.download.DownloadStatus r0 = r2.status
            com.mbridge.msdk.foundation.download.DownloadStatus r1 = com.mbridge.msdk.foundation.download.DownloadStatus.CANCELLED
            if (r0 == r1) goto L1a
            com.mbridge.msdk.foundation.download.core.ExecutorManager r0 = com.mbridge.msdk.foundation.download.core.ExecutorManager.getInstance()
            com.mbridge.msdk.foundation.download.core.ExecutorSupplier r0 = r0.getExecutorSupplier()
            java.util.concurrent.ExecutorService r0 = r0.getDownloadResultTasks()
            com.mbridge.msdk.foundation.download.core.DownloadRequest$5 r1 = new com.mbridge.msdk.foundation.download.core.DownloadRequest$5
            r1.<init>(r2, r3, r4)
            r0.execute(r1)
        L1a:
            return
    }

    public void handlerStartEvent(com.mbridge.msdk.foundation.download.DownloadMessage<T> r3) {
            r2 = this;
            com.mbridge.msdk.foundation.download.DownloadStatus r0 = r2.status
            com.mbridge.msdk.foundation.download.DownloadStatus r1 = com.mbridge.msdk.foundation.download.DownloadStatus.CANCELLED
            if (r0 == r1) goto L1a
            com.mbridge.msdk.foundation.download.core.ExecutorManager r0 = com.mbridge.msdk.foundation.download.core.ExecutorManager.getInstance()
            com.mbridge.msdk.foundation.download.core.ExecutorSupplier r0 = r0.getExecutorSupplier()
            java.util.concurrent.ExecutorService r0 = r0.getDownloadResultTasks()
            com.mbridge.msdk.foundation.download.core.DownloadRequest$3 r1 = new com.mbridge.msdk.foundation.download.core.DownloadRequest$3
            r1.<init>(r2, r3)
            r0.execute(r1)
        L1a:
            return
    }

    public void handlerSuccessEvent(com.mbridge.msdk.foundation.download.DownloadMessage<T> r3) {
            r2 = this;
            com.mbridge.msdk.foundation.download.DownloadStatus r0 = r2.status
            com.mbridge.msdk.foundation.download.DownloadStatus r1 = com.mbridge.msdk.foundation.download.DownloadStatus.CANCELLED
            if (r0 == r1) goto L1f
            com.mbridge.msdk.foundation.download.DownloadStatus r0 = com.mbridge.msdk.foundation.download.DownloadStatus.COMPLETED
            r2.setStatus(r0)
            com.mbridge.msdk.foundation.download.core.ExecutorManager r0 = com.mbridge.msdk.foundation.download.core.ExecutorManager.getInstance()
            com.mbridge.msdk.foundation.download.core.ExecutorSupplier r0 = r0.getExecutorSupplier()
            java.util.concurrent.ExecutorService r0 = r0.getDownloadResultTasks()
            com.mbridge.msdk.foundation.download.core.DownloadRequest$2 r1 = new com.mbridge.msdk.foundation.download.core.DownloadRequest$2
            r1.<init>(r2, r3)
            r0.execute(r1)
        L1f:
            return
    }

    public void setCacheDirectorPathType(int r1) {
            r0 = this;
            r0.cacheDirectorPathType = r1
            return
    }

    public void setCacheDirectoryPath(java.lang.String r1) {
            r0 = this;
            r0.cacheDirectoryPath = r1
            return
    }

    public void setDownloadedBytes(long r1) {
            r0 = this;
            r0.downloadedBytes = r1
            return
    }

    public void setFuture(java.util.concurrent.Future r1) {
            r0 = this;
            r0.future = r1
            return
    }

    public void setSequence(int r1) {
            r0 = this;
            r0.sequence = r1
            return
    }

    public void setStatus(com.mbridge.msdk.foundation.download.DownloadStatus r1) {
            r0 = this;
            r0.status = r1
            return
    }

    public void setTotalBytes(long r1) {
            r0 = this;
            r0.totalBytes = r1
            return
    }

    public java.lang.String start() {
            r2 = this;
            com.mbridge.msdk.foundation.download.resource.MBResourceManager r0 = com.mbridge.msdk.foundation.download.resource.MBResourceManager.getInstance()
            com.mbridge.msdk.foundation.download.DownloadMessage<T> r1 = r2.downloadMessage
            java.lang.String r1 = r1.getResourceUrl()
            java.lang.String r0 = r0.getDownloadId(r1)
            r2.downloadId = r0
            com.mbridge.msdk.foundation.download.core.DownloadRequestQueue r0 = com.mbridge.msdk.foundation.download.core.DownloadRequestQueue.getInstance()
            r0.addRequest(r2)
            java.lang.String r0 = r2.downloadId
            return r0
    }
}
