package com.bianfeng.ymnsdk.feature.protocol;

import java.util.Map;

public interface ISocialFeature {
    void showAchievements();

    void showLeaderboard(String r1);

    void signIn();

    void signOut();

    void submitScore(String r1, long r2);

    void unlockAchievement(Map<String, String> r1);
}
