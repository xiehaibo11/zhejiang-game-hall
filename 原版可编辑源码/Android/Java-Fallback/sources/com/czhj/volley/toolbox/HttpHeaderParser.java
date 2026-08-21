package com.czhj.volley.toolbox;

public class HttpHeaderParser {
    static final java.lang.String a = "Content-Type";
    private static final java.lang.String b = "ISO-8859-1";
    private static final java.lang.String c = "EEE, dd MMM yyyy HH:mm:ss zzz";

    public HttpHeaderParser() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.String a(long r2) {
            java.text.SimpleDateFormat r0 = a()
            java.util.Date r1 = new java.util.Date
            r1.<init>(r2)
            java.lang.String r2 = r0.format(r1)
            return r2
    }

    private static java.text.SimpleDateFormat a() {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.util.Locale r1 = java.util.Locale.US
            java.lang.String r2 = "EEE, dd MMM yyyy HH:mm:ss zzz"
            r0.<init>(r2, r1)
            java.lang.String r1 = "GMT"
            java.util.TimeZone r1 = java.util.TimeZone.getTimeZone(r1)
            r0.setTimeZone(r1)
            return r0
    }

    static java.util.List<com.czhj.volley.Header> a(java.util.Map<java.lang.String, java.lang.String> r4) {
            java.util.ArrayList r0 = new java.util.ArrayList
            int r1 = r4.size()
            r0.<init>(r1)
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
        L11:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L32
            java.lang.Object r1 = r4.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            com.czhj.volley.Header r2 = new com.czhj.volley.Header
            java.lang.Object r3 = r1.getKey()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object r1 = r1.getValue()
            java.lang.String r1 = (java.lang.String) r1
            r2.<init>(r3, r1)
            r0.add(r2)
            goto L11
        L32:
            return r0
    }

    static java.util.Map<java.lang.String, java.lang.String> a(java.util.List<com.czhj.volley.Header> r3) {
            java.util.TreeMap r0 = new java.util.TreeMap
            java.util.Comparator r1 = java.lang.String.CASE_INSENSITIVE_ORDER
            r0.<init>(r1)
            java.util.Iterator r3 = r3.iterator()
        Lb:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L23
            java.lang.Object r1 = r3.next()
            com.czhj.volley.Header r1 = (com.czhj.volley.Header) r1
            java.lang.String r2 = r1.getName()
            java.lang.String r1 = r1.getValue()
            r0.put(r2, r1)
            goto Lb
        L23:
            return r0
    }

    public static java.lang.String getHeader(java.util.Map<java.lang.String, java.lang.String> r0, java.lang.String r1) {
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
    }

    public static boolean isGzipContent(java.util.Map<java.lang.String, java.lang.String> r1) {
            java.lang.String r0 = "Content-Encoding"
            java.lang.String r1 = getHeader(r1, r0)
            java.lang.String r0 = "gzip"
            boolean r1 = android.text.TextUtils.equals(r1, r0)
            return r1
    }

    public static boolean isSupportRange(java.util.Map<java.lang.String, java.lang.String> r3) {
            java.lang.String r0 = "Accept-Ranges"
            java.lang.String r0 = getHeader(r3, r0)
            java.lang.String r1 = "bytes"
            boolean r0 = android.text.TextUtils.equals(r0, r1)
            r2 = 1
            if (r0 == 0) goto L10
            return r2
        L10:
            java.lang.String r0 = "Content-Range"
            java.lang.String r3 = getHeader(r3, r0)
            if (r3 == 0) goto L1f
            boolean r3 = r3.startsWith(r1)
            if (r3 == 0) goto L1f
            goto L20
        L1f:
            r2 = 0
        L20:
            return r2
    }

    public static com.czhj.volley.Cache.Entry parseCacheHeaders(com.czhj.volley.NetworkResponse r20) {
            r0 = r20
            long r1 = java.lang.System.currentTimeMillis()
            java.util.Map<java.lang.String, java.lang.String> r3 = r0.headers
            java.lang.String r4 = "Date"
            java.lang.Object r4 = r3.get(r4)
            java.lang.String r4 = (java.lang.String) r4
            if (r4 == 0) goto L17
            long r7 = parseDateAsEpoch(r4)
            goto L19
        L17:
            r7 = 0
        L19:
            java.lang.String r4 = "Cache-Control"
            java.lang.Object r4 = r3.get(r4)
            java.lang.String r4 = (java.lang.String) r4
            r10 = 0
            if (r4 == 0) goto L88
            java.lang.String r11 = ","
            java.lang.String[] r4 = r4.split(r11, r10)
            r11 = r10
            r12 = 0
            r14 = 0
        L2f:
            int r9 = r4.length
            if (r10 >= r9) goto L85
            r9 = r4[r10]
            java.lang.String r9 = r9.trim()
            java.lang.String r5 = "no-cache"
            boolean r5 = r9.equals(r5)
            if (r5 != 0) goto L83
            java.lang.String r5 = "no-store"
            boolean r5 = r9.equals(r5)
            if (r5 == 0) goto L49
            goto L83
        L49:
            java.lang.String r5 = "max-age="
            boolean r5 = r9.startsWith(r5)
            if (r5 == 0) goto L5c
            r5 = 8
            java.lang.String r5 = r9.substring(r5)     // Catch: java.lang.Throwable -> L80
            long r12 = java.lang.Long.parseLong(r5)     // Catch: java.lang.Throwable -> L80
            goto L80
        L5c:
            java.lang.String r5 = "stale-while-revalidate="
            boolean r5 = r9.startsWith(r5)
            if (r5 == 0) goto L6f
            r5 = 23
            java.lang.String r5 = r9.substring(r5)     // Catch: java.lang.Throwable -> L80
            long r14 = java.lang.Long.parseLong(r5)     // Catch: java.lang.Throwable -> L80
            goto L80
        L6f:
            java.lang.String r5 = "must-revalidate"
            boolean r5 = r9.equals(r5)
            if (r5 != 0) goto L7f
            java.lang.String r5 = "proxy-revalidate"
            boolean r5 = r9.equals(r5)
            if (r5 == 0) goto L80
        L7f:
            r11 = 1
        L80:
            int r10 = r10 + 1
            goto L2f
        L83:
            r0 = 0
            return r0
        L85:
            r10 = r11
            r9 = 1
            goto L8d
        L88:
            r9 = r10
            r12 = 0
            r14 = 0
        L8d:
            java.lang.String r4 = "Expires"
            java.lang.Object r4 = r3.get(r4)
            java.lang.String r4 = (java.lang.String) r4
            if (r4 == 0) goto L9c
            long r4 = parseDateAsEpoch(r4)
            goto L9e
        L9c:
            r4 = 0
        L9e:
            java.lang.String r6 = "Last-Modified"
            java.lang.Object r6 = r3.get(r6)
            java.lang.String r6 = (java.lang.String) r6
            if (r6 == 0) goto Laf
            long r16 = parseDateAsEpoch(r6)
            r18 = r16
            goto Lb1
        Laf:
            r18 = 0
        Lb1:
            java.lang.String r6 = "ETag"
            java.lang.Object r6 = r3.get(r6)
            java.lang.String r6 = (java.lang.String) r6
            if (r9 == 0) goto Lca
            r4 = 1000(0x3e8, double:4.94E-321)
            long r12 = r12 * r4
            long r1 = r1 + r12
            if (r10 == 0) goto Lc3
            r14 = r1
            goto Lc8
        Lc3:
            java.lang.Long.signum(r14)
            long r14 = r14 * r4
            long r14 = r14 + r1
        Lc8:
            r9 = r14
            goto Ld9
        Lca:
            r9 = 0
            int r11 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r11 <= 0) goto Ld8
            int r11 = (r4 > r7 ? 1 : (r4 == r7 ? 0 : -1))
            if (r11 < 0) goto Ld8
            long r4 = r4 - r7
            long r1 = r1 + r4
            r9 = r1
            goto Ld9
        Ld8:
            r1 = r9
        Ld9:
            com.czhj.volley.Cache$Entry r4 = new com.czhj.volley.Cache$Entry
            r4.<init>()
            byte[] r5 = r0.data
            r4.data = r5
            r4.etag = r6
            r4.softTtl = r1
            r4.ttl = r9
            r4.serverDate = r7
            r1 = r18
            r4.lastModified = r1
            r4.responseHeaders = r3
            java.util.List<com.czhj.volley.Header> r0 = r0.allHeaders
            r4.allResponseHeaders = r0
            return r4
    }

    public static java.lang.String parseCharset(java.util.Map<java.lang.String, java.lang.String> r1) {
            java.lang.String r0 = "ISO-8859-1"
            java.lang.String r1 = parseCharset(r1, r0)
            return r1
    }

    public static java.lang.String parseCharset(java.util.Map<java.lang.String, java.lang.String> r6, java.lang.String r7) {
            java.lang.String r0 = "Content-Type"
            java.lang.Object r6 = r6.get(r0)
            java.lang.String r6 = (java.lang.String) r6
            if (r6 == 0) goto L36
            r0 = 0
            java.lang.String r1 = ";"
            java.lang.String[] r6 = r6.split(r1, r0)
            r1 = 1
            r2 = r1
        L13:
            int r3 = r6.length
            if (r2 >= r3) goto L36
            r3 = r6[r2]
            java.lang.String r3 = r3.trim()
            java.lang.String r4 = "="
            java.lang.String[] r3 = r3.split(r4, r0)
            int r4 = r3.length
            r5 = 2
            if (r4 != r5) goto L33
            r4 = r3[r0]
            java.lang.String r5 = "charset"
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L33
            r6 = r3[r1]
            return r6
        L33:
            int r2 = r2 + 1
            goto L13
        L36:
            return r7
    }

    public static long parseDateAsEpoch(java.lang.String r3) {
            java.text.SimpleDateFormat r0 = a()     // Catch: java.text.ParseException -> Ld
            java.util.Date r0 = r0.parse(r3)     // Catch: java.text.ParseException -> Ld
            long r0 = r0.getTime()     // Catch: java.text.ParseException -> Ld
            return r0
        Ld:
            r0 = move-exception
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r3
            java.lang.String r3 = "Unable to parse dateStr: %s, falling back to 0"
            com.czhj.volley.VolleyLog.e(r0, r3, r1)
            r0 = 0
            return r0
    }
}
