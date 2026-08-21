package com.bianfeng.datafunsdk.timer;

import com.bianfeng.datafunsdk.timer.HandlerTimer;
import com.bianfeng.datafunsdk.x;

public class SelectEventTimer {
    public static volatile SelectEventTimer eventTimer;
    public com.bianfeng.datafunsdk.a callback;
    public HandlerTimer timer;
    public long period = 300000;
    public boolean isStart = false;

    public class a implements HandlerTimer.TimeCallback {
        public a() {
        }

        @Override
        public void onCall(int i, String str) {
            SelectEventTimer.this.callback.a();
        }
    }

    public static SelectEventTimer getInstance() {
        if (eventTimer == null) {
            synchronized (SelectEventTimer.class) {
                if (eventTimer == null) {
                    eventTimer = new SelectEventTimer();
                }
            }
        }
        return eventTimer;
    }

    public void cancel() {
        HandlerTimer handlerTimer = this.timer;
        if (handlerTimer != null) {
            this.isStart = false;
            handlerTimer.onRemove();
            this.timer = null;
            x.a("SelectEventTimer  取消");
        }
    }

    public void setCallback(com.bianfeng.datafunsdk.a aVar) {
        this.callback = aVar;
    }

    public void start() {
        try {
            if (this.isStart) {
                return;
            }
            x.a("SelectEventTimer start");
            HandlerTimer handlerTimer = new HandlerTimer();
            this.timer = handlerTimer;
            handlerTimer.addCallback(new a());
            this.timer.setloopType(LoopType.ZENGDINGSHI);
            this.timer.start(1000, "", this.period);
            this.isStart = true;
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
