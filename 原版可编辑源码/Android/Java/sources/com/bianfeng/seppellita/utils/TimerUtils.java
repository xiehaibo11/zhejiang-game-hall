package com.bianfeng.seppellita.utils;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import com.bianfeng.seppellita.SepperllitaCallback;

public class TimerUtils {
    static SepperllitaCallback callback = null;
    private static Handler handler = new Handler(Looper.getMainLooper()) {
        @Override
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
