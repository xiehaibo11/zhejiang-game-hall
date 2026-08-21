package com.tkay.expressad.foundation.g.d;

public final class e {
    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String a(long r2) {
            r0 = 0
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 > 0) goto L9
            java.lang.String r2 = "0M"
            return r2
        L9:
            float r2 = (float) r2
            r3 = 1149239296(0x44800000, float:1024.0)
            float r2 = r2 / r3
            float r2 = r2 / r3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.Float r2 = java.lang.Float.valueOf(r2)
            r0[r1] = r2
            java.lang.String r2 = "%.1f"
            java.lang.String r2 = java.lang.String.format(r2, r0)
            r3.append(r2)
            java.lang.String r2 = "M"
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            return r2
    }

    private static java.lang.String a(java.lang.String r2, java.lang.String r3) {
            boolean r0 = b(r2)
            if (r0 != 0) goto L19
            byte[] r0 = r2.getBytes()
            int r0 = r0.length
            int r1 = r2.length()
            if (r0 == r1) goto L19
            java.lang.String r0 = "UTF-8"
            java.lang.String r2 = java.net.URLEncoder.encode(r2, r0)     // Catch: java.io.UnsupportedEncodingException -> L18
            return r2
        L18:
            return r3
        L19:
            return r2
    }

    public static boolean a(java.lang.String r0) {
            if (r0 == 0) goto Lf
            java.lang.String r0 = r0.trim()
            int r0 = r0.length()
            if (r0 != 0) goto Ld
            goto Lf
        Ld:
            r0 = 0
            return r0
        Lf:
            r0 = 1
            return r0
    }

    private static boolean b(java.lang.String r0) {
            if (r0 == 0) goto Lb
            int r0 = r0.length()
            if (r0 != 0) goto L9
            goto Lb
        L9:
            r0 = 0
            return r0
        Lb:
            r0 = 1
            return r0
    }

    private static java.lang.String c(java.lang.String r0) {
            if (r0 != 0) goto L4
            java.lang.String r0 = ""
        L4:
            return r0
    }

    private static java.lang.String d(java.lang.String r3) {
            boolean r0 = b(r3)
            if (r0 == 0) goto L7
            return r3
        L7:
            r0 = 0
            char r0 = r3.charAt(r0)
            boolean r1 = java.lang.Character.isLetter(r0)
            if (r1 == 0) goto L35
            boolean r1 = java.lang.Character.isUpperCase(r0)
            if (r1 == 0) goto L19
            goto L35
        L19:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            int r2 = r3.length()
            r1.<init>(r2)
            char r0 = java.lang.Character.toUpperCase(r0)
            r1.append(r0)
            r0 = 1
            java.lang.String r3 = r3.substring(r0)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
        L35:
            return r3
    }

    private static java.lang.String e(java.lang.String r2) {
            boolean r0 = b(r2)
            if (r0 != 0) goto L21
            byte[] r0 = r2.getBytes()
            int r0 = r0.length
            int r1 = r2.length()
            if (r0 == r1) goto L21
            java.lang.String r0 = "UTF-8"
            java.lang.String r2 = java.net.URLEncoder.encode(r2, r0)     // Catch: java.io.UnsupportedEncodingException -> L18
            return r2
        L18:
            r2 = move-exception
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "UnsupportedEncodingException occurred. "
            r0.<init>(r1, r2)
            throw r0
        L21:
            return r2
    }

    private static java.lang.String f(java.lang.String r2) {
            boolean r0 = b(r2)
            if (r0 == 0) goto L9
            java.lang.String r2 = ""
            return r2
        L9:
            r0 = 2
            java.lang.String r1 = ".*<[\\s]*a[\\s]*.*>(.+?)<[\\s]*/a[\\s]*>.*"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r1, r0)
            java.util.regex.Matcher r0 = r0.matcher(r2)
            boolean r1 = r0.matches()
            if (r1 == 0) goto L1f
            r2 = 1
            java.lang.String r2 = r0.group(r2)
        L1f:
            return r2
    }

    private static java.lang.String g(java.lang.String r2) {
            boolean r0 = b(r2)
            if (r0 == 0) goto L7
            return r2
        L7:
            java.lang.String r0 = "&lt;"
            java.lang.String r1 = "<"
            java.lang.String r2 = r2.replaceAll(r0, r1)
            java.lang.String r0 = "&gt;"
            java.lang.String r1 = ">"
            java.lang.String r2 = r2.replaceAll(r0, r1)
            java.lang.String r0 = "&amp;"
            java.lang.String r1 = "&"
            java.lang.String r2 = r2.replaceAll(r0, r1)
            java.lang.String r0 = "&quot;"
            java.lang.String r1 = "\""
            java.lang.String r2 = r2.replaceAll(r0, r1)
            return r2
    }

    private static java.lang.String h(java.lang.String r3) {
            boolean r0 = b(r3)
            if (r0 == 0) goto L7
            return r3
        L7:
            char[] r3 = r3.toCharArray()
            r0 = 0
        Lc:
            int r1 = r3.length
            if (r0 >= r1) goto L39
            char r1 = r3[r0]
            r2 = 12288(0x3000, float:1.7219E-41)
            if (r1 != r2) goto L1a
            r1 = 32
            r3[r0] = r1
            goto L36
        L1a:
            char r1 = r3[r0]
            r2 = 65281(0xff01, float:9.1478E-41)
            if (r1 < r2) goto L32
            char r1 = r3[r0]
            r2 = 65374(0xff5e, float:9.1608E-41)
            if (r1 > r2) goto L32
            char r1 = r3[r0]
            r2 = 65248(0xfee0, float:9.1432E-41)
            int r1 = r1 - r2
            char r1 = (char) r1
            r3[r0] = r1
            goto L36
        L32:
            char r1 = r3[r0]
            r3[r0] = r1
        L36:
            int r0 = r0 + 1
            goto Lc
        L39:
            java.lang.String r0 = new java.lang.String
            r0.<init>(r3)
            return r0
    }

    private static java.lang.String i(java.lang.String r3) {
            boolean r0 = b(r3)
            if (r0 == 0) goto L7
            return r3
        L7:
            char[] r3 = r3.toCharArray()
            r0 = 0
        Lc:
            int r1 = r3.length
            if (r0 >= r1) goto L37
            char r1 = r3[r0]
            r2 = 32
            if (r1 != r2) goto L1a
            r1 = 12288(0x3000, float:1.7219E-41)
            r3[r0] = r1
            goto L34
        L1a:
            char r1 = r3[r0]
            r2 = 33
            if (r1 < r2) goto L30
            char r1 = r3[r0]
            r2 = 126(0x7e, float:1.77E-43)
            if (r1 > r2) goto L30
            char r1 = r3[r0]
            r2 = 65248(0xfee0, float:9.1432E-41)
            int r1 = r1 + r2
            char r1 = (char) r1
            r3[r0] = r1
            goto L34
        L30:
            char r1 = r3[r0]
            r3[r0] = r1
        L34:
            int r0 = r0 + 1
            goto Lc
        L37:
            java.lang.String r0 = new java.lang.String
            r0.<init>(r3)
            return r0
    }
}
