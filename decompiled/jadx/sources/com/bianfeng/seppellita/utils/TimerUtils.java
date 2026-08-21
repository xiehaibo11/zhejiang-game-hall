package com.bianfeng.seppellita.utils;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import com.bianfeng.seppellita.SepperllitaCallback;

/* JADX INFO: loaded from: classes.dex */
public class TimerUtils {
    static SepperllitaCallback callback = null;
    private static Handler handler = new Handler(Looper.getMainLooper()) { // from class: com.bianfeng.seppellita.utils.TimerUtils.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            super.handleMessage(message);
            if (TimerUtils.callback != null) {
                TimerUtils.callback.callTime();
            }
            boolean unused = TimerUtils.isNotDingshiIng = true;
        }
    };
    private static volatile boolean isNotDingshiIng = true;

    public static void setCallback(SepperllitaCallback sepperllitaCallback) {
        callback = sepperllitaCallback;
    }

    protected static void sendMsg(long j) {
        SeppellitaLogger.i("TimerUtils sendMsg" + j + "--->" + isNotDingshiIng);
        if (isNotDingshiIng) {
            SeppellitaLogger.i("TimerUtils sendMsg" + j + "--->" + isNotDingshiIng);
            isNotDingshiIng = false;
            handler.sendMessageDelayed(Message.obtain(), j);
        }
    }
}
