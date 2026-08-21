package okhttp3.internal.concurrent;

@kotlin.Metadata(d1 = {"\u0000V\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\u0005\n\u0002\u0010!\n\u0002\b\u0005\n\u0002\u0010 \n\u0002\b\u0007\n\u0002\u0010\u0002\n\u0002\b\u0004\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\b\u0018\u00002\u00020\u0001:\u00013B\u0017\b\u0000\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0002\u0010\u0006J\u0006\u0010!\u001a\u00020\"J\r\u0010#\u001a\u00020\u000eH\u0000¢\u0006\u0002\b$J8\u0010%\u001a\u00020\"2\u0006\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010&\u001a\u00020'2\b\b\u0002\u0010(\u001a\u00020\u000e2\u000e\b\u0004\u0010)\u001a\b\u0012\u0004\u0012\u00020\"0*H\u0086\bø\u0001\u0000J\u0006\u0010+\u001a\u00020,J.\u0010-\u001a\u00020\"2\u0006\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010&\u001a\u00020'2\u000e\b\u0004\u0010)\u001a\b\u0012\u0004\u0012\u00020'0*H\u0086\bø\u0001\u0000J\u0018\u0010-\u001a\u00020\"2\u0006\u0010.\u001a\u00020\b2\b\b\u0002\u0010&\u001a\u00020'J%\u0010/\u001a\u00020\u000e2\u0006\u0010.\u001a\u00020\b2\u0006\u0010&\u001a\u00020'2\u0006\u00100\u001a\u00020\u000eH\u0000¢\u0006\u0002\b1J\u0006\u0010\u001c\u001a\u00020\"J\b\u00102\u001a\u00020\u0005H\u0016R\u001c\u0010\u0007\u001a\u0004\u0018\u00010\bX\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\t\u0010\n\"\u0004\b\u000b\u0010\fR\u001a\u0010\r\u001a\u00020\u000eX\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000f\u0010\u0010\"\u0004\b\u0011\u0010\u0012R\u001a\u0010\u0013\u001a\b\u0012\u0004\u0012\u00020\b0\u0014X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0016R\u0014\u0010\u0004\u001a\u00020\u0005X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0018R\u0017\u0010\u0019\u001a\b\u0012\u0004\u0012\u00020\b0\u001a8F¢\u0006\u0006\u001a\u0004\b\u001b\u0010\u0016R\u001a\u0010\u001c\u001a\u00020\u000eX\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001d\u0010\u0010\"\u0004\b\u001e\u0010\u0012R\u0014\u0010\u0002\u001a\u00020\u0003X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u001f\u0010 \u0082\u0002\u0007\n\u0005\b\u009920\u0001¨\u00064"}, d2 = {"Lokhttp3/internal/concurrent/TaskQueue;", "", "taskRunner", "Lokhttp3/internal/concurrent/TaskRunner;", "name", "", "(Lokhttp3/internal/concurrent/TaskRunner;Ljava/lang/String;)V", "activeTask", "Lokhttp3/internal/concurrent/Task;", "getActiveTask$okhttp", "()Lokhttp3/internal/concurrent/Task;", "setActiveTask$okhttp", "(Lokhttp3/internal/concurrent/Task;)V", "cancelActiveTask", "", "getCancelActiveTask$okhttp", "()Z", "setCancelActiveTask$okhttp", "(Z)V", "futureTasks", "", "getFutureTasks$okhttp", "()Ljava/util/List;", "getName$okhttp", "()Ljava/lang/String;", "scheduledTasks", "", "getScheduledTasks", "shutdown", "getShutdown$okhttp", "setShutdown$okhttp", "getTaskRunner$okhttp", "()Lokhttp3/internal/concurrent/TaskRunner;", "cancelAll", "", "cancelAllAndDecide", "cancelAllAndDecide$okhttp", "execute", "delayNanos", "", "cancelable", "block", "Lkotlin/Function0;", "idleLatch", "Ljava/util/concurrent/CountDownLatch;", "schedule", "task", "scheduleAndDecide", "recurrence", "scheduleAndDecide$okhttp", "toString", "AwaitIdleTask", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class TaskQueue {
    private okhttp3.internal.concurrent.Task activeTask;
    private boolean cancelActiveTask;
    private final java.util.List<okhttp3.internal.concurrent.Task> futureTasks;
    private final java.lang.String name;
    private boolean shutdown;
    private final okhttp3.internal.concurrent.TaskRunner taskRunner;

    @kotlin.Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\t\n\u0000\b\u0002\u0018\u00002\u00020\u0001B\u0005¢\u0006\u0002\u0010\u0002J\b\u0010\u0007\u001a\u00020\bH\u0016R\u0011\u0010\u0003\u001a\u00020\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006¨\u0006\t"}, d2 = {"Lokhttp3/internal/concurrent/TaskQueue$AwaitIdleTask;", "Lokhttp3/internal/concurrent/Task;", "()V", "latch", "Ljava/util/concurrent/CountDownLatch;", "getLatch", "()Ljava/util/concurrent/CountDownLatch;", "runOnce", "", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    private static final class AwaitIdleTask extends okhttp3.internal.concurrent.Task {
        private final java.util.concurrent.CountDownLatch latch;

        public AwaitIdleTask() {
                r2 = this;
                java.lang.String r0 = okhttp3.internal.Util.okHttpName
                java.lang.String r1 = " awaitIdle"
                java.lang.String r0 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r1)
                r1 = 0
                r2.<init>(r0, r1)
                java.util.concurrent.CountDownLatch r0 = new java.util.concurrent.CountDownLatch
                r1 = 1
                r0.<init>(r1)
                r2.latch = r0
                return
        }

        public final java.util.concurrent.CountDownLatch getLatch() {
                r1 = this;
                java.util.concurrent.CountDownLatch r0 = r1.latch
                return r0
        }

        @Override
        public long runOnce() {
                r2 = this;
                java.util.concurrent.CountDownLatch r0 = r2.latch
                r0.countDown()
                r0 = -1
                return r0
        }
    }

    @kotlin.Metadata(d1 = {"\u0000\u0011\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0000*\u0001\u0000\b\n\u0018\u00002\u00020\u0001J\b\u0010\u0002\u001a\u00020\u0003H\u0016¨\u0006\u0004"}, d2 = {"okhttp3/internal/concurrent/TaskQueue$execute$1", "Lokhttp3/internal/concurrent/Task;", "runOnce", "", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 176)
    public static final class 1 extends okhttp3.internal.concurrent.Task {
        final kotlin.jvm.functions.Function0<kotlin.Unit> $block;
        final boolean $cancelable;
        final java.lang.String $name;

        public 1(java.lang.String r1, boolean r2, kotlin.jvm.functions.Function0<kotlin.Unit> r3) {
                r0 = this;
                r0.$name = r1
                r0.$cancelable = r2
                r0.$block = r3
                r0.<init>(r1, r2)
                return
        }

        @Override
        public long runOnce() {
                r2 = this;
                kotlin.jvm.functions.Function0<kotlin.Unit> r0 = r2.$block
                r0.invoke()
                r0 = -1
                return r0
        }
    }

    @kotlin.Metadata(d1 = {"\u0000\u0011\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0000*\u0001\u0000\b\n\u0018\u00002\u00020\u0001J\b\u0010\u0002\u001a\u00020\u0003H\u0016¨\u0006\u0004"}, d2 = {"okhttp3/internal/concurrent/TaskQueue$schedule$2", "Lokhttp3/internal/concurrent/Task;", "runOnce", "", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 176)
    public static final class 2 extends okhttp3.internal.concurrent.Task {
        final kotlin.jvm.functions.Function0<java.lang.Long> $block;
        final java.lang.String $name;

        public 2(java.lang.String r3, kotlin.jvm.functions.Function0<java.lang.Long> r4) {
                r2 = this;
                r2.$name = r3
                r2.$block = r4
                r4 = 0
                r0 = 2
                r1 = 0
                r2.<init>(r3, r4, r0, r1)
                return
        }

        @Override
        public long runOnce() {
                r2 = this;
                kotlin.jvm.functions.Function0<java.lang.Long> r0 = r2.$block
                java.lang.Object r0 = r0.invoke()
                java.lang.Number r0 = (java.lang.Number) r0
                long r0 = r0.longValue()
                return r0
        }
    }

    public TaskQueue(okhttp3.internal.concurrent.TaskRunner r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = "taskRunner"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "name"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r1.<init>()
            r1.taskRunner = r2
            r1.name = r3
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.util.List r2 = (java.util.List) r2
            r1.futureTasks = r2
            return
    }

    public static void execute$default(okhttp3.internal.concurrent.TaskQueue r0, java.lang.String r1, long r2, boolean r4, kotlin.jvm.functions.Function0 r5, int r6, java.lang.Object r7) {
            r7 = r6 & 2
            if (r7 == 0) goto L6
            r2 = 0
        L6:
            r6 = r6 & 4
            if (r6 == 0) goto Lb
            r4 = 1
        Lb:
            java.lang.String r6 = "name"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r6)
            java.lang.String r6 = "block"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r6)
            okhttp3.internal.concurrent.TaskQueue$execute$1 r6 = new okhttp3.internal.concurrent.TaskQueue$execute$1
            r6.<init>(r1, r4, r5)
            okhttp3.internal.concurrent.Task r6 = (okhttp3.internal.concurrent.Task) r6
            r0.schedule(r6, r2)
            return
    }

    public static void schedule$default(okhttp3.internal.concurrent.TaskQueue r0, java.lang.String r1, long r2, kotlin.jvm.functions.Function0 r4, int r5, java.lang.Object r6) {
            r5 = r5 & 2
            if (r5 == 0) goto L6
            r2 = 0
        L6:
            java.lang.String r5 = "name"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r5)
            java.lang.String r5 = "block"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r5)
            okhttp3.internal.concurrent.TaskQueue$schedule$2 r5 = new okhttp3.internal.concurrent.TaskQueue$schedule$2
            r5.<init>(r1, r4)
            okhttp3.internal.concurrent.Task r5 = (okhttp3.internal.concurrent.Task) r5
            r0.schedule(r5, r2)
            return
    }

    public static void schedule$default(okhttp3.internal.concurrent.TaskQueue r0, okhttp3.internal.concurrent.Task r1, long r2, int r4, java.lang.Object r5) {
            r4 = r4 & 2
            if (r4 == 0) goto L6
            r2 = 0
        L6:
            r0.schedule(r1, r2)
            return
    }

    public final void cancelAll() {
            r3 = this;
            boolean r0 = okhttp3.internal.Util.assertionsEnabled
            if (r0 == 0) goto L32
            boolean r0 = java.lang.Thread.holdsLock(r3)
            if (r0 != 0) goto Lb
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
            java.lang.String r2 = " MUST NOT hold lock on "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L32:
            okhttp3.internal.concurrent.TaskRunner r0 = r3.taskRunner
            monitor-enter(r0)
            boolean r1 = r3.cancelAllAndDecide$okhttp()     // Catch: java.lang.Throwable -> L46
            if (r1 == 0) goto L42
            okhttp3.internal.concurrent.TaskRunner r1 = r3.getTaskRunner$okhttp()     // Catch: java.lang.Throwable -> L46
            r1.kickCoordinator$okhttp(r3)     // Catch: java.lang.Throwable -> L46
        L42:
            kotlin.Unit r1 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L46
            monitor-exit(r0)
            return
        L46:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public final boolean cancelAllAndDecide$okhttp() {
            r6 = this;
            okhttp3.internal.concurrent.Task r0 = r6.activeTask
            r1 = 1
            if (r0 == 0) goto L10
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            boolean r0 = r0.getCancelable()
            if (r0 == 0) goto L10
            r6.cancelActiveTask = r1
        L10:
            r0 = 0
            java.util.List<okhttp3.internal.concurrent.Task> r2 = r6.futureTasks
            int r2 = r2.size()
            int r2 = r2 - r1
            if (r2 < 0) goto L50
        L1a:
            int r3 = r2 + (-1)
            java.util.List<okhttp3.internal.concurrent.Task> r4 = r6.futureTasks
            java.lang.Object r4 = r4.get(r2)
            okhttp3.internal.concurrent.Task r4 = (okhttp3.internal.concurrent.Task) r4
            boolean r4 = r4.getCancelable()
            if (r4 == 0) goto L4b
            java.util.List<okhttp3.internal.concurrent.Task> r0 = r6.futureTasks
            java.lang.Object r0 = r0.get(r2)
            okhttp3.internal.concurrent.Task r0 = (okhttp3.internal.concurrent.Task) r0
            okhttp3.internal.concurrent.TaskRunner$Companion r4 = okhttp3.internal.concurrent.TaskRunner.Companion
            java.util.logging.Logger r4 = r4.getLogger()
            java.util.logging.Level r5 = java.util.logging.Level.FINE
            boolean r4 = r4.isLoggable(r5)
            if (r4 == 0) goto L45
            java.lang.String r4 = "canceled"
            okhttp3.internal.concurrent.TaskLoggerKt.access$log(r0, r6, r4)
        L45:
            java.util.List<okhttp3.internal.concurrent.Task> r0 = r6.futureTasks
            r0.remove(r2)
            r0 = r1
        L4b:
            if (r3 >= 0) goto L4e
            goto L50
        L4e:
            r2 = r3
            goto L1a
        L50:
            return r0
    }

    public final void execute(java.lang.String r2, long r3, boolean r5, kotlin.jvm.functions.Function0<kotlin.Unit> r6) {
            r1 = this;
            java.lang.String r0 = "name"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "block"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            okhttp3.internal.concurrent.TaskQueue$execute$1 r0 = new okhttp3.internal.concurrent.TaskQueue$execute$1
            r0.<init>(r2, r5, r6)
            okhttp3.internal.concurrent.Task r0 = (okhttp3.internal.concurrent.Task) r0
            r1.schedule(r0, r3)
            return
    }

    public final okhttp3.internal.concurrent.Task getActiveTask$okhttp() {
            r1 = this;
            okhttp3.internal.concurrent.Task r0 = r1.activeTask
            return r0
    }

    public final boolean getCancelActiveTask$okhttp() {
            r1 = this;
            boolean r0 = r1.cancelActiveTask
            return r0
    }

    public final java.util.List<okhttp3.internal.concurrent.Task> getFutureTasks$okhttp() {
            r1 = this;
            java.util.List<okhttp3.internal.concurrent.Task> r0 = r1.futureTasks
            return r0
    }

    public final java.lang.String getName$okhttp() {
            r1 = this;
            java.lang.String r0 = r1.name
            return r0
    }

    public final java.util.List<okhttp3.internal.concurrent.Task> getScheduledTasks() {
            r2 = this;
            okhttp3.internal.concurrent.TaskRunner r0 = r2.taskRunner
            monitor-enter(r0)
            java.util.List r1 = r2.getFutureTasks$okhttp()     // Catch: java.lang.Throwable -> Lf
            java.lang.Iterable r1 = (java.lang.Iterable) r1     // Catch: java.lang.Throwable -> Lf
            java.util.List r1 = kotlin.collections.CollectionsKt.toList(r1)     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r0)
            return r1
        Lf:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public final boolean getShutdown$okhttp() {
            r1 = this;
            boolean r0 = r1.shutdown
            return r0
    }

    public final okhttp3.internal.concurrent.TaskRunner getTaskRunner$okhttp() {
            r1 = this;
            okhttp3.internal.concurrent.TaskRunner r0 = r1.taskRunner
            return r0
    }

    public final java.util.concurrent.CountDownLatch idleLatch() {
            r6 = this;
            okhttp3.internal.concurrent.TaskRunner r0 = r6.taskRunner
            monitor-enter(r0)
            okhttp3.internal.concurrent.Task r1 = r6.getActiveTask$okhttp()     // Catch: java.lang.Throwable -> L68
            r2 = 0
            if (r1 != 0) goto L1b
            java.util.List r1 = r6.getFutureTasks$okhttp()     // Catch: java.lang.Throwable -> L68
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> L68
            if (r1 == 0) goto L1b
            java.util.concurrent.CountDownLatch r1 = new java.util.concurrent.CountDownLatch     // Catch: java.lang.Throwable -> L68
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L68
            monitor-exit(r0)
            return r1
        L1b:
            okhttp3.internal.concurrent.Task r1 = r6.getActiveTask$okhttp()     // Catch: java.lang.Throwable -> L68
            boolean r3 = r1 instanceof okhttp3.internal.concurrent.TaskQueue.AwaitIdleTask     // Catch: java.lang.Throwable -> L68
            if (r3 == 0) goto L2b
            okhttp3.internal.concurrent.TaskQueue$AwaitIdleTask r1 = (okhttp3.internal.concurrent.TaskQueue.AwaitIdleTask) r1     // Catch: java.lang.Throwable -> L68
            java.util.concurrent.CountDownLatch r1 = r1.getLatch()     // Catch: java.lang.Throwable -> L68
            monitor-exit(r0)
            return r1
        L2b:
            java.util.List r1 = r6.getFutureTasks$okhttp()     // Catch: java.lang.Throwable -> L68
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L68
        L33:
            boolean r3 = r1.hasNext()     // Catch: java.lang.Throwable -> L68
            if (r3 == 0) goto L4b
            java.lang.Object r3 = r1.next()     // Catch: java.lang.Throwable -> L68
            okhttp3.internal.concurrent.Task r3 = (okhttp3.internal.concurrent.Task) r3     // Catch: java.lang.Throwable -> L68
            boolean r4 = r3 instanceof okhttp3.internal.concurrent.TaskQueue.AwaitIdleTask     // Catch: java.lang.Throwable -> L68
            if (r4 == 0) goto L33
            okhttp3.internal.concurrent.TaskQueue$AwaitIdleTask r3 = (okhttp3.internal.concurrent.TaskQueue.AwaitIdleTask) r3     // Catch: java.lang.Throwable -> L68
            java.util.concurrent.CountDownLatch r1 = r3.getLatch()     // Catch: java.lang.Throwable -> L68
            monitor-exit(r0)
            return r1
        L4b:
            okhttp3.internal.concurrent.TaskQueue$AwaitIdleTask r1 = new okhttp3.internal.concurrent.TaskQueue$AwaitIdleTask     // Catch: java.lang.Throwable -> L68
            r1.<init>()     // Catch: java.lang.Throwable -> L68
            r3 = r1
            okhttp3.internal.concurrent.Task r3 = (okhttp3.internal.concurrent.Task) r3     // Catch: java.lang.Throwable -> L68
            r4 = 0
            boolean r2 = r6.scheduleAndDecide$okhttp(r3, r4, r2)     // Catch: java.lang.Throwable -> L68
            if (r2 == 0) goto L62
            okhttp3.internal.concurrent.TaskRunner r2 = r6.getTaskRunner$okhttp()     // Catch: java.lang.Throwable -> L68
            r2.kickCoordinator$okhttp(r6)     // Catch: java.lang.Throwable -> L68
        L62:
            java.util.concurrent.CountDownLatch r1 = r1.getLatch()     // Catch: java.lang.Throwable -> L68
            monitor-exit(r0)
            return r1
        L68:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public final void schedule(java.lang.String r2, long r3, kotlin.jvm.functions.Function0<java.lang.Long> r5) {
            r1 = this;
            java.lang.String r0 = "name"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "block"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            okhttp3.internal.concurrent.TaskQueue$schedule$2 r0 = new okhttp3.internal.concurrent.TaskQueue$schedule$2
            r0.<init>(r2, r5)
            okhttp3.internal.concurrent.Task r0 = (okhttp3.internal.concurrent.Task) r0
            r1.schedule(r0, r3)
            return
    }

    public final void schedule(okhttp3.internal.concurrent.Task r3, long r4) {
            r2 = this;
            java.lang.String r0 = "task"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            okhttp3.internal.concurrent.TaskRunner r0 = r2.taskRunner
            monitor-enter(r0)
            boolean r1 = r2.getShutdown$okhttp()     // Catch: java.lang.Throwable -> L54
            if (r1 == 0) goto L42
            boolean r4 = r3.getCancelable()     // Catch: java.lang.Throwable -> L54
            if (r4 == 0) goto L29
            okhttp3.internal.concurrent.TaskRunner$Companion r4 = okhttp3.internal.concurrent.TaskRunner.Companion     // Catch: java.lang.Throwable -> L54
            java.util.logging.Logger r4 = r4.getLogger()     // Catch: java.lang.Throwable -> L54
            java.util.logging.Level r5 = java.util.logging.Level.FINE     // Catch: java.lang.Throwable -> L54
            boolean r4 = r4.isLoggable(r5)     // Catch: java.lang.Throwable -> L54
            if (r4 == 0) goto L27
            java.lang.String r4 = "schedule canceled (queue is shutdown)"
            okhttp3.internal.concurrent.TaskLoggerKt.access$log(r3, r2, r4)     // Catch: java.lang.Throwable -> L54
        L27:
            monitor-exit(r0)
            return
        L29:
            okhttp3.internal.concurrent.TaskRunner$Companion r4 = okhttp3.internal.concurrent.TaskRunner.Companion     // Catch: java.lang.Throwable -> L54
            java.util.logging.Logger r4 = r4.getLogger()     // Catch: java.lang.Throwable -> L54
            java.util.logging.Level r5 = java.util.logging.Level.FINE     // Catch: java.lang.Throwable -> L54
            boolean r4 = r4.isLoggable(r5)     // Catch: java.lang.Throwable -> L54
            if (r4 == 0) goto L3c
            java.lang.String r4 = "schedule failed (queue is shutdown)"
            okhttp3.internal.concurrent.TaskLoggerKt.access$log(r3, r2, r4)     // Catch: java.lang.Throwable -> L54
        L3c:
            java.util.concurrent.RejectedExecutionException r3 = new java.util.concurrent.RejectedExecutionException     // Catch: java.lang.Throwable -> L54
            r3.<init>()     // Catch: java.lang.Throwable -> L54
            throw r3     // Catch: java.lang.Throwable -> L54
        L42:
            r1 = 0
            boolean r3 = r2.scheduleAndDecide$okhttp(r3, r4, r1)     // Catch: java.lang.Throwable -> L54
            if (r3 == 0) goto L50
            okhttp3.internal.concurrent.TaskRunner r3 = r2.getTaskRunner$okhttp()     // Catch: java.lang.Throwable -> L54
            r3.kickCoordinator$okhttp(r2)     // Catch: java.lang.Throwable -> L54
        L50:
            kotlin.Unit r3 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L54
            monitor-exit(r0)
            return
        L54:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public final boolean scheduleAndDecide$okhttp(okhttp3.internal.concurrent.Task r10, long r11, boolean r13) {
            r9 = this;
            java.lang.String r0 = "task"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
            r10.initQueue$okhttp(r9)
            okhttp3.internal.concurrent.TaskRunner r0 = r9.taskRunner
            okhttp3.internal.concurrent.TaskRunner$Backend r0 = r0.getBackend()
            long r0 = r0.nanoTime()
            long r2 = r0 + r11
            java.util.List<okhttp3.internal.concurrent.Task> r4 = r9.futureTasks
            int r4 = r4.indexOf(r10)
            r5 = -1
            r6 = 0
            if (r4 == r5) goto L3f
            long r7 = r10.getNextExecuteNanoTime$okhttp()
            int r7 = (r7 > r2 ? 1 : (r7 == r2 ? 0 : -1))
            if (r7 > 0) goto L3a
            okhttp3.internal.concurrent.TaskRunner$Companion r11 = okhttp3.internal.concurrent.TaskRunner.Companion
            java.util.logging.Logger r11 = r11.getLogger()
            java.util.logging.Level r12 = java.util.logging.Level.FINE
            boolean r11 = r11.isLoggable(r12)
            if (r11 == 0) goto L39
            java.lang.String r11 = "already scheduled"
            okhttp3.internal.concurrent.TaskLoggerKt.access$log(r10, r9, r11)
        L39:
            return r6
        L3a:
            java.util.List<okhttp3.internal.concurrent.Task> r7 = r9.futureTasks
            r7.remove(r4)
        L3f:
            r10.setNextExecuteNanoTime$okhttp(r2)
            okhttp3.internal.concurrent.TaskRunner$Companion r4 = okhttp3.internal.concurrent.TaskRunner.Companion
            java.util.logging.Logger r4 = r4.getLogger()
            java.util.logging.Level r7 = java.util.logging.Level.FINE
            boolean r4 = r4.isLoggable(r7)
            if (r4 == 0) goto L6c
            if (r13 == 0) goto L5e
            long r2 = r2 - r0
            java.lang.String r13 = okhttp3.internal.concurrent.TaskLoggerKt.formatDuration(r2)
            java.lang.String r2 = "run again after "
            java.lang.String r13 = kotlin.jvm.internal.Intrinsics.stringPlus(r2, r13)
            goto L69
        L5e:
            long r2 = r2 - r0
            java.lang.String r13 = okhttp3.internal.concurrent.TaskLoggerKt.formatDuration(r2)
            java.lang.String r2 = "scheduled after "
            java.lang.String r13 = kotlin.jvm.internal.Intrinsics.stringPlus(r2, r13)
        L69:
            okhttp3.internal.concurrent.TaskLoggerKt.access$log(r10, r9, r13)
        L6c:
            java.util.List<okhttp3.internal.concurrent.Task> r13 = r9.futureTasks
            java.util.Iterator r13 = r13.iterator()
            r2 = r6
        L73:
            boolean r3 = r13.hasNext()
            r4 = 1
            if (r3 == 0) goto L92
            java.lang.Object r3 = r13.next()
            okhttp3.internal.concurrent.Task r3 = (okhttp3.internal.concurrent.Task) r3
            long r7 = r3.getNextExecuteNanoTime$okhttp()
            long r7 = r7 - r0
            int r3 = (r7 > r11 ? 1 : (r7 == r11 ? 0 : -1))
            if (r3 <= 0) goto L8b
            r3 = r4
            goto L8c
        L8b:
            r3 = r6
        L8c:
            if (r3 == 0) goto L8f
            goto L93
        L8f:
            int r2 = r2 + 1
            goto L73
        L92:
            r2 = r5
        L93:
            if (r2 != r5) goto L9b
            java.util.List<okhttp3.internal.concurrent.Task> r11 = r9.futureTasks
            int r2 = r11.size()
        L9b:
            java.util.List<okhttp3.internal.concurrent.Task> r11 = r9.futureTasks
            r11.add(r2, r10)
            if (r2 != 0) goto La3
            r6 = r4
        La3:
            return r6
    }

    public final void setActiveTask$okhttp(okhttp3.internal.concurrent.Task r1) {
            r0 = this;
            r0.activeTask = r1
            return
    }

    public final void setCancelActiveTask$okhttp(boolean r1) {
            r0 = this;
            r0.cancelActiveTask = r1
            return
    }

    public final void setShutdown$okhttp(boolean r1) {
            r0 = this;
            r0.shutdown = r1
            return
    }

    public final void shutdown() {
            r3 = this;
            boolean r0 = okhttp3.internal.Util.assertionsEnabled
            if (r0 == 0) goto L32
            boolean r0 = java.lang.Thread.holdsLock(r3)
            if (r0 != 0) goto Lb
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
            java.lang.String r2 = " MUST NOT hold lock on "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L32:
            okhttp3.internal.concurrent.TaskRunner r0 = r3.taskRunner
            monitor-enter(r0)
            r1 = 1
            r3.setShutdown$okhttp(r1)     // Catch: java.lang.Throwable -> L4a
            boolean r1 = r3.cancelAllAndDecide$okhttp()     // Catch: java.lang.Throwable -> L4a
            if (r1 == 0) goto L46
            okhttp3.internal.concurrent.TaskRunner r1 = r3.getTaskRunner$okhttp()     // Catch: java.lang.Throwable -> L4a
            r1.kickCoordinator$okhttp(r3)     // Catch: java.lang.Throwable -> L4a
        L46:
            kotlin.Unit r1 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L4a
            monitor-exit(r0)
            return
        L4a:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.name
            return r0
    }
}
