package cz.msebera.android.httpclient.cookie;

public interface Cookie {
    @cz.msebera.android.httpclient.annotation.Obsolete
    java.lang.String getComment();

    @cz.msebera.android.httpclient.annotation.Obsolete
    java.lang.String getCommentURL();

    java.lang.String getDomain();

    java.util.Date getExpiryDate();

    java.lang.String getName();

    java.lang.String getPath();

    @cz.msebera.android.httpclient.annotation.Obsolete
    int[] getPorts();

    java.lang.String getValue();

    @cz.msebera.android.httpclient.annotation.Obsolete
    int getVersion();

    boolean isExpired(java.util.Date r1);

    boolean isPersistent();

    boolean isSecure();
}
