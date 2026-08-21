package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.ThreadSafe
class BasicIdGenerator {

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private long count;
    private final java.lang.String hostname;
    private final java.security.SecureRandom rnd;

    public BasicIdGenerator() {
            r2 = this;
            r2.<init>()
            java.net.InetAddress r0 = java.net.InetAddress.getLocalHost()     // Catch: java.net.UnknownHostException -> Lc
            java.lang.String r0 = r0.getHostName()     // Catch: java.net.UnknownHostException -> Lc
            goto Le
        Lc:
            java.lang.String r0 = "localhost"
        Le:
            r2.hostname = r0
            java.lang.String r0 = "SHA1PRNG"
            java.security.SecureRandom r0 = java.security.SecureRandom.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> L19
            r2.rnd = r0     // Catch: java.security.NoSuchAlgorithmException -> L19
            return
        L19:
            r0 = move-exception
            java.lang.Error r1 = new java.lang.Error
            r1.<init>(r0)
            throw r1
    }

    public java.lang.String generate() {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1.generate(r0)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public synchronized void generate(java.lang.StringBuilder r9) {
            r8 = this;
            monitor-enter(r8)
            long r0 = r8.count     // Catch: java.lang.Throwable -> L46
            r2 = 1
            long r0 = r0 + r2
            r8.count = r0     // Catch: java.lang.Throwable -> L46
            java.security.SecureRandom r0 = r8.rnd     // Catch: java.lang.Throwable -> L46
            int r0 = r0.nextInt()     // Catch: java.lang.Throwable -> L46
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L46
            r9.append(r1)     // Catch: java.lang.Throwable -> L46
            r1 = 46
            r9.append(r1)     // Catch: java.lang.Throwable -> L46
            java.util.Formatter r2 = new java.util.Formatter     // Catch: java.lang.Throwable -> L46
            java.util.Locale r3 = java.util.Locale.US     // Catch: java.lang.Throwable -> L46
            r2.<init>(r9, r3)     // Catch: java.lang.Throwable -> L46
            java.lang.String r3 = "%1$016x-%2$08x"
            r4 = 2
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L46
            r5 = 0
            long r6 = r8.count     // Catch: java.lang.Throwable -> L46
            java.lang.Long r6 = java.lang.Long.valueOf(r6)     // Catch: java.lang.Throwable -> L46
            r4[r5] = r6     // Catch: java.lang.Throwable -> L46
            r5 = 1
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Throwable -> L46
            r4[r5] = r0     // Catch: java.lang.Throwable -> L46
            r2.format(r3, r4)     // Catch: java.lang.Throwable -> L46
            r2.close()     // Catch: java.lang.Throwable -> L46
            r9.append(r1)     // Catch: java.lang.Throwable -> L46
            java.lang.String r0 = r8.hostname     // Catch: java.lang.Throwable -> L46
            r9.append(r0)     // Catch: java.lang.Throwable -> L46
            monitor-exit(r8)
            return
        L46:
            r9 = move-exception
            monitor-exit(r8)
            throw r9
    }
}
