package com.bianfeng.seppellita.utils;

public class TimeUtils {
    private volatile int DEFAULT_INTERVAL_DAY;
    private volatile int DEFAULT_INTERVAL_TIME;
    private volatile int DEFAULT_OFFSET_TIME;
    private volatile long enterTime;
    private volatile int interval_day;
    private volatile int interval_time;
    private volatile int mexPageSize;
    private volatile long offsetTime;
    private volatile long onLineTime;

    public TimeUtils() {
            r4 = this;
            r4.<init>()
            r0 = 60000(0xea60, float:8.4078E-41)
            r4.DEFAULT_INTERVAL_TIME = r0
            r0 = 0
            r4.DEFAULT_OFFSET_TIME = r0
            r1 = 7
            r4.DEFAULT_INTERVAL_DAY = r1
            r2 = 0
            r4.enterTime = r2
            r4.onLineTime = r2
            r4.interval_day = r1
            r4.offsetTime = r2
            r4.interval_time = r0
            r0 = 1048576(0x100000, float:1.469368E-39)
            r4.mexPageSize = r0
            long r0 = r4.getCurrentTime()
            r4.enterTime = r0
            return
    }

    private void setDefaule() {
            r2 = this;
            int r0 = r2.DEFAULT_INTERVAL_DAY
            r2.interval_day = r0
            int r0 = r2.DEFAULT_OFFSET_TIME
            long r0 = (long) r0
            r2.offsetTime = r0
            int r0 = r2.DEFAULT_INTERVAL_TIME
            r2.interval_time = r0
            return
    }

    public long getCurrentTime() {
            r2 = this;
            long r0 = java.lang.System.currentTimeMillis()
            return r0
    }

    public java.lang.String getCurrentTimeFormat() {
            r3 = this;
            java.util.Date r0 = new java.util.Date
            r0.<init>()
            java.text.SimpleDateFormat r1 = new java.text.SimpleDateFormat
            java.lang.String r2 = "yyyy-MM-dd"
            r1.<init>(r2)
            java.lang.String r0 = r1.format(r0)
            return r0
    }

    public long getIntervalPostTime() {
            r2 = this;
            int r0 = r2.interval_time
            if (r0 == 0) goto L8
            int r0 = r2.interval_time
        L6:
            long r0 = (long) r0
            return r0
        L8:
            int r0 = r2.DEFAULT_INTERVAL_TIME
            goto L6
    }

    public java.lang.String getIntervalSelectTime() {
            r1 = this;
            int r0 = r1.interval_day
            java.lang.String r0 = r1.getLastTime(r0)
            return r0
    }

    public java.lang.String getLastMonthTime() {
            r1 = this;
            r0 = 30
            java.lang.String r0 = r1.getLastTime(r0)
            return r0
    }

    public java.lang.String getLastTime(int r3) {
            r2 = this;
            java.util.Calendar r0 = java.util.Calendar.getInstance()
            int r3 = -r3
            r1 = 5
            r0.add(r1, r3)
            java.text.SimpleDateFormat r3 = new java.text.SimpleDateFormat
            java.lang.String r1 = "yyyy-MM-dd"
            r3.<init>(r1)
            java.util.Date r0 = r0.getTime()
            java.lang.String r3 = r3.format(r0)
            return r3
    }

    public synchronized long getOffsetTime() {
            r4 = this;
            monitor-enter(r4)
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> La
            long r2 = r4.offsetTime     // Catch: java.lang.Throwable -> La
            long r0 = r0 - r2
            monitor-exit(r4)
            return r0
        La:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    public long getOnLineTime() {
            r2 = this;
            long r0 = r2.onLineTime
            return r0
    }

    public void onPause() {
            r4 = this;
            long r0 = r4.getCurrentTime()
            long r2 = r4.enterTime
            long r0 = r0 - r2
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 / r2
            r4.onLineTime = r0
            return
    }

    public void onResume() {
            r2 = this;
            long r0 = r2.getCurrentTime()
            r2.enterTime = r0
            return
    }

    public void setInit(com.bianfeng.seppellita.bean.InitBean.DataBean r5) {
            r4 = this;
            if (r5 == 0) goto L1a
            int r0 = r5.getValid_day()
            r4.interval_day = r0
            long r0 = r4.getCurrentTime()
            long r2 = r5.getTime()
            long r0 = r0 - r2
            r4.offsetTime = r0
            int r5 = r5.getInterval()
            r4.interval_time = r5
            goto L1d
        L1a:
            r4.setDefaule()
        L1d:
            return
    }
}
