package com.tkay.expressad.atsignalcommon.windvane;

public final class n {
    private static final java.lang.String[] a = null;
    private static final java.util.regex.Pattern b = null;
    private static final java.util.regex.Pattern c = null;
    private static final java.util.regex.Pattern d = null;
    private static final java.util.regex.Pattern e = null;
    private static java.util.Map<java.lang.String, java.lang.String> f;

    static {
            java.lang.String r0 = "wv_hybrid:"
            java.lang.String r1 = "mraid:"
            java.lang.String r2 = "ssp:"
            java.lang.String r3 = "mvb_hybrid:"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3}
            com.tkay.expressad.atsignalcommon.windvane.n.a = r0
            java.lang.String r0 = "hybrid://(.+?):(.+?)/(.+?)(\\?(.*?))?"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.tkay.expressad.atsignalcommon.windvane.n.b = r0
            java.lang.String r0 = "mraid://(.+?):(.+?)/(.+?)(\\?(.*?))?"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.tkay.expressad.atsignalcommon.windvane.n.c = r0
            java.lang.String r0 = "ssp://(.+?):(.+?)/(.+?)(\\?(.*?))?"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.tkay.expressad.atsignalcommon.windvane.n.d = r0
            java.lang.String r0 = "mv://(.+?):(.+?)/(.+?)(\\?(.*?))?"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.tkay.expressad.atsignalcommon.windvane.n.e = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.tkay.expressad.atsignalcommon.windvane.n.f = r0
            com.tkay.expressad.atsignalcommon.windvane.h[] r0 = com.tkay.expressad.atsignalcommon.windvane.h.values()
            int r1 = r0.length
            r2 = 0
        L3b:
            if (r2 >= r1) goto L4f
            r3 = r0[r2]
            java.util.Map<java.lang.String, java.lang.String> r4 = com.tkay.expressad.atsignalcommon.windvane.n.f
            java.lang.String r5 = r3.a()
            java.lang.String r3 = r3.b()
            r4.put(r5, r3)
            int r2 = r2 + 1
            goto L3b
        L4f:
            return
    }

    public n() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean a(java.lang.String r5) {
            java.lang.String[] r0 = com.tkay.expressad.atsignalcommon.windvane.n.a
            int r1 = r0.length
            r2 = 0
            r3 = r2
        L5:
            if (r3 >= r1) goto L14
            r4 = r0[r3]
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L11
            r5 = 1
            return r5
        L11:
            int r3 = r3 + 1
            goto L5
        L14:
            return r2
    }

    public static java.util.regex.Pattern b(java.lang.String r1) {
            java.lang.String r0 = "wv_hybrid:"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto Lb
            java.util.regex.Pattern r1 = com.tkay.expressad.atsignalcommon.windvane.n.e
            return r1
        Lb:
            java.lang.String r0 = "mraid:"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L16
            java.util.regex.Pattern r1 = com.tkay.expressad.atsignalcommon.windvane.n.c
            return r1
        L16:
            java.lang.String r0 = "ssp:"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L21
            java.util.regex.Pattern r1 = com.tkay.expressad.atsignalcommon.windvane.n.d
            return r1
        L21:
            java.lang.String r0 = "mvb_hybrid:"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L2c
            java.util.regex.Pattern r1 = com.tkay.expressad.atsignalcommon.windvane.n.e
            return r1
        L2c:
            r1 = 0
            return r1
    }

    public static java.lang.String c(java.lang.String r10) {
            r0 = 2
            char[] r1 = new char[r0]
            r1 = {x007c: FILL_ARRAY_DATA , data: [39, 92} // fill-array
            java.lang.StringBuffer r2 = new java.lang.StringBuffer
            r3 = 1000(0x3e8, float:1.401E-42)
            r2.<init>(r3)
            r3 = 0
            r2.setLength(r3)
            r4 = r3
        L12:
            int r5 = r10.length()
            if (r4 >= r5) goto L76
            char r5 = r10.charAt(r4)
            r6 = 255(0xff, float:3.57E-43)
            r7 = 1
            if (r5 <= r6) goto L55
            java.lang.String r6 = "\\u"
            r2.append(r6)
            int r6 = r5 >>> 8
            java.lang.String r6 = java.lang.Integer.toHexString(r6)
            java.lang.String r6 = r6.toUpperCase()
            int r8 = r6.length()
            java.lang.String r9 = "0"
            if (r8 != r7) goto L3b
            r2.append(r9)
        L3b:
            r2.append(r6)
            r5 = r5 & 255(0xff, float:3.57E-43)
            java.lang.String r5 = java.lang.Integer.toHexString(r5)
            java.lang.String r5 = r5.toUpperCase()
            int r6 = r5.length()
            if (r6 != r7) goto L51
            r2.append(r9)
        L51:
            r2.append(r5)
            goto L73
        L55:
            r6 = r3
        L56:
            if (r6 >= r0) goto L6d
            char r8 = r1[r6]
            if (r8 != r5) goto L6a
            java.lang.String r6 = java.lang.String.valueOf(r5)
            java.lang.String r8 = "\\"
            java.lang.String r6 = r8.concat(r6)
            r2.append(r6)
            goto L6e
        L6a:
            int r6 = r6 + 1
            goto L56
        L6d:
            r7 = r3
        L6e:
            if (r7 != 0) goto L73
            r2.append(r5)
        L73:
            int r4 = r4 + 1
            goto L12
        L76:
            java.lang.String r10 = new java.lang.String
            r10.<init>(r2)
            return r10
    }

    public static boolean d(java.lang.String r1) {
            java.lang.String r1 = e(r1)
            java.lang.String r0 = "image"
            boolean r1 = r1.startsWith(r0)
            return r1
    }

    public static java.lang.String e(java.lang.String r1) {
            java.lang.String r1 = f(r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = com.tkay.expressad.atsignalcommon.windvane.n.f
            java.lang.Object r1 = r0.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            if (r1 != 0) goto L10
            java.lang.String r1 = ""
        L10:
            return r1
    }

    private static java.lang.String f(java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            android.net.Uri r3 = android.net.Uri.parse(r3)
            java.lang.String r3 = r3.getPath()
            if (r3 == 0) goto L23
            java.lang.String r0 = "."
            int r0 = r3.lastIndexOf(r0)
            r2 = -1
            if (r0 == r2) goto L23
            int r0 = r0 + 1
            java.lang.String r3 = r3.substring(r0)
            return r3
        L23:
            return r1
    }
}
