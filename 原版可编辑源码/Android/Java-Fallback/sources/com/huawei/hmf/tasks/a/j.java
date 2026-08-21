package com.huawei.hmf.tasks.a;

public final class j {




    public static class a<TResult> implements com.huawei.hmf.tasks.OnCanceledListener, com.huawei.hmf.tasks.OnFailureListener, com.huawei.hmf.tasks.OnSuccessListener<TResult> {
        public final java.util.concurrent.CountDownLatch a;

        public a() {
                r2 = this;
                r2.<init>()
                java.util.concurrent.CountDownLatch r0 = new java.util.concurrent.CountDownLatch
                r1 = 1
                r0.<init>(r1)
                r2.a = r0
                return
        }

        @Override
        public final void onCanceled() {
                r1 = this;
                java.util.concurrent.CountDownLatch r0 = r1.a
                r0.countDown()
                return
        }

        @Override
        public final void onFailure(java.lang.Exception r1) {
                r0 = this;
                java.util.concurrent.CountDownLatch r1 = r0.a
                r1.countDown()
                return
        }

        @Override
        public final void onSuccess(TResult r1) {
                r0 = this;
                java.util.concurrent.CountDownLatch r1 = r0.a
                r1.countDown()
                return
        }
    }

    public j() {
            r0 = this;
            r0.<init>()
            return
    }

    public static <TResult> com.huawei.hmf.tasks.Task<TResult> a(TResult r1) {
            com.huawei.hmf.tasks.TaskCompletionSource r0 = new com.huawei.hmf.tasks.TaskCompletionSource
            r0.<init>()
            r0.setResult(r1)
            com.huawei.hmf.tasks.Task r1 = r0.getTask()
            return r1
    }

    public static com.huawei.hmf.tasks.Task<java.util.List<com.huawei.hmf.tasks.Task<?>>> a(java.util.Collection<? extends com.huawei.hmf.tasks.Task<?>> r2) {
            com.huawei.hmf.tasks.Task r0 = c(r2)
            com.huawei.hmf.tasks.a.j$2 r1 = new com.huawei.hmf.tasks.a.j$2
            r1.<init>(r2)
            com.huawei.hmf.tasks.Task r2 = r0.continueWith(r1)
            return r2
    }

    public static <TResult> TResult a(com.huawei.hmf.tasks.Task<TResult> r1) throws java.util.concurrent.ExecutionException {
            boolean r0 = r1.isSuccessful()
            if (r0 == 0) goto Lb
            java.lang.Object r1 = r1.getResult()
            return r1
        Lb:
            java.util.concurrent.ExecutionException r0 = new java.util.concurrent.ExecutionException
            java.lang.Exception r1 = r1.getException()
            r0.<init>(r1)
            throw r0
    }

    public static void a(java.lang.String r2) {
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 == r1) goto Lb
            return
        Lb:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r0.<init>(r2)
            throw r0
    }

    public static <TResult> com.huawei.hmf.tasks.Task<java.util.List<TResult>> b(java.util.Collection<? extends com.huawei.hmf.tasks.Task<?>> r2) {
            com.huawei.hmf.tasks.Task r0 = c(r2)
            com.huawei.hmf.tasks.a.j$3 r1 = new com.huawei.hmf.tasks.a.j$3
            r1.<init>(r2)
            com.huawei.hmf.tasks.Task r2 = r0.continueWith(r1)
            return r2
    }

    public static com.huawei.hmf.tasks.Task<java.lang.Void> c(java.util.Collection<? extends com.huawei.hmf.tasks.Task<?>> r4) {
            boolean r0 = r4.isEmpty()
            if (r0 == 0) goto Lc
            r4 = 0
            com.huawei.hmf.tasks.Task r4 = a(r4)
            return r4
        Lc:
            java.util.Iterator r0 = r4.iterator()
        L10:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L27
            java.lang.Object r1 = r0.next()
            com.huawei.hmf.tasks.Task r1 = (com.huawei.hmf.tasks.Task) r1
            if (r1 == 0) goto L1f
            goto L10
        L1f:
            java.lang.NullPointerException r4 = new java.lang.NullPointerException
            java.lang.String r0 = "task can not is null"
            r4.<init>(r0)
            throw r4
        L27:
            com.huawei.hmf.tasks.a.i r0 = new com.huawei.hmf.tasks.a.i
            r0.<init>()
            com.huawei.hmf.tasks.a.e r1 = new com.huawei.hmf.tasks.a.e
            int r2 = r4.size()
            r1.<init>(r2, r0)
            java.util.Iterator r4 = r4.iterator()
        L39:
            boolean r2 = r4.hasNext()
            if (r2 == 0) goto L5b
            java.lang.Object r2 = r4.next()
            com.huawei.hmf.tasks.Task r2 = (com.huawei.hmf.tasks.Task) r2
            java.util.concurrent.Executor r3 = com.huawei.hmf.tasks.TaskExecutors.immediate()
            r2.addOnSuccessListener(r3, r1)
            java.util.concurrent.Executor r3 = com.huawei.hmf.tasks.TaskExecutors.immediate()
            r2.addOnFailureListener(r3, r1)
            java.util.concurrent.Executor r3 = com.huawei.hmf.tasks.TaskExecutors.immediate()
            r2.addOnCanceledListener(r3, r1)
            goto L39
        L5b:
            return r0
    }

    public final <TResult> com.huawei.hmf.tasks.Task<TResult> a(java.util.concurrent.Executor r3, java.util.concurrent.Callable<TResult> r4) {
            r2 = this;
            com.huawei.hmf.tasks.TaskCompletionSource r0 = new com.huawei.hmf.tasks.TaskCompletionSource
            r0.<init>()
            com.huawei.hmf.tasks.a.j$1 r1 = new com.huawei.hmf.tasks.a.j$1     // Catch: java.lang.Exception -> Le
            r1.<init>(r2, r0, r4)     // Catch: java.lang.Exception -> Le
            r3.execute(r1)     // Catch: java.lang.Exception -> Le
            goto L12
        Le:
            r3 = move-exception
            r0.setException(r3)
        L12:
            com.huawei.hmf.tasks.Task r3 = r0.getTask()
            return r3
    }
}
