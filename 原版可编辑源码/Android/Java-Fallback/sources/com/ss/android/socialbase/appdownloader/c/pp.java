package com.ss.android.socialbase.appdownloader.c;

public class pp {
    private static java.lang.Boolean rg;

    static {
            return
    }

    private static boolean c() {
            java.util.HashSet r0 = new java.util.HashSet     // Catch: java.lang.Exception -> L89
            r0.<init>()     // Catch: java.lang.Exception -> L89
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L89
            r1.<init>()     // Catch: java.lang.Exception -> L89
            java.lang.String r2 = "/proc/"
            r1.append(r2)     // Catch: java.lang.Exception -> L89
            int r2 = android.os.Process.myPid()     // Catch: java.lang.Exception -> L89
            r1.append(r2)     // Catch: java.lang.Exception -> L89
            java.lang.String r2 = "/maps"
            r1.append(r2)     // Catch: java.lang.Exception -> L89
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L89
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Exception -> L89
            java.io.FileReader r3 = new java.io.FileReader     // Catch: java.lang.Exception -> L89
            r3.<init>(r1)     // Catch: java.lang.Exception -> L89
            r2.<init>(r3)     // Catch: java.lang.Exception -> L89
        L29:
            java.lang.String r1 = r2.readLine()     // Catch: java.lang.Exception -> L89
            r3 = 1
            if (r1 == 0) goto L4f
            java.lang.String r4 = ".so"
            boolean r4 = r1.endsWith(r4)     // Catch: java.lang.Exception -> L89
            if (r4 != 0) goto L40
            java.lang.String r4 = ".jar"
            boolean r4 = r1.endsWith(r4)     // Catch: java.lang.Exception -> L89
            if (r4 == 0) goto L29
        L40:
            java.lang.String r4 = " "
            int r4 = r1.lastIndexOf(r4)     // Catch: java.lang.Exception -> L89
            int r4 = r4 + r3
            java.lang.String r1 = r1.substring(r4)     // Catch: java.lang.Exception -> L89
            r0.add(r1)     // Catch: java.lang.Exception -> L89
            goto L29
        L4f:
            r2.close()     // Catch: java.lang.Exception -> L89
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> L89
        L56:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Exception -> L89
            if (r1 == 0) goto L89
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Exception -> L89
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L89
            java.lang.String r2 = "636f6d2e73617572696b2e737562737472617465"
            java.lang.String r2 = rg(r2)     // Catch: java.lang.Exception -> L89
            boolean r2 = r1.contains(r2)     // Catch: java.lang.Exception -> L89
            if (r2 == 0) goto L6f
            return r3
        L6f:
            java.lang.String r2 = "58706f7365644272696467652e6a6172"
            java.lang.String r2 = rg(r2)     // Catch: java.lang.Exception -> L89
            boolean r2 = r1.contains(r2)     // Catch: java.lang.Exception -> L89
            if (r2 == 0) goto L7c
            return r3
        L7c:
            java.lang.String r2 = "6c696273616e64686f6f6b2e656478702e736f"
            java.lang.String r2 = rg(r2)     // Catch: java.lang.Exception -> L89
            boolean r1 = r1.contains(r2)     // Catch: java.lang.Exception -> L89
            if (r1 == 0) goto L56
            return r3
        L89:
            r0 = 0
            return r0
    }

    private static boolean c(android.content.Context r5) {
            r0 = 7
            java.lang.String[] r0 = new java.lang.String[r0]
            java.lang.String r1 = "64652e726f62762e616e64726f69642e78706f736564"
            java.lang.String r1 = rg(r1)
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = "636f6d2e746f706a6f686e77752e6d616769736b"
            java.lang.String r1 = rg(r1)
            r3 = 1
            r0[r3] = r1
            java.lang.String r1 = "696f2e76612e6578706f736564"
            java.lang.String r1 = rg(r1)
            r4 = 2
            r0[r4] = r1
            java.lang.String r1 = "636f6d2e77696e642e636f74746572"
            java.lang.String r1 = rg(r1)
            r4 = 3
            r0[r4] = r1
            java.lang.String r1 = "6f72672e6d656f776361742e656478706f7365642e6d616e61676572"
            java.lang.String r1 = rg(r1)
            r4 = 4
            r0[r4] = r1
            java.lang.String r1 = "6d652e7765697368752e657870"
            java.lang.String r1 = rg(r1)
            r4 = 5
            r0[r4] = r1
            java.lang.String r1 = "636f6d2e73617572696b2e737562737472617465"
            java.lang.String r1 = rg(r1)
            r4 = 6
            r0[r4] = r1
            java.util.List r0 = java.util.Arrays.asList(r0)
            android.content.pm.PackageManager r5 = r5.getPackageManager()
            java.util.Iterator r0 = r0.iterator()
        L4e:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L66
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            android.content.pm.PackageInfo r1 = r5.getPackageInfo(r1, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L61
            if (r1 == 0) goto L4e
            return r3
        L61:
            r1 = move-exception
            r1.printStackTrace()
            goto L4e
        L66:
            return r2
    }

    public static boolean df() {
            int r0 = pt()
            if (r0 != 0) goto L8
            r0 = 1
            return r0
        L8:
            boolean r0 = pp()
            return r0
    }

    public static boolean df(android.content.Context r1) {
            r0 = 0
            android.content.pm.ApplicationInfo r1 = r1.getApplicationInfo()     // Catch: java.lang.Exception -> Lc
            int r1 = r1.flags     // Catch: java.lang.Exception -> Lc
            r1 = r1 & 2
            if (r1 == 0) goto Lc
            r0 = 1
        Lc:
            return r0
    }

    private static boolean pp() {
            r0 = 8
            java.lang.String[] r1 = new java.lang.String[r0]
            java.lang.String r2 = "2f7362696e2f7375"
            java.lang.String r2 = rg(r2)
            r3 = 0
            r1[r3] = r2
            java.lang.String r2 = "2f73797374656d2f62696e2f7375"
            java.lang.String r2 = rg(r2)
            r4 = 1
            r1[r4] = r2
            java.lang.String r2 = "2f73797374656d2f7862696e2f7375"
            java.lang.String r2 = rg(r2)
            r5 = 2
            r1[r5] = r2
            java.lang.String r2 = "2f646174612f6c6f63616c2f7862696e2f7375"
            java.lang.String r2 = rg(r2)
            r5 = 3
            r1[r5] = r2
            java.lang.String r2 = "2f646174612f6c6f63616c2f62696e2f7375"
            java.lang.String r2 = rg(r2)
            r5 = 4
            r1[r5] = r2
            java.lang.String r2 = "2f73797374656d2f73642f7862696e2f7375"
            java.lang.String r2 = rg(r2)
            r5 = 5
            r1[r5] = r2
            java.lang.String r2 = "2f73797374656d2f62696e2f6661696c736166652f7375"
            java.lang.String r2 = rg(r2)
            r5 = 6
            r1[r5] = r2
            java.lang.String r2 = "2f646174612f6c6f63616c2f7375"
            java.lang.String r2 = rg(r2)
            r5 = 7
            r1[r5] = r2
            r2 = r3
        L4d:
            if (r2 >= r0) goto L60
            r5 = r1[r2]
            java.io.File r6 = new java.io.File
            r6.<init>(r5)
            boolean r5 = r6.exists()
            if (r5 == 0) goto L5d
            return r4
        L5d:
            int r2 = r2 + 1
            goto L4d
        L60:
            return r3
    }

    public static boolean pp(android.content.Context r1) {
            boolean r0 = c()
            if (r0 != 0) goto Lf
            boolean r1 = c(r1)
            if (r1 == 0) goto Ld
            goto Lf
        Ld:
            r1 = 0
            return r1
        Lf:
            r1 = 1
            return r1
    }

    private static int pt() {
            r0 = 0
            r1 = 0
            r2 = 1
            java.lang.String r3 = "android.os.SystemProperties"
            java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.Exception -> L28
            java.lang.String r4 = "get"
            java.lang.Class[] r5 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L28
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r5[r1] = r6     // Catch: java.lang.Exception -> L28
            java.lang.reflect.Method r3 = r3.getMethod(r4, r5)     // Catch: java.lang.Exception -> L28
            java.lang.Object[] r4 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L28
            java.lang.String r5 = "726f2e736563757265"
            java.lang.String r5 = rg(r5)     // Catch: java.lang.Exception -> L28
            r4[r1] = r5     // Catch: java.lang.Exception -> L28
            java.lang.Object r3 = r3.invoke(r0, r4)     // Catch: java.lang.Exception -> L28
            if (r3 == 0) goto L28
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L28
            r0 = r3
        L28:
            if (r0 != 0) goto L2c
        L2a:
            r1 = r2
            goto L34
        L2c:
            java.lang.String r3 = "0"
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L2a
        L34:
            return r1
    }

    public static boolean pt(android.content.Context r2) {
            r0 = 0
            java.lang.String r1 = "phone"
            java.lang.Object r2 = r2.getSystemService(r1)     // Catch: java.lang.Throwable -> L13
            android.telephony.TelephonyManager r2 = (android.telephony.TelephonyManager) r2     // Catch: java.lang.Throwable -> L13
            int r2 = r2.getSimState()     // Catch: java.lang.Throwable -> L13
            r1 = 1
            if (r2 == r1) goto L13
            if (r2 == 0) goto L13
            r0 = r1
        L13:
            return r0
    }

    public static boolean q() {
            java.lang.String r0 = "3132372e302e302e31"
            java.lang.String r1 = rg(r0)     // Catch: java.io.IOException -> L1e
            java.net.InetAddress.getByName(r1)     // Catch: java.io.IOException -> L1e
            java.net.Socket r1 = new java.net.Socket     // Catch: java.io.IOException -> L1e
            java.lang.String r0 = rg(r0)     // Catch: java.io.IOException -> L1e
            java.lang.String r2 = "3237303432"
            java.lang.String r2 = rg(r2)     // Catch: java.io.IOException -> L1e
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.io.IOException -> L1e
            r1.<init>(r0, r2)     // Catch: java.io.IOException -> L1e
            r0 = 1
            return r0
        L1e:
            r0 = 0
            return r0
    }

    public static boolean q(android.content.Context r3) {
            android.content.IntentFilter r0 = new android.content.IntentFilter
            java.lang.String r1 = "android.intent.action.BATTERY_CHANGED"
            r0.<init>(r1)
            r1 = 0
            android.content.Intent r3 = r3.registerReceiver(r1, r0)
            r0 = 0
            if (r3 != 0) goto L10
            return r0
        L10:
            r1 = -1
            java.lang.String r2 = "plugged"
            int r3 = r3.getIntExtra(r2, r1)
            r1 = 2
            if (r3 != r1) goto L1b
            r0 = 1
        L1b:
            return r0
    }

    private static java.lang.String rg(java.lang.String r0) {
            java.lang.String r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.hexToString(r0)
            return r0
    }

    public static synchronized void rg(android.content.Context r2) {
            java.lang.Class<com.ss.android.socialbase.appdownloader.c.pp> r0 = com.ss.android.socialbase.appdownloader.c.pp.class
            monitor-enter(r0)
            java.lang.Boolean r1 = com.ss.android.socialbase.appdownloader.c.pp.rg     // Catch: java.lang.Throwable -> L36
            if (r1 != 0) goto L34
            boolean r1 = df()     // Catch: java.lang.Throwable -> L36
            if (r1 != 0) goto L2d
            boolean r1 = df(r2)     // Catch: java.lang.Throwable -> L36
            if (r1 != 0) goto L2d
            boolean r1 = q(r2)     // Catch: java.lang.Throwable -> L36
            if (r1 != 0) goto L2d
            boolean r1 = pt(r2)     // Catch: java.lang.Throwable -> L36
            if (r1 == 0) goto L2d
            boolean r1 = q()     // Catch: java.lang.Throwable -> L36
            if (r1 != 0) goto L2d
            boolean r2 = pp(r2)     // Catch: java.lang.Throwable -> L36
            if (r2 != 0) goto L2d
            r2 = 1
            goto L2e
        L2d:
            r2 = 0
        L2e:
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)     // Catch: java.lang.Throwable -> L36
            com.ss.android.socialbase.appdownloader.c.pp.rg = r2     // Catch: java.lang.Throwable -> L36
        L34:
            monitor-exit(r0)
            return
        L36:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    public static boolean rg() {
            java.lang.Boolean r0 = com.ss.android.socialbase.appdownloader.c.pp.rg
            if (r0 != 0) goto L6
            r0 = 1
            goto La
        L6:
            boolean r0 = r0.booleanValue()
        La:
            return r0
    }
}
