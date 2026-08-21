package com.mbridge.msdk.playercommon.exoplayer2.scheduler;

public final class RequirementsWatcher {
    private static final java.lang.String TAG = "RequirementsWatcher";
    private final android.content.Context context;
    private final com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher.Listener listener;
    private com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher.CapabilityValidatedCallback networkCallback;
    private com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher.DeviceStatusChangeReceiver receiver;
    private final com.mbridge.msdk.playercommon.exoplayer2.scheduler.Requirements requirements;
    private boolean requirementsWereMet;

    static class 1 {
    }

    private final class CapabilityValidatedCallback extends android.net.ConnectivityManager.NetworkCallback {
        final com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher this$0;

        private CapabilityValidatedCallback(com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        CapabilityValidatedCallback(com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher r1, com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void onAvailable(android.net.Network r2) {
                r1 = this;
                super.onAvailable(r2)
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher r0 = r1.this$0
                r2.append(r0)
                java.lang.String r0 = " NetworkCallback.onAvailable"
                r2.append(r0)
                java.lang.String r2 = r2.toString()
                com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher.access$200(r2)
                com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher r2 = r1.this$0
                r0 = 0
                com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher.access$300(r2, r0)
                return
        }

        @Override
        public final void onLost(android.net.Network r2) {
                r1 = this;
                super.onLost(r2)
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher r0 = r1.this$0
                r2.append(r0)
                java.lang.String r0 = " NetworkCallback.onLost"
                r2.append(r0)
                java.lang.String r2 = r2.toString()
                com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher.access$200(r2)
                com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher r2 = r1.this$0
                r0 = 0
                com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher.access$300(r2, r0)
                return
        }
    }

    private class DeviceStatusChangeReceiver extends android.content.BroadcastReceiver {
        final com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher this$0;

        private DeviceStatusChangeReceiver(com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        DeviceStatusChangeReceiver(com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher r1, com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void onReceive(android.content.Context r2, android.content.Intent r3) {
                r1 = this;
                boolean r2 = r1.isInitialStickyBroadcast()
                if (r2 != 0) goto L29
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher r0 = r1.this$0
                r2.append(r0)
                java.lang.String r0 = " received "
                r2.append(r0)
                java.lang.String r3 = r3.getAction()
                r2.append(r3)
                java.lang.String r2 = r2.toString()
                com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher.access$200(r2)
                com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher r2 = r1.this$0
                r3 = 0
                com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher.access$300(r2, r3)
            L29:
                return
        }
    }

    public interface Listener {
        void requirementsMet(com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher r1);

        void requirementsNotMet(com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher r1);
    }

    public RequirementsWatcher(android.content.Context r1, com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher.Listener r2, com.mbridge.msdk.playercommon.exoplayer2.scheduler.Requirements r3) {
            r0 = this;
            r0.<init>()
            r0.requirements = r3
            r0.listener = r2
            android.content.Context r1 = r1.getApplicationContext()
            r0.context = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r2 = " created"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            logd(r1)
            return
    }

    static void access$200(java.lang.String r0) {
            logd(r0)
            return
    }

    static void access$300(com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher r0, boolean r1) {
            r0.checkRequirements(r1)
            return
    }

    private void checkRequirements(boolean r3) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.scheduler.Requirements r0 = r2.requirements
            android.content.Context r1 = r2.context
            boolean r0 = r0.checkRequirements(r1)
            if (r3 != 0) goto L23
            boolean r3 = r2.requirementsWereMet
            if (r0 != r3) goto L23
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "requirementsAreMet is still "
            r3.append(r1)
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            logd(r3)
            return
        L23:
            r2.requirementsWereMet = r0
            if (r0 == 0) goto L32
            java.lang.String r3 = "start job"
            logd(r3)
            com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher$Listener r3 = r2.listener
            r3.requirementsMet(r2)
            goto L3c
        L32:
            java.lang.String r3 = "stop job"
            logd(r3)
            com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher$Listener r3 = r2.listener
            r3.requirementsNotMet(r2)
        L3c:
            return
    }

    private static void logd(java.lang.String r0) {
            return
    }

    private void registerNetworkCallbackV23() {
            r4 = this;
            android.content.Context r0 = r4.context
            java.lang.String r1 = "connectivity"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.net.ConnectivityManager r0 = (android.net.ConnectivityManager) r0
            android.net.NetworkRequest$Builder r1 = new android.net.NetworkRequest$Builder
            r1.<init>()
            r2 = 16
            android.net.NetworkRequest$Builder r1 = r1.addCapability(r2)
            android.net.NetworkRequest r1 = r1.build()
            com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher$CapabilityValidatedCallback r2 = new com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher$CapabilityValidatedCallback
            r3 = 0
            r2.<init>(r4, r3)
            r4.networkCallback = r2
            r0.registerNetworkCallback(r1, r2)
            return
    }

    private void unregisterNetworkCallback() {
            r2 = this;
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 21
            if (r0 < r1) goto L18
            android.content.Context r0 = r2.context
            java.lang.String r1 = "connectivity"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.net.ConnectivityManager r0 = (android.net.ConnectivityManager) r0
            com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher$CapabilityValidatedCallback r1 = r2.networkCallback
            r0.unregisterNetworkCallback(r1)
            r0 = 0
            r2.networkCallback = r0
        L18:
            return
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.scheduler.Requirements getRequirements() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.scheduler.Requirements r0 = r1.requirements
            return r0
    }

    public final void start() {
            r5 = this;
            android.os.Looper r0 = android.os.Looper.myLooper()
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r0)
            r0 = 1
            r5.checkRequirements(r0)
            android.content.IntentFilter r0 = new android.content.IntentFilter
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.scheduler.Requirements r1 = r5.requirements
            int r1 = r1.getRequiredNetworkType()
            r2 = 23
            if (r1 == 0) goto L27
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            if (r1 < r2) goto L22
            r5.registerNetworkCallbackV23()
            goto L27
        L22:
            java.lang.String r1 = "android.net.conn.CONNECTIVITY_CHANGE"
            r0.addAction(r1)
        L27:
            com.mbridge.msdk.playercommon.exoplayer2.scheduler.Requirements r1 = r5.requirements
            boolean r1 = r1.isChargingRequired()
            if (r1 == 0) goto L39
            java.lang.String r1 = "android.intent.action.ACTION_POWER_CONNECTED"
            r0.addAction(r1)
            java.lang.String r1 = "android.intent.action.ACTION_POWER_DISCONNECTED"
            r0.addAction(r1)
        L39:
            com.mbridge.msdk.playercommon.exoplayer2.scheduler.Requirements r1 = r5.requirements
            boolean r1 = r1.isIdleRequired()
            if (r1 == 0) goto L55
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            if (r1 < r2) goto L4b
            java.lang.String r1 = "android.os.action.DEVICE_IDLE_MODE_CHANGED"
            r0.addAction(r1)
            goto L55
        L4b:
            java.lang.String r1 = "android.intent.action.SCREEN_ON"
            r0.addAction(r1)
            java.lang.String r1 = "android.intent.action.SCREEN_OFF"
            r0.addAction(r1)
        L55:
            com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher$DeviceStatusChangeReceiver r1 = new com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher$DeviceStatusChangeReceiver
            r2 = 0
            r1.<init>(r5, r2)
            r5.receiver = r1
            android.content.Context r3 = r5.context
            android.os.Handler r4 = new android.os.Handler
            r4.<init>()
            r3.registerReceiver(r1, r0, r2, r4)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            java.lang.String r1 = " started"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            logd(r0)
            return
    }

    public final void stop() {
            r2 = this;
            android.content.Context r0 = r2.context
            com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher$DeviceStatusChangeReceiver r1 = r2.receiver
            r0.unregisterReceiver(r1)
            r0 = 0
            r2.receiver = r0
            com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher$CapabilityValidatedCallback r0 = r2.networkCallback
            if (r0 == 0) goto L11
            r2.unregisterNetworkCallback()
        L11:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r1 = " stopped"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            logd(r0)
            return
    }

    public final java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = super.toString()
            return r0
    }
}
