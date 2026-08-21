package com.bianfeng.seppellita.utils;

public class ConfigUtils {
    private com.bianfeng.seppellita.SepperllitaCallback callback;
    private int maxCount;
    private com.bianfeng.seppellita.utils.TimeUtils timeUtils;

    public ConfigUtils(com.bianfeng.seppellita.SepperllitaCallback r2) {
            r1 = this;
            r1.<init>()
            r0 = 1048576(0x100000, float:1.469368E-39)
            r1.maxCount = r0
            com.bianfeng.seppellita.utils.TimeUtils r0 = new com.bianfeng.seppellita.utils.TimeUtils
            r0.<init>()
            r1.timeUtils = r0
            r1.callback = r2
            return
    }

    public java.lang.String getCurrentTimeFormat() {
            r1 = this;
            com.bianfeng.seppellita.utils.TimeUtils r0 = r1.timeUtils
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getCurrentTimeFormat()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    public java.lang.String getLastMonthTime() {
            r1 = this;
            com.bianfeng.seppellita.utils.TimeUtils r0 = r1.timeUtils
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getLastMonthTime()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    public java.lang.String getLastTime() {
            r1 = this;
            com.bianfeng.seppellita.utils.TimeUtils r0 = r1.timeUtils
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getIntervalSelectTime()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    public int getMaxCount() {
            r1 = this;
            int r0 = r1.maxCount
            return r0
    }

    public long getOffsetTime() {
            r2 = this;
            com.bianfeng.seppellita.utils.TimeUtils r0 = r2.timeUtils
            if (r0 == 0) goto L9
            long r0 = r0.getOffsetTime()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public java.lang.String getOnLineTime() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.bianfeng.seppellita.utils.TimeUtils r1 = r3.timeUtils
            long r1 = r1.getOnLineTime()
            r0.append(r1)
            java.lang.String r1 = ""
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public void onInit(com.bianfeng.seppellita.bean.InitBean.DataBean r3) {
            r2 = this;
            com.bianfeng.seppellita.utils.TimeUtils r0 = r2.timeUtils
            if (r0 == 0) goto L7
            r0.setInit(r3)
        L7:
            if (r3 == 0) goto L15
            int r0 = r3.getPack_size()
            if (r0 == 0) goto L15
            int r3 = r3.getPack_size()
            r2.maxCount = r3
        L15:
            com.bianfeng.seppellita.SepperllitaCallback r3 = r2.callback
            com.bianfeng.seppellita.utils.TimerUtils.setCallback(r3)
            com.bianfeng.seppellita.utils.TimeUtils r3 = r2.timeUtils
            long r0 = r3.getIntervalPostTime()
            com.bianfeng.seppellita.utils.TimerUtils.sendMsg(r0)
            com.bianfeng.seppellita.event.EventManager.launch()
            return
    }

    public void onPause() {
            r1 = this;
            com.bianfeng.seppellita.utils.TimeUtils r0 = r1.timeUtils
            if (r0 == 0) goto L7
            r0.onPause()
        L7:
            return
    }

    public void onResume() {
            r1 = this;
            com.bianfeng.seppellita.utils.TimeUtils r0 = r1.timeUtils
            if (r0 == 0) goto L7
            r0.onResume()
        L7:
            return
    }

    public void setTimer() {
            r2 = this;
            java.lang.String r0 = "setTimer"
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r0)
            com.bianfeng.seppellita.utils.TimeUtils r0 = r2.timeUtils
            long r0 = r0.getIntervalPostTime()
            com.bianfeng.seppellita.utils.TimerUtils.sendMsg(r0)
            return
    }
}
