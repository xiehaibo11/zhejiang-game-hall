package cz.msebera.android.httpclient.message;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class BasicListHeaderIterator implements cz.msebera.android.httpclient.HeaderIterator {
    protected final java.util.List<cz.msebera.android.httpclient.Header> allHeaders;
    protected int currentIndex;
    protected java.lang.String headerName;
    protected int lastIndex;

    public BasicListHeaderIterator(java.util.List<cz.msebera.android.httpclient.Header> r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Header list"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.util.List r2 = (java.util.List) r2
            r1.allHeaders = r2
            r1.headerName = r3
            r2 = -1
            int r3 = r1.findNext(r2)
            r1.currentIndex = r3
            r1.lastIndex = r2
            return
    }

    protected boolean filterHeader(int r2) {
            r1 = this;
            java.lang.String r0 = r1.headerName
            if (r0 != 0) goto L6
            r2 = 1
            return r2
        L6:
            java.util.List<cz.msebera.android.httpclient.Header> r0 = r1.allHeaders
            java.lang.Object r2 = r0.get(r2)
            cz.msebera.android.httpclient.Header r2 = (cz.msebera.android.httpclient.Header) r2
            java.lang.String r2 = r2.getName()
            java.lang.String r0 = r1.headerName
            boolean r2 = r0.equalsIgnoreCase(r2)
            return r2
    }

    protected int findNext(int r4) {
            r3 = this;
            r0 = -1
            if (r4 >= r0) goto L4
            return r0
        L4:
            java.util.List<cz.msebera.android.httpclient.Header> r1 = r3.allHeaders
            int r1 = r1.size()
            int r1 = r1 + (-1)
            r2 = 0
        Ld:
            if (r2 != 0) goto L18
            if (r4 >= r1) goto L18
            int r4 = r4 + 1
            boolean r2 = r3.filterHeader(r4)
            goto Ld
        L18:
            if (r2 == 0) goto L1b
            goto L1c
        L1b:
            r4 = -1
        L1c:
            return r4
    }

    @Override
    public boolean hasNext() {
            r1 = this;
            int r0 = r1.currentIndex
            if (r0 < 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    @Override
    public final java.lang.Object next() throws java.util.NoSuchElementException {
            r1 = this;
            cz.msebera.android.httpclient.Header r0 = r1.nextHeader()
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.Header nextHeader() throws java.util.NoSuchElementException {
            r2 = this;
            int r0 = r2.currentIndex
            if (r0 < 0) goto L15
            r2.lastIndex = r0
            int r1 = r2.findNext(r0)
            r2.currentIndex = r1
            java.util.List<cz.msebera.android.httpclient.Header> r1 = r2.allHeaders
            java.lang.Object r0 = r1.get(r0)
            cz.msebera.android.httpclient.Header r0 = (cz.msebera.android.httpclient.Header) r0
            return r0
        L15:
            java.util.NoSuchElementException r0 = new java.util.NoSuchElementException
            java.lang.String r1 = "Iteration already finished."
            r0.<init>(r1)
            throw r0
    }

    @Override
    public void remove() throws java.lang.UnsupportedOperationException {
            r3 = this;
            int r0 = r3.lastIndex
            r1 = 1
            if (r0 < 0) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            java.lang.String r2 = "No header to remove"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r2)
            java.util.List<cz.msebera.android.httpclient.Header> r0 = r3.allHeaders
            int r2 = r3.lastIndex
            r0.remove(r2)
            r0 = -1
            r3.lastIndex = r0
            int r0 = r3.currentIndex
            int r0 = r0 - r1
            r3.currentIndex = r0
            return
    }
}
