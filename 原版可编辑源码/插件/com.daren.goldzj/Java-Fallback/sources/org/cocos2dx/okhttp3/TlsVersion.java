package org.cocos2dx.okhttp3;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public enum TlsVersion extends Enum<TlsVersion> {
    private static final TlsVersion[] $VALUES = null;
    public static final TlsVersion SSL_3_0 = null;
    public static final TlsVersion TLS_1_0 = null;
    public static final TlsVersion TLS_1_1 = null;
    public static final TlsVersion TLS_1_2 = null;
    public static final TlsVersion TLS_1_3 = null;
    final String javaName;

    public static TlsVersion valueOf(String r1) {
        return (TlsVersion) Enum.valueOf(TlsVersion.class, r1);
    }

    public static TlsVersion[] values() {
        return (TlsVersion[]) $VALUES.clone();
    }

    static {
        TLS_1_3 = new TlsVersion("TLS_1_3", 0, "TLSv1.3");
        TLS_1_2 = new TlsVersion("TLS_1_2", 1, "TLSv1.2");
        TLS_1_1 = new TlsVersion("TLS_1_1", 2, "TLSv1.1");
        TLS_1_0 = new TlsVersion("TLS_1_0", 3, "TLSv1");
        SSL_3_0 = new TlsVersion("SSL_3_0", 4, "SSLv3");
        $VALUES = new TlsVersion[]{TLS_1_3, TLS_1_2, TLS_1_1, TLS_1_0, SSL_3_0};
    }

    TlsVersion(String r1, int r2, String r3) {
        this.javaName = r3;
    }

    public static TlsVersion forJavaName(String r6) {
        int r0 = r6.hashCode();
        if (r0 == 79201641) goto L21;
        if (r0 == 79923350) goto L18;
        switch(r0) {
            case -503070503: goto L15;
            case -503070502: goto L12;
            case -503070501: goto L9;
            default: goto L23;
        };
    L23:
        byte r02 = -1;
    L24:
        if (r02 == 0) goto L40;
        if (r02 == 1) goto L38;
        if (r02 == 2) goto L36;
        if (r02 == 3) goto L34;
        if (r02 != 4) goto L32;
        return SSL_3_0;
    L32:
        throw new IllegalArgumentException("Unexpected TLS version: " + r6);
    L34:
        return TLS_1_0;
    L36:
        return TLS_1_1;
    L38:
        return TLS_1_2;
    L40:
        return TLS_1_3;
    L9:
        if (r6.equals("TLSv1.3") == false) goto L23;
        r02 = 0;
        goto L24
    L12:
        if (r6.equals("TLSv1.2") == false) goto L23;
        r02 = 1;
        goto L24
    L15:
        if (r6.equals("TLSv1.1") == false) goto L23;
        r02 = 2;
        goto L24
    L18:
        if (r6.equals("TLSv1") == false) goto L23;
        r02 = 3;
        goto L24
    L21:
        if (r6.equals("SSLv3") == false) goto L23;
        r02 = 4;
        goto L24
    }

    static List<TlsVersion> forJavaNames(String... r4) {
        ArrayList r0 = new ArrayList(r4.length);
        int r1 = r4.length;
        int r2 = 0;
    L3:
        if (r2 >= r1) goto L6;
        r0.add(forJavaName(r4[r2]));
        r2 = r2 + 1;
        goto L3
    L6:
        return Collections.unmodifiableList(r0);
    }

    public String javaName() {
        return this.javaName;
    }
}
