package com.kuaishou.weapon.p0;

public class bu {
    public bu() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(android.content.Context r3) {
            r0 = 0
            android.content.Intent r3 = d(r3)     // Catch: java.lang.Throwable -> L2d
            if (r3 == 0) goto L1b
            java.lang.String r0 = "level"
            r1 = -1
            int r0 = r3.getIntExtra(r0, r1)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r2 = "scale"
            int r3 = r3.getIntExtra(r2, r1)     // Catch: java.lang.Throwable -> L2d
            float r0 = (float) r0     // Catch: java.lang.Throwable -> L2d
            float r3 = (float) r3     // Catch: java.lang.Throwable -> L2d
            float r0 = r0 / r3
            r3 = 1120403456(0x42c80000, float:100.0)
            float r0 = r0 * r3
            int r0 = (int) r0     // Catch: java.lang.Throwable -> L2d
        L1b:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2d
            r3.<init>()     // Catch: java.lang.Throwable -> L2d
            r3.append(r0)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r0 = "%"
            r3.append(r0)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L2d
            return r3
        L2d:
            r3 = 0
            return r3
    }

    public static java.lang.String b(android.content.Context r2) {
            android.content.Intent r2 = d(r2)     // Catch: java.lang.Throwable -> L20
            java.lang.String r0 = "plugged"
            r1 = -1
            int r2 = r2.getIntExtra(r0, r1)     // Catch: java.lang.Throwable -> L20
            r0 = 1
            if (r2 == r0) goto L1d
            r0 = 2
            if (r2 == r0) goto L1a
            r0 = 4
            if (r2 == r0) goto L17
            java.lang.String r2 = ""
            return r2
        L17:
            java.lang.String r2 = "Wireless charger"
            return r2
        L1a:
            java.lang.String r2 = "USB charger"
            return r2
        L1d:
            java.lang.String r2 = "AC charger"
            return r2
        L20:
            r2 = 0
            return r2
    }

    public static int c(android.content.Context r3) {
            r0 = -1
            android.content.Intent r3 = d(r3)     // Catch: java.lang.Throwable -> L21
            java.lang.String r1 = "health"
            int r3 = r3.getIntExtra(r1, r0)     // Catch: java.lang.Throwable -> L21
            r0 = 3
            r1 = 2
            if (r3 == r1) goto L21
            r2 = 4
            if (r3 == r0) goto L20
            if (r3 == r2) goto L1f
            r0 = 5
            if (r3 == r0) goto L1e
            r0 = 7
            if (r3 == r0) goto L1c
            r3 = 6
            return r3
        L1c:
            r3 = 1
            return r3
        L1e:
            return r0
        L1f:
            return r1
        L20:
            return r2
        L21:
            return r0
    }

    private static android.content.Intent d(android.content.Context r2) {
            android.content.IntentFilter r0 = new android.content.IntentFilter
            java.lang.String r1 = "android.intent.action.BATTERY_CHANGED"
            r0.<init>(r1)
            r1 = 0
            android.content.Intent r2 = r2.registerReceiver(r1, r0)
            return r2
    }
}
