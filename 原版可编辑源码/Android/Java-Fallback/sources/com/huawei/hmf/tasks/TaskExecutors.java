package com.huawei.hmf.tasks;

public final class TaskExecutors {
    private static final com.huawei.hmf.tasks.TaskExecutors INSTANCE = null;
    private final java.util.concurrent.ExecutorService mBackground;
    private final java.util.concurrent.Executor mImmediate;
    private final java.util.concurrent.Executor mUiThread;

    static final class ImmediateExecutor implements java.util.concurrent.Executor {
        ImmediateExecutor() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final void execute(java.lang.Runnable r1) {
                r0 = this;
                r1.run()
                return
        }
    }

    static {
            com.huawei.hmf.tasks.TaskExecutors r0 = new com.huawei.hmf.tasks.TaskExecutors
            r0.<init>()
            com.huawei.hmf.tasks.TaskExecutors.INSTANCE = r0
            return
    }

    private TaskExecutors() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ExecutorService r0 = com.huawei.hmf.tasks.a.a.a()
            r1.mBackground = r0
            com.huawei.hmf.tasks.TaskExecutors$ImmediateExecutor r0 = new com.huawei.hmf.tasks.TaskExecutors$ImmediateExecutor
            r0.<init>()
            r1.mImmediate = r0
            java.util.concurrent.Executor r0 = com.huawei.hmf.tasks.a.a.b()
            r1.mUiThread = r0
            return
    }

    static java.util.concurrent.ExecutorService background() {
            com.huawei.hmf.tasks.TaskExecutors r0 = com.huawei.hmf.tasks.TaskExecutors.INSTANCE
            java.util.concurrent.ExecutorService r0 = r0.mBackground
            return r0
    }

    public static java.util.concurrent.Executor immediate() {
            com.huawei.hmf.tasks.TaskExecutors r0 = com.huawei.hmf.tasks.TaskExecutors.INSTANCE
            java.util.concurrent.Executor r0 = r0.mImmediate
            return r0
    }

    public static java.util.concurrent.Executor uiThread() {
            com.huawei.hmf.tasks.TaskExecutors r0 = com.huawei.hmf.tasks.TaskExecutors.INSTANCE
            java.util.concurrent.Executor r0 = r0.mUiThread
            return r0
    }
}
