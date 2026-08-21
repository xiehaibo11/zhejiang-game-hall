package org.bouncycastle.asn1.x509;

public class AlgorithmIdentifier extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.DERObjectIdentifier objectId;
    private org.bouncycastle.asn1.DEREncodable parameters;
    private boolean parametersDefined;

    public AlgorithmIdentifier(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.parametersDefined = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            r0.<init>(r2)
            r1.objectId = r0
            return
    }

    public AlgorithmIdentifier(org.bouncycastle.asn1.ASN1Sequence r5) {
            r4 = this;
            r4.<init>()
            r0 = 0
            r4.parametersDefined = r0
            int r1 = r5.size()
            r2 = 1
            if (r1 < r2) goto L2f
            int r1 = r5.size()
            r3 = 2
            if (r1 > r3) goto L2f
            org.bouncycastle.asn1.DEREncodable r0 = r5.getObjectAt(r0)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.DERObjectIdentifier.getInstance(r0)
            r4.objectId = r0
            int r0 = r5.size()
            if (r0 != r3) goto L2b
            r4.parametersDefined = r2
            org.bouncycastle.asn1.DEREncodable r5 = r5.getObjectAt(r2)
            goto L2c
        L2b:
            r5 = 0
        L2c:
            r4.parameters = r5
            return
        L2f:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Bad sequence size: "
            r1.append(r2)
            int r5 = r5.size()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
    }

    public AlgorithmIdentifier(org.bouncycastle.asn1.DERObjectIdentifier r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.parametersDefined = r0
            r1.objectId = r2
            return
    }

    public AlgorithmIdentifier(org.bouncycastle.asn1.DERObjectIdentifier r2, org.bouncycastle.asn1.DEREncodable r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.parametersDefined = r0
            r0 = 1
            r1.parametersDefined = r0
            r1.objectId = r2
            r1.parameters = r3
            return
    }

    public static org.bouncycastle.asn1.x509.AlgorithmIdentifier getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L4a
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.AlgorithmIdentifier
            if (r0 == 0) goto L7
            goto L4a
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.DERObjectIdentifier
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r3 = (org.bouncycastle.asn1.DERObjectIdentifier) r3
            r0.<init>(r3)
            return r0
        L13:
            boolean r0 = r3 instanceof java.lang.String
            if (r0 == 0) goto L1f
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            java.lang.String r3 = (java.lang.String) r3
            r0.<init>(r3)
            return r0
        L1f:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L2b
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L2b:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in factory: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L4a:
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r3 = (org.bouncycastle.asn1.x509.AlgorithmIdentifier) r3
            return r3
    }

    public static org.bouncycastle.asn1.x509.AlgorithmIdentifier getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getObjectId() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.objectId
            return r0
    }

    public org.bouncycastle.asn1.DEREncodable getParameters() {
            r1 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r1.parameters
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r2.objectId
            r0.add(r1)
            boolean r1 = r2.parametersDefined
            if (r1 == 0) goto L13
            org.bouncycastle.asn1.DEREncodable r1 = r2.parameters
            r0.add(r1)
        L13:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
