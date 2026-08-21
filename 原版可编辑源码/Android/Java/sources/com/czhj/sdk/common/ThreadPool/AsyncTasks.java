package com.czhj.sdk.common.ThreadPool;

import android.os.AsyncTask;
import com.czhj.sdk.common.utils.Preconditions;
import java.util.concurrent.Executor;

public class AsyncTasks {
    private static Executor a;

    static {
        a();
    }

    private static void a() {
        a = AsyncTask.THREAD_POOL_EXECUTOR;
    }

    @SafeVarargs
    public static <P> void safeExecuteOnExecutor(AsyncTask<P, ?, ?> asyncTask, P... pArr) {
        Preconditions.NoThrow.checkNotNull(asyncTask, "Unable to execute null AsyncTask.");
        Preconditions.NoThrow.checkUiThread("AsyncTask must be executed on the main thread");
        asyncTask.executeOnExecutor(a, pArr);
    }
}
