package com.alipay.android.phone.mrpc.core;

public final class m extends java.util.concurrent.FutureTask<com.alipay.android.phone.mrpc.core.u> {
    public final com.alipay.android.phone.mrpc.core.q a;
    public final com.alipay.android.phone.mrpc.core.l b;

    public m(com.alipay.android.phone.mrpc.core.l r1, java.util.concurrent.Callable r2, com.alipay.android.phone.mrpc.core.q r3) {
            r0 = this;
            r0.b = r1
            r0.a = r3
            r0.<init>(r2)
            return
    }

    @Override
    public final void done() {
            r3 = this;
            com.alipay.android.phone.mrpc.core.q r0 = r3.a
            com.alipay.android.phone.mrpc.core.o r0 = r0.a()
            com.alipay.android.phone.mrpc.core.ac r1 = r0.f()
            if (r1 != 0) goto L10
            super.done()
            return
        L10:
            r3.get()     // Catch: java.lang.Throwable -> L33 java.util.concurrent.CancellationException -> L3c java.util.concurrent.ExecutionException -> L40 java.lang.InterruptedException -> L65
            boolean r1 = r3.isCancelled()     // Catch: java.lang.Throwable -> L33 java.util.concurrent.CancellationException -> L3c java.util.concurrent.ExecutionException -> L40 java.lang.InterruptedException -> L65
            if (r1 != 0) goto L1f
            boolean r1 = r0.h()     // Catch: java.lang.Throwable -> L33 java.util.concurrent.CancellationException -> L3c java.util.concurrent.ExecutionException -> L40 java.lang.InterruptedException -> L65
            if (r1 == 0) goto L32
        L1f:
            r0.g()     // Catch: java.lang.Throwable -> L33 java.util.concurrent.CancellationException -> L3c java.util.concurrent.ExecutionException -> L40 java.lang.InterruptedException -> L65
            boolean r1 = r3.isCancelled()     // Catch: java.lang.Throwable -> L33 java.util.concurrent.CancellationException -> L3c java.util.concurrent.ExecutionException -> L40 java.lang.InterruptedException -> L65
            if (r1 == 0) goto L2e
            boolean r1 = r3.isDone()     // Catch: java.lang.Throwable -> L33 java.util.concurrent.CancellationException -> L3c java.util.concurrent.ExecutionException -> L40 java.lang.InterruptedException -> L65
            if (r1 != 0) goto L32
        L2e:
            r1 = 0
            r3.cancel(r1)     // Catch: java.lang.Throwable -> L33 java.util.concurrent.CancellationException -> L3c java.util.concurrent.ExecutionException -> L40 java.lang.InterruptedException -> L65
        L32:
            return
        L33:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r2 = "An error occured while executing http request"
            r1.<init>(r2, r0)
            throw r1
        L3c:
            r0.g()
            return
        L40:
            r0 = move-exception
            java.lang.Throwable r1 = r0.getCause()
            if (r1 == 0) goto L5c
            java.lang.Throwable r1 = r0.getCause()
            boolean r1 = r1 instanceof com.alipay.android.phone.mrpc.core.HttpException
            if (r1 == 0) goto L5c
            java.lang.Throwable r0 = r0.getCause()
            com.alipay.android.phone.mrpc.core.HttpException r0 = (com.alipay.android.phone.mrpc.core.HttpException) r0
            r0.getCode()
            r0.getMsg()
            return
        L5c:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            return
        L65:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            return
    }
}
