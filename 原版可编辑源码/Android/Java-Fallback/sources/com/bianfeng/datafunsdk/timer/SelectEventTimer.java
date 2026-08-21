package com.bianfeng.datafunsdk.timer;

public class SelectEventTimer {
    public static volatile com.bianfeng.datafunsdk.timer.SelectEventTimer eventTimer;
    public com.bianfeng.datafunsdk.a callback;
    public boolean isStart;
    public long period;
    public com.bianfeng.datafunsdk.timer.HandlerTimer timer;

    public class a implements com.bianfeng.datafunsdk.timer.HandlerTimer.TimeCallback {
        public final com.bianfeng.datafunsdk.timer.SelectEventTimer a;

        public a(com.bianfeng.datafunsdk.timer.SelectEventTimer r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void onCall(int r1, java.lang.String r2) {
                r0 = this;
                com.bianfeng.datafunsdk.timer.SelectEventTimer r1 = r0.a
                com.bianfeng.datafunsdk.a r1 = com.bianfeng.datafunsdk.timer.SelectEventTimer.access$000(r1)
                r1.a()
                return
        }
    }

    public SelectEventTimer() {
            r2 = this;
            r2.<init>()
            r0 = 300000(0x493e0, double:1.482197E-318)
            r2.period = r0
            r0 = 0
            r2.isStart = r0
            return
    }

    public static com.bianfeng.datafunsdk.a access$000(com.bianfeng.datafunsdk.timer.SelectEventTimer r0) {
            com.bianfeng.datafunsdk.a r0 = r0.callback
            return r0
    }

    public static com.bianfeng.datafunsdk.timer.SelectEventTimer getInstance() {
            com.bianfeng.datafunsdk.timer.SelectEventTimer r0 = com.bianfeng.datafunsdk.timer.SelectEventTimer.eventTimer
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.datafunsdk.timer.SelectEventTimer> r0 = com.bianfeng.datafunsdk.timer.SelectEventTimer.class
            monitor-enter(r0)
            com.bianfeng.datafunsdk.timer.SelectEventTimer r1 = com.bianfeng.datafunsdk.timer.SelectEventTimer.eventTimer     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.datafunsdk.timer.SelectEventTimer r1 = new com.bianfeng.datafunsdk.timer.SelectEventTimer     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.datafunsdk.timer.SelectEventTimer.eventTimer = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.datafunsdk.timer.SelectEventTimer r0 = com.bianfeng.datafunsdk.timer.SelectEventTimer.eventTimer
            return r0
    }

    public void cancel() {
            r2 = this;
            com.bianfeng.datafunsdk.timer.HandlerTimer r0 = r2.timer
            if (r0 == 0) goto L12
            r1 = 0
            r2.isStart = r1
            r0.onRemove()
            r0 = 0
            r2.timer = r0
            java.lang.String r0 = "SelectEventTimer  取消"
            com.bianfeng.datafunsdk.x.a(r0)
        L12:
            return
    }

    public void setCallback(com.bianfeng.datafunsdk.a r1) {
            r0 = this;
            r0.callback = r1
            return
    }

    public void start() {
            r5 = this;
            boolean r0 = r5.isStart     // Catch: java.lang.Exception -> L2f
            if (r0 == 0) goto L5
            return
        L5:
            java.lang.String r0 = "SelectEventTimer start"
            com.bianfeng.datafunsdk.x.a(r0)     // Catch: java.lang.Exception -> L2f
            com.bianfeng.datafunsdk.timer.HandlerTimer r0 = new com.bianfeng.datafunsdk.timer.HandlerTimer     // Catch: java.lang.Exception -> L2f
            r0.<init>()     // Catch: java.lang.Exception -> L2f
            r5.timer = r0     // Catch: java.lang.Exception -> L2f
            com.bianfeng.datafunsdk.timer.SelectEventTimer$a r1 = new com.bianfeng.datafunsdk.timer.SelectEventTimer$a     // Catch: java.lang.Exception -> L2f
            r1.<init>(r5)     // Catch: java.lang.Exception -> L2f
            r0.addCallback(r1)     // Catch: java.lang.Exception -> L2f
            com.bianfeng.datafunsdk.timer.HandlerTimer r0 = r5.timer     // Catch: java.lang.Exception -> L2f
            com.bianfeng.datafunsdk.timer.LoopType r1 = com.bianfeng.datafunsdk.timer.LoopType.ZENGDINGSHI     // Catch: java.lang.Exception -> L2f
            r0.setloopType(r1)     // Catch: java.lang.Exception -> L2f
            com.bianfeng.datafunsdk.timer.HandlerTimer r0 = r5.timer     // Catch: java.lang.Exception -> L2f
            r1 = 1000(0x3e8, float:1.401E-42)
            java.lang.String r2 = ""
            long r3 = r5.period     // Catch: java.lang.Exception -> L2f
            r0.start(r1, r2, r3)     // Catch: java.lang.Exception -> L2f
            r0 = 1
            r5.isStart = r0     // Catch: java.lang.Exception -> L2f
            goto L33
        L2f:
            r0 = move-exception
            r0.printStackTrace()
        L33:
            return
    }
}
