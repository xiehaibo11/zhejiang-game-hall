package org.apache.commons.codec1;

public class StringEncoderComparator implements java.util.Comparator {
    private final org.apache.commons.codec1.StringEncoder stringEncoder;

    @java.lang.Deprecated
    public StringEncoderComparator() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.stringEncoder = r0
            return
    }

    public StringEncoderComparator(org.apache.commons.codec1.StringEncoder r1) {
            r0 = this;
            r0.<init>()
            r0.stringEncoder = r1
            return
    }

    @Override
    public int compare(java.lang.Object r2, java.lang.Object r3) {
            r1 = this;
            org.apache.commons.codec1.StringEncoder r0 = r1.stringEncoder     // Catch: org.apache.commons.codec1.EncoderException -> L15
            java.lang.Object r2 = r0.encode(r2)     // Catch: org.apache.commons.codec1.EncoderException -> L15
            java.lang.Comparable r2 = (java.lang.Comparable) r2     // Catch: org.apache.commons.codec1.EncoderException -> L15
            org.apache.commons.codec1.StringEncoder r0 = r1.stringEncoder     // Catch: org.apache.commons.codec1.EncoderException -> L15
            java.lang.Object r3 = r0.encode(r3)     // Catch: org.apache.commons.codec1.EncoderException -> L15
            java.lang.Comparable r3 = (java.lang.Comparable) r3     // Catch: org.apache.commons.codec1.EncoderException -> L15
            int r2 = r2.compareTo(r3)     // Catch: org.apache.commons.codec1.EncoderException -> L15
            goto L16
        L15:
            r2 = 0
        L16:
            return r2
    }
}
