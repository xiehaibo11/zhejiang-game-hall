package android.arch.lifecycle;

import android.arch.lifecycle.Lifecycle;
import android.support.annotation.Nullable;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

class ClassesInfoCache {
    private static final int CALL_TYPE_NO_ARG = 0;
    private static final int CALL_TYPE_PROVIDER = 1;
    private static final int CALL_TYPE_PROVIDER_WITH_EVENT = 2;
    static ClassesInfoCache sInstance;
    private final Map<Class, CallbackInfo> mCallbackMap;
    private final Map<Class, Boolean> mHasLifecycleMethods;

    static class CallbackInfo {
        final Map<Lifecycle.Event, List<MethodReference>> mEventToHandlers;
        final Map<MethodReference, Lifecycle.Event> mHandlerToEvent;

        CallbackInfo(Map<MethodReference, Lifecycle.Event> r5) {
            this.mHandlerToEvent = r5;
            this.mEventToHandlers = new HashMap();
            Iterator<Map.Entry<MethodReference, Lifecycle.Event>> r52 = r5.entrySet().iterator();
        L4:
            if (r52.hasNext() == false) goto L9;
            Map.Entry<MethodReference, Lifecycle.Event> r0 = r52.next();
            Lifecycle.Event r1 = r0.getValue();
            List<MethodReference> r2 = this.mEventToHandlers.get(r1);
            if (r2 != null) goto L8;
            r2 = new ArrayList();
            this.mEventToHandlers.put(r1, r2);
        L8:
            r2.add(r0.getKey());
            goto L4
        }

        void invokeCallbacks(LifecycleOwner r3, Lifecycle.Event r4, Object r5) {
            invokeMethodsForEvent(this.mEventToHandlers.get(r4), r3, r4, r5);
            invokeMethodsForEvent(this.mEventToHandlers.get(Lifecycle.Event.ON_ANY), r3, r4, r5);
        }

        private static void invokeMethodsForEvent(List<MethodReference> r2, LifecycleOwner r3, Lifecycle.Event r4, Object r5) {
            if (r2 == null) goto L6;
            int r0 = r2.size() - 1;
        L4:
            if (r0 < 0) goto L8;
            r2.get(r0).invokeCallback(r3, r4, r5);
            r0 = r0 - 1;
            goto L4
        L8:
            return;
        }
    }

    static class MethodReference {
        final int mCallType;
        final Method mMethod;

        MethodReference(int r1, Method r2) {
            this.mCallType = r1;
            this.mMethod = r2;
            this.mMethod.setAccessible(true);
        }

        void invokeCallback(LifecycleOwner r5, Lifecycle.Event r6, Object r7) {
            int r0 = this.mCallType;     // Catch: IllegalAccessException -> L13 InvocationTargetException -> L16
            if (r0 != 0) goto L5;
            this.mMethod.invoke(r7, new Object[0]);     // Catch: IllegalAccessException -> L13 InvocationTargetException -> L16
            return;
        L5:
            if (r0 != 1) goto L7;
            this.mMethod.invoke(r7, new Object[]{r5});     // Catch: IllegalAccessException -> L13 InvocationTargetException -> L16
            return;
        L7:
            if (r0 != 2) goto L20;
            this.mMethod.invoke(r7, new Object[]{r5, r6});     // Catch: IllegalAccessException -> L13 InvocationTargetException -> L16
            return;
        L20:
            return;
        L13:
            e = move-exception;
            throw new RuntimeException(e);
        L16:
            e = move-exception;
            throw new RuntimeException("Failed to call observer method", e.getCause());
        }

        public boolean equals(Object r5) {
            if (this != r5) goto L6;
            return true;
        L6:
            if (r5 != null) goto L8;
        L17:
            return false;
        L8:
            if (getClass() != r5.getClass()) goto L17;
            MethodReference r52 = (MethodReference) r5;
            if (this.mCallType == r52.mCallType) goto L13;
        L15:
            return false;
        L13:
            if (this.mMethod.getName().equals(r52.mMethod.getName()) == false) goto L15;
            return true;
        }

        public int hashCode() {
            return (this.mCallType * 31) + this.mMethod.getName().hashCode();
        }
    }

    ClassesInfoCache() {
        this.mCallbackMap = new HashMap();
        this.mHasLifecycleMethods = new HashMap();
    }

    static {
        sInstance = new ClassesInfoCache();
    }

    boolean hasLifecycleMethods(Class r7) {
        if (this.mHasLifecycleMethods.containsKey(r7) == true) goto L5;
        Method[] r0 = getDeclaredMethods(r7);
        int r1 = r0.length;
        int r3 = 0;
    L7:
        if (r3 >= r1) goto L13;
        if (((OnLifecycleEvent) r0[r3].getAnnotation(OnLifecycleEvent.class)) != null) goto L10;
        r3 = r3 + 1;
        goto L7
    L10:
        createInfo(r7, r0);
        return true;
    L13:
        this.mHasLifecycleMethods.put(r7, false);
        return false;
    L5:
        return this.mHasLifecycleMethods.get(r7).booleanValue();
    }

    private Method[] getDeclaredMethods(Class r3) {
        return r3.getDeclaredMethods();
    L4:
        e = move-exception;
        throw new IllegalArgumentException("The observer class has some methods that use newer APIs which are not available in the current OS version. Lifecycles cannot access even other methods so you should make sure that your observer classes only access framework classes that are available in your min API level OR use lifecycle:compiler annotation processor.", e);
    }

    CallbackInfo getInfo(Class r2) {
        CallbackInfo r0 = this.mCallbackMap.get(r2);
        if (r0 == null) goto L6;
        return r0;
    L6:
        return createInfo(r2, null);
    }

    private void verifyAndPutHandler(Map<MethodReference, Lifecycle.Event> r4, MethodReference r5, Lifecycle.Event r6, Class r7) {
        Lifecycle.Event r0 = r4.get(r5);
        if (r0 == null) goto L8;
        if (r6 == r0) goto L8;
        throw new IllegalArgumentException("Method " + r5.mMethod.getName() + " in " + r7.getName() + " already declared with different @OnLifecycleEvent value: previous value " + r0 + ", new value " + r6);
    L8:
        if (r0 != null) goto L11;
        r4.put(r5, r6);
        return;
    }

    private CallbackInfo createInfo(Class r12, @Nullable Method[] r13) {
        Class r0 = r12.getSuperclass();
        HashMap r1 = new HashMap();
        if (r0 == null) goto L7;
        CallbackInfo r02 = getInfo(r0);
        if (r02 == null) goto L7;
        r1.putAll(r02.mHandlerToEvent);
    L7:
        Class<?>[] r03 = r12.getInterfaces();
        int r2 = r03.length;
        int r4 = 0;
    L8:
        if (r4 >= r2) goto L14;
        Iterator<Map.Entry<MethodReference, Lifecycle.Event>> r5 = getInfo(r03[r4]).mHandlerToEvent.entrySet().iterator();
    L11:
        if (r5.hasNext() == false) goto L13;
        Map.Entry<MethodReference, Lifecycle.Event> r6 = r5.next();
        verifyAndPutHandler(r1, r6.getKey(), r6.getValue(), r12);
        goto L11
    L13:
        r4 = r4 + 1;
        goto L8
    L14:
        if (r13 != null) goto L17;
        r13 = getDeclaredMethods(r12);
    L17:
        int r04 = r13.length;
        int r22 = 0;
        boolean r42 = false;
    L18:
        if (r22 >= r04) goto L47;
        Method r52 = r13[r22];
        OnLifecycleEvent r62 = (OnLifecycleEvent) r52.getAnnotation(OnLifecycleEvent.class);
        if (r62 == null) goto L44;
        Class<?>[] r43 = r52.getParameterTypes();
        if (r43.length > 0) goto L25;
        int r8 = 0;
    L30:
        Lifecycle.Event r63 = r62.value();
        if (r43.length <= 1) goto L42;
        if (r43[1].isAssignableFrom(Lifecycle.Event.class) == false) goto L40;
        if (r63 != Lifecycle.Event.ON_ANY) goto L38;
        r8 = 2;
        goto L42
    L38:
        throw new IllegalArgumentException("Second arg is supported only for ON_ANY value");
    L40:
        throw new IllegalArgumentException("invalid parameter type. second arg must be an event");
    L42:
        if (r43.length > 2) goto L46;
        verifyAndPutHandler(r1, new MethodReference(r8, r52), r63, r12);
        r42 = true;
        goto L44
    L46:
        throw new IllegalArgumentException("cannot have more than 2 params");
    L25:
        if (r43[0].isAssignableFrom(LifecycleOwner.class) == false) goto L28;
        r8 = 1;
        goto L30
    L28:
        throw new IllegalArgumentException("invalid parameter type. Must be one and instanceof LifecycleOwner");
    L44:
        r22 = r22 + 1;
        goto L18
    L47:
        CallbackInfo r132 = new CallbackInfo(r1);
        this.mCallbackMap.put(r12, r132);
        this.mHasLifecycleMethods.put(r12, Boolean.valueOf(r42));
        return r132;
    }
}
