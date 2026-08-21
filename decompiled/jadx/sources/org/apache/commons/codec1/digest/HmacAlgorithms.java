package org.apache.commons.codec1.digest;

/* JADX INFO: loaded from: classes4.dex */
public enum HmacAlgorithms {
    HMAC_MD5("HmacMD5"),
    HMAC_SHA_1("HmacSHA1"),
    HMAC_SHA_256("HmacSHA256"),
    HMAC_SHA_384("HmacSHA384"),
    HMAC_SHA_512("HmacSHA512");

    private final String algorithm;

    /* JADX INFO: renamed from: values, reason: to resolve conflict with enum method */
    public static HmacAlgorithms[] valuesCustom() {
        HmacAlgorithms[] hmacAlgorithmsArrValuesCustom = values();
        int length = hmacAlgorithmsArrValuesCustom.length;
        HmacAlgorithms[] hmacAlgorithmsArr = new HmacAlgorithms[length];
        System.arraycopy(hmacAlgorithmsArrValuesCustom, 0, hmacAlgorithmsArr, 0, length);
        return hmacAlgorithmsArr;
    }

    HmacAlgorithms(String str) {
        this.algorithm = str;
    }

    @Override // java.lang.Enum
    public String toString() {
        return this.algorithm;
    }
}
