package com.czhj.sdk.common.ThreadPool;

import java.util.concurrent.RejectedExecutionHandler;
import java.util.concurrent.ThreadPoolExecutor;

class DefaultRejectedExecutionHandler implements RejectedExecutionHandler {
    DefaultRejectedExecutionHandler() {
    }

    @Override
    public void rejectedExecution(Runnable runnable, ThreadPoolExecutor threadPoolExecutor) {
    }
}
