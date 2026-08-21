package com.ss.android.socialbase.downloader.network;

public class DeviceBandwidthSampler {
    private static final java.lang.String TAG = null;
    private static volatile com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler instance;
    public static volatile boolean isWifi;
    private static long sPreviousBytes;
    private final com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler.SamplingHandler mHandler;
    private long mLastTimeReading;
    private final com.ss.android.socialbase.downloader.network.NetTrafficManager mNetTrafficManager;
    private final java.util.concurrent.atomic.AtomicInteger mSamplingCounter;

    private class SamplingHandler extends android.os.Handler {
        private static final int MSG_START = 1;
        static final long SAMPLE_TIME = 1000;
        final com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler this$0;

        public SamplingHandler(com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler r1, android.os.Looper r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r2)
                return
        }

        @Override
        public void handleMessage(android.os.Message r4) {
                r3 = this;
                int r4 = r4.what
                r0 = 1
                if (r4 == r0) goto L6
                goto L10
            L6:
                com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler r4 = r3.this$0
                r4.addSample()
                r1 = 1000(0x3e8, double:4.94E-321)
                r3.sendEmptyMessageDelayed(r0, r1)
            L10:
                return
        }

        public void startSamplingThread() {
                r1 = this;
                r0 = 1
                r1.sendEmptyMessage(r0)
                return
        }

        public void stopSamplingThread() {
                r1 = this;
                r0 = 1
                r1.removeMessages(r0)
                return
        }
    }

    static {
            java.lang.Class<com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler> r0 = com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler.TAG = r0
            r0 = -1
            com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler.sPreviousBytes = r0
            r0 = 0
            com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler.instance = r0
            return
    }

    private DeviceBandwidthSampler() {
            r2 = this;
            r2.<init>()
            com.ss.android.socialbase.downloader.network.NetTrafficManager r0 = com.ss.android.socialbase.downloader.network.NetTrafficManager.getInstance()
            r2.mNetTrafficManager = r0
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r0.<init>()
            r2.mSamplingCounter = r0
            com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler$SamplingHandler r0 = new com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler$SamplingHandler
            android.os.Looper r1 = com.ss.android.socialbase.downloader.thread.DownloadWatchDog.getThreadLooper()
            r0.<init>(r2, r1)
            r2.mHandler = r0
            return
    }

    public static long getAllRxBytesWifi() {
            long r0 = android.net.TrafficStats.getTotalRxBytes()
            long r2 = android.net.TrafficStats.getMobileRxBytes()
            long r0 = r0 - r2
            return r0
    }

    public static com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler getInstance() {
            com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler r0 = com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler.instance
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler> r0 = com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler.class
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler r1 = com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler.instance     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler r1 = new com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler.instance = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler r0 = com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler.instance
            return r0
    }

    public static void updateWifiStatus() {
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isWifi(r0)
            com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler.isWifi = r0
            return
    }

    protected void addFinalSample() {
            r2 = this;
            r2.addSample()
            r0 = -1
            com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler.sPreviousBytes = r0
            return
    }

    protected void addSample() {
            r9 = this;
            updateWifiStatus()     // Catch: java.lang.Exception -> L34
            boolean r0 = com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler.isWifi     // Catch: java.lang.Exception -> L34
            if (r0 == 0) goto Lc
            long r0 = getAllRxBytesWifi()     // Catch: java.lang.Exception -> L34
            goto L10
        Lc:
            long r0 = android.net.TrafficStats.getMobileRxBytes()     // Catch: java.lang.Exception -> L34
        L10:
            long r2 = com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler.sPreviousBytes     // Catch: java.lang.Exception -> L34
            long r2 = r0 - r2
            long r4 = com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler.sPreviousBytes     // Catch: java.lang.Exception -> L34
            r6 = 0
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 < 0) goto L31
            monitor-enter(r9)     // Catch: java.lang.Exception -> L34
            long r4 = android.os.SystemClock.uptimeMillis()     // Catch: java.lang.Throwable -> L2e
            com.ss.android.socialbase.downloader.network.NetTrafficManager r6 = r9.mNetTrafficManager     // Catch: java.lang.Throwable -> L2e
            long r7 = r9.mLastTimeReading     // Catch: java.lang.Throwable -> L2e
            long r7 = r4 - r7
            r6.addBandwidth(r2, r7)     // Catch: java.lang.Throwable -> L2e
            r9.mLastTimeReading = r4     // Catch: java.lang.Throwable -> L2e
            monitor-exit(r9)     // Catch: java.lang.Throwable -> L2e
            goto L31
        L2e:
            r0 = move-exception
            monitor-exit(r9)     // Catch: java.lang.Throwable -> L2e
            throw r0     // Catch: java.lang.Exception -> L34
        L31:
            com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler.sPreviousBytes = r0     // Catch: java.lang.Exception -> L34
            goto L38
        L34:
            r0 = move-exception
            r0.printStackTrace()
        L38:
            return
    }

    public boolean isSampling() {
            r1 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r1.mSamplingCounter
            int r0 = r0.get()
            if (r0 == 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    public void startSampling() {
            r3 = this;
            java.lang.String r0 = com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler.TAG     // Catch: java.lang.Throwable -> L2b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2b
            r1.<init>()     // Catch: java.lang.Throwable -> L2b
            java.lang.String r2 = "startSampling: mSamplingCounter = "
            r1.append(r2)     // Catch: java.lang.Throwable -> L2b
            java.util.concurrent.atomic.AtomicInteger r2 = r3.mSamplingCounter     // Catch: java.lang.Throwable -> L2b
            r1.append(r2)     // Catch: java.lang.Throwable -> L2b
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L2b
            com.ss.android.socialbase.downloader.logger.Logger.i(r0, r1)     // Catch: java.lang.Throwable -> L2b
            java.util.concurrent.atomic.AtomicInteger r0 = r3.mSamplingCounter     // Catch: java.lang.Throwable -> L2b
            int r0 = r0.getAndIncrement()     // Catch: java.lang.Throwable -> L2b
            if (r0 != 0) goto L2b
            com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler$SamplingHandler r0 = r3.mHandler     // Catch: java.lang.Throwable -> L2b
            r0.startSamplingThread()     // Catch: java.lang.Throwable -> L2b
            long r0 = android.os.SystemClock.uptimeMillis()     // Catch: java.lang.Throwable -> L2b
            r3.mLastTimeReading = r0     // Catch: java.lang.Throwable -> L2b
        L2b:
            return
    }

    public void stopSampling() {
            r3 = this;
            java.lang.String r0 = com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler.TAG     // Catch: java.lang.Throwable -> L28
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L28
            r1.<init>()     // Catch: java.lang.Throwable -> L28
            java.lang.String r2 = "stopSampling: mSamplingCounter = "
            r1.append(r2)     // Catch: java.lang.Throwable -> L28
            java.util.concurrent.atomic.AtomicInteger r2 = r3.mSamplingCounter     // Catch: java.lang.Throwable -> L28
            r1.append(r2)     // Catch: java.lang.Throwable -> L28
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L28
            com.ss.android.socialbase.downloader.logger.Logger.i(r0, r1)     // Catch: java.lang.Throwable -> L28
            java.util.concurrent.atomic.AtomicInteger r0 = r3.mSamplingCounter     // Catch: java.lang.Throwable -> L28
            int r0 = r0.decrementAndGet()     // Catch: java.lang.Throwable -> L28
            if (r0 != 0) goto L28
            com.ss.android.socialbase.downloader.network.DeviceBandwidthSampler$SamplingHandler r0 = r3.mHandler     // Catch: java.lang.Throwable -> L28
            r0.stopSamplingThread()     // Catch: java.lang.Throwable -> L28
            r3.addFinalSample()     // Catch: java.lang.Throwable -> L28
        L28:
            return
    }
}
