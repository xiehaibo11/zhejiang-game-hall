package cz.msebera.android.httpclient.cookie;

public interface SetCookie extends cz.msebera.android.httpclient.cookie.Cookie {
    @cz.msebera.android.httpclient.annotation.Obsolete
    void setComment(java.lang.String r1);

    void setDomain(java.lang.String r1);

    void setExpiryDate(java.util.Date r1);

    void setPath(java.lang.String r1);

    void setSecure(boolean r1);

    void setValue(java.lang.String r1);

    @cz.msebera.android.httpclient.annotation.Obsolete
    void setVersion(int r1);
}
