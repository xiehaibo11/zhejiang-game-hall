package cz.msebera.android.httpclient.impl;

public final class ConnSupport {
    public ConnSupport() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.nio.charset.CharsetDecoder createDecoder(cz.msebera.android.httpclient.config.ConnectionConfig r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            java.nio.charset.Charset r1 = r3.getCharset()
            java.nio.charset.CodingErrorAction r2 = r3.getMalformedInputAction()
            java.nio.charset.CodingErrorAction r3 = r3.getUnmappableInputAction()
            if (r1 == 0) goto L29
            java.nio.charset.CharsetDecoder r0 = r1.newDecoder()
            if (r2 == 0) goto L19
            goto L1b
        L19:
            java.nio.charset.CodingErrorAction r2 = java.nio.charset.CodingErrorAction.REPORT
        L1b:
            java.nio.charset.CharsetDecoder r0 = r0.onMalformedInput(r2)
            if (r3 == 0) goto L22
            goto L24
        L22:
            java.nio.charset.CodingErrorAction r3 = java.nio.charset.CodingErrorAction.REPORT
        L24:
            java.nio.charset.CharsetDecoder r3 = r0.onUnmappableCharacter(r3)
            return r3
        L29:
            return r0
    }

    public static java.nio.charset.CharsetEncoder createEncoder(cz.msebera.android.httpclient.config.ConnectionConfig r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            java.nio.charset.Charset r1 = r2.getCharset()
            if (r1 == 0) goto L29
            java.nio.charset.CodingErrorAction r0 = r2.getMalformedInputAction()
            java.nio.charset.CodingErrorAction r2 = r2.getUnmappableInputAction()
            java.nio.charset.CharsetEncoder r1 = r1.newEncoder()
            if (r0 == 0) goto L19
            goto L1b
        L19:
            java.nio.charset.CodingErrorAction r0 = java.nio.charset.CodingErrorAction.REPORT
        L1b:
            java.nio.charset.CharsetEncoder r0 = r1.onMalformedInput(r0)
            if (r2 == 0) goto L22
            goto L24
        L22:
            java.nio.charset.CodingErrorAction r2 = java.nio.charset.CodingErrorAction.REPORT
        L24:
            java.nio.charset.CharsetEncoder r2 = r0.onUnmappableCharacter(r2)
            return r2
        L29:
            return r0
    }
}
