package com.bytedance.android.live.saas.middleware.applog;

public class AppLogConfig {
    private java.lang.String appLogId;
    private com.bytedance.android.live.base.api.IHostPermission hostPermission;
    private com.bytedance.android.live.saas.middleware.applog.IAppLog impl;
    private boolean isToBVersion;
    private boolean standalone;

    public AppLogConfig() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.impl = r0
            r1 = 0
            r2.standalone = r1
            r2.isToBVersion = r1
            r2.appLogId = r0
            r2.hostPermission = r0
            return
    }

    public AppLogConfig(com.bytedance.android.live.saas.middleware.applog.IAppLog r2, boolean r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public AppLogConfig(com.bytedance.android.live.saas.middleware.applog.IAppLog r2, boolean r3, boolean r4) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public AppLogConfig(com.bytedance.android.live.saas.middleware.applog.IAppLog r7, boolean r8, boolean r9, java.lang.String r10) {
            r6 = this;
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public AppLogConfig(com.bytedance.android.live.saas.middleware.applog.IAppLog r3, boolean r4, boolean r5, java.lang.String r6, com.bytedance.android.live.base.api.IHostPermission r7) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.impl = r0
            r1 = 0
            r2.standalone = r1
            r2.isToBVersion = r1
            r2.appLogId = r0
            r2.hostPermission = r0
            r2.impl = r3
            r2.standalone = r4
            r2.isToBVersion = r5
            r2.appLogId = r6
            r2.hostPermission = r7
            return
    }

    public java.lang.String getAppLogId() {
            r1 = this;
            java.lang.String r0 = r1.appLogId
            return r0
    }

    public com.bytedance.android.live.base.api.IHostPermission getHostPermission() {
            r1 = this;
            com.bytedance.android.live.base.api.IHostPermission r0 = r1.hostPermission
            return r0
    }

    public com.bytedance.android.live.saas.middleware.applog.IAppLog getImpl() {
            r1 = this;
            com.bytedance.android.live.saas.middleware.applog.IAppLog r0 = r1.impl
            return r0
    }

    public boolean getStandalone() {
            r1 = this;
            boolean r0 = r1.standalone
            return r0
    }

    public boolean isToBVersion() {
            r1 = this;
            boolean r0 = r1.isToBVersion
            return r0
    }

    public void setAppLogId(java.lang.String r1) {
            r0 = this;
            r0.appLogId = r1
            return
    }

    public void setHostPermission(com.bytedance.android.live.base.api.IHostPermission r1) {
            r0 = this;
            r0.hostPermission = r1
            return
    }

    public void setImpl(com.bytedance.android.live.saas.middleware.applog.IAppLog r1) {
            r0 = this;
            r0.impl = r1
            return
    }

    public void setStandalone(boolean r1) {
            r0 = this;
            r0.standalone = r1
            return
    }

    public void setToBVersion(boolean r1) {
            r0 = this;
            r0.isToBVersion = r1
            return
    }
}
