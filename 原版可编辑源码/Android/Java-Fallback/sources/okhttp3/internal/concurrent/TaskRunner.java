package okhttp3.internal.concurrent;

@kotlin.Metadata(d1 = {"\u0000J\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010!\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\r\u0018\u0000 #2\u00020\u0001:\u0003\"#$B\r\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004J\f\u0010\u0013\u001a\b\u0012\u0004\u0012\u00020\t0\u0014J\u0018\u0010\u0015\u001a\u00020\u00162\u0006\u0010\u0017\u001a\u00020\u00182\u0006\u0010\u0019\u001a\u00020\rH\u0002J\b\u0010\u001a\u001a\u0004\u0018\u00010\u0018J\u0010\u0010\u001b\u001a\u00020\u00162\u0006\u0010\u0017\u001a\u00020\u0018H\u0002J\u0006\u0010\u001c\u001a\u00020\u0016J\u0015\u0010\u001d\u001a\u00020\u00162\u0006\u0010\u001e\u001a\u00020\tH\u0000¢\u0006\u0002\b\u001fJ\u0006\u0010 \u001a\u00020\tJ\u0010\u0010!\u001a\u00020\u00162\u0006\u0010\u0017\u001a\u00020\u0018H\u0002R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006R\u0014\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\t0\bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u000fX\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\u0010\u001a\b\u0012\u0004\u0012\u00020\t0\bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0011\u001a\u00020\u0012X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006%"}, d2 = {"Lokhttp3/internal/concurrent/TaskRunner;", "", "backend", "Lokhttp3/internal/concurrent/TaskRunner$Backend;", "(Lokhttp3/internal/concurrent/TaskRunner$Backend;)V", "getBackend", "()Lokhttp3/internal/concurrent/TaskRunner$Backend;", "busyQueues", "", "Lokhttp3/internal/concurrent/TaskQueue;", "coordinatorWaiting", "", "coordinatorWakeUpAt", "", "nextQueueName", "", "readyQueues", "runnable", "Ljava/lang/Runnable;", "activeQueues", "", "afterRun", "", "task", "Lokhttp3/internal/concurrent/Task;", "delayNanos", "awaitTaskToRun", "beforeRun", "cancelAll", "kickCoordinator", "taskQueue", "kickCoordinator$okhttp", "newQueue", "runTask", "Backend", "Companion", "RealBackend", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class TaskRunner {
    public static final okhttp3.internal.concurrent.TaskRunner.Companion Companion = null;
    public static final okhttp3.internal.concurrent.TaskRunner INSTANCE = null;
    private static final java.util.logging.Logger logger = null;
    private final okhttp3.internal.concurrent.TaskRunner.Backend backend;
    private final java.util.List<okhttp3.internal.concurrent.TaskQueue> busyQueues;
    private boolean coordinatorWaiting;
    private long coordinatorWakeUpAt;
    private int nextQueueName;
    private final java.util.List<okhttp3.internal.concurrent.TaskQueue> readyQueues;
    private final java.lang.Runnable runnable;

    @kotlin.Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\bf\u0018\u00002\u00020\u0001J\u0010\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H&J\u0010\u0010\u0006\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H&J\u0018\u0010\u0007\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\b\u001a\u00020\tH&J\u0010\u0010\n\u001a\u00020\u00032\u0006\u0010\u000b\u001a\u00020\fH&J\b\u0010\r\u001a\u00020\tH&¨\u0006\u000e"}, d2 = {"Lokhttp3/internal/concurrent/TaskRunner$Backend;", "", "beforeTask", "", "taskRunner", "Lokhttp3/internal/concurrent/TaskRunner;", "coordinatorNotify", "coordinatorWait", "nanos", "", "execute", "runnable", "Ljava/lang/Runnable;", "nanoTime", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public interface Backend {
        void beforeTask(okhttp3.internal.concurrent.TaskRunner r1);

        void coordinatorNotify(okhttp3.internal.concurrent.TaskRunner r1);

        void coordinatorWait(okhttp3.internal.concurrent.TaskRunner r1, long r2);

        void execute(java.lang.Runnable r1);

        long nanoTime();
    }

    @kotlin.Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002R\u0010\u0010\u0003\u001a\u00020\u00048\u0006X\u0087\u0004¢\u0006\u0002\n\u0000R\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\b¨\u0006\t"}, d2 = {"Lokhttp3/internal/concurrent/TaskRunner$Companion;", "", "()V", "INSTANCE", "Lokhttp3/internal/concurrent/TaskRunner;", "logger", "Ljava/util/logging/Logger;", "getLogger", "()Ljava/util/logging/Logger;", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
                r0 = this;
                r0.<init>()
                return
        }

        public Companion(kotlin.jvm.internal.DefaultConstructorMarker r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public final java.util.logging.Logger getLogger() {
                r1 = this;
                java.util.logging.Logger r0 = okhttp3.internal.concurrent.TaskRunner.access$getLogger$cp()
                return r0
        }
    }

    @kotlin.Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\u0018\u00002\u00020\u0001B\r\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004J\u0010\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\nH\u0016J\u0010\u0010\u000b\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\nH\u0016J\u0018\u0010\f\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\r\u001a\u00020\u000eH\u0016J\u0010\u0010\u000f\u001a\u00020\b2\u0006\u0010\u0010\u001a\u00020\u0011H\u0016J\b\u0010\u0012\u001a\u00020\u000eH\u0016J\u0006\u0010\u0013\u001a\u00020\bR\u000e\u0010\u0005\u001a\u00020\u0006X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0014"}, d2 = {"Lokhttp3/internal/concurrent/TaskRunner$RealBackend;", "Lokhttp3/internal/concurrent/TaskRunner$Backend;", "threadFactory", "Ljava/util/concurrent/ThreadFactory;", "(Ljava/util/concurrent/ThreadFactory;)V", "executor", "Ljava/util/concurrent/ThreadPoolExecutor;", "beforeTask", "", "taskRunner", "Lokhttp3/internal/concurrent/TaskRunner;", "coordinatorNotify", "coordinatorWait", "nanos", "", "execute", "runnable", "Ljava/lang/Runnable;", "nanoTime", "shutdown", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class RealBackend implements okhttp3.internal.concurrent.TaskRunner.Backend {
        private final java.util.concurrent.ThreadPoolExecutor executor;

        public RealBackend(java.util.concurrent.ThreadFactory r10) {
                r9 = this;
                java.lang.String r0 = "threadFactory"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
                r9.<init>()
                java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
                java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.SECONDS
                java.util.concurrent.SynchronousQueue r1 = new java.util.concurrent.SynchronousQueue
                r1.<init>()
                r7 = r1
                java.util.concurrent.BlockingQueue r7 = (java.util.concurrent.BlockingQueue) r7
                r2 = 0
                r3 = 2147483647(0x7fffffff, float:NaN)
                r4 = 60
                r1 = r0
                r8 = r10
                r1.<init>(r2, r3, r4, r6, r7, r8)
                r9.executor = r0
                return
        }

        @Override
        public void beforeTask(okhttp3.internal.concurrent.TaskRunner r2) {
                r1 = this;
                java.lang.String r0 = "taskRunner"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                return
        }

        @Override
        public void coordinatorNotify(okhttp3.internal.concurrent.TaskRunner r2) {
                r1 = this;
                java.lang.String r0 = "taskRunner"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                java.lang.Object r2 = (java.lang.Object) r2
                r2.notify()
                return
        }

        @Override
        public void coordinatorWait(okhttp3.internal.concurrent.TaskRunner r8, long r9) throws java.lang.InterruptedException {
                r7 = this;
                java.lang.String r0 = "taskRunner"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
                r0 = 1000000(0xf4240, double:4.940656E-318)
                long r2 = r9 / r0
                long r0 = r0 * r2
                long r0 = r9 - r0
                r4 = 0
                int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
                if (r6 > 0) goto L17
                int r9 = (r9 > r4 ? 1 : (r9 == r4 ? 0 : -1))
                if (r9 <= 0) goto L1d
            L17:
                java.lang.Object r8 = (java.lang.Object) r8
                int r9 = (int) r0
                r8.wait(r2, r9)
            L1d:
                return
        }

        @Override
        public void execute(java.lang.Runnable r2) {
                r1 = this;
                java.lang.String r0 = "runnable"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                java.util.concurrent.ThreadPoolExecutor r0 = r1.executor
                r0.execute(r2)
                return
        }

        @Override
        public long nanoTime() {
                r2 = this;
                long r0 = java.lang.System.nanoTime()
                return r0
        }

        public final void shutdown() {
                r1 = this;
                java.util.concurrent.ThreadPoolExecutor r0 = r1.executor
                r0.shutdown()
                return
        }
    }

    static {
            okhttp3.internal.concurrent.TaskRunner$Companion r0 = new okhttp3.internal.concurrent.TaskRunner$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.internal.concurrent.TaskRunner.Companion = r0
            okhttp3.internal.concurrent.TaskRunner r0 = new okhttp3.internal.concurrent.TaskRunner
            okhttp3.internal.concurrent.TaskRunner$RealBackend r1 = new okhttp3.internal.concurrent.TaskRunner$RealBackend
            java.lang.String r2 = okhttp3.internal.Util.okHttpName
            java.lang.String r3 = " TaskRunner"
            java.lang.String r2 = kotlin.jvm.internal.Intrinsics.stringPlus(r2, r3)
            r3 = 1
            java.util.concurrent.ThreadFactory r2 = okhttp3.internal.Util.threadFactory(r2, r3)
            r1.<init>(r2)
            okhttp3.internal.concurrent.TaskRunner$Backend r1 = (okhttp3.internal.concurrent.TaskRunner.Backend) r1
            r0.<init>(r1)
            okhttp3.internal.concurrent.TaskRunner.INSTANCE = r0
            java.lang.Class<okhttp3.internal.concurrent.TaskRunner> r0 = okhttp3.internal.concurrent.TaskRunner.class
            java.lang.String r0 = r0.getName()
            java.util.logging.Logger r0 = java.util.logging.Logger.getLogger(r0)
            java.lang.String r1 = "getLogger(TaskRunner::class.java.name)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            okhttp3.internal.concurrent.TaskRunner.logger = r0
            return
    }

    public TaskRunner(okhttp3.internal.concurrent.TaskRunner.Backend r2) {
            r1 = this;
            java.lang.String r0 = "backend"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.<init>()
            r1.backend = r2
            r2 = 10000(0x2710, float:1.4013E-41)
            r1.nextQueueName = r2
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.util.List r2 = (java.util.List) r2
            r1.busyQueues = r2
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.util.List r2 = (java.util.List) r2
            r1.readyQueues = r2
            okhttp3.internal.concurrent.TaskRunner$runnable$1 r2 = new okhttp3.internal.concurrent.TaskRunner$runnable$1
            r2.<init>(r1)
            java.lang.Runnable r2 = (java.lang.Runnable) r2
            r1.runnable = r2
            return
    }

    public static final java.util.logging.Logger access$getLogger$cp() {
            java.util.logging.Logger r0 = okhttp3.internal.concurrent.TaskRunner.logger
            return r0
    }

    public static final void access$runTask(okhttp3.internal.concurrent.TaskRunner r0, okhttp3.internal.concurrent.Task r1) {
            r0.runTask(r1)
            return
    }

    private final void afterRun(okhttp3.internal.concurrent.Task r7, long r8) {
            r6 = this;
            boolean r0 = okhttp3.internal.Util.assertionsEnabled
            if (r0 == 0) goto L32
            boolean r0 = java.lang.Thread.holdsLock(r6)
            if (r0 == 0) goto Lb
            goto L32
        Lb:
            java.lang.AssertionError r7 = new java.lang.AssertionError
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "Thread "
            r8.append(r9)
            java.lang.Thread r9 = java.lang.Thread.currentThread()
            java.lang.String r9 = r9.getName()
            r8.append(r9)
            java.lang.String r9 = " MUST hold lock on "
            r8.append(r9)
            r8.append(r6)
            java.lang.String r8 = r8.toString()
            r7.<init>(r8)
            throw r7
        L32:
            okhttp3.internal.concurrent.TaskQueue r0 = r7.getQueue$okhttp()
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            okhttp3.internal.concurrent.Task r1 = r0.getActiveTask$okhttp()
            r2 = 0
            r3 = 1
            if (r1 != r7) goto L43
            r1 = r3
            goto L44
        L43:
            r1 = r2
        L44:
            if (r1 == 0) goto L7a
            boolean r1 = r0.getCancelActiveTask$okhttp()
            r0.setCancelActiveTask$okhttp(r2)
            r2 = 0
            r0.setActiveTask$okhttp(r2)
            java.util.List<okhttp3.internal.concurrent.TaskQueue> r2 = r6.busyQueues
            r2.remove(r0)
            r4 = -1
            int r2 = (r8 > r4 ? 1 : (r8 == r4 ? 0 : -1))
            if (r2 == 0) goto L67
            if (r1 != 0) goto L67
            boolean r1 = r0.getShutdown$okhttp()
            if (r1 != 0) goto L67
            r0.scheduleAndDecide$okhttp(r7, r8, r3)
        L67:
            java.util.List r7 = r0.getFutureTasks$okhttp()
            java.util.Collection r7 = (java.util.Collection) r7
            boolean r7 = r7.isEmpty()
            r7 = r7 ^ r3
            if (r7 == 0) goto L79
            java.util.List<okhttp3.internal.concurrent.TaskQueue> r7 = r6.readyQueues
            r7.add(r0)
        L79:
            return
        L7a:
            java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
            java.lang.String r8 = "Check failed."
            java.lang.String r8 = r8.toString()
            r7.<init>(r8)
            throw r7
    }

    private final void beforeRun(okhttp3.internal.concurrent.Task r3) {
            r2 = this;
            boolean r0 = okhttp3.internal.Util.assertionsEnabled
            if (r0 == 0) goto L32
            boolean r0 = java.lang.Thread.holdsLock(r2)
            if (r0 == 0) goto Lb
            goto L32
        Lb:
            java.lang.AssertionError r3 = new java.lang.AssertionError
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Thread "
            r0.append(r1)
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = " MUST hold lock on "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            throw r3
        L32:
            r0 = -1
            r3.setNextExecuteNanoTime$okhttp(r0)
            okhttp3.internal.concurrent.TaskQueue r0 = r3.getQueue$okhttp()
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            java.util.List r1 = r0.getFutureTasks$okhttp()
            r1.remove(r3)
            java.util.List<okhttp3.internal.concurrent.TaskQueue> r1 = r2.readyQueues
            r1.remove(r0)
            r0.setActiveTask$okhttp(r3)
            java.util.List<okhttp3.internal.concurrent.TaskQueue> r3 = r2.busyQueues
            r3.add(r0)
            return
    }

    private final void runTask(okhttp3.internal.concurrent.Task r6) {
            r5 = this;
            boolean r0 = okhttp3.internal.Util.assertionsEnabled
            if (r0 == 0) goto L32
            boolean r0 = java.lang.Thread.holdsLock(r5)
            if (r0 != 0) goto Lb
            goto L32
        Lb:
            java.lang.AssertionError r6 = new java.lang.AssertionError
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Thread "
            r0.append(r1)
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = " MUST NOT hold lock on "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            r6.<init>(r0)
            throw r6
        L32:
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            java.lang.String r1 = r0.getName()
            java.lang.String r2 = r6.getName()
            r0.setName(r2)
            r2 = -1
            long r2 = r6.runOnce()     // Catch: java.lang.Throwable -> L55
            monitor-enter(r5)
            r5.afterRun(r6, r2)     // Catch: java.lang.Throwable -> L52
            kotlin.Unit r6 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L52
            monitor-exit(r5)
            r0.setName(r1)
            return
        L52:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
        L55:
            r4 = move-exception
            monitor-enter(r5)
            r5.afterRun(r6, r2)     // Catch: java.lang.Throwable -> L61
            kotlin.Unit r6 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L61
            monitor-exit(r5)
            r0.setName(r1)
            throw r4
        L61:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    public final java.util.List<okhttp3.internal.concurrent.TaskQueue> activeQueues() {
            r2 = this;
            monitor-enter(r2)
            java.util.List<okhttp3.internal.concurrent.TaskQueue> r0 = r2.busyQueues     // Catch: java.lang.Throwable -> Lf
            java.util.Collection r0 = (java.util.Collection) r0     // Catch: java.lang.Throwable -> Lf
            java.util.List<okhttp3.internal.concurrent.TaskQueue> r1 = r2.readyQueues     // Catch: java.lang.Throwable -> Lf
            java.lang.Iterable r1 = (java.lang.Iterable) r1     // Catch: java.lang.Throwable -> Lf
            java.util.List r0 = kotlin.collections.CollectionsKt.plus(r0, r1)     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r2)
            return r0
        Lf:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public final okhttp3.internal.concurrent.Task awaitTaskToRun() {
            r14 = this;
            boolean r0 = okhttp3.internal.Util.assertionsEnabled
            if (r0 == 0) goto L32
            boolean r0 = java.lang.Thread.holdsLock(r14)
            if (r0 == 0) goto Lb
            goto L32
        Lb:
            java.lang.AssertionError r0 = new java.lang.AssertionError
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Thread "
            r1.append(r2)
            java.lang.Thread r2 = java.lang.Thread.currentThread()
            java.lang.String r2 = r2.getName()
            r1.append(r2)
            java.lang.String r2 = " MUST hold lock on "
            r1.append(r2)
            r1.append(r14)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L32:
            java.util.List<okhttp3.internal.concurrent.TaskQueue> r0 = r14.readyQueues
            boolean r0 = r0.isEmpty()
            r1 = 0
            if (r0 == 0) goto L3c
            return r1
        L3c:
            okhttp3.internal.concurrent.TaskRunner$Backend r0 = r14.backend
            long r2 = r0.nanoTime()
            r4 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            java.util.List<okhttp3.internal.concurrent.TaskQueue> r0 = r14.readyQueues
            java.util.Iterator r0 = r0.iterator()
            r6 = r1
        L4e:
            boolean r7 = r0.hasNext()
            r8 = 1
            r9 = 0
            if (r7 == 0) goto L80
            java.lang.Object r7 = r0.next()
            okhttp3.internal.concurrent.TaskQueue r7 = (okhttp3.internal.concurrent.TaskQueue) r7
            java.util.List r7 = r7.getFutureTasks$okhttp()
            java.lang.Object r7 = r7.get(r9)
            okhttp3.internal.concurrent.Task r7 = (okhttp3.internal.concurrent.Task) r7
            long r10 = r7.getNextExecuteNanoTime$okhttp()
            long r10 = r10 - r2
            r12 = 0
            long r10 = java.lang.Math.max(r12, r10)
            int r12 = (r10 > r12 ? 1 : (r10 == r12 ? 0 : -1))
            if (r12 <= 0) goto L7a
            long r4 = java.lang.Math.min(r10, r4)
            goto L4e
        L7a:
            if (r6 == 0) goto L7e
            r0 = r8
            goto L81
        L7e:
            r6 = r7
            goto L4e
        L80:
            r0 = r9
        L81:
            if (r6 == 0) goto L9f
            r14.beforeRun(r6)
            if (r0 != 0) goto L97
            boolean r0 = r14.coordinatorWaiting
            if (r0 != 0) goto L9e
            java.util.List<okhttp3.internal.concurrent.TaskQueue> r0 = r14.readyQueues
            java.util.Collection r0 = (java.util.Collection) r0
            boolean r0 = r0.isEmpty()
            r0 = r0 ^ r8
            if (r0 == 0) goto L9e
        L97:
            okhttp3.internal.concurrent.TaskRunner$Backend r0 = r14.backend
            java.lang.Runnable r1 = r14.runnable
            r0.execute(r1)
        L9e:
            return r6
        L9f:
            boolean r0 = r14.coordinatorWaiting
            if (r0 == 0) goto Lb0
            long r6 = r14.coordinatorWakeUpAt
            long r6 = r6 - r2
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 >= 0) goto Laf
            okhttp3.internal.concurrent.TaskRunner$Backend r0 = r14.backend
            r0.coordinatorNotify(r14)
        Laf:
            return r1
        Lb0:
            r14.coordinatorWaiting = r8
            long r2 = r2 + r4
            r14.coordinatorWakeUpAt = r2
            okhttp3.internal.concurrent.TaskRunner$Backend r0 = r14.backend     // Catch: java.lang.Throwable -> Lbe java.lang.InterruptedException -> Lc0
            r0.coordinatorWait(r14, r4)     // Catch: java.lang.Throwable -> Lbe java.lang.InterruptedException -> Lc0
        Lba:
            r14.coordinatorWaiting = r9
            goto L32
        Lbe:
            r0 = move-exception
            goto Lc4
        Lc0:
            r14.cancelAll()     // Catch: java.lang.Throwable -> Lbe
            goto Lba
        Lc4:
            r14.coordinatorWaiting = r9
            throw r0
    }

    public final void cancelAll() {
            r3 = this;
            java.util.List<okhttp3.internal.concurrent.TaskQueue> r0 = r3.busyQueues
            int r0 = r0.size()
            int r0 = r0 + (-1)
            if (r0 < 0) goto L1c
        La:
            int r1 = r0 + (-1)
            java.util.List<okhttp3.internal.concurrent.TaskQueue> r2 = r3.busyQueues
            java.lang.Object r0 = r2.get(r0)
            okhttp3.internal.concurrent.TaskQueue r0 = (okhttp3.internal.concurrent.TaskQueue) r0
            r0.cancelAllAndDecide$okhttp()
            if (r1 >= 0) goto L1a
            goto L1c
        L1a:
            r0 = r1
            goto La
        L1c:
            java.util.List<okhttp3.internal.concurrent.TaskQueue> r0 = r3.readyQueues
            int r0 = r0.size()
            int r0 = r0 + (-1)
            if (r0 < 0) goto L47
        L26:
            int r1 = r0 + (-1)
            java.util.List<okhttp3.internal.concurrent.TaskQueue> r2 = r3.readyQueues
            java.lang.Object r2 = r2.get(r0)
            okhttp3.internal.concurrent.TaskQueue r2 = (okhttp3.internal.concurrent.TaskQueue) r2
            r2.cancelAllAndDecide$okhttp()
            java.util.List r2 = r2.getFutureTasks$okhttp()
            boolean r2 = r2.isEmpty()
            if (r2 == 0) goto L42
            java.util.List<okhttp3.internal.concurrent.TaskQueue> r2 = r3.readyQueues
            r2.remove(r0)
        L42:
            if (r1 >= 0) goto L45
            goto L47
        L45:
            r0 = r1
            goto L26
        L47:
            return
    }

    public final okhttp3.internal.concurrent.TaskRunner.Backend getBackend() {
            r1 = this;
            okhttp3.internal.concurrent.TaskRunner$Backend r0 = r1.backend
            return r0
    }

    public final void kickCoordinator$okhttp(okhttp3.internal.concurrent.TaskQueue r3) {
            r2 = this;
            java.lang.String r0 = "taskQueue"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            boolean r0 = okhttp3.internal.Util.assertionsEnabled
            if (r0 == 0) goto L37
            boolean r0 = java.lang.Thread.holdsLock(r2)
            if (r0 == 0) goto L10
            goto L37
        L10:
            java.lang.AssertionError r3 = new java.lang.AssertionError
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Thread "
            r0.append(r1)
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = " MUST hold lock on "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            throw r3
        L37:
            okhttp3.internal.concurrent.Task r0 = r3.getActiveTask$okhttp()
            if (r0 != 0) goto L56
            java.util.List r0 = r3.getFutureTasks$okhttp()
            java.util.Collection r0 = (java.util.Collection) r0
            boolean r0 = r0.isEmpty()
            r0 = r0 ^ 1
            if (r0 == 0) goto L51
            java.util.List<okhttp3.internal.concurrent.TaskQueue> r0 = r2.readyQueues
            okhttp3.internal.Util.addIfAbsent(r0, r3)
            goto L56
        L51:
            java.util.List<okhttp3.internal.concurrent.TaskQueue> r0 = r2.readyQueues
            r0.remove(r3)
        L56:
            boolean r3 = r2.coordinatorWaiting
            if (r3 == 0) goto L60
            okhttp3.internal.concurrent.TaskRunner$Backend r3 = r2.backend
            r3.coordinatorNotify(r2)
            goto L67
        L60:
            okhttp3.internal.concurrent.TaskRunner$Backend r3 = r2.backend
            java.lang.Runnable r0 = r2.runnable
            r3.execute(r0)
        L67:
            return
    }

    public final okhttp3.internal.concurrent.TaskQueue newQueue() {
            r3 = this;
            monitor-enter(r3)
            int r0 = r3.nextQueueName     // Catch: java.lang.Throwable -> L18
            int r1 = r0 + 1
            r3.nextQueueName = r1     // Catch: java.lang.Throwable -> L18
            monitor-exit(r3)
            okhttp3.internal.concurrent.TaskQueue r1 = new okhttp3.internal.concurrent.TaskQueue
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            java.lang.String r2 = "Q"
            java.lang.String r0 = kotlin.jvm.internal.Intrinsics.stringPlus(r2, r0)
            r1.<init>(r3, r0)
            return r1
        L18:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }
}
