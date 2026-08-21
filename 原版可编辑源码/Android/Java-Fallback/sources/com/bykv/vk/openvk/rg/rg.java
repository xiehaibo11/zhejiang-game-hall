package com.bykv.vk.openvk.rg;

class rg implements android.app.Application.ActivityLifecycleCallbacks {
    private static volatile boolean rg;
    private int df;
    private com.bykv.vk.openvk.rg.rg.rg q;

    public interface rg {
        void df();

        void rg();
    }

    static {
            return
    }

    rg() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.df = r0
            return
    }

    @Override
    public void onActivityCreated(android.app.Activity r1, android.os.Bundle r2) {
            r0 = this;
            return
    }

    @Override
    public void onActivityDestroyed(android.app.Activity r1) {
            r0 = this;
            return
    }

    @Override
    public void onActivityPaused(android.app.Activity r1) {
            r0 = this;
            return
    }

    @Override
    public void onActivityResumed(android.app.Activity r1) {
            r0 = this;
            return
    }

    @Override
    public void onActivitySaveInstanceState(android.app.Activity r1, android.os.Bundle r2) {
            r0 = this;
            return
    }

    @Override
    public void onActivityStarted(android.app.Activity r1) {
            r0 = this;
            int r1 = r0.df
            int r1 = r1 + 1
            r0.df = r1
            r1 = 0
            com.bykv.vk.openvk.rg.rg.rg = r1
            com.bykv.vk.openvk.rg.rg$rg r1 = r0.q
            if (r1 == 0) goto L10
            r1.df()
        L10:
            return
    }

    @Override
    public void onActivityStopped(android.app.Activity r2) {
            r1 = this;
            int r2 = r1.df
            r0 = 1
            int r2 = r2 - r0
            r1.df = r2
            if (r2 != 0) goto L11
            com.bykv.vk.openvk.rg.rg.rg = r0
            com.bykv.vk.openvk.rg.rg$rg r2 = r1.q
            if (r2 == 0) goto L11
            r2.rg()
        L11:
            return
    }

    public java.lang.Boolean rg() {
            r1 = this;
            boolean r0 = com.bykv.vk.openvk.rg.rg.rg
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            return r0
    }

    public void rg(com.bykv.vk.openvk.rg.rg.rg r1) {
            r0 = this;
            r0.q = r1
            return
    }
}
