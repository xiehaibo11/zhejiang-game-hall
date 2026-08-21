package cz.msebera.android.httpclient.message;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class HeaderGroup implements java.lang.Cloneable, java.io.Serializable {
    private static final long serialVersionUID = 2608834160639271617L;
    private final cz.msebera.android.httpclient.Header[] EMPTY;
    private final java.util.List<cz.msebera.android.httpclient.Header> headers;

    public HeaderGroup() {
            r2 = this;
            r2.<init>()
            r0 = 0
            cz.msebera.android.httpclient.Header[] r0 = new cz.msebera.android.httpclient.Header[r0]
            r2.EMPTY = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r1 = 16
            r0.<init>(r1)
            r2.headers = r0
            return
    }

    public void addHeader(cz.msebera.android.httpclient.Header r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.util.List<cz.msebera.android.httpclient.Header> r0 = r1.headers
            r0.add(r2)
            return
    }

    public void clear() {
            r1 = this;
            java.util.List<cz.msebera.android.httpclient.Header> r0 = r1.headers
            r0.clear()
            return
    }

    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            java.lang.Object r0 = super.clone()
            return r0
    }

    public boolean containsHeader(java.lang.String r4) {
            r3 = this;
            r0 = 0
            r1 = 0
        L2:
            java.util.List<cz.msebera.android.httpclient.Header> r2 = r3.headers
            int r2 = r2.size()
            if (r1 >= r2) goto L21
            java.util.List<cz.msebera.android.httpclient.Header> r2 = r3.headers
            java.lang.Object r2 = r2.get(r1)
            cz.msebera.android.httpclient.Header r2 = (cz.msebera.android.httpclient.Header) r2
            java.lang.String r2 = r2.getName()
            boolean r2 = r2.equalsIgnoreCase(r4)
            if (r2 == 0) goto L1e
            r4 = 1
            return r4
        L1e:
            int r1 = r1 + 1
            goto L2
        L21:
            return r0
    }

    public cz.msebera.android.httpclient.message.HeaderGroup copy() {
            r3 = this;
            cz.msebera.android.httpclient.message.HeaderGroup r0 = new cz.msebera.android.httpclient.message.HeaderGroup
            r0.<init>()
            java.util.List<cz.msebera.android.httpclient.Header> r1 = r0.headers
            java.util.List<cz.msebera.android.httpclient.Header> r2 = r3.headers
            r1.addAll(r2)
            return r0
    }

    public cz.msebera.android.httpclient.Header[] getAllHeaders() {
            r2 = this;
            java.util.List<cz.msebera.android.httpclient.Header> r0 = r2.headers
            int r1 = r0.size()
            cz.msebera.android.httpclient.Header[] r1 = new cz.msebera.android.httpclient.Header[r1]
            java.lang.Object[] r0 = r0.toArray(r1)
            cz.msebera.android.httpclient.Header[] r0 = (cz.msebera.android.httpclient.Header[]) r0
            return r0
    }

    public cz.msebera.android.httpclient.Header getCondensedHeader(java.lang.String r6) {
            r5 = this;
            cz.msebera.android.httpclient.Header[] r0 = r5.getHeaders(r6)
            int r1 = r0.length
            if (r1 != 0) goto L9
            r6 = 0
            return r6
        L9:
            int r1 = r0.length
            r2 = 0
            r3 = 1
            if (r1 != r3) goto L11
            r6 = r0[r2]
            return r6
        L11:
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            r4 = 128(0x80, float:1.8E-43)
            r1.<init>(r4)
            r2 = r0[r2]
            java.lang.String r2 = r2.getValue()
            r1.append(r2)
        L21:
            int r2 = r0.length
            if (r3 >= r2) goto L35
            java.lang.String r2 = ", "
            r1.append(r2)
            r2 = r0[r3]
            java.lang.String r2 = r2.getValue()
            r1.append(r2)
            int r3 = r3 + 1
            goto L21
        L35:
            cz.msebera.android.httpclient.message.BasicHeader r0 = new cz.msebera.android.httpclient.message.BasicHeader
            java.util.Locale r2 = java.util.Locale.ROOT
            java.lang.String r6 = r6.toLowerCase(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r6, r1)
            return r0
    }

    public cz.msebera.android.httpclient.Header getFirstHeader(java.lang.String r4) {
            r3 = this;
            r0 = 0
        L1:
            java.util.List<cz.msebera.android.httpclient.Header> r1 = r3.headers
            int r1 = r1.size()
            if (r0 >= r1) goto L1f
            java.util.List<cz.msebera.android.httpclient.Header> r1 = r3.headers
            java.lang.Object r1 = r1.get(r0)
            cz.msebera.android.httpclient.Header r1 = (cz.msebera.android.httpclient.Header) r1
            java.lang.String r2 = r1.getName()
            boolean r2 = r2.equalsIgnoreCase(r4)
            if (r2 == 0) goto L1c
            return r1
        L1c:
            int r0 = r0 + 1
            goto L1
        L1f:
            r4 = 0
            return r4
    }

    public cz.msebera.android.httpclient.Header[] getHeaders(java.lang.String r5) {
            r4 = this;
            r0 = 0
            r1 = 0
        L2:
            java.util.List<cz.msebera.android.httpclient.Header> r2 = r4.headers
            int r2 = r2.size()
            if (r1 >= r2) goto L29
            java.util.List<cz.msebera.android.httpclient.Header> r2 = r4.headers
            java.lang.Object r2 = r2.get(r1)
            cz.msebera.android.httpclient.Header r2 = (cz.msebera.android.httpclient.Header) r2
            java.lang.String r3 = r2.getName()
            boolean r3 = r3.equalsIgnoreCase(r5)
            if (r3 == 0) goto L26
            if (r0 != 0) goto L23
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
        L23:
            r0.add(r2)
        L26:
            int r1 = r1 + 1
            goto L2
        L29:
            if (r0 == 0) goto L38
            int r5 = r0.size()
            cz.msebera.android.httpclient.Header[] r5 = new cz.msebera.android.httpclient.Header[r5]
            java.lang.Object[] r5 = r0.toArray(r5)
            cz.msebera.android.httpclient.Header[] r5 = (cz.msebera.android.httpclient.Header[]) r5
            goto L3a
        L38:
            cz.msebera.android.httpclient.Header[] r5 = r4.EMPTY
        L3a:
            return r5
    }

    public cz.msebera.android.httpclient.Header getLastHeader(java.lang.String r4) {
            r3 = this;
            java.util.List<cz.msebera.android.httpclient.Header> r0 = r3.headers
            int r0 = r0.size()
            int r0 = r0 + (-1)
        L8:
            if (r0 < 0) goto L20
            java.util.List<cz.msebera.android.httpclient.Header> r1 = r3.headers
            java.lang.Object r1 = r1.get(r0)
            cz.msebera.android.httpclient.Header r1 = (cz.msebera.android.httpclient.Header) r1
            java.lang.String r2 = r1.getName()
            boolean r2 = r2.equalsIgnoreCase(r4)
            if (r2 == 0) goto L1d
            return r1
        L1d:
            int r0 = r0 + (-1)
            goto L8
        L20:
            r4 = 0
            return r4
    }

    public cz.msebera.android.httpclient.HeaderIterator iterator() {
            r3 = this;
            cz.msebera.android.httpclient.message.BasicListHeaderIterator r0 = new cz.msebera.android.httpclient.message.BasicListHeaderIterator
            java.util.List<cz.msebera.android.httpclient.Header> r1 = r3.headers
            r2 = 0
            r0.<init>(r1, r2)
            return r0
    }

    public cz.msebera.android.httpclient.HeaderIterator iterator(java.lang.String r3) {
            r2 = this;
            cz.msebera.android.httpclient.message.BasicListHeaderIterator r0 = new cz.msebera.android.httpclient.message.BasicListHeaderIterator
            java.util.List<cz.msebera.android.httpclient.Header> r1 = r2.headers
            r0.<init>(r1, r3)
            return r0
    }

    public void removeHeader(cz.msebera.android.httpclient.Header r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.util.List<cz.msebera.android.httpclient.Header> r0 = r1.headers
            r0.remove(r2)
            return
    }

    public void setHeaders(cz.msebera.android.httpclient.Header[] r2) {
            r1 = this;
            r1.clear()
            if (r2 != 0) goto L6
            return
        L6:
            java.util.List<cz.msebera.android.httpclient.Header> r0 = r1.headers
            java.util.Collections.addAll(r0, r2)
            return
    }

    public java.lang.String toString() {
            r1 = this;
            java.util.List<cz.msebera.android.httpclient.Header> r0 = r1.headers
            java.lang.String r0 = r0.toString()
            return r0
    }

    public void updateHeader(cz.msebera.android.httpclient.Header r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            r0 = 0
        L4:
            java.util.List<cz.msebera.android.httpclient.Header> r1 = r3.headers
            int r1 = r1.size()
            if (r0 >= r1) goto L2b
            java.util.List<cz.msebera.android.httpclient.Header> r1 = r3.headers
            java.lang.Object r1 = r1.get(r0)
            cz.msebera.android.httpclient.Header r1 = (cz.msebera.android.httpclient.Header) r1
            java.lang.String r1 = r1.getName()
            java.lang.String r2 = r4.getName()
            boolean r1 = r1.equalsIgnoreCase(r2)
            if (r1 == 0) goto L28
            java.util.List<cz.msebera.android.httpclient.Header> r1 = r3.headers
            r1.set(r0, r4)
            return
        L28:
            int r0 = r0 + 1
            goto L4
        L2b:
            java.util.List<cz.msebera.android.httpclient.Header> r0 = r3.headers
            r0.add(r4)
            return
    }
}
