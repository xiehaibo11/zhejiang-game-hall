package com.bianfeng.datafunsdk.timer;

import com.bianfeng.datafunsdk.timer.HandlerUtils;
import com.bianfeng.datafunsdk.x;

public class HandlerTimer {
    public TimeCallback callback;
    public HandlerUtils.HandlerCallback handlerCallback;
    public int i = 1;
    public LoopType loopType;
    public int mCode;
    public long time;

    public interface TimeCallback {
        void onCall(int i, String str);
    }

    public class a implements HandlerUtils.HandlerCallback {
        public a() {
        }

        @Override
        public void onCall(int i, String str) {
            if (i != HandlerTimer.this.mCode || HandlerTimer.this.callback == null) {
                x.a("code 不正确 或 callback 为空");
                return;
            }
            x.a("HandlerCallback:code=" + i + ";mgs=" + str);
            int i2 = b.a[HandlerTimer.this.loopType.ordinal()];
            if (i2 == 1) {
                HandlerTimer.this.callback.onCall(i, str);
                HandlerTimer.this.onRemove();
            } else if (i2 == 2) {
                HandlerTimer.this.dingshi(i, str);
            } else {
                if (i2 != 3) {
                    return;
                }
                HandlerTimer.this.zengDingshi(i, str);
            }
        }
    }

    public static class b {
        public static final int[] a;

        static {
            int[] iArr = new int[LoopType.values().length];
            a = iArr;
            try {
                iArr[LoopType.NONE.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                a[LoopType.DINGSHI.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                a[LoopType.ZENGDINGSHI.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
        }
    }

    public HandlerTimer() {
        a aVar = new a();
        this.handlerCallback = aVar;
        HandlerUtils.addHandlerCallback(aVar);
    }

    private void dingshi(int i, String str) {
        this.callback.onCall(i, str);
        HandlerUtils.sendMsg(i, str, this.time);
    }

    private void zengDingshi(int i, String str) {
        this.callback.onCall(i, str);
        int i2 = this.i + 1;
        this.i = i2;
        HandlerUtils.sendMsg(i, str, this.time * ((long) i2));
    }

    public void addCallback(TimeCallback timeCallback) {
        this.callback = timeCallback;
    }

    public void onRemove() {
        HandlerUtils.remove(this.handlerCallback);
        HandlerUtils.removeMsg(this.mCode);
    }

    public void setloopType(LoopType loopType) {
        this.loopType = loopType;
    }

    public void start(int i, String str, long j) {
        if (this.callback == null) {
            x.a("TimeCallback is null");
            return;
        }
        x.a("HandlerTimer start");
        this.mCode = i;
        this.time = j;
        HandlerUtils.sendMsg(i, str, j);
    }

    public void start(int i, long j) {
        start(i, "", j);
    }
}
