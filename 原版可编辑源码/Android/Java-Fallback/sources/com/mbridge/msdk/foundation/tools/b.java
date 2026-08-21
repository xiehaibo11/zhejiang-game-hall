package com.mbridge.msdk.foundation.tools;

public final class b {
    private static int a = -1;
    private static int b = -1;
    private static int c = -1;
    private static boolean d;
    private static int e;
    private static boolean f;
    private static boolean g;

    static {
            return
    }

    public static int a() {
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            r1 = 0
            r2 = 50
            android.content.IntentFilter r3 = new android.content.IntentFilter     // Catch: java.lang.Exception -> L4e
            java.lang.String r4 = "android.intent.action.BATTERY_CHANGED"
            r3.<init>(r4)     // Catch: java.lang.Exception -> L4e
            android.content.Intent r0 = r0.registerReceiver(r1, r3)     // Catch: java.lang.Exception -> L4e
            r1 = 2
            int[] r1 = new int[r1]     // Catch: java.lang.Exception -> L4e
            r3 = 1
            r4 = 0
            if (r0 == 0) goto L47
            java.lang.String r5 = "level"
            int r5 = r0.getIntExtra(r5, r2)     // Catch: java.lang.Exception -> L4e
            r1[r4] = r5     // Catch: java.lang.Exception -> L4e
            java.lang.String r5 = "plugged"
            int r0 = r0.getIntExtra(r5, r4)     // Catch: java.lang.Exception -> L4e
            r1[r3] = r0     // Catch: java.lang.Exception -> L4e
            r0 = r1[r3]     // Catch: java.lang.Exception -> L4e
            if (r0 == 0) goto L33
            r0 = r3
            goto L34
        L33:
            r0 = r4
        L34:
            a(r0)     // Catch: java.lang.Exception -> L4e
            r0 = r1[r4]     // Catch: java.lang.Exception -> L4e
            r3 = r1[r3]     // Catch: java.lang.Exception -> L4e
            int r0 = a(r0, r3)     // Catch: java.lang.Exception -> L4e
            r1[r4] = r0     // Catch: java.lang.Exception -> L4e
            r0 = r1[r4]     // Catch: java.lang.Exception -> L4e
            a(r0)     // Catch: java.lang.Exception -> L4e
            goto L4b
        L47:
            r1[r4] = r2     // Catch: java.lang.Exception -> L4e
            r1[r3] = r4     // Catch: java.lang.Exception -> L4e
        L4b:
            r0 = r1[r4]     // Catch: java.lang.Exception -> L4e
            return r0
        L4e:
            int r0 = com.mbridge.msdk.foundation.tools.b.a
            r1 = -1
            if (r0 == r1) goto L54
            r2 = r0
        L54:
            return r2
    }

    private static int a(int r4, int r5) {
            java.lang.String r0 = android.os.Build.MODEL
            java.lang.String r1 = "SCH-i909"
            boolean r1 = r0.equalsIgnoreCase(r1)
            r2 = 100
            if (r1 != 0) goto La6
            java.lang.String r1 = "SCH-I535"
            boolean r1 = r0.equalsIgnoreCase(r1)
            if (r1 != 0) goto La6
            java.lang.String r1 = "SCH-W899"
            boolean r1 = r0.equalsIgnoreCase(r1)
            if (r1 == 0) goto L1e
            goto La6
        L1e:
            java.lang.String r1 = r0.trim()
            java.lang.String r1 = r1.toUpperCase()
            java.lang.String r3 = "XT702"
            boolean r1 = r1.contains(r3)
            if (r1 == 0) goto L30
            goto Laa
        L30:
            java.lang.String r1 = r0.trim()
            java.lang.String r1 = r1.toUpperCase()
            java.lang.String r3 = "XT907"
            boolean r1 = r1.contains(r3)
            if (r1 == 0) goto L42
            goto Laa
        L42:
            java.lang.String r1 = r0.trim()
            java.lang.String r1 = r1.toUpperCase()
            java.lang.String r3 = "XT1058"
            boolean r1 = r1.contains(r3)
            if (r1 == 0) goto L53
            goto Laa
        L53:
            java.lang.String r0 = r0.trim()
            java.lang.String r0 = r0.toUpperCase()
            java.lang.String r1 = "XT1080"
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L64
            goto Laa
        L64:
            java.lang.String r0 = android.os.Build.MANUFACTURER
            java.lang.String r1 = "motorola"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto Laa
            java.io.File r0 = new java.io.File
            java.lang.String r1 = "/sys/class/power_supply/battery/charge_counter"
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 == 0) goto L84
            java.lang.String r0 = a(r0)
            int r0 = java.lang.Integer.parseInt(r0)
            goto L85
        L84:
            r0 = 0
        L85:
            if (r0 > 0) goto L9b
            java.io.File r1 = new java.io.File
            java.lang.String r3 = "/sys/class/power_supply/battery/capacity"
            r1.<init>(r3)
            boolean r3 = r1.exists()
            if (r3 == 0) goto L9b
            java.lang.String r1 = a(r1)
            java.lang.Integer.parseInt(r1)
        L9b:
            if (r0 > r2) goto Laa
            if (r0 > 0) goto La0
            goto Laa
        La0:
            int r1 = r4 % 10
            if (r1 != 0) goto Laa
            r4 = r0
            goto Laa
        La6:
            if (r4 <= r2) goto Laa
            int r4 = r4 / 10
        Laa:
            if (r4 <= r2) goto Lb8
            if (r5 == 0) goto Lb3
            r5 = 110(0x6e, float:1.54E-43)
            if (r4 >= r5) goto Lb3
            return r2
        Lb3:
            int r4 = r4 / 10
            if (r4 <= r2) goto Lb8
            goto Lb3
        Lb8:
            return r4
    }

    private static java.lang.String a(java.io.File r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 1024(0x400, float:1.435E-42)
            char[] r1 = new char[r1]
            r2 = 0
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L27 java.io.IOException -> L2e
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L27 java.io.IOException -> L2e
            java.io.InputStreamReader r4 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L22 java.io.IOException -> L25
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L22 java.io.IOException -> L25
        L14:
            int r2 = r4.read(r1)     // Catch: java.lang.Throwable -> L22 java.io.IOException -> L25
            if (r2 < 0) goto L1e
            a(r2, r1, r0)     // Catch: java.lang.Throwable -> L22 java.io.IOException -> L25
            goto L14
        L1e:
            r3.close()     // Catch: java.io.IOException -> L33
            goto L33
        L22:
            r4 = move-exception
            r2 = r3
            goto L28
        L25:
            r2 = r3
            goto L2e
        L27:
            r4 = move-exception
        L28:
            if (r2 == 0) goto L2d
            r2.close()     // Catch: java.io.IOException -> L2d
        L2d:
            throw r4
        L2e:
            if (r2 == 0) goto L33
            r2.close()     // Catch: java.io.IOException -> L33
        L33:
            java.lang.String r4 = r0.toString()
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L3f
            java.lang.String r4 = "0"
        L3f:
            return r4
    }

    private static synchronized void a(int r1) {
            java.lang.Class<com.mbridge.msdk.foundation.tools.b> r0 = com.mbridge.msdk.foundation.tools.b.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.tools.b.e = r1     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private static void a(int r3, char[] r4, java.lang.StringBuilder r5) {
            r0 = 0
        L1:
            if (r0 >= r3) goto L17
            char r1 = r4[r0]
            r2 = 10
            if (r1 == r2) goto L14
            char r1 = r4[r0]
            r2 = 13
            if (r1 == r2) goto L14
            char r1 = r4[r0]
            r5.append(r1)
        L14:
            int r0 = r0 + 1
            goto L1
        L17:
            return
    }

    private static synchronized void a(boolean r1) {
            java.lang.Class<com.mbridge.msdk.foundation.tools.b> r0 = com.mbridge.msdk.foundation.tools.b.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.tools.b.f = r1     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static int b() {
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            r1 = 0
            r2 = 1
            r3 = 0
            android.content.IntentFilter r4 = new android.content.IntentFilter     // Catch: java.lang.Throwable -> L1d
            java.lang.String r5 = "android.intent.action.BATTERY_CHANGED"
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L1d
            android.content.Intent r0 = r0.registerReceiver(r1, r4)     // Catch: java.lang.Throwable -> L1d
            java.lang.String r1 = "status"
            int r0 = r0.getIntExtra(r1, r2)     // Catch: java.lang.Throwable -> L1d
            goto L28
        L1d:
            r0 = move-exception
            java.lang.String r1 = r0.getMessage()
            java.lang.String r4 = "BatteryStatusUtil"
            com.mbridge.msdk.foundation.tools.z.c(r4, r1, r0)
            r0 = r3
        L28:
            r1 = 2
            if (r0 == r1) goto L30
            r1 = 5
            if (r0 != r1) goto L2f
            goto L30
        L2f:
            r2 = r3
        L30:
            return r2
    }
}
