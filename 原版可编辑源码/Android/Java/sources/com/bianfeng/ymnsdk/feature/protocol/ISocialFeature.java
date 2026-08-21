package com.bianfeng.ymnsdk.feature.protocol;

import java.util.Map;

public interface ISocialFeature {
    void showAchievements();

    void showLeaderboard(String str);

    void signIn();

    void signOut();

    void submitScore(String str, long j);

    void unlockAchievement(Map<String, String> map);
}
