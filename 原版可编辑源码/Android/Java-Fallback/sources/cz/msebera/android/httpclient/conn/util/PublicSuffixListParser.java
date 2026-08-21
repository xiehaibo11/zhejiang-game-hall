package cz.msebera.android.httpclient.conn.util;

@cz.msebera.android.httpclient.annotation.Immutable
public final class PublicSuffixListParser {
    private static final int MAX_LINE_LEN = 256;

    public PublicSuffixListParser() {
            r0 = this;
            r0.<init>()
            return
    }

    private boolean readLine(java.io.Reader r8, java.lang.StringBuilder r9) throws java.io.IOException {
            r7 = this;
            r0 = 0
            r9.setLength(r0)
            r1 = 0
        L5:
            int r2 = r8.read()
            r3 = 1
            r4 = -1
            if (r2 == r4) goto L28
            char r5 = (char) r2
            r6 = 10
            if (r5 != r6) goto L13
            goto L28
        L13:
            boolean r2 = java.lang.Character.isWhitespace(r5)
            if (r2 == 0) goto L1a
            r1 = 1
        L1a:
            if (r1 != 0) goto L1f
            r9.append(r5)
        L1f:
            int r2 = r9.length()
            r3 = 256(0x100, float:3.59E-43)
            if (r2 <= r3) goto L5
            return r0
        L28:
            if (r2 == r4) goto L2b
            r0 = 1
        L2b:
            return r0
    }

    public cz.msebera.android.httpclient.conn.util.PublicSuffixList parse(java.io.Reader r8) throws java.io.IOException {
            r7 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            java.io.BufferedReader r2 = new java.io.BufferedReader
            r2.<init>(r8)
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r3 = 256(0x100, float:3.59E-43)
            r8.<init>(r3)
            r3 = 1
            r4 = 1
        L18:
            if (r4 == 0) goto L54
            boolean r4 = r7.readLine(r2, r8)
            java.lang.String r5 = r8.toString()
            boolean r6 = r5.isEmpty()
            if (r6 == 0) goto L29
            goto L18
        L29:
            java.lang.String r6 = "//"
            boolean r6 = r5.startsWith(r6)
            if (r6 == 0) goto L32
            goto L18
        L32:
            java.lang.String r6 = "."
            boolean r6 = r5.startsWith(r6)
            if (r6 == 0) goto L3e
            java.lang.String r5 = r5.substring(r3)
        L3e:
            java.lang.String r6 = "!"
            boolean r6 = r5.startsWith(r6)
            if (r6 == 0) goto L4a
            java.lang.String r5 = r5.substring(r3)
        L4a:
            if (r6 == 0) goto L50
            r1.add(r5)
            goto L18
        L50:
            r0.add(r5)
            goto L18
        L54:
            cz.msebera.android.httpclient.conn.util.PublicSuffixList r8 = new cz.msebera.android.httpclient.conn.util.PublicSuffixList
            r8.<init>(r0, r1)
            return r8
    }
}
