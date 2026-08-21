package com.mbridge.msdk.thrid.okhttp;

public final class CacheControl {
    public static final com.mbridge.msdk.thrid.okhttp.CacheControl FORCE_CACHE = null;
    public static final com.mbridge.msdk.thrid.okhttp.CacheControl FORCE_NETWORK = null;

    @javax.annotation.Nullable
    java.lang.String headerValue;
    private final boolean immutable;
    private final boolean isPrivate;
    private final boolean isPublic;
    private final int maxAgeSeconds;
    private final int maxStaleSeconds;
    private final int minFreshSeconds;
    private final boolean mustRevalidate;
    private final boolean noCache;
    private final boolean noStore;
    private final boolean noTransform;
    private final boolean onlyIfCached;
    private final int sMaxAgeSeconds;

    public static final class Builder {
        boolean immutable;
        int maxAgeSeconds;
        int maxStaleSeconds;
        int minFreshSeconds;
        boolean noCache;
        boolean noStore;
        boolean noTransform;
        boolean onlyIfCached;

        public Builder() {
                r1 = this;
                r1.<init>()
                r0 = -1
                r1.maxAgeSeconds = r0
                r1.maxStaleSeconds = r0
                r1.minFreshSeconds = r0
                return
        }

        public com.mbridge.msdk.thrid.okhttp.CacheControl build() {
                r1 = this;
                com.mbridge.msdk.thrid.okhttp.CacheControl r0 = new com.mbridge.msdk.thrid.okhttp.CacheControl
                r0.<init>(r1)
                return r0
        }

        public com.mbridge.msdk.thrid.okhttp.CacheControl.Builder immutable() {
                r1 = this;
                r0 = 1
                r1.immutable = r0
                return r1
        }

        public com.mbridge.msdk.thrid.okhttp.CacheControl.Builder maxAge(int r3, java.util.concurrent.TimeUnit r4) {
                r2 = this;
                if (r3 < 0) goto L16
                long r0 = (long) r3
                long r3 = r4.toSeconds(r0)
                r0 = 2147483647(0x7fffffff, double:1.060997895E-314)
                int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
                if (r0 <= 0) goto L12
                r3 = 2147483647(0x7fffffff, float:NaN)
                goto L13
            L12:
                int r3 = (int) r3
            L13:
                r2.maxAgeSeconds = r3
                return r2
            L16:
                java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "maxAge < 0: "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                r4.<init>(r3)
                throw r4
        }

        public com.mbridge.msdk.thrid.okhttp.CacheControl.Builder maxStale(int r3, java.util.concurrent.TimeUnit r4) {
                r2 = this;
                if (r3 < 0) goto L16
                long r0 = (long) r3
                long r3 = r4.toSeconds(r0)
                r0 = 2147483647(0x7fffffff, double:1.060997895E-314)
                int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
                if (r0 <= 0) goto L12
                r3 = 2147483647(0x7fffffff, float:NaN)
                goto L13
            L12:
                int r3 = (int) r3
            L13:
                r2.maxStaleSeconds = r3
                return r2
            L16:
                java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "maxStale < 0: "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                r4.<init>(r3)
                throw r4
        }

        public com.mbridge.msdk.thrid.okhttp.CacheControl.Builder minFresh(int r3, java.util.concurrent.TimeUnit r4) {
                r2 = this;
                if (r3 < 0) goto L16
                long r0 = (long) r3
                long r3 = r4.toSeconds(r0)
                r0 = 2147483647(0x7fffffff, double:1.060997895E-314)
                int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
                if (r0 <= 0) goto L12
                r3 = 2147483647(0x7fffffff, float:NaN)
                goto L13
            L12:
                int r3 = (int) r3
            L13:
                r2.minFreshSeconds = r3
                return r2
            L16:
                java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "minFresh < 0: "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                r4.<init>(r3)
                throw r4
        }

        public com.mbridge.msdk.thrid.okhttp.CacheControl.Builder noCache() {
                r1 = this;
                r0 = 1
                r1.noCache = r0
                return r1
        }

        public com.mbridge.msdk.thrid.okhttp.CacheControl.Builder noStore() {
                r1 = this;
                r0 = 1
                r1.noStore = r0
                return r1
        }

        public com.mbridge.msdk.thrid.okhttp.CacheControl.Builder noTransform() {
                r1 = this;
                r0 = 1
                r1.noTransform = r0
                return r1
        }

        public com.mbridge.msdk.thrid.okhttp.CacheControl.Builder onlyIfCached() {
                r1 = this;
                r0 = 1
                r1.onlyIfCached = r0
                return r1
        }
    }

    static {
            com.mbridge.msdk.thrid.okhttp.CacheControl$Builder r0 = new com.mbridge.msdk.thrid.okhttp.CacheControl$Builder
            r0.<init>()
            com.mbridge.msdk.thrid.okhttp.CacheControl$Builder r0 = r0.noCache()
            com.mbridge.msdk.thrid.okhttp.CacheControl r0 = r0.build()
            com.mbridge.msdk.thrid.okhttp.CacheControl.FORCE_NETWORK = r0
            com.mbridge.msdk.thrid.okhttp.CacheControl$Builder r0 = new com.mbridge.msdk.thrid.okhttp.CacheControl$Builder
            r0.<init>()
            com.mbridge.msdk.thrid.okhttp.CacheControl$Builder r0 = r0.onlyIfCached()
            java.util.concurrent.TimeUnit r1 = java.util.concurrent.TimeUnit.SECONDS
            r2 = 2147483647(0x7fffffff, float:NaN)
            com.mbridge.msdk.thrid.okhttp.CacheControl$Builder r0 = r0.maxStale(r2, r1)
            com.mbridge.msdk.thrid.okhttp.CacheControl r0 = r0.build()
            com.mbridge.msdk.thrid.okhttp.CacheControl.FORCE_CACHE = r0
            return
    }

    CacheControl(com.mbridge.msdk.thrid.okhttp.CacheControl.Builder r2) {
            r1 = this;
            r1.<init>()
            boolean r0 = r2.noCache
            r1.noCache = r0
            boolean r0 = r2.noStore
            r1.noStore = r0
            int r0 = r2.maxAgeSeconds
            r1.maxAgeSeconds = r0
            r0 = -1
            r1.sMaxAgeSeconds = r0
            r0 = 0
            r1.isPrivate = r0
            r1.isPublic = r0
            r1.mustRevalidate = r0
            int r0 = r2.maxStaleSeconds
            r1.maxStaleSeconds = r0
            int r0 = r2.minFreshSeconds
            r1.minFreshSeconds = r0
            boolean r0 = r2.onlyIfCached
            r1.onlyIfCached = r0
            boolean r0 = r2.noTransform
            r1.noTransform = r0
            boolean r2 = r2.immutable
            r1.immutable = r2
            return
    }

    private CacheControl(boolean r1, boolean r2, int r3, int r4, boolean r5, boolean r6, boolean r7, int r8, int r9, boolean r10, boolean r11, boolean r12, @javax.annotation.Nullable java.lang.String r13) {
            r0 = this;
            r0.<init>()
            r0.noCache = r1
            r0.noStore = r2
            r0.maxAgeSeconds = r3
            r0.sMaxAgeSeconds = r4
            r0.isPrivate = r5
            r0.isPublic = r6
            r0.mustRevalidate = r7
            r0.maxStaleSeconds = r8
            r0.minFreshSeconds = r9
            r0.onlyIfCached = r10
            r0.noTransform = r11
            r0.immutable = r12
            r0.headerValue = r13
            return
    }

    private java.lang.String headerValue() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            boolean r1 = r4.noCache
            if (r1 == 0) goto Le
            java.lang.String r1 = "no-cache, "
            r0.append(r1)
        Le:
            boolean r1 = r4.noStore
            if (r1 == 0) goto L17
            java.lang.String r1 = "no-store, "
            r0.append(r1)
        L17:
            int r1 = r4.maxAgeSeconds
            java.lang.String r2 = ", "
            r3 = -1
            if (r1 == r3) goto L2b
            java.lang.String r1 = "max-age="
            r0.append(r1)
            int r1 = r4.maxAgeSeconds
            r0.append(r1)
            r0.append(r2)
        L2b:
            int r1 = r4.sMaxAgeSeconds
            if (r1 == r3) goto L3c
            java.lang.String r1 = "s-maxage="
            r0.append(r1)
            int r1 = r4.sMaxAgeSeconds
            r0.append(r1)
            r0.append(r2)
        L3c:
            boolean r1 = r4.isPrivate
            if (r1 == 0) goto L45
            java.lang.String r1 = "private, "
            r0.append(r1)
        L45:
            boolean r1 = r4.isPublic
            if (r1 == 0) goto L4e
            java.lang.String r1 = "public, "
            r0.append(r1)
        L4e:
            boolean r1 = r4.mustRevalidate
            if (r1 == 0) goto L57
            java.lang.String r1 = "must-revalidate, "
            r0.append(r1)
        L57:
            int r1 = r4.maxStaleSeconds
            if (r1 == r3) goto L68
            java.lang.String r1 = "max-stale="
            r0.append(r1)
            int r1 = r4.maxStaleSeconds
            r0.append(r1)
            r0.append(r2)
        L68:
            int r1 = r4.minFreshSeconds
            if (r1 == r3) goto L79
            java.lang.String r1 = "min-fresh="
            r0.append(r1)
            int r1 = r4.minFreshSeconds
            r0.append(r1)
            r0.append(r2)
        L79:
            boolean r1 = r4.onlyIfCached
            if (r1 == 0) goto L82
            java.lang.String r1 = "only-if-cached, "
            r0.append(r1)
        L82:
            boolean r1 = r4.noTransform
            if (r1 == 0) goto L8b
            java.lang.String r1 = "no-transform, "
            r0.append(r1)
        L8b:
            boolean r1 = r4.immutable
            if (r1 == 0) goto L94
            java.lang.String r1 = "immutable, "
            r0.append(r1)
        L94:
            int r1 = r0.length()
            if (r1 != 0) goto L9d
            java.lang.String r0 = ""
            return r0
        L9d:
            int r1 = r0.length()
            int r1 = r1 + (-2)
            int r2 = r0.length()
            r0.delete(r1, r2)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static com.mbridge.msdk.thrid.okhttp.CacheControl parse(com.mbridge.msdk.thrid.okhttp.Headers r22) {
            r0 = r22
            int r1 = r22.size()
            r6 = 0
            r7 = 1
            r8 = 0
            r9 = 0
            r10 = 0
            r11 = -1
            r12 = -1
            r13 = 0
            r14 = 0
            r15 = 0
            r16 = -1
            r17 = -1
            r18 = 0
            r19 = 0
            r20 = 0
        L1a:
            if (r6 >= r1) goto L13f
            java.lang.String r2 = r0.name(r6)
            java.lang.String r4 = r0.value(r6)
            java.lang.String r3 = "Cache-Control"
            boolean r3 = r2.equalsIgnoreCase(r3)
            if (r3 == 0) goto L31
            if (r8 == 0) goto L2f
            goto L39
        L2f:
            r8 = r4
            goto L3a
        L31:
            java.lang.String r3 = "Pragma"
            boolean r2 = r2.equalsIgnoreCase(r3)
            if (r2 == 0) goto L138
        L39:
            r7 = 0
        L3a:
            r2 = 0
        L3b:
            int r3 = r4.length()
            if (r2 >= r3) goto L138
            java.lang.String r3 = "=,;"
            int r3 = com.mbridge.msdk.thrid.okhttp.internal.http.HttpHeaders.skipUntil(r4, r2, r3)
            java.lang.String r2 = r4.substring(r2, r3)
            java.lang.String r2 = r2.trim()
            int r5 = r4.length()
            if (r3 == r5) goto L99
            char r5 = r4.charAt(r3)
            r0 = 44
            if (r5 == r0) goto L99
            char r0 = r4.charAt(r3)
            r5 = 59
            if (r0 != r5) goto L66
            goto L99
        L66:
            int r3 = r3 + 1
            int r0 = com.mbridge.msdk.thrid.okhttp.internal.http.HttpHeaders.skipWhitespace(r4, r3)
            int r3 = r4.length()
            if (r0 >= r3) goto L89
            char r3 = r4.charAt(r0)
            r5 = 34
            if (r3 != r5) goto L89
            int r0 = r0 + 1
            java.lang.String r3 = "\""
            int r3 = com.mbridge.msdk.thrid.okhttp.internal.http.HttpHeaders.skipUntil(r4, r0, r3)
            java.lang.String r0 = r4.substring(r0, r3)
            r5 = 1
            int r3 = r3 + r5
            goto L9d
        L89:
            r5 = 1
            java.lang.String r3 = ",;"
            int r3 = com.mbridge.msdk.thrid.okhttp.internal.http.HttpHeaders.skipUntil(r4, r0, r3)
            java.lang.String r0 = r4.substring(r0, r3)
            java.lang.String r0 = r0.trim()
            goto L9d
        L99:
            r5 = 1
            int r3 = r3 + 1
            r0 = 0
        L9d:
            java.lang.String r5 = "no-cache"
            boolean r5 = r5.equalsIgnoreCase(r2)
            if (r5 == 0) goto La9
            r5 = -1
            r9 = 1
            goto L133
        La9:
            java.lang.String r5 = "no-store"
            boolean r5 = r5.equalsIgnoreCase(r2)
            if (r5 == 0) goto Lb5
            r5 = -1
            r10 = 1
            goto L133
        Lb5:
            java.lang.String r5 = "max-age"
            boolean r5 = r5.equalsIgnoreCase(r2)
            if (r5 == 0) goto Lc4
            r5 = -1
            int r11 = com.mbridge.msdk.thrid.okhttp.internal.http.HttpHeaders.parseSeconds(r0, r5)
            goto L133
        Lc4:
            java.lang.String r5 = "s-maxage"
            boolean r5 = r5.equalsIgnoreCase(r2)
            if (r5 == 0) goto Ld2
            r5 = -1
            int r12 = com.mbridge.msdk.thrid.okhttp.internal.http.HttpHeaders.parseSeconds(r0, r5)
            goto L133
        Ld2:
            java.lang.String r5 = "private"
            boolean r5 = r5.equalsIgnoreCase(r2)
            if (r5 == 0) goto Ldd
            r5 = -1
            r13 = 1
            goto L133
        Ldd:
            java.lang.String r5 = "public"
            boolean r5 = r5.equalsIgnoreCase(r2)
            if (r5 == 0) goto Le8
            r5 = -1
            r14 = 1
            goto L133
        Le8:
            java.lang.String r5 = "must-revalidate"
            boolean r5 = r5.equalsIgnoreCase(r2)
            if (r5 == 0) goto Lf3
            r5 = -1
            r15 = 1
            goto L133
        Lf3:
            java.lang.String r5 = "max-stale"
            boolean r5 = r5.equalsIgnoreCase(r2)
            if (r5 == 0) goto L104
            r2 = 2147483647(0x7fffffff, float:NaN)
            int r16 = com.mbridge.msdk.thrid.okhttp.internal.http.HttpHeaders.parseSeconds(r0, r2)
            r5 = -1
            goto L133
        L104:
            java.lang.String r5 = "min-fresh"
            boolean r5 = r5.equalsIgnoreCase(r2)
            if (r5 == 0) goto L112
            r5 = -1
            int r17 = com.mbridge.msdk.thrid.okhttp.internal.http.HttpHeaders.parseSeconds(r0, r5)
            goto L133
        L112:
            r5 = -1
            java.lang.String r0 = "only-if-cached"
            boolean r0 = r0.equalsIgnoreCase(r2)
            if (r0 == 0) goto L11e
            r18 = 1
            goto L133
        L11e:
            java.lang.String r0 = "no-transform"
            boolean r0 = r0.equalsIgnoreCase(r2)
            if (r0 == 0) goto L129
            r19 = 1
            goto L133
        L129:
            java.lang.String r0 = "immutable"
            boolean r0 = r0.equalsIgnoreCase(r2)
            if (r0 == 0) goto L133
            r20 = 1
        L133:
            r0 = r22
            r2 = r3
            goto L3b
        L138:
            r5 = -1
            int r6 = r6 + 1
            r0 = r22
            goto L1a
        L13f:
            if (r7 != 0) goto L144
            r21 = 0
            goto L146
        L144:
            r21 = r8
        L146:
            com.mbridge.msdk.thrid.okhttp.CacheControl r0 = new com.mbridge.msdk.thrid.okhttp.CacheControl
            r8 = r0
            r8.<init>(r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21)
            return r0
    }

    public boolean immutable() {
            r1 = this;
            boolean r0 = r1.immutable
            return r0
    }

    public boolean isPrivate() {
            r1 = this;
            boolean r0 = r1.isPrivate
            return r0
    }

    public boolean isPublic() {
            r1 = this;
            boolean r0 = r1.isPublic
            return r0
    }

    public int maxAgeSeconds() {
            r1 = this;
            int r0 = r1.maxAgeSeconds
            return r0
    }

    public int maxStaleSeconds() {
            r1 = this;
            int r0 = r1.maxStaleSeconds
            return r0
    }

    public int minFreshSeconds() {
            r1 = this;
            int r0 = r1.minFreshSeconds
            return r0
    }

    public boolean mustRevalidate() {
            r1 = this;
            boolean r0 = r1.mustRevalidate
            return r0
    }

    public boolean noCache() {
            r1 = this;
            boolean r0 = r1.noCache
            return r0
    }

    public boolean noStore() {
            r1 = this;
            boolean r0 = r1.noStore
            return r0
    }

    public boolean noTransform() {
            r1 = this;
            boolean r0 = r1.noTransform
            return r0
    }

    public boolean onlyIfCached() {
            r1 = this;
            boolean r0 = r1.onlyIfCached
            return r0
    }

    public int sMaxAgeSeconds() {
            r1 = this;
            int r0 = r1.sMaxAgeSeconds
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.headerValue
            if (r0 == 0) goto L5
            goto Lb
        L5:
            java.lang.String r0 = r1.headerValue()
            r1.headerValue = r0
        Lb:
            return r0
    }
}
