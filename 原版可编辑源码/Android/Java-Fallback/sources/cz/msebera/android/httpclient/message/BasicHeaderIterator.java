package cz.msebera.android.httpclient.message;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class BasicHeaderIterator implements cz.msebera.android.httpclient.HeaderIterator {
    protected final cz.msebera.android.httpclient.Header[] allHeaders;
    protected int currentIndex;
    protected java.lang.String headerName;

    public BasicHeaderIterator(cz.msebera.android.httpclient.Header[] r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Header array"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.Header[] r2 = (cz.msebera.android.httpclient.Header[]) r2
            r1.allHeaders = r2
            r1.headerName = r3
            r2 = -1
            int r2 = r1.findNext(r2)
            r1.currentIndex = r2
            return
    }

    protected boolean filterHeader(int r3) {
            r2 = this;
            java.lang.String r0 = r2.headerName
            if (r0 == 0) goto L15
            cz.msebera.android.httpclient.Header[] r1 = r2.allHeaders
            r3 = r1[r3]
            java.lang.String r3 = r3.getName()
            boolean r3 = r0.equalsIgnoreCase(r3)
            if (r3 == 0) goto L13
            goto L15
        L13:
            r3 = 0
            goto L16
        L15:
            r3 = 1
        L16:
            return r3
    }

    protected int findNext(int r4) {
            r3 = this;
            r0 = -1
            if (r4 >= r0) goto L4
            return r0
        L4:
            cz.msebera.android.httpclient.Header[] r1 = r3.allHeaders
            int r1 = r1.length
            int r1 = r1 + (-1)
            r2 = 0
        La:
            if (r2 != 0) goto L15
            if (r4 >= r1) goto L15
            int r4 = r4 + 1
            boolean r2 = r3.filterHeader(r4)
            goto La
        L15:
            if (r2 == 0) goto L18
            goto L19
        L18:
            r4 = -1
        L19:
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
            if (r0 < 0) goto Lf
            int r1 = r2.findNext(r0)
            r2.currentIndex = r1
            cz.msebera.android.httpclient.Header[] r1 = r2.allHeaders
            r0 = r1[r0]
            return r0
        Lf:
            java.util.NoSuchElementException r0 = new java.util.NoSuchElementException
            java.lang.String r1 = "Iteration already finished."
            r0.<init>(r1)
            throw r0
    }

    @Override
    public void remove() throws java.lang.UnsupportedOperationException {
            r2 = this;
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            java.lang.String r1 = "Removing headers is not supported."
            r0.<init>(r1)
            throw r0
    }
}
