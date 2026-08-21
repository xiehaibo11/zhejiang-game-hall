package org.cocos2dx.okhttp3.internal.platform;

import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

class OptionalMethod<T> {
    private final String methodName;
    private final Class[] methodParams;
    private final Class<?> returnType;

    OptionalMethod(Class<?> r1, String r2, Class... r3) {
        this.returnType = r1;
        this.methodName = r2;
        this.methodParams = r3;
    }

    public boolean isSupported(T r1) {
        if (getMethod(r1.getClass()) == null) goto L5;
        return true;
    L5:
        return false;
    }

    public Object invokeOptional(T r3, Object... r4) throws InvocationTargetException {
        Method r0 = getMethod(r3.getClass());
        if (r0 != null) goto L8;
        return null;
    L8:
        return r0.invoke(r3, r4);
    L7:
        return null;
    }

    public Object invokeOptionalWithoutCheckedException(T r2, Object... r3) {
        return invokeOptional(r2, r3);
    L4:
        e = move-exception;
        Throwable r22 = e.getTargetException();
        if ((r22 instanceof RuntimeException) == true) goto L8;
        AssertionError r32 = new AssertionError("Unexpected exception");
        r32.initCause(r22);
        throw r32;
    L8:
        throw ((RuntimeException) r22);
    }

    public Object invoke(T r4, Object... r5) throws InvocationTargetException {
        Method r0 = getMethod(r4.getClass());
        if (r0 == null) goto L10;
        return r0.invoke(r4, r5);
    L6:
        e = move-exception;
        AssertionError r52 = new AssertionError("Unexpectedly could not call: " + r0);
        r52.initCause(e);
        throw r52;
    L10:
        throw new AssertionError("Method " + this.methodName + " not supported for object " + r4);
    }

    public Object invokeWithoutCheckedException(T r2, Object... r3) {
        return invoke(r2, r3);
    L4:
        e = move-exception;
        Throwable r22 = e.getTargetException();
        if ((r22 instanceof RuntimeException) == true) goto L8;
        AssertionError r32 = new AssertionError("Unexpected exception");
        r32.initCause(r22);
        throw r32;
    L8:
        throw ((RuntimeException) r22);
    }

    private Method getMethod(Class<?> r4) {
        String r0 = this.methodName;
        if (r0 == null) goto L13;
        Method r42 = getPublicMethod(r4, r0, this.methodParams);
        if (r42 == null) goto L12;
        Class<?> r02 = this.returnType;
        if (r02 == null) goto L12;
        if (r02.isAssignableFrom(r42.getReturnType()) == true) goto L12;
        return null;
    L12:
        return r42;
    L13:
        return null;
    }

    private static Method getPublicMethod(Class<?> r1, String r2, Class[] r3) {
        Method r12 = r1.getMethod(r2, r3);     // Catch: NoSuchMethodException -> L10
        if ((r12.getModifiers() & 1) == 0) goto L8;
        return r12;
    L16:
        return r12;
    L8:
        return null;
    }
}
