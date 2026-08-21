package com.mbridge.msdk.playercommon.exoplayer2.scheduler;

public final class Requirements {
    private static final int DEVICE_CHARGING = 16;
    private static final int DEVICE_IDLE = 8;
    public static final int NETWORK_TYPE_ANY = 1;
    private static final int NETWORK_TYPE_MASK = 7;
    public static final int NETWORK_TYPE_METERED = 4;
    public static final int NETWORK_TYPE_NONE = 0;
    public static final int NETWORK_TYPE_NOT_ROAMING = 3;
    private static final java.lang.String[] NETWORK_TYPE_STRINGS = null;
    public static final int NETWORK_TYPE_UNMETERED = 2;
    private static final java.lang.String TAG = "Requirements";
    private final int requirements;

    public @interface NetworkType {
    }

    static {
            return
    }

    public Requirements(int r1) {
            r0 = this;
            r0.<init>()
            r0.requirements = r1
            return
    }

    public Requirements(int r2, boolean r3, boolean r4) {
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

    private boolean checkChargingRequirement(android.content.Context r5) {
            r4 = this;
            boolean r0 = r4.isChargingRequired()
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
            r1 = r0
        L27:
            return r1
    }

    private boolean checkIdleRequirement(android.content.Context r5) {
            r4 = this;
            boolean r0 = r4.isIdleRequired()
            r1 = 1
            if (r0 != 0) goto L8
            return r1
        L8:
            java.lang.String r0 = "power"
            java.lang.Object r5 = r5.getSystemService(r0)
            android.os.PowerManager r5 = (android.os.PowerManager) r5
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r2 = 23
            r3 = 0
            if (r0 < r2) goto L20
            boolean r5 = r5.isDeviceIdleMode()
            if (r5 != 0) goto L1e
            goto L33
        L1e:
            r1 = r3
            goto L33
        L20:
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r2 = 20
            if (r0 < r2) goto L2d
            boolean r5 = r5.isInteractive()
            if (r5 != 0) goto L1e
            goto L33
        L2d:
            boolean r5 = r5.isScreenOn()
            if (r5 != 0) goto L1e
        L33:
            return r1
    }

    private static boolean checkInternetConnectivity(android.net.ConnectivityManager r3) {
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 1
            r2 = 23
            if (r0 >= r2) goto L8
            return r1
        L8:
            android.net.Network r0 = r3.getActiveNetwork()
            r2 = 0
            if (r0 != 0) goto L15
            java.lang.String r3 = "No active network."
            logd(r3)
            return r2
        L15:
            android.net.NetworkCapabilities r3 = r3.getNetworkCapabilities(r0)
            if (r3 == 0) goto L23
            r0 = 16
            boolean r3 = r3.hasCapability(r0)
            if (r3 != 0) goto L24
        L23:
            r2 = r1
        L24:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "Network capability validated: "
            r3.append(r0)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            logd(r3)
            r3 = r2 ^ 1
            return r3
    }

    private boolean checkNetworkRequirements(android.content.Context r6) {
            r5 = this;
            int r0 = r5.getRequiredNetworkType()
            r1 = 1
            if (r0 != 0) goto L8
            return r1
        L8:
            java.lang.String r2 = "connectivity"
            java.lang.Object r6 = r6.getSystemService(r2)
            android.net.ConnectivityManager r6 = (android.net.ConnectivityManager) r6
            android.net.NetworkInfo r2 = r6.getActiveNetworkInfo()
            r3 = 0
            if (r2 == 0) goto L6c
            boolean r4 = r2.isConnected()
            if (r4 != 0) goto L1e
            goto L6c
        L1e:
            boolean r4 = checkInternetConnectivity(r6)
            if (r4 != 0) goto L25
            return r3
        L25:
            if (r0 != r1) goto L28
            return r1
        L28:
            r3 = 3
            if (r0 != r3) goto L45
            boolean r6 = r2.isRoaming()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "Roaming: "
            r0.append(r2)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            logd(r0)
            r6 = r6 ^ r1
            return r6
        L45:
            boolean r6 = isActiveNetworkMetered(r6, r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Metered network: "
            r2.append(r3)
            r2.append(r6)
            java.lang.String r2 = r2.toString()
            logd(r2)
            r2 = 2
            if (r0 != r2) goto L62
            r6 = r6 ^ r1
            return r6
        L62:
            r1 = 4
            if (r0 != r1) goto L66
            return r6
        L66:
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
            r6.<init>()
            throw r6
        L6c:
            java.lang.String r6 = "No network info or no connection."
            logd(r6)
            return r3
    }

    private static boolean isActiveNetworkMetered(android.net.ConnectivityManager r2, android.net.NetworkInfo r3) {
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
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
            goto L1b
        L1a:
            r3 = 0
        L1b:
            return r3
    }

    private static void logd(java.lang.String r0) {
            return
    }

    public final boolean checkRequirements(android.content.Context r2) {
            r1 = this;
            boolean r0 = r1.checkNetworkRequirements(r2)
            if (r0 == 0) goto L14
            boolean r0 = r1.checkChargingRequirement(r2)
            if (r0 == 0) goto L14
            boolean r2 = r1.checkIdleRequirement(r2)
            if (r2 == 0) goto L14
            r2 = 1
            goto L15
        L14:
            r2 = 0
        L15:
            return r2
    }

    public final int getRequiredNetworkType() {
            r1 = this;
            int r0 = r1.requirements
            r0 = r0 & 7
            return r0
    }

    public final int getRequirementsData() {
            r1 = this;
            int r0 = r1.requirements
            return r0
    }

    public final boolean isChargingRequired() {
            r1 = this;
            int r0 = r1.requirements
            r0 = r0 & 16
            if (r0 == 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public final boolean isIdleRequired() {
            r1 = this;
            int r0 = r1.requirements
            r0 = r0 & 8
            if (r0 == 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public final java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = super.toString()
            return r0
    }
}
