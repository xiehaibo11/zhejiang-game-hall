package cz.msebera.android.httpclient.client.utils;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public class Punycode {
    private static final cz.msebera.android.httpclient.client.utils.Idn impl = null;

    static {
            cz.msebera.android.httpclient.client.utils.JdkIdn r0 = new cz.msebera.android.httpclient.client.utils.JdkIdn     // Catch: java.lang.Exception -> L6
            r0.<init>()     // Catch: java.lang.Exception -> L6
            goto Lb
        L6:
            cz.msebera.android.httpclient.client.utils.Rfc3492Idn r0 = new cz.msebera.android.httpclient.client.utils.Rfc3492Idn
            r0.<init>()
        Lb:
            cz.msebera.android.httpclient.client.utils.Punycode.impl = r0
            return
    }

    public Punycode() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String toUnicode(java.lang.String r1) {
            cz.msebera.android.httpclient.client.utils.Idn r0 = cz.msebera.android.httpclient.client.utils.Punycode.impl
            java.lang.String r1 = r0.toUnicode(r1)
            return r1
    }
}
