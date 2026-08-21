package com.mbridge.msdk.thrid.okhttp;

public interface CookieJar {
    public static final com.mbridge.msdk.thrid.okhttp.CookieJar NO_COOKIES = null;


    static {
            com.mbridge.msdk.thrid.okhttp.CookieJar$1 r0 = new com.mbridge.msdk.thrid.okhttp.CookieJar$1
            r0.<init>()
            com.mbridge.msdk.thrid.okhttp.CookieJar.NO_COOKIES = r0
            return
    }

    java.util.List<com.mbridge.msdk.thrid.okhttp.Cookie> loadForRequest(com.mbridge.msdk.thrid.okhttp.HttpUrl r1);

    void saveFromResponse(com.mbridge.msdk.thrid.okhttp.HttpUrl r1, java.util.List<com.mbridge.msdk.thrid.okhttp.Cookie> r2);
}
