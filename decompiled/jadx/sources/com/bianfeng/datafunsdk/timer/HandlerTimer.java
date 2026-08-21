package com.bianfeng.datafunsdk.timer;

import com.bianfeng.datafunsdk.timer.HandlerUtils;
import com.bianfeng.datafunsdk.x;

/* JADX INFO: loaded from: classes.dex */
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

        @Override // com.bianfeng.datafunsdk.timer.HandlerUtils.HandlerCallback
        public void onCall(int i, String str) {
            if (i != HandlerTimer.this.mCode || HandlerTimer.this.callback == null) {
                x.a("code 不正确 或 callback 为空");
                return;
            }
            x.a("HandlerCallback:code=" + i + ";mgs=" + str);
            int i2 = b.f1415a[HandlerTimer.this.loopType.ordinal()];
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

    public static /* synthetic */ class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final /* synthetic */ int[] f1415a;

        static {
            int[] iArr = new int[LoopType.values().length];
            f1415a = iArr;
            try {
                iArr[LoopType.NONE.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                f1415a[LoopType.DINGSHI.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                f1415a[LoopType.ZENGDINGSHI.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
        }
    }

    public HandlerTimer() {
        a aVar = new a();
        this.handlerCallback = aVar;
        HandlerUtils.addHandlerCallback(aVar);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void dingshi(int i, String str) {
        this.callback.onCall(i, str);
        HandlerUtils.sendMsg(i, str, this.time);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void zengDingshi(int i, String str) {
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
