package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class RedirectLocations extends java.util.AbstractList<java.lang.Object> {
    private final java.util.List<java.net.URI> all;
    private final java.util.Set<java.net.URI> unique;

    public RedirectLocations() {
            r1 = this;
            r1.<init>()
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.unique = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.all = r0
            return
    }

    @Override
    public void add(int r2, java.lang.Object r3) {
            r1 = this;
            java.util.List<java.net.URI> r0 = r1.all
            java.net.URI r3 = (java.net.URI) r3
            r0.add(r2, r3)
            java.util.Set<java.net.URI> r2 = r1.unique
            r2.add(r3)
            return
    }

    public void add(java.net.URI r2) {
            r1 = this;
            java.util.Set<java.net.URI> r0 = r1.unique
            r0.add(r2)
            java.util.List<java.net.URI> r0 = r1.all
            r0.add(r2)
            return
    }

    @Override
    public boolean contains(java.lang.Object r2) {
            r1 = this;
            java.util.Set<java.net.URI> r0 = r1.unique
            boolean r2 = r0.contains(r2)
            return r2
    }

    public boolean contains(java.net.URI r2) {
            r1 = this;
            java.util.Set<java.net.URI> r0 = r1.unique
            boolean r2 = r0.contains(r2)
            return r2
    }

    @Override
    public java.lang.Object get(int r1) {
            r0 = this;
            java.net.URI r1 = r0.get(r1)
            return r1
    }

    @Override
    public java.net.URI get(int r2) {
            r1 = this;
            java.util.List<java.net.URI> r0 = r1.all
            java.lang.Object r2 = r0.get(r2)
            java.net.URI r2 = (java.net.URI) r2
            return r2
    }

    public java.util.List<java.net.URI> getAll() {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.List<java.net.URI> r1 = r2.all
            r0.<init>(r1)
            return r0
    }

    @Override
    public java.lang.Object remove(int r1) {
            r0 = this;
            java.net.URI r1 = r0.remove(r1)
            return r1
    }

    @Override
    public java.net.URI remove(int r3) {
            r2 = this;
            java.util.List<java.net.URI> r0 = r2.all
            java.lang.Object r3 = r0.remove(r3)
            java.net.URI r3 = (java.net.URI) r3
            java.util.Set<java.net.URI> r0 = r2.unique
            r0.remove(r3)
            java.util.List<java.net.URI> r0 = r2.all
            int r0 = r0.size()
            java.util.Set<java.net.URI> r1 = r2.unique
            int r1 = r1.size()
            if (r0 == r1) goto L22
            java.util.Set<java.net.URI> r0 = r2.unique
            java.util.List<java.net.URI> r1 = r2.all
            r0.addAll(r1)
        L22:
            return r3
    }

    public boolean remove(java.net.URI r4) {
            r3 = this;
            java.util.Set<java.net.URI> r0 = r3.unique
            boolean r0 = r0.remove(r4)
            if (r0 == 0) goto L24
            java.util.List<java.net.URI> r1 = r3.all
            java.util.Iterator r1 = r1.iterator()
        Le:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L24
            java.lang.Object r2 = r1.next()
            java.net.URI r2 = (java.net.URI) r2
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto Le
            r1.remove()
            goto Le
        L24:
            return r0
    }

    @Override
    public java.lang.Object set(int r2, java.lang.Object r3) {
            r1 = this;
            java.util.List<java.net.URI> r0 = r1.all
            java.net.URI r3 = (java.net.URI) r3
            java.lang.Object r2 = r0.set(r2, r3)
            java.net.URI r2 = (java.net.URI) r2
            java.util.Set<java.net.URI> r0 = r1.unique
            r0.remove(r2)
            java.util.Set<java.net.URI> r0 = r1.unique
            r0.add(r3)
            java.util.List<java.net.URI> r3 = r1.all
            int r3 = r3.size()
            java.util.Set<java.net.URI> r0 = r1.unique
            int r0 = r0.size()
            if (r3 == r0) goto L29
            java.util.Set<java.net.URI> r3 = r1.unique
            java.util.List<java.net.URI> r0 = r1.all
            r3.addAll(r0)
        L29:
            return r2
    }

    @Override
    public int size() {
            r1 = this;
            java.util.List<java.net.URI> r0 = r1.all
            int r0 = r0.size()
            return r0
    }
}
