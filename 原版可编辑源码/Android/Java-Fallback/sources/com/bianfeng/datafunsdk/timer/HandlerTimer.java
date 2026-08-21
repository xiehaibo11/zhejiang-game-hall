package com.bianfeng.datafunsdk.timer;

public class HandlerTimer {
    public com.bianfeng.datafunsdk.timer.HandlerTimer.TimeCallback callback;
    public com.bianfeng.datafunsdk.timer.HandlerUtils.HandlerCallback handlerCallback;
    public int i;
    public com.bianfeng.datafunsdk.timer.LoopType loopType;
    public int mCode;
    public long time;

    public interface TimeCallback {
        void onCall(int r1, java.lang.String r2);
    }

    public class a implements com.bianfeng.datafunsdk.timer.HandlerUtils.HandlerCallback {
        public final com.bianfeng.datafunsdk.timer.HandlerTimer a;

        public a(com.bianfeng.datafunsdk.timer.HandlerTimer r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void onCall(int r3, java.lang.String r4) {
                r2 = this;
                com.bianfeng.datafunsdk.timer.HandlerTimer r0 = r2.a
                int r0 = com.bianfeng.datafunsdk.timer.HandlerTimer.access$000(r0)
                if (r3 != r0) goto L5f
                com.bianfeng.datafunsdk.timer.HandlerTimer r0 = r2.a
                com.bianfeng.datafunsdk.timer.HandlerTimer$TimeCallback r0 = com.bianfeng.datafunsdk.timer.HandlerTimer.access$100(r0)
                if (r0 == 0) goto L5f
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "HandlerCallback:code="
                r0.append(r1)
                r0.append(r3)
                java.lang.String r1 = ";mgs="
                r0.append(r1)
                r0.append(r4)
                java.lang.String r0 = r0.toString()
                com.bianfeng.datafunsdk.x.a(r0)
                int[] r0 = com.bianfeng.datafunsdk.timer.HandlerTimer.b.a
                com.bianfeng.datafunsdk.timer.HandlerTimer r1 = r2.a
                com.bianfeng.datafunsdk.timer.LoopType r1 = com.bianfeng.datafunsdk.timer.HandlerTimer.access$200(r1)
                int r1 = r1.ordinal()
                r0 = r0[r1]
                r1 = 1
                if (r0 == r1) goto L50
                r1 = 2
                if (r0 == r1) goto L4a
                r1 = 3
                if (r0 == r1) goto L44
                goto L65
            L44:
                com.bianfeng.datafunsdk.timer.HandlerTimer r0 = r2.a
                com.bianfeng.datafunsdk.timer.HandlerTimer.access$400(r0, r3, r4)
                goto L65
            L4a:
                com.bianfeng.datafunsdk.timer.HandlerTimer r0 = r2.a
                com.bianfeng.datafunsdk.timer.HandlerTimer.access$300(r0, r3, r4)
                goto L65
            L50:
                com.bianfeng.datafunsdk.timer.HandlerTimer r0 = r2.a
                com.bianfeng.datafunsdk.timer.HandlerTimer$TimeCallback r0 = com.bianfeng.datafunsdk.timer.HandlerTimer.access$100(r0)
                r0.onCall(r3, r4)
                com.bianfeng.datafunsdk.timer.HandlerTimer r3 = r2.a
                r3.onRemove()
                goto L65
            L5f:
                java.lang.String r3 = "code 不正确 或 callback 为空"
                com.bianfeng.datafunsdk.x.a(r3)
            L65:
                return
        }
    }

    public static class b {
        public static final int[] a = null;

        static {
                com.bianfeng.datafunsdk.timer.LoopType[] r0 = com.bianfeng.datafunsdk.timer.LoopType.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.bianfeng.datafunsdk.timer.HandlerTimer.b.a = r0
                com.bianfeng.datafunsdk.timer.LoopType r1 = com.bianfeng.datafunsdk.timer.LoopType.NONE     // Catch: java.lang.NoSuchFieldError -> L13
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L13
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L13
                goto L14
            L13:
                r0 = move-exception
            L14:
                int[] r0 = com.bianfeng.datafunsdk.timer.HandlerTimer.b.a     // Catch: java.lang.NoSuchFieldError -> L20
                com.bianfeng.datafunsdk.timer.LoopType r1 = com.bianfeng.datafunsdk.timer.LoopType.DINGSHI     // Catch: java.lang.NoSuchFieldError -> L20
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L20
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L20
                goto L21
            L20:
                r0 = move-exception
            L21:
                int[] r0 = com.bianfeng.datafunsdk.timer.HandlerTimer.b.a     // Catch: java.lang.NoSuchFieldError -> L2d
                com.bianfeng.datafunsdk.timer.LoopType r1 = com.bianfeng.datafunsdk.timer.LoopType.ZENGDINGSHI     // Catch: java.lang.NoSuchFieldError -> L2d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L2d
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L2d
                goto L2e
            L2d:
                r0 = move-exception
            L2e:
                return
        }
    }

    public HandlerTimer() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.i = r0
            com.bianfeng.datafunsdk.timer.HandlerTimer$a r0 = new com.bianfeng.datafunsdk.timer.HandlerTimer$a
            r0.<init>(r1)
            r1.handlerCallback = r0
            com.bianfeng.datafunsdk.timer.HandlerUtils.addHandlerCallback(r0)
            return
    }

    public static int access$000(com.bianfeng.datafunsdk.timer.HandlerTimer r0) {
            int r0 = r0.mCode
            return r0
    }

    public static com.bianfeng.datafunsdk.timer.HandlerTimer.TimeCallback access$100(com.bianfeng.datafunsdk.timer.HandlerTimer r0) {
            com.bianfeng.datafunsdk.timer.HandlerTimer$TimeCallback r0 = r0.callback
            return r0
    }

    public static com.bianfeng.datafunsdk.timer.LoopType access$200(com.bianfeng.datafunsdk.timer.HandlerTimer r0) {
            com.bianfeng.datafunsdk.timer.LoopType r0 = r0.loopType
            return r0
    }

    public static void access$300(com.bianfeng.datafunsdk.timer.HandlerTimer r0, int r1, java.lang.String r2) {
            r0.dingshi(r1, r2)
            return
    }

    public static void access$400(com.bianfeng.datafunsdk.timer.HandlerTimer r0, int r1, java.lang.String r2) {
            r0.zengDingshi(r1, r2)
            return
    }

    private void dingshi(int r3, java.lang.String r4) {
            r2 = this;
            com.bianfeng.datafunsdk.timer.HandlerTimer$TimeCallback r0 = r2.callback
            r0.onCall(r3, r4)
            long r0 = r2.time
            com.bianfeng.datafunsdk.timer.HandlerUtils.sendMsg(r3, r4, r0)
            return
    }

    private void zengDingshi(int r6, java.lang.String r7) {
            r5 = this;
            com.bianfeng.datafunsdk.timer.HandlerTimer$TimeCallback r0 = r5.callback
            r0.onCall(r6, r7)
            int r0 = r5.i
            int r0 = r0 + 1
            r5.i = r0
            long r1 = r5.time
            long r3 = (long) r0
            long r1 = r1 * r3
            com.bianfeng.datafunsdk.timer.HandlerUtils.sendMsg(r6, r7, r1)
            return
    }

    public void addCallback(com.bianfeng.datafunsdk.timer.HandlerTimer.TimeCallback r1) {
            r0 = this;
            r0.callback = r1
            return
    }

    public void onRemove() {
            r1 = this;
            com.bianfeng.datafunsdk.timer.HandlerUtils$HandlerCallback r0 = r1.handlerCallback
            com.bianfeng.datafunsdk.timer.HandlerUtils.remove(r0)
            int r0 = r1.mCode
            com.bianfeng.datafunsdk.timer.HandlerUtils.removeMsg(r0)
            return
    }

    public void setloopType(com.bianfeng.datafunsdk.timer.LoopType r1) {
            r0 = this;
            r0.loopType = r1
            return
    }

    public void start(int r2, long r3) {
            r1 = this;
            java.lang.String r0 = ""
            r1.start(r2, r0, r3)
            return
    }

    public void start(int r2, java.lang.String r3, long r4) {
            r1 = this;
            com.bianfeng.datafunsdk.timer.HandlerTimer$TimeCallback r0 = r1.callback
            if (r0 != 0) goto La
            java.lang.String r2 = "TimeCallback is null"
            com.bianfeng.datafunsdk.x.a(r2)
            return
        La:
            java.lang.String r0 = "HandlerTimer start"
            com.bianfeng.datafunsdk.x.a(r0)
            r1.mCode = r2
            r1.time = r4
            com.bianfeng.datafunsdk.timer.HandlerUtils.sendMsg(r2, r3, r4)
            return
    }
}
