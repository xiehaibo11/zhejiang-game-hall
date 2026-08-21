package com.bianfeng.datafunsdk.timer;

public class HandlerUtils {
    public static android.os.Handler handler;
    public static java.util.Set<com.bianfeng.datafunsdk.timer.HandlerUtils.HandlerCallback> list;

    public interface HandlerCallback {
        void onCall(int r1, java.lang.String r2);
    }

    public static class a extends android.os.Handler {
        public a(android.os.Looper r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void handleMessage(android.os.Message r5) {
                r4 = this;
                java.lang.String r0 = "HandlerUtils start"
                com.bianfeng.datafunsdk.x.a(r0)
                java.util.Set r0 = com.bianfeng.datafunsdk.timer.HandlerUtils.access$000()
                java.util.Iterator r0 = r0.iterator()
            Ld:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L25
                java.lang.Object r1 = r0.next()
                com.bianfeng.datafunsdk.timer.HandlerUtils$HandlerCallback r1 = (com.bianfeng.datafunsdk.timer.HandlerUtils.HandlerCallback) r1
                int r2 = r5.what
                java.lang.Object r3 = r5.obj
                java.lang.String r3 = r3.toString()
                r1.onCall(r2, r3)
                goto Ld
            L25:
                return
        }
    }

    static {
            com.bianfeng.datafunsdk.timer.HandlerUtils$a r0 = new com.bianfeng.datafunsdk.timer.HandlerUtils$a
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.bianfeng.datafunsdk.timer.HandlerUtils.handler = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            com.bianfeng.datafunsdk.timer.HandlerUtils.list = r0
            return
    }

    public HandlerUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.util.Set access$000() {
            java.util.Set<com.bianfeng.datafunsdk.timer.HandlerUtils$HandlerCallback> r0 = com.bianfeng.datafunsdk.timer.HandlerUtils.list
            return r0
    }

    public static void addHandlerCallback(com.bianfeng.datafunsdk.timer.HandlerUtils.HandlerCallback r1) {
            java.util.Set<com.bianfeng.datafunsdk.timer.HandlerUtils$HandlerCallback> r0 = com.bianfeng.datafunsdk.timer.HandlerUtils.list
            r0.add(r1)
            return
    }

    public static boolean remove(com.bianfeng.datafunsdk.timer.HandlerUtils.HandlerCallback r1) {
            java.util.Set<com.bianfeng.datafunsdk.timer.HandlerUtils$HandlerCallback> r0 = com.bianfeng.datafunsdk.timer.HandlerUtils.list
            boolean r1 = r0.remove(r1)
            return r1
    }

    public static void removeMsg(int r1) {
            android.os.Handler r0 = com.bianfeng.datafunsdk.timer.HandlerUtils.handler
            r0.removeMessages(r1)
            return
    }

    public static void sendMsg(int r1, long r2) {
            java.lang.String r0 = ""
            sendMsg(r1, r0, r2)
            return
    }

    public static void sendMsg(int r2, java.lang.String r3, long r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "HandlerUtils sendMsg"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            com.bianfeng.datafunsdk.x.a(r0)
            android.os.Message r0 = android.os.Message.obtain()
            r0.what = r2
            r0.obj = r3
            android.os.Handler r2 = com.bianfeng.datafunsdk.timer.HandlerUtils.handler
            r2.sendMessageDelayed(r0, r4)
            return
    }
}
