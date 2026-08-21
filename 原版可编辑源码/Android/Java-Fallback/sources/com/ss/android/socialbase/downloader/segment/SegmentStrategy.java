package com.ss.android.socialbase.downloader.segment;

public class SegmentStrategy {
    private static final int MAX_THREAD_COUNT = 16;
    private static final long MIN_CONNECT_TIMEOUT = 2000;
    private static final long MIN_READ_TIMEOUT = 4000;
    private static final long SEGMENT_MIN_INIT_SIZE = 5242880;
    private static final long SEGMENT_MIN_SIZE = 65536;
    public static final java.lang.String TAG = "SegmentStrategy";
    private final org.json.JSONObject config;
    private int threadCount;

    private SegmentStrategy(org.json.JSONObject r1) {
            r0 = this;
            r0.<init>()
            r0.config = r1
            return
    }

    private int calculateThreadCount(int r4) {
            r3 = this;
            org.json.JSONObject r0 = r3.config
            java.lang.String r1 = "thread_count"
            r2 = 4
            int r0 = r0.optInt(r1, r2)
            r1 = 16
            if (r0 <= r1) goto Le
            r0 = r1
        Le:
            r1 = 1
            if (r0 > 0) goto L19
            int r0 = r3.getUrlBalance()
            if (r0 <= 0) goto L18
            return r4
        L18:
            return r1
        L19:
            int r2 = r3.getUrlBalance()
            if (r2 != r1) goto L24
            int r4 = java.lang.Math.min(r0, r4)
            return r4
        L24:
            return r0
    }

    public static com.ss.android.socialbase.downloader.segment.SegmentStrategy from(org.json.JSONObject r1) {
            com.ss.android.socialbase.downloader.segment.SegmentStrategy r0 = new com.ss.android.socialbase.downloader.segment.SegmentStrategy
            r0.<init>(r1)
            return r0
    }

    private int getUrlBalance() {
            r3 = this;
            org.json.JSONObject r0 = r3.config
            java.lang.String r1 = "url_balance"
            r2 = 2
            int r0 = r0.optInt(r1, r2)
            return r0
    }

    public int getBufferCount() {
            r3 = this;
            org.json.JSONObject r0 = r3.config
            java.lang.String r1 = "buffer_count"
            r2 = 512(0x200, float:7.17E-43)
            int r0 = r0.optInt(r1, r2)
            return r0
    }

    public int getBufferSize() {
            r3 = this;
            org.json.JSONObject r0 = r3.config
            java.lang.String r1 = "buffer_size"
            r2 = 8192(0x2000, float:1.148E-41)
            int r0 = r0.optInt(r1, r2)
            return r0
    }

    public long getConnectTimeout() {
            r4 = this;
            org.json.JSONObject r0 = r4.config
            java.lang.String r1 = "connect_timeout"
            r2 = -1
            int r0 = r0.optInt(r1, r2)
            long r0 = (long) r0
            r2 = 2000(0x7d0, double:9.88E-321)
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 < 0) goto L11
            return r0
        L11:
            r0 = -1
            return r0
    }

    public int getIpStrategy() {
            r3 = this;
            org.json.JSONObject r0 = r3.config
            java.lang.String r1 = "ip_strategy"
            r2 = 0
            int r0 = r0.optInt(r1, r2)
            return r0
    }

    public float getMainRatio() {
            r4 = this;
            org.json.JSONObject r0 = r4.config
            java.lang.String r1 = "main_ratio"
            r2 = 0
            double r0 = r0.optDouble(r1, r2)
            float r0 = (float) r0
            return r0
    }

    public float getPoorSpeedRatio() {
            r4 = this;
            org.json.JSONObject r0 = r4.config
            java.lang.String r1 = "poor_speed_ratio"
            r2 = 0
            double r0 = r0.optDouble(r1, r2)
            float r0 = (float) r0
            r1 = 0
            float r0 = java.lang.Math.max(r1, r0)
            r1 = 1065353216(0x3f800000, float:1.0)
            float r0 = java.lang.Math.min(r0, r1)
            return r0
    }

    public int getRatioSegmentStrategy() {
            r3 = this;
            org.json.JSONObject r0 = r3.config
            java.lang.String r1 = "ratio_segment"
            r2 = 0
            int r0 = r0.optInt(r1, r2)
            return r0
    }

    public long getReadTimeout() {
            r4 = this;
            org.json.JSONObject r0 = r4.config
            java.lang.String r1 = "read_timeout"
            r2 = -1
            int r0 = r0.optInt(r1, r2)
            long r0 = (long) r0
            r2 = 4000(0xfa0, double:1.9763E-320)
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 < 0) goto L11
            return r0
        L11:
            r0 = -1
            return r0
    }

    public long getSegmentMaxSize() {
            r4 = this;
            org.json.JSONObject r0 = r4.config
            java.lang.String r1 = "segment_max_kb"
            r2 = 0
            int r0 = r0.optInt(r1, r2)
            long r0 = (long) r0
            r2 = 1048576(0x100000, double:5.180654E-318)
            long r0 = r0 * r2
            long r2 = r4.getSegmentMinSize()
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 >= 0) goto L18
            r0 = -1
        L18:
            return r0
    }

    public long getSegmentMinInitSize() {
            r5 = this;
            org.json.JSONObject r0 = r5.config
            java.lang.String r1 = "segment_min_init_mb"
            r2 = 10
            int r0 = r0.optInt(r1, r2)
            long r0 = (long) r0
            r2 = 1048576(0x100000, double:5.180654E-318)
            long r0 = r0 * r2
            r2 = 5242880(0x500000, double:2.590327E-317)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 >= 0) goto L17
            r0 = r2
        L17:
            return r0
    }

    public long getSegmentMinSize() {
            r5 = this;
            org.json.JSONObject r0 = r5.config
            java.lang.String r1 = "segment_min_kb"
            r2 = 512(0x200, float:7.17E-43)
            int r0 = r0.optInt(r1, r2)
            long r0 = (long) r0
            r2 = 1024(0x400, double:5.06E-321)
            long r0 = r0 * r2
            r2 = 65536(0x10000, double:3.2379E-319)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 >= 0) goto L16
            r0 = r2
        L16:
            return r0
    }

    public int getThreadCount() {
            r1 = this;
            int r0 = r1.threadCount
            return r0
    }

    public boolean segmentOneByOne() {
            r3 = this;
            org.json.JSONObject r0 = r3.config
            r1 = 1
            java.lang.String r2 = "segment_mode"
            int r0 = r0.optInt(r2, r1)
            if (r0 != 0) goto Lc
            goto Ld
        Lc:
            r1 = 0
        Ld:
            return r1
    }

    public void updateUrlCount(int r1) {
            r0 = this;
            int r1 = r0.calculateThreadCount(r1)
            r0.threadCount = r1
            return
    }

    public boolean urlBalance() {
            r1 = this;
            int r0 = r1.getUrlBalance()
            if (r0 <= 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public boolean urlBalanceStrictly() {
            r2 = this;
            int r0 = r2.getUrlBalance()
            r1 = 1
            if (r0 != r1) goto L8
            goto L9
        L8:
            r1 = 0
        L9:
            return r1
    }
}
