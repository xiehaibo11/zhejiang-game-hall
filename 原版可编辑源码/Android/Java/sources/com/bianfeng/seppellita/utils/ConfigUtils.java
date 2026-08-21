package com.bianfeng.seppellita.utils;

import com.bianfeng.seppellita.SepperllitaCallback;
import com.bianfeng.seppellita.bean.InitBean;
import com.bianfeng.seppellita.event.EventManager;

public class ConfigUtils {
    private SepperllitaCallback callback;
    private int maxCount = 1048576;
    private TimeUtils timeUtils = new TimeUtils();

    public ConfigUtils(SepperllitaCallback sepperllitaCallback) {
        this.callback = sepperllitaCallback;
    }

    public void onPause() {
        TimeUtils timeUtils = this.timeUtils;
        if (timeUtils != null) {
            timeUtils.onPause();
        }
    }

    public void onResume() {
        TimeUtils timeUtils = this.timeUtils;
        if (timeUtils != null) {
            timeUtils.onResume();
        }
    }

    public long getOffsetTime() {
        TimeUtils timeUtils = this.timeUtils;
        if (timeUtils != null) {
            return timeUtils.getOffsetTime();
        }
        return 0L;
    }

    public String getCurrentTimeFormat() {
        TimeUtils timeUtils = this.timeUtils;
        return timeUtils != null ? timeUtils.getCurrentTimeFormat() : "";
    }

    public void onInit(InitBean.DataBean dataBean) {
        TimeUtils timeUtils = this.timeUtils;
        if (timeUtils != null) {
            timeUtils.setInit(dataBean);
        }
        if (dataBean != null && dataBean.getPack_size() != 0) {
            this.maxCount = dataBean.getPack_size();
        }
        TimerUtils.setCallback(this.callback);
        TimerUtils.sendMsg(this.timeUtils.getIntervalPostTime());
        EventManager.launch();
    }

    public int getMaxCount() {
        return this.maxCount;
    }

    public String getLastTime() {
        TimeUtils timeUtils = this.timeUtils;
        return timeUtils != null ? timeUtils.getIntervalSelectTime() : "";
    }

    public String getLastMonthTime() {
        TimeUtils timeUtils = this.timeUtils;
        return timeUtils != null ? timeUtils.getLastMonthTime() : "";
    }

    public void setTimer() {
        SeppellitaLogger.i("setTimer");
        TimerUtils.sendMsg(this.timeUtils.getIntervalPostTime());
    }

    public String getOnLineTime() {
        return this.timeUtils.getOnLineTime() + "";
    }
}
