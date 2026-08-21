package com.mbridge.msdk.dycreator.bus;

final class SubscriberMethod {
    final java.lang.reflect.Method a;
    final com.mbridge.msdk.dycreator.bus.ThreadMode b;
    final java.lang.Class<?> c;
    java.lang.String d;

    SubscriberMethod(java.lang.reflect.Method r1, com.mbridge.msdk.dycreator.bus.ThreadMode r2, java.lang.Class<?> r3) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            return
    }

    private synchronized void a() {
            r2 = this;
            monitor-enter(r2)
            java.lang.String r0 = r2.d     // Catch: java.lang.Throwable -> L3d
            if (r0 != 0) goto L3b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3d
            r1 = 64
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L3d
            java.lang.reflect.Method r1 = r2.a     // Catch: java.lang.Throwable -> L3d
            java.lang.Class r1 = r1.getDeclaringClass()     // Catch: java.lang.Throwable -> L3d
            java.lang.String r1 = r1.getName()     // Catch: java.lang.Throwable -> L3d
            r0.append(r1)     // Catch: java.lang.Throwable -> L3d
            r1 = 35
            r0.append(r1)     // Catch: java.lang.Throwable -> L3d
            java.lang.reflect.Method r1 = r2.a     // Catch: java.lang.Throwable -> L3d
            java.lang.String r1 = r1.getName()     // Catch: java.lang.Throwable -> L3d
            r0.append(r1)     // Catch: java.lang.Throwable -> L3d
            r1 = 40
            r0.append(r1)     // Catch: java.lang.Throwable -> L3d
            java.lang.Class<?> r1 = r2.c     // Catch: java.lang.Throwable -> L3d
            java.lang.String r1 = r1.getName()     // Catch: java.lang.Throwable -> L3d
            r0.append(r1)     // Catch: java.lang.Throwable -> L3d
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L3d
            r2.d = r0     // Catch: java.lang.Throwable -> L3d
        L3b:
            monitor-exit(r2)
            return
        L3d:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public final boolean equals(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.mbridge.msdk.dycreator.bus.SubscriberMethod
            if (r0 == 0) goto L12
            r1.a()
            java.lang.String r0 = r1.d
            com.mbridge.msdk.dycreator.bus.SubscriberMethod r2 = (com.mbridge.msdk.dycreator.bus.SubscriberMethod) r2
            java.lang.String r2 = r2.d
            boolean r2 = r0.equals(r2)
            return r2
        L12:
            r2 = 0
            return r2
    }

    public final int hashCode() {
            r1 = this;
            java.lang.reflect.Method r0 = r1.a
            int r0 = r0.hashCode()
            return r0
    }
}
