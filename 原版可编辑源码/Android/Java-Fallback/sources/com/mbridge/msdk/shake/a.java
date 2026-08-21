package com.mbridge.msdk.shake;

public final class a {
    private android.hardware.SensorManager a;

    static class 1 {
    }

    private static class a {
        static com.mbridge.msdk.shake.a a;

        static {
                com.mbridge.msdk.shake.a r0 = new com.mbridge.msdk.shake.a
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.shake.a.a.a = r0
                return
        }
    }

    private a() {
            r0 = this;
            r0.<init>()
            return
    }

    a(com.mbridge.msdk.shake.a.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.shake.a a() {
            com.mbridge.msdk.shake.a r0 = com.mbridge.msdk.shake.a.a.a
            return r0
    }

    public final void a(android.hardware.SensorEventListener r6) {
            r5 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            if (r0 == 0) goto Lbb
            android.hardware.SensorManager r1 = r5.a     // Catch: java.lang.Exception -> L27
            if (r1 != 0) goto L18
            java.lang.String r1 = "sensor"
            java.lang.Object r1 = r0.getSystemService(r1)     // Catch: java.lang.Exception -> L27
            android.hardware.SensorManager r1 = (android.hardware.SensorManager) r1     // Catch: java.lang.Exception -> L27
            r5.a = r1     // Catch: java.lang.Exception -> L27
        L18:
            android.hardware.SensorManager r1 = r5.a     // Catch: java.lang.Exception -> L27
            r2 = 1
            android.hardware.Sensor r1 = r1.getDefaultSensor(r2)     // Catch: java.lang.Exception -> L27
            android.hardware.SensorManager r2 = r5.a     // Catch: java.lang.Exception -> L27
            r3 = 2
            r2.registerListener(r6, r1, r3)     // Catch: java.lang.Exception -> L27
            goto Lbb
        L27:
            r6 = move-exception
            r6.printStackTrace()
            java.lang.String r6 = r6.getMessage()
            if (r0 == 0) goto Lbb
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> Lb7
            if (r1 != 0) goto Lbb
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> Lb7
            r1.<init>()     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r2 = "key=2000106&"
            r1.append(r2)     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Throwable -> Lb7
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r3 = "&"
            if (r2 != 0) goto L64
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb7
            r2.<init>()     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r4 = "b="
            r2.append(r4)     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r4 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Throwable -> Lb7
            r2.append(r4)     // Catch: java.lang.Throwable -> Lb7
            r2.append(r3)     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lb7
            r1.append(r2)     // Catch: java.lang.Throwable -> Lb7
        L64:
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Throwable -> Lb7
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lb7
            if (r2 != 0) goto L85
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb7
            r2.<init>()     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r4 = "c="
            r2.append(r4)     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r4 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Throwable -> Lb7
            r2.append(r4)     // Catch: java.lang.Throwable -> Lb7
            r2.append(r3)     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lb7
            r1.append(r2)     // Catch: java.lang.Throwable -> Lb7
        L85:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb7
            r2.<init>()     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r3 = "reason="
            r2.append(r3)     // Catch: java.lang.Throwable -> Lb7
            r2.append(r6)     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Throwable -> Lb7
            r1.append(r6)     // Catch: java.lang.Throwable -> Lb7
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> Lb7
            boolean r6 = r6.c()     // Catch: java.lang.Throwable -> Lb7
            if (r6 == 0) goto Laf
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> Lb7
            r6.a(r0)     // Catch: java.lang.Throwable -> Lb7
            goto Lbb
        Laf:
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Throwable -> Lb7
            com.mbridge.msdk.foundation.same.report.e.b(r0, r6)     // Catch: java.lang.Throwable -> Lb7
            goto Lbb
        Lb7:
            r6 = move-exception
            r6.printStackTrace()
        Lbb:
            return
    }

    public final void b(android.hardware.SensorEventListener r2) {
            r1 = this;
            android.hardware.SensorManager r0 = r1.a
            if (r0 == 0) goto Lc
            r0.unregisterListener(r2)     // Catch: java.lang.Exception -> L8
            goto Lc
        L8:
            r2 = move-exception
            r2.printStackTrace()
        Lc:
            return
    }
}
