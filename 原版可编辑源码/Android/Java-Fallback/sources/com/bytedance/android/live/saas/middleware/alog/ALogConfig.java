package com.bytedance.android.live.saas.middleware.alog;

public class ALogConfig {
    private com.bytedance.android.live.saas.middleware.alog.ILogProtocol aLogService;
    private boolean isDebug;
    private boolean standalone;

    public ALogConfig(com.bytedance.android.live.saas.middleware.alog.ILogProtocol r2, boolean r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public ALogConfig(com.bytedance.android.live.saas.middleware.alog.ILogProtocol r2, boolean r3, boolean r4) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.standalone = r0
            r0 = 0
            r1.isDebug = r0
            r1.aLogService = r2
            r1.standalone = r3
            r1.isDebug = r4
            return
    }

    public com.bytedance.android.live.saas.middleware.alog.ILogProtocol getALogService() {
            r1 = this;
            com.bytedance.android.live.saas.middleware.alog.ILogProtocol r0 = r1.aLogService
            return r0
    }

    public boolean getStandalone() {
            r1 = this;
            boolean r0 = r1.standalone
            return r0
    }

    public boolean isDebug() {
            r1 = this;
            boolean r0 = r1.isDebug
            return r0
    }

    public void setALogService(com.bytedance.android.live.saas.middleware.alog.ILogProtocol r1) {
            r0 = this;
            r0.aLogService = r1
            return
    }

    public void setDebug(boolean r1) {
            r0 = this;
            r0.isDebug = r1
            return
    }

    public void setStandalone(boolean r1) {
            r0 = this;
            r0.standalone = r1
            return
    }
}
