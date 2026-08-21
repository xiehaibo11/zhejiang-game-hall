package com.tencent.mm.opensdk.diffdev;

public interface IDiffDevOAuth {
    void addListener(com.tencent.mm.opensdk.diffdev.OAuthListener r1);

    boolean auth(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, com.tencent.mm.opensdk.diffdev.OAuthListener r6);

    void detach();

    void removeAllListeners();

    void removeListener(com.tencent.mm.opensdk.diffdev.OAuthListener r1);

    boolean stopAuth();
}
