package com.tkay.expressad.shake;

public class a {
    private static volatile com.tkay.expressad.shake.a c;
    android.hardware.Sensor a;
    private android.hardware.SensorManager b;

    private a() {
            r2 = this;
            r2.<init>()
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            if (r0 == 0) goto L29
            android.hardware.SensorManager r1 = r2.b     // Catch: java.lang.Throwable -> L29
            if (r1 != 0) goto L1b
            java.lang.String r1 = "sensor"
            java.lang.Object r0 = r0.getSystemService(r1)     // Catch: java.lang.Throwable -> L29
            android.hardware.SensorManager r0 = (android.hardware.SensorManager) r0     // Catch: java.lang.Throwable -> L29
            r2.b = r0     // Catch: java.lang.Throwable -> L29
        L1b:
            android.hardware.Sensor r0 = r2.a     // Catch: java.lang.Throwable -> L29
            if (r0 != 0) goto L29
            android.hardware.SensorManager r0 = r2.b     // Catch: java.lang.Throwable -> L29
            r1 = 1
            android.hardware.Sensor r0 = r0.getDefaultSensor(r1)     // Catch: java.lang.Throwable -> L29
            r2.a = r0     // Catch: java.lang.Throwable -> L29
        L29:
            return
    }

    public static com.tkay.expressad.shake.a a() {
            com.tkay.expressad.shake.a r0 = com.tkay.expressad.shake.a.c
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.expressad.shake.a> r0 = com.tkay.expressad.shake.a.class
            monitor-enter(r0)
            com.tkay.expressad.shake.a r1 = com.tkay.expressad.shake.a.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.expressad.shake.a r1 = new com.tkay.expressad.shake.a     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.expressad.shake.a.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.expressad.shake.a r0 = com.tkay.expressad.shake.a.c
            return r0
    }

    public final void a(android.hardware.SensorEventListener r4) {
            r3 = this;
            android.hardware.SensorManager r0 = r3.b     // Catch: java.lang.Throwable -> L8
            android.hardware.Sensor r1 = r3.a     // Catch: java.lang.Throwable -> L8
            r2 = 2
            r0.registerListener(r4, r1, r2)     // Catch: java.lang.Throwable -> L8
        L8:
            return
    }

    public final void b(android.hardware.SensorEventListener r2) {
            r1 = this;
            android.hardware.SensorManager r0 = r1.b
            if (r0 == 0) goto L7
            r0.unregisterListener(r2)     // Catch: java.lang.Throwable -> L7
        L7:
            return
    }

    public final boolean b() {
            r1 = this;
            android.hardware.Sensor r0 = r1.a
            if (r0 == 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }
}
