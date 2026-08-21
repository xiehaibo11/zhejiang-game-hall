package cz.msebera.android.httpclient.protocol;

public interface HttpContext {
    public static final java.lang.String RESERVED_PREFIX = "http.";

    java.lang.Object getAttribute(java.lang.String r1);

    java.lang.Object removeAttribute(java.lang.String r1);

    void setAttribute(java.lang.String r1, java.lang.Object r2);
}
