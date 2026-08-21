package com.czhj.sdk.common.models;

public class Config {
    private static com.czhj.sdk.common.models.Config gInstance;
    private boolean disable_boot_mark;
    private boolean disable_oaid_api;
    private int disable_up_oaid;
    private java.lang.String log;
    private boolean mIsGDPRRegion;
    private int max_send_log_records;
    private int send_log_interval;

    private Config() {
            r1 = this;
            r1.<init>()
            r0 = 100
            r1.max_send_log_records = r0
            r0 = 3
            r1.send_log_interval = r0
            r0 = 0
            r1.mIsGDPRRegion = r0
            return
    }

    public static com.czhj.sdk.common.models.Config sharedInstance() {
            com.czhj.sdk.common.models.Config r0 = com.czhj.sdk.common.models.Config.gInstance
            if (r0 != 0) goto L17
            java.lang.Class<com.czhj.sdk.common.models.Config> r0 = com.czhj.sdk.common.models.Config.class
            monitor-enter(r0)
            com.czhj.sdk.common.models.Config r1 = com.czhj.sdk.common.models.Config.gInstance     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.czhj.sdk.common.models.Config r1 = new com.czhj.sdk.common.models.Config     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.czhj.sdk.common.models.Config.gInstance = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.czhj.sdk.common.models.Config r0 = com.czhj.sdk.common.models.Config.gInstance
            return r0
    }

    public int getDisable_up_OAid() {
            r1 = this;
            int r0 = r1.disable_up_oaid
            return r0
    }

    public java.lang.String getLogUrl() {
            r1 = this;
            java.lang.String r0 = r1.log
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Lb
            java.lang.String r0 = "https://dc.sigmob.cn/log"
            return r0
        Lb:
            java.lang.String r0 = r1.log
            return r0
    }

    public int getMax_send_log_records() {
            r2 = this;
            int r0 = r2.max_send_log_records
            r1 = 10
            if (r0 >= r1) goto La
            r0 = 100
            r2.max_send_log_records = r0
        La:
            int r0 = r2.max_send_log_records
            return r0
    }

    public boolean getOaidApiDisable() {
            r1 = this;
            boolean r0 = r1.disable_oaid_api
            return r0
    }

    public int getSend_log_interval() {
            r1 = this;
            int r0 = r1.send_log_interval
            return r0
    }

    public boolean isDisableBootMark() {
            r1 = this;
            boolean r0 = r1.disable_boot_mark
            return r0
    }

    public boolean isGDPRRegion() {
            r1 = this;
            boolean r0 = r1.mIsGDPRRegion
            return r0
    }

    public void update(boolean r1, boolean r2, boolean r3, int r4, java.lang.String r5, int r6, int r7) {
            r0 = this;
            r0.mIsGDPRRegion = r1
            r0.disable_boot_mark = r2
            r0.disable_oaid_api = r3
            r0.disable_up_oaid = r4
            r0.max_send_log_records = r7
            r0.send_log_interval = r6
            r0.log = r5
            return
    }
}
