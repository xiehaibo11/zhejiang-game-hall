package com.ymnsdk.replugin.util;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.util.Log;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.ymnsdk.replugin.download.TimerCallback;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class TimeoutTimerUtils {
    static TimerCallback callback = null;
    private static Handler handler = new Handler(Looper.getMainLooper()) {
        @Override
        public void handleMessage(Message message2) {
            super.handleMessage(message2);
            if (TimeoutTimerUtils.callback != null) {
                TimeoutTimerUtils.callback.callTime();
            }
            boolean unused = TimeoutTimerUtils.isNotDingshiIng = true;
        }
    };
    private static volatile boolean isNotDingshiIng = true;
    static Message message;

    public static void setCallback(TimerCallback timerCallback) {
        CallbackTimerUtils.callback = timerCallback;
    }

    public static void sendMsg(long j) {
        Log.d(HostConstant.ymn, "TimerUtils sendMsg" + j + "--->" + isNotDingshiIng);
        if (isNotDingshiIng) {
            Log.d(HostConstant.ymn, "TimerUtils sendMsg" + j + "--->" + isNotDingshiIng);
            isNotDingshiIng = false;
            Message messageObtain = Message.obtain();
            message = messageObtain;
            handler.sendMessageDelayed(messageObtain, j);
        }
    }

    public static void clearTimer() {
        Message message2 = message;
        if (message2 != null) {
            handler.removeMessages(message2.what);
            isNotDingshiIng = true;
        }
    }
}
