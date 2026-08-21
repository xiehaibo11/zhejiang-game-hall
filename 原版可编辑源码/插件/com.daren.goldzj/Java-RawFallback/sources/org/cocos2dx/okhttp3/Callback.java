package org.cocos2dx.okhttp3;

public interface Callback {
    void onFailure(org.cocos2dx.okhttp3.Call r1, java.io.IOException r2);

    void onResponse(org.cocos2dx.okhttp3.Call r1, org.cocos2dx.okhttp3.Response r2) throws java.io.IOException;
}
