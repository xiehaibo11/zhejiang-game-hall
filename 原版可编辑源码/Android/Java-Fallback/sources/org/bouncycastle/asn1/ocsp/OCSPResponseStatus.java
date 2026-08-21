package org.bouncycastle.asn1.ocsp;

public class OCSPResponseStatus extends org.bouncycastle.asn1.DEREnumerated {
    public static final int INTERNAL_ERROR = 2;
    public static final int MALFORMED_REQUEST = 1;
    public static final int SIG_REQUIRED = 5;
    public static final int SUCCESSFUL = 0;
    public static final int TRY_LATER = 3;
    public static final int UNAUTHORIZED = 6;

    public OCSPResponseStatus(int r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public OCSPResponseStatus(org.bouncycastle.asn1.DEREnumerated r1) {
            r0 = this;
            java.math.BigInteger r1 = r1.getValue()
            int r1 = r1.intValue()
            r0.<init>(r1)
            return
    }
}
