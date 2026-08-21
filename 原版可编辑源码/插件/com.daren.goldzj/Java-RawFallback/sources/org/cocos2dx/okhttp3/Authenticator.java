package org.cocos2dx.okhttp3;

public interface Authenticator {
    public static final org.cocos2dx.okhttp3.Authenticator NONE = null;


    static {
            org.cocos2dx.okhttp3.Authenticator$1 r0 = new org.cocos2dx.okhttp3.Authenticator$1
            r0.<init>()
            org.cocos2dx.okhttp3.Authenticator.NONE = r0
            return
    }

    @javax.annotation.Nullable
    org.cocos2dx.okhttp3.Request authenticate(@javax.annotation.Nullable org.cocos2dx.okhttp3.Route r1, org.cocos2dx.okhttp3.Response r2) throws java.io.IOException;
}
