package org.bouncycastle.asn1.cmp;

public class ErrorMsgContent extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.DERInteger errorCode;
    private org.bouncycastle.asn1.cmp.PKIFreeText errorDetails;
    private org.bouncycastle.asn1.cmp.PKIStatusInfo pKIStatusInfo;

    private ErrorMsgContent(org.bouncycastle.asn1.ASN1Sequence r3) {
            r2 = this;
            r2.<init>()
            java.util.Enumeration r3 = r3.getObjects()
            java.lang.Object r0 = r3.nextElement()
            org.bouncycastle.asn1.cmp.PKIStatusInfo r0 = org.bouncycastle.asn1.cmp.PKIStatusInfo.getInstance(r0)
            r2.pKIStatusInfo = r0
        L11:
            boolean r0 = r3.hasMoreElements()
            if (r0 == 0) goto L2d
            java.lang.Object r0 = r3.nextElement()
            boolean r1 = r0 instanceof org.bouncycastle.asn1.DERInteger
            if (r1 == 0) goto L26
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0)
            r2.errorCode = r0
            goto L11
        L26:
            org.bouncycastle.asn1.cmp.PKIFreeText r0 = org.bouncycastle.asn1.cmp.PKIFreeText.getInstance(r0)
            r2.errorDetails = r0
            goto L11
        L2d:
            return
    }

    private void addOptional(org.bouncycastle.asn1.ASN1EncodableVector r1, org.bouncycastle.asn1.ASN1Encodable r2) {
            r0 = this;
            if (r2 == 0) goto L5
            r1.add(r2)
        L5:
            return
    }

    public static org.bouncycastle.asn1.cmp.ErrorMsgContent getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cmp.ErrorMsgContent
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.cmp.ErrorMsgContent r3 = (org.bouncycastle.asn1.cmp.ErrorMsgContent) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cmp.ErrorMsgContent r0 = new org.bouncycastle.asn1.cmp.ErrorMsgContent
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid object: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public org.bouncycastle.asn1.DERInteger getErrorCode() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.errorCode
            return r0
    }

    public org.bouncycastle.asn1.cmp.PKIFreeText getErrorDetails() {
            r1 = this;
            org.bouncycastle.asn1.cmp.PKIFreeText r0 = r1.errorDetails
            return r0
    }

    public org.bouncycastle.asn1.cmp.PKIStatusInfo getPKIStatusInfo() {
            r1 = this;
            org.bouncycastle.asn1.cmp.PKIStatusInfo r0 = r1.pKIStatusInfo
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.cmp.PKIStatusInfo r1 = r2.pKIStatusInfo
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = r2.errorCode
            r2.addOptional(r0, r1)
            org.bouncycastle.asn1.cmp.PKIFreeText r1 = r2.errorDetails
            r2.addOptional(r0, r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
