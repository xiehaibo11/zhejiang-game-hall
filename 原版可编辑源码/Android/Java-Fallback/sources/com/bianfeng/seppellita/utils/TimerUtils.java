package com.bianfeng.seppellita.utils;

public class TimerUtils {
    static com.bianfeng.seppellita.SepperllitaCallback callback = null;
    private static android.os.Handler handler = null;
    private static volatile boolean isNotDingshiIng = true;


    static {
            com.bianfeng.seppellita.utils.TimerUtils$1 r0 = new com.bianfeng.seppellita.utils.TimerUtils$1
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.bianfeng.seppellita.utils.TimerUtils.handler = r0
            return
    }

    public TimerUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    static boolean access$002(boolean r0) {
            com.bianfeng.seppellita.utils.TimerUtils.isNotDingshiIng = r0
            return r0
    }

    protected static void sendMsg(long r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "TimerUtils sendMsg"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r2 = "--->"
            r0.append(r2)
            boolean r3 = com.bianfeng.seppellita.utils.TimerUtils.isNotDingshiIng
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r0)
            boolean r0 = com.bianfeng.seppellita.utils.TimerUtils.isNotDingshiIng
            if (r0 == 0) goto L48
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            r0.append(r4)
            r0.append(r2)
            boolean r1 = com.bianfeng.seppellita.utils.TimerUtils.isNotDingshiIng
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r0)
            r0 = 0
            com.bianfeng.seppellita.utils.TimerUtils.isNotDingshiIng = r0
            android.os.Message r0 = android.os.Message.obtain()
            android.os.Handler r1 = com.bianfeng.seppellita.utils.TimerUtils.handler
            r1.sendMessageDelayed(r0, r4)
        L48:
            return
    }

    public static void setCallback(com.bianfeng.seppellita.SepperllitaCallback r0) {
            com.bianfeng.seppellita.utils.TimerUtils.callback = r0
            return
    }
}
