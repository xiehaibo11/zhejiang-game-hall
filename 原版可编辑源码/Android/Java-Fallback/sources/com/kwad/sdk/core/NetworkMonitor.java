package com.kwad.sdk.core;

public final class NetworkMonitor {
    private static volatile boolean ake;
    private final java.util.List<com.kwad.sdk.core.NetworkMonitor.a> akf;
    private boolean akg;
    private final android.content.BroadcastReceiver akh;


    enum Holder extends java.lang.Enum<com.kwad.sdk.core.NetworkMonitor.Holder> {
        private static final com.kwad.sdk.core.NetworkMonitor.Holder[] $VALUES = null;
        public static final com.kwad.sdk.core.NetworkMonitor.Holder INSTANCE = null;
        private final com.kwad.sdk.core.NetworkMonitor mInstance;

        static {
                com.kwad.sdk.core.NetworkMonitor$Holder r0 = new com.kwad.sdk.core.NetworkMonitor$Holder
                r1 = 0
                java.lang.String r2 = "INSTANCE"
                r0.<init>(r2, r1)
                com.kwad.sdk.core.NetworkMonitor.Holder.INSTANCE = r0
                r2 = 1
                com.kwad.sdk.core.NetworkMonitor$Holder[] r2 = new com.kwad.sdk.core.NetworkMonitor.Holder[r2]
                r2[r1] = r0
                com.kwad.sdk.core.NetworkMonitor.Holder.$VALUES = r2
                return
        }

        Holder(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                com.kwad.sdk.core.NetworkMonitor r1 = new com.kwad.sdk.core.NetworkMonitor
                r2 = 0
                r1.<init>(r2)
                r0.mInstance = r1
                return
        }

        public static com.kwad.sdk.core.NetworkMonitor.Holder valueOf(java.lang.String r1) {
                java.lang.Class<com.kwad.sdk.core.NetworkMonitor$Holder> r0 = com.kwad.sdk.core.NetworkMonitor.Holder.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.kwad.sdk.core.NetworkMonitor$Holder r1 = (com.kwad.sdk.core.NetworkMonitor.Holder) r1
                return r1
        }

        public static com.kwad.sdk.core.NetworkMonitor.Holder[] values() {
                com.kwad.sdk.core.NetworkMonitor$Holder[] r0 = com.kwad.sdk.core.NetworkMonitor.Holder.$VALUES
                java.lang.Object r0 = r0.clone()
                com.kwad.sdk.core.NetworkMonitor$Holder[] r0 = (com.kwad.sdk.core.NetworkMonitor.Holder[]) r0
                return r0
        }

        final com.kwad.sdk.core.NetworkMonitor getInstance() {
                r1 = this;
                com.kwad.sdk.core.NetworkMonitor r0 = r1.mInstance
                return r0
        }
    }

    public enum NetworkState extends java.lang.Enum<com.kwad.sdk.core.NetworkMonitor.NetworkState> {
        private static final com.kwad.sdk.core.NetworkMonitor.NetworkState[] $VALUES = null;
        public static final com.kwad.sdk.core.NetworkMonitor.NetworkState NETWORK_MOBILE = null;
        public static final com.kwad.sdk.core.NetworkMonitor.NetworkState NETWORK_NONE = null;
        public static final com.kwad.sdk.core.NetworkMonitor.NetworkState NETWORK_WIFI = null;

        static {
                com.kwad.sdk.core.NetworkMonitor$NetworkState r0 = new com.kwad.sdk.core.NetworkMonitor$NetworkState
                r1 = 0
                java.lang.String r2 = "NETWORK_NONE"
                r0.<init>(r2, r1)
                com.kwad.sdk.core.NetworkMonitor.NetworkState.NETWORK_NONE = r0
                com.kwad.sdk.core.NetworkMonitor$NetworkState r0 = new com.kwad.sdk.core.NetworkMonitor$NetworkState
                r2 = 1
                java.lang.String r3 = "NETWORK_MOBILE"
                r0.<init>(r3, r2)
                com.kwad.sdk.core.NetworkMonitor.NetworkState.NETWORK_MOBILE = r0
                com.kwad.sdk.core.NetworkMonitor$NetworkState r0 = new com.kwad.sdk.core.NetworkMonitor$NetworkState
                r3 = 2
                java.lang.String r4 = "NETWORK_WIFI"
                r0.<init>(r4, r3)
                com.kwad.sdk.core.NetworkMonitor.NetworkState.NETWORK_WIFI = r0
                r4 = 3
                com.kwad.sdk.core.NetworkMonitor$NetworkState[] r4 = new com.kwad.sdk.core.NetworkMonitor.NetworkState[r4]
                com.kwad.sdk.core.NetworkMonitor$NetworkState r5 = com.kwad.sdk.core.NetworkMonitor.NetworkState.NETWORK_NONE
                r4[r1] = r5
                com.kwad.sdk.core.NetworkMonitor$NetworkState r1 = com.kwad.sdk.core.NetworkMonitor.NetworkState.NETWORK_MOBILE
                r4[r2] = r1
                r4[r3] = r0
                com.kwad.sdk.core.NetworkMonitor.NetworkState.$VALUES = r4
                return
        }

        NetworkState(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.kwad.sdk.core.NetworkMonitor.NetworkState valueOf(java.lang.String r1) {
                java.lang.Class<com.kwad.sdk.core.NetworkMonitor$NetworkState> r0 = com.kwad.sdk.core.NetworkMonitor.NetworkState.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.kwad.sdk.core.NetworkMonitor$NetworkState r1 = (com.kwad.sdk.core.NetworkMonitor.NetworkState) r1
                return r1
        }

        public static com.kwad.sdk.core.NetworkMonitor.NetworkState[] values() {
                com.kwad.sdk.core.NetworkMonitor$NetworkState[] r0 = com.kwad.sdk.core.NetworkMonitor.NetworkState.$VALUES
                java.lang.Object r0 = r0.clone()
                com.kwad.sdk.core.NetworkMonitor$NetworkState[] r0 = (com.kwad.sdk.core.NetworkMonitor.NetworkState[]) r0
                return r0
        }
    }

    public interface a {
        void a(com.kwad.sdk.core.NetworkMonitor.NetworkState r1);
    }

    static {
            return
    }

    private NetworkMonitor() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r1.akf = r0
            r0 = 0
            r1.akg = r0
            com.kwad.sdk.core.NetworkMonitor$1 r0 = new com.kwad.sdk.core.NetworkMonitor$1
            r0.<init>(r1)
            r1.akh = r0
            return
    }

    NetworkMonitor(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static void a(com.kwad.sdk.core.NetworkMonitor r0, com.kwad.sdk.core.NetworkMonitor.NetworkState r1) {
            r0.b(r1)
            return
    }

    private synchronized void aN(android.content.Context r4) {
            r3 = this;
            monitor-enter(r3)
            boolean r0 = com.kwad.sdk.core.NetworkMonitor.ake     // Catch: java.lang.Throwable -> L25
            if (r0 != 0) goto L23
            if (r4 != 0) goto L8
            goto L23
        L8:
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L1d
            android.content.BroadcastReceiver r0 = r3.akh     // Catch: java.lang.Throwable -> L1d
            android.content.IntentFilter r1 = new android.content.IntentFilter     // Catch: java.lang.Throwable -> L1d
            java.lang.String r2 = "android.net.conn.CONNECTIVITY_CHANGE"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L1d
            r4.registerReceiver(r0, r1)     // Catch: java.lang.Throwable -> L1d
            r4 = 1
            com.kwad.sdk.core.NetworkMonitor.ake = r4     // Catch: java.lang.Throwable -> L1d
            monitor-exit(r3)
            return
        L1d:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r4)     // Catch: java.lang.Throwable -> L25
            monitor-exit(r3)
            return
        L23:
            monitor-exit(r3)
            return
        L25:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    private void b(com.kwad.sdk.core.NetworkMonitor.NetworkState r3) {
            r2 = this;
            java.util.List<com.kwad.sdk.core.NetworkMonitor$a> r0 = r2.akf
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            com.kwad.sdk.core.NetworkMonitor$a r1 = (com.kwad.sdk.core.NetworkMonitor.a) r1
            r1.a(r3)
            goto L6
        L16:
            return
    }

    public static com.kwad.sdk.core.NetworkMonitor getInstance() {
            com.kwad.sdk.core.NetworkMonitor$Holder r0 = com.kwad.sdk.core.NetworkMonitor.Holder.INSTANCE
            com.kwad.sdk.core.NetworkMonitor r0 = r0.getInstance()
            return r0
    }

    public final void a(android.content.Context r1, com.kwad.sdk.core.NetworkMonitor.a r2) {
            r0 = this;
            r0.aN(r1)
            java.util.List<com.kwad.sdk.core.NetworkMonitor$a> r1 = r0.akf
            r1.add(r2)
            return
    }

    public final void a(com.kwad.sdk.core.NetworkMonitor.a r2) {
            r1 = this;
            java.util.List<com.kwad.sdk.core.NetworkMonitor$a> r0 = r1.akf
            r0.remove(r2)
            return
    }
}
