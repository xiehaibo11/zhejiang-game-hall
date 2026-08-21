package org.cocos2dx.okhttp3;

public interface CookieJar {
    public static final org.cocos2dx.okhttp3.CookieJar NO_COOKIES = null;


    static {
            org.cocos2dx.okhttp3.CookieJar$1 r0 = new org.cocos2dx.okhttp3.CookieJar$1
            r0.<init>()
            org.cocos2dx.okhttp3.CookieJar.NO_COOKIES = r0
            return
    }

    java.util.List<org.cocos2dx.okhttp3.Cookie> loadForRequest(org.cocos2dx.okhttp3.HttpUrl r1);

    void saveFromResponse(org.cocos2dx.okhttp3.HttpUrl r1, java.util.List<org.cocos2dx.okhttp3.Cookie> r2);
}
