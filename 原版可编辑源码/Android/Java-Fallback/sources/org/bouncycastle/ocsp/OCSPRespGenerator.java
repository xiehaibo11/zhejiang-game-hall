package org.bouncycastle.ocsp;

public class OCSPRespGenerator {
    public static final int INTERNAL_ERROR = 2;
    public static final int MALFORMED_REQUEST = 1;
    public static final int SIG_REQUIRED = 5;
    public static final int SUCCESSFUL = 0;
    public static final int TRY_LATER = 3;
    public static final int UNAUTHORIZED = 6;

    public OCSPRespGenerator() {
            r0 = this;
            r0.<init>()
            return
    }

    public org.bouncycastle.ocsp.OCSPResp generate(int r4, java.lang.Object r5) throws org.bouncycastle.ocsp.OCSPException {
            r3 = this;
            if (r5 != 0) goto L13
            org.bouncycastle.ocsp.OCSPResp r5 = new org.bouncycastle.ocsp.OCSPResp
            org.bouncycastle.asn1.ocsp.OCSPResponse r0 = new org.bouncycastle.asn1.ocsp.OCSPResponse
            org.bouncycastle.asn1.ocsp.OCSPResponseStatus r1 = new org.bouncycastle.asn1.ocsp.OCSPResponseStatus
            r1.<init>(r4)
            r4 = 0
            r0.<init>(r1, r4)
            r5.<init>(r0)
            return r5
        L13:
            boolean r0 = r5 instanceof org.bouncycastle.ocsp.BasicOCSPResp
            if (r0 == 0) goto L42
            org.bouncycastle.ocsp.BasicOCSPResp r5 = (org.bouncycastle.ocsp.BasicOCSPResp) r5
            org.bouncycastle.asn1.DEROctetString r0 = new org.bouncycastle.asn1.DEROctetString     // Catch: java.io.IOException -> L39
            byte[] r5 = r5.getEncoded()     // Catch: java.io.IOException -> L39
            r0.<init>(r5)     // Catch: java.io.IOException -> L39
            org.bouncycastle.asn1.ocsp.ResponseBytes r5 = new org.bouncycastle.asn1.ocsp.ResponseBytes
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.ocsp.OCSPObjectIdentifiers.id_pkix_ocsp_basic
            r5.<init>(r1, r0)
            org.bouncycastle.ocsp.OCSPResp r0 = new org.bouncycastle.ocsp.OCSPResp
            org.bouncycastle.asn1.ocsp.OCSPResponse r1 = new org.bouncycastle.asn1.ocsp.OCSPResponse
            org.bouncycastle.asn1.ocsp.OCSPResponseStatus r2 = new org.bouncycastle.asn1.ocsp.OCSPResponseStatus
            r2.<init>(r4)
            r1.<init>(r2, r5)
            r0.<init>(r1)
            return r0
        L39:
            r4 = move-exception
            org.bouncycastle.ocsp.OCSPException r5 = new org.bouncycastle.ocsp.OCSPException
            java.lang.String r0 = "can't encode object."
            r5.<init>(r0, r4)
            throw r5
        L42:
            org.bouncycastle.ocsp.OCSPException r4 = new org.bouncycastle.ocsp.OCSPException
            java.lang.String r5 = "unknown response object"
            r4.<init>(r5)
            throw r4
    }
}
