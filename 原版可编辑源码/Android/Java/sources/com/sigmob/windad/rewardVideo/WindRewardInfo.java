package com.sigmob.windad.rewardVideo;

import java.util.HashMap;

public class WindRewardInfo {
    private final boolean a;
    private HashMap<String, String> b;

    public WindRewardInfo(boolean z) {
        this.a = z;
    }

    public HashMap<String, String> getOptions() {
        return this.b;
    }

    public boolean isReward() {
        return this.a;
    }

    public void setOptions(HashMap<String, String> map) {
        this.b = map;
    }

    public String toString() {
        return "WindRewardInfo{options=" + this.b + ", isReward=" + this.a + '}';
    }
}
