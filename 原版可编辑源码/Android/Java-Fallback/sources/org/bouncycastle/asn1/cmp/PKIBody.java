package org.bouncycastle.asn1.cmp;

public class PKIBody extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.ASN1Choice {
    private org.bouncycastle.asn1.ASN1Encodable body;
    private int tagNo;

    private PKIBody(org.bouncycastle.asn1.ASN1TaggedObject r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.getTagNo()
            r3.tagNo = r0
            int r0 = r4.getTagNo()
            switch(r0) {
                case 0: goto Lde;
                case 1: goto Ld5;
                case 2: goto Lde;
                case 3: goto Ld5;
                case 4: goto Lcc;
                case 5: goto Lc3;
                case 6: goto Lba;
                case 7: goto Lde;
                case 8: goto Ld5;
                case 9: goto Lde;
                case 10: goto Lb1;
                case 11: goto La8;
                case 12: goto L9f;
                case 13: goto Lde;
                case 14: goto Ld5;
                case 15: goto L96;
                case 16: goto L8d;
                case 17: goto L84;
                case 18: goto L7b;
                case 19: goto L71;
                case 20: goto L67;
                case 21: goto L5d;
                case 22: goto L53;
                case 23: goto L49;
                case 24: goto L3f;
                case 25: goto L35;
                case 26: goto L2b;
                default: goto L10;
            }
        L10:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown tag number: "
            r1.append(r2)
            int r4 = r4.getTagNo()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L2b:
            org.bouncycastle.asn1.DERObject r4 = r4.getObject()
            org.bouncycastle.asn1.cmp.PollRepContent r4 = org.bouncycastle.asn1.cmp.PollRepContent.getInstance(r4)
            goto Le6
        L35:
            org.bouncycastle.asn1.DERObject r4 = r4.getObject()
            org.bouncycastle.asn1.cmp.PollReqContent r4 = org.bouncycastle.asn1.cmp.PollReqContent.getInstance(r4)
            goto Le6
        L3f:
            org.bouncycastle.asn1.DERObject r4 = r4.getObject()
            org.bouncycastle.asn1.cmp.CertConfirmContent r4 = org.bouncycastle.asn1.cmp.CertConfirmContent.getInstance(r4)
            goto Le6
        L49:
            org.bouncycastle.asn1.DERObject r4 = r4.getObject()
            org.bouncycastle.asn1.cmp.ErrorMsgContent r4 = org.bouncycastle.asn1.cmp.ErrorMsgContent.getInstance(r4)
            goto Le6
        L53:
            org.bouncycastle.asn1.DERObject r4 = r4.getObject()
            org.bouncycastle.asn1.cmp.GenRepContent r4 = org.bouncycastle.asn1.cmp.GenRepContent.getInstance(r4)
            goto Le6
        L5d:
            org.bouncycastle.asn1.DERObject r4 = r4.getObject()
            org.bouncycastle.asn1.cmp.GenMsgContent r4 = org.bouncycastle.asn1.cmp.GenMsgContent.getInstance(r4)
            goto Le6
        L67:
            org.bouncycastle.asn1.DERObject r4 = r4.getObject()
            org.bouncycastle.asn1.cmp.PKIMessages r4 = org.bouncycastle.asn1.cmp.PKIMessages.getInstance(r4)
            goto Le6
        L71:
            org.bouncycastle.asn1.DERObject r4 = r4.getObject()
            org.bouncycastle.asn1.cmp.PKIConfirmContent r4 = org.bouncycastle.asn1.cmp.PKIConfirmContent.getInstance(r4)
            goto Le6
        L7b:
            org.bouncycastle.asn1.DERObject r4 = r4.getObject()
            org.bouncycastle.asn1.cmp.CRLAnnContent r4 = org.bouncycastle.asn1.cmp.CRLAnnContent.getInstance(r4)
            goto Le6
        L84:
            org.bouncycastle.asn1.DERObject r4 = r4.getObject()
            org.bouncycastle.asn1.cmp.RevAnnContent r4 = org.bouncycastle.asn1.cmp.RevAnnContent.getInstance(r4)
            goto Le6
        L8d:
            org.bouncycastle.asn1.DERObject r4 = r4.getObject()
            org.bouncycastle.asn1.cmp.CMPCertificate r4 = org.bouncycastle.asn1.cmp.CMPCertificate.getInstance(r4)
            goto Le6
        L96:
            org.bouncycastle.asn1.DERObject r4 = r4.getObject()
            org.bouncycastle.asn1.cmp.CAKeyUpdAnnContent r4 = org.bouncycastle.asn1.cmp.CAKeyUpdAnnContent.getInstance(r4)
            goto Le6
        L9f:
            org.bouncycastle.asn1.DERObject r4 = r4.getObject()
            org.bouncycastle.asn1.cmp.RevRepContent r4 = org.bouncycastle.asn1.cmp.RevRepContent.getInstance(r4)
            goto Le6
        La8:
            org.bouncycastle.asn1.DERObject r4 = r4.getObject()
            org.bouncycastle.asn1.cmp.RevReqContent r4 = org.bouncycastle.asn1.cmp.RevReqContent.getInstance(r4)
            goto Le6
        Lb1:
            org.bouncycastle.asn1.DERObject r4 = r4.getObject()
            org.bouncycastle.asn1.cmp.KeyRecRepContent r4 = org.bouncycastle.asn1.cmp.KeyRecRepContent.getInstance(r4)
            goto Le6
        Lba:
            org.bouncycastle.asn1.DERObject r4 = r4.getObject()
            org.bouncycastle.asn1.cmp.POPODecKeyRespContent r4 = org.bouncycastle.asn1.cmp.POPODecKeyRespContent.getInstance(r4)
            goto Le6
        Lc3:
            org.bouncycastle.asn1.DERObject r4 = r4.getObject()
            org.bouncycastle.asn1.cmp.POPODecKeyChallContent r4 = org.bouncycastle.asn1.cmp.POPODecKeyChallContent.getInstance(r4)
            goto Le6
        Lcc:
            org.bouncycastle.asn1.DERObject r4 = r4.getObject()
            org.bouncycastle.asn1.pkcs.CertificationRequest r4 = org.bouncycastle.asn1.pkcs.CertificationRequest.getInstance(r4)
            goto Le6
        Ld5:
            org.bouncycastle.asn1.DERObject r4 = r4.getObject()
            org.bouncycastle.asn1.cmp.CertRepMessage r4 = org.bouncycastle.asn1.cmp.CertRepMessage.getInstance(r4)
            goto Le6
        Lde:
            org.bouncycastle.asn1.DERObject r4 = r4.getObject()
            org.bouncycastle.asn1.crmf.CertReqMessages r4 = org.bouncycastle.asn1.crmf.CertReqMessages.getInstance(r4)
        Le6:
            r3.body = r4
            return
    }

    public static org.bouncycastle.asn1.cmp.PKIBody getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cmp.PKIBody
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.cmp.PKIBody r3 = (org.bouncycastle.asn1.cmp.PKIBody) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cmp.PKIBody r0 = new org.bouncycastle.asn1.cmp.PKIBody
            org.bouncycastle.asn1.ASN1TaggedObject r3 = (org.bouncycastle.asn1.ASN1TaggedObject) r3
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

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r4 = this;
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            int r1 = r4.tagNo
            org.bouncycastle.asn1.ASN1Encodable r2 = r4.body
            r3 = 1
            r0.<init>(r3, r1, r2)
            return r0
    }
}
