package cz.msebera.android.httpclient;

public final class Consts {
    public static final java.nio.charset.Charset ASCII = null;
    public static final int CR = 13;
    public static final int HT = 9;
    public static final java.nio.charset.Charset ISO_8859_1 = null;
    public static final int LF = 10;
    public static final int SP = 32;
    public static final java.nio.charset.Charset UTF_8 = null;

    static {
            java.lang.String r0 = "UTF-8"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            cz.msebera.android.httpclient.Consts.UTF_8 = r0
            java.lang.String r0 = "US-ASCII"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            cz.msebera.android.httpclient.Consts.ASCII = r0
            java.lang.String r0 = "ISO-8859-1"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            cz.msebera.android.httpclient.Consts.ISO_8859_1 = r0
            return
    }

    private Consts() {
            r0 = this;
            r0.<init>()
            return
    }
}
