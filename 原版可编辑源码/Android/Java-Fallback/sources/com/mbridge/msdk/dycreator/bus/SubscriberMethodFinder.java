package com.mbridge.msdk.dycreator.bus;

class SubscriberMethodFinder {
    private static final java.util.Map<java.lang.String, java.util.List<com.mbridge.msdk.dycreator.bus.SubscriberMethod>> a = null;
    private static final java.util.Map<java.lang.Class<?>, java.lang.Class<?>> b = null;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.dycreator.bus.SubscriberMethodFinder.a = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.mbridge.msdk.dycreator.bus.SubscriberMethodFinder.b = r0
            return
    }

    SubscriberMethodFinder() {
            r0 = this;
            r0.<init>()
            return
    }

    static void a() {
            java.util.Map<java.lang.String, java.util.List<com.mbridge.msdk.dycreator.bus.SubscriberMethod>> r0 = com.mbridge.msdk.dycreator.bus.SubscriberMethodFinder.a
            r0.clear()
            return
    }

    static void a(java.lang.Class<?> r1) {
            java.util.Map<java.lang.String, java.util.List<com.mbridge.msdk.dycreator.bus.SubscriberMethod>> r0 = com.mbridge.msdk.dycreator.bus.SubscriberMethodFinder.a
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto Le
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.mbridge.msdk.dycreator.bus.SubscriberMethodFinder.b
            r0.put(r1, r1)
            return
        Le:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r0 = "This method must be called before registering anything"
            r1.<init>(r0)
            throw r1
    }

    public static void clearSkipMethodNameVerifications() {
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.mbridge.msdk.dycreator.bus.SubscriberMethodFinder.b
            r0.clear()
            return
    }

    final java.util.List<com.mbridge.msdk.dycreator.bus.SubscriberMethod> a(java.lang.Class<?> r16, java.lang.String r17) {
            r15 = this;
            r0 = r17
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r16.getName()
            r1.append(r2)
            r2 = 46
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.util.Map<java.lang.String, java.util.List<com.mbridge.msdk.dycreator.bus.SubscriberMethod>> r2 = com.mbridge.msdk.dycreator.bus.SubscriberMethodFinder.a
            monitor-enter(r2)
            java.util.Map<java.lang.String, java.util.List<com.mbridge.msdk.dycreator.bus.SubscriberMethod>> r3 = com.mbridge.msdk.dycreator.bus.SubscriberMethodFinder.a     // Catch: java.lang.Throwable -> L12c
            java.lang.Object r3 = r3.get(r1)     // Catch: java.lang.Throwable -> L12c
            java.util.List r3 = (java.util.List) r3     // Catch: java.lang.Throwable -> L12c
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L12c
            if (r3 == 0) goto L29
            return r3
        L29:
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.util.HashSet r3 = new java.util.HashSet
            r3.<init>()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r5 = r16
        L3a:
            if (r5 == 0) goto Lf8
            java.lang.String r6 = r5.getName()
            java.lang.String r7 = "java."
            boolean r7 = r6.startsWith(r7)
            if (r7 != 0) goto Lf8
            java.lang.String r7 = "javax."
            boolean r7 = r6.startsWith(r7)
            if (r7 != 0) goto Lf8
            java.lang.String r7 = "android."
            boolean r6 = r6.startsWith(r7)
            if (r6 == 0) goto L5a
            goto Lf8
        L5a:
            java.lang.reflect.Method[] r6 = r5.getDeclaredMethods()
            int r7 = r6.length
            r8 = 0
            r9 = r8
        L61:
            if (r9 >= r7) goto Lf2
            r10 = r6[r9]
            java.lang.String r11 = r10.getName()
            boolean r12 = r11.startsWith(r0)
            if (r12 == 0) goto Lee
            java.lang.Class[] r12 = r10.getParameterTypes()
            int r13 = r12.length
            r14 = 1
            if (r13 != r14) goto Lee
            int r13 = r17.length()
            java.lang.String r13 = r11.substring(r13)
            int r14 = r13.length()
            if (r14 != 0) goto L88
            com.mbridge.msdk.dycreator.bus.ThreadMode r13 = com.mbridge.msdk.dycreator.bus.ThreadMode.PostThread
            goto Lc8
        L88:
            java.lang.String r14 = "MainThread"
            boolean r14 = r13.equals(r14)
            if (r14 == 0) goto L93
            com.mbridge.msdk.dycreator.bus.ThreadMode r13 = com.mbridge.msdk.dycreator.bus.ThreadMode.MainThread
            goto Lc8
        L93:
            java.lang.String r14 = "BackgroundThread"
            boolean r14 = r13.equals(r14)
            if (r14 == 0) goto L9e
            com.mbridge.msdk.dycreator.bus.ThreadMode r13 = com.mbridge.msdk.dycreator.bus.ThreadMode.BackgroundThread
            goto Lc8
        L9e:
            java.lang.String r14 = "Async"
            boolean r13 = r13.equals(r14)
            if (r13 != 0) goto Lc6
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r11 = com.mbridge.msdk.dycreator.bus.SubscriberMethodFinder.b
            boolean r11 = r11.containsKey(r5)
            if (r11 == 0) goto Laf
            goto Lee
        Laf:
            com.mbridge.msdk.dycreator.bus.EventBusException r0 = new com.mbridge.msdk.dycreator.bus.EventBusException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Illegal onEvent method, check for typos: "
            r1.append(r2)
            r1.append(r10)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        Lc6:
            com.mbridge.msdk.dycreator.bus.ThreadMode r13 = com.mbridge.msdk.dycreator.bus.ThreadMode.Async
        Lc8:
            r12 = r12[r8]
            r4.setLength(r8)
            r4.append(r11)
            r11 = 62
            r4.append(r11)
            java.lang.String r11 = r12.getName()
            r4.append(r11)
            java.lang.String r11 = r4.toString()
            boolean r11 = r3.add(r11)
            if (r11 == 0) goto Lee
            com.mbridge.msdk.dycreator.bus.SubscriberMethod r11 = new com.mbridge.msdk.dycreator.bus.SubscriberMethod
            r11.<init>(r10, r13, r12)
            r2.add(r11)
        Lee:
            int r9 = r9 + 1
            goto L61
        Lf2:
            java.lang.Class r5 = r5.getSuperclass()
            goto L3a
        Lf8:
            boolean r3 = r2.isEmpty()
            if (r3 != 0) goto L10b
            java.util.Map<java.lang.String, java.util.List<com.mbridge.msdk.dycreator.bus.SubscriberMethod>> r3 = com.mbridge.msdk.dycreator.bus.SubscriberMethodFinder.a
            monitor-enter(r3)
            java.util.Map<java.lang.String, java.util.List<com.mbridge.msdk.dycreator.bus.SubscriberMethod>> r0 = com.mbridge.msdk.dycreator.bus.SubscriberMethodFinder.a     // Catch: java.lang.Throwable -> L108
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L108
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L108
            return r2
        L108:
            r0 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L108
            throw r0
        L10b:
            com.mbridge.msdk.dycreator.bus.EventBusException r1 = new com.mbridge.msdk.dycreator.bus.EventBusException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Subscriber "
            r2.append(r3)
            r3 = r16
            r2.append(r3)
            java.lang.String r3 = " has no methods called "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
        L12c:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L12c
            throw r0
    }
}
