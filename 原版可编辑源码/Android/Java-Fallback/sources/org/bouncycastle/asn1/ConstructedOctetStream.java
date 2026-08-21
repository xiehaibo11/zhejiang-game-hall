package org.bouncycastle.asn1;

class ConstructedOctetStream extends java.io.InputStream {
    private java.io.InputStream _currentStream;
    private boolean _first;
    private final org.bouncycastle.asn1.ASN1StreamParser _parser;

    ConstructedOctetStream(org.bouncycastle.asn1.ASN1StreamParser r2) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1._first = r0
            r1._parser = r2
            return
    }

    @Override
    public int read() throws java.io.IOException {
            r3 = this;
            java.io.InputStream r0 = r3._currentStream
            r1 = -1
            if (r0 != 0) goto L19
            boolean r0 = r3._first
            if (r0 != 0) goto La
            return r1
        La:
            org.bouncycastle.asn1.ASN1StreamParser r0 = r3._parser
            org.bouncycastle.asn1.DEREncodable r0 = r0.readObject()
            org.bouncycastle.asn1.ASN1OctetStringParser r0 = (org.bouncycastle.asn1.ASN1OctetStringParser) r0
            if (r0 != 0) goto L15
            return r1
        L15:
            r2 = 0
            r3._first = r2
            goto L30
        L19:
            java.io.InputStream r0 = r3._currentStream
            int r0 = r0.read()
            if (r0 < 0) goto L22
            return r0
        L22:
            org.bouncycastle.asn1.ASN1StreamParser r0 = r3._parser
            org.bouncycastle.asn1.DEREncodable r0 = r0.readObject()
            org.bouncycastle.asn1.ASN1OctetStringParser r0 = (org.bouncycastle.asn1.ASN1OctetStringParser) r0
            if (r0 != 0) goto L30
            r0 = 0
            r3._currentStream = r0
            return r1
        L30:
            java.io.InputStream r0 = r0.getOctetStream()
            r3._currentStream = r0
            goto L19
    }

    @Override
    public int read(byte[] r6, int r7, int r8) throws java.io.IOException {
            r5 = this;
            java.io.InputStream r0 = r5._currentStream
            r1 = 0
            r2 = -1
            if (r0 != 0) goto L1e
            boolean r0 = r5._first
            if (r0 != 0) goto Lb
            return r2
        Lb:
            org.bouncycastle.asn1.ASN1StreamParser r0 = r5._parser
            org.bouncycastle.asn1.DEREncodable r0 = r0.readObject()
            org.bouncycastle.asn1.ASN1OctetStringParser r0 = (org.bouncycastle.asn1.ASN1OctetStringParser) r0
            if (r0 != 0) goto L16
            return r2
        L16:
            r5._first = r1
        L18:
            java.io.InputStream r0 = r0.getOctetStream()
            r5._currentStream = r0
        L1e:
            java.io.InputStream r0 = r5._currentStream
            int r3 = r7 + r1
            int r4 = r8 - r1
            int r0 = r0.read(r6, r3, r4)
            if (r0 < 0) goto L2e
            int r1 = r1 + r0
            if (r1 != r8) goto L1e
            return r1
        L2e:
            org.bouncycastle.asn1.ASN1StreamParser r0 = r5._parser
            org.bouncycastle.asn1.DEREncodable r0 = r0.readObject()
            org.bouncycastle.asn1.ASN1OctetStringParser r0 = (org.bouncycastle.asn1.ASN1OctetStringParser) r0
            if (r0 != 0) goto L18
            r6 = 0
            r5._currentStream = r6
            r6 = 1
            if (r1 >= r6) goto L3f
            goto L40
        L3f:
            r2 = r1
        L40:
            return r2
    }
}
