package org.bouncycastle.asn1.cmp;

public class PKIHeader extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.cmp.PKIFreeText freeText;
    private org.bouncycastle.asn1.ASN1Sequence generalInfo;
    private org.bouncycastle.asn1.DERGeneralizedTime messageTime;
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier protectionAlg;
    private org.bouncycastle.asn1.DERInteger pvno;
    private org.bouncycastle.asn1.ASN1OctetString recipKID;
    private org.bouncycastle.asn1.ASN1OctetString recipNonce;
    private org.bouncycastle.asn1.x509.GeneralName recipient;
    private org.bouncycastle.asn1.x509.GeneralName sender;
    private org.bouncycastle.asn1.ASN1OctetString senderKID;
    private org.bouncycastle.asn1.ASN1OctetString senderNonce;
    private org.bouncycastle.asn1.ASN1OctetString transactionID;

    private PKIHeader(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            java.util.Enumeration r4 = r4.getObjects()
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0)
            r3.pvno = r0
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.x509.GeneralName r0 = org.bouncycastle.asn1.x509.GeneralName.getInstance(r0)
            r3.sender = r0
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.x509.GeneralName r0 = org.bouncycastle.asn1.x509.GeneralName.getInstance(r0)
            r3.recipient = r0
        L25:
            boolean r0 = r4.hasMoreElements()
            if (r0 == 0) goto L93
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.ASN1TaggedObject r0 = (org.bouncycastle.asn1.ASN1TaggedObject) r0
            int r1 = r0.getTagNo()
            r2 = 1
            switch(r1) {
                case 0: goto L8c;
                case 1: goto L85;
                case 2: goto L7e;
                case 3: goto L77;
                case 4: goto L70;
                case 5: goto L69;
                case 6: goto L62;
                case 7: goto L5b;
                case 8: goto L54;
                default: goto L39;
            }
        L39:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown tag number: "
            r1.append(r2)
            int r0 = r0.getTagNo()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r4.<init>(r0)
            throw r4
        L54:
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r2)
            r3.generalInfo = r0
            goto L25
        L5b:
            org.bouncycastle.asn1.cmp.PKIFreeText r0 = org.bouncycastle.asn1.cmp.PKIFreeText.getInstance(r0, r2)
            r3.freeText = r0
            goto L25
        L62:
            org.bouncycastle.asn1.ASN1OctetString r0 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r0, r2)
            r3.recipNonce = r0
            goto L25
        L69:
            org.bouncycastle.asn1.ASN1OctetString r0 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r0, r2)
            r3.senderNonce = r0
            goto L25
        L70:
            org.bouncycastle.asn1.ASN1OctetString r0 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r0, r2)
            r3.transactionID = r0
            goto L25
        L77:
            org.bouncycastle.asn1.ASN1OctetString r0 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r0, r2)
            r3.recipKID = r0
            goto L25
        L7e:
            org.bouncycastle.asn1.ASN1OctetString r0 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r0, r2)
            r3.senderKID = r0
            goto L25
        L85:
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0, r2)
            r3.protectionAlg = r0
            goto L25
        L8c:
            org.bouncycastle.asn1.DERGeneralizedTime r0 = org.bouncycastle.asn1.DERGeneralizedTime.getInstance(r0, r2)
            r3.messageTime = r0
            goto L25
        L93:
            return
    }

    private void addOptional(org.bouncycastle.asn1.ASN1EncodableVector r3, int r4, org.bouncycastle.asn1.ASN1Encodable r5) {
            r2 = this;
            if (r5 == 0) goto Lb
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            r1 = 1
            r0.<init>(r1, r4, r5)
            r3.add(r0)
        Lb:
            return
    }

    public static org.bouncycastle.asn1.cmp.PKIHeader getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cmp.PKIHeader
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.cmp.PKIHeader r3 = (org.bouncycastle.asn1.cmp.PKIHeader) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cmp.PKIHeader r0 = new org.bouncycastle.asn1.cmp.PKIHeader
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

    public org.bouncycastle.asn1.DERInteger getPvno() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.pvno
            return r0
    }

    public org.bouncycastle.asn1.x509.GeneralName getRecipient() {
            r1 = this;
            org.bouncycastle.asn1.x509.GeneralName r0 = r1.recipient
            return r0
    }

    public org.bouncycastle.asn1.x509.GeneralName getSender() {
            r1 = this;
            org.bouncycastle.asn1.x509.GeneralName r0 = r1.sender
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r3 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = r3.pvno
            r0.add(r1)
            org.bouncycastle.asn1.x509.GeneralName r1 = r3.sender
            r0.add(r1)
            org.bouncycastle.asn1.x509.GeneralName r1 = r3.recipient
            r0.add(r1)
            org.bouncycastle.asn1.DERGeneralizedTime r1 = r3.messageTime
            r2 = 0
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r3.protectionAlg
            r2 = 1
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.ASN1OctetString r1 = r3.senderKID
            r2 = 2
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.ASN1OctetString r1 = r3.recipKID
            r2 = 3
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.ASN1OctetString r1 = r3.transactionID
            r2 = 4
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.ASN1OctetString r1 = r3.senderNonce
            r2 = 5
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.ASN1OctetString r1 = r3.recipNonce
            r2 = 6
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.cmp.PKIFreeText r1 = r3.freeText
            r2 = 7
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.ASN1Sequence r1 = r3.generalInfo
            r2 = 8
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
