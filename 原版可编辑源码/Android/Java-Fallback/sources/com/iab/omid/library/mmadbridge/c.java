package com.iab.omid.library.mmadbridge;

class c {
    private static final java.util.regex.Pattern a = null;
    private static final java.util.regex.Pattern b = null;
    private static final java.util.regex.Pattern c = null;
    private static final java.util.regex.Pattern d = null;
    private static final java.util.regex.Pattern e = null;
    private static final java.util.regex.Pattern f = null;
    private static final java.util.regex.Pattern g = null;

    static {
            r0 = 2
            java.lang.String r1 = "<(head)( [^>]*)?>"
            java.util.regex.Pattern r1 = java.util.regex.Pattern.compile(r1, r0)
            com.iab.omid.library.mmadbridge.c.a = r1
            java.lang.String r1 = "<(head)( [^>]*)?/>"
            java.util.regex.Pattern r1 = java.util.regex.Pattern.compile(r1, r0)
            com.iab.omid.library.mmadbridge.c.b = r1
            java.lang.String r1 = "<(body)( [^>]*?)?>"
            java.util.regex.Pattern r1 = java.util.regex.Pattern.compile(r1, r0)
            com.iab.omid.library.mmadbridge.c.c = r1
            java.lang.String r1 = "<(body)( [^>]*?)?/>"
            java.util.regex.Pattern r1 = java.util.regex.Pattern.compile(r1, r0)
            com.iab.omid.library.mmadbridge.c.d = r1
            java.lang.String r1 = "<(html)( [^>]*?)?>"
            java.util.regex.Pattern r1 = java.util.regex.Pattern.compile(r1, r0)
            com.iab.omid.library.mmadbridge.c.e = r1
            java.lang.String r1 = "<(html)( [^>]*?)?/>"
            java.util.regex.Pattern r1 = java.util.regex.Pattern.compile(r1, r0)
            com.iab.omid.library.mmadbridge.c.f = r1
            java.lang.String r1 = "<!DOCTYPE [^>]*>"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r1, r0)
            com.iab.omid.library.mmadbridge.c.g = r0
            return
    }

    static java.lang.String a(java.lang.String r3, java.lang.String r4) {
            java.lang.String r0 = "HTML is null or empty"
            com.iab.omid.library.mmadbridge.utils.g.a(r3, r0)
            int[][] r0 = a(r3)
            int r1 = r3.length()
            int r2 = r4.length()
            int r1 = r1 + r2
            int r1 = r1 + 16
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r1)
            java.util.regex.Pattern r1 = com.iab.omid.library.mmadbridge.c.b
            boolean r1 = b(r3, r2, r1, r4, r0)
            if (r1 == 0) goto L26
            java.lang.String r3 = r2.toString()
            return r3
        L26:
            java.util.regex.Pattern r1 = com.iab.omid.library.mmadbridge.c.a
            boolean r1 = a(r3, r2, r1, r4, r0)
            if (r1 == 0) goto L33
            java.lang.String r3 = r2.toString()
            return r3
        L33:
            java.util.regex.Pattern r1 = com.iab.omid.library.mmadbridge.c.d
            boolean r1 = b(r3, r2, r1, r4, r0)
            if (r1 == 0) goto L40
            java.lang.String r3 = r2.toString()
            return r3
        L40:
            java.util.regex.Pattern r1 = com.iab.omid.library.mmadbridge.c.c
            boolean r1 = a(r3, r2, r1, r4, r0)
            if (r1 == 0) goto L4d
            java.lang.String r3 = r2.toString()
            return r3
        L4d:
            java.util.regex.Pattern r1 = com.iab.omid.library.mmadbridge.c.f
            boolean r1 = b(r3, r2, r1, r4, r0)
            if (r1 == 0) goto L5a
            java.lang.String r3 = r2.toString()
            return r3
        L5a:
            java.util.regex.Pattern r1 = com.iab.omid.library.mmadbridge.c.e
            boolean r1 = a(r3, r2, r1, r4, r0)
            if (r1 == 0) goto L67
            java.lang.String r3 = r2.toString()
            return r3
        L67:
            java.util.regex.Pattern r1 = com.iab.omid.library.mmadbridge.c.g
            boolean r0 = a(r3, r2, r1, r4, r0)
            if (r0 == 0) goto L74
            java.lang.String r3 = r2.toString()
            return r3
        L74:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
    }

    private static boolean a(int r5, int[][] r6) {
            r0 = 0
            if (r6 == 0) goto L16
            int r1 = r6.length
            r2 = r0
        L5:
            if (r2 >= r1) goto L16
            r3 = r6[r2]
            r4 = r3[r0]
            if (r5 < r4) goto L13
            r4 = 1
            r3 = r3[r4]
            if (r5 > r3) goto L13
            return r4
        L13:
            int r2 = r2 + 1
            goto L5
        L16:
            return r0
    }

    private static boolean a(java.lang.String r3, java.lang.StringBuilder r4, java.util.regex.Pattern r5, java.lang.String r6, int[][] r7) {
            java.util.regex.Matcher r5 = r5.matcher(r3)
            r0 = 0
            r1 = r0
        L6:
            boolean r1 = r5.find(r1)
            if (r1 == 0) goto L37
            int r1 = r5.start()
            int r2 = r5.end()
            boolean r1 = a(r1, r7)
            if (r1 != 0) goto L35
            int r7 = r5.end()
            java.lang.String r7 = r3.substring(r0, r7)
            r4.append(r7)
            r4.append(r6)
            int r5 = r5.end()
            java.lang.String r3 = r3.substring(r5)
            r4.append(r3)
            r3 = 1
            return r3
        L35:
            r1 = r2
            goto L6
        L37:
            return r0
    }

    private static int[][] a(java.lang.String r7) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            int r1 = r7.length()
            r2 = 0
            r3 = r2
        Lb:
            r4 = 2
            if (r3 >= r1) goto L34
            java.lang.String r5 = "<!--"
            int r3 = r7.indexOf(r5, r3)
            if (r3 < 0) goto L32
            java.lang.String r5 = "-->"
            int r5 = r7.indexOf(r5, r3)
            r6 = 1
            int[] r4 = new int[r4]
            if (r5 < 0) goto L2b
            r4[r2] = r3
            r4[r6] = r5
            r0.add(r4)
            int r3 = r5 + 3
            goto Lb
        L2b:
            r4[r2] = r3
            r4[r6] = r1
            r0.add(r4)
        L32:
            r3 = r1
            goto Lb
        L34:
            int[] r7 = new int[r4]
            r7 = {x0048: FILL_ARRAY_DATA , data: [0, 2} // fill-array
            java.lang.Class<int> r1 = int.class
            java.lang.Object r7 = java.lang.reflect.Array.newInstance(r1, r7)
            int[][] r7 = (int[][]) r7
            java.lang.Object[] r7 = r0.toArray(r7)
            int[][] r7 = (int[][]) r7
            return r7
    }

    static java.lang.String b(java.lang.String r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "<script type=\"text/javascript\">"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = "</script>"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r2 = a(r3, r2)
            return r2
    }

    private static boolean b(java.lang.String r3, java.lang.StringBuilder r4, java.util.regex.Pattern r5, java.lang.String r6, int[][] r7) {
            java.util.regex.Matcher r5 = r5.matcher(r3)
            r0 = 0
            r1 = r0
        L6:
            boolean r1 = r5.find(r1)
            if (r1 == 0) goto L4d
            int r1 = r5.start()
            int r2 = r5.end()
            boolean r1 = a(r1, r7)
            if (r1 != 0) goto L4b
            int r7 = r5.end()
            int r7 = r7 + (-2)
            java.lang.String r7 = r3.substring(r0, r7)
            r4.append(r7)
            java.lang.String r7 = ">"
            r4.append(r7)
            r4.append(r6)
            java.lang.String r6 = "</"
            r4.append(r6)
            r6 = 1
            java.lang.String r0 = r5.group(r6)
            r4.append(r0)
            r4.append(r7)
            int r5 = r5.end()
            java.lang.String r3 = r3.substring(r5)
            r4.append(r3)
            return r6
        L4b:
            r1 = r2
            goto L6
        L4d:
            return r0
    }
}
