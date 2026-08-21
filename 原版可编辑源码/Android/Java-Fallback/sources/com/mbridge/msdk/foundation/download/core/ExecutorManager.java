package com.mbridge.msdk.foundation.download.core;

public class ExecutorManager {
    private static com.mbridge.msdk.foundation.download.core.ExecutorManager instance;
    private final com.mbridge.msdk.foundation.download.core.ExecutorSupplier executorSupplier;

    static class 1 {
    }

    private static final class ClassHolder {
        private static final com.mbridge.msdk.foundation.download.core.ExecutorManager EXECUTOR_MANAGER = null;

        static {
                com.mbridge.msdk.foundation.download.core.ExecutorManager r0 = new com.mbridge.msdk.foundation.download.core.ExecutorManager
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.foundation.download.core.ExecutorManager.ClassHolder.EXECUTOR_MANAGER = r0
                return
        }

        private ClassHolder() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.mbridge.msdk.foundation.download.core.ExecutorManager access$000() {
                com.mbridge.msdk.foundation.download.core.ExecutorManager r0 = com.mbridge.msdk.foundation.download.core.ExecutorManager.ClassHolder.EXECUTOR_MANAGER
                return r0
        }
    }

    static {
            return
    }

    private ExecutorManager() {
            r1 = this;
            r1.<init>()
            com.mbridge.msdk.foundation.download.core.DefaultExecutorSupplier r0 = new com.mbridge.msdk.foundation.download.core.DefaultExecutorSupplier
            r0.<init>()
            r1.executorSupplier = r0
            return
    }

    ExecutorManager(com.mbridge.msdk.foundation.download.core.ExecutorManager.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.foundation.download.core.ExecutorManager getInstance() {
            com.mbridge.msdk.foundation.download.core.ExecutorManager r0 = com.mbridge.msdk.foundation.download.core.ExecutorManager.ClassHolder.access$000()
            return r0
    }

    public static void shutDown() {
            com.mbridge.msdk.foundation.download.core.ExecutorManager r0 = com.mbridge.msdk.foundation.download.core.ExecutorManager.instance
            if (r0 == 0) goto L7
            r0 = 0
            com.mbridge.msdk.foundation.download.core.ExecutorManager.instance = r0
        L7:
            return
    }

    public com.mbridge.msdk.foundation.download.core.ExecutorSupplier getExecutorSupplier() {
            r1 = this;
            com.mbridge.msdk.foundation.download.core.ExecutorSupplier r0 = r1.executorSupplier
            return r0
    }
}
