package cz.msebera.android.httpclient.protocol;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
final class ChainBuilder<E> {
    private final java.util.LinkedList<E> list;
    private final java.util.Map<java.lang.Class<?>, E> uniqueClasses;

    public ChainBuilder() {
            r1 = this;
            r1.<init>()
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r1.list = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.uniqueClasses = r0
            return
    }

    private void ensureUnique(E r3) {
            r2 = this;
            java.util.Map<java.lang.Class<?>, E> r0 = r2.uniqueClasses
            java.lang.Class r1 = r3.getClass()
            java.lang.Object r0 = r0.remove(r1)
            if (r0 == 0) goto L11
            java.util.LinkedList<E> r1 = r2.list
            r1.remove(r0)
        L11:
            java.util.Map<java.lang.Class<?>, E> r0 = r2.uniqueClasses
            java.lang.Class r1 = r3.getClass()
            r0.put(r1, r3)
            return
    }

    public cz.msebera.android.httpclient.protocol.ChainBuilder<E> addAllFirst(java.util.Collection<E> r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return r1
        L3:
            java.util.Iterator r2 = r2.iterator()
        L7:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L15
            java.lang.Object r0 = r2.next()
            r1.addFirst(r0)
            goto L7
        L15:
            return r1
    }

    public cz.msebera.android.httpclient.protocol.ChainBuilder<E> addAllFirst(E... r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return r3
        L3:
            int r0 = r4.length
            r1 = 0
        L5:
            if (r1 >= r0) goto Lf
            r2 = r4[r1]
            r3.addFirst(r2)
            int r1 = r1 + 1
            goto L5
        Lf:
            return r3
    }

    public cz.msebera.android.httpclient.protocol.ChainBuilder<E> addAllLast(java.util.Collection<E> r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return r1
        L3:
            java.util.Iterator r2 = r2.iterator()
        L7:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L15
            java.lang.Object r0 = r2.next()
            r1.addLast(r0)
            goto L7
        L15:
            return r1
    }

    public cz.msebera.android.httpclient.protocol.ChainBuilder<E> addAllLast(E... r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return r3
        L3:
            int r0 = r4.length
            r1 = 0
        L5:
            if (r1 >= r0) goto Lf
            r2 = r4[r1]
            r3.addLast(r2)
            int r1 = r1 + 1
            goto L5
        Lf:
            return r3
    }

    public cz.msebera.android.httpclient.protocol.ChainBuilder<E> addFirst(E r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return r1
        L3:
            r1.ensureUnique(r2)
            java.util.LinkedList<E> r0 = r1.list
            r0.addFirst(r2)
            return r1
    }

    public cz.msebera.android.httpclient.protocol.ChainBuilder<E> addLast(E r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return r1
        L3:
            r1.ensureUnique(r2)
            java.util.LinkedList<E> r0 = r1.list
            r0.addLast(r2)
            return r1
    }

    public java.util.LinkedList<E> build() {
            r2 = this;
            java.util.LinkedList r0 = new java.util.LinkedList
            java.util.LinkedList<E> r1 = r2.list
            r0.<init>(r1)
            return r0
    }
}
