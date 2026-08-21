package cz.msebera.android.httpclient.protocol;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public class UriPatternMatcher<T> {

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private final java.util.Map<java.lang.String, T> map;

    public UriPatternMatcher() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.map = r0
            return
    }

    @java.lang.Deprecated
    public synchronized java.util.Map<java.lang.String, T> getObjects() {
            r1 = this;
            monitor-enter(r1)
            java.util.Map<java.lang.String, T> r0 = r1.map     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized T lookup(java.lang.String r7) {
            r6 = this;
            monitor-enter(r6)
            java.lang.String r0 = "Request path"
            cz.msebera.android.httpclient.util.Args.notNull(r7, r0)     // Catch: java.lang.Throwable -> L53
            java.util.Map<java.lang.String, T> r0 = r6.map     // Catch: java.lang.Throwable -> L53
            java.lang.Object r0 = r0.get(r7)     // Catch: java.lang.Throwable -> L53
            if (r0 != 0) goto L51
            r1 = 0
            java.util.Map<java.lang.String, T> r2 = r6.map     // Catch: java.lang.Throwable -> L53
            java.util.Set r2 = r2.keySet()     // Catch: java.lang.Throwable -> L53
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L53
        L19:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L53
            if (r3 == 0) goto L51
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L53
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L53
            boolean r4 = r6.matchUriRequestPattern(r3, r7)     // Catch: java.lang.Throwable -> L53
            if (r4 == 0) goto L19
            if (r1 == 0) goto L49
            int r4 = r1.length()     // Catch: java.lang.Throwable -> L53
            int r5 = r3.length()     // Catch: java.lang.Throwable -> L53
            if (r4 < r5) goto L49
            int r4 = r1.length()     // Catch: java.lang.Throwable -> L53
            int r5 = r3.length()     // Catch: java.lang.Throwable -> L53
            if (r4 != r5) goto L19
            java.lang.String r4 = "*"
            boolean r4 = r3.endsWith(r4)     // Catch: java.lang.Throwable -> L53
            if (r4 == 0) goto L19
        L49:
            java.util.Map<java.lang.String, T> r0 = r6.map     // Catch: java.lang.Throwable -> L53
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Throwable -> L53
            r1 = r3
            goto L19
        L51:
            monitor-exit(r6)
            return r0
        L53:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    protected boolean matchUriRequestPattern(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            java.lang.String r0 = "*"
            boolean r1 = r5.equals(r0)
            r2 = 1
            if (r1 == 0) goto La
            return r2
        La:
            boolean r1 = r5.endsWith(r0)
            r3 = 0
            if (r1 == 0) goto L20
            int r1 = r5.length()
            int r1 = r1 - r2
            java.lang.String r1 = r5.substring(r3, r1)
            boolean r1 = r6.startsWith(r1)
            if (r1 != 0) goto L36
        L20:
            boolean r0 = r5.startsWith(r0)
            if (r0 == 0) goto L35
            int r0 = r5.length()
            java.lang.String r5 = r5.substring(r2, r0)
            boolean r5 = r6.endsWith(r5)
            if (r5 == 0) goto L35
            goto L36
        L35:
            r2 = 0
        L36:
            return r2
    }

    public synchronized void register(java.lang.String r2, T r3) {
            r1 = this;
            monitor-enter(r1)
            java.lang.String r0 = "URI request pattern"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)     // Catch: java.lang.Throwable -> Ld
            java.util.Map<java.lang.String, T> r0 = r1.map     // Catch: java.lang.Throwable -> Ld
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r1)
            return
        Ld:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @java.lang.Deprecated
    public synchronized void setHandlers(java.util.Map<java.lang.String, T> r2) {
            r1 = this;
            monitor-enter(r1)
            java.lang.String r0 = "Map of handlers"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)     // Catch: java.lang.Throwable -> L12
            java.util.Map<java.lang.String, T> r0 = r1.map     // Catch: java.lang.Throwable -> L12
            r0.clear()     // Catch: java.lang.Throwable -> L12
            java.util.Map<java.lang.String, T> r0 = r1.map     // Catch: java.lang.Throwable -> L12
            r0.putAll(r2)     // Catch: java.lang.Throwable -> L12
            monitor-exit(r1)
            return
        L12:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @java.lang.Deprecated
    public synchronized void setObjects(java.util.Map<java.lang.String, T> r2) {
            r1 = this;
            monitor-enter(r1)
            java.lang.String r0 = "Map of handlers"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)     // Catch: java.lang.Throwable -> L12
            java.util.Map<java.lang.String, T> r0 = r1.map     // Catch: java.lang.Throwable -> L12
            r0.clear()     // Catch: java.lang.Throwable -> L12
            java.util.Map<java.lang.String, T> r0 = r1.map     // Catch: java.lang.Throwable -> L12
            r0.putAll(r2)     // Catch: java.lang.Throwable -> L12
            monitor-exit(r1)
            return
        L12:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public java.lang.String toString() {
            r1 = this;
            java.util.Map<java.lang.String, T> r0 = r1.map
            java.lang.String r0 = r0.toString()
            return r0
    }

    public synchronized void unregister(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            if (r2 != 0) goto L5
            monitor-exit(r1)
            return
        L5:
            java.util.Map<java.lang.String, T> r0 = r1.map     // Catch: java.lang.Throwable -> Lc
            r0.remove(r2)     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r1)
            return
        Lc:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }
}
