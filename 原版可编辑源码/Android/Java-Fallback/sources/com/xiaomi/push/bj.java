package com.xiaomi.push;

public class bj {
    public static final java.util.regex.Pattern a = null;
    public static final java.util.regex.Pattern b = null;
    public static final java.util.regex.Pattern c = null;

    public final class a extends java.io.FilterInputStream {
        private boolean a;

        public a(java.io.InputStream r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public int read(byte[] r3, int r4, int r5) {
                r2 = this;
                boolean r0 = r2.a
                r1 = -1
                if (r0 != 0) goto Lc
                int r3 = super.read(r3, r4, r5)
                if (r3 == r1) goto Lc
                return r3
            Lc:
                r3 = 1
                r2.a = r3
                return r1
        }
    }

    public class b {
        public int a;
        public java.util.Map<java.lang.String, java.lang.String> a;

        public java.lang.String toString() {
                r3 = this;
                r0 = 2
                java.lang.Object[] r0 = new java.lang.Object[r0]
                int r1 = r3.a
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                r2 = 0
                r0[r2] = r1
                java.util.Map<java.lang.String, java.lang.String> r1 = r3.a
                java.lang.String r1 = r1.toString()
                r2 = 1
                r0[r2] = r1
                java.lang.String r1 = "resCode = %1$d, headers = %2$s"
                java.lang.String r0 = java.lang.String.format(r1, r0)
                return r0
        }
    }

    static {
            java.lang.String r0 = "([^\\s;]+)(.*)"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.xiaomi.push.bj.a = r0
            r0 = 2
            java.lang.String r1 = "(.*?charset\\s*=[^a-zA-Z0-9]*)([-a-zA-Z0-9]+)(.*)"
            java.util.regex.Pattern r1 = java.util.regex.Pattern.compile(r1, r0)
            com.xiaomi.push.bj.b = r1
            java.lang.String r1 = "(\\<\\?xml\\s+.*?encoding\\s*=[^a-zA-Z0-9]*)([-a-zA-Z0-9]+)(.*)"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r1, r0)
            com.xiaomi.push.bj.c = r0
            return
    }

    public static int a(android.content.Context r2) {
            r0 = -1
            java.lang.String r1 = "connectivity"
            java.lang.Object r2 = r2.getSystemService(r1)     // Catch: java.lang.Exception -> L18
            android.net.ConnectivityManager r2 = (android.net.ConnectivityManager) r2     // Catch: java.lang.Exception -> L18
            if (r2 != 0) goto Lc
            return r0
        Lc:
            android.net.NetworkInfo r2 = r2.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L18
            if (r2 != 0) goto L13
            return r0
        L13:
            int r2 = r2.getType()
            return r2
        L18:
            return r0
    }

    public static android.net.NetworkInfo a(android.content.Context r2) {
            r0 = 0
            java.lang.String r1 = "connectivity"
            java.lang.Object r2 = r2.getSystemService(r1)     // Catch: java.lang.Exception -> L11
            android.net.ConnectivityManager r2 = (android.net.ConnectivityManager) r2     // Catch: java.lang.Exception -> L11
            if (r2 != 0) goto Lc
            return r0
        Lc:
            android.net.NetworkInfo r2 = r2.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L11
            return r2
        L11:
            return r0
    }

    private static com.xiaomi.push.bh a(android.content.Context r6, java.lang.String r7, java.lang.String r8, java.util.Map<java.lang.String, java.lang.String> r9, java.lang.String r10) {
            com.xiaomi.push.bh r0 = new com.xiaomi.push.bh
            r0.<init>()
            r1 = 0
            java.net.URL r2 = a(r7)     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            java.net.HttpURLConnection r6 = a(r6, r2)     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            r2 = 10000(0x2710, float:1.4013E-41)
            r6.setConnectTimeout(r2)     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            r2 = 15000(0x3a98, float:2.102E-41)
            r6.setReadTimeout(r2)     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            if (r8 != 0) goto L1c
            java.lang.String r8 = "GET"
        L1c:
            r6.setRequestMethod(r8)     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            r8 = 0
            if (r9 == 0) goto L4e
            java.lang.String r2 = "gzip"
            java.lang.String r3 = "Content-Encoding"
            java.lang.Object r3 = r9.get(r3)     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            boolean r2 = r2.equalsIgnoreCase(r3)     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            java.util.Set r3 = r9.keySet()     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
        L38:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            if (r4 == 0) goto L4f
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            java.lang.Object r5 = r9.get(r4)     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            r6.setRequestProperty(r4, r5)     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            goto L38
        L4e:
            r2 = r8
        L4f:
            boolean r9 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            r3 = 1
            if (r9 != 0) goto L82
            r6.setDoOutput(r3)     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            byte[] r9 = r10.getBytes()     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            if (r2 == 0) goto L69
            java.util.zip.GZIPOutputStream r10 = new java.util.zip.GZIPOutputStream     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            java.io.OutputStream r2 = r6.getOutputStream()     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            r10.<init>(r2)     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            goto L6d
        L69:
            java.io.OutputStream r10 = r6.getOutputStream()     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
        L6d:
            int r2 = r9.length     // Catch: java.lang.Throwable -> L78 java.io.IOException -> L7d
            r10.write(r9, r8, r2)     // Catch: java.lang.Throwable -> L78 java.io.IOException -> L7d
            r10.flush()     // Catch: java.lang.Throwable -> L78 java.io.IOException -> L7d
            r10.close()     // Catch: java.lang.Throwable -> L78 java.io.IOException -> L7d
            goto L82
        L78:
            r6 = move-exception
            r8 = r1
            r1 = r10
            goto L10c
        L7d:
            r6 = move-exception
            r8 = r1
            r1 = r10
            goto L118
        L82:
            int r9 = r6.getResponseCode()     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            r0.a = r9     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            r9.<init>()     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            java.lang.String r10 = "Http POST Response Code: "
            r9.append(r10)     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            int r10 = r0.a     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            r9.append(r10)     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            com.xiaomi.channel.commonutils.logger.b.a(r9)     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
        L9e:
            java.lang.String r9 = r6.getHeaderFieldKey(r8)     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            java.lang.String r10 = r6.getHeaderField(r8)     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            if (r9 != 0) goto L101
            if (r10 != 0) goto L101
            java.io.BufferedReader r8 = new java.io.BufferedReader     // Catch: java.io.IOException -> Lbe java.lang.Throwable -> L10a
            java.io.InputStreamReader r9 = new java.io.InputStreamReader     // Catch: java.io.IOException -> Lbe java.lang.Throwable -> L10a
            com.xiaomi.push.bj$a r10 = new com.xiaomi.push.bj$a     // Catch: java.io.IOException -> Lbe java.lang.Throwable -> L10a
            java.io.InputStream r2 = r6.getInputStream()     // Catch: java.io.IOException -> Lbe java.lang.Throwable -> L10a
            r10.<init>(r2)     // Catch: java.io.IOException -> Lbe java.lang.Throwable -> L10a
            r9.<init>(r10)     // Catch: java.io.IOException -> Lbe java.lang.Throwable -> L10a
            r8.<init>(r9)     // Catch: java.io.IOException -> Lbe java.lang.Throwable -> L10a
            goto Ld1
        Lbe:
            java.io.BufferedReader r8 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            java.io.InputStreamReader r9 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            com.xiaomi.push.bj$a r10 = new com.xiaomi.push.bj$a     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            java.io.InputStream r6 = r6.getErrorStream()     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            r10.<init>(r6)     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            r9.<init>(r10)     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            r8.<init>(r9)     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
        Ld1:
            java.lang.String r6 = r8.readLine()     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> Lff
            java.lang.StringBuffer r9 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> Lff
            r9.<init>()     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> Lff
            java.lang.String r10 = "line.separator"
            java.lang.String r10 = java.lang.System.getProperty(r10)     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> Lff
        Le0:
            if (r6 == 0) goto Led
            r9.append(r6)     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> Lff
            r9.append(r10)     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> Lff
            java.lang.String r6 = r8.readLine()     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> Lff
            goto Le0
        Led:
            java.lang.String r6 = r9.toString()     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> Lff
            r0.a = r6     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> Lff
            r8.close()     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> Lff
            com.xiaomi.push.ab.a(r1)
            com.xiaomi.push.ab.a(r1)
            return r0
        Lfd:
            r6 = move-exception
            goto L10c
        Lff:
            r6 = move-exception
            goto L118
        L101:
            java.util.Map<java.lang.String, java.lang.String> r2 = r0.a     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            r2.put(r9, r10)     // Catch: java.lang.Throwable -> L10a java.io.IOException -> L116
            int r8 = r8 + 1
            int r8 = r8 + r3
            goto L9e
        L10a:
            r6 = move-exception
            r8 = r1
        L10c:
            java.io.IOException r7 = new java.io.IOException     // Catch: java.lang.Throwable -> L13f
            java.lang.String r6 = r6.getMessage()     // Catch: java.lang.Throwable -> L13f
            r7.<init>(r6)     // Catch: java.lang.Throwable -> L13f
            throw r7     // Catch: java.lang.Throwable -> L13f
        L116:
            r6 = move-exception
            r8 = r1
        L118:
            java.io.IOException r9 = new java.io.IOException     // Catch: java.lang.Throwable -> L13f
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13f
            r10.<init>()     // Catch: java.lang.Throwable -> L13f
            java.lang.String r0 = "err while request "
            r10.append(r0)     // Catch: java.lang.Throwable -> L13f
            r10.append(r7)     // Catch: java.lang.Throwable -> L13f
            java.lang.String r7 = ":"
            r10.append(r7)     // Catch: java.lang.Throwable -> L13f
            java.lang.Class r6 = r6.getClass()     // Catch: java.lang.Throwable -> L13f
            java.lang.String r6 = r6.getSimpleName()     // Catch: java.lang.Throwable -> L13f
            r10.append(r6)     // Catch: java.lang.Throwable -> L13f
            java.lang.String r6 = r10.toString()     // Catch: java.lang.Throwable -> L13f
            r9.<init>(r6)     // Catch: java.lang.Throwable -> L13f
            throw r9     // Catch: java.lang.Throwable -> L13f
        L13f:
            r6 = move-exception
            com.xiaomi.push.ab.a(r1)
            com.xiaomi.push.ab.a(r8)
            throw r6
    }

    public static com.xiaomi.push.bh a(android.content.Context r2, java.lang.String r3, java.util.Map<java.lang.String, java.lang.String> r4) {
            java.lang.String r4 = a(r4)
            java.lang.String r0 = "POST"
            r1 = 0
            com.xiaomi.push.bh r2 = a(r2, r3, r0, r1, r4)
            return r2
    }

    public static java.io.InputStream a(android.content.Context r7, java.net.URL r8, boolean r9, java.lang.String r10, java.lang.String r11) {
            r5 = 0
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            java.io.InputStream r7 = a(r0, r1, r2, r3, r4, r5, r6)
            return r7
    }

    public static java.io.InputStream a(android.content.Context r1, java.net.URL r2, boolean r3, java.lang.String r4, java.lang.String r5, java.util.Map<java.lang.String, java.lang.String> r6, com.xiaomi.push.bj.b r7) {
            if (r1 == 0) goto Le4
            if (r2 == 0) goto Ldc
            if (r3 != 0) goto L14
            java.net.URL r3 = new java.net.URL
            java.lang.String r0 = r2.toString()
            java.lang.String r0 = a(r0)
            r3.<init>(r0)
            goto L15
        L14:
            r3 = r2
        L15:
            r0 = 1
            java.net.HttpURLConnection.setFollowRedirects(r0)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            java.net.HttpURLConnection r1 = a(r1, r3)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            r3 = 10000(0x2710, float:1.4013E-41)
            r1.setConnectTimeout(r3)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            r3 = 15000(0x3a98, float:2.102E-41)
            r1.setReadTimeout(r3)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            boolean r3 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            if (r3 != 0) goto L32
            java.lang.String r3 = "User-Agent"
            r1.setRequestProperty(r3, r4)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
        L32:
            if (r5 == 0) goto L39
            java.lang.String r3 = "Cookie"
            r1.setRequestProperty(r3, r5)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
        L39:
            if (r6 == 0) goto L59
            java.util.Set r3 = r6.keySet()     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
        L43:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            if (r4 == 0) goto L59
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            java.lang.Object r5 = r6.get(r4)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            r1.setRequestProperty(r4, r5)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            goto L43
        L59:
            if (r7 == 0) goto La7
            java.lang.String r3 = r2.getProtocol()     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            java.lang.String r4 = "http"
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            if (r3 != 0) goto L73
            java.lang.String r2 = r2.getProtocol()     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            java.lang.String r3 = "https"
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            if (r2 == 0) goto La7
        L73:
            int r2 = r1.getResponseCode()     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            r7.a = r2     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            java.util.Map<java.lang.String, java.lang.String> r2 = r7.a     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            if (r2 != 0) goto L84
            java.util.HashMap r2 = new java.util.HashMap     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            r2.<init>()     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            r7.a = r2     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
        L84:
            r2 = 0
        L85:
            java.lang.String r3 = r1.getHeaderFieldKey(r2)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            java.lang.String r4 = r1.getHeaderField(r2)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            if (r3 != 0) goto L92
            if (r4 != 0) goto L92
            goto La7
        L92:
            boolean r5 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            if (r5 != 0) goto La4
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            if (r5 == 0) goto L9f
            goto La4
        L9f:
            java.util.Map<java.lang.String, java.lang.String> r5 = r7.a     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            r5.put(r3, r4)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
        La4:
            int r2 = r2 + 1
            goto L85
        La7:
            com.xiaomi.push.bj$a r2 = new com.xiaomi.push.bj$a     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            java.io.InputStream r1 = r1.getInputStream()     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            r2.<init>(r1)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lbc
            return r2
        Lb1:
            r1 = move-exception
            java.io.IOException r2 = new java.io.IOException
            java.lang.String r1 = r1.getMessage()
            r2.<init>(r1)
            throw r2
        Lbc:
            r1 = move-exception
            java.io.IOException r2 = new java.io.IOException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "IOException:"
            r3.append(r4)
            java.lang.Class r1 = r1.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            r2.<init>(r1)
            throw r2
        Ldc:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "url"
            r1.<init>(r2)
            throw r1
        Le4:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "context"
            r1.<init>(r2)
            throw r1
    }

    public static java.lang.String a(android.content.Context r3) {
            java.lang.String r0 = ""
            boolean r1 = e(r3)
            if (r1 == 0) goto Lb
            java.lang.String r3 = "wifi"
            return r3
        Lb:
            java.lang.String r1 = "connectivity"
            java.lang.Object r3 = r3.getSystemService(r1)     // Catch: java.lang.Exception -> L48
            android.net.ConnectivityManager r3 = (android.net.ConnectivityManager) r3     // Catch: java.lang.Exception -> L48
            if (r3 != 0) goto L16
            return r0
        L16:
            android.net.NetworkInfo r3 = r3.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L48
            if (r3 != 0) goto L1d
            return r0
        L1d:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.getTypeName()
            r0.append(r1)
            java.lang.String r1 = "-"
            r0.append(r1)
            java.lang.String r2 = r3.getSubtypeName()
            r0.append(r2)
            r0.append(r1)
            java.lang.String r3 = r3.getExtraInfo()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r3 = r3.toLowerCase()
            return r3
        L48:
            return r0
    }

    public static java.lang.String a(android.content.Context r6, java.net.URL r7) {
            r2 = 0
            r3 = 0
            java.lang.String r4 = "UTF-8"
            r5 = 0
            r0 = r6
            r1 = r7
            java.lang.String r6 = a(r0, r1, r2, r3, r4, r5)
            return r6
    }

    public static java.lang.String a(android.content.Context r0, java.net.URL r1, boolean r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            java.io.InputStream r0 = a(r0, r1, r2, r3, r5)     // Catch: java.lang.Throwable -> L2f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2d
            r2 = 1024(0x400, float:1.435E-42)
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L2d
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L2d
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L2d
            r3.<init>(r0, r4)     // Catch: java.lang.Throwable -> L2d
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L2d
            r3 = 4096(0x1000, float:5.74E-42)
            char[] r3 = new char[r3]     // Catch: java.lang.Throwable -> L2d
        L19:
            r4 = -1
            int r5 = r2.read(r3)     // Catch: java.lang.Throwable -> L2d
            if (r4 == r5) goto L25
            r4 = 0
            r1.append(r3, r4, r5)     // Catch: java.lang.Throwable -> L2d
            goto L19
        L25:
            com.xiaomi.push.ab.a(r0)
            java.lang.String r0 = r1.toString()
            return r0
        L2d:
            r1 = move-exception
            goto L31
        L2f:
            r1 = move-exception
            r0 = 0
        L31:
            com.xiaomi.push.ab.a(r0)
            throw r1
    }

    public static java.lang.String a(java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L29
            java.lang.String r0 = new java.lang.String
            r0.<init>()
            r0 = 1
            java.lang.Object[] r1 = new java.lang.Object[r0]
            r2 = 0
            r1[r2] = r4
            java.lang.String r3 = "%sbe988a6134bc8254465424e5a70ef037"
            java.lang.String r1 = java.lang.String.format(r3, r1)
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r3[r2] = r4
            java.lang.String r4 = com.xiaomi.push.bo.a(r1)
            r3[r0] = r4
            java.lang.String r4 = "%s&key=%s"
            java.lang.String r4 = java.lang.String.format(r4, r3)
            return r4
        L29:
            r4 = 0
            return r4
    }

    public static java.lang.String a(java.lang.String r7, java.util.Map<java.lang.String, java.lang.String> r8, java.io.File r9, java.lang.String r10) {
            java.lang.String r0 = "--"
            java.lang.String r1 = "\r\n"
            boolean r2 = r9.exists()
            r3 = 0
            if (r2 != 0) goto Lc
            return r3
        Lc:
            java.lang.String r2 = r9.getName()
            java.net.URL r4 = new java.net.URL     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            r4.<init>(r7)     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            java.net.URLConnection r7 = r4.openConnection()     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            java.net.HttpURLConnection r7 = (java.net.HttpURLConnection) r7     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            r4 = 15000(0x3a98, float:2.102E-41)
            r7.setReadTimeout(r4)     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            r4 = 10000(0x2710, float:1.4013E-41)
            r7.setConnectTimeout(r4)     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            r4 = 1
            r7.setDoInput(r4)     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            r7.setDoOutput(r4)     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            r4 = 0
            r7.setUseCaches(r4)     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            java.lang.String r5 = "POST"
            r7.setRequestMethod(r5)     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            java.lang.String r5 = "Connection"
            java.lang.String r6 = "Keep-Alive"
            r7.setRequestProperty(r5, r6)     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            java.lang.String r5 = "Content-Type"
            java.lang.String r6 = "multipart/form-data;boundary=*****"
            r7.setRequestProperty(r5, r6)     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            if (r8 == 0) goto L69
            java.util.Set r8 = r8.entrySet()     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            java.util.Iterator r8 = r8.iterator()     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
        L4d:
            boolean r5 = r8.hasNext()     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            if (r5 == 0) goto L69
            java.lang.Object r5 = r8.next()     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            java.util.Map$Entry r5 = (java.util.Map.Entry) r5     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            java.lang.Object r6 = r5.getKey()     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            java.lang.Object r5 = r5.getValue()     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            r7.setRequestProperty(r6, r5)     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            goto L4d
        L69:
            int r8 = r2.length()     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            int r8 = r8 + 77
            long r5 = r9.length()     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            int r2 = (int) r5     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            int r8 = r8 + r2
            int r2 = r10.length()     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            int r8 = r8 + r2
            r7.setFixedLengthStreamingMode(r8)     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            java.io.DataOutputStream r8 = new java.io.DataOutputStream     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            java.io.OutputStream r2 = r7.getOutputStream()     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            r8.<init>(r2)     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            java.lang.String r2 = "--*****\r\n"
            r8.writeBytes(r2)     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            r2.<init>()     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            java.lang.String r5 = "Content-Disposition: form-data; name=\""
            r2.append(r5)     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            r2.append(r10)     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            java.lang.String r10 = "\";filename=\""
            r2.append(r10)     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            java.lang.String r10 = r9.getName()     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            r2.append(r10)     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            java.lang.String r10 = "\""
            r2.append(r10)     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            r2.append(r1)     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            java.lang.String r10 = r2.toString()     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            r8.writeBytes(r10)     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            r8.writeBytes(r1)     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            java.io.FileInputStream r10 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            r10.<init>(r9)     // Catch: java.lang.Throwable -> L11a java.io.IOException -> L126
            r9 = 1024(0x400, float:1.435E-42)
            byte[] r9 = new byte[r9]     // Catch: java.lang.Throwable -> L112 java.io.IOException -> L116
        Lbf:
            int r2 = r10.read(r9)     // Catch: java.lang.Throwable -> L112 java.io.IOException -> L116
            r5 = -1
            if (r2 == r5) goto Lcd
            r8.write(r9, r4, r2)     // Catch: java.lang.Throwable -> L112 java.io.IOException -> L116
            r8.flush()     // Catch: java.lang.Throwable -> L112 java.io.IOException -> L116
            goto Lbf
        Lcd:
            r8.writeBytes(r1)     // Catch: java.lang.Throwable -> L112 java.io.IOException -> L116
            r8.writeBytes(r0)     // Catch: java.lang.Throwable -> L112 java.io.IOException -> L116
            java.lang.String r9 = "*****"
            r8.writeBytes(r9)     // Catch: java.lang.Throwable -> L112 java.io.IOException -> L116
            r8.writeBytes(r0)     // Catch: java.lang.Throwable -> L112 java.io.IOException -> L116
            r8.writeBytes(r1)     // Catch: java.lang.Throwable -> L112 java.io.IOException -> L116
            r8.flush()     // Catch: java.lang.Throwable -> L112 java.io.IOException -> L116
            java.lang.StringBuffer r8 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L112 java.io.IOException -> L116
            r8.<init>()     // Catch: java.lang.Throwable -> L112 java.io.IOException -> L116
            java.io.BufferedReader r9 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L112 java.io.IOException -> L116
            java.io.InputStreamReader r0 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L112 java.io.IOException -> L116
            com.xiaomi.push.bj$a r1 = new com.xiaomi.push.bj$a     // Catch: java.lang.Throwable -> L112 java.io.IOException -> L116
            java.io.InputStream r7 = r7.getInputStream()     // Catch: java.lang.Throwable -> L112 java.io.IOException -> L116
            r1.<init>(r7)     // Catch: java.lang.Throwable -> L112 java.io.IOException -> L116
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L112 java.io.IOException -> L116
            r9.<init>(r0)     // Catch: java.lang.Throwable -> L112 java.io.IOException -> L116
        Lf9:
            java.lang.String r7 = r9.readLine()     // Catch: java.lang.Throwable -> L10e java.io.IOException -> L110
            if (r7 == 0) goto L103
            r8.append(r7)     // Catch: java.lang.Throwable -> L10e java.io.IOException -> L110
            goto Lf9
        L103:
            java.lang.String r7 = r8.toString()     // Catch: java.lang.Throwable -> L10e java.io.IOException -> L110
            com.xiaomi.push.ab.a(r10)
            com.xiaomi.push.ab.a(r9)
            return r7
        L10e:
            r7 = move-exception
            goto L114
        L110:
            r7 = move-exception
            goto L118
        L112:
            r7 = move-exception
            r9 = r3
        L114:
            r3 = r10
            goto L11c
        L116:
            r7 = move-exception
            r9 = r3
        L118:
            r3 = r10
            goto L128
        L11a:
            r7 = move-exception
            r9 = r3
        L11c:
            java.io.IOException r8 = new java.io.IOException     // Catch: java.lang.Throwable -> L147
            java.lang.String r7 = r7.getMessage()     // Catch: java.lang.Throwable -> L147
            r8.<init>(r7)     // Catch: java.lang.Throwable -> L147
            throw r8     // Catch: java.lang.Throwable -> L147
        L126:
            r7 = move-exception
            r9 = r3
        L128:
            java.io.IOException r8 = new java.io.IOException     // Catch: java.lang.Throwable -> L147
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L147
            r10.<init>()     // Catch: java.lang.Throwable -> L147
            java.lang.String r0 = "IOException:"
            r10.append(r0)     // Catch: java.lang.Throwable -> L147
            java.lang.Class r7 = r7.getClass()     // Catch: java.lang.Throwable -> L147
            java.lang.String r7 = r7.getSimpleName()     // Catch: java.lang.Throwable -> L147
            r10.append(r7)     // Catch: java.lang.Throwable -> L147
            java.lang.String r7 = r10.toString()     // Catch: java.lang.Throwable -> L147
            r8.<init>(r7)     // Catch: java.lang.Throwable -> L147
            throw r8     // Catch: java.lang.Throwable -> L147
        L147:
            r7 = move-exception
            com.xiaomi.push.ab.a(r3)
            com.xiaomi.push.ab.a(r9)
            throw r7
    }

    public static java.lang.String a(java.util.Map<java.lang.String, java.lang.String> r6) {
            java.lang.String r0 = "UTF-8"
            r1 = 0
            if (r6 == 0) goto L99
            int r2 = r6.size()
            if (r2 <= 0) goto L99
            java.lang.StringBuffer r2 = new java.lang.StringBuffer
            r2.<init>()
            java.util.Set r3 = r6.entrySet()
            java.util.Iterator r3 = r3.iterator()
        L18:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L84
            java.lang.Object r4 = r3.next()
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4
            java.lang.Object r5 = r4.getKey()
            if (r5 == 0) goto L18
            java.lang.Object r5 = r4.getValue()
            if (r5 != 0) goto L31
            goto L18
        L31:
            java.lang.Object r5 = r4.getKey()     // Catch: java.io.UnsupportedEncodingException -> L56
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.io.UnsupportedEncodingException -> L56
            java.lang.String r5 = java.net.URLEncoder.encode(r5, r0)     // Catch: java.io.UnsupportedEncodingException -> L56
            r2.append(r5)     // Catch: java.io.UnsupportedEncodingException -> L56
            java.lang.String r5 = "="
            r2.append(r5)     // Catch: java.io.UnsupportedEncodingException -> L56
            java.lang.Object r4 = r4.getValue()     // Catch: java.io.UnsupportedEncodingException -> L56
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.io.UnsupportedEncodingException -> L56
            java.lang.String r4 = java.net.URLEncoder.encode(r4, r0)     // Catch: java.io.UnsupportedEncodingException -> L56
            r2.append(r4)     // Catch: java.io.UnsupportedEncodingException -> L56
            java.lang.String r4 = "&"
            r2.append(r4)     // Catch: java.io.UnsupportedEncodingException -> L56
            goto L18
        L56:
            r0 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Failed to convert from params map to string: "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "map: "
            r0.append(r2)
            java.lang.String r6 = r6.toString()
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r6)
            return r1
        L84:
            int r6 = r2.length()
            if (r6 <= 0) goto L94
            int r6 = r2.length()
            int r6 = r6 + (-1)
            java.lang.StringBuffer r2 = r2.deleteCharAt(r6)
        L94:
            java.lang.String r6 = r2.toString()
            return r6
        L99:
            return r1
    }

    public static java.net.HttpURLConnection a(android.content.Context r4, java.net.URL r5) {
            java.lang.String r0 = r5.getProtocol()
            java.lang.String r1 = "http"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L13
        Lc:
            java.net.URLConnection r4 = r5.openConnection()
        L10:
            java.net.HttpURLConnection r4 = (java.net.HttpURLConnection) r4
            return r4
        L13:
            boolean r4 = a(r4)
            if (r4 == 0) goto Lc
            java.net.Proxy r4 = new java.net.Proxy
            java.net.Proxy$Type r0 = java.net.Proxy.Type.HTTP
            java.net.InetSocketAddress r1 = new java.net.InetSocketAddress
            r2 = 80
            java.lang.String r3 = "10.0.0.200"
            r1.<init>(r3, r2)
            r4.<init>(r0, r1)
            java.net.URLConnection r4 = r5.openConnection(r4)
            goto L10
    }

    private static java.net.URL a(java.lang.String r1) {
            java.net.URL r0 = new java.net.URL
            r0.<init>(r1)
            return r0
    }

    public static boolean a(android.content.Context r3) {
            java.lang.String r0 = "phone"
            java.lang.Object r0 = r3.getSystemService(r0)
            android.telephony.TelephonyManager r0 = (android.telephony.TelephonyManager) r0
            java.lang.String r0 = r0.getSimCountryIso()
            java.lang.String r1 = "CN"
            boolean r0 = r1.equalsIgnoreCase(r0)
            r1 = 0
            if (r0 != 0) goto L16
            return r1
        L16:
            java.lang.String r0 = "connectivity"
            java.lang.Object r3 = r3.getSystemService(r0)     // Catch: java.lang.Exception -> L44
            android.net.ConnectivityManager r3 = (android.net.ConnectivityManager) r3     // Catch: java.lang.Exception -> L44
            if (r3 != 0) goto L21
            return r1
        L21:
            android.net.NetworkInfo r3 = r3.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L44
            if (r3 != 0) goto L28
            return r1
        L28:
            java.lang.String r3 = r3.getExtraInfo()
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L44
            int r0 = r3.length()
            r2 = 3
            if (r0 >= r2) goto L3a
            goto L44
        L3a:
            java.lang.String r0 = "ctwap"
            boolean r3 = r3.contains(r0)
            if (r3 == 0) goto L44
            r3 = 1
            return r3
        L44:
            return r1
    }

    public static boolean b(android.content.Context r0) {
            int r0 = a(r0)
            if (r0 < 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public static boolean c(android.content.Context r4) {
            java.lang.String r0 = "connectivity"
            java.lang.Object r0 = r4.getSystemService(r0)
            android.net.ConnectivityManager r0 = (android.net.ConnectivityManager) r0
            r1 = 0
            if (r0 == 0) goto L27
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 23
            if (r2 < r3) goto L22
            android.net.Network r2 = r0.getActiveNetwork()     // Catch: java.lang.Exception -> L27
            android.net.NetworkCapabilities r0 = r0.getNetworkCapabilities(r2)     // Catch: java.lang.Exception -> L27
            if (r0 == 0) goto L27
            r2 = 16
            boolean r0 = r0.hasCapability(r2)     // Catch: java.lang.Exception -> L27
            goto L28
        L22:
            boolean r0 = b(r4)
            goto L28
        L27:
            r0 = r1
        L28:
            if (r0 == 0) goto L31
            boolean r4 = d(r4)
            if (r4 == 0) goto L31
            r1 = 1
        L31:
            return r1
    }

    public static boolean d(android.content.Context r1) {
            java.lang.String r0 = "connectivity"
            java.lang.Object r1 = r1.getSystemService(r0)     // Catch: java.lang.Exception -> Ld
            android.net.ConnectivityManager r1 = (android.net.ConnectivityManager) r1     // Catch: java.lang.Exception -> Ld
            android.net.NetworkInfo r1 = r1.getActiveNetworkInfo()     // Catch: java.lang.Exception -> Ld
            goto Le
        Ld:
            r1 = 0
        Le:
            if (r1 == 0) goto L18
            boolean r1 = r1.isConnected()
            if (r1 == 0) goto L18
            r1 = 1
            goto L19
        L18:
            r1 = 0
        L19:
            return r1
    }

    public static boolean e(android.content.Context r2) {
            r0 = 0
            java.lang.String r1 = "connectivity"
            java.lang.Object r2 = r2.getSystemService(r1)     // Catch: java.lang.Exception -> L1b
            android.net.ConnectivityManager r2 = (android.net.ConnectivityManager) r2     // Catch: java.lang.Exception -> L1b
            if (r2 != 0) goto Lc
            return r0
        Lc:
            android.net.NetworkInfo r2 = r2.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L1b
            if (r2 != 0) goto L13
            return r0
        L13:
            int r2 = r2.getType()
            r1 = 1
            if (r1 != r2) goto L1b
            r0 = r1
        L1b:
            return r0
    }

    public static boolean f(android.content.Context r2) {
            android.net.NetworkInfo r2 = a(r2)
            r0 = 0
            if (r2 != 0) goto L8
            return r0
        L8:
            int r1 = r2.getType()
            if (r1 == 0) goto Lf
            return r0
        Lf:
            int r2 = r2.getSubtype()
            r1 = 20
            if (r1 != r2) goto L18
            r0 = 1
        L18:
            return r0
    }

    public static boolean g(android.content.Context r2) {
            android.net.NetworkInfo r2 = a(r2)
            r0 = 0
            if (r2 != 0) goto L8
            return r0
        L8:
            int r1 = r2.getType()
            if (r1 == 0) goto Lf
            return r0
        Lf:
            int r2 = r2.getSubtype()
            r1 = 13
            if (r1 != r2) goto L18
            r0 = 1
        L18:
            return r0
    }

    public static boolean h(android.content.Context r4) {
            android.net.NetworkInfo r4 = a(r4)
            r0 = 0
            if (r4 != 0) goto L8
            return r0
        L8:
            int r1 = r4.getType()
            if (r1 == 0) goto Lf
            return r0
        Lf:
            java.lang.String r1 = r4.getSubtypeName()
            java.lang.String r2 = "TD-SCDMA"
            boolean r2 = r2.equalsIgnoreCase(r1)
            r3 = 1
            if (r2 != 0) goto L35
            java.lang.String r2 = "CDMA2000"
            boolean r2 = r2.equalsIgnoreCase(r1)
            if (r2 != 0) goto L35
            java.lang.String r2 = "WCDMA"
            boolean r1 = r2.equalsIgnoreCase(r1)
            if (r1 == 0) goto L2d
            goto L35
        L2d:
            int r4 = r4.getSubtype()
            switch(r4) {
                case 3: goto L35;
                case 4: goto L34;
                case 5: goto L35;
                case 6: goto L35;
                case 7: goto L34;
                case 8: goto L35;
                case 9: goto L35;
                case 10: goto L35;
                case 11: goto L34;
                case 12: goto L35;
                case 13: goto L34;
                case 14: goto L35;
                case 15: goto L35;
                default: goto L34;
            }
        L34:
            return r0
        L35:
            return r3
    }

    public static boolean i(android.content.Context r3) {
            android.net.NetworkInfo r3 = a(r3)
            r0 = 0
            if (r3 != 0) goto L8
            return r0
        L8:
            int r1 = r3.getType()
            if (r1 == 0) goto Lf
            return r0
        Lf:
            int r3 = r3.getSubtype()
            r1 = 1
            if (r3 == r1) goto L24
            r2 = 2
            if (r3 == r2) goto L24
            r2 = 4
            if (r3 == r2) goto L24
            r2 = 7
            if (r3 == r2) goto L24
            r2 = 11
            if (r3 == r2) goto L24
            return r0
        L24:
            return r1
    }
}
