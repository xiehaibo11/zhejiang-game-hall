package com.sigmob.windad.rewardVideo;

public class WindRewardInfo {
    private final boolean a;
    private java.util.HashMap<java.lang.String, java.lang.String> b;

    public WindRewardInfo(boolean r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public java.util.HashMap<java.lang.String, java.lang.String> getOptions() {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r1.b
            return r0
    }

    public boolean isReward() {
            r1 = this;
            boolean r0 = r1.a
            return r0
    }

    public void setOptions(java.util.HashMap<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "WindRewardInfo{options="
            r0.append(r1)
            java.util.HashMap<java.lang.String, java.lang.String> r1 = r2.b
            r0.append(r1)
            java.lang.String r1 = ", isReward="
            r0.append(r1)
            boolean r1 = r2.a
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
