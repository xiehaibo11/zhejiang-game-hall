package com.igexin.push.extension.distribution.basic.g;

public class c {
    public static int a(java.lang.String r17, java.lang.String r18) {
            java.lang.String r0 = ""
            java.lang.String r1 = "\\."
            r2 = -1
            java.lang.String r3 = "([a-zA-Z_-])*"
            java.util.regex.Pattern r3 = java.util.regex.Pattern.compile(r3)     // Catch: java.lang.Exception -> L76
            r4 = r17
            java.lang.String[] r4 = r4.split(r1)     // Catch: java.lang.Exception -> L76
            r5 = r18
            java.lang.String[] r1 = r5.split(r1)     // Catch: java.lang.Exception -> L76
            int r5 = r4.length     // Catch: java.lang.Exception -> L76
            r6 = 4
            if (r5 < r6) goto L76
            int r5 = r1.length     // Catch: java.lang.Exception -> L76
            if (r5 < r6) goto L76
            r5 = 3
            r7 = r4[r5]     // Catch: java.lang.Exception -> L76
            java.util.regex.Matcher r7 = r3.matcher(r7)     // Catch: java.lang.Exception -> L76
            java.lang.String r7 = r7.replaceAll(r0)     // Catch: java.lang.Exception -> L76
            r4[r5] = r7     // Catch: java.lang.Exception -> L76
            r7 = r1[r5]     // Catch: java.lang.Exception -> L76
            java.util.regex.Matcher r3 = r3.matcher(r7)     // Catch: java.lang.Exception -> L76
            java.lang.String r0 = r3.replaceAll(r0)     // Catch: java.lang.Exception -> L76
            r1[r5] = r0     // Catch: java.lang.Exception -> L76
            r7 = 0
            r9 = r7
            r3 = 0
        L3b:
            r11 = 100
            r13 = 1
            if (r3 >= r6) goto L55
            r15 = 0
        L42:
            int r0 = 3 - r3
            if (r15 >= r0) goto L4a
            long r13 = r13 * r11
            int r15 = r15 + 1
            goto L42
        L4a:
            r0 = r4[r3]     // Catch: java.lang.Exception -> L76
            long r11 = java.lang.Long.parseLong(r0)     // Catch: java.lang.Exception -> L76
            long r11 = r11 * r13
            long r9 = r9 + r11
            int r3 = r3 + 1
            goto L3b
        L55:
            r0 = 0
        L56:
            if (r0 >= r6) goto L6d
            r15 = r13
            r3 = 0
        L5a:
            int r4 = 3 - r0
            if (r3 >= r4) goto L62
            long r15 = r15 * r11
            int r3 = r3 + 1
            goto L5a
        L62:
            r3 = r1[r0]     // Catch: java.lang.Exception -> L76
            long r3 = java.lang.Long.parseLong(r3)     // Catch: java.lang.Exception -> L76
            long r3 = r3 * r15
            long r7 = r7 + r3
            int r0 = r0 + 1
            goto L56
        L6d:
            int r0 = (r9 > r7 ? 1 : (r9 == r7 ? 0 : -1))
            if (r0 <= 0) goto L73
            r2 = 1
            goto L76
        L73:
            if (r0 != 0) goto L76
            r2 = 0
        L76:
            return r2
    }
}
