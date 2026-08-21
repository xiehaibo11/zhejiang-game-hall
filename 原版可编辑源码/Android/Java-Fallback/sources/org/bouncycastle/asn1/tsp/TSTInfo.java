package org.bouncycastle.asn1.tsp;

public class TSTInfo extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.tsp.Accuracy accuracy;
    org.bouncycastle.asn1.x509.X509Extensions extensions;
    org.bouncycastle.asn1.DERGeneralizedTime genTime;
    org.bouncycastle.asn1.tsp.MessageImprint messageImprint;
    org.bouncycastle.asn1.DERInteger nonce;
    org.bouncycastle.asn1.DERBoolean ordering;
    org.bouncycastle.asn1.DERInteger serialNumber;
    org.bouncycastle.asn1.x509.GeneralName tsa;
    org.bouncycastle.asn1.DERObjectIdentifier tsaPolicyId;
    org.bouncycastle.asn1.DERInteger version;

    public TSTInfo(org.bouncycastle.asn1.ASN1Sequence r5) {
            r4 = this;
            r4.<init>()
            java.util.Enumeration r5 = r5.getObjects()
            java.lang.Object r0 = r5.nextElement()
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0)
            r4.version = r0
            java.lang.Object r0 = r5.nextElement()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.DERObjectIdentifier.getInstance(r0)
            r4.tsaPolicyId = r0
            java.lang.Object r0 = r5.nextElement()
            org.bouncycastle.asn1.tsp.MessageImprint r0 = org.bouncycastle.asn1.tsp.MessageImprint.getInstance(r0)
            r4.messageImprint = r0
            java.lang.Object r0 = r5.nextElement()
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0)
            r4.serialNumber = r0
            java.lang.Object r0 = r5.nextElement()
            org.bouncycastle.asn1.DERGeneralizedTime r0 = org.bouncycastle.asn1.DERGeneralizedTime.getInstance(r0)
            r4.genTime = r0
            org.bouncycastle.asn1.DERBoolean r0 = new org.bouncycastle.asn1.DERBoolean
            r1 = 0
            r0.<init>(r1)
        L3f:
            r4.ordering = r0
        L41:
            boolean r0 = r5.hasMoreElements()
            if (r0 == 0) goto La4
            java.lang.Object r0 = r5.nextElement()
            org.bouncycastle.asn1.DERObject r0 = (org.bouncycastle.asn1.DERObject) r0
            boolean r2 = r0 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r2 == 0) goto L85
            org.bouncycastle.asn1.DERTaggedObject r0 = (org.bouncycastle.asn1.DERTaggedObject) r0
            int r2 = r0.getTagNo()
            r3 = 1
            if (r2 == 0) goto L7e
            if (r2 != r3) goto L63
            org.bouncycastle.asn1.x509.X509Extensions r0 = org.bouncycastle.asn1.x509.X509Extensions.getInstance(r0, r1)
            r4.extensions = r0
            goto L41
        L63:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unknown tag value "
            r1.append(r2)
            int r0 = r0.getTagNo()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r5.<init>(r0)
            throw r5
        L7e:
            org.bouncycastle.asn1.x509.GeneralName r0 = org.bouncycastle.asn1.x509.GeneralName.getInstance(r0, r3)
            r4.tsa = r0
            goto L41
        L85:
            boolean r2 = r0 instanceof org.bouncycastle.asn1.DERSequence
            if (r2 == 0) goto L90
            org.bouncycastle.asn1.tsp.Accuracy r0 = org.bouncycastle.asn1.tsp.Accuracy.getInstance(r0)
            r4.accuracy = r0
            goto L41
        L90:
            boolean r2 = r0 instanceof org.bouncycastle.asn1.DERBoolean
            if (r2 == 0) goto L99
            org.bouncycastle.asn1.DERBoolean r0 = org.bouncycastle.asn1.DERBoolean.getInstance(r0)
            goto L3f
        L99:
            boolean r2 = r0 instanceof org.bouncycastle.asn1.DERInteger
            if (r2 == 0) goto L41
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0)
            r4.nonce = r0
            goto L41
        La4:
            return
    }

    public TSTInfo(org.bouncycastle.asn1.DERObjectIdentifier r3, org.bouncycastle.asn1.tsp.MessageImprint r4, org.bouncycastle.asn1.DERInteger r5, org.bouncycastle.asn1.DERGeneralizedTime r6, org.bouncycastle.asn1.tsp.Accuracy r7, org.bouncycastle.asn1.DERBoolean r8, org.bouncycastle.asn1.DERInteger r9, org.bouncycastle.asn1.x509.GeneralName r10, org.bouncycastle.asn1.x509.X509Extensions r11) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r1 = 1
            r0.<init>(r1)
            r2.version = r0
            r2.tsaPolicyId = r3
            r2.messageImprint = r4
            r2.serialNumber = r5
            r2.genTime = r6
            r2.accuracy = r7
            r2.ordering = r8
            r2.nonce = r9
            r2.tsa = r10
            r2.extensions = r11
            return
    }

    public static org.bouncycastle.asn1.tsp.TSTInfo getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L57
            boolean r0 = r3 instanceof org.bouncycastle.asn1.tsp.TSTInfo
            if (r0 == 0) goto L7
            goto L57
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.tsp.TSTInfo r0 = new org.bouncycastle.asn1.tsp.TSTInfo
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1OctetString
            if (r0 == 0) goto L33
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.io.IOException -> L2b
            org.bouncycastle.asn1.ASN1OctetString r3 = (org.bouncycastle.asn1.ASN1OctetString) r3     // Catch: java.io.IOException -> L2b
            byte[] r3 = r3.getOctets()     // Catch: java.io.IOException -> L2b
            r0.<init>(r3)     // Catch: java.io.IOException -> L2b
            org.bouncycastle.asn1.DERObject r3 = r0.readObject()     // Catch: java.io.IOException -> L2b
            org.bouncycastle.asn1.tsp.TSTInfo r3 = getInstance(r3)     // Catch: java.io.IOException -> L2b
            return r3
        L2b:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Bad object format in 'TSTInfo' factory."
            r3.<init>(r0)
            throw r3
        L33:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unknown object in 'TSTInfo' factory : "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = "."
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L57:
            org.bouncycastle.asn1.tsp.TSTInfo r3 = (org.bouncycastle.asn1.tsp.TSTInfo) r3
            return r3
    }

    public org.bouncycastle.asn1.tsp.Accuracy getAccuracy() {
            r1 = this;
            org.bouncycastle.asn1.tsp.Accuracy r0 = r1.accuracy
            return r0
    }

    public org.bouncycastle.asn1.x509.X509Extensions getExtensions() {
            r1 = this;
            org.bouncycastle.asn1.x509.X509Extensions r0 = r1.extensions
            return r0
    }

    public org.bouncycastle.asn1.DERGeneralizedTime getGenTime() {
            r1 = this;
            org.bouncycastle.asn1.DERGeneralizedTime r0 = r1.genTime
            return r0
    }

    public org.bouncycastle.asn1.tsp.MessageImprint getMessageImprint() {
            r1 = this;
            org.bouncycastle.asn1.tsp.MessageImprint r0 = r1.messageImprint
            return r0
    }

    public org.bouncycastle.asn1.DERInteger getNonce() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.nonce
            return r0
    }

    public org.bouncycastle.asn1.DERBoolean getOrdering() {
            r1 = this;
            org.bouncycastle.asn1.DERBoolean r0 = r1.ordering
            return r0
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getPolicy() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.tsaPolicyId
            return r0
    }

    public org.bouncycastle.asn1.DERInteger getSerialNumber() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.serialNumber
            return r0
    }

    public org.bouncycastle.asn1.x509.GeneralName getTsa() {
            r1 = this;
            org.bouncycastle.asn1.x509.GeneralName r0 = r1.tsa
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = r5.version
            r0.add(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r5.tsaPolicyId
            r0.add(r1)
            org.bouncycastle.asn1.tsp.MessageImprint r1 = r5.messageImprint
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = r5.serialNumber
            r0.add(r1)
            org.bouncycastle.asn1.DERGeneralizedTime r1 = r5.genTime
            r0.add(r1)
            org.bouncycastle.asn1.tsp.Accuracy r1 = r5.accuracy
            if (r1 == 0) goto L25
            r0.add(r1)
        L25:
            org.bouncycastle.asn1.DERBoolean r1 = r5.ordering
            if (r1 == 0) goto L34
            boolean r1 = r1.isTrue()
            if (r1 == 0) goto L34
            org.bouncycastle.asn1.DERBoolean r1 = r5.ordering
            r0.add(r1)
        L34:
            org.bouncycastle.asn1.DERInteger r1 = r5.nonce
            if (r1 == 0) goto L3b
            r0.add(r1)
        L3b:
            org.bouncycastle.asn1.x509.GeneralName r1 = r5.tsa
            r2 = 0
            r3 = 1
            if (r1 == 0) goto L4b
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.x509.GeneralName r4 = r5.tsa
            r1.<init>(r3, r2, r4)
            r0.add(r1)
        L4b:
            org.bouncycastle.asn1.x509.X509Extensions r1 = r5.extensions
            if (r1 == 0) goto L59
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.x509.X509Extensions r4 = r5.extensions
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L59:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
