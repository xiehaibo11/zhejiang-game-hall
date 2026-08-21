package org.apache.commons.codec1.digest;

public enum HmacAlgorithms extends java.lang.Enum<org.apache.commons.codec1.digest.HmacAlgorithms> {
    private static final org.apache.commons.codec1.digest.HmacAlgorithms[] ENUM$VALUES = null;
    public static final org.apache.commons.codec1.digest.HmacAlgorithms HMAC_MD5 = null;
    public static final org.apache.commons.codec1.digest.HmacAlgorithms HMAC_SHA_1 = null;
    public static final org.apache.commons.codec1.digest.HmacAlgorithms HMAC_SHA_256 = null;
    public static final org.apache.commons.codec1.digest.HmacAlgorithms HMAC_SHA_384 = null;
    public static final org.apache.commons.codec1.digest.HmacAlgorithms HMAC_SHA_512 = null;
    private final java.lang.String algorithm;

    static {
            org.apache.commons.codec1.digest.HmacAlgorithms r0 = new org.apache.commons.codec1.digest.HmacAlgorithms
            r1 = 0
            java.lang.String r2 = "HMAC_MD5"
            java.lang.String r3 = "HmacMD5"
            r0.<init>(r2, r1, r3)
            org.apache.commons.codec1.digest.HmacAlgorithms.HMAC_MD5 = r0
            org.apache.commons.codec1.digest.HmacAlgorithms r0 = new org.apache.commons.codec1.digest.HmacAlgorithms
            r2 = 1
            java.lang.String r3 = "HMAC_SHA_1"
            java.lang.String r4 = "HmacSHA1"
            r0.<init>(r3, r2, r4)
            org.apache.commons.codec1.digest.HmacAlgorithms.HMAC_SHA_1 = r0
            org.apache.commons.codec1.digest.HmacAlgorithms r0 = new org.apache.commons.codec1.digest.HmacAlgorithms
            r3 = 2
            java.lang.String r4 = "HMAC_SHA_256"
            java.lang.String r5 = "HmacSHA256"
            r0.<init>(r4, r3, r5)
            org.apache.commons.codec1.digest.HmacAlgorithms.HMAC_SHA_256 = r0
            org.apache.commons.codec1.digest.HmacAlgorithms r0 = new org.apache.commons.codec1.digest.HmacAlgorithms
            r4 = 3
            java.lang.String r5 = "HMAC_SHA_384"
            java.lang.String r6 = "HmacSHA384"
            r0.<init>(r5, r4, r6)
            org.apache.commons.codec1.digest.HmacAlgorithms.HMAC_SHA_384 = r0
            org.apache.commons.codec1.digest.HmacAlgorithms r0 = new org.apache.commons.codec1.digest.HmacAlgorithms
            r5 = 4
            java.lang.String r6 = "HMAC_SHA_512"
            java.lang.String r7 = "HmacSHA512"
            r0.<init>(r6, r5, r7)
            org.apache.commons.codec1.digest.HmacAlgorithms.HMAC_SHA_512 = r0
            r6 = 5
            org.apache.commons.codec1.digest.HmacAlgorithms[] r6 = new org.apache.commons.codec1.digest.HmacAlgorithms[r6]
            org.apache.commons.codec1.digest.HmacAlgorithms r7 = org.apache.commons.codec1.digest.HmacAlgorithms.HMAC_MD5
            r6[r1] = r7
            org.apache.commons.codec1.digest.HmacAlgorithms r1 = org.apache.commons.codec1.digest.HmacAlgorithms.HMAC_SHA_1
            r6[r2] = r1
            org.apache.commons.codec1.digest.HmacAlgorithms r1 = org.apache.commons.codec1.digest.HmacAlgorithms.HMAC_SHA_256
            r6[r3] = r1
            org.apache.commons.codec1.digest.HmacAlgorithms r1 = org.apache.commons.codec1.digest.HmacAlgorithms.HMAC_SHA_384
            r6[r4] = r1
            r6[r5] = r0
            org.apache.commons.codec1.digest.HmacAlgorithms.ENUM$VALUES = r6
            return
    }

    HmacAlgorithms(java.lang.String r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.algorithm = r3
            return
    }

    public static org.apache.commons.codec1.digest.HmacAlgorithms valueOf(java.lang.String r1) {
            java.lang.Class<org.apache.commons.codec1.digest.HmacAlgorithms> r0 = org.apache.commons.codec1.digest.HmacAlgorithms.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            org.apache.commons.codec1.digest.HmacAlgorithms r1 = (org.apache.commons.codec1.digest.HmacAlgorithms) r1
            return r1
    }

    public static org.apache.commons.codec1.digest.HmacAlgorithms[] values() {
            org.apache.commons.codec1.digest.HmacAlgorithms[] r0 = org.apache.commons.codec1.digest.HmacAlgorithms.ENUM$VALUES
            int r1 = r0.length
            org.apache.commons.codec1.digest.HmacAlgorithms[] r2 = new org.apache.commons.codec1.digest.HmacAlgorithms[r1]
            r3 = 0
            java.lang.System.arraycopy(r0, r3, r2, r3, r1)
            return r2
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.algorithm
            return r0
    }
}
