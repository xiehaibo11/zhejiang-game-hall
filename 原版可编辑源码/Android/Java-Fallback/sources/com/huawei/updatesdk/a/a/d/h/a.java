package com.huawei.updatesdk.a.a.d.h;

public class a {
    private static android.car.Car a;
    private static java.lang.String b;
    private static java.lang.String c;
    private static boolean d;

    static class a implements android.content.ServiceConnection {
        a() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void onServiceConnected(android.content.ComponentName r3, android.os.IBinder r4) {
                r2 = this;
                java.lang.String r3 = "CarInfoUtil"
                android.car.Car r4 = com.huawei.updatesdk.a.a.d.h.a.a()     // Catch: java.lang.Throwable -> L41
                java.lang.String r0 = "info"
                java.lang.Object r4 = r4.getCarManager(r0)     // Catch: java.lang.Throwable -> L41
                android.car.CarInfoManager r4 = (android.car.CarInfoManager) r4     // Catch: java.lang.Throwable -> L41
                java.lang.String r0 = r4.getManufacturer()     // Catch: java.lang.Throwable -> L41
                com.huawei.updatesdk.a.a.d.h.a.a(r0)     // Catch: java.lang.Throwable -> L41
                java.lang.String r4 = r4.getModel()     // Catch: java.lang.Throwable -> L41
                com.huawei.updatesdk.a.a.d.h.a.b(r4)     // Catch: java.lang.Throwable -> L41
                java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L41
                r4.<init>()     // Catch: java.lang.Throwable -> L41
                java.lang.String r0 = "car getManufacturer = "
                r4.append(r0)     // Catch: java.lang.Throwable -> L41
                java.lang.String r0 = com.huawei.updatesdk.a.a.d.h.a.b()     // Catch: java.lang.Throwable -> L41
                r4.append(r0)     // Catch: java.lang.Throwable -> L41
                java.lang.String r0 = "  getModel = "
                r4.append(r0)     // Catch: java.lang.Throwable -> L41
                java.lang.String r0 = com.huawei.updatesdk.a.a.d.h.a.c()     // Catch: java.lang.Throwable -> L41
                r4.append(r0)     // Catch: java.lang.Throwable -> L41
                java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L41
                com.huawei.updatesdk.a.a.a.b(r3, r4)     // Catch: java.lang.Throwable -> L41
                goto L5a
            L41:
                r4 = move-exception
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Car not connected in onServiceConnected"
                r0.append(r1)
                java.lang.String r4 = r4.toString()
                r0.append(r4)
                java.lang.String r4 = r0.toString()
                com.huawei.updatesdk.a.a.a.a(r3, r4)
            L5a:
                return
        }

        @Override
        public void onServiceDisconnected(android.content.ComponentName r2) {
                r1 = this;
                java.lang.String r2 = "CarInfoUtil"
                java.lang.String r0 = "onServiceDisconnected"
                com.huawei.updatesdk.a.a.a.b(r2, r0)
                return
        }
    }

    static android.car.Car a() {
            android.car.Car r0 = com.huawei.updatesdk.a.a.d.h.a.a
            return r0
    }

    static java.lang.String a(java.lang.String r0) {
            com.huawei.updatesdk.a.a.d.h.a.c = r0
            return r0
    }

    private static void a(android.content.Context r2) {
            if (r2 == 0) goto L3a
            boolean r0 = com.huawei.updatesdk.a.a.d.h.a.d
            if (r0 == 0) goto L7
            goto L3a
        L7:
            r0 = 1
            com.huawei.updatesdk.a.a.d.h.a.d = r0     // Catch: java.lang.Throwable -> L1f
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L1f
            com.huawei.updatesdk.a.a.d.h.a$a r0 = new com.huawei.updatesdk.a.a.d.h.a$a     // Catch: java.lang.Throwable -> L1f
            r0.<init>()     // Catch: java.lang.Throwable -> L1f
            android.car.Car r2 = android.car.Car.createCar(r2, r0)     // Catch: java.lang.Throwable -> L1f
            com.huawei.updatesdk.a.a.d.h.a.a = r2     // Catch: java.lang.Throwable -> L1f
            if (r2 == 0) goto L3a
            r2.connect()     // Catch: java.lang.Throwable -> L1f
            goto L3a
        L1f:
            r2 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Car Service Connect Error"
            r0.append(r1)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "CarInfoUtil"
            com.huawei.updatesdk.a.a.a.a(r0, r2)
        L3a:
            return
    }

    static java.lang.String b() {
            java.lang.String r0 = com.huawei.updatesdk.a.a.d.h.a.c
            return r0
    }

    static java.lang.String b(java.lang.String r0) {
            com.huawei.updatesdk.a.a.d.h.a.b = r0
            return r0
    }

    public static void b(android.content.Context r0) {
            a(r0)
            return
    }

    static java.lang.String c() {
            java.lang.String r0 = com.huawei.updatesdk.a.a.d.h.a.b
            return r0
    }

    public static java.lang.String d() {
            java.lang.String r0 = com.huawei.updatesdk.a.a.d.h.a.c
            return r0
    }

    public static java.lang.String e() {
            java.lang.String r0 = com.huawei.updatesdk.a.a.d.h.a.b
            return r0
    }
}
