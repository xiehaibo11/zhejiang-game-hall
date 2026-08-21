package org.bouncycastle.asn1.cmp;

public class PKIFailureInfo extends org.bouncycastle.asn1.DERBitString {
    public static final int ADD_INFO_NOT_AVAILABLE = 4194304;
    public static final int BAD_ALG = 128;
    public static final int BAD_CERT_ID = 8;
    public static final int BAD_DATA_FORMAT = 4;
    public static final int BAD_MESSAGE_CHECK = 64;
    public static final int BAD_POP = 16384;
    public static final int BAD_REQUEST = 32;
    public static final int BAD_TIME = 16;
    public static final int INCORRECT_DATA = 1;
    public static final int MISSING_TIME_STAMP = 32768;
    public static final int SYSTEM_FAILURE = 1073741824;
    public static final int TIME_NOT_AVAILABLE = 512;
    public static final int UNACCEPTED_EXTENSION = 8388608;
    public static final int UNACCEPTED_POLICY = 256;
    public static final int WRONG_AUTHORITY = 2;
    public static final int addInfoNotAvailable = 4194304;
    public static final int badAlg = 128;
    public static final int badCertId = 8;
    public static final int badDataFormat = 4;
    public static final int badMessageCheck = 64;
    public static final int badPOP = 16384;
    public static final int badRequest = 32;
    public static final int badTime = 16;
    public static final int incorrectData = 1;
    public static final int missingTimeStamp = 32768;
    public static final int systemFailure = 1073741824;
    public static final int timeNotAvailable = 512;
    public static final int unacceptedExtension = 8388608;
    public static final int unacceptedPolicy = 256;
    public static final int wrongAuthority = 2;

    public PKIFailureInfo(int r2) {
            r1 = this;
            byte[] r0 = getBytes(r2)
            int r2 = getPadBits(r2)
            r1.<init>(r0, r2)
            return
    }

    public PKIFailureInfo(org.bouncycastle.asn1.DERBitString r2) {
            r1 = this;
            byte[] r0 = r2.getBytes()
            int r2 = r2.getPadBits()
            r1.<init>(r0, r2)
            return
    }

    @Override
    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "PKIFailureInfo: 0x"
            r0.append(r1)
            int r1 = r2.intValue()
            java.lang.String r1 = java.lang.Integer.toHexString(r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
