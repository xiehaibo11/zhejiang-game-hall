package cz.msebera.android.httpclient.cookie;

public interface ClientCookie extends cz.msebera.android.httpclient.cookie.Cookie {

    @cz.msebera.android.httpclient.annotation.Obsolete
    public static final java.lang.String COMMENTURL_ATTR = "commenturl";

    @cz.msebera.android.httpclient.annotation.Obsolete
    public static final java.lang.String COMMENT_ATTR = "comment";

    @cz.msebera.android.httpclient.annotation.Obsolete
    public static final java.lang.String DISCARD_ATTR = "discard";
    public static final java.lang.String DOMAIN_ATTR = "domain";
    public static final java.lang.String EXPIRES_ATTR = "expires";
    public static final java.lang.String MAX_AGE_ATTR = "max-age";
    public static final java.lang.String PATH_ATTR = "path";

    @cz.msebera.android.httpclient.annotation.Obsolete
    public static final java.lang.String PORT_ATTR = "port";
    public static final java.lang.String SECURE_ATTR = "secure";

    @cz.msebera.android.httpclient.annotation.Obsolete
    public static final java.lang.String VERSION_ATTR = "version";

    boolean containsAttribute(java.lang.String r1);

    java.lang.String getAttribute(java.lang.String r1);
}
