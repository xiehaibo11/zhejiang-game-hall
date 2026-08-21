package okhttp3.internal.publicsuffix;

public final class PublicSuffixDatabase {
    private static final java.lang.String[] EMPTY_RULE = null;
    private static final byte EXCEPTION_MARKER = 33;
    private static final java.lang.String[] PREVAILING_RULE = null;
    public static final java.lang.String PUBLIC_SUFFIX_RESOURCE = "publicsuffixes.gz";
    private static final byte[] WILDCARD_LABEL = null;
    private static final okhttp3.internal.publicsuffix.PublicSuffixDatabase instance = null;
    private final java.util.concurrent.atomic.AtomicBoolean listRead;
    private byte[] publicSuffixExceptionListBytes;
    private byte[] publicSuffixListBytes;
    private final java.util.concurrent.CountDownLatch readCompleteLatch;

    static {
            r0 = 1
            byte[] r0 = new byte[r0]
            r1 = 0
            r2 = 42
            r0[r1] = r2
            okhttp3.internal.publicsuffix.PublicSuffixDatabase.WILDCARD_LABEL = r0
            java.lang.String[] r0 = new java.lang.String[r1]
            okhttp3.internal.publicsuffix.PublicSuffixDatabase.EMPTY_RULE = r0
            java.lang.String r0 = "*"
            java.lang.String[] r0 = new java.lang.String[]{r0}
            okhttp3.internal.publicsuffix.PublicSuffixDatabase.PREVAILING_RULE = r0
            okhttp3.internal.publicsuffix.PublicSuffixDatabase r0 = new okhttp3.internal.publicsuffix.PublicSuffixDatabase
            r0.<init>()
            okhttp3.internal.publicsuffix.PublicSuffixDatabase.instance = r0
            return
    }

    public PublicSuffixDatabase() {
            r2 = this;
            r2.<init>()
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            r2.listRead = r0
            java.util.concurrent.CountDownLatch r0 = new java.util.concurrent.CountDownLatch
            r1 = 1
            r0.<init>(r1)
            r2.readCompleteLatch = r0
            return
    }

    private static java.lang.String binarySearchBytes(byte[] r16, byte[][] r17, int r18) {
            r0 = r16
            r1 = r17
            int r2 = r0.length
            r3 = 0
            r4 = r2
            r2 = 0
        L8:
            if (r2 >= r4) goto L85
            int r5 = r2 + r4
            int r5 = r5 / 2
        Le:
            r6 = 10
            r7 = -1
            if (r5 <= r7) goto L1a
            r8 = r0[r5]
            if (r8 == r6) goto L1a
            int r5 = r5 + (-1)
            goto Le
        L1a:
            int r5 = r5 + 1
            r8 = 1
            r9 = 1
        L1e:
            int r10 = r5 + r9
            r11 = r0[r10]
            if (r11 == r6) goto L27
            int r9 = r9 + 1
            goto L1e
        L27:
            int r6 = r10 - r5
            r11 = r18
            r9 = 0
            r12 = 0
            r13 = 0
        L2e:
            if (r9 == 0) goto L36
            r9 = 46
            r9 = 0
            r14 = 46
            goto L3c
        L36:
            r14 = r1[r11]
            r14 = r14[r12]
            r14 = r14 & 255(0xff, float:3.57E-43)
        L3c:
            int r15 = r5 + r13
            r15 = r0[r15]
            r15 = r15 & 255(0xff, float:3.57E-43)
            int r14 = r14 - r15
            if (r14 == 0) goto L46
            goto L56
        L46:
            int r13 = r13 + 1
            int r12 = r12 + 1
            if (r13 != r6) goto L4d
            goto L56
        L4d:
            r15 = r1[r11]
            int r15 = r15.length
            if (r15 != r12) goto L2e
            int r9 = r1.length
            int r9 = r9 - r8
            if (r11 != r9) goto L80
        L56:
            if (r14 >= 0) goto L5c
        L58:
            int r5 = r5 + (-1)
            r4 = r5
            goto L8
        L5c:
            if (r14 <= 0) goto L62
        L5e:
            int r10 = r10 + 1
            r2 = r10
            goto L8
        L62:
            int r7 = r6 - r13
            r8 = r1[r11]
            int r8 = r8.length
            int r8 = r8 - r12
        L68:
            int r11 = r11 + 1
            int r9 = r1.length
            if (r11 >= r9) goto L72
            r9 = r1[r11]
            int r9 = r9.length
            int r8 = r8 + r9
            goto L68
        L72:
            if (r8 >= r7) goto L75
            goto L58
        L75:
            if (r8 <= r7) goto L78
            goto L5e
        L78:
            java.lang.String r1 = new java.lang.String
            java.nio.charset.Charset r2 = okhttp3.internal.Util.UTF_8
            r1.<init>(r0, r5, r6, r2)
            goto L86
        L80:
            int r11 = r11 + 1
            r9 = 1
            r12 = -1
            goto L2e
        L85:
            r1 = 0
        L86:
            return r1
    }

    private java.lang.String[] findMatchingRule(java.lang.String[] r8) {
            r7 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r7.listRead
            boolean r0 = r0.get()
            r1 = 0
            r2 = 1
            if (r0 != 0) goto L16
            java.util.concurrent.atomic.AtomicBoolean r0 = r7.listRead
            boolean r0 = r0.compareAndSet(r1, r2)
            if (r0 == 0) goto L16
            r7.readTheListUninterruptibly()
            goto L23
        L16:
            java.util.concurrent.CountDownLatch r0 = r7.readCompleteLatch     // Catch: java.lang.InterruptedException -> L1c
            r0.await()     // Catch: java.lang.InterruptedException -> L1c
            goto L23
        L1c:
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            r0.interrupt()
        L23:
            monitor-enter(r7)
            byte[] r0 = r7.publicSuffixListBytes     // Catch: java.lang.Throwable -> Lc7
            if (r0 == 0) goto Lbf
            monitor-exit(r7)     // Catch: java.lang.Throwable -> Lc7
            int r0 = r8.length
            byte[][] r0 = new byte[r0][]
            r3 = 0
        L2d:
            int r4 = r8.length
            if (r3 >= r4) goto L3d
            r4 = r8[r3]
            java.nio.charset.Charset r5 = okhttp3.internal.Util.UTF_8
            byte[] r4 = r4.getBytes(r5)
            r0[r3] = r4
            int r3 = r3 + 1
            goto L2d
        L3d:
            r8 = 0
        L3e:
            int r3 = r0.length
            r4 = 0
            if (r8 >= r3) goto L4e
            byte[] r3 = r7.publicSuffixListBytes
            java.lang.String r3 = binarySearchBytes(r3, r0, r8)
            if (r3 == 0) goto L4b
            goto L4f
        L4b:
            int r8 = r8 + 1
            goto L3e
        L4e:
            r3 = r4
        L4f:
            int r8 = r0.length
            if (r8 <= r2) goto L6d
            java.lang.Object r8 = r0.clone()
            byte[][] r8 = (byte[][]) r8
            r5 = 0
        L59:
            int r6 = r8.length
            int r6 = r6 - r2
            if (r5 >= r6) goto L6d
            byte[] r6 = okhttp3.internal.publicsuffix.PublicSuffixDatabase.WILDCARD_LABEL
            r8[r5] = r6
            byte[] r6 = r7.publicSuffixListBytes
            java.lang.String r6 = binarySearchBytes(r6, r8, r5)
            if (r6 == 0) goto L6a
            goto L6e
        L6a:
            int r5 = r5 + 1
            goto L59
        L6d:
            r6 = r4
        L6e:
            if (r6 == 0) goto L80
        L70:
            int r8 = r0.length
            int r8 = r8 - r2
            if (r1 >= r8) goto L80
            byte[] r8 = r7.publicSuffixExceptionListBytes
            java.lang.String r8 = binarySearchBytes(r8, r0, r1)
            if (r8 == 0) goto L7d
            goto L81
        L7d:
            int r1 = r1 + 1
            goto L70
        L80:
            r8 = r4
        L81:
            if (r8 == 0) goto L9b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "!"
            r0.append(r1)
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            java.lang.String r0 = "\\."
            java.lang.String[] r8 = r8.split(r0)
            return r8
        L9b:
            if (r3 != 0) goto La2
            if (r6 != 0) goto La2
            java.lang.String[] r8 = okhttp3.internal.publicsuffix.PublicSuffixDatabase.PREVAILING_RULE
            return r8
        La2:
            if (r3 == 0) goto Lab
            java.lang.String r8 = "\\."
            java.lang.String[] r8 = r3.split(r8)
            goto Lad
        Lab:
            java.lang.String[] r8 = okhttp3.internal.publicsuffix.PublicSuffixDatabase.EMPTY_RULE
        Lad:
            if (r6 == 0) goto Lb6
            java.lang.String r0 = "\\."
            java.lang.String[] r0 = r6.split(r0)
            goto Lb8
        Lb6:
            java.lang.String[] r0 = okhttp3.internal.publicsuffix.PublicSuffixDatabase.EMPTY_RULE
        Lb8:
            int r1 = r8.length
            int r2 = r0.length
            if (r1 <= r2) goto Lbd
            goto Lbe
        Lbd:
            r8 = r0
        Lbe:
            return r8
        Lbf:
            java.lang.IllegalStateException r8 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> Lc7
            java.lang.String r0 = "Unable to load publicsuffixes.gz resource from the classpath."
            r8.<init>(r0)     // Catch: java.lang.Throwable -> Lc7
            throw r8     // Catch: java.lang.Throwable -> Lc7
        Lc7:
            r8 = move-exception
            monitor-exit(r7)     // Catch: java.lang.Throwable -> Lc7
            throw r8
    }

    public static okhttp3.internal.publicsuffix.PublicSuffixDatabase get() {
            okhttp3.internal.publicsuffix.PublicSuffixDatabase r0 = okhttp3.internal.publicsuffix.PublicSuffixDatabase.instance
            return r0
    }

    private void readTheList() throws java.io.IOException {
            r3 = this;
            java.lang.Class<okhttp3.internal.publicsuffix.PublicSuffixDatabase> r0 = okhttp3.internal.publicsuffix.PublicSuffixDatabase.class
            java.lang.String r1 = "publicsuffixes.gz"
            java.io.InputStream r0 = r0.getResourceAsStream(r1)
            if (r0 != 0) goto Lb
            return
        Lb:
            okio.GzipSource r1 = new okio.GzipSource
            okio.Source r0 = okio.Okio.source(r0)
            r1.<init>(r0)
            okio.BufferedSource r0 = okio.Okio.buffer(r1)
            int r1 = r0.readInt()     // Catch: java.lang.Throwable -> L3c
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L3c
            r0.readFully(r1)     // Catch: java.lang.Throwable -> L3c
            int r2 = r0.readInt()     // Catch: java.lang.Throwable -> L3c
            byte[] r2 = new byte[r2]     // Catch: java.lang.Throwable -> L3c
            r0.readFully(r2)     // Catch: java.lang.Throwable -> L3c
            okhttp3.internal.Util.closeQuietly(r0)
            monitor-enter(r3)
            r3.publicSuffixListBytes = r1     // Catch: java.lang.Throwable -> L39
            r3.publicSuffixExceptionListBytes = r2     // Catch: java.lang.Throwable -> L39
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L39
            java.util.concurrent.CountDownLatch r0 = r3.readCompleteLatch
            r0.countDown()
            return
        L39:
            r0 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L39
            throw r0
        L3c:
            r1 = move-exception
            okhttp3.internal.Util.closeQuietly(r0)
            throw r1
    }

    private void readTheListUninterruptibly() {
            r5 = this;
            r0 = 0
        L1:
            r5.readTheList()     // Catch: java.lang.Throwable -> Le java.io.IOException -> L10 java.io.InterruptedIOException -> L25
            if (r0 == 0) goto Ld
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            r0.interrupt()
        Ld:
            return
        Le:
            r1 = move-exception
            goto L2a
        L10:
            r1 = move-exception
            okhttp3.internal.platform.Platform r2 = okhttp3.internal.platform.Platform.get()     // Catch: java.lang.Throwable -> Le
            r3 = 5
            java.lang.String r4 = "Failed to read public suffix list"
            r2.log(r3, r4, r1)     // Catch: java.lang.Throwable -> Le
            if (r0 == 0) goto L24
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            r0.interrupt()
        L24:
            return
        L25:
            java.lang.Thread.interrupted()     // Catch: java.lang.Throwable -> Le
            r0 = 1
            goto L1
        L2a:
            if (r0 == 0) goto L33
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            r0.interrupt()
        L33:
            throw r1
    }

    public java.lang.String getEffectiveTldPlusOne(java.lang.String r8) {
            r7 = this;
            if (r8 == 0) goto L58
            java.lang.String r0 = java.net.IDN.toUnicode(r8)
            java.lang.String r1 = "\\."
            java.lang.String[] r0 = r0.split(r1)
            java.lang.String[] r2 = r7.findMatchingRule(r0)
            int r3 = r0.length
            int r4 = r2.length
            r5 = 33
            r6 = 0
            if (r3 != r4) goto L21
            r3 = r2[r6]
            char r3 = r3.charAt(r6)
            if (r3 == r5) goto L21
            r8 = 0
            return r8
        L21:
            r3 = r2[r6]
            char r3 = r3.charAt(r6)
            if (r3 != r5) goto L2c
            int r0 = r0.length
            int r2 = r2.length
            goto L30
        L2c:
            int r0 = r0.length
            int r2 = r2.length
            int r2 = r2 + 1
        L30:
            int r0 = r0 - r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String[] r8 = r8.split(r1)
        L3a:
            int r1 = r8.length
            if (r0 >= r1) goto L4a
            r1 = r8[r0]
            r2.append(r1)
            r1 = 46
            r2.append(r1)
            int r0 = r0 + 1
            goto L3a
        L4a:
            int r8 = r2.length()
            int r8 = r8 + (-1)
            r2.deleteCharAt(r8)
            java.lang.String r8 = r2.toString()
            return r8
        L58:
            java.lang.NullPointerException r8 = new java.lang.NullPointerException
            java.lang.String r0 = "domain == null"
            r8.<init>(r0)
            throw r8
    }

    void setListBytes(byte[] r1, byte[] r2) {
            r0 = this;
            r0.publicSuffixListBytes = r1
            r0.publicSuffixExceptionListBytes = r2
            java.util.concurrent.atomic.AtomicBoolean r1 = r0.listRead
            r2 = 1
            r1.set(r2)
            java.util.concurrent.CountDownLatch r1 = r0.readCompleteLatch
            r1.countDown()
            return
    }
}
