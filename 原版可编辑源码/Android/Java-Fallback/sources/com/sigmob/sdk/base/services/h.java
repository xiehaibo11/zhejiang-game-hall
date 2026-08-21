package com.sigmob.sdk.base.services;

public class h implements android.hardware.SensorEventListener {
    private static android.os.Handler b = null;
    private static int c = 500;
    java.text.DecimalFormat a;
    private com.sigmob.sdk.base.services.g d;
    private java.util.List<com.sigmob.sdk.base.services.g> e;
    private android.hardware.SensorManager f;
    private int g;
    private int h;


    private static class a {
        private static final com.sigmob.sdk.base.services.h a = null;

        static {
                com.sigmob.sdk.base.services.h r0 = new com.sigmob.sdk.base.services.h
                r0.<init>()
                com.sigmob.sdk.base.services.h.a.a = r0
                return
        }

        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.sigmob.sdk.base.services.h a() {
                com.sigmob.sdk.base.services.h r0 = com.sigmob.sdk.base.services.h.a.a
                return r0
        }
    }

    static {
            return
    }

    public h() {
            r2 = this;
            r2.<init>()
            java.text.DecimalFormat r0 = new java.text.DecimalFormat
            java.lang.String r1 = "#######.######"
            r0.<init>(r1)
            r2.a = r0
            com.sigmob.sdk.base.services.g r0 = new com.sigmob.sdk.base.services.g
            r0.<init>()
            r2.d = r0
            r0 = 300(0x12c, float:4.2E-43)
            r2.g = r0
            r0 = 50
            r2.h = r0
            return
    }

    public static com.sigmob.sdk.base.services.h a() {
            com.sigmob.sdk.base.services.h r0 = com.sigmob.sdk.base.services.h.a.a()
            return r0
    }

    private java.lang.String a(java.util.List<com.sigmob.sdk.base.services.g> r28) {
            r27 = this;
            r0 = r27
            r1 = r28
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            if (r1 == 0) goto L39e
            int r3 = r28.size()
            if (r3 != 0) goto L13
            goto L39e
        L13:
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            java.util.ArrayList r6 = new java.util.ArrayList
            r6.<init>()
            java.util.ArrayList r7 = new java.util.ArrayList
            r7.<init>()
            java.util.ArrayList r8 = new java.util.ArrayList
            r8.<init>()
            java.util.ArrayList r9 = new java.util.ArrayList
            r9.<init>()
            java.util.ArrayList r10 = new java.util.ArrayList
            r10.<init>()
            java.util.ArrayList r11 = new java.util.ArrayList
            r11.<init>()
            java.util.ArrayList r12 = new java.util.ArrayList
            r12.<init>()
            java.util.ArrayList r13 = new java.util.ArrayList
            r13.<init>()
            java.util.ArrayList r14 = new java.util.ArrayList
            r14.<init>()
            java.util.ArrayList r15 = new java.util.ArrayList
            r15.<init>()
            r16 = r2
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r17 = r2
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r18 = r2
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r19 = 0
            r20 = r2
            r21 = r15
            r2 = r19
        L71:
            int r15 = r28.size()
            r22 = r14
            if (r2 >= r15) goto L292
            java.lang.Object r15 = r1.get(r2)
            com.sigmob.sdk.base.services.g r15 = (com.sigmob.sdk.base.services.g) r15
            float[] r14 = r15.a
            java.lang.String r1 = "0"
            if (r14 == 0) goto Lc5
            float[] r14 = r15.a
            int r14 = r14.length
            r24 = r2
            r2 = 2
            if (r14 <= r2) goto Lc7
            java.text.DecimalFormat r2 = r0.a
            float[] r14 = r15.a
            r14 = r14[r19]
            r25 = r13
            double r13 = (double) r14
            java.lang.String r2 = r2.format(r13)
            java.lang.String r2 = r0.a(r2)
            r3.add(r2)
            java.text.DecimalFormat r2 = r0.a
            float[] r13 = r15.a
            r14 = 1
            r13 = r13[r14]
            double r13 = (double) r13
            java.lang.String r2 = r2.format(r13)
            java.lang.String r2 = r0.a(r2)
            r4.add(r2)
            java.text.DecimalFormat r2 = r0.a
            float[] r13 = r15.a
            r14 = 2
            r13 = r13[r14]
            double r13 = (double) r13
            java.lang.String r2 = r2.format(r13)
            java.lang.String r2 = r0.a(r2)
            goto Ldb
        Lc5:
            r24 = r2
        Lc7:
            r25 = r13
            java.lang.String r2 = r0.a(r1)
            r3.add(r2)
            java.lang.String r2 = r0.a(r1)
            r4.add(r2)
            java.lang.String r2 = r0.a(r1)
        Ldb:
            r5.add(r2)
            float[] r2 = r15.b
            if (r2 == 0) goto L11e
            float[] r2 = r15.b
            int r2 = r2.length
            r13 = 2
            if (r2 <= r13) goto L11e
            java.text.DecimalFormat r2 = r0.a
            float[] r13 = r15.b
            r13 = r13[r19]
            double r13 = (double) r13
            java.lang.String r2 = r2.format(r13)
            java.lang.String r2 = r0.a(r2)
            r6.add(r2)
            java.text.DecimalFormat r2 = r0.a
            float[] r13 = r15.b
            r14 = 1
            r13 = r13[r14]
            double r13 = (double) r13
            java.lang.String r2 = r2.format(r13)
            java.lang.String r2 = r0.a(r2)
            r7.add(r2)
            java.text.DecimalFormat r2 = r0.a
            float[] r13 = r15.b
            r14 = 2
            r13 = r13[r14]
            double r13 = (double) r13
            java.lang.String r2 = r2.format(r13)
            java.lang.String r2 = r0.a(r2)
            goto L130
        L11e:
            java.lang.String r2 = r0.a(r1)
            r6.add(r2)
            java.lang.String r2 = r0.a(r1)
            r7.add(r2)
            java.lang.String r2 = r0.a(r1)
        L130:
            r8.add(r2)
            float[] r2 = r15.c
            if (r2 == 0) goto L173
            float[] r2 = r15.c
            int r2 = r2.length
            r13 = 2
            if (r2 <= r13) goto L173
            java.text.DecimalFormat r2 = r0.a
            float[] r13 = r15.c
            r13 = r13[r19]
            double r13 = (double) r13
            java.lang.String r2 = r2.format(r13)
            java.lang.String r2 = r0.a(r2)
            r9.add(r2)
            java.text.DecimalFormat r2 = r0.a
            float[] r13 = r15.c
            r14 = 1
            r13 = r13[r14]
            double r13 = (double) r13
            java.lang.String r2 = r2.format(r13)
            java.lang.String r2 = r0.a(r2)
            r10.add(r2)
            java.text.DecimalFormat r2 = r0.a
            float[] r13 = r15.c
            r14 = 2
            r13 = r13[r14]
            double r13 = (double) r13
            java.lang.String r2 = r2.format(r13)
            java.lang.String r2 = r0.a(r2)
            goto L185
        L173:
            java.lang.String r2 = r0.a(r1)
            r9.add(r2)
            java.lang.String r2 = r0.a(r1)
            r10.add(r2)
            java.lang.String r2 = r0.a(r1)
        L185:
            r11.add(r2)
            float[] r2 = r15.d
            if (r2 == 0) goto L1d1
            float[] r2 = r15.d
            int r2 = r2.length
            r13 = 2
            if (r2 <= r13) goto L1d1
            java.text.DecimalFormat r2 = r0.a
            float[] r13 = r15.d
            r13 = r13[r19]
            double r13 = (double) r13
            java.lang.String r2 = r2.format(r13)
            java.lang.String r2 = r0.a(r2)
            r12.add(r2)
            java.text.DecimalFormat r2 = r0.a
            float[] r13 = r15.d
            r14 = 1
            r13 = r13[r14]
            double r13 = (double) r13
            java.lang.String r2 = r2.format(r13)
            java.lang.String r2 = r0.a(r2)
            r13 = r25
            r13.add(r2)
            java.text.DecimalFormat r2 = r0.a
            float[] r14 = r15.d
            r23 = 2
            r14 = r14[r23]
            r25 = r10
            r26 = r11
            double r10 = (double) r14
            java.lang.String r2 = r2.format(r10)
            java.lang.String r2 = r0.a(r2)
            r10 = r22
            goto L1eb
        L1d1:
            r26 = r11
            r13 = r25
            r25 = r10
            r10 = r22
            java.lang.String r2 = r0.a(r1)
            r12.add(r2)
            java.lang.String r2 = r0.a(r1)
            r13.add(r2)
            java.lang.String r2 = r0.a(r1)
        L1eb:
            r10.add(r2)
            float[] r2 = r15.f
            if (r2 == 0) goto L238
            float[] r2 = r15.f
            int r2 = r2.length
            r11 = 2
            if (r2 <= r11) goto L238
            java.text.DecimalFormat r2 = r0.a
            float[] r11 = r15.f
            r11 = r11[r19]
            r22 = r10
            double r10 = (double) r11
            java.lang.String r2 = r2.format(r10)
            java.lang.String r2 = r0.a(r2)
            r10 = r21
            r10.add(r2)
            java.text.DecimalFormat r2 = r0.a
            float[] r11 = r15.f
            r14 = 1
            r11 = r11[r14]
            r21 = r13
            double r13 = (double) r11
            java.lang.String r2 = r2.format(r13)
            java.lang.String r2 = r0.a(r2)
            r11 = r17
            r11.add(r2)
            java.text.DecimalFormat r2 = r0.a
            float[] r13 = r15.f
            r14 = 2
            r13 = r13[r14]
            double r13 = (double) r13
            java.lang.String r2 = r2.format(r13)
            java.lang.String r2 = r0.a(r2)
            r13 = r18
            goto L254
        L238:
            r22 = r10
            r11 = r17
            r10 = r21
            r21 = r13
            r13 = r18
            java.lang.String r2 = r0.a(r1)
            r10.add(r2)
            java.lang.String r2 = r0.a(r1)
            r11.add(r2)
            java.lang.String r2 = r0.a(r1)
        L254:
            r13.add(r2)
            float[] r2 = r15.e
            if (r2 == 0) goto L272
            float[] r2 = r15.e
            int r2 = r2.length
            if (r2 <= 0) goto L272
            java.text.DecimalFormat r1 = r0.a
            float[] r2 = r15.e
            r2 = r2[r19]
            double r14 = (double) r2
            java.lang.String r1 = r1.format(r14)
            java.lang.String r1 = r0.a(r1)
            r2 = r20
            goto L278
        L272:
            r2 = r20
            java.lang.String r1 = r0.a(r1)
        L278:
            r2.add(r1)
            int r1 = r24 + 1
            r20 = r2
            r17 = r11
            r18 = r13
            r13 = r21
            r14 = r22
            r11 = r26
            r2 = r1
            r21 = r10
            r10 = r25
            r1 = r28
            goto L71
        L292:
            r25 = r10
            r26 = r11
            r11 = r17
            r2 = r20
            r10 = r21
            r21 = r13
            r13 = r18
            java.lang.String r1 = "{"
            r14 = r16
            r14.append(r1)
            r1 = 1
            java.lang.Object[] r15 = new java.lang.Object[r1]
            r1 = 3
            java.lang.Object[] r0 = new java.lang.Object[r1]
            java.lang.String r3 = r3.toString()
            r0[r19] = r3
            java.lang.String r3 = r4.toString()
            r4 = 1
            r0[r4] = r3
            java.lang.String r3 = r5.toString()
            r5 = 2
            r0[r5] = r3
            java.lang.String r3 = "\"x\":%s,\"y\":%s,\"z\":%s"
            java.lang.String r0 = java.lang.String.format(r3, r0)
            r15[r19] = r0
            java.lang.String r0 = "\"gravity\":{%s}"
            java.lang.String r0 = java.lang.String.format(r0, r15)
            r14.append(r0)
            java.lang.String r0 = ","
            r14.append(r0)
            java.lang.Object[] r5 = new java.lang.Object[r4]
            java.lang.Object[] r15 = new java.lang.Object[r1]
            java.lang.String r6 = r6.toString()
            r15[r19] = r6
            java.lang.String r6 = r7.toString()
            r15[r4] = r6
            java.lang.String r6 = r8.toString()
            r7 = 2
            r15[r7] = r6
            java.lang.String r6 = java.lang.String.format(r3, r15)
            r5[r19] = r6
            java.lang.String r6 = "\"gyroscope\":{%s}"
            java.lang.String r5 = java.lang.String.format(r6, r5)
            r14.append(r5)
            r14.append(r0)
            java.lang.Object[] r5 = new java.lang.Object[r4]
            java.lang.Object[] r6 = new java.lang.Object[r1]
            java.lang.String r7 = r9.toString()
            r6[r19] = r7
            java.lang.String r7 = r25.toString()
            r6[r4] = r7
            java.lang.String r7 = r26.toString()
            r8 = 2
            r6[r8] = r7
            java.lang.String r6 = java.lang.String.format(r3, r6)
            r5[r19] = r6
            java.lang.String r6 = "\"magnetic_field\":{%s}"
            java.lang.String r5 = java.lang.String.format(r6, r5)
            r14.append(r5)
            r14.append(r0)
            java.lang.Object[] r5 = new java.lang.Object[r4]
            java.lang.String r2 = r2.toString()
            r5[r19] = r2
            java.lang.String r2 = "\"light\":%s"
            java.lang.String r2 = java.lang.String.format(r2, r5)
            r14.append(r2)
            r14.append(r0)
            java.lang.Object[] r2 = new java.lang.Object[r4]
            java.lang.Object[] r5 = new java.lang.Object[r1]
            java.lang.String r6 = r10.toString()
            r5[r19] = r6
            java.lang.String r6 = r11.toString()
            r5[r4] = r6
            java.lang.String r6 = r13.toString()
            r7 = 2
            r5[r7] = r6
            java.lang.String r5 = java.lang.String.format(r3, r5)
            r2[r19] = r5
            java.lang.String r5 = "\"linear_acceleration\":{%s}"
            java.lang.String r2 = java.lang.String.format(r5, r2)
            r14.append(r2)
            r14.append(r0)
            java.lang.Object[] r0 = new java.lang.Object[r4]
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r2 = r12.toString()
            r1[r19] = r2
            java.lang.String r2 = r21.toString()
            r1[r4] = r2
            java.lang.String r2 = r22.toString()
            r4 = 2
            r1[r4] = r2
            java.lang.String r1 = java.lang.String.format(r3, r1)
            r0[r19] = r1
            java.lang.String r1 = "\"accelerometer\":{%s}"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            r14.append(r0)
            java.lang.String r0 = "}"
            r14.append(r0)
            java.lang.String r0 = r14.toString()
            byte[] r0 = r0.getBytes()
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r4)
            return r0
        L39e:
            r14 = r2
            java.lang.String r0 = r14.toString()
            return r0
    }

    static java.util.List a(com.sigmob.sdk.base.services.h r0) {
            java.util.List<com.sigmob.sdk.base.services.g> r0 = r0.e
            return r0
    }

    static void a(com.sigmob.sdk.base.services.h r0, java.util.List r1, java.util.List r2, java.lang.String r3, java.lang.String r4) {
            r0.a(r1, r2, r3, r4)
            return
    }

    private void a(java.util.List<com.sigmob.sdk.base.services.g> r3, java.util.List<com.sigmob.sdk.base.services.g> r4, java.lang.String r5, java.lang.String r6) {
            r2 = this;
            com.sigmob.sdk.base.mta.PointEntitySensor r0 = new com.sigmob.sdk.base.mta.PointEntitySensor
            r0.<init>()
            java.lang.String r1 = "101"
            r0.setAc_type(r1)
            r0.setCategory(r5)
            java.lang.String r3 = r2.a(r3)
            r0.setMotion_before(r3)
            java.lang.String r3 = r2.a(r4)
            r0.setMotion_after(r3)
            int r3 = r2.g
            java.lang.String r3 = java.lang.String.valueOf(r3)
            r0.setMotion_interval(r3)
            r0.setLoad_id(r6)
            r0.commit()
            return
    }

    static int b(com.sigmob.sdk.base.services.h r0) {
            int r0 = r0.g
            return r0
    }

    static android.os.Handler b() {
            android.os.Handler r0 = com.sigmob.sdk.base.services.h.b
            return r0
    }

    static int c() {
            int r0 = com.sigmob.sdk.base.services.h.c
            return r0
    }

    static int c(com.sigmob.sdk.base.services.h r0) {
            int r0 = r0.h
            return r0
    }

    static com.sigmob.sdk.base.services.g d(com.sigmob.sdk.base.services.h r0) {
            com.sigmob.sdk.base.services.g r0 = r0.d
            return r0
    }

    java.lang.String a(java.lang.String r1) {
            r0 = this;
            return r1
    }

    public void a(int r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void a(android.content.Context r4) {
            r3 = this;
            android.hardware.SensorManager r0 = r3.f     // Catch: java.lang.Throwable -> Le5
            if (r0 == 0) goto L21
            com.sigmob.sdk.base.i r4 = com.sigmob.sdk.base.i.a()     // Catch: java.lang.Throwable -> Le5
            boolean r4 = r4.v()     // Catch: java.lang.Throwable -> Le5
            if (r4 != 0) goto L20
            android.hardware.SensorManager r4 = r3.f     // Catch: java.lang.Throwable -> Le5
            r4.unregisterListener(r3)     // Catch: java.lang.Throwable -> Le5
            android.os.Handler r4 = com.sigmob.sdk.base.services.h.b     // Catch: java.lang.Throwable -> Le5
            r0 = 0
            r4.removeCallbacksAndMessages(r0)     // Catch: java.lang.Throwable -> Le5
            java.util.List<com.sigmob.sdk.base.services.g> r4 = r3.e     // Catch: java.lang.Throwable -> Le5
            r4.clear()     // Catch: java.lang.Throwable -> Le5
            r3.f = r0     // Catch: java.lang.Throwable -> Le5
        L20:
            return
        L21:
            com.sigmob.sdk.base.i r0 = com.sigmob.sdk.base.i.a()     // Catch: java.lang.Throwable -> Le5
            boolean r0 = r0.v()     // Catch: java.lang.Throwable -> Le5
            if (r0 == 0) goto Le5
            java.lang.String r0 = "start anti spam motion"
            com.czhj.sdk.logger.SigmobLog.i(r0)     // Catch: java.lang.Throwable -> Le5
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Le5
            r0.<init>()     // Catch: java.lang.Throwable -> Le5
            r3.e = r0     // Catch: java.lang.Throwable -> Le5
            com.sigmob.sdk.base.i r0 = com.sigmob.sdk.base.i.a()     // Catch: java.lang.Throwable -> Le5
            int r0 = r0.x()     // Catch: java.lang.Throwable -> Le5
            r3.h = r0     // Catch: java.lang.Throwable -> Le5
            com.sigmob.sdk.base.i r0 = com.sigmob.sdk.base.i.a()     // Catch: java.lang.Throwable -> Le5
            int r0 = r0.w()     // Catch: java.lang.Throwable -> Le5
            r3.g = r0     // Catch: java.lang.Throwable -> Le5
            com.sigmob.sdk.base.i r0 = com.sigmob.sdk.base.i.a()     // Catch: java.lang.Throwable -> Le5
            int r0 = r0.y()     // Catch: java.lang.Throwable -> Le5
            com.sigmob.sdk.base.services.h.c = r0     // Catch: java.lang.Throwable -> Le5
            java.lang.String r0 = "sensor"
            java.lang.Object r4 = r4.getSystemService(r0)     // Catch: java.lang.Throwable -> Le5
            android.hardware.SensorManager r4 = (android.hardware.SensorManager) r4     // Catch: java.lang.Throwable -> Le5
            r3.f = r4     // Catch: java.lang.Throwable -> Le5
            r0 = 5
            android.hardware.Sensor r0 = r4.getDefaultSensor(r0)     // Catch: java.lang.Throwable -> Le5
            r1 = 3
            r4.registerListener(r3, r0, r1)     // Catch: java.lang.Throwable -> Le5
            java.lang.String r4 = "光线传感器 "
            com.czhj.sdk.logger.SigmobLog.d(r4)     // Catch: java.lang.Throwable -> Le5
            android.hardware.SensorManager r4 = r3.f     // Catch: java.lang.Throwable -> Le5
            android.hardware.SensorManager r0 = r3.f     // Catch: java.lang.Throwable -> Le5
            r2 = 1
            android.hardware.Sensor r0 = r0.getDefaultSensor(r2)     // Catch: java.lang.Throwable -> Le5
            r4.registerListener(r3, r0, r1)     // Catch: java.lang.Throwable -> Le5
            java.lang.String r4 = "加速传感器 "
            com.czhj.sdk.logger.SigmobLog.d(r4)     // Catch: java.lang.Throwable -> Le5
            android.hardware.SensorManager r4 = r3.f     // Catch: java.lang.Throwable -> Le5
            android.hardware.SensorManager r0 = r3.f     // Catch: java.lang.Throwable -> Le5
            r2 = 2
            android.hardware.Sensor r0 = r0.getDefaultSensor(r2)     // Catch: java.lang.Throwable -> Le5
            r4.registerListener(r3, r0, r1)     // Catch: java.lang.Throwable -> Le5
            java.lang.String r4 = "磁场传感器 "
            com.czhj.sdk.logger.SigmobLog.d(r4)     // Catch: java.lang.Throwable -> Le5
            android.hardware.SensorManager r4 = r3.f     // Catch: java.lang.Throwable -> Le5
            android.hardware.SensorManager r0 = r3.f     // Catch: java.lang.Throwable -> Le5
            r2 = 4
            android.hardware.Sensor r0 = r0.getDefaultSensor(r2)     // Catch: java.lang.Throwable -> Le5
            r4.registerListener(r3, r0, r1)     // Catch: java.lang.Throwable -> Le5
            java.lang.String r4 = "陀螺仪 "
            com.czhj.sdk.logger.SigmobLog.d(r4)     // Catch: java.lang.Throwable -> Le5
            android.hardware.SensorManager r4 = r3.f     // Catch: java.lang.Throwable -> Le5
            android.hardware.SensorManager r0 = r3.f     // Catch: java.lang.Throwable -> Le5
            r2 = 9
            android.hardware.Sensor r0 = r0.getDefaultSensor(r2)     // Catch: java.lang.Throwable -> Le5
            r4.registerListener(r3, r0, r1)     // Catch: java.lang.Throwable -> Le5
            java.lang.String r4 = "重力传感器 "
            com.czhj.sdk.logger.SigmobLog.d(r4)     // Catch: java.lang.Throwable -> Le5
            android.hardware.SensorManager r4 = r3.f     // Catch: java.lang.Throwable -> Le5
            android.hardware.SensorManager r0 = r3.f     // Catch: java.lang.Throwable -> Le5
            r2 = 10
            android.hardware.Sensor r0 = r0.getDefaultSensor(r2)     // Catch: java.lang.Throwable -> Le5
            r4.registerListener(r3, r0, r1)     // Catch: java.lang.Throwable -> Le5
            java.lang.String r4 = "线性加速器 "
            com.czhj.sdk.logger.SigmobLog.d(r4)     // Catch: java.lang.Throwable -> Le5
            com.sigmob.sdk.base.services.h$1 r4 = new com.sigmob.sdk.base.services.h$1     // Catch: java.lang.Throwable -> Le5
            android.os.Looper r0 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> Le5
            r4.<init>(r3, r0)     // Catch: java.lang.Throwable -> Le5
            com.sigmob.sdk.base.services.h.b = r4     // Catch: java.lang.Throwable -> Le5
            android.os.Message r4 = new android.os.Message     // Catch: java.lang.Throwable -> Le5
            r4.<init>()     // Catch: java.lang.Throwable -> Le5
            com.sigmob.sdk.base.services.f r0 = com.sigmob.sdk.base.services.f.c     // Catch: java.lang.Throwable -> Le5
            int r0 = r0.a()     // Catch: java.lang.Throwable -> Le5
            r4.what = r0     // Catch: java.lang.Throwable -> Le5
            android.os.Handler r0 = com.sigmob.sdk.base.services.h.b     // Catch: java.lang.Throwable -> Le5
            if (r0 == 0) goto Le5
            android.os.Handler r0 = com.sigmob.sdk.base.services.h.b     // Catch: java.lang.Throwable -> Le5
            r0.sendMessage(r4)     // Catch: java.lang.Throwable -> Le5
        Le5:
            return
    }

    public void a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            com.sigmob.sdk.base.i r0 = com.sigmob.sdk.base.i.a()
            boolean r0 = r0.v()
            if (r0 == 0) goto L3a
            com.sigmob.sdk.base.i r0 = com.sigmob.sdk.base.i.a()
            boolean r0 = r0.a(r3)
            if (r0 == 0) goto L3a
            android.content.Context r0 = com.sigmob.sdk.b.b()
            r2.a(r0)
            android.os.Message r0 = new android.os.Message
            r0.<init>()
            com.sigmob.sdk.base.services.i r1 = new com.sigmob.sdk.base.services.i
            r1.<init>()
            r1.b = r3
            r1.c = r4
            com.sigmob.sdk.base.services.f r3 = com.sigmob.sdk.base.services.f.a
            int r3 = r3.a()
            r0.what = r3
            r0.obj = r1
            android.os.Handler r3 = com.sigmob.sdk.base.services.h.b
            if (r3 == 0) goto L3a
            r3.sendMessage(r0)
        L3a:
            return
    }

    @Override
    public void onAccuracyChanged(android.hardware.Sensor r3, int r4) {
            r2 = this;
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r3 = r3.getName()
            r1 = 0
            r0[r1] = r3
            java.lang.Integer r3 = java.lang.Integer.valueOf(r4)
            r4 = 1
            r0[r4] = r3
            java.lang.String r3 = "name :%s, accuracy %d"
            java.lang.String r3 = java.lang.String.format(r3, r0)
            com.czhj.sdk.logger.SigmobLog.d(r3)
            return
    }

    @Override
    public void onSensorChanged(android.hardware.SensorEvent r3) {
            r2 = this;
            android.hardware.Sensor r0 = r3.sensor
            int r0 = r0.getType()
            r1 = 1
            if (r0 == r1) goto L5c
            r1 = 2
            if (r0 == r1) goto L4f
            r1 = 4
            if (r0 == r1) goto L42
            r1 = 5
            if (r0 == r1) goto L35
            r1 = 9
            if (r0 == r1) goto L28
            r1 = 10
            if (r0 == r1) goto L1b
            goto L68
        L1b:
            com.sigmob.sdk.base.services.g r0 = r2.d
            float[] r3 = r3.values
            java.lang.Object r3 = r3.clone()
            float[] r3 = (float[]) r3
            r0.f = r3
            goto L68
        L28:
            com.sigmob.sdk.base.services.g r0 = r2.d
            float[] r3 = r3.values
            java.lang.Object r3 = r3.clone()
            float[] r3 = (float[]) r3
            r0.a = r3
            goto L68
        L35:
            com.sigmob.sdk.base.services.g r0 = r2.d
            float[] r3 = r3.values
            java.lang.Object r3 = r3.clone()
            float[] r3 = (float[]) r3
            r0.e = r3
            goto L68
        L42:
            com.sigmob.sdk.base.services.g r0 = r2.d
            float[] r3 = r3.values
            java.lang.Object r3 = r3.clone()
            float[] r3 = (float[]) r3
            r0.b = r3
            goto L68
        L4f:
            com.sigmob.sdk.base.services.g r0 = r2.d
            float[] r3 = r3.values
            java.lang.Object r3 = r3.clone()
            float[] r3 = (float[]) r3
            r0.c = r3
            goto L68
        L5c:
            com.sigmob.sdk.base.services.g r0 = r2.d
            float[] r3 = r3.values
            java.lang.Object r3 = r3.clone()
            float[] r3 = (float[]) r3
            r0.d = r3
        L68:
            return
    }
}
