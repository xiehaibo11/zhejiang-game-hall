package org.apache.commons.codec1.language;

@java.lang.Deprecated
public class Caverphone implements org.apache.commons.codec1.StringEncoder {
    private final org.apache.commons.codec1.language.Caverphone2 encoder;

    public Caverphone() {
            r1 = this;
            r1.<init>()
            org.apache.commons.codec1.language.Caverphone2 r0 = new org.apache.commons.codec1.language.Caverphone2
            r0.<init>()
            r1.encoder = r0
            return
    }

    public java.lang.String caverphone(java.lang.String r2) {
            r1 = this;
            org.apache.commons.codec1.language.Caverphone2 r0 = r1.encoder
            java.lang.String r2 = r0.encode(r2)
            return r2
    }

    @Override
    public java.lang.Object encode(java.lang.Object r2) throws org.apache.commons.codec1.EncoderException {
            r1 = this;
            boolean r0 = r2 instanceof java.lang.String
            if (r0 == 0) goto Lb
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r2 = r1.caverphone(r2)
            return r2
        Lb:
            org.apache.commons.codec1.EncoderException r2 = new org.apache.commons.codec1.EncoderException
            java.lang.String r0 = "Parameter supplied to Caverphone encode is not of type java.lang.String"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public java.lang.String encode(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = r0.caverphone(r1)
            return r1
    }

    public boolean isCaverphoneEqual(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            java.lang.String r1 = r0.caverphone(r1)
            java.lang.String r2 = r0.caverphone(r2)
            boolean r1 = r1.equals(r2)
            return r1
    }
}
