package com.mbridge.msdk.foundation.download.core;

public class DownloadRequestQueue<T> {
    private static final java.lang.String TAG = "DownloadRequestQueue";
    private final java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.foundation.download.core.DownloadRequest<T>> currentRequestMap;
    private final java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.download.core.DownloadRequest<T>>> delayRequestMap;
    private final java.util.concurrent.atomic.AtomicInteger sequenceGenerator;

    static class 1 {
    }

    private static final class ClassHolder {
        private static final com.mbridge.msdk.foundation.download.core.DownloadRequestQueue DOWNLOAD_REQUEST_QUEUE = null;

        static {
                com.mbridge.msdk.foundation.download.core.DownloadRequestQueue r0 = new com.mbridge.msdk.foundation.download.core.DownloadRequestQueue
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.foundation.download.core.DownloadRequestQueue.ClassHolder.DOWNLOAD_REQUEST_QUEUE = r0
                return
        }

        private ClassHolder() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.mbridge.msdk.foundation.download.core.DownloadRequestQueue access$000() {
                com.mbridge.msdk.foundation.download.core.DownloadRequestQueue r0 = com.mbridge.msdk.foundation.download.core.DownloadRequestQueue.ClassHolder.DOWNLOAD_REQUEST_QUEUE
                return r0
        }
    }

    private DownloadRequestQueue() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.currentRequestMap = r0
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r0.<init>()
            r1.sequenceGenerator = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.delayRequestMap = r0
            return
    }

    DownloadRequestQueue(com.mbridge.msdk.foundation.download.core.DownloadRequestQueue.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    private void cancelAndRemoveFromMap(com.mbridge.msdk.foundation.download.core.DownloadRequest r1, java.lang.String r2) {
            r0 = this;
            if (r1 == 0) goto L9
            com.mbridge.msdk.foundation.download.DownloadMessage r2 = r1.getDownloadMessage()
            r1.cancel(r2)
        L9:
            return
    }

    public static com.mbridge.msdk.foundation.download.core.DownloadRequestQueue getInstance() {
            com.mbridge.msdk.foundation.download.core.DownloadRequestQueue r0 = com.mbridge.msdk.foundation.download.core.DownloadRequestQueue.ClassHolder.access$000()
            return r0
    }

    private int getSequenceNumber() {
            r1 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r1.sequenceGenerator
            int r0 = r0.incrementAndGet()
            return r0
    }

    public synchronized void addRequest(com.mbridge.msdk.foundation.download.core.DownloadRequest<T> r4) {
            r3 = this;
            monitor-enter(r3)
            java.lang.String r0 = r4.getDownloadId()     // Catch: java.lang.Throwable -> L81
            int r1 = r3.getSequenceNumber()     // Catch: java.lang.Throwable -> L81
            r4.setSequence(r1)     // Catch: java.lang.Throwable -> L81
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.foundation.download.core.DownloadRequest<T>> r1 = r3.currentRequestMap     // Catch: java.lang.Throwable -> L81
            boolean r1 = r1.containsKey(r0)     // Catch: java.lang.Throwable -> L81
            if (r1 == 0) goto L52
            com.mbridge.msdk.foundation.download.DownloadStatus r1 = r4.getStatus()     // Catch: java.lang.Throwable -> L81
            com.mbridge.msdk.foundation.download.DownloadStatus r2 = com.mbridge.msdk.foundation.download.DownloadStatus.RETRY     // Catch: java.lang.Throwable -> L81
            if (r1 == r2) goto L1f
            com.mbridge.msdk.foundation.download.DownloadStatus r1 = com.mbridge.msdk.foundation.download.DownloadStatus.DELAY     // Catch: java.lang.Throwable -> L81
            goto L21
        L1f:
            com.mbridge.msdk.foundation.download.DownloadStatus r1 = com.mbridge.msdk.foundation.download.DownloadStatus.RETRY     // Catch: java.lang.Throwable -> L81
        L21:
            r4.setStatus(r1)     // Catch: java.lang.Throwable -> L81
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.download.core.DownloadRequest<T>>> r1 = r3.delayRequestMap     // Catch: java.lang.Throwable -> L81
            boolean r1 = r1.containsKey(r0)     // Catch: java.lang.Throwable -> L81
            if (r1 == 0) goto L44
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.download.core.DownloadRequest<T>>> r1 = r3.delayRequestMap     // Catch: java.lang.Throwable -> L81
            java.lang.Object r1 = r1.get(r0)     // Catch: java.lang.Throwable -> L81
            java.util.concurrent.CopyOnWriteArrayList r1 = (java.util.concurrent.CopyOnWriteArrayList) r1     // Catch: java.lang.Throwable -> L81
            if (r1 == 0) goto L7f
            r1.add(r4)     // Catch: java.lang.Throwable -> L81
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.download.core.DownloadRequest<T>>> r4 = r3.delayRequestMap     // Catch: java.lang.Throwable -> L81
            r4.remove(r0)     // Catch: java.lang.Throwable -> L81
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.download.core.DownloadRequest<T>>> r4 = r3.delayRequestMap     // Catch: java.lang.Throwable -> L81
            r4.put(r0, r1)     // Catch: java.lang.Throwable -> L81
            goto L7f
        L44:
            java.util.concurrent.CopyOnWriteArrayList r1 = new java.util.concurrent.CopyOnWriteArrayList     // Catch: java.lang.Throwable -> L81
            r1.<init>()     // Catch: java.lang.Throwable -> L81
            r1.add(r4)     // Catch: java.lang.Throwable -> L81
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.download.core.DownloadRequest<T>>> r4 = r3.delayRequestMap     // Catch: java.lang.Throwable -> L81
            r4.put(r0, r1)     // Catch: java.lang.Throwable -> L81
            goto L7f
        L52:
            com.mbridge.msdk.foundation.download.DownloadStatus r1 = r4.getStatus()     // Catch: java.lang.Throwable -> L81
            com.mbridge.msdk.foundation.download.DownloadStatus r2 = com.mbridge.msdk.foundation.download.DownloadStatus.RETRY     // Catch: java.lang.Throwable -> L81
            if (r1 == r2) goto L5d
            com.mbridge.msdk.foundation.download.DownloadStatus r1 = com.mbridge.msdk.foundation.download.DownloadStatus.QUEUED     // Catch: java.lang.Throwable -> L81
            goto L5f
        L5d:
            com.mbridge.msdk.foundation.download.DownloadStatus r1 = com.mbridge.msdk.foundation.download.DownloadStatus.RETRY     // Catch: java.lang.Throwable -> L81
        L5f:
            r4.setStatus(r1)     // Catch: java.lang.Throwable -> L81
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.foundation.download.core.DownloadRequest<T>> r1 = r3.currentRequestMap     // Catch: java.lang.Throwable -> L81
            r1.put(r0, r4)     // Catch: java.lang.Throwable -> L81
            com.mbridge.msdk.foundation.download.core.ExecutorManager r0 = com.mbridge.msdk.foundation.download.core.ExecutorManager.getInstance()     // Catch: java.lang.Throwable -> L81
            com.mbridge.msdk.foundation.download.core.ExecutorSupplier r0 = r0.getExecutorSupplier()     // Catch: java.lang.Throwable -> L81
            com.mbridge.msdk.foundation.download.core.DownloadExecutor r0 = r0.getDownloadTasks()     // Catch: java.lang.Throwable -> L81
            com.mbridge.msdk.foundation.download.core.Downloader r1 = new com.mbridge.msdk.foundation.download.core.Downloader     // Catch: java.lang.Throwable -> L81
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L81
            java.util.concurrent.Future r0 = r0.submit(r1)     // Catch: java.lang.Throwable -> L81
            r4.setFuture(r0)     // Catch: java.lang.Throwable -> L81
        L7f:
            monitor-exit(r3)
            return
        L81:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public synchronized void cancel(java.lang.String r5) {
            r4 = this;
            monitor-enter(r4)
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L65
            if (r0 != 0) goto L52
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.download.core.DownloadRequest<T>>> r0 = r4.delayRequestMap     // Catch: java.lang.Throwable -> L65
            boolean r0 = r0.containsKey(r5)     // Catch: java.lang.Throwable -> L65
            if (r0 == 0) goto L52
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.download.core.DownloadRequest<T>>> r0 = r4.delayRequestMap     // Catch: java.lang.Throwable -> L65
            java.lang.Object r0 = r0.get(r5)     // Catch: java.lang.Throwable -> L65
            java.util.concurrent.CopyOnWriteArrayList r0 = (java.util.concurrent.CopyOnWriteArrayList) r0     // Catch: java.lang.Throwable -> L65
            if (r0 == 0) goto L52
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L65
            if (r1 <= 0) goto L52
            java.util.Iterator r1 = r0.iterator()     // Catch: java.lang.Throwable -> L65
        L23:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L65
            if (r2 == 0) goto L3a
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L65
            com.mbridge.msdk.foundation.download.core.DownloadRequest r2 = (com.mbridge.msdk.foundation.download.core.DownloadRequest) r2     // Catch: java.lang.Throwable -> L65
            r0.remove(r2)     // Catch: java.lang.Throwable -> L65
            com.mbridge.msdk.foundation.download.DownloadMessage r3 = r2.getDownloadMessage()     // Catch: java.lang.Throwable -> L65
            r2.handlerCancelEvent(r3)     // Catch: java.lang.Throwable -> L65
            goto L23
        L3a:
            if (r0 == 0) goto L4d
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L65
            if (r1 <= 0) goto L4d
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.download.core.DownloadRequest<T>>> r1 = r4.delayRequestMap     // Catch: java.lang.Throwable -> L65
            r1.remove(r5)     // Catch: java.lang.Throwable -> L65
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.download.core.DownloadRequest<T>>> r1 = r4.delayRequestMap     // Catch: java.lang.Throwable -> L65
            r1.put(r5, r0)     // Catch: java.lang.Throwable -> L65
            goto L52
        L4d:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.download.core.DownloadRequest<T>>> r0 = r4.delayRequestMap     // Catch: java.lang.Throwable -> L65
            r0.remove(r5)     // Catch: java.lang.Throwable -> L65
        L52:
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L65
            if (r0 != 0) goto L63
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.foundation.download.core.DownloadRequest<T>> r0 = r4.currentRequestMap     // Catch: java.lang.Throwable -> L65
            java.lang.Object r0 = r0.get(r5)     // Catch: java.lang.Throwable -> L65
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = (com.mbridge.msdk.foundation.download.core.DownloadRequest) r0     // Catch: java.lang.Throwable -> L65
            r4.cancelAndRemoveFromMap(r0, r5)     // Catch: java.lang.Throwable -> L65
        L63:
            monitor-exit(r4)
            return
        L65:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public synchronized void cancelAll() {
            r4 = this;
            monitor-enter(r4)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.download.core.DownloadRequest<T>>> r0 = r4.delayRequestMap     // Catch: java.lang.Throwable -> L6a
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> L6a
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L6a
        Lb:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L6a
            if (r1 == 0) goto L3f
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L6a
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Throwable -> L6a
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Throwable -> L6a
            java.util.concurrent.CopyOnWriteArrayList r1 = (java.util.concurrent.CopyOnWriteArrayList) r1     // Catch: java.lang.Throwable -> L6a
            if (r1 == 0) goto Lb
            int r2 = r1.size()     // Catch: java.lang.Throwable -> L6a
            if (r2 <= 0) goto Lb
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L6a
        L29:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L6a
            if (r2 == 0) goto Lb
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L6a
            com.mbridge.msdk.foundation.download.core.DownloadRequest r2 = (com.mbridge.msdk.foundation.download.core.DownloadRequest) r2     // Catch: java.lang.Throwable -> L6a
            if (r2 == 0) goto L29
            com.mbridge.msdk.foundation.download.DownloadMessage r3 = r2.getDownloadMessage()     // Catch: java.lang.Throwable -> L6a
            r2.handlerCancelEvent(r3)     // Catch: java.lang.Throwable -> L6a
            goto L29
        L3f:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.download.core.DownloadRequest<T>>> r0 = r4.delayRequestMap     // Catch: java.lang.Throwable -> L6a
            r0.clear()     // Catch: java.lang.Throwable -> L6a
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.foundation.download.core.DownloadRequest<T>> r0 = r4.currentRequestMap     // Catch: java.lang.Throwable -> L6a
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> L6a
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L6a
        L4e:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L6a
            if (r1 == 0) goto L68
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L6a
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Throwable -> L6a
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Throwable -> L6a
            com.mbridge.msdk.foundation.download.core.DownloadRequest r1 = (com.mbridge.msdk.foundation.download.core.DownloadRequest) r1     // Catch: java.lang.Throwable -> L6a
            java.lang.String r2 = r1.getDownloadId()     // Catch: java.lang.Throwable -> L6a
            r4.cancelAndRemoveFromMap(r1, r2)     // Catch: java.lang.Throwable -> L6a
            goto L4e
        L68:
            monitor-exit(r4)
            return
        L6a:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    public synchronized void finish(com.mbridge.msdk.foundation.download.core.DownloadRequest r5) {
            r4 = this;
            monitor-enter(r4)
            java.lang.String r5 = r5.getDownloadId()     // Catch: java.lang.Throwable -> L5a
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.foundation.download.core.DownloadRequest<T>> r0 = r4.currentRequestMap     // Catch: java.lang.Throwable -> L5a
            r0.remove(r5)     // Catch: java.lang.Throwable -> L5a
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.download.core.DownloadRequest<T>>> r0 = r4.delayRequestMap     // Catch: java.lang.Throwable -> L5a
            boolean r0 = r0.containsKey(r5)     // Catch: java.lang.Throwable -> L5a
            if (r0 == 0) goto L58
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.download.core.DownloadRequest<T>>> r0 = r4.delayRequestMap     // Catch: java.lang.Throwable -> L5a
            java.lang.Object r0 = r0.remove(r5)     // Catch: java.lang.Throwable -> L5a
            java.util.concurrent.CopyOnWriteArrayList r0 = (java.util.concurrent.CopyOnWriteArrayList) r0     // Catch: java.lang.Throwable -> L5a
            if (r0 == 0) goto L58
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L5a
            if (r1 <= 0) goto L58
            r1 = 0
            java.lang.Object r1 = r0.remove(r1)     // Catch: java.lang.Throwable -> L5a
            com.mbridge.msdk.foundation.download.core.DownloadRequest r1 = (com.mbridge.msdk.foundation.download.core.DownloadRequest) r1     // Catch: java.lang.Throwable -> L5a
            com.mbridge.msdk.foundation.download.DownloadStatus r2 = com.mbridge.msdk.foundation.download.DownloadStatus.QUEUED     // Catch: java.lang.Throwable -> L5a
            r1.setStatus(r2)     // Catch: java.lang.Throwable -> L5a
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.foundation.download.core.DownloadRequest<T>> r2 = r4.currentRequestMap     // Catch: java.lang.Throwable -> L5a
            r2.put(r5, r1)     // Catch: java.lang.Throwable -> L5a
            com.mbridge.msdk.foundation.download.core.ExecutorManager r2 = com.mbridge.msdk.foundation.download.core.ExecutorManager.getInstance()     // Catch: java.lang.Throwable -> L5a
            com.mbridge.msdk.foundation.download.core.ExecutorSupplier r2 = r2.getExecutorSupplier()     // Catch: java.lang.Throwable -> L5a
            com.mbridge.msdk.foundation.download.core.DownloadExecutor r2 = r2.getDownloadTasks()     // Catch: java.lang.Throwable -> L5a
            com.mbridge.msdk.foundation.download.core.Downloader r3 = new com.mbridge.msdk.foundation.download.core.Downloader     // Catch: java.lang.Throwable -> L5a
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L5a
            java.util.concurrent.Future r2 = r2.submit(r3)     // Catch: java.lang.Throwable -> L5a
            r1.setFuture(r2)     // Catch: java.lang.Throwable -> L5a
            if (r0 == 0) goto L58
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L5a
            if (r1 <= 0) goto L58
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.download.core.DownloadRequest<T>>> r1 = r4.delayRequestMap     // Catch: java.lang.Throwable -> L5a
            r1.put(r5, r0)     // Catch: java.lang.Throwable -> L5a
        L58:
            monitor-exit(r4)
            return
        L5a:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public synchronized com.mbridge.msdk.foundation.download.DownloadStatus getStatus(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.foundation.download.core.DownloadRequest<T>> r0 = r1.currentRequestMap     // Catch: java.lang.Throwable -> L15
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L15
            com.mbridge.msdk.foundation.download.core.DownloadRequest r2 = (com.mbridge.msdk.foundation.download.core.DownloadRequest) r2     // Catch: java.lang.Throwable -> L15
            if (r2 == 0) goto L11
            com.mbridge.msdk.foundation.download.DownloadStatus r2 = r2.getStatus()     // Catch: java.lang.Throwable -> L15
            monitor-exit(r1)
            return r2
        L11:
            com.mbridge.msdk.foundation.download.DownloadStatus r2 = com.mbridge.msdk.foundation.download.DownloadStatus.UNKNOWN     // Catch: java.lang.Throwable -> L15
            monitor-exit(r1)
            return r2
        L15:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public void initialize() {
            r0 = this;
            return
    }
}
