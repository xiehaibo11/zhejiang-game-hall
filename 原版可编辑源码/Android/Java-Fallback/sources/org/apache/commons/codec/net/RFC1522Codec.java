package org.apache.commons.codec.net;

abstract class RFC1522Codec {
    protected static final java.lang.String POSTFIX = "?=";
    protected static final java.lang.String PREFIX = "=?";
    protected static final char SEP = '?';

    RFC1522Codec() {
            r0 = this;
            r0.<init>()
            return
    }

    protected java.lang.String decodeText(java.lang.String r6) throws org.apache.commons.codec.DecoderException, java.io.UnsupportedEncodingException {
            r5 = this;
            if (r6 != 0) goto L4
            r6 = 0
            return r6
        L4:
            java.lang.String r0 = "=?"
            boolean r0 = r6.startsWith(r0)
            if (r0 == 0) goto L90
            java.lang.String r0 = "?="
            boolean r0 = r6.endsWith(r0)
            if (r0 == 0) goto L90
            int r0 = r6.length()
            r1 = 2
            int r0 = r0 - r1
            r2 = 63
            int r3 = r6.indexOf(r2, r1)
            if (r3 == r0) goto L88
            java.lang.String r1 = r6.substring(r1, r3)
            java.lang.String r4 = ""
            boolean r4 = r1.equals(r4)
            if (r4 != 0) goto L80
            int r3 = r3 + 1
            int r4 = r6.indexOf(r2, r3)
            if (r4 == r0) goto L78
            java.lang.String r0 = r6.substring(r3, r4)
            java.lang.String r3 = r5.getEncoding()
            boolean r3 = r3.equalsIgnoreCase(r0)
            if (r3 == 0) goto L5c
            int r4 = r4 + 1
            int r0 = r6.indexOf(r2, r4)
            java.lang.String r6 = r6.substring(r4, r0)
            byte[] r6 = org.apache.commons.codec.binary.StringUtils.getBytesUsAscii(r6)
            byte[] r6 = r5.doDecoding(r6)
            java.lang.String r0 = new java.lang.String
            r0.<init>(r6, r1)
            return r0
        L5c:
            org.apache.commons.codec.DecoderException r6 = new org.apache.commons.codec.DecoderException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "This codec cannot decode "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = " encoded content"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r6.<init>(r0)
            throw r6
        L78:
            org.apache.commons.codec.DecoderException r6 = new org.apache.commons.codec.DecoderException
            java.lang.String r0 = "RFC 1522 violation: encoding token not found"
            r6.<init>(r0)
            throw r6
        L80:
            org.apache.commons.codec.DecoderException r6 = new org.apache.commons.codec.DecoderException
            java.lang.String r0 = "RFC 1522 violation: charset not specified"
            r6.<init>(r0)
            throw r6
        L88:
            org.apache.commons.codec.DecoderException r6 = new org.apache.commons.codec.DecoderException
            java.lang.String r0 = "RFC 1522 violation: charset token not found"
            r6.<init>(r0)
            throw r6
        L90:
            org.apache.commons.codec.DecoderException r6 = new org.apache.commons.codec.DecoderException
            java.lang.String r0 = "RFC 1522 violation: malformed encoded content"
            r6.<init>(r0)
            throw r6
    }

    protected abstract byte[] doDecoding(byte[] r1) throws org.apache.commons.codec.DecoderException;

    protected abstract byte[] doEncoding(byte[] r1) throws org.apache.commons.codec.EncoderException;

    protected java.lang.String encodeText(java.lang.String r4, java.lang.String r5) throws org.apache.commons.codec.EncoderException, java.io.UnsupportedEncodingException {
            r3 = this;
            if (r4 != 0) goto L4
            r4 = 0
            return r4
        L4:
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.String r1 = "=?"
            r0.append(r1)
            r0.append(r5)
            r1 = 63
            r0.append(r1)
            java.lang.String r2 = r3.getEncoding()
            r0.append(r2)
            r0.append(r1)
            byte[] r4 = r4.getBytes(r5)
            byte[] r4 = r3.doEncoding(r4)
            java.lang.String r4 = org.apache.commons.codec.binary.StringUtils.newStringUsAscii(r4)
            r0.append(r4)
            java.lang.String r4 = "?="
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            return r4
    }

    protected abstract java.lang.String getEncoding();
}
