package cz.msebera.android.httpclient.cookie;

public interface CookieAttributeHandler {
    boolean match(cz.msebera.android.httpclient.cookie.Cookie r1, cz.msebera.android.httpclient.cookie.CookieOrigin r2);

    void parse(cz.msebera.android.httpclient.cookie.SetCookie r1, java.lang.String r2) throws cz.msebera.android.httpclient.cookie.MalformedCookieException;

    void validate(cz.msebera.android.httpclient.cookie.Cookie r1, cz.msebera.android.httpclient.cookie.CookieOrigin r2) throws cz.msebera.android.httpclient.cookie.MalformedCookieException;
}
