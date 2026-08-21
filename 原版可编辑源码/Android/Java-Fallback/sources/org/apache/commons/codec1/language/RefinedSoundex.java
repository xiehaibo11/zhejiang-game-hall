package org.apache.commons.codec1.language;

public class RefinedSoundex implements org.apache.commons.codec1.StringEncoder {
    public static final org.apache.commons.codec1.language.RefinedSoundex US_ENGLISH = null;
    private static final char[] US_ENGLISH_MAPPING = null;
    public static final java.lang.String US_ENGLISH_MAPPING_STRING = "01360240043788015936020505";
    private final char[] soundexMapping;

    static {
            java.lang.String r0 = "01360240043788015936020505"
            char[] r0 = r0.toCharArray()
            org.apache.commons.codec1.language.RefinedSoundex.US_ENGLISH_MAPPING = r0
            org.apache.commons.codec1.language.RefinedSoundex r0 = new org.apache.commons.codec1.language.RefinedSoundex
            r0.<init>()
            org.apache.commons.codec1.language.RefinedSoundex.US_ENGLISH = r0
            return
    }

    public RefinedSoundex() {
            r1 = this;
            r1.<init>()
            char[] r0 = org.apache.commons.codec1.language.RefinedSoundex.US_ENGLISH_MAPPING
            r1.soundexMapping = r0
            return
    }

    public RefinedSoundex(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            char[] r1 = r1.toCharArray()
            r0.soundexMapping = r1
            return
    }

    public RefinedSoundex(char[] r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.length
            char[] r0 = new char[r0]
            r3.soundexMapping = r0
            int r1 = r4.length
            r2 = 0
            java.lang.System.arraycopy(r4, r2, r0, r2, r1)
            return
    }

    public int difference(java.lang.String r1, java.lang.String r2) throws org.apache.commons.codec1.EncoderException {
            r0 = this;
            int r1 = org.apache.commons.codec1.language.SoundexUtils.difference(r0, r1, r2)
            return r1
    }

    @Override
    public java.lang.Object encode(java.lang.Object r2) throws org.apache.commons.codec1.EncoderException {
            r1 = this;
            boolean r0 = r2 instanceof java.lang.String
            if (r0 == 0) goto Lb
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r2 = r1.soundex(r2)
            return r2
        Lb:
            org.apache.commons.codec1.EncoderException r2 = new org.apache.commons.codec1.EncoderException
            java.lang.String r0 = "Parameter supplied to RefinedSoundex encode is not of type java.lang.String"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public java.lang.String encode(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = r0.soundex(r1)
            return r1
    }

    char getMappingCode(char r2) {
            r1 = this;
            boolean r0 = java.lang.Character.isLetter(r2)
            if (r0 != 0) goto L8
            r2 = 0
            return r2
        L8:
            char[] r0 = r1.soundexMapping
            char r2 = java.lang.Character.toUpperCase(r2)
            int r2 = r2 + (-65)
            char r2 = r0[r2]
            return r2
    }

    public java.lang.String soundex(java.lang.String r5) {
            r4 = this;
            if (r5 != 0) goto L4
            r5 = 0
            return r5
        L4:
            java.lang.String r5 = org.apache.commons.codec1.language.SoundexUtils.clean(r5)
            int r0 = r5.length()
            if (r0 != 0) goto Lf
            return r5
        Lf:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
            char r2 = r5.charAt(r1)
            r0.append(r2)
            r2 = 42
        L1e:
            int r3 = r5.length()
            if (r1 < r3) goto L29
            java.lang.String r5 = r0.toString()
            return r5
        L29:
            char r3 = r5.charAt(r1)
            char r3 = r4.getMappingCode(r3)
            if (r3 != r2) goto L34
            goto L3a
        L34:
            if (r3 == 0) goto L39
            r0.append(r3)
        L39:
            r2 = r3
        L3a:
            int r1 = r1 + 1
            goto L1e
    }
}
