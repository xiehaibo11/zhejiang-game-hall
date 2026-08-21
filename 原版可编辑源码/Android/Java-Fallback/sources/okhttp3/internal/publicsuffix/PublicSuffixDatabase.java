package okhttp3.internal.publicsuffix;

@kotlin.Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0012\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0010\u000e\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0005\u0018\u0000 \u00152\u00020\u0001:\u0001\u0015B\u0005¢\u0006\u0002\u0010\u0002J\u001c\u0010\n\u001a\b\u0012\u0004\u0012\u00020\f0\u000b2\f\u0010\r\u001a\b\u0012\u0004\u0012\u00020\f0\u000bH\u0002J\u0010\u0010\u000e\u001a\u0004\u0018\u00010\f2\u0006\u0010\u000f\u001a\u00020\fJ\b\u0010\u0010\u001a\u00020\u0011H\u0002J\b\u0010\u0012\u001a\u00020\u0011H\u0002J\u0016\u0010\u0013\u001a\u00020\u00112\u0006\u0010\u0007\u001a\u00020\u00062\u0006\u0010\u0005\u001a\u00020\u0006J\u0016\u0010\u0014\u001a\b\u0012\u0004\u0012\u00020\f0\u000b2\u0006\u0010\u000f\u001a\u00020\fH\u0002R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0006X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0016"}, d2 = {"Lokhttp3/internal/publicsuffix/PublicSuffixDatabase;", "", "()V", "listRead", "Ljava/util/concurrent/atomic/AtomicBoolean;", "publicSuffixExceptionListBytes", "", "publicSuffixListBytes", "readCompleteLatch", "Ljava/util/concurrent/CountDownLatch;", "findMatchingRule", "", "", "domainLabels", "getEffectiveTldPlusOne", "domain", "readTheList", "", "readTheListUninterruptibly", "setListBytes", "splitDomain", "Companion", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class PublicSuffixDatabase {
    public static final okhttp3.internal.publicsuffix.PublicSuffixDatabase.Companion Companion = null;
    private static final char EXCEPTION_MARKER = '!';
    private static final java.util.List<java.lang.String> PREVAILING_RULE = null;
    public static final java.lang.String PUBLIC_SUFFIX_RESOURCE = "publicsuffixes.gz";
    private static final byte[] WILDCARD_LABEL = null;
    private static final okhttp3.internal.publicsuffix.PublicSuffixDatabase instance = null;
    private final java.util.concurrent.atomic.AtomicBoolean listRead;
    private byte[] publicSuffixExceptionListBytes;
    private byte[] publicSuffixListBytes;
    private final java.util.concurrent.CountDownLatch readCompleteLatch;

    @kotlin.Metadata(d1 = {"\u0000:\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\f\n\u0000\n\u0002\u0010 \n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\u0012\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u0006\u0010\r\u001a\u00020\fJ)\u0010\u000e\u001a\u0004\u0018\u00010\u0007*\u00020\n2\f\u0010\u000f\u001a\b\u0012\u0004\u0012\u00020\n0\u00102\u0006\u0010\u0011\u001a\u00020\u0012H\u0002¢\u0006\u0002\u0010\u0013R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082T¢\u0006\u0002\n\u0000R\u0014\u0010\u0005\u001a\b\u0012\u0004\u0012\u00020\u00070\u0006X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0007X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\nX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\fX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0014"}, d2 = {"Lokhttp3/internal/publicsuffix/PublicSuffixDatabase$Companion;", "", "()V", "EXCEPTION_MARKER", "", "PREVAILING_RULE", "", "", "PUBLIC_SUFFIX_RESOURCE", "WILDCARD_LABEL", "", "instance", "Lokhttp3/internal/publicsuffix/PublicSuffixDatabase;", "get", "binarySearch", "labels", "", "labelIndex", "", "([B[[BI)Ljava/lang/String;", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
                r0 = this;
                r0.<init>()
                return
        }

        public Companion(kotlin.jvm.internal.DefaultConstructorMarker r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public static final java.lang.String access$binarySearch(okhttp3.internal.publicsuffix.PublicSuffixDatabase.Companion r0, byte[] r1, byte[][] r2, int r3) {
                java.lang.String r0 = r0.binarySearch(r1, r2, r3)
                return r0
        }

        private final java.lang.String binarySearch(byte[] r18, byte[][] r19, int r20) {
                r17 = this;
                r0 = r18
                int r1 = r0.length
                r2 = 0
                r3 = r2
            L5:
                if (r3 >= r1) goto L9b
                int r4 = r3 + r1
                int r4 = r4 / 2
            Lb:
                r5 = 10
                r6 = -1
                if (r4 <= r6) goto L17
                r7 = r0[r4]
                if (r7 == r5) goto L17
                int r4 = r4 + (-1)
                goto Lb
            L17:
                int r4 = r4 + 1
                r7 = 1
                r8 = r7
            L1b:
                int r9 = r4 + r8
                r10 = r0[r9]
                if (r10 == r5) goto L24
                int r8 = r8 + 1
                goto L1b
            L24:
                int r5 = r9 - r4
                r10 = r20
                r8 = r2
                r11 = r8
                r12 = r11
            L2b:
                r13 = 255(0xff, float:3.57E-43)
                if (r8 == 0) goto L33
                r8 = 46
                r14 = r2
                goto L40
            L33:
                r14 = r19[r10]
                r14 = r14[r11]
                int r14 = okhttp3.internal.Util.and(r14, r13)
                r16 = r14
                r14 = r8
                r8 = r16
            L40:
                int r15 = r4 + r12
                r15 = r0[r15]
                int r13 = okhttp3.internal.Util.and(r15, r13)
                int r8 = r8 - r13
                if (r8 == 0) goto L4c
                goto L60
            L4c:
                int r12 = r12 + 1
                int r11 = r11 + 1
                if (r12 != r5) goto L53
                goto L60
            L53:
                r13 = r19[r10]
                int r13 = r13.length
                if (r13 != r11) goto L99
                r13 = r19
                java.lang.Object[] r13 = (java.lang.Object[]) r13
                int r13 = r13.length
                int r13 = r13 - r7
                if (r10 != r13) goto L94
            L60:
                if (r8 >= 0) goto L65
            L62:
                int r1 = r4 + (-1)
                goto L5
            L65:
                if (r8 <= 0) goto L6a
            L67:
                int r3 = r9 + 1
                goto L5
            L6a:
                int r6 = r5 - r12
                r7 = r19[r10]
                int r7 = r7.length
                int r7 = r7 - r11
                int r10 = r10 + 1
                r8 = r19
                java.lang.Object[] r8 = (java.lang.Object[]) r8
                int r8 = r8.length
            L77:
                if (r10 >= r8) goto L81
                int r11 = r10 + 1
                r10 = r19[r10]
                int r10 = r10.length
                int r7 = r7 + r10
                r10 = r11
                goto L77
            L81:
                if (r7 >= r6) goto L84
                goto L62
            L84:
                if (r7 <= r6) goto L87
                goto L67
            L87:
                java.nio.charset.Charset r1 = java.nio.charset.StandardCharsets.UTF_8
                java.lang.String r2 = "UTF_8"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
                java.lang.String r2 = new java.lang.String
                r2.<init>(r0, r4, r5, r1)
                goto L9c
            L94:
                int r10 = r10 + 1
                r11 = r6
                r8 = r7
                goto L2b
            L99:
                r8 = r14
                goto L2b
            L9b:
                r2 = 0
            L9c:
                return r2
        }

        public final okhttp3.internal.publicsuffix.PublicSuffixDatabase get() {
                r1 = this;
                okhttp3.internal.publicsuffix.PublicSuffixDatabase r0 = okhttp3.internal.publicsuffix.PublicSuffixDatabase.access$getInstance$cp()
                return r0
        }
    }

    static {
            okhttp3.internal.publicsuffix.PublicSuffixDatabase$Companion r0 = new okhttp3.internal.publicsuffix.PublicSuffixDatabase$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.internal.publicsuffix.PublicSuffixDatabase.Companion = r0
            r0 = 1
            byte[] r0 = new byte[r0]
            r1 = 0
            r2 = 42
            r0[r1] = r2
            okhttp3.internal.publicsuffix.PublicSuffixDatabase.WILDCARD_LABEL = r0
            java.lang.String r0 = "*"
            java.util.List r0 = kotlin.collections.CollectionsKt.listOf(r0)
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

    public static final okhttp3.internal.publicsuffix.PublicSuffixDatabase access$getInstance$cp() {
            okhttp3.internal.publicsuffix.PublicSuffixDatabase r0 = okhttp3.internal.publicsuffix.PublicSuffixDatabase.instance
            return r0
    }

    private final java.util.List<java.lang.String> findMatchingRule(java.util.List<java.lang.String> r18) {
            r17 = this;
            r0 = r17
            java.util.concurrent.atomic.AtomicBoolean r1 = r0.listRead
            boolean r1 = r1.get()
            r2 = 0
            r3 = 1
            if (r1 != 0) goto L18
            java.util.concurrent.atomic.AtomicBoolean r1 = r0.listRead
            boolean r1 = r1.compareAndSet(r2, r3)
            if (r1 == 0) goto L18
            r17.readTheListUninterruptibly()
            goto L25
        L18:
            java.util.concurrent.CountDownLatch r1 = r0.readCompleteLatch     // Catch: java.lang.InterruptedException -> L1e
            r1.await()     // Catch: java.lang.InterruptedException -> L1e
            goto L25
        L1e:
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            r1.interrupt()
        L25:
            byte[] r1 = r0.publicSuffixListBytes
            if (r1 == 0) goto L2b
            r1 = r3
            goto L2c
        L2b:
            r1 = r2
        L2c:
            if (r1 == 0) goto L11f
            int r1 = r18.size()
            byte[][] r4 = new byte[r1][]
            r5 = r2
        L35:
            if (r5 >= r1) goto L54
            r6 = r18
            java.lang.Object r7 = r6.get(r5)
            java.lang.String r7 = (java.lang.String) r7
            java.nio.charset.Charset r8 = java.nio.charset.StandardCharsets.UTF_8
            java.lang.String r9 = "UTF_8"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r8, r9)
            byte[] r7 = r7.getBytes(r8)
            java.lang.String r8 = "this as java.lang.String).getBytes(charset)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r7, r8)
            r4[r5] = r7
            int r5 = r5 + 1
            goto L35
        L54:
            r1 = r4
            java.lang.Object[] r1 = (java.lang.Object[]) r1
            int r5 = r1.length
            r6 = r2
        L59:
            java.lang.String r7 = "publicSuffixListBytes"
            r8 = 0
            if (r6 >= r5) goto L73
            int r9 = r6 + 1
            okhttp3.internal.publicsuffix.PublicSuffixDatabase$Companion r10 = okhttp3.internal.publicsuffix.PublicSuffixDatabase.Companion
            byte[] r11 = r0.publicSuffixListBytes
            if (r11 != 0) goto L6a
            kotlin.jvm.internal.Intrinsics.throwUninitializedPropertyAccessException(r7)
            r11 = r8
        L6a:
            java.lang.String r6 = okhttp3.internal.publicsuffix.PublicSuffixDatabase.Companion.access$binarySearch(r10, r11, r4, r6)
            if (r6 == 0) goto L71
            goto L74
        L71:
            r6 = r9
            goto L59
        L73:
            r6 = r8
        L74:
            int r5 = r1.length
            if (r5 <= r3) goto L9e
            java.lang.Object r5 = r1.clone()
            byte[][] r5 = (byte[][]) r5
            r9 = r5
            java.lang.Object[] r9 = (java.lang.Object[]) r9
            int r9 = r9.length
            int r9 = r9 - r3
            r10 = r2
        L83:
            if (r10 >= r9) goto L9e
            int r11 = r10 + 1
            byte[] r12 = okhttp3.internal.publicsuffix.PublicSuffixDatabase.WILDCARD_LABEL
            r5[r10] = r12
            okhttp3.internal.publicsuffix.PublicSuffixDatabase$Companion r12 = okhttp3.internal.publicsuffix.PublicSuffixDatabase.Companion
            byte[] r13 = r0.publicSuffixListBytes
            if (r13 != 0) goto L95
            kotlin.jvm.internal.Intrinsics.throwUninitializedPropertyAccessException(r7)
            r13 = r8
        L95:
            java.lang.String r10 = okhttp3.internal.publicsuffix.PublicSuffixDatabase.Companion.access$binarySearch(r12, r13, r5, r10)
            if (r10 == 0) goto L9c
            goto L9f
        L9c:
            r10 = r11
            goto L83
        L9e:
            r10 = r8
        L9f:
            if (r10 == 0) goto Lbd
            int r1 = r1.length
            int r1 = r1 - r3
            r5 = r2
        La4:
            if (r5 >= r1) goto Lbd
            int r7 = r5 + 1
            okhttp3.internal.publicsuffix.PublicSuffixDatabase$Companion r9 = okhttp3.internal.publicsuffix.PublicSuffixDatabase.Companion
            byte[] r11 = r0.publicSuffixExceptionListBytes
            if (r11 != 0) goto Lb4
            java.lang.String r11 = "publicSuffixExceptionListBytes"
            kotlin.jvm.internal.Intrinsics.throwUninitializedPropertyAccessException(r11)
            r11 = r8
        Lb4:
            java.lang.String r5 = okhttp3.internal.publicsuffix.PublicSuffixDatabase.Companion.access$binarySearch(r9, r11, r4, r5)
            if (r5 == 0) goto Lbb
            goto Lbe
        Lbb:
            r5 = r7
            goto La4
        Lbd:
            r5 = r8
        Lbe:
            r1 = 46
            if (r5 == 0) goto Ld8
            java.lang.String r4 = "!"
            java.lang.String r4 = kotlin.jvm.internal.Intrinsics.stringPlus(r4, r5)
            r5 = r4
            java.lang.CharSequence r5 = (java.lang.CharSequence) r5
            char[] r6 = new char[r3]
            r6[r2] = r1
            r7 = 0
            r8 = 0
            r9 = 6
            r10 = 0
            java.util.List r1 = kotlin.text.StringsKt.split$default(r5, r6, r7, r8, r9, r10)
            return r1
        Ld8:
            if (r6 != 0) goto Ldf
            if (r10 != 0) goto Ldf
            java.util.List<java.lang.String> r1 = okhttp3.internal.publicsuffix.PublicSuffixDatabase.PREVAILING_RULE
            return r1
        Ldf:
            if (r6 != 0) goto Le3
            r4 = r8
            goto Lf3
        Le3:
            r11 = r6
            java.lang.CharSequence r11 = (java.lang.CharSequence) r11
            char[] r12 = new char[r3]
            r12[r2] = r1
            r13 = 0
            r14 = 0
            r15 = 6
            r16 = 0
            java.util.List r4 = kotlin.text.StringsKt.split$default(r11, r12, r13, r14, r15, r16)
        Lf3:
            if (r4 != 0) goto Lf9
            java.util.List r4 = kotlin.collections.CollectionsKt.emptyList()
        Lf9:
            if (r10 != 0) goto Lfc
            goto L10c
        Lfc:
            r11 = r10
            java.lang.CharSequence r11 = (java.lang.CharSequence) r11
            char[] r12 = new char[r3]
            r12[r2] = r1
            r13 = 0
            r14 = 0
            r15 = 6
            r16 = 0
            java.util.List r8 = kotlin.text.StringsKt.split$default(r11, r12, r13, r14, r15, r16)
        L10c:
            if (r8 != 0) goto L112
            java.util.List r8 = kotlin.collections.CollectionsKt.emptyList()
        L112:
            int r1 = r4.size()
            int r2 = r8.size()
            if (r1 <= r2) goto L11d
            goto L11e
        L11d:
            r4 = r8
        L11e:
            return r4
        L11f:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "Unable to load publicsuffixes.gz resource from the classpath."
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
    }

    private final void readTheList() throws java.io.IOException {
            r6 = this;
            java.lang.Class<okhttp3.internal.publicsuffix.PublicSuffixDatabase> r0 = okhttp3.internal.publicsuffix.PublicSuffixDatabase.class
            java.lang.String r1 = "publicsuffixes.gz"
            java.io.InputStream r0 = r0.getResourceAsStream(r1)
            if (r0 != 0) goto Lb
            return
        Lb:
            okio.GzipSource r1 = new okio.GzipSource
            okio.Source r0 = okio.Okio.source(r0)
            r1.<init>(r0)
            okio.Source r1 = (okio.Source) r1
            okio.BufferedSource r0 = okio.Okio.buffer(r1)
            java.io.Closeable r0 = (java.io.Closeable) r0
            r1 = 0
            r2 = r0
            okio.BufferedSource r2 = (okio.BufferedSource) r2     // Catch: java.lang.Throwable -> L4e
            int r3 = r2.readInt()     // Catch: java.lang.Throwable -> L4e
            long r3 = (long) r3     // Catch: java.lang.Throwable -> L4e
            byte[] r3 = r2.readByteArray(r3)     // Catch: java.lang.Throwable -> L4e
            int r4 = r2.readInt()     // Catch: java.lang.Throwable -> L4e
            long r4 = (long) r4     // Catch: java.lang.Throwable -> L4e
            byte[] r2 = r2.readByteArray(r4)     // Catch: java.lang.Throwable -> L4e
            kotlin.Unit r4 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L4e
            kotlin.io.CloseableKt.closeFinally(r0, r1)
            monitor-enter(r6)
            kotlin.jvm.internal.Intrinsics.checkNotNull(r3)     // Catch: java.lang.Throwable -> L4b
            r6.publicSuffixListBytes = r3     // Catch: java.lang.Throwable -> L4b
            kotlin.jvm.internal.Intrinsics.checkNotNull(r2)     // Catch: java.lang.Throwable -> L4b
            r6.publicSuffixExceptionListBytes = r2     // Catch: java.lang.Throwable -> L4b
            kotlin.Unit r0 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L4b
            monitor-exit(r6)
            java.util.concurrent.CountDownLatch r0 = r6.readCompleteLatch
            r0.countDown()
            return
        L4b:
            r0 = move-exception
            monitor-exit(r6)
            throw r0
        L4e:
            r1 = move-exception
            throw r1     // Catch: java.lang.Throwable -> L50
        L50:
            r2 = move-exception
            kotlin.io.CloseableKt.closeFinally(r0, r1)
            throw r2
    }

    private final void readTheListUninterruptibly() {
            r5 = this;
            r0 = 0
        L1:
            r5.readTheList()     // Catch: java.lang.Throwable -> Le java.io.IOException -> L10 java.io.InterruptedIOException -> L29
            if (r0 == 0) goto Ld
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            r0.interrupt()
        Ld:
            return
        Le:
            r1 = move-exception
            goto L2e
        L10:
            r1 = move-exception
            okhttp3.internal.platform.Platform$Companion r2 = okhttp3.internal.platform.Platform.Companion     // Catch: java.lang.Throwable -> Le
            okhttp3.internal.platform.Platform r2 = r2.get()     // Catch: java.lang.Throwable -> Le
            java.lang.String r3 = "Failed to read public suffix list"
            r4 = 5
            java.lang.Throwable r1 = (java.lang.Throwable) r1     // Catch: java.lang.Throwable -> Le
            r2.log(r3, r4, r1)     // Catch: java.lang.Throwable -> Le
            if (r0 == 0) goto L28
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            r0.interrupt()
        L28:
            return
        L29:
            java.lang.Thread.interrupted()     // Catch: java.lang.Throwable -> Le
            r0 = 1
            goto L1
        L2e:
            if (r0 == 0) goto L37
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            r0.interrupt()
        L37:
            throw r1
    }

    private final java.util.List<java.lang.String> splitDomain(java.lang.String r7) {
            r6 = this;
            r0 = r7
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            r7 = 1
            char[] r1 = new char[r7]
            r2 = 0
            r3 = 46
            r1[r2] = r3
            r3 = 0
            r4 = 6
            r5 = 0
            java.util.List r0 = kotlin.text.StringsKt.split$default(r0, r1, r2, r3, r4, r5)
            java.lang.Object r1 = kotlin.collections.CollectionsKt.last(r0)
            java.lang.String r2 = ""
            boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r1, r2)
            if (r1 == 0) goto L23
            java.util.List r7 = kotlin.collections.CollectionsKt.dropLast(r0, r7)
            return r7
        L23:
            return r0
    }

    public final java.lang.String getEffectiveTldPlusOne(java.lang.String r11) {
            r10 = this;
            java.lang.String r0 = "domain"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r11, r0)
            java.lang.String r0 = java.net.IDN.toUnicode(r11)
            java.lang.String r1 = "unicodeDomain"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            java.util.List r0 = r10.splitDomain(r0)
            java.util.List r1 = r10.findMatchingRule(r0)
            int r2 = r0.size()
            int r3 = r1.size()
            r4 = 33
            r5 = 0
            if (r2 != r3) goto L31
            java.lang.Object r2 = r1.get(r5)
            java.lang.String r2 = (java.lang.String) r2
            char r2 = r2.charAt(r5)
            if (r2 == r4) goto L31
            r11 = 0
            return r11
        L31:
            java.lang.Object r2 = r1.get(r5)
            java.lang.String r2 = (java.lang.String) r2
            char r2 = r2.charAt(r5)
            if (r2 != r4) goto L46
            int r0 = r0.size()
            int r1 = r1.size()
            goto L50
        L46:
            int r0 = r0.size()
            int r1 = r1.size()
            int r1 = r1 + 1
        L50:
            int r0 = r0 - r1
            java.util.List r11 = r10.splitDomain(r11)
            java.lang.Iterable r11 = (java.lang.Iterable) r11
            kotlin.sequences.Sequence r11 = kotlin.collections.CollectionsKt.asSequence(r11)
            kotlin.sequences.Sequence r1 = kotlin.sequences.SequencesKt.drop(r11, r0)
            java.lang.String r11 = "."
            r2 = r11
            java.lang.CharSequence r2 = (java.lang.CharSequence) r2
            r3 = 0
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 62
            r9 = 0
            java.lang.String r11 = kotlin.sequences.SequencesKt.joinToString$default(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            return r11
    }

    public final void setListBytes(byte[] r2, byte[] r3) {
            r1 = this;
            java.lang.String r0 = "publicSuffixListBytes"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "publicSuffixExceptionListBytes"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r1.publicSuffixListBytes = r2
            r1.publicSuffixExceptionListBytes = r3
            java.util.concurrent.atomic.AtomicBoolean r2 = r1.listRead
            r3 = 1
            r2.set(r3)
            java.util.concurrent.CountDownLatch r2 = r1.readCompleteLatch
            r2.countDown()
            return
    }
}
