package org.bouncycastle.asn1;

class DERFactory {
    static final org.bouncycastle.asn1.DERSequence EMPTY_SEQUENCE = null;
    static final org.bouncycastle.asn1.DERSet EMPTY_SET = null;

    static {
            org.bouncycastle.asn1.DERSequence r0 = new org.bouncycastle.asn1.DERSequence
            r0.<init>()
            org.bouncycastle.asn1.DERFactory.EMPTY_SEQUENCE = r0
            org.bouncycastle.asn1.DERSet r0 = new org.bouncycastle.asn1.DERSet
            r0.<init>()
            org.bouncycastle.asn1.DERFactory.EMPTY_SET = r0
            return
    }

    DERFactory() {
            r0 = this;
            r0.<init>()
            return
    }

    static org.bouncycastle.asn1.DERSequence createSequence(org.bouncycastle.asn1.ASN1EncodableVector r2) {
            int r0 = r2.size()
            r1 = 1
            if (r0 >= r1) goto La
            org.bouncycastle.asn1.DERSequence r2 = org.bouncycastle.asn1.DERFactory.EMPTY_SEQUENCE
            goto L10
        La:
            org.bouncycastle.asn1.DERSequence r0 = new org.bouncycastle.asn1.DERSequence
            r0.<init>(r2)
            r2 = r0
        L10:
            return r2
    }

    static org.bouncycastle.asn1.DERSet createSet(org.bouncycastle.asn1.ASN1EncodableVector r2) {
            int r0 = r2.size()
            r1 = 1
            if (r0 >= r1) goto La
            org.bouncycastle.asn1.DERSet r2 = org.bouncycastle.asn1.DERFactory.EMPTY_SET
            goto L10
        La:
            org.bouncycastle.asn1.DERSet r0 = new org.bouncycastle.asn1.DERSet
            r0.<init>(r2)
            r2 = r0
        L10:
            return r2
    }

    static org.bouncycastle.asn1.DERSet createSet(org.bouncycastle.asn1.ASN1EncodableVector r2, boolean r3) {
            int r0 = r2.size()
            r1 = 1
            if (r0 >= r1) goto La
            org.bouncycastle.asn1.DERSet r2 = org.bouncycastle.asn1.DERFactory.EMPTY_SET
            goto L10
        La:
            org.bouncycastle.asn1.DERSet r0 = new org.bouncycastle.asn1.DERSet
            r0.<init>(r2, r3)
            r2 = r0
        L10:
            return r2
    }
}
