package com.bianfeng.ymnsdk.entity;

public class UrlLocalState {
    static final int STATE_BACKUP = 1;
    static final int STATE_NORMAL = 0;
    private int backupContinuedFails;
    private int backupRemainTime;
    private java.lang.String currentHost;
    private int hostState;
    private int normalContinuedFails;
    private com.bianfeng.ymnsdk.entity.UrlConfig urlConfig;

    public UrlLocalState(com.bianfeng.ymnsdk.entity.UrlConfig r1) {
            r0 = this;
            r0.<init>()
            r0.urlConfig = r1
            r0.resetNormalContinuedFails()
            r0.resetBackupContinuedFails()
            r0.resetBackupRemainTime()
            r0.setCurrentHostToNormal()
            return
    }

    public java.lang.String getCurrentHost() {
            r1 = this;
            java.lang.String r0 = r1.currentHost
            return r0
    }

    public void increaseBackupContinuedFails() {
            r1 = this;
            int r0 = r1.backupContinuedFails
            int r0 = r0 + 1
            r1.backupContinuedFails = r0
            return
    }

    public void increaseNormalContinuedFails() {
            r1 = this;
            int r0 = r1.normalContinuedFails
            int r0 = r0 + 1
            r1.normalContinuedFails = r0
            return
    }

    public boolean isBackupContinuedFailsLimited() {
            r2 = this;
            int r0 = r2.backupContinuedFails
            com.bianfeng.ymnsdk.entity.UrlConfig r1 = r2.urlConfig
            int r1 = r1.getMaxBackupFails()
            if (r0 < r1) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    public boolean isBackupHost() {
            r2 = this;
            int r0 = r2.hostState
            r1 = 1
            if (r0 != r1) goto L6
            goto L7
        L6:
            r1 = 0
        L7:
            return r1
    }

    public boolean isBackupRemainTimeUseup() {
            r1 = this;
            int r0 = r1.backupRemainTime
            if (r0 > 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public boolean isNormalContinuedFailsLimited() {
            r2 = this;
            int r0 = r2.normalContinuedFails
            com.bianfeng.ymnsdk.entity.UrlConfig r1 = r2.urlConfig
            int r1 = r1.getMaxNormalFails()
            if (r0 < r1) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    public boolean isNormalHost() {
            r1 = this;
            int r0 = r1.hostState
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public void reduceBackupRemainTime() {
            r1 = this;
            int r0 = r1.backupRemainTime
            int r0 = r0 + (-1)
            r1.backupRemainTime = r0
            return
    }

    public void resetBackupContinuedFails() {
            r1 = this;
            r0 = 0
            r1.backupContinuedFails = r0
            return
    }

    public void resetBackupRemainTime() {
            r1 = this;
            com.bianfeng.ymnsdk.entity.UrlConfig r0 = r1.urlConfig
            int r0 = r0.getMaxBackupAvailableCount()
            r1.backupRemainTime = r0
            return
    }

    public void resetNormalContinuedFails() {
            r1 = this;
            r0 = 0
            r1.normalContinuedFails = r0
            return
    }

    public void setCurrentHost(java.lang.String r1) {
            r0 = this;
            r0.currentHost = r1
            return
    }

    public void setCurrentHostToBackup() {
            r1 = this;
            r0 = 1
            r1.hostState = r0
            com.bianfeng.ymnsdk.entity.UrlConfig r0 = r1.urlConfig
            java.lang.String r0 = r0.getBackupHost()
            r1.setCurrentHost(r0)
            return
    }

    public void setCurrentHostToNormal() {
            r1 = this;
            r0 = 0
            r1.hostState = r0
            com.bianfeng.ymnsdk.entity.UrlConfig r0 = r1.urlConfig
            java.lang.String r0 = r0.getNormalHost()
            r1.setCurrentHost(r0)
            return
    }

    public void updateConfig(com.bianfeng.ymnsdk.entity.UrlConfig r2) {
            r1 = this;
            boolean r0 = r1.isNormalHost()
            if (r0 == 0) goto Le
            java.lang.String r0 = r2.getNormalHost()
            r1.setCurrentHost(r0)
            goto L1b
        Le:
            boolean r0 = r1.isBackupHost()
            if (r0 == 0) goto L1b
            java.lang.String r0 = r2.getBackupHost()
            r1.setCurrentHost(r0)
        L1b:
            r1.urlConfig = r2
            return
    }
}
