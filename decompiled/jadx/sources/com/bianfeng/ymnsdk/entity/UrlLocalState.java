package com.bianfeng.ymnsdk.entity;

/* JADX INFO: loaded from: classes.dex */
public class UrlLocalState {
    static final int STATE_BACKUP = 1;
    static final int STATE_NORMAL = 0;
    private int backupContinuedFails;
    private int backupRemainTime;
    private String currentHost;
    private int hostState;
    private int normalContinuedFails;
    private UrlConfig urlConfig;

    public UrlLocalState(UrlConfig urlConfig) {
        this.urlConfig = urlConfig;
        resetNormalContinuedFails();
        resetBackupContinuedFails();
        resetBackupRemainTime();
        setCurrentHostToNormal();
    }

    public void updateConfig(UrlConfig urlConfig) {
        if (isNormalHost()) {
            setCurrentHost(urlConfig.getNormalHost());
        } else if (isBackupHost()) {
            setCurrentHost(urlConfig.getBackupHost());
        }
        this.urlConfig = urlConfig;
    }

    public boolean isNormalHost() {
        return this.hostState == 0;
    }

    public boolean isBackupHost() {
        return this.hostState == 1;
    }

    public String getCurrentHost() {
        return this.currentHost;
    }

    public void setCurrentHost(String currentHost) {
        this.currentHost = currentHost;
    }

    public void setCurrentHostToNormal() {
        this.hostState = 0;
        setCurrentHost(this.urlConfig.getNormalHost());
    }

    public void setCurrentHostToBackup() {
        this.hostState = 1;
        setCurrentHost(this.urlConfig.getBackupHost());
    }

    public void increaseNormalContinuedFails() {
        this.normalContinuedFails++;
    }

    public void resetNormalContinuedFails() {
        this.normalContinuedFails = 0;
    }

    public boolean isNormalContinuedFailsLimited() {
        return this.normalContinuedFails >= this.urlConfig.getMaxNormalFails();
    }

    public void increaseBackupContinuedFails() {
        this.backupContinuedFails++;
    }

    public void resetBackupContinuedFails() {
        this.backupContinuedFails = 0;
    }

    public boolean isBackupContinuedFailsLimited() {
        return this.backupContinuedFails >= this.urlConfig.getMaxBackupFails();
    }

    public void reduceBackupRemainTime() {
        this.backupRemainTime--;
    }

    public void resetBackupRemainTime() {
        this.backupRemainTime = this.urlConfig.getMaxBackupAvailableCount();
    }

    public boolean isBackupRemainTimeUseup() {
        return this.backupRemainTime <= 0;
    }
}
