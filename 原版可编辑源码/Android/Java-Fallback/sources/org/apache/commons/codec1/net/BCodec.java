package org.apache.commons.codec1.net;

public class BCodec extends org.apache.commons.codec1.net.RFC1522Codec implements org.apache.commons.codec1.StringEncoder, org.apache.commons.codec1.StringDecoder {
    private final java.nio.charset.Charset charset;

    public BCodec() {
            r1 = this;
            java.nio.charset.Charset r0 = org.apache.commons.codec1.Charsets.UTF_8
            r1.<init>(r0)
            return
    }

    public BCodec(java.lang.String r1) {
            r0 = this;
            java.nio.charset.Charset r1 = java.nio.charset.Charset.forName(r1)
            r0.<init>(r1)
            return
    }

    public BCodec(java.nio.charset.Charset r1) {
            r0 = this;
            r0.<init>()
            r0.charset = r1
            return
    }

    @Override
    public java.lang.Object decode(java.lang.Object r4) throws org.apache.commons.codec1.DecoderException {
            r3 = this;
            if (r4 != 0) goto L4
            r4 = 0
            return r4
        L4:
            boolean r0 = r4 instanceof java.lang.String
            if (r0 == 0) goto Lf
            java.lang.String r4 = (java.lang.String) r4
            java.lang.String r4 = r3.decode(r4)
            return r4
        Lf:
            org.apache.commons.codec1.DecoderException r0 = new org.apache.commons.codec1.DecoderException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Objects of type "
            r1.<init>(r2)
            java.lang.Class r4 = r4.getClass()
            java.lang.String r4 = r4.getName()
            r1.append(r4)
            java.lang.String r4 = " cannot be decoded using BCodec"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    @Override
    public java.lang.String decode(java.lang.String r3) throws org.apache.commons.codec1.DecoderException {
            r2 = this;
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            java.lang.String r3 = r2.decodeText(r3)     // Catch: java.io.UnsupportedEncodingException -> L9
            return r3
        L9:
            r3 = move-exception
            org.apache.commons.codec1.DecoderException r0 = new org.apache.commons.codec1.DecoderException
            java.lang.String r1 = r3.getMessage()
            r0.<init>(r1, r3)
            throw r0
    }

    @Override
    protected byte[] doDecoding(byte[] r1) {
            r0 = this;
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            byte[] r1 = org.apache.commons.codec1.binary.Base64.decodeBase64(r1)
            return r1
    }

    @Override
    protected byte[] doEncoding(byte[] r1) {
            r0 = this;
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            byte[] r1 = org.apache.commons.codec1.binary.Base64.encodeBase64(r1)
            return r1
    }

    @Override
    public java.lang.Object encode(java.lang.Object r4) throws org.apache.commons.codec1.EncoderException {
            r3 = this;
            if (r4 != 0) goto L4
            r4 = 0
            return r4
        L4:
            boolean r0 = r4 instanceof java.lang.String
            if (r0 == 0) goto Lf
            java.lang.String r4 = (java.lang.String) r4
            java.lang.String r4 = r3.encode(r4)
            return r4
        Lf:
            org.apache.commons.codec1.EncoderException r0 = new org.apache.commons.codec1.EncoderException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Objects of type "
            r1.<init>(r2)
            java.lang.Class r4 = r4.getClass()
            java.lang.String r4 = r4.getName()
            r1.append(r4)
            java.lang.String r4 = " cannot be encoded using BCodec"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    @Override
    public java.lang.String encode(java.lang.String r2) throws org.apache.commons.codec1.EncoderException {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            java.nio.charset.Charset r0 = r1.getCharset()
            java.lang.String r2 = r1.encode(r2, r0)
            return r2
    }

    public java.lang.String encode(java.lang.String r2, java.lang.String r3) throws org.apache.commons.codec1.EncoderException {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            java.lang.String r2 = r1.encodeText(r2, r3)     // Catch: java.io.UnsupportedEncodingException -> L9
            return r2
        L9:
            r2 = move-exception
            org.apache.commons.codec1.EncoderException r3 = new org.apache.commons.codec1.EncoderException
            java.lang.String r0 = r2.getMessage()
            r3.<init>(r0, r2)
            throw r3
    }

    public java.lang.String encode(java.lang.String r1, java.nio.charset.Charset r2) throws org.apache.commons.codec1.EncoderException {
            r0 = this;
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            java.lang.String r1 = r0.encodeText(r1, r2)
            return r1
    }

    public java.nio.charset.Charset getCharset() {
            r1 = this;
            java.nio.charset.Charset r0 = r1.charset
            return r0
    }

    public java.lang.String getDefaultCharset() {
            r1 = this;
            java.nio.charset.Charset r0 = r1.charset
            java.lang.String r0 = r0.name()
            return r0
    }

    @Override
    protected java.lang.String getEncoding() {
            r1 = this;
            java.lang.String r0 = "B"
            return r0
    }
}
