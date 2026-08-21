package com.alipay.android.phone.mrpc.core;

public final class z {
    public static final java.lang.ThreadLocal<java.lang.Object> a = null;
    public static final java.lang.ThreadLocal<java.util.Map<java.lang.String, java.lang.Object>> b = null;
    public byte c;
    public java.util.concurrent.atomic.AtomicInteger d;
    public com.alipay.android.phone.mrpc.core.x e;

    static {
            java.lang.ThreadLocal r0 = new java.lang.ThreadLocal
            r0.<init>()
            com.alipay.android.phone.mrpc.core.z.a = r0
            java.lang.ThreadLocal r0 = new java.lang.ThreadLocal
            r0.<init>()
            com.alipay.android.phone.mrpc.core.z.b = r0
            return
    }

    public z(com.alipay.android.phone.mrpc.core.x r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.c = r0
            r1.e = r2
            java.util.concurrent.atomic.AtomicInteger r2 = new java.util.concurrent.atomic.AtomicInteger
            r2.<init>()
            r1.d = r2
            return
    }

    public final java.lang.Object a(java.lang.reflect.Method r12, java.lang.Object[] r13) {
            r11 = this;
            android.os.Looper r0 = android.os.Looper.myLooper()
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L14
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r3 = android.os.Looper.getMainLooper()
            if (r0 != r3) goto L14
            r0 = 1
            goto L15
        L14:
            r0 = 0
        L15:
            if (r0 != 0) goto La5
            java.lang.Class<com.alipay.mobile.framework.service.annotation.OperationType> r0 = com.alipay.mobile.framework.service.annotation.OperationType.class
            java.lang.annotation.Annotation r0 = r12.getAnnotation(r0)
            com.alipay.mobile.framework.service.annotation.OperationType r0 = (com.alipay.mobile.framework.service.annotation.OperationType) r0
            java.lang.Class<com.alipay.mobile.framework.service.annotation.ResetCookie> r3 = com.alipay.mobile.framework.service.annotation.ResetCookie.class
            java.lang.annotation.Annotation r3 = r12.getAnnotation(r3)
            if (r3 == 0) goto L29
            r10 = 1
            goto L2a
        L29:
            r10 = 0
        L2a:
            java.lang.reflect.Type r1 = r12.getGenericReturnType()
            r12.getAnnotations()
            java.lang.ThreadLocal<java.lang.Object> r2 = com.alipay.android.phone.mrpc.core.z.a
            r3 = 0
            r2.set(r3)
            java.lang.ThreadLocal<java.util.Map<java.lang.String, java.lang.Object>> r2 = com.alipay.android.phone.mrpc.core.z.b
            r2.set(r3)
            if (r0 == 0) goto L9d
            java.lang.String r0 = r0.value()
            java.util.concurrent.atomic.AtomicInteger r2 = r11.d
            int r7 = r2.incrementAndGet()
            byte r2 = r11.c     // Catch: com.alipay.android.phone.mrpc.core.RpcException -> L98
            if (r2 != 0) goto L91
            com.alipay.android.phone.mrpc.core.a.e r2 = new com.alipay.android.phone.mrpc.core.a.e     // Catch: com.alipay.android.phone.mrpc.core.RpcException -> L98
            r2.<init>(r7, r0, r13)     // Catch: com.alipay.android.phone.mrpc.core.RpcException -> L98
            java.lang.ThreadLocal<java.util.Map<java.lang.String, java.lang.Object>> r13 = com.alipay.android.phone.mrpc.core.z.b     // Catch: com.alipay.android.phone.mrpc.core.RpcException -> L98
            java.lang.Object r13 = r13.get()     // Catch: com.alipay.android.phone.mrpc.core.RpcException -> L98
            if (r13 == 0) goto L62
            java.lang.ThreadLocal<java.util.Map<java.lang.String, java.lang.Object>> r13 = com.alipay.android.phone.mrpc.core.z.b     // Catch: com.alipay.android.phone.mrpc.core.RpcException -> L98
            java.lang.Object r13 = r13.get()     // Catch: com.alipay.android.phone.mrpc.core.RpcException -> L98
            r2.a(r13)     // Catch: com.alipay.android.phone.mrpc.core.RpcException -> L98
        L62:
            byte[] r9 = r2.a()     // Catch: com.alipay.android.phone.mrpc.core.RpcException -> L98
            com.alipay.android.phone.mrpc.core.j r13 = new com.alipay.android.phone.mrpc.core.j     // Catch: com.alipay.android.phone.mrpc.core.RpcException -> L98
            com.alipay.android.phone.mrpc.core.x r2 = r11.e     // Catch: com.alipay.android.phone.mrpc.core.RpcException -> L98
            com.alipay.android.phone.mrpc.core.g r5 = r2.a()     // Catch: com.alipay.android.phone.mrpc.core.RpcException -> L98
            r4 = r13
            r6 = r12
            r8 = r0
            r4.<init>(r5, r6, r7, r8, r9, r10)     // Catch: com.alipay.android.phone.mrpc.core.RpcException -> L98
            java.lang.Object r12 = r13.a()     // Catch: com.alipay.android.phone.mrpc.core.RpcException -> L98
            byte[] r12 = (byte[]) r12     // Catch: com.alipay.android.phone.mrpc.core.RpcException -> L98
            java.lang.ThreadLocal<java.util.Map<java.lang.String, java.lang.Object>> r13 = com.alipay.android.phone.mrpc.core.z.b     // Catch: com.alipay.android.phone.mrpc.core.RpcException -> L98
            r13.set(r3)     // Catch: com.alipay.android.phone.mrpc.core.RpcException -> L98
            com.alipay.android.phone.mrpc.core.a.d r13 = new com.alipay.android.phone.mrpc.core.a.d     // Catch: com.alipay.android.phone.mrpc.core.RpcException -> L98
            r13.<init>(r1, r12)     // Catch: com.alipay.android.phone.mrpc.core.RpcException -> L98
            java.lang.Object r12 = r13.a()     // Catch: com.alipay.android.phone.mrpc.core.RpcException -> L98
            java.lang.Class r13 = java.lang.Void.TYPE     // Catch: com.alipay.android.phone.mrpc.core.RpcException -> L98
            if (r1 == r13) goto L91
            java.lang.ThreadLocal<java.lang.Object> r13 = com.alipay.android.phone.mrpc.core.z.a     // Catch: com.alipay.android.phone.mrpc.core.RpcException -> L98
            r13.set(r12)     // Catch: com.alipay.android.phone.mrpc.core.RpcException -> L98
        L91:
            java.lang.ThreadLocal<java.lang.Object> r12 = com.alipay.android.phone.mrpc.core.z.a
            java.lang.Object r12 = r12.get()
            return r12
        L98:
            r12 = move-exception
            r12.setOperationType(r0)
            throw r12
        L9d:
            java.lang.IllegalStateException r12 = new java.lang.IllegalStateException
            java.lang.String r13 = "OperationType must be set."
            r12.<init>(r13)
            throw r12
        La5:
            java.lang.IllegalThreadStateException r12 = new java.lang.IllegalThreadStateException
            java.lang.String r13 = "can't in main thread call rpc ."
            r12.<init>(r13)
            throw r12
    }
}
