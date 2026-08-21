package com.ymnsdk.replugin.util;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class CallbackTimerUtils {
    static com.ymnsdk.replugin.download.TimerCallback callback = null;
    private static android.os.Handler handler = null;
    private static volatile boolean isNotDingshiIng = true;
    static android.os.Message message;


    static {
            com.ymnsdk.replugin.util.CallbackTimerUtils$1 r0 = new com.ymnsdk.replugin.util.CallbackTimerUtils$1
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.ymnsdk.replugin.util.CallbackTimerUtils.handler = r0
            return
    }

    public CallbackTimerUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    static boolean access$002(boolean r0) {
            com.ymnsdk.replugin.util.CallbackTimerUtils.isNotDingshiIng = r0
            return r0
    }

    public static void clearTimer() {
            android.os.Message r0 = com.ymnsdk.replugin.util.CallbackTimerUtils.message
            if (r0 == 0) goto Le
            android.os.Handler r1 = com.ymnsdk.replugin.util.CallbackTimerUtils.handler
            int r0 = r0.what
            r1.removeMessages(r0)
            r0 = 1
            com.ymnsdk.replugin.util.CallbackTimerUtils.isNotDingshiIng = r0
        Le:
            return
    }

    public static void sendMsg(long r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "TimerUtils sendMsg"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r2 = "--->"
            r0.append(r2)
            boolean r3 = com.ymnsdk.replugin.util.CallbackTimerUtils.isNotDingshiIng
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = "ymn"
            android.util.Log.d(r3, r0)
            boolean r0 = com.ymnsdk.replugin.util.CallbackTimerUtils.isNotDingshiIng
            if (r0 == 0) goto L4c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            r0.append(r4)
            r0.append(r2)
            boolean r1 = com.ymnsdk.replugin.util.CallbackTimerUtils.isNotDingshiIng
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            android.util.Log.d(r3, r0)
            r0 = 0
            com.ymnsdk.replugin.util.CallbackTimerUtils.isNotDingshiIng = r0
            android.os.Message r0 = android.os.Message.obtain()
            com.ymnsdk.replugin.util.CallbackTimerUtils.message = r0
            android.os.Handler r1 = com.ymnsdk.replugin.util.CallbackTimerUtils.handler
            r1.sendMessageDelayed(r0, r4)
        L4c:
            return
    }

    public static void setCallback(com.ymnsdk.replugin.download.TimerCallback r0) {
            com.ymnsdk.replugin.util.CallbackTimerUtils.callback = r0
            return
    }
}
