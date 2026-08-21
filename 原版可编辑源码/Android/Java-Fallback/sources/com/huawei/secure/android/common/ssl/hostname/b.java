package com.huawei.secure.android.common.ssl.hostname;

public class b {
    private static final java.util.regex.Pattern a = null;
    private static final java.lang.String[] b = null;

    static {
            java.lang.String r0 = "^(25[0-5]|2[0-4]\\d|[0-1]?\\d?\\d)(\\.(25[0-5]|2[0-4]\\d|[0-1]?\\d?\\d)){3}$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.huawei.secure.android.common.ssl.hostname.b.a = r0
            java.lang.String r1 = "ac"
            java.lang.String r2 = "co"
            java.lang.String r3 = "com"
            java.lang.String r4 = "ed"
            java.lang.String r5 = "edu"
            java.lang.String r6 = "go"
            java.lang.String r7 = "gouv"
            java.lang.String r8 = "gov"
            java.lang.String r9 = "info"
            java.lang.String r10 = "lg"
            java.lang.String r11 = "ne"
            java.lang.String r12 = "net"
            java.lang.String r13 = "or"
            java.lang.String r14 = "org"
            java.lang.String[] r0 = new java.lang.String[]{r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14}
            com.huawei.secure.android.common.ssl.hostname.b.b = r0
            java.util.Arrays.sort(r0)
            return
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final void a(java.lang.String r4, java.security.cert.X509Certificate r5, boolean r6) throws javax.net.ssl.SSLException {
            java.lang.String[] r0 = a(r5)
            java.lang.String[] r5 = b(r5)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "cn is : "
            r1.append(r2)
            java.lang.String r2 = java.util.Arrays.toString(r0)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = ""
            com.huawei.secure.android.common.ssl.util.g.a(r2, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "san is : "
            r1.append(r3)
            java.lang.String r3 = java.util.Arrays.toString(r5)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            com.huawei.secure.android.common.ssl.util.g.a(r2, r1)
            a(r4, r0, r5, r6)
            return
    }

    public static final void a(java.lang.String r6, java.lang.String[] r7, java.lang.String[] r8, boolean r9) throws javax.net.ssl.SSLException {
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r1 = 0
            if (r7 == 0) goto L14
            int r2 = r7.length
            if (r2 <= 0) goto L14
            r2 = r7[r1]
            if (r2 == 0) goto L14
            r7 = r7[r1]
            r0.add(r7)
        L14:
            if (r8 == 0) goto L24
            int r7 = r8.length
            r2 = r1
        L18:
            if (r2 >= r7) goto L24
            r3 = r8[r2]
            if (r3 == 0) goto L21
            r0.add(r3)
        L21:
            int r2 = r2 + 1
            goto L18
        L24:
            boolean r7 = r0.isEmpty()
            if (r7 != 0) goto Ld0
            java.lang.StringBuffer r7 = new java.lang.StringBuffer
            r7.<init>()
            java.lang.String r8 = r6.trim()
            java.util.Locale r2 = java.util.Locale.ENGLISH
            java.lang.String r8 = r8.toLowerCase(r2)
            java.util.Iterator r0 = r0.iterator()
            r2 = r1
        L3e:
            boolean r3 = r0.hasNext()
            if (r3 == 0) goto Lae
            java.lang.Object r2 = r0.next()
            java.lang.String r2 = (java.lang.String) r2
            java.util.Locale r3 = java.util.Locale.ENGLISH
            java.lang.String r2 = r2.toLowerCase(r3)
            java.lang.String r3 = " <"
            r7.append(r3)
            r7.append(r2)
            r3 = 62
            r7.append(r3)
            boolean r3 = r0.hasNext()
            if (r3 == 0) goto L68
            java.lang.String r3 = " OR"
            r7.append(r3)
        L68:
            java.lang.String r3 = "*."
            boolean r3 = r2.startsWith(r3)
            r4 = 1
            if (r3 == 0) goto L89
            r3 = 46
            r5 = 2
            int r3 = r2.indexOf(r3, r5)
            r5 = -1
            if (r3 == r5) goto L89
            boolean r3 = a(r2)
            if (r3 == 0) goto L89
            boolean r3 = c(r6)
            if (r3 != 0) goto L89
            r3 = r4
            goto L8a
        L89:
            r3 = r1
        L8a:
            if (r3 == 0) goto La8
            java.lang.String r3 = r2.substring(r4)
            boolean r3 = r8.endsWith(r3)
            if (r3 == 0) goto La6
            if (r9 == 0) goto La6
            int r3 = b(r8)
            int r2 = b(r2)
            if (r3 != r2) goto La4
            r2 = r4
            goto Lac
        La4:
            r2 = r1
            goto Lac
        La6:
            r2 = r3
            goto Lac
        La8:
            boolean r2 = r8.equals(r2)
        Lac:
            if (r2 == 0) goto L3e
        Lae:
            if (r2 == 0) goto Lb1
            return
        Lb1:
            javax.net.ssl.SSLException r8 = new javax.net.ssl.SSLException
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r0 = "hostname in certificate didn't match: <"
            r9.append(r0)
            r9.append(r6)
            java.lang.String r6 = "> !="
            r9.append(r6)
            r9.append(r7)
            java.lang.String r6 = r9.toString()
            r8.<init>(r6)
            throw r8
        Ld0:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "Certificate for <"
            r7.append(r8)
            r7.append(r6)
            java.lang.String r6 = "> doesn't contain CN or DNS subjectAlt"
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            javax.net.ssl.SSLException r7 = new javax.net.ssl.SSLException
            r7.<init>(r6)
            throw r7
    }

    public static boolean a(java.lang.String r4) {
            int r0 = r4.length()
            r1 = 1
            r2 = 7
            if (r0 < r2) goto L25
            r2 = 9
            if (r0 > r2) goto L25
            int r0 = r0 + (-3)
            char r2 = r4.charAt(r0)
            r3 = 46
            if (r2 != r3) goto L25
            r2 = 2
            java.lang.String r4 = r4.substring(r2, r0)
            java.lang.String[] r0 = com.huawei.secure.android.common.ssl.hostname.b.b
            int r4 = java.util.Arrays.binarySearch(r0, r4)
            if (r4 >= 0) goto L24
            goto L25
        L24:
            r1 = 0
        L25:
            return r1
    }

    public static java.lang.String[] a(java.security.cert.X509Certificate r1) {
            com.huawei.secure.android.common.ssl.hostname.a r0 = new com.huawei.secure.android.common.ssl.hostname.a
            javax.security.auth.x500.X500Principal r1 = r1.getSubjectX500Principal()
            r0.<init>(r1)
            java.lang.String r1 = "cn"
            java.util.List r1 = r0.b(r1)
            boolean r0 = r1.isEmpty()
            if (r0 != 0) goto L1f
            int r0 = r1.size()
            java.lang.String[] r0 = new java.lang.String[r0]
            r1.toArray(r0)
            return r0
        L1f:
            r1 = 0
            return r1
    }

    public static int b(java.lang.String r4) {
            r0 = 0
            r1 = r0
        L2:
            int r2 = r4.length()
            if (r0 >= r2) goto L15
            char r2 = r4.charAt(r0)
            r3 = 46
            if (r2 != r3) goto L12
            int r1 = r1 + 1
        L12:
            int r0 = r0 + 1
            goto L2
        L15:
            return r1
    }

    public static java.lang.String[] b(java.security.cert.X509Certificate r5) {
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r1 = 0
            java.util.Collection r5 = r5.getSubjectAlternativeNames()     // Catch: java.security.cert.CertificateParsingException -> Lb
            goto L14
        Lb:
            r5 = move-exception
            java.lang.String r2 = ""
            java.lang.String r3 = "Error parsing certificate."
            com.huawei.secure.android.common.ssl.util.g.a(r2, r3, r5)
            r5 = r1
        L14:
            if (r5 == 0) goto L3f
            java.util.Iterator r5 = r5.iterator()
        L1a:
            boolean r2 = r5.hasNext()
            if (r2 == 0) goto L3f
            java.lang.Object r2 = r5.next()
            java.util.List r2 = (java.util.List) r2
            r3 = 0
            java.lang.Object r3 = r2.get(r3)
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r3 = r3.intValue()
            r4 = 2
            if (r3 != r4) goto L1a
            r3 = 1
            java.lang.Object r2 = r2.get(r3)
            java.lang.String r2 = (java.lang.String) r2
            r0.add(r2)
            goto L1a
        L3f:
            boolean r5 = r0.isEmpty()
            if (r5 != 0) goto L4f
            int r5 = r0.size()
            java.lang.String[] r5 = new java.lang.String[r5]
            r0.toArray(r5)
            return r5
        L4f:
            return r1
    }

    private static boolean c(java.lang.String r1) {
            java.util.regex.Pattern r0 = com.huawei.secure.android.common.ssl.hostname.b.a
            java.util.regex.Matcher r1 = r0.matcher(r1)
            boolean r1 = r1.matches()
            return r1
    }
}
