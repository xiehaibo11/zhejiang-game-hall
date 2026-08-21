package android.support.v7.util;

class MessageThreadUtil<T> implements android.support.v7.util.ThreadUtil<T> {

    class 1 implements android.support.v7.util.ThreadUtil.MainThreadCallback<T> {
        static final int ADD_TILE = 2;
        static final int REMOVE_TILE = 3;
        static final int UPDATE_ITEM_COUNT = 1;
        private final android.os.Handler mMainThreadHandler;
        private java.lang.Runnable mMainThreadRunnable;
        final android.support.v7.util.MessageThreadUtil.MessageQueue mQueue;
        final android.support.v7.util.MessageThreadUtil this$0;
        final android.support.v7.util.ThreadUtil.MainThreadCallback val$callback;


        1(android.support.v7.util.MessageThreadUtil r1, android.support.v7.util.ThreadUtil.MainThreadCallback r2) {
                r0 = this;
                r0.this$0 = r1
                r0.val$callback = r2
                r0.<init>()
                android.support.v7.util.MessageThreadUtil$MessageQueue r1 = new android.support.v7.util.MessageThreadUtil$MessageQueue
                r1.<init>()
                r0.mQueue = r1
                android.os.Handler r1 = new android.os.Handler
                android.os.Looper r2 = android.os.Looper.getMainLooper()
                r1.<init>(r2)
                r0.mMainThreadHandler = r1
                android.support.v7.util.MessageThreadUtil$1$1 r1 = new android.support.v7.util.MessageThreadUtil$1$1
                r1.<init>(r0)
                r0.mMainThreadRunnable = r1
                return
        }

        private void sendMessage(android.support.v7.util.MessageThreadUtil.SyncQueueItem r2) {
                r1 = this;
                android.support.v7.util.MessageThreadUtil$MessageQueue r0 = r1.mQueue
                r0.sendMessage(r2)
                android.os.Handler r2 = r1.mMainThreadHandler
                java.lang.Runnable r0 = r1.mMainThreadRunnable
                r2.post(r0)
                return
        }

        @Override
        public void addTile(int r2, android.support.v7.util.TileList.Tile<T> r3) {
                r1 = this;
                r0 = 2
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r2 = android.support.v7.util.MessageThreadUtil.SyncQueueItem.obtainMessage(r0, r2, r3)
                r1.sendMessage(r2)
                return
        }

        @Override
        public void removeTile(int r2, int r3) {
                r1 = this;
                r0 = 3
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r2 = android.support.v7.util.MessageThreadUtil.SyncQueueItem.obtainMessage(r0, r2, r3)
                r1.sendMessage(r2)
                return
        }

        @Override
        public void updateItemCount(int r2, int r3) {
                r1 = this;
                r0 = 1
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r2 = android.support.v7.util.MessageThreadUtil.SyncQueueItem.obtainMessage(r0, r2, r3)
                r1.sendMessage(r2)
                return
        }
    }

    class 2 implements android.support.v7.util.ThreadUtil.BackgroundCallback<T> {
        static final int LOAD_TILE = 3;
        static final int RECYCLE_TILE = 4;
        static final int REFRESH = 1;
        static final int UPDATE_RANGE = 2;
        private java.lang.Runnable mBackgroundRunnable;
        java.util.concurrent.atomic.AtomicBoolean mBackgroundRunning;
        private final java.util.concurrent.Executor mExecutor;
        final android.support.v7.util.MessageThreadUtil.MessageQueue mQueue;
        final android.support.v7.util.MessageThreadUtil this$0;
        final android.support.v7.util.ThreadUtil.BackgroundCallback val$callback;


        2(android.support.v7.util.MessageThreadUtil r1, android.support.v7.util.ThreadUtil.BackgroundCallback r2) {
                r0 = this;
                r0.this$0 = r1
                r0.val$callback = r2
                r0.<init>()
                android.support.v7.util.MessageThreadUtil$MessageQueue r1 = new android.support.v7.util.MessageThreadUtil$MessageQueue
                r1.<init>()
                r0.mQueue = r1
                java.util.concurrent.Executor r1 = android.os.AsyncTask.THREAD_POOL_EXECUTOR
                r0.mExecutor = r1
                java.util.concurrent.atomic.AtomicBoolean r1 = new java.util.concurrent.atomic.AtomicBoolean
                r2 = 0
                r1.<init>(r2)
                r0.mBackgroundRunning = r1
                android.support.v7.util.MessageThreadUtil$2$1 r1 = new android.support.v7.util.MessageThreadUtil$2$1
                r1.<init>(r0)
                r0.mBackgroundRunnable = r1
                return
        }

        private void maybeExecuteBackgroundRunnable() {
                r3 = this;
                java.util.concurrent.atomic.AtomicBoolean r0 = r3.mBackgroundRunning
                r1 = 0
                r2 = 1
                boolean r0 = r0.compareAndSet(r1, r2)
                if (r0 == 0) goto L11
                java.util.concurrent.Executor r0 = r3.mExecutor
                java.lang.Runnable r1 = r3.mBackgroundRunnable
                r0.execute(r1)
            L11:
                return
        }

        private void sendMessage(android.support.v7.util.MessageThreadUtil.SyncQueueItem r2) {
                r1 = this;
                android.support.v7.util.MessageThreadUtil$MessageQueue r0 = r1.mQueue
                r0.sendMessage(r2)
                r1.maybeExecuteBackgroundRunnable()
                return
        }

        private void sendMessageAtFrontOfQueue(android.support.v7.util.MessageThreadUtil.SyncQueueItem r2) {
                r1 = this;
                android.support.v7.util.MessageThreadUtil$MessageQueue r0 = r1.mQueue
                r0.sendMessageAtFrontOfQueue(r2)
                r1.maybeExecuteBackgroundRunnable()
                return
        }

        @Override
        public void loadTile(int r2, int r3) {
                r1 = this;
                r0 = 3
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r2 = android.support.v7.util.MessageThreadUtil.SyncQueueItem.obtainMessage(r0, r2, r3)
                r1.sendMessage(r2)
                return
        }

        @Override
        public void recycleTile(android.support.v7.util.TileList.Tile<T> r3) {
                r2 = this;
                r0 = 4
                r1 = 0
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r3 = android.support.v7.util.MessageThreadUtil.SyncQueueItem.obtainMessage(r0, r1, r3)
                r2.sendMessage(r3)
                return
        }

        @Override
        public void refresh(int r3) {
                r2 = this;
                r0 = 1
                r1 = 0
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r3 = android.support.v7.util.MessageThreadUtil.SyncQueueItem.obtainMessage(r0, r3, r1)
                r2.sendMessageAtFrontOfQueue(r3)
                return
        }

        @Override
        public void updateRange(int r8, int r9, int r10, int r11, int r12) {
                r7 = this;
                r0 = 2
                r6 = 0
                r1 = r8
                r2 = r9
                r3 = r10
                r4 = r11
                r5 = r12
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r8 = android.support.v7.util.MessageThreadUtil.SyncQueueItem.obtainMessage(r0, r1, r2, r3, r4, r5, r6)
                r7.sendMessageAtFrontOfQueue(r8)
                return
        }
    }

    static class MessageQueue {
        private android.support.v7.util.MessageThreadUtil.SyncQueueItem mRoot;

        MessageQueue() {
                r0 = this;
                r0.<init>()
                return
        }

        synchronized android.support.v7.util.MessageThreadUtil.SyncQueueItem next() {
                r2 = this;
                monitor-enter(r2)
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r0 = r2.mRoot     // Catch: java.lang.Throwable -> L12
                if (r0 != 0) goto L8
                r0 = 0
                monitor-exit(r2)
                return r0
            L8:
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r0 = r2.mRoot     // Catch: java.lang.Throwable -> L12
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r1 = r2.mRoot     // Catch: java.lang.Throwable -> L12
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r1 = r1.next     // Catch: java.lang.Throwable -> L12
                r2.mRoot = r1     // Catch: java.lang.Throwable -> L12
                monitor-exit(r2)
                return r0
            L12:
                r0 = move-exception
                monitor-exit(r2)
                throw r0
        }

        synchronized void removeMessages(int r5) {
                r4 = this;
                monitor-enter(r4)
            L1:
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r0 = r4.mRoot     // Catch: java.lang.Throwable -> L32
                if (r0 == 0) goto L17
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r0 = r4.mRoot     // Catch: java.lang.Throwable -> L32
                int r0 = r0.what     // Catch: java.lang.Throwable -> L32
                if (r0 != r5) goto L17
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r0 = r4.mRoot     // Catch: java.lang.Throwable -> L32
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r1 = r4.mRoot     // Catch: java.lang.Throwable -> L32
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r1 = r1.next     // Catch: java.lang.Throwable -> L32
                r4.mRoot = r1     // Catch: java.lang.Throwable -> L32
                r0.recycle()     // Catch: java.lang.Throwable -> L32
                goto L1
            L17:
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r0 = r4.mRoot     // Catch: java.lang.Throwable -> L32
                if (r0 == 0) goto L30
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r0 = r4.mRoot     // Catch: java.lang.Throwable -> L32
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r1 = r0.next     // Catch: java.lang.Throwable -> L32
            L1f:
                if (r1 == 0) goto L30
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r2 = r1.next     // Catch: java.lang.Throwable -> L32
                int r3 = r1.what     // Catch: java.lang.Throwable -> L32
                if (r3 != r5) goto L2d
                r0.next = r2     // Catch: java.lang.Throwable -> L32
                r1.recycle()     // Catch: java.lang.Throwable -> L32
                goto L2e
            L2d:
                r0 = r1
            L2e:
                r1 = r2
                goto L1f
            L30:
                monitor-exit(r4)
                return
            L32:
                r5 = move-exception
                monitor-exit(r4)
                throw r5
        }

        synchronized void sendMessage(android.support.v7.util.MessageThreadUtil.SyncQueueItem r3) {
                r2 = this;
                monitor-enter(r2)
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r0 = r2.mRoot     // Catch: java.lang.Throwable -> L16
                if (r0 != 0) goto L9
                r2.mRoot = r3     // Catch: java.lang.Throwable -> L16
                monitor-exit(r2)
                return
            L9:
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r0 = r2.mRoot     // Catch: java.lang.Throwable -> L16
            Lb:
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r1 = r0.next     // Catch: java.lang.Throwable -> L16
                if (r1 == 0) goto L12
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r0 = r0.next     // Catch: java.lang.Throwable -> L16
                goto Lb
            L12:
                r0.next = r3     // Catch: java.lang.Throwable -> L16
                monitor-exit(r2)
                return
            L16:
                r3 = move-exception
                monitor-exit(r2)
                throw r3
        }

        synchronized void sendMessageAtFrontOfQueue(android.support.v7.util.MessageThreadUtil.SyncQueueItem r2) {
                r1 = this;
                monitor-enter(r1)
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r0 = r1.mRoot     // Catch: java.lang.Throwable -> L9
                r2.next = r0     // Catch: java.lang.Throwable -> L9
                r1.mRoot = r2     // Catch: java.lang.Throwable -> L9
                monitor-exit(r1)
                return
            L9:
                r2 = move-exception
                monitor-exit(r1)
                throw r2
        }
    }

    static class SyncQueueItem {
        private static android.support.v7.util.MessageThreadUtil.SyncQueueItem sPool;
        private static final java.lang.Object sPoolLock = null;
        public int arg1;
        public int arg2;
        public int arg3;
        public int arg4;
        public int arg5;
        public java.lang.Object data;
        android.support.v7.util.MessageThreadUtil.SyncQueueItem next;
        public int what;

        static {
                java.lang.Object r0 = new java.lang.Object
                r0.<init>()
                android.support.v7.util.MessageThreadUtil.SyncQueueItem.sPoolLock = r0
                return
        }

        SyncQueueItem() {
                r0 = this;
                r0.<init>()
                return
        }

        static android.support.v7.util.MessageThreadUtil.SyncQueueItem obtainMessage(int r7, int r8, int r9) {
                r3 = 0
                r4 = 0
                r5 = 0
                r6 = 0
                r0 = r7
                r1 = r8
                r2 = r9
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r7 = obtainMessage(r0, r1, r2, r3, r4, r5, r6)
                return r7
        }

        static android.support.v7.util.MessageThreadUtil.SyncQueueItem obtainMessage(int r3, int r4, int r5, int r6, int r7, int r8, java.lang.Object r9) {
                java.lang.Object r0 = android.support.v7.util.MessageThreadUtil.SyncQueueItem.sPoolLock
                monitor-enter(r0)
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r1 = android.support.v7.util.MessageThreadUtil.SyncQueueItem.sPool     // Catch: java.lang.Throwable -> L28
                if (r1 != 0) goto Ld
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r1 = new android.support.v7.util.MessageThreadUtil$SyncQueueItem     // Catch: java.lang.Throwable -> L28
                r1.<init>()     // Catch: java.lang.Throwable -> L28
                goto L18
            Ld:
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r1 = android.support.v7.util.MessageThreadUtil.SyncQueueItem.sPool     // Catch: java.lang.Throwable -> L28
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r2 = android.support.v7.util.MessageThreadUtil.SyncQueueItem.sPool     // Catch: java.lang.Throwable -> L28
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r2 = r2.next     // Catch: java.lang.Throwable -> L28
                android.support.v7.util.MessageThreadUtil.SyncQueueItem.sPool = r2     // Catch: java.lang.Throwable -> L28
                r2 = 0
                r1.next = r2     // Catch: java.lang.Throwable -> L28
            L18:
                r1.what = r3     // Catch: java.lang.Throwable -> L28
                r1.arg1 = r4     // Catch: java.lang.Throwable -> L28
                r1.arg2 = r5     // Catch: java.lang.Throwable -> L28
                r1.arg3 = r6     // Catch: java.lang.Throwable -> L28
                r1.arg4 = r7     // Catch: java.lang.Throwable -> L28
                r1.arg5 = r8     // Catch: java.lang.Throwable -> L28
                r1.data = r9     // Catch: java.lang.Throwable -> L28
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L28
                return r1
            L28:
                r3 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L28
                throw r3
        }

        static android.support.v7.util.MessageThreadUtil.SyncQueueItem obtainMessage(int r7, int r8, java.lang.Object r9) {
                r2 = 0
                r3 = 0
                r4 = 0
                r5 = 0
                r0 = r7
                r1 = r8
                r6 = r9
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r7 = obtainMessage(r0, r1, r2, r3, r4, r5, r6)
                return r7
        }

        void recycle() {
                r2 = this;
                r0 = 0
                r2.next = r0
                r1 = 0
                r2.arg5 = r1
                r2.arg4 = r1
                r2.arg3 = r1
                r2.arg2 = r1
                r2.arg1 = r1
                r2.what = r1
                r2.data = r0
                java.lang.Object r0 = android.support.v7.util.MessageThreadUtil.SyncQueueItem.sPoolLock
                monitor-enter(r0)
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r1 = android.support.v7.util.MessageThreadUtil.SyncQueueItem.sPool     // Catch: java.lang.Throwable -> L21
                if (r1 == 0) goto L1d
                android.support.v7.util.MessageThreadUtil$SyncQueueItem r1 = android.support.v7.util.MessageThreadUtil.SyncQueueItem.sPool     // Catch: java.lang.Throwable -> L21
                r2.next = r1     // Catch: java.lang.Throwable -> L21
            L1d:
                android.support.v7.util.MessageThreadUtil.SyncQueueItem.sPool = r2     // Catch: java.lang.Throwable -> L21
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L21
                return
            L21:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L21
                throw r1
        }
    }

    MessageThreadUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public android.support.v7.util.ThreadUtil.BackgroundCallback<T> getBackgroundProxy(android.support.v7.util.ThreadUtil.BackgroundCallback<T> r2) {
            r1 = this;
            android.support.v7.util.MessageThreadUtil$2 r0 = new android.support.v7.util.MessageThreadUtil$2
            r0.<init>(r1, r2)
            return r0
    }

    @Override
    public android.support.v7.util.ThreadUtil.MainThreadCallback<T> getMainThreadProxy(android.support.v7.util.ThreadUtil.MainThreadCallback<T> r2) {
            r1 = this;
            android.support.v7.util.MessageThreadUtil$1 r0 = new android.support.v7.util.MessageThreadUtil$1
            r0.<init>(r1, r2)
            return r0
    }
}
