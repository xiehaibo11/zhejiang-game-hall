package android.support.v4.content;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.support.annotation.RestrictTo;
import java.util.concurrent.BlockingQueue;
import java.util.concurrent.Callable;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.Executor;
import java.util.concurrent.FutureTask;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.TimeoutException;
import java.util.concurrent.atomic.AtomicBoolean;

abstract class ModernAsyncTask<Params, Progress, Result> {
    private static final int CORE_POOL_SIZE = 5;
    private static final int KEEP_ALIVE = 1;
    private static final String LOG_TAG = "AsyncTask";
    private static final int MAXIMUM_POOL_SIZE = 128;
    private static final int MESSAGE_POST_PROGRESS = 2;
    private static final int MESSAGE_POST_RESULT = 1;
    public static final Executor THREAD_POOL_EXECUTOR = null;
    private static volatile Executor sDefaultExecutor;
    private static InternalHandler sHandler;
    private static final BlockingQueue<Runnable> sPoolWorkQueue = null;
    private static final ThreadFactory sThreadFactory = null;
    final AtomicBoolean mCancelled;
    private final FutureTask<Result> mFuture;
    private volatile Status mStatus;
    final AtomicBoolean mTaskInvoked;
    private final WorkerRunnable<Params, Result> mWorker;

    static class 4 {
        static final int[] $SwitchMap$androidx$loader$content$ModernAsyncTask$Status = null;

        static {
            $SwitchMap$androidx$loader$content$ModernAsyncTask$Status = new int[Status.values().length];
            $SwitchMap$androidx$loader$content$ModernAsyncTask$Status[Status.RUNNING.ordinal()] = 1;     // Catch: NoSuchFieldError -> L6
        L8:
            $SwitchMap$androidx$loader$content$ModernAsyncTask$Status[Status.FINISHED.ordinal()] = 2;     // Catch: NoSuchFieldError -> L7
            return;
        }
    }

    private static class AsyncTaskResult<Data> {
        final Data[] mData;
        final ModernAsyncTask mTask;

        AsyncTaskResult(ModernAsyncTask r1, Data... r2) {
            this.mTask = r1;
            this.mData = r2;
        }
    }

    private static class InternalHandler extends Handler {
        InternalHandler() {
            super(Looper.getMainLooper());
        }

        /* JADX WARN: Multi-variable type inference failed */
        /* JADX WARN: Type inference fix 'apply assigned field type' failed
        java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$UnknownArg
        	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:593)
        	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
        	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
        	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
        	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
        	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
        	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
         */
        @Override
        public void handleMessage(Message r3) {
            AsyncTaskResult r0 = (AsyncTaskResult) r3.obj;
            int r32 = r3.what;
            if (r32 != 1) goto L5;
            r0.mTask.finish(r0.mData[0]);
            return;
        L5:
            if (r32 != 2) goto L11;
            r0.mTask.onProgressUpdate(r0.mData);
            return;
        }
    }

    public enum Status extends Enum<Status> {
        private static final Status[] $VALUES = null;
        public static final Status FINISHED = null;
        public static final Status PENDING = null;
        public static final Status RUNNING = null;

        Status(String r1, int r2) {
        }

        public static Status valueOf(String r1) {
            return (Status) Enum.valueOf(Status.class, r1);
        }

        public static Status[] values() {
            return (Status[]) $VALUES.clone();
        }

        static {
            PENDING = new Status("PENDING", 0);
            RUNNING = new Status("RUNNING", 1);
            FINISHED = new Status("FINISHED", 2);
            $VALUES = new Status[]{PENDING, RUNNING, FINISHED};
        }
    }

    private static abstract class WorkerRunnable<Params, Result> implements Callable<Result> {
        Params[] mParams;

        WorkerRunnable() {
        }
    }

    protected abstract Result doInBackground(Params... r1);

    protected void onCancelled() {
    }

    protected void onPostExecute(Result r1) {
    }

    protected void onPreExecute() {
    }

    protected void onProgressUpdate(Progress... r1) {
    }

    static {
        sThreadFactory = new 1();
        sPoolWorkQueue = new LinkedBlockingQueue(10);
        THREAD_POOL_EXECUTOR = new ThreadPoolExecutor(5, 128, 1, TimeUnit.SECONDS, sPoolWorkQueue, sThreadFactory);
        sDefaultExecutor = THREAD_POOL_EXECUTOR;
    }

    private static Handler getHandler() {
        monitor-enter(ModernAsyncTask.class);
    L10:
        th = move-exception;
        throw th;
    L5:
        if (sHandler != null) goto L7;
        sHandler = new InternalHandler();     // Catch: Throwable -> L10
    L7:
        InternalHandler r1 = sHandler;     // Catch: Throwable -> L10
        monitor-exit(ModernAsyncTask.class);     // Catch: Throwable -> L10
        return r1;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public static void setDefaultExecutor(Executor r0) {
        sDefaultExecutor = r0;
    }

    ModernAsyncTask() {
        this.mStatus = Status.PENDING;
        this.mCancelled = new AtomicBoolean();
        this.mTaskInvoked = new AtomicBoolean();
        this.mWorker = new 2(this);
        final WorkerRunnable<Params, Result> r1 = this.mWorker;
        this.mFuture = new 3(this, r1);
    }

    void postResultIfNotInvoked(Result r2) {
        if (this.mTaskInvoked.get() == true) goto L6;
        postResult(r2);
        return;
    }

    Result postResult(Result r6) {
        getHandler().obtainMessage(1, new AsyncTaskResult(this, new Object[]{r6})).sendToTarget();
        return r6;
    }

    public final Status getStatus() {
        return this.mStatus;
    }

    protected void onCancelled(Result r1) {
        onCancelled();
    }

    public final boolean isCancelled() {
        return this.mCancelled.get();
    }

    public final boolean cancel(boolean r3) {
        this.mCancelled.set(true);
        return this.mFuture.cancel(r3);
    }

    public final Result get() throws InterruptedException, ExecutionException {
        return this.mFuture.get();
    }

    public final Result get(long r2, TimeUnit r4) throws InterruptedException, ExecutionException, TimeoutException {
        return this.mFuture.get(r2, r4);
    }

    public final ModernAsyncTask<Params, Progress, Result> execute(Params... r2) {
        return executeOnExecutor(sDefaultExecutor, r2);
    }

    public final ModernAsyncTask<Params, Progress, Result> executeOnExecutor(Executor r3, Params... r4) {
        if (this.mStatus == Status.PENDING) goto L14;
        int r32 = 4.$SwitchMap$androidx$loader$content$ModernAsyncTask$Status[this.mStatus.ordinal()];
        if (r32 == 1) goto L13;
        if (r32 == 2) goto L11;
        throw new IllegalStateException("We should never reach this state");
    L11:
        throw new IllegalStateException("Cannot execute task: the task has already been executed (a task can be executed only once)");
    L13:
        throw new IllegalStateException("Cannot execute task: the task is already running.");
    L14:
        this.mStatus = Status.RUNNING;
        onPreExecute();
        this.mWorker.mParams = r4;
        r3.execute(this.mFuture);
        return this;
    }

    public static void execute(Runnable r1) {
        sDefaultExecutor.execute(r1);
    }

    protected final void publishProgress(Progress... r4) {
        if (isCancelled() == true) goto L6;
        getHandler().obtainMessage(2, new AsyncTaskResult(this, r4)).sendToTarget();
        return;
    }

    void finish(Result r2) {
        if (isCancelled() == false) goto L5;
        onCancelled(r2);
    L6:
        this.mStatus = Status.FINISHED;
        return;
    L5:
        onPostExecute(r2);
        goto L6
    }
}
