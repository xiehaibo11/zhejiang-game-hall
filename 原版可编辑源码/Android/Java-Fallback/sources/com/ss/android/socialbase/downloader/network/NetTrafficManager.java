package com.ss.android.socialbase.downloader.network;

public class NetTrafficManager {
    private static final long BANDWIDTH_LOWER_BOUND = 3;
    private static final int BYTES_TO_BITS = 8;
    private static final double DEFAULT_DECAY_CONSTANT = 0.05d;
    private static final int DEFAULT_GOOD_BANDWIDTH = 2000;
    private static final long DEFAULT_HYSTERESIS_PERCENT = 20;
    private static final int DEFAULT_MODERATE_BANDWIDTH = 550;
    private static final int DEFAULT_POOR_BANDWIDTH = 150;
    private static final double DEFAULT_SAMPLES_TO_QUALITY_CHANGE = 5.0d;
    private static final double HYSTERESIS_BOTTOM_MULTIPLIER = 0.8d;
    private static final double HYSTERESIS_TOP_MULTIPLIER = 1.25d;
    private static final java.lang.String TAG = null;
    private final java.util.concurrent.atomic.AtomicReference<com.ss.android.socialbase.downloader.network.NetworkQuality> currentNetworkQuality;
    private volatile boolean initiateStateChange;
    private final java.util.ArrayList<com.ss.android.socialbase.downloader.network.NetTrafficManager.NetworkStateChangeListener> listenerList;
    private final com.ss.android.socialbase.downloader.network.ExponentialGeometricAverage mDownloadBandwidth;
    private java.util.concurrent.atomic.AtomicReference<com.ss.android.socialbase.downloader.network.NetworkQuality> nextNetworkQuality;
    private int sampleCount;

    static class 1 {
        static final int[] $SwitchMap$com$ss$android$socialbase$downloader$network$NetworkQuality = null;

        static {
                com.ss.android.socialbase.downloader.network.NetworkQuality[] r0 = com.ss.android.socialbase.downloader.network.NetworkQuality.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.ss.android.socialbase.downloader.network.NetTrafficManager.1.$SwitchMap$com$ss$android$socialbase$downloader$network$NetworkQuality = r0
                com.ss.android.socialbase.downloader.network.NetworkQuality r1 = com.ss.android.socialbase.downloader.network.NetworkQuality.POOR     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.ss.android.socialbase.downloader.network.NetTrafficManager.1.$SwitchMap$com$ss$android$socialbase$downloader$network$NetworkQuality     // Catch: java.lang.NoSuchFieldError -> L1d
                com.ss.android.socialbase.downloader.network.NetworkQuality r1 = com.ss.android.socialbase.downloader.network.NetworkQuality.MODERATE     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.ss.android.socialbase.downloader.network.NetTrafficManager.1.$SwitchMap$com$ss$android$socialbase$downloader$network$NetworkQuality     // Catch: java.lang.NoSuchFieldError -> L28
                com.ss.android.socialbase.downloader.network.NetworkQuality r1 = com.ss.android.socialbase.downloader.network.NetworkQuality.GOOD     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.ss.android.socialbase.downloader.network.NetTrafficManager.1.$SwitchMap$com$ss$android$socialbase$downloader$network$NetworkQuality     // Catch: java.lang.NoSuchFieldError -> L33
                com.ss.android.socialbase.downloader.network.NetworkQuality r1 = com.ss.android.socialbase.downloader.network.NetworkQuality.EXCELLENT     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                return
        }
    }

    private static class ConnectionClassManagerHolder {
        public static final com.ss.android.socialbase.downloader.network.NetTrafficManager instance = null;

        static {
                com.ss.android.socialbase.downloader.network.NetTrafficManager r0 = new com.ss.android.socialbase.downloader.network.NetTrafficManager
                r1 = 0
                r0.<init>(r1)
                com.ss.android.socialbase.downloader.network.NetTrafficManager.ConnectionClassManagerHolder.instance = r0
                return
        }

        private ConnectionClassManagerHolder() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public interface NetworkStateChangeListener {
        void onBandwidthStateChange(com.ss.android.socialbase.downloader.network.NetworkQuality r1);
    }

    static {
            java.lang.Class<com.ss.android.socialbase.downloader.network.NetTrafficManager> r0 = com.ss.android.socialbase.downloader.network.NetTrafficManager.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.socialbase.downloader.network.NetTrafficManager.TAG = r0
            return
    }

    private NetTrafficManager() {
            r3 = this;
            r3.<init>()
            com.ss.android.socialbase.downloader.network.ExponentialGeometricAverage r0 = new com.ss.android.socialbase.downloader.network.ExponentialGeometricAverage
            r1 = 4587366580439587226(0x3fa999999999999a, double:0.05)
            r0.<init>(r1)
            r3.mDownloadBandwidth = r0
            r0 = 0
            r3.initiateStateChange = r0
            java.util.concurrent.atomic.AtomicReference r0 = new java.util.concurrent.atomic.AtomicReference
            com.ss.android.socialbase.downloader.network.NetworkQuality r1 = com.ss.android.socialbase.downloader.network.NetworkQuality.UNKNOWN
            r0.<init>(r1)
            r3.currentNetworkQuality = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r3.listenerList = r0
            return
    }

    NetTrafficManager(com.ss.android.socialbase.downloader.network.NetTrafficManager.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.ss.android.socialbase.downloader.network.NetTrafficManager getInstance() {
            com.ss.android.socialbase.downloader.network.NetTrafficManager r0 = com.ss.android.socialbase.downloader.network.NetTrafficManager.ConnectionClassManagerHolder.instance
            return r0
    }

    private com.ss.android.socialbase.downloader.network.NetworkQuality mapBandwidthQuality(double r3) {
            r2 = this;
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 >= 0) goto L9
            com.ss.android.socialbase.downloader.network.NetworkQuality r3 = com.ss.android.socialbase.downloader.network.NetworkQuality.UNKNOWN
            return r3
        L9:
            r0 = 4639481672377565184(0x4062c00000000000, double:150.0)
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 >= 0) goto L15
            com.ss.android.socialbase.downloader.network.NetworkQuality r3 = com.ss.android.socialbase.downloader.network.NetworkQuality.POOR
            return r3
        L15:
            r0 = 4648049066981195776(0x4081300000000000, double:550.0)
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 >= 0) goto L21
            com.ss.android.socialbase.downloader.network.NetworkQuality r3 = com.ss.android.socialbase.downloader.network.NetworkQuality.MODERATE
            return r3
        L21:
            r0 = 4656510908468559872(0x409f400000000000, double:2000.0)
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 >= 0) goto L2d
            com.ss.android.socialbase.downloader.network.NetworkQuality r3 = com.ss.android.socialbase.downloader.network.NetworkQuality.GOOD
            return r3
        L2d:
            com.ss.android.socialbase.downloader.network.NetworkQuality r3 = com.ss.android.socialbase.downloader.network.NetworkQuality.EXCELLENT
            return r3
    }

    private void notifyListeners() {
            r4 = this;
            java.util.ArrayList<com.ss.android.socialbase.downloader.network.NetTrafficManager$NetworkStateChangeListener> r0 = r4.listenerList     // Catch: java.lang.Throwable -> L1f
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L1f
            r1 = 0
        L7:
            if (r1 >= r0) goto L23
            java.util.ArrayList<com.ss.android.socialbase.downloader.network.NetTrafficManager$NetworkStateChangeListener> r2 = r4.listenerList     // Catch: java.lang.Throwable -> L1f
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Throwable -> L1f
            com.ss.android.socialbase.downloader.network.NetTrafficManager$NetworkStateChangeListener r2 = (com.ss.android.socialbase.downloader.network.NetTrafficManager.NetworkStateChangeListener) r2     // Catch: java.lang.Throwable -> L1f
            java.util.concurrent.atomic.AtomicReference<com.ss.android.socialbase.downloader.network.NetworkQuality> r3 = r4.currentNetworkQuality     // Catch: java.lang.Throwable -> L1f
            java.lang.Object r3 = r3.get()     // Catch: java.lang.Throwable -> L1f
            com.ss.android.socialbase.downloader.network.NetworkQuality r3 = (com.ss.android.socialbase.downloader.network.NetworkQuality) r3     // Catch: java.lang.Throwable -> L1f
            r2.onBandwidthStateChange(r3)     // Catch: java.lang.Throwable -> L1f
            int r1 = r1 + 1
            goto L7
        L1f:
            r0 = move-exception
            r0.printStackTrace()
        L23:
            return
    }

    private boolean significantlyOutsideCurrentBand() {
            r12 = this;
            com.ss.android.socialbase.downloader.network.ExponentialGeometricAverage r0 = r12.mDownloadBandwidth
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            java.util.concurrent.atomic.AtomicReference<com.ss.android.socialbase.downloader.network.NetworkQuality> r0 = r12.currentNetworkQuality     // Catch: java.lang.Throwable -> L5f
            java.lang.Object r0 = r0.get()     // Catch: java.lang.Throwable -> L5f
            com.ss.android.socialbase.downloader.network.NetworkQuality r0 = (com.ss.android.socialbase.downloader.network.NetworkQuality) r0     // Catch: java.lang.Throwable -> L5f
            int[] r2 = com.ss.android.socialbase.downloader.network.NetTrafficManager.1.$SwitchMap$com$ss$android$socialbase$downloader$network$NetworkQuality     // Catch: java.lang.Throwable -> L5f
            int r0 = r0.ordinal()     // Catch: java.lang.Throwable -> L5f
            r0 = r2[r0]     // Catch: java.lang.Throwable -> L5f
            r2 = 4656510908468559872(0x409f400000000000, double:2000.0)
            r4 = 4648049066981195776(0x4081300000000000, double:550.0)
            r6 = 4639481672377565184(0x4062c00000000000, double:150.0)
            r8 = 1
            if (r0 == r8) goto L3e
            r9 = 2
            if (r0 == r9) goto L3b
            r6 = 3
            if (r0 == r6) goto L42
            r4 = 4
            if (r0 == r4) goto L32
            return r8
        L32:
            r4 = 5183643170566569984(0x47efffffe0000000, double:3.4028234663852886E38)
            r10 = r2
            r2 = r4
            r4 = r10
            goto L42
        L3b:
            r2 = r4
            r4 = r6
            goto L42
        L3e:
            r2 = 0
            r4 = r2
            r2 = r6
        L42:
            com.ss.android.socialbase.downloader.network.ExponentialGeometricAverage r0 = r12.mDownloadBandwidth     // Catch: java.lang.Throwable -> L5f
            double r6 = r0.getAverage()     // Catch: java.lang.Throwable -> L5f
            int r0 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r0 <= 0) goto L54
            r4 = 4608308318706860032(0x3ff4000000000000, double:1.25)
            double r2 = r2 * r4
            int r0 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r0 <= 0) goto L63
            return r8
        L54:
            r2 = 4605380978949069210(0x3fe999999999999a, double:0.8)
            double r4 = r4 * r2
            int r0 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r0 >= 0) goto L63
            return r8
        L5f:
            r0 = move-exception
            r0.printStackTrace()
        L63:
            return r1
    }

    public synchronized void addBandwidth(long r3, long r5) {
            r2 = this;
            monitor-enter(r2)
            double r3 = (double) r3
            r0 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r3 = r3 * r0
            double r0 = (double) r5
            double r3 = r3 / r0
            r0 = 4620693217682128896(0x4020000000000000, double:8.0)
            double r3 = r3 * r0
            r0 = 0
            int r5 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r5 == 0) goto L6d
            r5 = 4613937818241073152(0x4008000000000000, double:3.0)
            int r5 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r5 >= 0) goto L17
            goto L6d
        L17:
            com.ss.android.socialbase.downloader.network.ExponentialGeometricAverage r5 = r2.mDownloadBandwidth     // Catch: java.lang.Throwable -> L6b
            r5.addMeasurement(r3)     // Catch: java.lang.Throwable -> L6b
            com.ss.android.socialbase.downloader.network.NetworkQuality r3 = r2.getCurrentNetworkQuality()     // Catch: java.lang.Throwable -> L6b
            boolean r4 = r2.initiateStateChange     // Catch: java.lang.Throwable -> L6b
            r5 = 1
            if (r4 == 0) goto L5a
            int r4 = r2.sampleCount     // Catch: java.lang.Throwable -> L6b
            int r4 = r4 + r5
            r2.sampleCount = r4     // Catch: java.lang.Throwable -> L6b
            java.util.concurrent.atomic.AtomicReference<com.ss.android.socialbase.downloader.network.NetworkQuality> r4 = r2.nextNetworkQuality     // Catch: java.lang.Throwable -> L6b
            java.lang.Object r4 = r4.get()     // Catch: java.lang.Throwable -> L6b
            r6 = 0
            if (r3 == r4) goto L37
            r2.initiateStateChange = r6     // Catch: java.lang.Throwable -> L6b
            r2.sampleCount = r5     // Catch: java.lang.Throwable -> L6b
        L37:
            int r3 = r2.sampleCount     // Catch: java.lang.Throwable -> L6b
            double r3 = (double) r3     // Catch: java.lang.Throwable -> L6b
            r0 = 4617315517961601024(0x4014000000000000, double:5.0)
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 < 0) goto L58
            boolean r3 = r2.significantlyOutsideCurrentBand()     // Catch: java.lang.Throwable -> L6b
            if (r3 == 0) goto L58
            r2.initiateStateChange = r6     // Catch: java.lang.Throwable -> L6b
            r2.sampleCount = r5     // Catch: java.lang.Throwable -> L6b
            java.util.concurrent.atomic.AtomicReference<com.ss.android.socialbase.downloader.network.NetworkQuality> r3 = r2.currentNetworkQuality     // Catch: java.lang.Throwable -> L6b
            java.util.concurrent.atomic.AtomicReference<com.ss.android.socialbase.downloader.network.NetworkQuality> r4 = r2.nextNetworkQuality     // Catch: java.lang.Throwable -> L6b
            java.lang.Object r4 = r4.get()     // Catch: java.lang.Throwable -> L6b
            r3.set(r4)     // Catch: java.lang.Throwable -> L6b
            r2.notifyListeners()     // Catch: java.lang.Throwable -> L6b
        L58:
            monitor-exit(r2)
            return
        L5a:
            java.util.concurrent.atomic.AtomicReference<com.ss.android.socialbase.downloader.network.NetworkQuality> r4 = r2.currentNetworkQuality     // Catch: java.lang.Throwable -> L6b
            java.lang.Object r4 = r4.get()     // Catch: java.lang.Throwable -> L6b
            if (r4 == r3) goto L6b
            r2.initiateStateChange = r5     // Catch: java.lang.Throwable -> L6b
            java.util.concurrent.atomic.AtomicReference r4 = new java.util.concurrent.atomic.AtomicReference     // Catch: java.lang.Throwable -> L6b
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L6b
            r2.nextNetworkQuality = r4     // Catch: java.lang.Throwable -> L6b
        L6b:
            monitor-exit(r2)
            return
        L6d:
            monitor-exit(r2)
            return
    }

    public synchronized com.ss.android.socialbase.downloader.network.NetworkQuality getCurrentNetworkQuality() {
            r2 = this;
            monitor-enter(r2)
            com.ss.android.socialbase.downloader.network.ExponentialGeometricAverage r0 = r2.mDownloadBandwidth     // Catch: java.lang.Throwable -> L1d
            if (r0 != 0) goto L9
            com.ss.android.socialbase.downloader.network.NetworkQuality r0 = com.ss.android.socialbase.downloader.network.NetworkQuality.UNKNOWN     // Catch: java.lang.Throwable -> L1d
            monitor-exit(r2)
            return r0
        L9:
            com.ss.android.socialbase.downloader.network.ExponentialGeometricAverage r0 = r2.mDownloadBandwidth     // Catch: java.lang.Throwable -> L15
            double r0 = r0.getAverage()     // Catch: java.lang.Throwable -> L15
            com.ss.android.socialbase.downloader.network.NetworkQuality r0 = r2.mapBandwidthQuality(r0)     // Catch: java.lang.Throwable -> L15
            monitor-exit(r2)
            return r0
        L15:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L1d
            com.ss.android.socialbase.downloader.network.NetworkQuality r0 = com.ss.android.socialbase.downloader.network.NetworkQuality.UNKNOWN     // Catch: java.lang.Throwable -> L1d
            monitor-exit(r2)
            return r0
        L1d:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public synchronized double getDownloadKBitsPerSecond() {
            r2 = this;
            monitor-enter(r2)
            com.ss.android.socialbase.downloader.network.ExponentialGeometricAverage r0 = r2.mDownloadBandwidth     // Catch: java.lang.Throwable -> L10
            if (r0 != 0) goto L8
            r0 = -4616189618054758400(0xbff0000000000000, double:-1.0)
            goto Le
        L8:
            com.ss.android.socialbase.downloader.network.ExponentialGeometricAverage r0 = r2.mDownloadBandwidth     // Catch: java.lang.Throwable -> L10
            double r0 = r0.getAverage()     // Catch: java.lang.Throwable -> L10
        Le:
            monitor-exit(r2)
            return r0
        L10:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public com.ss.android.socialbase.downloader.network.NetworkQuality register(com.ss.android.socialbase.downloader.network.NetTrafficManager.NetworkStateChangeListener r2) {
            r1 = this;
            if (r2 == 0) goto L7
            java.util.ArrayList<com.ss.android.socialbase.downloader.network.NetTrafficManager$NetworkStateChangeListener> r0 = r1.listenerList
            r0.add(r2)
        L7:
            java.util.concurrent.atomic.AtomicReference<com.ss.android.socialbase.downloader.network.NetworkQuality> r2 = r1.currentNetworkQuality
            java.lang.Object r2 = r2.get()
            com.ss.android.socialbase.downloader.network.NetworkQuality r2 = (com.ss.android.socialbase.downloader.network.NetworkQuality) r2
            return r2
    }

    public void remove(com.ss.android.socialbase.downloader.network.NetTrafficManager.NetworkStateChangeListener r2) {
            r1 = this;
            if (r2 == 0) goto L7
            java.util.ArrayList<com.ss.android.socialbase.downloader.network.NetTrafficManager$NetworkStateChangeListener> r0 = r1.listenerList
            r0.remove(r2)
        L7:
            return
    }

    public void reset() {
            r2 = this;
            com.ss.android.socialbase.downloader.network.ExponentialGeometricAverage r0 = r2.mDownloadBandwidth     // Catch: java.lang.Throwable -> L11
            if (r0 == 0) goto L9
            com.ss.android.socialbase.downloader.network.ExponentialGeometricAverage r0 = r2.mDownloadBandwidth     // Catch: java.lang.Throwable -> L11
            r0.reset()     // Catch: java.lang.Throwable -> L11
        L9:
            java.util.concurrent.atomic.AtomicReference<com.ss.android.socialbase.downloader.network.NetworkQuality> r0 = r2.currentNetworkQuality     // Catch: java.lang.Throwable -> L11
            com.ss.android.socialbase.downloader.network.NetworkQuality r1 = com.ss.android.socialbase.downloader.network.NetworkQuality.UNKNOWN     // Catch: java.lang.Throwable -> L11
            r0.set(r1)     // Catch: java.lang.Throwable -> L11
            goto L15
        L11:
            r0 = move-exception
            r0.printStackTrace()
        L15:
            return
    }
}
