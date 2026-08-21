package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public final class Loader implements com.mbridge.msdk.playercommon.exoplayer2.upstream.LoaderErrorThrower {
    public static final int DONT_RETRY = 2;
    public static final int DONT_RETRY_FATAL = 3;
    public static final int RETRY = 0;
    public static final int RETRY_RESET_ERROR_COUNT = 1;
    private com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.LoadTask<? extends com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.Loadable> currentTask;
    private final java.util.concurrent.ExecutorService downloadExecutorService;
    private java.io.IOException fatalError;

    public interface Callback<T extends com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.Loadable> {
        void onLoadCanceled(T r1, long r2, long r4, boolean r6);

        void onLoadCompleted(T r1, long r2, long r4);

        int onLoadError(T r1, long r2, long r4, java.io.IOException r6);
    }

    private final class LoadTask<T extends com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.Loadable> extends android.os.Handler implements java.lang.Runnable {
        private static final int MSG_CANCEL = 1;
        private static final int MSG_END_OF_SOURCE = 2;
        private static final int MSG_FATAL_ERROR = 4;
        private static final int MSG_IO_EXCEPTION = 3;
        private static final int MSG_START = 0;
        private static final java.lang.String TAG = "LoadTask";
        private com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.Callback<T> callback;
        private volatile boolean canceled;
        private java.io.IOException currentError;
        public final int defaultMinRetryCount;
        private int errorCount;
        private volatile java.lang.Thread executorThread;
        private final T loadable;
        private volatile boolean released;
        private final long startTimeMs;
        final com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader this$0;

        public LoadTask(com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r1, android.os.Looper r2, T r3, com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.Callback<T> r4, int r5, long r6) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r2)
                r0.loadable = r3
                r0.callback = r4
                r0.defaultMinRetryCount = r5
                r0.startTimeMs = r6
                return
        }

        private void execute() {
                r2 = this;
                r0 = 0
                r2.currentError = r0
                com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r0 = r2.this$0
                java.util.concurrent.ExecutorService r0 = com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.access$200(r0)
                com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r1 = r2.this$0
                com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$LoadTask r1 = com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.access$000(r1)
                r0.execute(r1)
                return
        }

        private void finish() {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r0 = r2.this$0
                r1 = 0
                com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.access$002(r0, r1)
                return
        }

        private long getRetryDelayMillis() {
                r2 = this;
                int r0 = r2.errorCount
                int r0 = r0 + (-1)
                int r0 = r0 * 1000
                r1 = 5000(0x1388, float:7.006E-42)
                int r0 = java.lang.Math.min(r0, r1)
                long r0 = (long) r0
                return r0
        }

        public final void cancel(boolean r10) {
                r9 = this;
                r9.released = r10
                r0 = 0
                r9.currentError = r0
                r1 = 0
                boolean r2 = r9.hasMessages(r1)
                r3 = 1
                if (r2 == 0) goto L16
                r9.removeMessages(r1)
                if (r10 != 0) goto L26
                r9.sendEmptyMessage(r3)
                goto L26
            L16:
                r9.canceled = r3
                T extends com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$Loadable r1 = r9.loadable
                r1.cancelLoad()
                java.lang.Thread r1 = r9.executorThread
                if (r1 == 0) goto L26
                java.lang.Thread r1 = r9.executorThread
                r1.interrupt()
            L26:
                if (r10 == 0) goto L3d
                r9.finish()
                long r4 = android.os.SystemClock.elapsedRealtime()
                com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$Callback<T extends com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$Loadable> r2 = r9.callback
                T extends com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$Loadable r3 = r9.loadable
                long r6 = r9.startTimeMs
                long r6 = r4 - r6
                r8 = 1
                r2.onLoadCanceled(r3, r4, r6, r8)
                r9.callback = r0
            L3d:
                return
        }

        @Override
        public final void handleMessage(android.os.Message r12) {
                r11 = this;
                boolean r0 = r11.released
                if (r0 == 0) goto L5
                return
            L5:
                int r0 = r12.what
                if (r0 != 0) goto Ld
                r11.execute()
                return
            Ld:
                int r0 = r12.what
                r1 = 4
                if (r0 == r1) goto L85
                r11.finish()
                long r4 = android.os.SystemClock.elapsedRealtime()
                long r0 = r11.startTimeMs
                long r6 = r4 - r0
                boolean r0 = r11.canceled
                if (r0 == 0) goto L2a
                com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$Callback<T extends com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$Loadable> r2 = r11.callback
                T extends com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$Loadable r3 = r11.loadable
                r8 = 0
                r2.onLoadCanceled(r3, r4, r6, r8)
                return
            L2a:
                int r0 = r12.what
                r1 = 1
                if (r0 == r1) goto L7c
                r9 = 2
                if (r0 == r9) goto L61
                r10 = 3
                if (r0 == r10) goto L36
                goto L84
            L36:
                java.lang.Object r12 = r12.obj
                r8 = r12
                java.io.IOException r8 = (java.io.IOException) r8
                r11.currentError = r8
                com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$Callback<T extends com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$Loadable> r2 = r11.callback
                T extends com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$Loadable r3 = r11.loadable
                int r12 = r2.onLoadError(r3, r4, r6, r8)
                if (r12 != r10) goto L4f
                com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r12 = r11.this$0
                java.io.IOException r0 = r11.currentError
                com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.access$102(r12, r0)
                goto L84
            L4f:
                if (r12 == r9) goto L84
                if (r12 != r1) goto L54
                goto L57
            L54:
                int r12 = r11.errorCount
                int r1 = r1 + r12
            L57:
                r11.errorCount = r1
                long r0 = r11.getRetryDelayMillis()
                r11.start(r0)
                goto L84
            L61:
                com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$Callback<T extends com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$Loadable> r2 = r11.callback     // Catch: java.lang.RuntimeException -> L69
                T extends com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$Loadable r3 = r11.loadable     // Catch: java.lang.RuntimeException -> L69
                r2.onLoadCompleted(r3, r4, r6)     // Catch: java.lang.RuntimeException -> L69
                goto L84
            L69:
                r12 = move-exception
                java.lang.String r0 = "LoadTask"
                java.lang.String r1 = "Unexpected exception handling load completed"
                android.util.Log.e(r0, r1, r12)
                com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r0 = r11.this$0
                com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$UnexpectedLoaderException r1 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$UnexpectedLoaderException
                r1.<init>(r12)
                com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.access$102(r0, r1)
                goto L84
            L7c:
                com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$Callback<T extends com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$Loadable> r2 = r11.callback
                T extends com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$Loadable r3 = r11.loadable
                r8 = 0
                r2.onLoadCanceled(r3, r4, r6, r8)
            L84:
                return
            L85:
                java.lang.Object r12 = r12.obj
                java.lang.Error r12 = (java.lang.Error) r12
                throw r12
        }

        public final void maybeThrowError(int r3) throws java.io.IOException {
                r2 = this;
                java.io.IOException r0 = r2.currentError
                if (r0 == 0) goto La
                int r1 = r2.errorCount
                if (r1 > r3) goto L9
                goto La
            L9:
                throw r0
            La:
                return
        }

        @Override
        public final void run() {
                r5 = this;
                java.lang.String r0 = "LoadTask"
                r1 = 2
                r2 = 3
                java.lang.Thread r3 = java.lang.Thread.currentThread()     // Catch: java.lang.Error -> L42 java.lang.OutOfMemoryError -> L55 java.lang.Exception -> L6c java.lang.InterruptedException -> L83 java.io.IOException -> L90
                r5.executorThread = r3     // Catch: java.lang.Error -> L42 java.lang.OutOfMemoryError -> L55 java.lang.Exception -> L6c java.lang.InterruptedException -> L83 java.io.IOException -> L90
                boolean r3 = r5.canceled     // Catch: java.lang.Error -> L42 java.lang.OutOfMemoryError -> L55 java.lang.Exception -> L6c java.lang.InterruptedException -> L83 java.io.IOException -> L90
                if (r3 != 0) goto L3a
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Error -> L42 java.lang.OutOfMemoryError -> L55 java.lang.Exception -> L6c java.lang.InterruptedException -> L83 java.io.IOException -> L90
                r3.<init>()     // Catch: java.lang.Error -> L42 java.lang.OutOfMemoryError -> L55 java.lang.Exception -> L6c java.lang.InterruptedException -> L83 java.io.IOException -> L90
                java.lang.String r4 = "load:"
                r3.append(r4)     // Catch: java.lang.Error -> L42 java.lang.OutOfMemoryError -> L55 java.lang.Exception -> L6c java.lang.InterruptedException -> L83 java.io.IOException -> L90
                T extends com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$Loadable r4 = r5.loadable     // Catch: java.lang.Error -> L42 java.lang.OutOfMemoryError -> L55 java.lang.Exception -> L6c java.lang.InterruptedException -> L83 java.io.IOException -> L90
                java.lang.Class r4 = r4.getClass()     // Catch: java.lang.Error -> L42 java.lang.OutOfMemoryError -> L55 java.lang.Exception -> L6c java.lang.InterruptedException -> L83 java.io.IOException -> L90
                java.lang.String r4 = r4.getSimpleName()     // Catch: java.lang.Error -> L42 java.lang.OutOfMemoryError -> L55 java.lang.Exception -> L6c java.lang.InterruptedException -> L83 java.io.IOException -> L90
                r3.append(r4)     // Catch: java.lang.Error -> L42 java.lang.OutOfMemoryError -> L55 java.lang.Exception -> L6c java.lang.InterruptedException -> L83 java.io.IOException -> L90
                java.lang.String r3 = r3.toString()     // Catch: java.lang.Error -> L42 java.lang.OutOfMemoryError -> L55 java.lang.Exception -> L6c java.lang.InterruptedException -> L83 java.io.IOException -> L90
                com.mbridge.msdk.playercommon.exoplayer2.util.TraceUtil.beginSection(r3)     // Catch: java.lang.Error -> L42 java.lang.OutOfMemoryError -> L55 java.lang.Exception -> L6c java.lang.InterruptedException -> L83 java.io.IOException -> L90
                T extends com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$Loadable r3 = r5.loadable     // Catch: java.lang.Throwable -> L35
                r3.load()     // Catch: java.lang.Throwable -> L35
                com.mbridge.msdk.playercommon.exoplayer2.util.TraceUtil.endSection()     // Catch: java.lang.Error -> L42 java.lang.OutOfMemoryError -> L55 java.lang.Exception -> L6c java.lang.InterruptedException -> L83 java.io.IOException -> L90
                goto L3a
            L35:
                r3 = move-exception
                com.mbridge.msdk.playercommon.exoplayer2.util.TraceUtil.endSection()     // Catch: java.lang.Error -> L42 java.lang.OutOfMemoryError -> L55 java.lang.Exception -> L6c java.lang.InterruptedException -> L83 java.io.IOException -> L90
                throw r3     // Catch: java.lang.Error -> L42 java.lang.OutOfMemoryError -> L55 java.lang.Exception -> L6c java.lang.InterruptedException -> L83 java.io.IOException -> L90
            L3a:
                boolean r3 = r5.released     // Catch: java.lang.Error -> L42 java.lang.OutOfMemoryError -> L55 java.lang.Exception -> L6c java.lang.InterruptedException -> L83 java.io.IOException -> L90
                if (r3 != 0) goto L9c
                r5.sendEmptyMessage(r1)     // Catch: java.lang.Error -> L42 java.lang.OutOfMemoryError -> L55 java.lang.Exception -> L6c java.lang.InterruptedException -> L83 java.io.IOException -> L90
                goto L9c
            L42:
                r1 = move-exception
                java.lang.String r2 = "Unexpected error loading stream"
                android.util.Log.e(r0, r2, r1)
                boolean r0 = r5.released
                if (r0 != 0) goto L54
                r0 = 4
                android.os.Message r0 = r5.obtainMessage(r0, r1)
                r0.sendToTarget()
            L54:
                throw r1
            L55:
                r1 = move-exception
                java.lang.String r3 = "OutOfMemory error loading stream"
                android.util.Log.e(r0, r3, r1)
                boolean r0 = r5.released
                if (r0 != 0) goto L9c
                com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$UnexpectedLoaderException r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$UnexpectedLoaderException
                r0.<init>(r1)
                android.os.Message r0 = r5.obtainMessage(r2, r0)
                r0.sendToTarget()
                goto L9c
            L6c:
                r1 = move-exception
                java.lang.String r3 = "Unexpected exception loading stream"
                android.util.Log.e(r0, r3, r1)
                boolean r0 = r5.released
                if (r0 != 0) goto L9c
                com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$UnexpectedLoaderException r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$UnexpectedLoaderException
                r0.<init>(r1)
                android.os.Message r0 = r5.obtainMessage(r2, r0)
                r0.sendToTarget()
                goto L9c
            L83:
                boolean r0 = r5.canceled
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
                boolean r0 = r5.released
                if (r0 != 0) goto L9c
                r5.sendEmptyMessage(r1)
                goto L9c
            L90:
                r0 = move-exception
                boolean r1 = r5.released
                if (r1 != 0) goto L9c
                android.os.Message r0 = r5.obtainMessage(r2, r0)
                r0.sendToTarget()
            L9c:
                return
        }

        public final void start(long r5) {
                r4 = this;
                com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r0 = r4.this$0
                com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$LoadTask r0 = com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.access$000(r0)
                r1 = 0
                if (r0 != 0) goto Lb
                r0 = 1
                goto Lc
            Lb:
                r0 = r1
            Lc:
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
                com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r0 = r4.this$0
                com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.access$002(r0, r4)
                r2 = 0
                int r0 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
                if (r0 <= 0) goto L1e
                r4.sendEmptyMessageDelayed(r1, r5)
                goto L21
            L1e:
                r4.execute()
            L21:
                return
        }
    }

    public interface Loadable {
        void cancelLoad();

        void load() throws java.io.IOException, java.lang.InterruptedException;
    }

    public interface ReleaseCallback {
        void onLoaderReleased();
    }

    private static final class ReleaseTask implements java.lang.Runnable {
        private final com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.ReleaseCallback callback;

        public ReleaseTask(com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.ReleaseCallback r1) {
                r0 = this;
                r0.<init>()
                r0.callback = r1
                return
        }

        @Override
        public final void run() {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$ReleaseCallback r0 = r1.callback
                r0.onLoaderReleased()
                return
        }
    }

    public @interface RetryAction {
    }

    public static final class UnexpectedLoaderException extends java.io.IOException {
        public UnexpectedLoaderException(java.lang.Throwable r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Unexpected "
                r0.append(r1)
                java.lang.Class r1 = r3.getClass()
                java.lang.String r1 = r1.getSimpleName()
                r0.append(r1)
                java.lang.String r1 = ": "
                r0.append(r1)
                java.lang.String r1 = r3.getMessage()
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                r2.<init>(r0, r3)
                return
        }
    }

    public Loader(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            java.util.concurrent.ExecutorService r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.newSingleThreadExecutor(r1)
            r0.downloadExecutorService = r1
            return
    }

    static com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.LoadTask access$000(com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r0) {
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$LoadTask<? extends com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$Loadable> r0 = r0.currentTask
            return r0
    }

    static com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.LoadTask access$002(com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r0, com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.LoadTask r1) {
            r0.currentTask = r1
            return r1
    }

    static java.io.IOException access$102(com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r0, java.io.IOException r1) {
            r0.fatalError = r1
            return r1
    }

    static java.util.concurrent.ExecutorService access$200(com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r0) {
            java.util.concurrent.ExecutorService r0 = r0.downloadExecutorService
            return r0
    }

    public final void cancelLoading() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$LoadTask<? extends com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$Loadable> r0 = r2.currentTask
            r1 = 0
            r0.cancel(r1)
            return
    }

    public final boolean isLoading() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$LoadTask<? extends com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$Loadable> r0 = r1.currentTask
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    @Override
    public final void maybeThrowError() throws java.io.IOException {
            r1 = this;
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            r1.maybeThrowError(r0)
            return
    }

    @Override
    public final void maybeThrowError(int r3) throws java.io.IOException {
            r2 = this;
            java.io.IOException r0 = r2.fatalError
            if (r0 != 0) goto L12
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$LoadTask<? extends com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$Loadable> r0 = r2.currentTask
            if (r0 == 0) goto L11
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r3 != r1) goto Le
            int r3 = r0.defaultMinRetryCount
        Le:
            r0.maybeThrowError(r3)
        L11:
            return
        L12:
            throw r0
    }

    public final void release() {
            r1 = this;
            r0 = 0
            r1.release(r0)
            return
    }

    public final void release(com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.ReleaseCallback r3) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$LoadTask<? extends com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$Loadable> r0 = r2.currentTask
            if (r0 == 0) goto L8
            r1 = 1
            r0.cancel(r1)
        L8:
            if (r3 == 0) goto L14
            java.util.concurrent.ExecutorService r0 = r2.downloadExecutorService
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$ReleaseTask r1 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$ReleaseTask
            r1.<init>(r3)
            r0.execute(r1)
        L14:
            java.util.concurrent.ExecutorService r3 = r2.downloadExecutorService
            r3.shutdown()
            return
    }

    public final <T extends com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.Loadable> long startLoading(T r12, com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.Callback<T> r13, int r14) {
            r11 = this;
            android.os.Looper r2 = android.os.Looper.myLooper()
            if (r2 == 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            r0 = 0
            r11.fatalError = r0
            long r8 = android.os.SystemClock.elapsedRealtime()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$LoadTask r10 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader$LoadTask
            r0 = r10
            r1 = r11
            r3 = r12
            r4 = r13
            r5 = r14
            r6 = r8
            r0.<init>(r1, r2, r3, r4, r5, r6)
            r12 = 0
            r10.start(r12)
            return r8
    }
}
