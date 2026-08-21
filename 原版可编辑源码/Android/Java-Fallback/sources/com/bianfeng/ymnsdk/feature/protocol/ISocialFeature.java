package com.bianfeng.ymnsdk.feature.protocol;

public interface ISocialFeature {
    void showAchievements();

    void showLeaderboard(java.lang.String r1);

    void signIn();

    void signOut();

    void submitScore(java.lang.String r1, long r2);

    void unlockAchievement(java.util.Map<java.lang.String, java.lang.String> r1);
}
