package org.cocos2dx.okhttp3.internal.platform;

class OptionalMethod<T> {
    private final java.lang.String methodName;
    private final java.lang.Class[] methodParams;
    private final java.lang.Class<?> returnType;

    OptionalMethod(java.lang.Class<?> r1, java.lang.String r2, java.lang.Class... r3) {
            r0 = this;
            r0.<init>()
            r0.returnType = r1
            r0.methodName = r2
            r0.methodParams = r3
            return
    }

    private java.lang.reflect.Method getMethod(java.lang.Class<?> r4) {
            r3 = this;
            java.lang.String r0 = r3.methodName
            r1 = 0
            if (r0 == 0) goto L1d
            java.lang.Class[] r2 = r3.methodParams
            java.lang.reflect.Method r4 = getPublicMethod(r4, r0, r2)
            if (r4 == 0) goto L1c
            java.lang.Class<?> r0 = r3.returnType
            if (r0 == 0) goto L1c
            java.lang.Class r2 = r4.getReturnType()
            boolean r0 = r0.isAssignableFrom(r2)
            if (r0 != 0) goto L1c
            goto L1d
        L1c:
            r1 = r4
        L1d:
            return r1
    }

    private static java.lang.reflect.Method getPublicMethod(java.lang.Class<?> r1, java.lang.String r2, java.lang.Class[] r3) {
            r0 = 0
            java.lang.reflect.Method r1 = r1.getMethod(r2, r3)     // Catch: java.lang.NoSuchMethodException -> Ld
            int r2 = r1.getModifiers()     // Catch: java.lang.NoSuchMethodException -> Le
            r2 = r2 & 1
            if (r2 != 0) goto Le
        Ld:
            r1 = r0
        Le:
            return r1
    }

    public java.lang.Object invoke(T r4, java.lang.Object... r5) throws java.lang.reflect.InvocationTargetException {
            r3 = this;
            java.lang.Class r0 = r4.getClass()
            java.lang.reflect.Method r0 = r3.getMethod(r0)
            if (r0 == 0) goto L2a
            java.lang.Object r4 = r0.invoke(r4, r5)     // Catch: java.lang.IllegalAccessException -> Lf
            return r4
        Lf:
            r4 = move-exception
            java.lang.AssertionError r5 = new java.lang.AssertionError
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unexpectedly could not call: "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r5.<init>(r0)
            r5.initCause(r4)
            throw r5
        L2a:
            java.lang.AssertionError r5 = new java.lang.AssertionError
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Method "
            r0.append(r1)
            java.lang.String r1 = r3.methodName
            r0.append(r1)
            java.lang.String r1 = " not supported for object "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r5.<init>(r4)
            throw r5
    }

    public java.lang.Object invokeOptional(T r3, java.lang.Object... r4) throws java.lang.reflect.InvocationTargetException {
            r2 = this;
            java.lang.Class r0 = r3.getClass()
            java.lang.reflect.Method r0 = r2.getMethod(r0)
            r1 = 0
            if (r0 != 0) goto Lc
            return r1
        Lc:
            java.lang.Object r3 = r0.invoke(r3, r4)     // Catch: java.lang.IllegalAccessException -> L11
            return r3
        L11:
            return r1
    }

    public java.lang.Object invokeOptionalWithoutCheckedException(T r2, java.lang.Object... r3) {
            r1 = this;
            java.lang.Object r2 = r1.invokeOptional(r2, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L5
            return r2
        L5:
            r2 = move-exception
            java.lang.Throwable r2 = r2.getTargetException()
            boolean r3 = r2 instanceof java.lang.RuntimeException
            if (r3 == 0) goto L11
            java.lang.RuntimeException r2 = (java.lang.RuntimeException) r2
            throw r2
        L11:
            java.lang.AssertionError r3 = new java.lang.AssertionError
            java.lang.String r0 = "Unexpected exception"
            r3.<init>(r0)
            r3.initCause(r2)
            throw r3
    }

    public java.lang.Object invokeWithoutCheckedException(T r2, java.lang.Object... r3) {
            r1 = this;
            java.lang.Object r2 = r1.invoke(r2, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L5
            return r2
        L5:
            r2 = move-exception
            java.lang.Throwable r2 = r2.getTargetException()
            boolean r3 = r2 instanceof java.lang.RuntimeException
            if (r3 == 0) goto L11
            java.lang.RuntimeException r2 = (java.lang.RuntimeException) r2
            throw r2
        L11:
            java.lang.AssertionError r3 = new java.lang.AssertionError
            java.lang.String r0 = "Unexpected exception"
            r3.<init>(r0)
            r3.initCause(r2)
            throw r3
    }

    public boolean isSupported(T r1) {
            r0 = this;
            java.lang.Class r1 = r1.getClass()
            java.lang.reflect.Method r1 = r0.getMethod(r1)
            if (r1 == 0) goto Lc
            r1 = 1
            goto Ld
        Lc:
            r1 = 0
        Ld:
            return r1
    }
}
