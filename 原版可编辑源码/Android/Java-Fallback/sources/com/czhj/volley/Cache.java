package com.czhj.volley;

public interface Cache {

    public static class Entry {
        public java.util.List<com.czhj.volley.Header> allResponseHeaders;
        public byte[] data;
        public java.lang.String etag;
        public long lastModified;
        public java.util.Map<java.lang.String, java.lang.String> responseHeaders;
        public long serverDate;
        public long softTtl;
        public long ttl;

        public Entry() {
                r1 = this;
                r1.<init>()
                java.util.Map r0 = java.util.Collections.emptyMap()
                r1.responseHeaders = r0
                return
        }

        public boolean isExpired() {
                r4 = this;
                long r0 = r4.ttl
                long r2 = java.lang.System.currentTimeMillis()
                int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r0 >= 0) goto Lc
                r0 = 1
                goto Ld
            Lc:
                r0 = 0
            Ld:
                return r0
        }

        public boolean refreshNeeded() {
                r4 = this;
                long r0 = r4.softTtl
                long r2 = java.lang.System.currentTimeMillis()
                int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r0 >= 0) goto Lc
                r0 = 1
                goto Ld
            Lc:
                r0 = 0
            Ld:
                return r0
        }
    }

    void clear();

    com.czhj.volley.Cache.Entry get(java.lang.String r1);

    void initialize();

    void invalidate(java.lang.String r1, boolean r2);

    void put(java.lang.String r1, com.czhj.volley.Cache.Entry r2);

    void remove(java.lang.String r1);
}
