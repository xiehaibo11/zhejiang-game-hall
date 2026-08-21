package cz.msebera.android.httpclient.cookie;

public interface CookieSpec {
    java.util.List<cz.msebera.android.httpclient.Header> formatCookies(java.util.List<cz.msebera.android.httpclient.cookie.Cookie> r1);

    @cz.msebera.android.httpclient.annotation.Obsolete
    int getVersion();

    @cz.msebera.android.httpclient.annotation.Obsolete
    cz.msebera.android.httpclient.Header getVersionHeader();

    boolean match(cz.msebera.android.httpclient.cookie.Cookie r1, cz.msebera.android.httpclient.cookie.CookieOrigin r2);

    java.util.List<cz.msebera.android.httpclient.cookie.Cookie> parse(cz.msebera.android.httpclient.Header r1, cz.msebera.android.httpclient.cookie.CookieOrigin r2) throws cz.msebera.android.httpclient.cookie.MalformedCookieException;

    void validate(cz.msebera.android.httpclient.cookie.Cookie r1, cz.msebera.android.httpclient.cookie.CookieOrigin r2) throws cz.msebera.android.httpclient.cookie.MalformedCookieException;
}
