package com.ss.android.socialbase.downloader.thread;

public class ThreadWithHandler {
    private com.ss.android.socialbase.downloader.thread.ThreadWithHandler.InnerThread handlerThread;
    private java.lang.Object lock;
    private java.util.Queue<com.ss.android.socialbase.downloader.thread.ThreadWithHandler.MessageEntity> mCacheQueue;
    private android.os.Handler mHandler;

    private class InnerThread extends android.os.HandlerThread {
        final com.ss.android.socialbase.downloader.thread.ThreadWithHandler this$0;

        InnerThread(com.ss.android.socialbase.downloader.thread.ThreadWithHandler r1, java.lang.String r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r2)
                return
        }

        @Override
        protected void onLooperPrepared() {
                r5 = this;
                super.onLooperPrepared()
                android.os.Looper r0 = r5.getLooper()
                com.ss.android.socialbase.downloader.thread.ThreadWithHandler r1 = r5.this$0
                java.lang.Object r1 = com.ss.android.socialbase.downloader.thread.ThreadWithHandler.access$000(r1)
                monitor-enter(r1)
                com.ss.android.socialbase.downloader.thread.ThreadWithHandler r2 = r5.this$0     // Catch: java.lang.Throwable -> L42
                android.os.Handler r3 = new android.os.Handler     // Catch: java.lang.Throwable -> L42
                r3.<init>(r0)     // Catch: java.lang.Throwable -> L42
                com.ss.android.socialbase.downloader.thread.ThreadWithHandler.access$102(r2, r3)     // Catch: java.lang.Throwable -> L42
                monitor-exit(r1)     // Catch: java.lang.Throwable -> L42
            L19:
                com.ss.android.socialbase.downloader.thread.ThreadWithHandler r0 = r5.this$0
                java.util.Queue r0 = com.ss.android.socialbase.downloader.thread.ThreadWithHandler.access$200(r0)
                boolean r0 = r0.isEmpty()
                if (r0 != 0) goto L41
                com.ss.android.socialbase.downloader.thread.ThreadWithHandler r0 = r5.this$0
                java.util.Queue r0 = com.ss.android.socialbase.downloader.thread.ThreadWithHandler.access$200(r0)
                java.lang.Object r0 = r0.poll()
                com.ss.android.socialbase.downloader.thread.ThreadWithHandler$MessageEntity r0 = (com.ss.android.socialbase.downloader.thread.ThreadWithHandler.MessageEntity) r0
                if (r0 == 0) goto L19
                com.ss.android.socialbase.downloader.thread.ThreadWithHandler r1 = r5.this$0
                android.os.Handler r1 = com.ss.android.socialbase.downloader.thread.ThreadWithHandler.access$100(r1)
                java.lang.Runnable r2 = r0.target
                long r3 = r0.delayMillis
                r1.postDelayed(r2, r3)
                goto L19
            L41:
                return
            L42:
                r0 = move-exception
                monitor-exit(r1)     // Catch: java.lang.Throwable -> L42
                throw r0
        }
    }

    private class MessageEntity {
        public long delayMillis;
        public java.lang.Runnable target;
        final com.ss.android.socialbase.downloader.thread.ThreadWithHandler this$0;

        public MessageEntity(com.ss.android.socialbase.downloader.thread.ThreadWithHandler r1, java.lang.Runnable r2, long r3) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.target = r2
                r0.delayMillis = r3
                return
        }
    }

    public ThreadWithHandler(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.lock = r0
            java.util.concurrent.ConcurrentLinkedQueue r0 = new java.util.concurrent.ConcurrentLinkedQueue
            r0.<init>()
            r1.mCacheQueue = r0
            com.ss.android.socialbase.downloader.thread.ThreadWithHandler$InnerThread r0 = new com.ss.android.socialbase.downloader.thread.ThreadWithHandler$InnerThread
            r0.<init>(r1, r2)
            r1.handlerThread = r0
            return
    }

    static java.lang.Object access$000(com.ss.android.socialbase.downloader.thread.ThreadWithHandler r0) {
            java.lang.Object r0 = r0.lock
            return r0
    }

    static android.os.Handler access$100(com.ss.android.socialbase.downloader.thread.ThreadWithHandler r0) {
            android.os.Handler r0 = r0.mHandler
            return r0
    }

    static android.os.Handler access$102(com.ss.android.socialbase.downloader.thread.ThreadWithHandler r0, android.os.Handler r1) {
            r0.mHandler = r1
            return r1
    }

    static java.util.Queue access$200(com.ss.android.socialbase.downloader.thread.ThreadWithHandler r0) {
            java.util.Queue<com.ss.android.socialbase.downloader.thread.ThreadWithHandler$MessageEntity> r0 = r0.mCacheQueue
            return r0
    }

    public void post(java.lang.Runnable r3) {
            r2 = this;
            r0 = 0
            r2.postDelayed(r3, r0)
            return
    }

    public void postDelayed(java.lang.Runnable r4, long r5) {
            r3 = this;
            android.os.Handler r0 = r3.mHandler
            if (r0 != 0) goto L1c
            java.lang.Object r0 = r3.lock
            monitor-enter(r0)
            android.os.Handler r1 = r3.mHandler     // Catch: java.lang.Throwable -> L19
            if (r1 != 0) goto L17
            java.util.Queue<com.ss.android.socialbase.downloader.thread.ThreadWithHandler$MessageEntity> r1 = r3.mCacheQueue     // Catch: java.lang.Throwable -> L19
            com.ss.android.socialbase.downloader.thread.ThreadWithHandler$MessageEntity r2 = new com.ss.android.socialbase.downloader.thread.ThreadWithHandler$MessageEntity     // Catch: java.lang.Throwable -> L19
            r2.<init>(r3, r4, r5)     // Catch: java.lang.Throwable -> L19
            r1.add(r2)     // Catch: java.lang.Throwable -> L19
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            return
        L17:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            goto L1c
        L19:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            throw r4
        L1c:
            android.os.Handler r0 = r3.mHandler
            r0.postDelayed(r4, r5)
            return
    }

    public void quit() {
            r1 = this;
            com.ss.android.socialbase.downloader.thread.ThreadWithHandler$InnerThread r0 = r1.handlerThread
            r0.quit()
            return
    }

    public void start() {
            r1 = this;
            com.ss.android.socialbase.downloader.thread.ThreadWithHandler$InnerThread r0 = r1.handlerThread
            r0.start()
            return
    }
}
