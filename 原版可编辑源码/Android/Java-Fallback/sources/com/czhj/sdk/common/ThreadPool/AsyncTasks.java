package com.czhj.sdk.common.ThreadPool;

public class AsyncTasks {
    private static java.util.concurrent.Executor a;

    static {
            a()
            return
    }

    public AsyncTasks() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a() {
            java.util.concurrent.Executor r0 = android.os.AsyncTask.THREAD_POOL_EXECUTOR
            com.czhj.sdk.common.ThreadPool.AsyncTasks.a = r0
            return
    }

    @java.lang.SafeVarargs
    public static <P> void safeExecuteOnExecutor(android.os.AsyncTask<P, ?, ?> r1, P... r2) {
            java.lang.String r0 = "Unable to execute null AsyncTask."
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1, r0)
            java.lang.String r0 = "AsyncTask must be executed on the main thread"
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkUiThread(r0)
            java.util.concurrent.Executor r0 = com.czhj.sdk.common.ThreadPool.AsyncTasks.a
            r1.executeOnExecutor(r0, r2)
            return
    }
}
