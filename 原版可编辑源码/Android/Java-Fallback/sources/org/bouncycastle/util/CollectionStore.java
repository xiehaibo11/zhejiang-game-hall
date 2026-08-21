package org.bouncycastle.util;

public class CollectionStore implements org.bouncycastle.util.Store {
    private java.util.Collection _local;

    public CollectionStore(java.util.Collection r2) {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>(r2)
            r1._local = r0
            return
    }

    @Override
    public java.util.Collection getMatches(org.bouncycastle.util.Selector r5) {
            r4 = this;
            if (r5 != 0) goto La
            java.util.ArrayList r5 = new java.util.ArrayList
            java.util.Collection r0 = r4._local
            r5.<init>(r0)
            return r5
        La:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Collection r1 = r4._local
            java.util.Iterator r1 = r1.iterator()
        L15:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L29
            java.lang.Object r2 = r1.next()
            boolean r3 = r5.match(r2)
            if (r3 == 0) goto L15
            r0.add(r2)
            goto L15
        L29:
            return r0
    }
}
