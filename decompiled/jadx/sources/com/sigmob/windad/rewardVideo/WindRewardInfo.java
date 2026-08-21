package com.sigmob.windad.rewardVideo;

import java.util.HashMap;

/* JADX INFO: loaded from: classes3.dex */
public class WindRewardInfo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final boolean f5285a;
    private HashMap<String, String> b;

    public WindRewardInfo(boolean z) {
        this.f5285a = z;
    }

    public HashMap<String, String> getOptions() {
        return this.b;
    }

    public boolean isReward() {
        return this.f5285a;
    }

    public void setOptions(HashMap<String, String> map) {
        this.b = map;
    }

    public String toString() {
        return "WindRewardInfo{options=" + this.b + ", isReward=" + this.f5285a + '}';
    }
}
