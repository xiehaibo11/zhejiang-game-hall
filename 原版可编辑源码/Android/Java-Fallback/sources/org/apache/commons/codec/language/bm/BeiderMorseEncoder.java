package org.apache.commons.codec.language.bm;

public class BeiderMorseEncoder implements org.apache.commons.codec.StringEncoder {
    private org.apache.commons.codec.language.bm.PhoneticEngine engine;

    public BeiderMorseEncoder() {
            r4 = this;
            r4.<init>()
            org.apache.commons.codec.language.bm.PhoneticEngine r0 = new org.apache.commons.codec.language.bm.PhoneticEngine
            org.apache.commons.codec.language.bm.NameType r1 = org.apache.commons.codec.language.bm.NameType.GENERIC
            org.apache.commons.codec.language.bm.RuleType r2 = org.apache.commons.codec.language.bm.RuleType.APPROX
            r3 = 1
            r0.<init>(r1, r2, r3)
            r4.engine = r0
            return
    }

    @Override
    public java.lang.Object encode(java.lang.Object r2) throws org.apache.commons.codec.EncoderException {
            r1 = this;
            boolean r0 = r2 instanceof java.lang.String
            if (r0 == 0) goto Lb
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r2 = r1.encode(r2)
            return r2
        Lb:
            org.apache.commons.codec.EncoderException r2 = new org.apache.commons.codec.EncoderException
            java.lang.String r0 = "BeiderMorseEncoder encode parameter is not of type String"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public java.lang.String encode(java.lang.String r2) throws org.apache.commons.codec.EncoderException {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            org.apache.commons.codec.language.bm.PhoneticEngine r0 = r1.engine
            java.lang.String r2 = r0.encode(r2)
            return r2
    }

    public org.apache.commons.codec.language.bm.NameType getNameType() {
            r1 = this;
            org.apache.commons.codec.language.bm.PhoneticEngine r0 = r1.engine
            org.apache.commons.codec.language.bm.NameType r0 = r0.getNameType()
            return r0
    }

    public org.apache.commons.codec.language.bm.RuleType getRuleType() {
            r1 = this;
            org.apache.commons.codec.language.bm.PhoneticEngine r0 = r1.engine
            org.apache.commons.codec.language.bm.RuleType r0 = r0.getRuleType()
            return r0
    }

    public boolean isConcat() {
            r1 = this;
            org.apache.commons.codec.language.bm.PhoneticEngine r0 = r1.engine
            boolean r0 = r0.isConcat()
            return r0
    }

    public void setConcat(boolean r4) {
            r3 = this;
            org.apache.commons.codec.language.bm.PhoneticEngine r0 = new org.apache.commons.codec.language.bm.PhoneticEngine
            org.apache.commons.codec.language.bm.PhoneticEngine r1 = r3.engine
            org.apache.commons.codec.language.bm.NameType r1 = r1.getNameType()
            org.apache.commons.codec.language.bm.PhoneticEngine r2 = r3.engine
            org.apache.commons.codec.language.bm.RuleType r2 = r2.getRuleType()
            r0.<init>(r1, r2, r4)
            r3.engine = r0
            return
    }

    public void setNameType(org.apache.commons.codec.language.bm.NameType r4) {
            r3 = this;
            org.apache.commons.codec.language.bm.PhoneticEngine r0 = new org.apache.commons.codec.language.bm.PhoneticEngine
            org.apache.commons.codec.language.bm.PhoneticEngine r1 = r3.engine
            org.apache.commons.codec.language.bm.RuleType r1 = r1.getRuleType()
            org.apache.commons.codec.language.bm.PhoneticEngine r2 = r3.engine
            boolean r2 = r2.isConcat()
            r0.<init>(r4, r1, r2)
            r3.engine = r0
            return
    }

    public void setRuleType(org.apache.commons.codec.language.bm.RuleType r4) {
            r3 = this;
            org.apache.commons.codec.language.bm.PhoneticEngine r0 = new org.apache.commons.codec.language.bm.PhoneticEngine
            org.apache.commons.codec.language.bm.PhoneticEngine r1 = r3.engine
            org.apache.commons.codec.language.bm.NameType r1 = r1.getNameType()
            org.apache.commons.codec.language.bm.PhoneticEngine r2 = r3.engine
            boolean r2 = r2.isConcat()
            r0.<init>(r1, r4, r2)
            r3.engine = r0
            return
    }
}
