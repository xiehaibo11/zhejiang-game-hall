package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public class BasicCookieStore implements cz.msebera.android.httpclient.client.CookieStore, java.io.Serializable {
    private static final long serialVersionUID = -7581093305228232025L;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private final java.util.TreeSet<cz.msebera.android.httpclient.cookie.Cookie> cookies;

    public BasicCookieStore() {
            r2 = this;
            r2.<init>()
            java.util.TreeSet r0 = new java.util.TreeSet
            cz.msebera.android.httpclient.cookie.CookieIdentityComparator r1 = new cz.msebera.android.httpclient.cookie.CookieIdentityComparator
            r1.<init>()
            r0.<init>(r1)
            r2.cookies = r0
            return
    }

    @Override
    public synchronized void addCookie(cz.msebera.android.httpclient.cookie.Cookie r2) {
            r1 = this;
            monitor-enter(r1)
            if (r2 == 0) goto L1c
            java.util.TreeSet<cz.msebera.android.httpclient.cookie.Cookie> r0 = r1.cookies     // Catch: java.lang.Throwable -> L19
            r0.remove(r2)     // Catch: java.lang.Throwable -> L19
            java.util.Date r0 = new java.util.Date     // Catch: java.lang.Throwable -> L19
            r0.<init>()     // Catch: java.lang.Throwable -> L19
            boolean r0 = r2.isExpired(r0)     // Catch: java.lang.Throwable -> L19
            if (r0 != 0) goto L1c
            java.util.TreeSet<cz.msebera.android.httpclient.cookie.Cookie> r0 = r1.cookies     // Catch: java.lang.Throwable -> L19
            r0.add(r2)     // Catch: java.lang.Throwable -> L19
            goto L1c
        L19:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
        L1c:
            monitor-exit(r1)
            return
    }

    public synchronized void addCookies(cz.msebera.android.httpclient.cookie.Cookie[] r4) {
            r3 = this;
            monitor-enter(r3)
            if (r4 == 0) goto L12
            int r0 = r4.length     // Catch: java.lang.Throwable -> Lf
            r1 = 0
        L5:
            if (r1 >= r0) goto L12
            r2 = r4[r1]     // Catch: java.lang.Throwable -> Lf
            r3.addCookie(r2)     // Catch: java.lang.Throwable -> Lf
            int r1 = r1 + 1
            goto L5
        Lf:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
        L12:
            monitor-exit(r3)
            return
    }

    @Override
    public synchronized void clear() {
            r1 = this;
            monitor-enter(r1)
            java.util.TreeSet<cz.msebera.android.httpclient.cookie.Cookie> r0 = r1.cookies     // Catch: java.lang.Throwable -> L8
            r0.clear()     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    public synchronized boolean clearExpired(java.util.Date r4) {
            r3 = this;
            monitor-enter(r3)
            r0 = 0
            if (r4 != 0) goto L6
            monitor-exit(r3)
            return r0
        L6:
            java.util.TreeSet<cz.msebera.android.httpclient.cookie.Cookie> r1 = r3.cookies     // Catch: java.lang.Throwable -> L25
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L25
        Lc:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L25
            if (r2 == 0) goto L23
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L25
            cz.msebera.android.httpclient.cookie.Cookie r2 = (cz.msebera.android.httpclient.cookie.Cookie) r2     // Catch: java.lang.Throwable -> L25
            boolean r2 = r2.isExpired(r4)     // Catch: java.lang.Throwable -> L25
            if (r2 == 0) goto Lc
            r1.remove()     // Catch: java.lang.Throwable -> L25
            r0 = 1
            goto Lc
        L23:
            monitor-exit(r3)
            return r0
        L25:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    @Override
    public synchronized java.util.List<cz.msebera.android.httpclient.cookie.Cookie> getCookies() {
            r2 = this;
            monitor-enter(r2)
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> La
            java.util.TreeSet<cz.msebera.android.httpclient.cookie.Cookie> r1 = r2.cookies     // Catch: java.lang.Throwable -> La
            r0.<init>(r1)     // Catch: java.lang.Throwable -> La
            monitor-exit(r2)
            return r0
        La:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public synchronized java.lang.String toString() {
            r1 = this;
            monitor-enter(r1)
            java.util.TreeSet<cz.msebera.android.httpclient.cookie.Cookie> r0 = r1.cookies     // Catch: java.lang.Throwable -> L9
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)
            return r0
        L9:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }
}
