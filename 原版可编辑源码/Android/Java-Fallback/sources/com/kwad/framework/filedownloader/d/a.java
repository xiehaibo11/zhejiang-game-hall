package com.kwad.framework.filedownloader.d;

public final class a {
    private long ack;
    private long acl;
    private long acm;
    private int id;
    private int index;

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static long o(java.util.List<com.kwad.framework.filedownloader.d.a> r7) {
            java.util.Iterator r7 = r7.iterator()
            r0 = 0
        L6:
            boolean r2 = r7.hasNext()
            if (r2 == 0) goto L1d
            java.lang.Object r2 = r7.next()
            com.kwad.framework.filedownloader.d.a r2 = (com.kwad.framework.filedownloader.d.a) r2
            long r3 = r2.vi()
            long r5 = r2.getStartOffset()
            long r3 = r3 - r5
            long r0 = r0 + r3
            goto L6
        L1d:
            return r0
    }

    public final void J(long r1) {
            r0 = this;
            r0.acl = r1
            return
    }

    public final void K(long r1) {
            r0 = this;
            r0.acm = r1
            return
    }

    public final int getId() {
            r1 = this;
            int r0 = r1.id
            return r0
    }

    public final int getIndex() {
            r1 = this;
            int r0 = r1.index
            return r0
    }

    public final long getStartOffset() {
            r2 = this;
            long r0 = r2.ack
            return r0
    }

    public final void setId(int r1) {
            r0 = this;
            r0.id = r1
            return
    }

    public final void setIndex(int r1) {
            r0 = this;
            r0.index = r1
            return
    }

    public final void setStartOffset(long r1) {
            r0 = this;
            r0.ack = r1
            return
    }

    public final java.lang.String toString() {
            r3 = this;
            r0 = 5
            java.lang.Object[] r0 = new java.lang.Object[r0]
            int r1 = r3.id
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 0
            r0[r2] = r1
            int r1 = r3.index
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 1
            r0[r2] = r1
            long r1 = r3.ack
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r2 = 2
            r0[r2] = r1
            long r1 = r3.acm
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r2 = 3
            r0[r2] = r1
            long r1 = r3.acl
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r2 = 4
            r0[r2] = r1
            java.lang.String r1 = "id[%d] index[%d] range[%d, %d) current offset(%d)"
            java.lang.String r0 = com.kwad.framework.filedownloader.f.f.b(r1, r0)
            return r0
    }

    public final long vi() {
            r2 = this;
            long r0 = r2.acl
            return r0
    }

    public final long vj() {
            r2 = this;
            long r0 = r2.acm
            return r0
    }

    public final android.content.ContentValues vk() {
            r3 = this;
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            int r1 = r3.id
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "id"
            r0.put(r2, r1)
            int r1 = r3.index
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "connectionIndex"
            r0.put(r2, r1)
            long r1 = r3.ack
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "startOffset"
            r0.put(r2, r1)
            long r1 = r3.acl
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "currentOffset"
            r0.put(r2, r1)
            long r1 = r3.acm
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "endOffset"
            r0.put(r2, r1)
            return r0
    }
}
