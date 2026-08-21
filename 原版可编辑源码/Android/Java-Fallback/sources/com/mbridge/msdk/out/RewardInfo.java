package com.mbridge.msdk.out;

public class RewardInfo implements com.mbridge.msdk.system.NoProGuard, java.io.Serializable {
    private boolean isCompleteView;
    private int rewardAlertStatus;
    private java.lang.String rewardAmount;
    private java.lang.String rewardName;

    public RewardInfo(boolean r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.isCompleteView = r1
            r0.rewardAlertStatus = r2
            return
    }

    public RewardInfo(boolean r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            r0.<init>()
            r0.isCompleteView = r1
            r0.rewardName = r2
            r0.rewardAmount = r3
            return
    }

    public RewardInfo(boolean r1, java.lang.String r2, java.lang.String r3, int r4) {
            r0 = this;
            r0.<init>()
            r0.isCompleteView = r1
            r0.rewardName = r2
            r0.rewardAmount = r3
            r0.rewardAlertStatus = r4
            return
    }

    public int getRewardAlertStatus() {
            r1 = this;
            int r0 = r1.rewardAlertStatus
            return r0
    }

    public java.lang.String getRewardAmount() {
            r1 = this;
            java.lang.String r0 = r1.rewardAmount
            return r0
    }

    public java.lang.String getRewardName() {
            r1 = this;
            java.lang.String r0 = r1.rewardName
            return r0
    }

    public boolean isCompleteView() {
            r1 = this;
            boolean r0 = r1.isCompleteView
            return r0
    }

    public void setCompleteView(boolean r1) {
            r0 = this;
            r0.isCompleteView = r1
            return
    }

    public void setRewardAlertStatus(int r1) {
            r0 = this;
            r0.rewardAlertStatus = r1
            return
    }

    public void setRewardAmount(java.lang.String r1) {
            r0 = this;
            r0.rewardAmount = r1
            return
    }

    public void setRewardName(java.lang.String r1) {
            r0 = this;
            r0.rewardName = r1
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "RewardInfo{isCompleteView="
            r0.append(r1)
            boolean r1 = r3.isCompleteView
            r0.append(r1)
            java.lang.String r1 = ", rewardName='"
            r0.append(r1)
            java.lang.String r1 = r3.rewardName
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", rewardAmount='"
            r0.append(r2)
            java.lang.String r2 = r3.rewardAmount
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = ", rewardAlertStatus="
            r0.append(r1)
            int r1 = r3.rewardAlertStatus
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
