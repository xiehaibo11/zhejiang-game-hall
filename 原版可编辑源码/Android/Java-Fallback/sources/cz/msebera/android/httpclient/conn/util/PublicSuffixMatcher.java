package cz.msebera.android.httpclient.conn.util;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public final class PublicSuffixMatcher {
    private final java.util.Map<java.lang.String, java.lang.String> exceptions;
    private final java.util.Map<java.lang.String, java.lang.String> rules;

    public PublicSuffixMatcher(java.util.Collection<java.lang.String> r3, java.util.Collection<java.lang.String> r4) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "Domain suffix rules"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            int r1 = r3.size()
            r0.<init>(r1)
            r2.rules = r0
            java.util.Iterator r3 = r3.iterator()
        L17:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L29
            java.lang.Object r0 = r3.next()
            java.lang.String r0 = (java.lang.String) r0
            java.util.Map<java.lang.String, java.lang.String> r1 = r2.rules
            r1.put(r0, r0)
            goto L17
        L29:
            if (r4 == 0) goto L4c
            java.util.concurrent.ConcurrentHashMap r3 = new java.util.concurrent.ConcurrentHashMap
            int r0 = r4.size()
            r3.<init>(r0)
            r2.exceptions = r3
            java.util.Iterator r3 = r4.iterator()
        L3a:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L4f
            java.lang.Object r4 = r3.next()
            java.lang.String r4 = (java.lang.String) r4
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.exceptions
            r0.put(r4, r4)
            goto L3a
        L4c:
            r3 = 0
            r2.exceptions = r3
        L4f:
            return
    }

    public java.lang.String getDomainRoot(java.lang.String r9) {
            r8 = this;
            r0 = 0
            if (r9 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "."
            boolean r1 = r9.startsWith(r1)
            if (r1 == 0) goto Ld
            return r0
        Ld:
            java.util.Locale r1 = java.util.Locale.ROOT
            java.lang.String r9 = r9.toLowerCase(r1)
            r1 = r0
        L14:
            if (r9 == 0) goto L68
            java.util.Map<java.lang.String, java.lang.String> r2 = r8.exceptions
            if (r2 == 0) goto L25
            java.lang.String r3 = java.net.IDN.toUnicode(r9)
            boolean r2 = r2.containsKey(r3)
            if (r2 == 0) goto L25
            return r9
        L25:
            java.util.Map<java.lang.String, java.lang.String> r2 = r8.rules
            java.lang.String r3 = java.net.IDN.toUnicode(r9)
            boolean r2 = r2.containsKey(r3)
            if (r2 == 0) goto L32
            goto L68
        L32:
            r2 = 46
            int r2 = r9.indexOf(r2)
            r3 = -1
            if (r2 == r3) goto L42
            int r4 = r2 + 1
            java.lang.String r4 = r9.substring(r4)
            goto L43
        L42:
            r4 = r0
        L43:
            if (r4 == 0) goto L63
            java.util.Map<java.lang.String, java.lang.String> r5 = r8.rules
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "*."
            r6.append(r7)
            java.lang.String r7 = java.net.IDN.toUnicode(r4)
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            boolean r5 = r5.containsKey(r6)
            if (r5 == 0) goto L63
            goto L68
        L63:
            if (r2 == r3) goto L66
            r1 = r9
        L66:
            r9 = r4
            goto L14
        L68:
            return r1
    }

    public boolean matches(java.lang.String r4) {
            r3 = this;
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "."
            boolean r1 = r4.startsWith(r1)
            r2 = 1
            if (r1 == 0) goto L11
            java.lang.String r4 = r4.substring(r2)
        L11:
            java.lang.String r4 = r3.getDomainRoot(r4)
            if (r4 != 0) goto L18
            r0 = 1
        L18:
            return r0
    }
}
