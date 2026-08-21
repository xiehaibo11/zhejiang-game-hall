package com.mbridge.msdk.dycreator.bus;

class AsyncPoster implements java.lang.Runnable {
    private final com.mbridge.msdk.dycreator.bus.PendingPostQueue a;
    private final com.mbridge.msdk.dycreator.bus.EventBus b;

    AsyncPoster(com.mbridge.msdk.dycreator.bus.EventBus r1) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            com.mbridge.msdk.dycreator.bus.PendingPostQueue r1 = new com.mbridge.msdk.dycreator.bus.PendingPostQueue
            r1.<init>()
            r0.a = r1
            return
    }

    public void enqueue(com.mbridge.msdk.dycreator.bus.Subscription r1, java.lang.Object r2) {
            r0 = this;
            com.mbridge.msdk.dycreator.bus.PendingPost r1 = com.mbridge.msdk.dycreator.bus.PendingPost.a(r1, r2)
            com.mbridge.msdk.dycreator.bus.PendingPostQueue r2 = r0.a
            r2.a(r1)
            java.util.concurrent.ExecutorService r1 = com.mbridge.msdk.dycreator.bus.EventBus.a
            r1.execute(r0)
            return
    }

    @Override
    public void run() {
            r2 = this;
            com.mbridge.msdk.dycreator.bus.PendingPostQueue r0 = r2.a
            com.mbridge.msdk.dycreator.bus.PendingPost r0 = r0.a()
            if (r0 == 0) goto Le
            com.mbridge.msdk.dycreator.bus.EventBus r1 = r2.b
            r1.a(r0)
            return
        Le:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "No pending post available"
            r0.<init>(r1)
            throw r0
    }
}
