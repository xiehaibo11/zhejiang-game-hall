package org.bouncycastle.asn1;

public class BERConstructedOctetString extends org.bouncycastle.asn1.DEROctetString {
    private static final int MAX_LENGTH = 1000;
    private java.util.Vector octs;

    public BERConstructedOctetString(java.util.Vector r2) {
            r1 = this;
            byte[] r0 = toBytes(r2)
            r1.<init>(r0)
            r1.octs = r2
            return
    }

    public BERConstructedOctetString(org.bouncycastle.asn1.DEREncodable r1) {
            r0 = this;
            org.bouncycastle.asn1.DERObject r1 = r1.getDERObject()
            r0.<init>(r1)
            return
    }

    public BERConstructedOctetString(org.bouncycastle.asn1.DERObject r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public BERConstructedOctetString(byte[] r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private java.util.Vector generateOcts() {
            r7 = this;
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r1 = 0
            r2 = 0
            r3 = 0
        L8:
            int r4 = r2 + 1
            byte[] r5 = r7.string
            int r5 = r5.length
            if (r4 >= r5) goto L30
            byte[] r5 = r7.string
            r5 = r5[r2]
            if (r5 != 0) goto L2e
            byte[] r5 = r7.string
            r5 = r5[r4]
            if (r5 != 0) goto L2e
            int r2 = r2 - r3
            int r2 = r2 + 1
            byte[] r5 = new byte[r2]
            byte[] r6 = r7.string
            java.lang.System.arraycopy(r6, r3, r5, r1, r2)
            org.bouncycastle.asn1.DEROctetString r2 = new org.bouncycastle.asn1.DEROctetString
            r2.<init>(r5)
            r0.addElement(r2)
            r3 = r4
        L2e:
            r2 = r4
            goto L8
        L30:
            byte[] r2 = r7.string
            int r2 = r2.length
            int r2 = r2 - r3
            byte[] r4 = new byte[r2]
            byte[] r5 = r7.string
            java.lang.System.arraycopy(r5, r3, r4, r1, r2)
            org.bouncycastle.asn1.DEROctetString r1 = new org.bouncycastle.asn1.DEROctetString
            r1.<init>(r4)
            r0.addElement(r1)
            return r0
    }

    private static byte[] toBytes(java.util.Vector r3) {
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            r1 = 0
        L6:
            int r2 = r3.size()
            if (r1 == r2) goto L5b
            java.lang.Object r2 = r3.elementAt(r1)     // Catch: java.io.IOException -> L1c java.lang.ClassCastException -> L38
            org.bouncycastle.asn1.DEROctetString r2 = (org.bouncycastle.asn1.DEROctetString) r2     // Catch: java.io.IOException -> L1c java.lang.ClassCastException -> L38
            byte[] r2 = r2.getOctets()     // Catch: java.io.IOException -> L1c java.lang.ClassCastException -> L38
            r0.write(r2)     // Catch: java.io.IOException -> L1c java.lang.ClassCastException -> L38
            int r1 = r1 + 1
            goto L6
        L1c:
            r3 = move-exception
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "exception converting octets "
            r1.append(r2)
            java.lang.String r3 = r3.toString()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L38:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.Object r3 = r3.elementAt(r1)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r2.append(r3)
            java.lang.String r3 = " found in input should only contain DEROctetString"
            r2.append(r3)
            java.lang.String r3 = r2.toString()
            r0.<init>(r3)
            throw r0
        L5b:
            byte[] r3 = r0.toByteArray()
            return r3
    }

    @Override
    public void encode(org.bouncycastle.asn1.DEROutputStream r7) throws java.io.IOException {
            r6 = this;
            boolean r0 = r7 instanceof org.bouncycastle.asn1.ASN1OutputStream
            if (r0 != 0) goto Ld
            boolean r0 = r7 instanceof org.bouncycastle.asn1.BEROutputStream
            if (r0 == 0) goto L9
            goto Ld
        L9:
            super.encode(r7)
            goto L5b
        Ld:
            r0 = 36
            r7.write(r0)
            r0 = 128(0x80, float:1.8E-43)
            r7.write(r0)
            java.util.Vector r0 = r6.octs
            r1 = 0
            if (r0 == 0) goto L31
            r0 = 0
        L1d:
            java.util.Vector r2 = r6.octs
            int r2 = r2.size()
            if (r0 == r2) goto L55
            java.util.Vector r2 = r6.octs
            java.lang.Object r2 = r2.elementAt(r0)
            r7.writeObject(r2)
            int r0 = r0 + 1
            goto L1d
        L31:
            r0 = 0
        L32:
            byte[] r2 = r6.string
            int r2 = r2.length
            if (r0 >= r2) goto L55
            int r2 = r0 + 1000
            byte[] r3 = r6.string
            int r3 = r3.length
            if (r2 <= r3) goto L42
            byte[] r3 = r6.string
            int r3 = r3.length
            goto L43
        L42:
            r3 = r2
        L43:
            int r3 = r3 - r0
            byte[] r4 = new byte[r3]
            byte[] r5 = r6.string
            java.lang.System.arraycopy(r5, r0, r4, r1, r3)
            org.bouncycastle.asn1.DEROctetString r0 = new org.bouncycastle.asn1.DEROctetString
            r0.<init>(r4)
            r7.writeObject(r0)
            r0 = r2
            goto L32
        L55:
            r7.write(r1)
            r7.write(r1)
        L5b:
            return
    }

    public java.util.Enumeration getObjects() {
            r1 = this;
            java.util.Vector r0 = r1.octs
            if (r0 != 0) goto Ld
            java.util.Vector r0 = r1.generateOcts()
            java.util.Enumeration r0 = r0.elements()
            return r0
        Ld:
            java.util.Enumeration r0 = r0.elements()
            return r0
    }

    @Override
    public byte[] getOctets() {
            r1 = this;
            byte[] r0 = r1.string
            return r0
    }
}
