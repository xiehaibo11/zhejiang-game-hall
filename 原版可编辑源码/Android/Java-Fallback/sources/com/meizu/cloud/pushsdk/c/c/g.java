package com.meizu.cloud.pushsdk.c.c;

public class g {
    private static final java.util.regex.Pattern a = null;
    private static final java.util.regex.Pattern b = null;
    private final java.lang.String c;
    private final java.lang.String d;
    private final java.lang.String e;
    private final java.lang.String f;

    static {
            java.lang.String r0 = "([a-zA-Z0-9-!#$%&'*+.^_`{|}~]+)/([a-zA-Z0-9-!#$%&'*+.^_`{|}~]+)"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.meizu.cloud.pushsdk.c.c.g.a = r0
            java.lang.String r0 = ";\\s*(?:([a-zA-Z0-9-!#$%&'*+.^_`{|}~]+)=(?:([a-zA-Z0-9-!#$%&'*+.^_`{|}~]+)|\"([^\"]*)\"))?"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.meizu.cloud.pushsdk.c.c.g.b = r0
            return
    }

    private g(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            r0.<init>()
            r0.c = r1
            r0.d = r2
            r0.e = r3
            r0.f = r4
            return
    }

    public static com.meizu.cloud.pushsdk.c.c.g a(java.lang.String r9) {
            java.util.regex.Pattern r0 = com.meizu.cloud.pushsdk.c.c.g.a
            java.util.regex.Matcher r0 = r0.matcher(r9)
            boolean r1 = r0.lookingAt()
            r2 = 0
            if (r1 != 0) goto Le
            return r2
        Le:
            r1 = 1
            java.lang.String r3 = r0.group(r1)
            java.util.Locale r4 = java.util.Locale.US
            java.lang.String r3 = r3.toLowerCase(r4)
            r4 = 2
            java.lang.String r5 = r0.group(r4)
            java.util.Locale r6 = java.util.Locale.US
            java.lang.String r5 = r5.toLowerCase(r6)
            java.util.regex.Pattern r6 = com.meizu.cloud.pushsdk.c.c.g.b
            java.util.regex.Matcher r6 = r6.matcher(r9)
            int r0 = r0.end()
            r7 = r2
        L2f:
            int r8 = r9.length()
            if (r0 >= r8) goto L86
            int r8 = r9.length()
            r6.region(r0, r8)
            boolean r0 = r6.lookingAt()
            if (r0 != 0) goto L43
            return r2
        L43:
            java.lang.String r0 = r6.group(r1)
            java.lang.String r8 = "charset"
            boolean r0 = r8.equalsIgnoreCase(r0)
            if (r0 != 0) goto L50
            goto L81
        L50:
            java.lang.String r0 = r6.group(r4)
            if (r0 == 0) goto L5b
            java.lang.String r0 = r6.group(r4)
            goto L60
        L5b:
            r0 = 3
            java.lang.String r0 = r6.group(r0)
        L60:
            if (r7 == 0) goto L80
            boolean r7 = r0.equalsIgnoreCase(r7)
            if (r7 == 0) goto L69
            goto L80
        L69:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Multiple different charsets: "
            r1.append(r2)
            r1.append(r9)
            java.lang.String r9 = r1.toString()
            r0.<init>(r9)
            throw r0
        L80:
            r7 = r0
        L81:
            int r0 = r6.end()
            goto L2f
        L86:
            com.meizu.cloud.pushsdk.c.c.g r0 = new com.meizu.cloud.pushsdk.c.c.g
            r0.<init>(r9, r3, r5, r7)
            return r0
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    public java.nio.charset.Charset b() {
            r1 = this;
            java.lang.String r0 = r1.f
            if (r0 == 0) goto L9
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public boolean equals(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.meizu.cloud.pushsdk.c.c.g
            if (r0 == 0) goto L12
            com.meizu.cloud.pushsdk.c.c.g r2 = (com.meizu.cloud.pushsdk.c.c.g) r2
            java.lang.String r2 = r2.c
            java.lang.String r0 = r1.c
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L12
            r2 = 1
            goto L13
        L12:
            r2 = 0
        L13:
            return r2
    }

    public int hashCode() {
            r1 = this;
            java.lang.String r0 = r1.c
            int r0 = r0.hashCode()
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }
}
