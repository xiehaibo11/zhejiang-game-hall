package com.qihoo360.replugin.ext.parser.utils.xml;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class LookupTranslator extends com.qihoo360.replugin.ext.parser.utils.xml.CharSequenceTranslator {
    private final int longest;
    private final java.util.HashMap<java.lang.String, java.lang.CharSequence> lookupMap;
    private final int shortest;

    public LookupTranslator(java.lang.CharSequence[]... r10) {
            r9 = this;
            r9.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r9.lookupMap = r0
            r0 = 0
            r1 = 2147483647(0x7fffffff, float:NaN)
            if (r10 == 0) goto L35
            int r2 = r10.length
            r3 = r0
            r4 = r3
        L13:
            if (r3 >= r2) goto L34
            r5 = r10[r3]
            java.util.HashMap<java.lang.String, java.lang.CharSequence> r6 = r9.lookupMap
            r7 = r5[r0]
            java.lang.String r7 = r7.toString()
            r8 = 1
            r8 = r5[r8]
            r6.put(r7, r8)
            r5 = r5[r0]
            int r5 = r5.length()
            if (r5 >= r1) goto L2e
            r1 = r5
        L2e:
            if (r5 <= r4) goto L31
            r4 = r5
        L31:
            int r3 = r3 + 1
            goto L13
        L34:
            r0 = r4
        L35:
            r9.shortest = r1
            r9.longest = r0
            return
    }

    @Override
    public int translate(java.lang.CharSequence r4, int r5, java.io.Writer r6) throws java.io.IOException {
            r3 = this;
            int r0 = r3.longest
            int r1 = r5 + r0
            int r2 = r4.length()
            if (r1 <= r2) goto Lf
            int r0 = r4.length()
            int r0 = r0 - r5
        Lf:
            int r1 = r3.shortest
            if (r0 < r1) goto L32
            int r1 = r5 + r0
            java.lang.CharSequence r1 = r4.subSequence(r5, r1)
            java.util.HashMap<java.lang.String, java.lang.CharSequence> r2 = r3.lookupMap
            java.lang.String r1 = r1.toString()
            java.lang.Object r1 = r2.get(r1)
            java.lang.CharSequence r1 = (java.lang.CharSequence) r1
            if (r1 == 0) goto L2f
            java.lang.String r4 = r1.toString()
            r6.write(r4)
            return r0
        L2f:
            int r0 = r0 + (-1)
            goto Lf
        L32:
            r4 = 0
            return r4
    }
}
