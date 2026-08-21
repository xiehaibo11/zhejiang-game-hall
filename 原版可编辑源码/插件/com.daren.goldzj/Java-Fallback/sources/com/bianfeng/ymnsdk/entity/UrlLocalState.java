package com.bianfeng.ymnsdk.entity;

public class UrlLocalState {
    static final int STATE_BACKUP = 1;
    static final int STATE_NORMAL = 0;
    private int backupContinuedFails;
    private int backupRemainTime;
    private String currentHost;
    private int hostState;
    private int normalContinuedFails;
    private UrlConfig urlConfig;

    public UrlLocalState(UrlConfig r1) {
        this.urlConfig = r1;
        resetNormalContinuedFails();
        resetBackupContinuedFails();
        resetBackupRemainTime();
        setCurrentHostToNormal();
    }

    public String getCurrentHost() {
        return this.currentHost;
    }

    public void increaseBackupContinuedFails() {
        this.backupContinuedFails++;
    }

    public void increaseNormalContinuedFails() {
        this.normalContinuedFails++;
    }

    public boolean isBackupContinuedFailsLimited() {
        if (this.backupContinuedFails < this.urlConfig.getMaxBackupFails()) goto L5;
        return true;
    L5:
        return false;
    }

    public boolean isBackupHost() {
        if (this.hostState == 1) goto L7;
        return false;
    L7:
        return true;
    }

    public boolean isBackupRemainTimeUseup() {
        if (this.backupRemainTime > 0) goto L5;
        return true;
    L5:
        return false;
    }

    public boolean isNormalContinuedFailsLimited() {
        if (this.normalContinuedFails < this.urlConfig.getMaxNormalFails()) goto L5;
        return true;
    L5:
        return false;
    }

    public boolean isNormalHost() {
        if (this.hostState != 0) goto L5;
        return true;
    L5:
        return false;
    }

    public void reduceBackupRemainTime() {
        this.backupRemainTime--;
    }

    public void resetBackupContinuedFails() {
        this.backupContinuedFails = 0;
    }

    public void resetBackupRemainTime() {
        this.backupRemainTime = this.urlConfig.getMaxBackupAvailableCount();
    }

    public void resetNormalContinuedFails() {
        this.normalContinuedFails = 0;
    }

    public void setCurrentHost(String r1) {
        this.currentHost = r1;
    }

    public void setCurrentHostToBackup() {
        this.hostState = 1;
        setCurrentHost(this.urlConfig.getBackupHost());
    }

    public void setCurrentHostToNormal() {
        this.hostState = 0;
        setCurrentHost(this.urlConfig.getNormalHost());
    }

    public void updateConfig(UrlConfig r2) {
        if (isNormalHost() == false) goto L6;
        setCurrentHost(r2.getNormalHost());
    L8:
        this.urlConfig = r2;
        return;
    L6:
        if (isBackupHost() == false) goto L8;
        setCurrentHost(r2.getBackupHost());
        goto L8
    }
}
