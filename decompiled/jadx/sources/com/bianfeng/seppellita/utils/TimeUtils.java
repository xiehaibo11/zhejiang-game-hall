package com.bianfeng.seppellita.utils;

import com.bianfeng.seppellita.bean.InitBean;
import com.ss.android.download.api.constant.BaseConstants;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;

/* JADX INFO: loaded from: classes.dex */
public class TimeUtils {
    private volatile long enterTime;
    private volatile int DEFAULT_INTERVAL_TIME = BaseConstants.Time.MINUTE;
    private volatile int DEFAULT_OFFSET_TIME = 0;
    private volatile int DEFAULT_INTERVAL_DAY = 7;
    private volatile long onLineTime = 0;
    private volatile int interval_day = 7;
    private volatile long offsetTime = 0;
    private volatile int interval_time = 0;
    private volatile int mexPageSize = 1048576;

    public TimeUtils() {
        this.enterTime = 0L;
        this.enterTime = getCurrentTime();
    }

    public void setInit(InitBean.DataBean dataBean) {
        if (dataBean != null) {
            this.interval_day = dataBean.getValid_day();
            this.offsetTime = getCurrentTime() - dataBean.getTime();
            this.interval_time = dataBean.getInterval();
            return;
        }
        setDefaule();
    }

    public long getCurrentTime() {
        return System.currentTimeMillis();
    }

    public synchronized long getOffsetTime() {
        return System.currentTimeMillis() - this.offsetTime;
    }

    public long getIntervalPostTime() {
        int i;
        if (this.interval_time != 0) {
            i = this.interval_time;
        } else {
            i = this.DEFAULT_INTERVAL_TIME;
        }
        return i;
    }

    public String getCurrentTimeFormat() {
        return new SimpleDateFormat("yyyy-MM-dd").format(new Date());
    }

    public String getLastTime(int i) {
        Calendar calendar = Calendar.getInstance();
        calendar.add(5, -i);
        return new SimpleDateFormat("yyyy-MM-dd").format(calendar.getTime());
    }

    public void onResume() {
        this.enterTime = getCurrentTime();
    }

    public void onPause() {
        this.onLineTime = (getCurrentTime() - this.enterTime) / 1000;
    }

    public long getOnLineTime() {
        return this.onLineTime;
    }

    private void setDefaule() {
        this.interval_day = this.DEFAULT_INTERVAL_DAY;
        this.offsetTime = this.DEFAULT_OFFSET_TIME;
        this.interval_time = this.DEFAULT_INTERVAL_TIME;
    }

    public String getIntervalSelectTime() {
        return getLastTime(this.interval_day);
    }

    public String getLastMonthTime() {
        return getLastTime(30);
    }
}
