package com.tkay.expressad.exoplayer.scheduler;

public final class a {
    public static final int a = 0;
    public static final int b = 1;
    public static final int c = 2;
    public static final int d = 3;
    public static final int e = 4;
    private static final int f = 8;
    private static final int g = 16;
    private static final int h = 7;
    private static final java.lang.String i = "Requirements";
    private static final java.lang.String[] j = null;
    private final int k;

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface a {
    }

    static {
            return
    }

    public a(int r1) {
            r0 = this;
            r0.<init>()
            r0.k = r1
            return
    }

    private a(int r2, boolean r3, boolean r4) {
            r1 = this;
            r0 = 0
            if (r3 == 0) goto L6
            r3 = 16
            goto L7
        L6:
            r3 = r0
        L7:
            r2 = r2 | r3
            if (r4 == 0) goto Lc
            r0 = 8
        Lc:
            r2 = r2 | r0
            r1.<init>(r2)
            return
    }

    private static boolean a(android.net.ConnectivityManager r3) {
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 1
            r2 = 23
            if (r0 >= r2) goto L8
            return r1
        L8:
            android.net.Network r0 = r3.getActiveNetwork()
            r2 = 0
            if (r0 != 0) goto L10
            return r2
        L10:
            android.net.NetworkCapabilities r3 = r3.getNetworkCapabilities(r0)
            if (r3 == 0) goto L21
            r0 = 16
            boolean r3 = r3.hasCapability(r0)
            if (r3 != 0) goto L1f
            goto L21
        L1f:
            r3 = r2
            goto L22
        L21:
            r3 = r1
        L22:
            if (r3 != 0) goto L25
            return r1
        L25:
            return r2
    }

    private static boolean a(android.net.ConnectivityManager r2, android.net.NetworkInfo r3) {
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 16
            if (r0 < r1) goto Lb
            boolean r2 = r2.isActiveNetworkMetered()
            return r2
        Lb:
            int r2 = r3.getType()
            r3 = 1
            if (r2 == r3) goto L1a
            r0 = 7
            if (r2 == r0) goto L1a
            r0 = 9
            if (r2 == r0) goto L1a
            return r3
        L1a:
            r2 = 0
            return r2
    }

    private boolean b(android.content.Context r9) {
            r8 = this;
            int r0 = r8.k
            r1 = 7
            r0 = r0 & r1
            r2 = 1
            if (r0 != 0) goto L8
            return r2
        L8:
            java.lang.String r3 = "connectivity"
            java.lang.Object r9 = r9.getSystemService(r3)
            android.net.ConnectivityManager r9 = (android.net.ConnectivityManager) r9
            android.net.NetworkInfo r3 = r9.getActiveNetworkInfo()
            r4 = 0
            if (r3 == 0) goto L7d
            boolean r5 = r3.isConnected()
            if (r5 != 0) goto L1f
            goto L7d
        L1f:
            int r5 = com.tkay.expressad.exoplayer.k.af.a
            r6 = 23
            r7 = 16
            if (r5 >= r6) goto L29
        L27:
            r5 = r2
            goto L43
        L29:
            android.net.Network r5 = r9.getActiveNetwork()
            if (r5 == 0) goto L42
            android.net.NetworkCapabilities r5 = r9.getNetworkCapabilities(r5)
            if (r5 == 0) goto L3e
            boolean r5 = r5.hasCapability(r7)
            if (r5 != 0) goto L3c
            goto L3e
        L3c:
            r5 = r4
            goto L3f
        L3e:
            r5 = r2
        L3f:
            if (r5 != 0) goto L42
            goto L27
        L42:
            r5 = r4
        L43:
            if (r5 != 0) goto L46
            return r4
        L46:
            if (r0 != r2) goto L49
            return r2
        L49:
            r5 = 3
            if (r0 != r5) goto L54
            boolean r9 = r3.isRoaming()
            if (r9 != 0) goto L53
            return r2
        L53:
            return r4
        L54:
            int r5 = com.tkay.expressad.exoplayer.k.af.a
            if (r5 < r7) goto L5d
            boolean r9 = r9.isActiveNetworkMetered()
            goto L6c
        L5d:
            int r9 = r3.getType()
            if (r9 == r2) goto L6b
            if (r9 == r1) goto L6b
            r1 = 9
            if (r9 == r1) goto L6b
            r9 = r2
            goto L6c
        L6b:
            r9 = r4
        L6c:
            r1 = 2
            if (r0 != r1) goto L73
            if (r9 != 0) goto L72
            return r2
        L72:
            return r4
        L73:
            r1 = 4
            if (r0 != r1) goto L77
            return r9
        L77:
            java.lang.IllegalStateException r9 = new java.lang.IllegalStateException
            r9.<init>()
            throw r9
        L7d:
            return r4
    }

    private boolean c(android.content.Context r5) {
            r4 = this;
            boolean r0 = r4.b()
            r1 = 1
            if (r0 != 0) goto L8
            return r1
        L8:
            r0 = 0
            android.content.IntentFilter r2 = new android.content.IntentFilter
            java.lang.String r3 = "android.intent.action.BATTERY_CHANGED"
            r2.<init>(r3)
            android.content.Intent r5 = r5.registerReceiver(r0, r2)
            r0 = 0
            if (r5 != 0) goto L18
            return r0
        L18:
            r2 = -1
            java.lang.String r3 = "status"
            int r5 = r5.getIntExtra(r3, r2)
            r2 = 2
            if (r5 == r2) goto L27
            r2 = 5
            if (r5 != r2) goto L26
            goto L27
        L26:
            return r0
        L27:
            return r1
    }

    private boolean d(android.content.Context r5) {
            r4 = this;
            boolean r0 = r4.c()
            r1 = 1
            if (r0 != 0) goto L8
            return r1
        L8:
            java.lang.String r0 = "power"
            java.lang.Object r5 = r5.getSystemService(r0)
            android.os.PowerManager r5 = (android.os.PowerManager) r5
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r2 = 23
            r3 = 0
            if (r0 < r2) goto L1f
            boolean r5 = r5.isDeviceIdleMode()
            if (r5 != 0) goto L1e
            return r1
        L1e:
            return r3
        L1f:
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r2 = 20
            if (r0 < r2) goto L2d
            boolean r5 = r5.isInteractive()
            if (r5 != 0) goto L2c
            return r1
        L2c:
            return r3
        L2d:
            boolean r5 = r5.isScreenOn()
            if (r5 != 0) goto L34
            return r1
        L34:
            return r3
    }

    private static void e() {
            return
    }

    public final int a() {
            r1 = this;
            int r0 = r1.k
            r0 = r0 & 7
            return r0
    }

    public final boolean a(android.content.Context r11) {
            r10 = this;
            int r0 = r10.k
            r1 = 7
            r0 = r0 & r1
            r2 = 2
            r3 = 23
            r4 = 0
            r5 = 1
            if (r0 != 0) goto Le
        Lb:
            r1 = r5
            goto L7e
        Le:
            java.lang.String r6 = "connectivity"
            java.lang.Object r6 = r11.getSystemService(r6)
            android.net.ConnectivityManager r6 = (android.net.ConnectivityManager) r6
            android.net.NetworkInfo r7 = r6.getActiveNetworkInfo()
            if (r7 == 0) goto L7d
            boolean r8 = r7.isConnected()
            if (r8 != 0) goto L24
            goto L7d
        L24:
            int r8 = com.tkay.expressad.exoplayer.k.af.a
            r9 = 16
            if (r8 >= r3) goto L2c
        L2a:
            r8 = r5
            goto L46
        L2c:
            android.net.Network r8 = r6.getActiveNetwork()
            if (r8 == 0) goto L45
            android.net.NetworkCapabilities r8 = r6.getNetworkCapabilities(r8)
            if (r8 == 0) goto L41
            boolean r8 = r8.hasCapability(r9)
            if (r8 != 0) goto L3f
            goto L41
        L3f:
            r8 = r4
            goto L42
        L41:
            r8 = r5
        L42:
            if (r8 != 0) goto L45
            goto L2a
        L45:
            r8 = r4
        L46:
            if (r8 != 0) goto L49
            goto L7d
        L49:
            if (r0 != r5) goto L4c
            goto Lb
        L4c:
            r8 = 3
            if (r0 != r8) goto L56
            boolean r0 = r7.isRoaming()
            if (r0 != 0) goto L7d
            goto Lb
        L56:
            int r8 = com.tkay.expressad.exoplayer.k.af.a
            if (r8 < r9) goto L5f
            boolean r1 = r6.isActiveNetworkMetered()
            goto L6e
        L5f:
            int r6 = r7.getType()
            if (r6 == r5) goto L6d
            if (r6 == r1) goto L6d
            r1 = 9
            if (r6 == r1) goto L6d
            r1 = r5
            goto L6e
        L6d:
            r1 = r4
        L6e:
            if (r0 != r2) goto L73
            if (r1 != 0) goto L7d
            goto Lb
        L73:
            r6 = 4
            if (r0 != r6) goto L77
            goto L7e
        L77:
            java.lang.IllegalStateException r11 = new java.lang.IllegalStateException
            r11.<init>()
            throw r11
        L7d:
            r1 = r4
        L7e:
            if (r1 == 0) goto Lda
            boolean r0 = r10.b()
            if (r0 != 0) goto L88
        L86:
            r0 = r5
            goto La4
        L88:
            r0 = 0
            android.content.IntentFilter r1 = new android.content.IntentFilter
            java.lang.String r6 = "android.intent.action.BATTERY_CHANGED"
            r1.<init>(r6)
            android.content.Intent r0 = r11.registerReceiver(r0, r1)
            if (r0 == 0) goto La3
            r1 = -1
            java.lang.String r6 = "status"
            int r0 = r0.getIntExtra(r6, r1)
            if (r0 == r2) goto L86
            r1 = 5
            if (r0 != r1) goto La3
            goto L86
        La3:
            r0 = r4
        La4:
            if (r0 == 0) goto Lda
            boolean r0 = r10.c()
            if (r0 != 0) goto Lae
        Lac:
            r11 = r5
            goto Ld7
        Lae:
            java.lang.String r0 = "power"
            java.lang.Object r11 = r11.getSystemService(r0)
            android.os.PowerManager r11 = (android.os.PowerManager) r11
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            if (r0 < r3) goto Lc3
            boolean r11 = r11.isDeviceIdleMode()
            if (r11 != 0) goto Lc1
            goto Lac
        Lc1:
            r11 = r4
            goto Ld7
        Lc3:
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 20
            if (r0 < r1) goto Ld0
            boolean r11 = r11.isInteractive()
            if (r11 != 0) goto Lc1
            goto Lac
        Ld0:
            boolean r11 = r11.isScreenOn()
            if (r11 != 0) goto Lc1
            goto Lac
        Ld7:
            if (r11 == 0) goto Lda
            return r5
        Lda:
            return r4
    }

    public final boolean b() {
            r1 = this;
            int r0 = r1.k
            r0 = r0 & 16
            if (r0 == 0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    public final boolean c() {
            r1 = this;
            int r0 = r1.k
            r0 = r0 & 8
            if (r0 == 0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    public final int d() {
            r1 = this;
            int r0 = r1.k
            return r0
    }

    public final java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = super.toString()
            return r0
    }
}
