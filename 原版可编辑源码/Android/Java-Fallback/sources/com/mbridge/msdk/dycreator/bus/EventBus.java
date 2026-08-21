package com.mbridge.msdk.dycreator.bus;

public final class EventBus {
    public static java.lang.String TAG;
    static java.util.concurrent.ExecutorService a;
    private static volatile com.mbridge.msdk.dycreator.bus.EventBus b;
    private static final java.util.Map<java.lang.Class<?>, java.util.List<java.lang.Class<?>>> c = null;
    private final java.util.Map<java.lang.Class<?>, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.dycreator.bus.Subscription>> d;
    private final java.util.Map<java.lang.Object, java.util.List<java.lang.Class<?>>> e;
    private final java.util.Map<java.lang.Class<?>, java.lang.Object> f;
    private final java.lang.ThreadLocal<java.util.List<java.lang.Object>> g;
    private final java.lang.ThreadLocal<com.mbridge.msdk.dycreator.bus.EventBus.BooleanWrapper> h;
    private java.lang.String i;
    private final com.mbridge.msdk.dycreator.bus.HandlerPoster j;
    private final com.mbridge.msdk.dycreator.bus.BackgroundPoster k;
    private final com.mbridge.msdk.dycreator.bus.AsyncPoster l;
    private final com.mbridge.msdk.dycreator.bus.SubscriberMethodFinder m;
    private boolean n;
    private boolean o;
    private java.util.Map<java.lang.String, java.lang.Object> p;



    static class 3 {
        static final int[] a = null;

        static {
                com.mbridge.msdk.dycreator.bus.ThreadMode[] r0 = com.mbridge.msdk.dycreator.bus.ThreadMode.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.mbridge.msdk.dycreator.bus.EventBus.3.a = r0
                com.mbridge.msdk.dycreator.bus.ThreadMode r1 = com.mbridge.msdk.dycreator.bus.ThreadMode.PostThread     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.mbridge.msdk.dycreator.bus.EventBus.3.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.mbridge.msdk.dycreator.bus.ThreadMode r1 = com.mbridge.msdk.dycreator.bus.ThreadMode.MainThread     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.mbridge.msdk.dycreator.bus.EventBus.3.a     // Catch: java.lang.NoSuchFieldError -> L28
                com.mbridge.msdk.dycreator.bus.ThreadMode r1 = com.mbridge.msdk.dycreator.bus.ThreadMode.BackgroundThread     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.mbridge.msdk.dycreator.bus.EventBus.3.a     // Catch: java.lang.NoSuchFieldError -> L33
                com.mbridge.msdk.dycreator.bus.ThreadMode r1 = com.mbridge.msdk.dycreator.bus.ThreadMode.Async     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                return
        }
    }

    static final class BooleanWrapper {
        boolean a;

        BooleanWrapper() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    interface PostCallback {
        void onPostCompleted(java.util.List<com.mbridge.msdk.dycreator.bus.SubscriberExceptionEvent> r1);
    }

    static {
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newCachedThreadPool()
            com.mbridge.msdk.dycreator.bus.EventBus.a = r0
            java.lang.String r0 = "Event"
            com.mbridge.msdk.dycreator.bus.EventBus.TAG = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.dycreator.bus.EventBus.c = r0
            return
    }

    public EventBus() {
            r3 = this;
            r3.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r3.d = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r3.e = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r3.f = r0
            com.mbridge.msdk.dycreator.bus.EventBus$1 r0 = new com.mbridge.msdk.dycreator.bus.EventBus$1
            r0.<init>(r3)
            r3.g = r0
            com.mbridge.msdk.dycreator.bus.EventBus$2 r0 = new com.mbridge.msdk.dycreator.bus.EventBus$2
            r0.<init>(r3)
            r3.h = r0
            java.lang.String r0 = "onEvent"
            r3.i = r0
            com.mbridge.msdk.dycreator.bus.HandlerPoster r0 = new com.mbridge.msdk.dycreator.bus.HandlerPoster
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r2 = 10
            r0.<init>(r3, r1, r2)
            r3.j = r0
            com.mbridge.msdk.dycreator.bus.BackgroundPoster r0 = new com.mbridge.msdk.dycreator.bus.BackgroundPoster
            r0.<init>(r3)
            r3.k = r0
            com.mbridge.msdk.dycreator.bus.AsyncPoster r0 = new com.mbridge.msdk.dycreator.bus.AsyncPoster
            r0.<init>(r3)
            r3.l = r0
            com.mbridge.msdk.dycreator.bus.SubscriberMethodFinder r0 = new com.mbridge.msdk.dycreator.bus.SubscriberMethodFinder
            r0.<init>()
            r3.m = r0
            r0 = 1
            r3.o = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r3.p = r0
            return
    }

    private java.util.List<java.lang.Class<?>> a(java.lang.Class<?> r5) {
            r4 = this;
            java.util.Map<java.lang.Class<?>, java.util.List<java.lang.Class<?>>> r0 = com.mbridge.msdk.dycreator.bus.EventBus.c
            monitor-enter(r0)
            java.util.Map<java.lang.Class<?>, java.util.List<java.lang.Class<?>>> r1 = com.mbridge.msdk.dycreator.bus.EventBus.c     // Catch: java.lang.Throwable -> L2b
            java.lang.Object r1 = r1.get(r5)     // Catch: java.lang.Throwable -> L2b
            java.util.List r1 = (java.util.List) r1     // Catch: java.lang.Throwable -> L2b
            if (r1 != 0) goto L29
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L2b
            r1.<init>()     // Catch: java.lang.Throwable -> L2b
            r2 = r5
        L13:
            if (r2 == 0) goto L24
            r1.add(r2)     // Catch: java.lang.Throwable -> L2b
            java.lang.Class[] r3 = r2.getInterfaces()     // Catch: java.lang.Throwable -> L2b
            a(r1, r3)     // Catch: java.lang.Throwable -> L2b
            java.lang.Class r2 = r2.getSuperclass()     // Catch: java.lang.Throwable -> L2b
            goto L13
        L24:
            java.util.Map<java.lang.Class<?>, java.util.List<java.lang.Class<?>>> r2 = com.mbridge.msdk.dycreator.bus.EventBus.c     // Catch: java.lang.Throwable -> L2b
            r2.put(r5, r1)     // Catch: java.lang.Throwable -> L2b
        L29:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2b
            return r1
        L2b:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2b
            throw r5
    }

    private void a(com.mbridge.msdk.dycreator.bus.Subscription r5, java.lang.Object r6) throws java.lang.Error {
            r4 = this;
            com.mbridge.msdk.dycreator.bus.SubscriberMethod r0 = r5.b     // Catch: java.lang.IllegalAccessException -> L11 java.lang.reflect.InvocationTargetException -> L1a
            java.lang.reflect.Method r0 = r0.a     // Catch: java.lang.IllegalAccessException -> L11 java.lang.reflect.InvocationTargetException -> L1a
            java.lang.Object r1 = r5.a     // Catch: java.lang.IllegalAccessException -> L11 java.lang.reflect.InvocationTargetException -> L1a
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.IllegalAccessException -> L11 java.lang.reflect.InvocationTargetException -> L1a
            r3 = 0
            r2[r3] = r6     // Catch: java.lang.IllegalAccessException -> L11 java.lang.reflect.InvocationTargetException -> L1a
            r0.invoke(r1, r2)     // Catch: java.lang.IllegalAccessException -> L11 java.lang.reflect.InvocationTargetException -> L1a
            goto La1
        L11:
            r5 = move-exception
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
            java.lang.String r0 = "Unexpected exception"
            r6.<init>(r0, r5)
            throw r6
        L1a:
            r0 = move-exception
            java.lang.Throwable r0 = r0.getCause()
            boolean r1 = r6 instanceof com.mbridge.msdk.dycreator.bus.SubscriberExceptionEvent
            if (r1 == 0) goto L6b
            java.lang.String r1 = com.mbridge.msdk.dycreator.bus.EventBus.TAG
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "SubscriberExceptionEvent subscriber "
            r2.append(r3)
            java.lang.Object r5 = r5.a
            java.lang.Class r5 = r5.getClass()
            r2.append(r5)
            java.lang.String r5 = " threw an exception"
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            android.util.Log.e(r1, r5, r0)
            com.mbridge.msdk.dycreator.bus.SubscriberExceptionEvent r6 = (com.mbridge.msdk.dycreator.bus.SubscriberExceptionEvent) r6
            java.lang.String r5 = com.mbridge.msdk.dycreator.bus.EventBus.TAG
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Initial event "
            r0.append(r1)
            java.lang.Object r1 = r6.causingEvent
            r0.append(r1)
            java.lang.String r1 = " caused exception in "
            r0.append(r1)
            java.lang.Object r1 = r6.causingSubscriber
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.Throwable r6 = r6.throwable
            android.util.Log.e(r5, r0, r6)
            goto La1
        L6b:
            boolean r1 = r4.o
            if (r1 == 0) goto L97
            java.lang.String r1 = com.mbridge.msdk.dycreator.bus.EventBus.TAG
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Could not dispatch event: "
            r2.append(r3)
            java.lang.Class r3 = r6.getClass()
            r2.append(r3)
            java.lang.String r3 = " to subscribing class "
            r2.append(r3)
            java.lang.Object r3 = r5.a
            java.lang.Class r3 = r3.getClass()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            android.util.Log.e(r1, r2, r0)
        L97:
            com.mbridge.msdk.dycreator.bus.SubscriberExceptionEvent r1 = new com.mbridge.msdk.dycreator.bus.SubscriberExceptionEvent
            java.lang.Object r5 = r5.a
            r1.<init>(r4, r0, r6, r5)
            r4.post(r1)
        La1:
            return
    }

    private void a(com.mbridge.msdk.dycreator.bus.Subscription r3, java.lang.Object r4, boolean r5) {
            r2 = this;
            int[] r0 = com.mbridge.msdk.dycreator.bus.EventBus.3.a
            com.mbridge.msdk.dycreator.bus.SubscriberMethod r1 = r3.b
            com.mbridge.msdk.dycreator.bus.ThreadMode r1 = r1.b
            int r1 = r1.ordinal()
            r0 = r0[r1]
            r1 = 1
            if (r0 == r1) goto L51
            r1 = 2
            if (r0 == r1) goto L45
            r1 = 3
            if (r0 == r1) goto L39
            r5 = 4
            if (r0 != r5) goto L1e
            com.mbridge.msdk.dycreator.bus.AsyncPoster r5 = r2.l
            r5.enqueue(r3, r4)
            goto L54
        L1e:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "Unknown thread mode: "
            r5.append(r0)
            com.mbridge.msdk.dycreator.bus.SubscriberMethod r3 = r3.b
            com.mbridge.msdk.dycreator.bus.ThreadMode r3 = r3.b
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.<init>(r3)
            throw r4
        L39:
            if (r5 == 0) goto L41
            com.mbridge.msdk.dycreator.bus.BackgroundPoster r5 = r2.k
            r5.enqueue(r3, r4)
            goto L54
        L41:
            r2.a(r3, r4)
            goto L54
        L45:
            if (r5 == 0) goto L4b
            r2.a(r3, r4)
            goto L54
        L4b:
            com.mbridge.msdk.dycreator.bus.HandlerPoster r5 = r2.j
            r5.a(r3, r4)
            goto L54
        L51:
            r2.a(r3, r4)
        L54:
            return
    }

    private void a(java.lang.Object r7, com.mbridge.msdk.dycreator.bus.SubscriberMethod r8, boolean r9) {
            r6 = this;
            r0 = 1
            r6.n = r0
            java.lang.Class<?> r1 = r8.c
            java.util.Map<java.lang.Class<?>, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.dycreator.bus.Subscription>> r2 = r6.d
            java.lang.Object r2 = r2.get(r1)
            java.util.concurrent.CopyOnWriteArrayList r2 = (java.util.concurrent.CopyOnWriteArrayList) r2
            com.mbridge.msdk.dycreator.bus.Subscription r3 = new com.mbridge.msdk.dycreator.bus.Subscription
            r3.<init>(r7, r8)
            if (r2 != 0) goto L1f
            java.util.concurrent.CopyOnWriteArrayList r2 = new java.util.concurrent.CopyOnWriteArrayList
            r2.<init>()
            java.util.Map<java.lang.Class<?>, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.dycreator.bus.Subscription>> r4 = r6.d
            r4.put(r1, r2)
            goto L59
        L1f:
            java.util.Iterator r4 = r2.iterator()
        L23:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L59
            java.lang.Object r5 = r4.next()
            com.mbridge.msdk.dycreator.bus.Subscription r5 = (com.mbridge.msdk.dycreator.bus.Subscription) r5
            boolean r5 = r5.equals(r3)
            if (r5 != 0) goto L36
            goto L23
        L36:
            com.mbridge.msdk.dycreator.bus.EventBusException r8 = new com.mbridge.msdk.dycreator.bus.EventBusException
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r0 = "Subscriber "
            r9.append(r0)
            java.lang.Class r7 = r7.getClass()
            r9.append(r7)
            java.lang.String r7 = " already registered to event "
            r9.append(r7)
            r9.append(r1)
            java.lang.String r7 = r9.toString()
            r8.<init>(r7)
            throw r8
        L59:
            java.lang.reflect.Method r8 = r8.a
            r8.setAccessible(r0)
            r2.add(r3)
            java.util.Map<java.lang.Object, java.util.List<java.lang.Class<?>>> r8 = r6.e
            java.lang.Object r8 = r8.get(r7)
            java.util.List r8 = (java.util.List) r8
            if (r8 != 0) goto L75
            java.util.ArrayList r8 = new java.util.ArrayList
            r8.<init>()
            java.util.Map<java.lang.Object, java.util.List<java.lang.Class<?>>> r2 = r6.e
            r2.put(r7, r8)
        L75:
            r8.add(r1)
            if (r9 == 0) goto L99
            java.util.Map<java.lang.Class<?>, java.lang.Object> r7 = r6.f
            monitor-enter(r7)
            java.util.Map<java.lang.Class<?>, java.lang.Object> r8 = r6.f     // Catch: java.lang.Throwable -> L96
            java.lang.Object r8 = r8.get(r1)     // Catch: java.lang.Throwable -> L96
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L96
            if (r8 == 0) goto L99
            android.os.Looper r7 = android.os.Looper.getMainLooper()
            android.os.Looper r9 = android.os.Looper.myLooper()
            if (r7 != r9) goto L91
            goto L92
        L91:
            r0 = 0
        L92:
            r6.a(r3, r8, r0)
            goto L99
        L96:
            r8 = move-exception
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L96
            throw r8
        L99:
            return
    }

    private void a(java.lang.Object r4, java.lang.Class<?> r5) {
            r3 = this;
            java.util.Map<java.lang.Class<?>, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.dycreator.bus.Subscription>> r0 = r3.d
            java.lang.Object r5 = r0.get(r5)
            java.util.List r5 = (java.util.List) r5
            if (r5 == 0) goto L25
            int r0 = r5.size()
            r1 = 0
        Lf:
            if (r1 >= r0) goto L25
            java.lang.Object r2 = r5.get(r1)
            com.mbridge.msdk.dycreator.bus.Subscription r2 = (com.mbridge.msdk.dycreator.bus.Subscription) r2
            java.lang.Object r2 = r2.a
            if (r2 != r4) goto L22
            r5.remove(r1)
            int r1 = r1 + (-1)
            int r0 = r0 + (-1)
        L22:
            int r1 = r1 + 1
            goto Lf
        L25:
            return
    }

    private void a(java.lang.Object r3, java.lang.String r4, boolean r5) {
            r2 = this;
            com.mbridge.msdk.dycreator.bus.SubscriberMethodFinder r0 = r2.m
            java.lang.Class r1 = r3.getClass()
            java.util.List r4 = r0.a(r1, r4)
            java.util.Iterator r4 = r4.iterator()
        Le:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L1e
            java.lang.Object r0 = r4.next()
            com.mbridge.msdk.dycreator.bus.SubscriberMethod r0 = (com.mbridge.msdk.dycreator.bus.SubscriberMethod) r0
            r2.a(r3, r0, r5)
            goto Le
        L1e:
            return
    }

    private synchronized void a(java.lang.Object r6, java.lang.String r7, boolean r8, java.lang.Class<?> r9, java.lang.Class<?>... r10) {
            r5 = this;
            monitor-enter(r5)
            java.lang.Class r0 = r6.getClass()     // Catch: java.lang.Throwable -> L38
            com.mbridge.msdk.dycreator.bus.SubscriberMethodFinder r1 = r5.m     // Catch: java.lang.Throwable -> L38
            java.util.List r7 = r1.a(r0, r7)     // Catch: java.lang.Throwable -> L38
            java.util.Iterator r7 = r7.iterator()     // Catch: java.lang.Throwable -> L38
        Lf:
            boolean r0 = r7.hasNext()     // Catch: java.lang.Throwable -> L38
            if (r0 == 0) goto L36
            java.lang.Object r0 = r7.next()     // Catch: java.lang.Throwable -> L38
            com.mbridge.msdk.dycreator.bus.SubscriberMethod r0 = (com.mbridge.msdk.dycreator.bus.SubscriberMethod) r0     // Catch: java.lang.Throwable -> L38
            java.lang.Class<?> r1 = r0.c     // Catch: java.lang.Throwable -> L38
            if (r9 != r1) goto L23
            r5.a(r6, r0, r8)     // Catch: java.lang.Throwable -> L38
            goto Lf
        L23:
            if (r10 == 0) goto Lf
            int r1 = r10.length     // Catch: java.lang.Throwable -> L38
            r2 = 0
        L27:
            if (r2 >= r1) goto Lf
            r3 = r10[r2]     // Catch: java.lang.Throwable -> L38
            java.lang.Class<?> r4 = r0.c     // Catch: java.lang.Throwable -> L38
            if (r3 != r4) goto L33
            r5.a(r6, r0, r8)     // Catch: java.lang.Throwable -> L38
            goto Lf
        L33:
            int r2 = r2 + 1
            goto L27
        L36:
            monitor-exit(r5)
            return
        L38:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    private static void a(java.util.List<java.lang.Class<?>> r4, java.lang.Class<?>[] r5) {
            int r0 = r5.length
            r1 = 0
        L2:
            if (r1 >= r0) goto L19
            r2 = r5[r1]
            boolean r3 = r4.contains(r2)
            if (r3 != 0) goto L16
            r4.add(r2)
            java.lang.Class[] r2 = r2.getInterfaces()
            a(r4, r2)
        L16:
            int r1 = r1 + 1
            goto L2
        L19:
            return
    }

    public static void clearCaches() {
            com.mbridge.msdk.dycreator.bus.SubscriberMethodFinder.a()
            java.util.Map<java.lang.Class<?>, java.util.List<java.lang.Class<?>>> r0 = com.mbridge.msdk.dycreator.bus.EventBus.c
            r0.clear()
            return
    }

    public static void clearSkipMethodNameVerifications() {
            com.mbridge.msdk.dycreator.bus.SubscriberMethodFinder.clearSkipMethodNameVerifications()
            return
    }

    public static com.mbridge.msdk.dycreator.bus.EventBus getDefault() {
            com.mbridge.msdk.dycreator.bus.EventBus r0 = com.mbridge.msdk.dycreator.bus.EventBus.b
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.dycreator.bus.EventBus> r0 = com.mbridge.msdk.dycreator.bus.EventBus.class
            monitor-enter(r0)
            com.mbridge.msdk.dycreator.bus.EventBus r1 = com.mbridge.msdk.dycreator.bus.EventBus.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.dycreator.bus.EventBus r1 = new com.mbridge.msdk.dycreator.bus.EventBus     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.dycreator.bus.EventBus.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.mbridge.msdk.dycreator.bus.EventBus r0 = com.mbridge.msdk.dycreator.bus.EventBus.b
            return r0
    }

    public static void skipMethodNameVerificationFor(java.lang.Class<?> r0) {
            com.mbridge.msdk.dycreator.bus.SubscriberMethodFinder.a(r0)
            return
    }

    final void a(com.mbridge.msdk.dycreator.bus.PendingPost r3) {
            r2 = this;
            java.lang.Object r0 = r3.a
            com.mbridge.msdk.dycreator.bus.Subscription r1 = r3.b
            com.mbridge.msdk.dycreator.bus.PendingPost.a(r3)
            r2.a(r1, r0)
            return
    }

    public final void configureLogSubscriberExceptions(boolean r2) {
            r1 = this;
            boolean r0 = r1.n
            if (r0 != 0) goto L7
            r1.o = r2
            return
        L7:
            com.mbridge.msdk.dycreator.bus.EventBusException r2 = new com.mbridge.msdk.dycreator.bus.EventBusException
            java.lang.String r0 = "This method must be called before any registration"
            r2.<init>(r0)
            throw r2
    }

    public final java.lang.Object getStickyEvent(java.lang.Class<?> r3) {
            r2 = this;
            java.util.Map<java.lang.Class<?>, java.lang.Object> r0 = r2.f
            monitor-enter(r0)
            java.util.Map<java.lang.Class<?>, java.lang.Object> r1 = r2.f     // Catch: java.lang.Throwable -> Lb
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            return r3
        Lb:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            throw r3
    }

    public final void post(java.lang.Object r13) {
            r12 = this;
            java.lang.ThreadLocal<java.util.List<java.lang.Object>> r0 = r12.g
            java.lang.Object r0 = r0.get()
            java.util.List r0 = (java.util.List) r0
            r0.add(r13)
            java.lang.ThreadLocal<com.mbridge.msdk.dycreator.bus.EventBus$BooleanWrapper> r13 = r12.h
            java.lang.Object r13 = r13.get()
            com.mbridge.msdk.dycreator.bus.EventBus$BooleanWrapper r13 = (com.mbridge.msdk.dycreator.bus.EventBus.BooleanWrapper) r13
            boolean r1 = r13.a
            if (r1 != 0) goto La6
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            android.os.Looper r2 = android.os.Looper.myLooper()
            r3 = 1
            r4 = 0
            if (r1 != r2) goto L25
            r1 = r3
            goto L26
        L25:
            r1 = r4
        L26:
            r13.a = r3
        L28:
            boolean r2 = r0.isEmpty()     // Catch: java.lang.Throwable -> La2
            if (r2 != 0) goto L9f
            java.lang.Object r2 = r0.remove(r4)     // Catch: java.lang.Throwable -> La2
            if (r2 == 0) goto L28
            java.lang.Class r5 = r2.getClass()     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La2
            java.util.List r6 = r12.a(r5)     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La2
            int r7 = r6.size()     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La2
            r8 = r4
            r9 = r8
        L42:
            if (r8 >= r7) goto L71
            java.lang.Object r10 = r6.get(r8)     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La2
            java.lang.Class r10 = (java.lang.Class) r10     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La2
            monitor-enter(r12)     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La2
            java.util.Map<java.lang.Class<?>, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.dycreator.bus.Subscription>> r11 = r12.d     // Catch: java.lang.Throwable -> L6e
            java.lang.Object r10 = r11.get(r10)     // Catch: java.lang.Throwable -> L6e
            java.util.concurrent.CopyOnWriteArrayList r10 = (java.util.concurrent.CopyOnWriteArrayList) r10     // Catch: java.lang.Throwable -> L6e
            monitor-exit(r12)     // Catch: java.lang.Throwable -> L6e
            if (r10 == 0) goto L6b
            java.util.Iterator r9 = r10.iterator()     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La2
        L5a:
            boolean r10 = r9.hasNext()     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La2
            if (r10 == 0) goto L6a
            java.lang.Object r10 = r9.next()     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La2
            com.mbridge.msdk.dycreator.bus.Subscription r10 = (com.mbridge.msdk.dycreator.bus.Subscription) r10     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La2
            r12.a(r10, r2, r1)     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La2
            goto L5a
        L6a:
            r9 = r3
        L6b:
            int r8 = r8 + 1
            goto L42
        L6e:
            r2 = move-exception
            monitor-exit(r12)     // Catch: java.lang.Throwable -> L6e
            throw r2     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La2
        L71:
            if (r9 != 0) goto L28
            java.lang.String r6 = com.mbridge.msdk.dycreator.bus.EventBus.TAG     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La2
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La2
            r7.<init>()     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La2
            java.lang.String r8 = "No subscripers registered for event "
            r7.append(r8)     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La2
            r7.append(r5)     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La2
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La2
            android.util.Log.d(r6, r7)     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La2
            java.lang.Class<com.mbridge.msdk.dycreator.bus.NoSubscriberEvent> r6 = com.mbridge.msdk.dycreator.bus.NoSubscriberEvent.class
            if (r5 == r6) goto L28
            java.lang.Class<com.mbridge.msdk.dycreator.bus.SubscriberExceptionEvent> r6 = com.mbridge.msdk.dycreator.bus.SubscriberExceptionEvent.class
            if (r5 == r6) goto L28
            com.mbridge.msdk.dycreator.bus.NoSubscriberEvent r5 = new com.mbridge.msdk.dycreator.bus.NoSubscriberEvent     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La2
            r5.<init>(r12, r2)     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La2
            r12.post(r5)     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La2
            goto L28
        L9a:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> La2
            goto L28
        L9f:
            r13.a = r4
            goto La6
        La2:
            r0 = move-exception
            r13.a = r4
            throw r0
        La6:
            return
    }

    public final void postSticky(java.lang.Object r4) {
            r3 = this;
            r3.post(r4)
            java.util.Map<java.lang.Class<?>, java.lang.Object> r0 = r3.f
            monitor-enter(r0)
            java.util.Map<java.lang.Class<?>, java.lang.Object> r1 = r3.f     // Catch: java.lang.Throwable -> L11
            java.lang.Class r2 = r4.getClass()     // Catch: java.lang.Throwable -> L11
            r1.put(r2, r4)     // Catch: java.lang.Throwable -> L11
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
            return
        L11:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
            throw r4
    }

    public final void register(java.lang.Object r3) {
            r2 = this;
            java.lang.String r0 = r2.i
            r1 = 0
            r2.a(r3, r0, r1)
            return
    }

    public final void register(java.lang.Object r7, java.lang.Class<?> r8, java.lang.Class<?>... r9) {
            r6 = this;
            java.lang.String r2 = r6.i
            r3 = 0
            r0 = r6
            r1 = r7
            r4 = r8
            r5 = r9
            r0.a(r1, r2, r3, r4, r5)
            return
    }

    public final void register(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            r0 = 0
            r1.a(r2, r3, r0)
            return
    }

    public final synchronized void register(java.lang.Object r7, java.lang.String r8, java.lang.Class<?> r9, java.lang.Class<?>... r10) {
            r6 = this;
            monitor-enter(r6)
            r3 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r4 = r9
            r5 = r10
            r0.a(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r6)
            return
        Lc:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    public final void register(java.lang.String r2, java.lang.Object r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.p
            if (r0 == 0) goto L13
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L13
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.p
            java.lang.Object r0 = r0.get(r2)
            r1.unregister(r0)
        L13:
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.p
            r0.put(r2, r3)
            java.lang.String r2 = r1.i
            r0 = 0
            r1.a(r3, r2, r0)
            return
    }

    public final void registerSticky(java.lang.Object r3) {
            r2 = this;
            java.lang.String r0 = r2.i
            r1 = 1
            r2.a(r3, r0, r1)
            return
    }

    public final void registerSticky(java.lang.Object r7, java.lang.Class<?> r8, java.lang.Class<?>... r9) {
            r6 = this;
            java.lang.String r2 = r6.i
            r3 = 1
            r0 = r6
            r1 = r7
            r4 = r8
            r5 = r9
            r0.a(r1, r2, r3, r4, r5)
            return
    }

    public final void registerSticky(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            r0 = 1
            r1.a(r2, r3, r0)
            return
    }

    public final synchronized void registerSticky(java.lang.Object r7, java.lang.String r8, java.lang.Class<?> r9, java.lang.Class<?>... r10) {
            r6 = this;
            monitor-enter(r6)
            r3 = 1
            r0 = r6
            r1 = r7
            r2 = r8
            r4 = r9
            r5 = r10
            r0.a(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r6)
            return
        Lc:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    public final void release() {
            r1 = this;
            com.mbridge.msdk.dycreator.bus.EventBus r0 = com.mbridge.msdk.dycreator.bus.EventBus.b
            if (r0 == 0) goto L54
            r0 = 0
            com.mbridge.msdk.dycreator.bus.EventBus.b = r0
            com.mbridge.msdk.dycreator.bus.EventBus.a = r0
            java.util.Map<java.lang.Class<?>, java.util.List<java.lang.Class<?>>> r0 = com.mbridge.msdk.dycreator.bus.EventBus.c
            if (r0 == 0) goto L18
            int r0 = r0.size()
            if (r0 <= 0) goto L18
            java.util.Map<java.lang.Class<?>, java.util.List<java.lang.Class<?>>> r0 = com.mbridge.msdk.dycreator.bus.EventBus.c
            r0.clear()
        L18:
            java.util.Map<java.lang.Class<?>, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.dycreator.bus.Subscription>> r0 = r1.d
            if (r0 == 0) goto L27
            int r0 = r0.size()
            if (r0 <= 0) goto L27
            java.util.Map<java.lang.Class<?>, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.dycreator.bus.Subscription>> r0 = r1.d
            r0.clear()
        L27:
            java.util.Map<java.lang.Object, java.util.List<java.lang.Class<?>>> r0 = r1.e
            if (r0 == 0) goto L36
            int r0 = r0.size()
            if (r0 <= 0) goto L36
            java.util.Map<java.lang.Object, java.util.List<java.lang.Class<?>>> r0 = r1.e
            r0.clear()
        L36:
            java.util.Map<java.lang.Class<?>, java.lang.Object> r0 = r1.f
            if (r0 == 0) goto L45
            int r0 = r0.size()
            if (r0 <= 0) goto L45
            java.util.Map<java.lang.Class<?>, java.lang.Object> r0 = r1.f
            r0.clear()
        L45:
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.p
            if (r0 == 0) goto L54
            int r0 = r0.size()
            if (r0 <= 0) goto L54
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.p
            r0.clear()
        L54:
            return
    }

    public final java.lang.Object removeStickyEvent(java.lang.Class<?> r3) {
            r2 = this;
            java.util.Map<java.lang.Class<?>, java.lang.Object> r0 = r2.f
            monitor-enter(r0)
            java.util.Map<java.lang.Class<?>, java.lang.Object> r1 = r2.f     // Catch: java.lang.Throwable -> Lb
            java.lang.Object r3 = r1.remove(r3)     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            return r3
        Lb:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            throw r3
    }

    public final boolean removeStickyEvent(java.lang.Object r4) {
            r3 = this;
            java.util.Map<java.lang.Class<?>, java.lang.Object> r0 = r3.f
            monitor-enter(r0)
            java.lang.Class r1 = r4.getClass()     // Catch: java.lang.Throwable -> L1e
            java.util.Map<java.lang.Class<?>, java.lang.Object> r2 = r3.f     // Catch: java.lang.Throwable -> L1e
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Throwable -> L1e
            boolean r4 = r4.equals(r2)     // Catch: java.lang.Throwable -> L1e
            if (r4 == 0) goto L1b
            java.util.Map<java.lang.Class<?>, java.lang.Object> r4 = r3.f     // Catch: java.lang.Throwable -> L1e
            r4.remove(r1)     // Catch: java.lang.Throwable -> L1e
            r4 = 1
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
            return r4
        L1b:
            r4 = 0
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
            return r4
        L1e:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
            throw r4
    }

    public final synchronized void unregister(java.lang.Object r4) {
            r3 = this;
            monitor-enter(r3)
            java.util.Map<java.lang.Object, java.util.List<java.lang.Class<?>>> r0 = r3.e     // Catch: java.lang.Throwable -> L41
            java.lang.Object r0 = r0.get(r4)     // Catch: java.lang.Throwable -> L41
            java.util.List r0 = (java.util.List) r0     // Catch: java.lang.Throwable -> L41
            if (r0 == 0) goto L25
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L41
        Lf:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L41
            if (r1 == 0) goto L1f
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L41
            java.lang.Class r1 = (java.lang.Class) r1     // Catch: java.lang.Throwable -> L41
            r3.a(r4, r1)     // Catch: java.lang.Throwable -> L41
            goto Lf
        L1f:
            java.util.Map<java.lang.Object, java.util.List<java.lang.Class<?>>> r0 = r3.e     // Catch: java.lang.Throwable -> L41
            r0.remove(r4)     // Catch: java.lang.Throwable -> L41
            goto L3f
        L25:
            java.lang.String r0 = com.mbridge.msdk.dycreator.bus.EventBus.TAG     // Catch: java.lang.Throwable -> L41
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L41
            r1.<init>()     // Catch: java.lang.Throwable -> L41
            java.lang.String r2 = "Subscriber to unregister was not registered before: "
            r1.append(r2)     // Catch: java.lang.Throwable -> L41
            java.lang.Class r4 = r4.getClass()     // Catch: java.lang.Throwable -> L41
            r1.append(r4)     // Catch: java.lang.Throwable -> L41
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L41
            android.util.Log.w(r0, r4)     // Catch: java.lang.Throwable -> L41
        L3f:
            monitor-exit(r3)
            return
        L41:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public final synchronized void unregister(java.lang.Object r5, java.lang.Class<?>... r6) {
            r4 = this;
            monitor-enter(r4)
            int r0 = r6.length     // Catch: java.lang.Throwable -> L4d
            if (r0 == 0) goto L45
            java.util.Map<java.lang.Object, java.util.List<java.lang.Class<?>>> r0 = r4.e     // Catch: java.lang.Throwable -> L4d
            java.lang.Object r0 = r0.get(r5)     // Catch: java.lang.Throwable -> L4d
            java.util.List r0 = (java.util.List) r0     // Catch: java.lang.Throwable -> L4d
            if (r0 == 0) goto L29
            int r1 = r6.length     // Catch: java.lang.Throwable -> L4d
            r2 = 0
        L10:
            if (r2 >= r1) goto L1d
            r3 = r6[r2]     // Catch: java.lang.Throwable -> L4d
            r4.a(r5, r3)     // Catch: java.lang.Throwable -> L4d
            r0.remove(r3)     // Catch: java.lang.Throwable -> L4d
            int r2 = r2 + 1
            goto L10
        L1d:
            boolean r6 = r0.isEmpty()     // Catch: java.lang.Throwable -> L4d
            if (r6 == 0) goto L43
            java.util.Map<java.lang.Object, java.util.List<java.lang.Class<?>>> r6 = r4.e     // Catch: java.lang.Throwable -> L4d
            r6.remove(r5)     // Catch: java.lang.Throwable -> L4d
            goto L43
        L29:
            java.lang.String r6 = com.mbridge.msdk.dycreator.bus.EventBus.TAG     // Catch: java.lang.Throwable -> L4d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4d
            r0.<init>()     // Catch: java.lang.Throwable -> L4d
            java.lang.String r1 = "Subscriber to unregister was not registered before: "
            r0.append(r1)     // Catch: java.lang.Throwable -> L4d
            java.lang.Class r5 = r5.getClass()     // Catch: java.lang.Throwable -> L4d
            r0.append(r5)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Throwable -> L4d
            android.util.Log.w(r6, r5)     // Catch: java.lang.Throwable -> L4d
        L43:
            monitor-exit(r4)
            return
        L45:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L4d
            java.lang.String r6 = "Provide at least one event class"
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L4d
            throw r5     // Catch: java.lang.Throwable -> L4d
        L4d:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public final synchronized void unregister(java.lang.String r4) {
            r3 = this;
            monitor-enter(r3)
            java.util.Map<java.lang.String, java.lang.Object> r0 = r3.p     // Catch: java.lang.Throwable -> L53
            if (r0 == 0) goto L51
            java.util.Map<java.lang.String, java.lang.Object> r0 = r3.p     // Catch: java.lang.Throwable -> L53
            boolean r0 = r0.containsKey(r4)     // Catch: java.lang.Throwable -> L53
            if (r0 == 0) goto L51
            java.util.Map<java.lang.String, java.lang.Object> r0 = r3.p     // Catch: java.lang.Throwable -> L53
            java.lang.Object r4 = r0.remove(r4)     // Catch: java.lang.Throwable -> L53
            java.util.Map<java.lang.Object, java.util.List<java.lang.Class<?>>> r0 = r3.e     // Catch: java.lang.Throwable -> L53
            java.lang.Object r0 = r0.get(r4)     // Catch: java.lang.Throwable -> L53
            java.util.List r0 = (java.util.List) r0     // Catch: java.lang.Throwable -> L53
            if (r0 == 0) goto L37
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L53
        L21:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L53
            if (r1 == 0) goto L31
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L53
            java.lang.Class r1 = (java.lang.Class) r1     // Catch: java.lang.Throwable -> L53
            r3.a(r4, r1)     // Catch: java.lang.Throwable -> L53
            goto L21
        L31:
            java.util.Map<java.lang.Object, java.util.List<java.lang.Class<?>>> r0 = r3.e     // Catch: java.lang.Throwable -> L53
            r0.remove(r4)     // Catch: java.lang.Throwable -> L53
            goto L51
        L37:
            java.lang.String r0 = com.mbridge.msdk.dycreator.bus.EventBus.TAG     // Catch: java.lang.Throwable -> L53
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L53
            r1.<init>()     // Catch: java.lang.Throwable -> L53
            java.lang.String r2 = "Subscriber to unregister was not registered before: "
            r1.append(r2)     // Catch: java.lang.Throwable -> L53
            java.lang.Class r4 = r4.getClass()     // Catch: java.lang.Throwable -> L53
            r1.append(r4)     // Catch: java.lang.Throwable -> L53
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L53
            android.util.Log.w(r0, r4)     // Catch: java.lang.Throwable -> L53
        L51:
            monitor-exit(r3)
            return
        L53:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }
}
