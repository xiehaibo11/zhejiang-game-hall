package org.apache.commons.codec.language;

public class Soundex implements org.apache.commons.codec.StringEncoder {
    public static final org.apache.commons.codec.language.Soundex US_ENGLISH = null;
    private static final char[] US_ENGLISH_MAPPING = null;
    public static final java.lang.String US_ENGLISH_MAPPING_STRING = "01230120022455012623010202";
    private int maxLength;
    private final char[] soundexMapping;

    static {
            java.lang.String r0 = "01230120022455012623010202"
            char[] r0 = r0.toCharArray()
            org.apache.commons.codec.language.Soundex.US_ENGLISH_MAPPING = r0
            org.apache.commons.codec.language.Soundex r0 = new org.apache.commons.codec.language.Soundex
            r0.<init>()
            org.apache.commons.codec.language.Soundex.US_ENGLISH = r0
            return
    }

    public Soundex() {
            r1 = this;
            r1.<init>()
            r0 = 4
            r1.maxLength = r0
            char[] r0 = org.apache.commons.codec.language.Soundex.US_ENGLISH_MAPPING
            r1.soundexMapping = r0
            return
    }

    public Soundex(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            r0 = 4
            r1.maxLength = r0
            char[] r2 = r2.toCharArray()
            r1.soundexMapping = r2
            return
    }

    public Soundex(char[] r4) {
            r3 = this;
            r3.<init>()
            r0 = 4
            r3.maxLength = r0
            int r0 = r4.length
            char[] r0 = new char[r0]
            r3.soundexMapping = r0
            int r1 = r4.length
            r2 = 0
            java.lang.System.arraycopy(r4, r2, r0, r2, r1)
            return
    }

    private char getMappingCode(java.lang.String r5, int r6) {
            r4 = this;
            char r0 = r5.charAt(r6)
            char r0 = r4.map(r0)
            r1 = 1
            if (r6 <= r1) goto L2f
            r1 = 48
            if (r0 == r1) goto L2f
            int r1 = r6 + (-1)
            char r1 = r5.charAt(r1)
            r2 = 87
            r3 = 72
            if (r3 == r1) goto L1d
            if (r2 != r1) goto L2f
        L1d:
            int r6 = r6 + (-2)
            char r5 = r5.charAt(r6)
            char r6 = r4.map(r5)
            if (r6 == r0) goto L2d
            if (r3 == r5) goto L2d
            if (r2 != r5) goto L2f
        L2d:
            r5 = 0
            return r5
        L2f:
            return r0
    }

    private char[] getSoundexMapping() {
            r1 = this;
            char[] r0 = r1.soundexMapping
            return r0
    }

    private char map(char r4) {
            r3 = this;
            int r0 = r4 + (-65)
            if (r0 < 0) goto L12
            char[] r1 = r3.getSoundexMapping()
            int r1 = r1.length
            if (r0 >= r1) goto L12
            char[] r4 = r3.getSoundexMapping()
            char r4 = r4[r0]
            return r4
        L12:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "The character is not mapped: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public int difference(java.lang.String r1, java.lang.String r2) throws org.apache.commons.codec.EncoderException {
            r0 = this;
            int r1 = org.apache.commons.codec.language.SoundexUtils.difference(r0, r1, r2)
            return r1
    }

    @Override
    public java.lang.Object encode(java.lang.Object r2) throws org.apache.commons.codec.EncoderException {
            r1 = this;
            boolean r0 = r2 instanceof java.lang.String
            if (r0 == 0) goto Lb
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r2 = r1.soundex(r2)
            return r2
        Lb:
            org.apache.commons.codec.EncoderException r2 = new org.apache.commons.codec.EncoderException
            java.lang.String r0 = "Parameter supplied to Soundex encode is not of type java.lang.String"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public java.lang.String encode(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = r0.soundex(r1)
            return r1
    }

    public int getMaxLength() {
            r1 = this;
            int r0 = r1.maxLength
            return r0
    }

    public void setMaxLength(int r1) {
            r0 = this;
            r0.maxLength = r1
            return
    }

    public java.lang.String soundex(java.lang.String r8) {
            r7 = this;
            if (r8 != 0) goto L4
            r8 = 0
            return r8
        L4:
            java.lang.String r8 = org.apache.commons.codec.language.SoundexUtils.clean(r8)
            int r0 = r8.length()
            if (r0 != 0) goto Lf
            return r8
        Lf:
            r0 = 4
            char[] r1 = new char[r0]
            r1 = {x0046: FILL_ARRAY_DATA , data: [48, 48, 48, 48} // fill-array
            r2 = 0
            char r3 = r8.charAt(r2)
            r1[r2] = r3
            char r2 = r7.getMappingCode(r8, r2)
            r3 = 1
            r4 = r3
        L22:
            int r5 = r8.length()
            if (r3 >= r5) goto L40
            if (r4 >= r0) goto L40
            int r5 = r3 + 1
            char r3 = r7.getMappingCode(r8, r3)
            if (r3 == 0) goto L3e
            r6 = 48
            if (r3 == r6) goto L3d
            if (r3 == r2) goto L3d
            int r2 = r4 + 1
            r1[r4] = r3
            r4 = r2
        L3d:
            r2 = r3
        L3e:
            r3 = r5
            goto L22
        L40:
            java.lang.String r8 = new java.lang.String
            r8.<init>(r1)
            return r8
    }
}
