package org.apache.commons.codec1.language;

public abstract class AbstractCaverphone implements org.apache.commons.codec1.StringEncoder {
    public AbstractCaverphone() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.Object encode(java.lang.Object r2) throws org.apache.commons.codec1.EncoderException {
            r1 = this;
            boolean r0 = r2 instanceof java.lang.String
            if (r0 == 0) goto Lb
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r2 = r1.encode(r2)
            return r2
        Lb:
            org.apache.commons.codec1.EncoderException r2 = new org.apache.commons.codec1.EncoderException
            java.lang.String r0 = "Parameter supplied to Caverphone encode is not of type java.lang.String"
            r2.<init>(r0)
            throw r2
    }

    public boolean isEncodeEqual(java.lang.String r1, java.lang.String r2) throws org.apache.commons.codec1.EncoderException {
            r0 = this;
            java.lang.String r1 = r0.encode(r1)
            java.lang.String r2 = r0.encode(r2)
            boolean r1 = r1.equals(r2)
            return r1
    }
}
