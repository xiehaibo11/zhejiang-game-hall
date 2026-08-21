package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.Immutable
class CacheEntryUpdater {
    private final cz.msebera.android.httpclient.client.cache.ResourceFactory resourceFactory;

    CacheEntryUpdater() {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.cache.HeapResourceFactory r0 = new cz.msebera.android.httpclient.impl.client.cache.HeapResourceFactory
            r0.<init>()
            r1.<init>(r0)
            return
    }

    CacheEntryUpdater(cz.msebera.android.httpclient.client.cache.ResourceFactory r1) {
            r0 = this;
            r0.<init>()
            r0.resourceFactory = r1
            return
    }

    private boolean entryAndResponseHaveDateHeader(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r2, cz.msebera.android.httpclient.HttpResponse r3) {
            r1 = this;
            java.lang.String r0 = "Date"
            cz.msebera.android.httpclient.Header r2 = r2.getFirstHeader(r0)
            if (r2 == 0) goto L10
            cz.msebera.android.httpclient.Header r2 = r3.getFirstHeader(r0)
            if (r2 == 0) goto L10
            r2 = 1
            return r2
        L10:
            r2 = 0
            return r2
    }

    private boolean entryDateHeaderNewerThenResponse(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r2, cz.msebera.android.httpclient.HttpResponse r3) {
            r1 = this;
            java.lang.String r0 = "Date"
            cz.msebera.android.httpclient.Header r2 = r2.getFirstHeader(r0)
            java.lang.String r2 = r2.getValue()
            java.util.Date r2 = cz.msebera.android.httpclient.client.utils.DateUtils.parseDate(r2)
            cz.msebera.android.httpclient.Header r3 = r3.getFirstHeader(r0)
            java.lang.String r3 = r3.getValue()
            java.util.Date r3 = cz.msebera.android.httpclient.client.utils.DateUtils.parseDate(r3)
            r0 = 0
            if (r2 == 0) goto L29
            if (r3 != 0) goto L20
            goto L29
        L20:
            boolean r2 = r2.after(r3)
            if (r2 != 0) goto L27
            return r0
        L27:
            r2 = 1
            return r2
        L29:
            return r0
    }

    private void removeCacheEntry1xxWarnings(java.util.List<cz.msebera.android.httpclient.Header> r6, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r7) {
            r5 = this;
            java.util.ListIterator r6 = r6.listIterator()
        L4:
            boolean r0 = r6.hasNext()
            if (r0 == 0) goto L38
            java.lang.Object r0 = r6.next()
            cz.msebera.android.httpclient.Header r0 = (cz.msebera.android.httpclient.Header) r0
            java.lang.String r0 = r0.getName()
            java.lang.String r1 = "Warning"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L4
            cz.msebera.android.httpclient.Header[] r0 = r7.getHeaders(r1)
            int r1 = r0.length
            r2 = 0
        L22:
            if (r2 >= r1) goto L4
            r3 = r0[r2]
            java.lang.String r3 = r3.getValue()
            java.lang.String r4 = "1"
            boolean r3 = r3.startsWith(r4)
            if (r3 == 0) goto L35
            r6.remove()
        L35:
            int r2 = r2 + 1
            goto L22
        L38:
            return
    }

    private void removeCacheHeadersThatMatchResponse(java.util.List<cz.msebera.android.httpclient.Header> r7, cz.msebera.android.httpclient.HttpResponse r8) {
            r6 = this;
            cz.msebera.android.httpclient.Header[] r8 = r8.getAllHeaders()
            int r0 = r8.length
            r1 = 0
        L6:
            if (r1 >= r0) goto L2f
            r2 = r8[r1]
            java.util.ListIterator r3 = r7.listIterator()
        Le:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L2c
            java.lang.Object r4 = r3.next()
            cz.msebera.android.httpclient.Header r4 = (cz.msebera.android.httpclient.Header) r4
            java.lang.String r4 = r4.getName()
            java.lang.String r5 = r2.getName()
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto Le
            r3.remove()
            goto Le
        L2c:
            int r1 = r1 + 1
            goto L6
        L2f:
            return
    }

    protected cz.msebera.android.httpclient.Header[] mergeHeaders(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r3, cz.msebera.android.httpclient.HttpResponse r4) {
            r2 = this;
            boolean r0 = r2.entryAndResponseHaveDateHeader(r3, r4)
            if (r0 == 0) goto L11
            boolean r0 = r2.entryDateHeaderNewerThenResponse(r3, r4)
            if (r0 == 0) goto L11
            cz.msebera.android.httpclient.Header[] r3 = r3.getAllHeaders()
            return r3
        L11:
            java.util.ArrayList r0 = new java.util.ArrayList
            cz.msebera.android.httpclient.Header[] r1 = r3.getAllHeaders()
            java.util.List r1 = java.util.Arrays.asList(r1)
            r0.<init>(r1)
            r2.removeCacheHeadersThatMatchResponse(r0, r4)
            r2.removeCacheEntry1xxWarnings(r0, r3)
            cz.msebera.android.httpclient.Header[] r3 = r4.getAllHeaders()
            java.util.List r3 = java.util.Arrays.asList(r3)
            r0.addAll(r3)
            int r3 = r0.size()
            cz.msebera.android.httpclient.Header[] r3 = new cz.msebera.android.httpclient.Header[r3]
            java.lang.Object[] r3 = r0.toArray(r3)
            cz.msebera.android.httpclient.Header[] r3 = (cz.msebera.android.httpclient.Header[]) r3
            return r3
    }

    public cz.msebera.android.httpclient.client.cache.HttpCacheEntry updateCacheEntry(java.lang.String r10, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r11, java.util.Date r12, java.util.Date r13, cz.msebera.android.httpclient.HttpResponse r14) throws java.io.IOException {
            r9 = this;
            cz.msebera.android.httpclient.StatusLine r0 = r14.getStatusLine()
            int r0 = r0.getStatusCode()
            r1 = 304(0x130, float:4.26E-43)
            if (r0 != r1) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            java.lang.String r1 = "Response must have 304 status code"
            cz.msebera.android.httpclient.util.Args.check(r0, r1)
            cz.msebera.android.httpclient.Header[] r6 = r9.mergeHeaders(r11, r14)
            r14 = 0
            cz.msebera.android.httpclient.client.cache.Resource r0 = r11.getResource()
            if (r0 == 0) goto L2b
            cz.msebera.android.httpclient.client.cache.ResourceFactory r14 = r9.resourceFactory
            cz.msebera.android.httpclient.client.cache.Resource r0 = r11.getResource()
            cz.msebera.android.httpclient.client.cache.Resource r10 = r14.copy(r10, r0)
            r7 = r10
            goto L2c
        L2b:
            r7 = r14
        L2c:
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r10 = new cz.msebera.android.httpclient.client.cache.HttpCacheEntry
            cz.msebera.android.httpclient.StatusLine r5 = r11.getStatusLine()
            java.lang.String r8 = r11.getRequestMethod()
            r2 = r10
            r3 = r12
            r4 = r13
            r2.<init>(r3, r4, r5, r6, r7, r8)
            return r10
    }
}
