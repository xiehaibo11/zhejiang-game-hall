package cz.msebera.android.httpclient.client;

public interface CookieStore {
    void addCookie(cz.msebera.android.httpclient.cookie.Cookie r1);

    void clear();

    boolean clearExpired(java.util.Date r1);

    java.util.List<cz.msebera.android.httpclient.cookie.Cookie> getCookies();
}
