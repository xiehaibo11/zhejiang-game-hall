package com.bumptech.glide.load.model;

public class GlideUrl {
    private static final java.lang.String ALLOWED_URI_CHARS = "@#&=*+-_.,:!?()/~'%";
    private final com.bumptech.glide.load.model.Headers headers;
    private java.lang.String safeStringUrl;
    private java.net.URL safeUrl;
    private final java.lang.String stringUrl;
    private final java.net.URL url;

    public GlideUrl(java.lang.String r2) {
            r1 = this;
            com.bumptech.glide.load.model.Headers r0 = com.bumptech.glide.load.model.Headers.DEFAULT
            r1.<init>(r2, r0)
            return
    }

    public GlideUrl(java.lang.String r3, com.bumptech.glide.load.model.Headers r4) {
            r2 = this;
            r2.<init>()
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L1b
            if (r4 == 0) goto L13
            r2.stringUrl = r3
            r3 = 0
            r2.url = r3
            r2.headers = r4
            return
        L13:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "Headers must not be null"
            r3.<init>(r4)
            throw r3
        L1b:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "String url must not be empty or null: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.<init>(r3)
            throw r4
    }

    public GlideUrl(java.net.URL r2) {
            r1 = this;
            com.bumptech.glide.load.model.Headers r0 = com.bumptech.glide.load.model.Headers.DEFAULT
            r1.<init>(r2, r0)
            return
    }

    public GlideUrl(java.net.URL r1, com.bumptech.glide.load.model.Headers r2) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto L17
            if (r2 == 0) goto Lf
            r0.url = r1
            r1 = 0
            r0.stringUrl = r1
            r0.headers = r2
            return
        Lf:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "Headers must not be null"
            r1.<init>(r2)
            throw r1
        L17:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "URL must not be null!"
            r1.<init>(r2)
            throw r1
    }

    private java.lang.String getSafeStringUrl() {
            r2 = this;
            java.lang.String r0 = r2.safeStringUrl
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1e
            java.lang.String r0 = r2.stringUrl
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L16
            java.net.URL r0 = r2.url
            java.lang.String r0 = r0.toString()
        L16:
            java.lang.String r1 = "@#&=*+-_.,:!?()/~'%"
            java.lang.String r0 = android.net.Uri.encode(r0, r1)
            r2.safeStringUrl = r0
        L1e:
            java.lang.String r0 = r2.safeStringUrl
            return r0
    }

    private java.net.URL getSafeUrl() throws java.net.MalformedURLException {
            r2 = this;
            java.net.URL r0 = r2.safeUrl
            if (r0 != 0) goto Lf
            java.net.URL r0 = new java.net.URL
            java.lang.String r1 = r2.getSafeStringUrl()
            r0.<init>(r1)
            r2.safeUrl = r0
        Lf:
            java.net.URL r0 = r2.safeUrl
            return r0
    }

    public boolean equals(java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof com.bumptech.glide.load.model.GlideUrl
            r1 = 0
            if (r0 == 0) goto L20
            com.bumptech.glide.load.model.GlideUrl r4 = (com.bumptech.glide.load.model.GlideUrl) r4
            java.lang.String r0 = r3.getCacheKey()
            java.lang.String r2 = r4.getCacheKey()
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L20
            com.bumptech.glide.load.model.Headers r0 = r3.headers
            com.bumptech.glide.load.model.Headers r4 = r4.headers
            boolean r4 = r0.equals(r4)
            if (r4 == 0) goto L20
            r1 = 1
        L20:
            return r1
    }

    public java.lang.String getCacheKey() {
            r1 = this;
            java.lang.String r0 = r1.stringUrl
            if (r0 == 0) goto L5
            goto Lb
        L5:
            java.net.URL r0 = r1.url
            java.lang.String r0 = r0.toString()
        Lb:
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getHeaders() {
            r1 = this;
            com.bumptech.glide.load.model.Headers r0 = r1.headers
            java.util.Map r0 = r0.getHeaders()
            return r0
    }

    public int hashCode() {
            r2 = this;
            java.lang.String r0 = r2.getCacheKey()
            int r0 = r0.hashCode()
            int r0 = r0 * 31
            com.bumptech.glide.load.model.Headers r1 = r2.headers
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.getCacheKey()
            r0.append(r1)
            r1 = 10
            r0.append(r1)
            com.bumptech.glide.load.model.Headers r1 = r2.headers
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public java.lang.String toStringUrl() {
            r1 = this;
            java.lang.String r0 = r1.getSafeStringUrl()
            return r0
    }

    public java.net.URL toURL() throws java.net.MalformedURLException {
            r1 = this;
            java.net.URL r0 = r1.getSafeUrl()
            return r0
    }
}
