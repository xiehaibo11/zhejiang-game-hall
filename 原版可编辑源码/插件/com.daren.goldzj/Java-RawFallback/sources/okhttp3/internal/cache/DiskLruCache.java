package okhttp3.internal.cache;

public final class DiskLruCache implements java.io.Closeable, java.io.Flushable {
    static final boolean $assertionsDisabled = false;
    static final long ANY_SEQUENCE_NUMBER = -1;
    private static final java.lang.String CLEAN = "CLEAN";
    private static final java.lang.String DIRTY = "DIRTY";
    static final java.lang.String JOURNAL_FILE = "journal";
    static final java.lang.String JOURNAL_FILE_BACKUP = "journal.bkp";
    static final java.lang.String JOURNAL_FILE_TEMP = "journal.tmp";
    static final java.util.regex.Pattern LEGAL_KEY_PATTERN = null;
    static final java.lang.String MAGIC = "libcore.io.DiskLruCache";
    private static final java.lang.String READ = "READ";
    private static final java.lang.String REMOVE = "REMOVE";
    static final java.lang.String VERSION_1 = "1";
    private final int appVersion;
    private final java.lang.Runnable cleanupRunnable;
    boolean closed;
    final java.io.File directory;
    private final java.util.concurrent.Executor executor;
    final okhttp3.internal.io.FileSystem fileSystem;
    boolean hasJournalErrors;
    boolean initialized;
    private final java.io.File journalFile;
    private final java.io.File journalFileBackup;
    private final java.io.File journalFileTmp;
    okio.BufferedSink journalWriter;
    final java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache.Entry> lruEntries;
    private long maxSize;
    boolean mostRecentRebuildFailed;
    boolean mostRecentTrimFailed;
    private long nextSequenceNumber;
    int redundantOpCount;
    private long size;
    final int valueCount;




    public final class Editor {
        private boolean done;
        final okhttp3.internal.cache.DiskLruCache.Entry entry;
        final okhttp3.internal.cache.DiskLruCache this$0;
        final boolean[] written;


        Editor(okhttp3.internal.cache.DiskLruCache r1, okhttp3.internal.cache.DiskLruCache.Entry r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.entry = r2
                boolean r2 = r2.readable
                if (r2 == 0) goto Ld
                r1 = 0
                goto L11
            Ld:
                int r1 = r1.valueCount
                boolean[] r1 = new boolean[r1]
            L11:
                r0.written = r1
                return
        }

        public void abort() throws java.io.IOException {
                r3 = this;
                okhttp3.internal.cache.DiskLruCache r0 = r3.this$0
                monitor-enter(r0)
                boolean r1 = r3.done     // Catch: java.lang.Throwable -> L1e
                if (r1 != 0) goto L18
                okhttp3.internal.cache.DiskLruCache$Entry r1 = r3.entry     // Catch: java.lang.Throwable -> L1e
                okhttp3.internal.cache.DiskLruCache$Editor r1 = r1.currentEditor     // Catch: java.lang.Throwable -> L1e
                if (r1 != r3) goto L13
                okhttp3.internal.cache.DiskLruCache r1 = r3.this$0     // Catch: java.lang.Throwable -> L1e
                r2 = 0
                r1.completeEdit(r3, r2)     // Catch: java.lang.Throwable -> L1e
            L13:
                r1 = 1
                r3.done = r1     // Catch: java.lang.Throwable -> L1e
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
                return
            L18:
                java.lang.IllegalStateException r1 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L1e
                r1.<init>()     // Catch: java.lang.Throwable -> L1e
                throw r1     // Catch: java.lang.Throwable -> L1e
            L1e:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
                throw r1
        }

        public void abortUnlessCommitted() {
                r3 = this;
                okhttp3.internal.cache.DiskLruCache r0 = r3.this$0
                monitor-enter(r0)
                boolean r1 = r3.done     // Catch: java.lang.Throwable -> L15
                if (r1 != 0) goto L13
                okhttp3.internal.cache.DiskLruCache$Entry r1 = r3.entry     // Catch: java.lang.Throwable -> L15
                okhttp3.internal.cache.DiskLruCache$Editor r1 = r1.currentEditor     // Catch: java.lang.Throwable -> L15
                if (r1 != r3) goto L13
                okhttp3.internal.cache.DiskLruCache r1 = r3.this$0     // Catch: java.io.IOException -> L13 java.lang.Throwable -> L15
                r2 = 0
                r1.completeEdit(r3, r2)     // Catch: java.io.IOException -> L13 java.lang.Throwable -> L15
            L13:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
                return
            L15:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
                throw r1
        }

        public void commit() throws java.io.IOException {
                r3 = this;
                okhttp3.internal.cache.DiskLruCache r0 = r3.this$0
                monitor-enter(r0)
                boolean r1 = r3.done     // Catch: java.lang.Throwable -> L1d
                if (r1 != 0) goto L17
                okhttp3.internal.cache.DiskLruCache$Entry r1 = r3.entry     // Catch: java.lang.Throwable -> L1d
                okhttp3.internal.cache.DiskLruCache$Editor r1 = r1.currentEditor     // Catch: java.lang.Throwable -> L1d
                r2 = 1
                if (r1 != r3) goto L13
                okhttp3.internal.cache.DiskLruCache r1 = r3.this$0     // Catch: java.lang.Throwable -> L1d
                r1.completeEdit(r3, r2)     // Catch: java.lang.Throwable -> L1d
            L13:
                r3.done = r2     // Catch: java.lang.Throwable -> L1d
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L1d
                return
            L17:
                java.lang.IllegalStateException r1 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L1d
                r1.<init>()     // Catch: java.lang.Throwable -> L1d
                throw r1     // Catch: java.lang.Throwable -> L1d
            L1d:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L1d
                throw r1
        }

        void detach() {
                r3 = this;
                okhttp3.internal.cache.DiskLruCache$Entry r0 = r3.entry
                okhttp3.internal.cache.DiskLruCache$Editor r0 = r0.currentEditor
                if (r0 != r3) goto L22
                r0 = 0
            L7:
                okhttp3.internal.cache.DiskLruCache r1 = r3.this$0
                int r1 = r1.valueCount
                if (r0 >= r1) goto L1d
                okhttp3.internal.cache.DiskLruCache r1 = r3.this$0     // Catch: java.io.IOException -> L1a
                okhttp3.internal.io.FileSystem r1 = r1.fileSystem     // Catch: java.io.IOException -> L1a
                okhttp3.internal.cache.DiskLruCache$Entry r2 = r3.entry     // Catch: java.io.IOException -> L1a
                java.io.File[] r2 = r2.dirtyFiles     // Catch: java.io.IOException -> L1a
                r2 = r2[r0]     // Catch: java.io.IOException -> L1a
                r1.delete(r2)     // Catch: java.io.IOException -> L1a
            L1a:
                int r0 = r0 + 1
                goto L7
            L1d:
                okhttp3.internal.cache.DiskLruCache$Entry r0 = r3.entry
                r1 = 0
                r0.currentEditor = r1
            L22:
                return
        }

        public okio.Sink newSink(int r4) {
                r3 = this;
                okhttp3.internal.cache.DiskLruCache r0 = r3.this$0
                monitor-enter(r0)
                boolean r1 = r3.done     // Catch: java.lang.Throwable -> L3f
                if (r1 != 0) goto L39
                okhttp3.internal.cache.DiskLruCache$Entry r1 = r3.entry     // Catch: java.lang.Throwable -> L3f
                okhttp3.internal.cache.DiskLruCache$Editor r1 = r1.currentEditor     // Catch: java.lang.Throwable -> L3f
                if (r1 == r3) goto L13
                okio.Sink r4 = okio.Okio.blackhole()     // Catch: java.lang.Throwable -> L3f
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L3f
                return r4
            L13:
                okhttp3.internal.cache.DiskLruCache$Entry r1 = r3.entry     // Catch: java.lang.Throwable -> L3f
                boolean r1 = r1.readable     // Catch: java.lang.Throwable -> L3f
                if (r1 != 0) goto L1e
                boolean[] r1 = r3.written     // Catch: java.lang.Throwable -> L3f
                r2 = 1
                r1[r4] = r2     // Catch: java.lang.Throwable -> L3f
            L1e:
                okhttp3.internal.cache.DiskLruCache$Entry r1 = r3.entry     // Catch: java.lang.Throwable -> L3f
                java.io.File[] r1 = r1.dirtyFiles     // Catch: java.lang.Throwable -> L3f
                r4 = r1[r4]     // Catch: java.lang.Throwable -> L3f
                okhttp3.internal.cache.DiskLruCache r1 = r3.this$0     // Catch: java.io.FileNotFoundException -> L33 java.lang.Throwable -> L3f
                okhttp3.internal.io.FileSystem r1 = r1.fileSystem     // Catch: java.io.FileNotFoundException -> L33 java.lang.Throwable -> L3f
                okio.Sink r4 = r1.sink(r4)     // Catch: java.io.FileNotFoundException -> L33 java.lang.Throwable -> L3f
                okhttp3.internal.cache.DiskLruCache$Editor$1 r1 = new okhttp3.internal.cache.DiskLruCache$Editor$1     // Catch: java.lang.Throwable -> L3f
                r1.<init>(r3, r4)     // Catch: java.lang.Throwable -> L3f
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L3f
                return r1
            L33:
                okio.Sink r4 = okio.Okio.blackhole()     // Catch: java.lang.Throwable -> L3f
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L3f
                return r4
            L39:
                java.lang.IllegalStateException r4 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L3f
                r4.<init>()     // Catch: java.lang.Throwable -> L3f
                throw r4     // Catch: java.lang.Throwable -> L3f
            L3f:
                r4 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L3f
                throw r4
        }

        public okio.Source newSource(int r5) {
                r4 = this;
                okhttp3.internal.cache.DiskLruCache r0 = r4.this$0
                monitor-enter(r0)
                boolean r1 = r4.done     // Catch: java.lang.Throwable -> L2f
                if (r1 != 0) goto L29
                okhttp3.internal.cache.DiskLruCache$Entry r1 = r4.entry     // Catch: java.lang.Throwable -> L2f
                boolean r1 = r1.readable     // Catch: java.lang.Throwable -> L2f
                r2 = 0
                if (r1 == 0) goto L27
                okhttp3.internal.cache.DiskLruCache$Entry r1 = r4.entry     // Catch: java.lang.Throwable -> L2f
                okhttp3.internal.cache.DiskLruCache$Editor r1 = r1.currentEditor     // Catch: java.lang.Throwable -> L2f
                if (r1 == r4) goto L15
                goto L27
            L15:
                okhttp3.internal.cache.DiskLruCache r1 = r4.this$0     // Catch: java.io.FileNotFoundException -> L25 java.lang.Throwable -> L2f
                okhttp3.internal.io.FileSystem r1 = r1.fileSystem     // Catch: java.io.FileNotFoundException -> L25 java.lang.Throwable -> L2f
                okhttp3.internal.cache.DiskLruCache$Entry r3 = r4.entry     // Catch: java.io.FileNotFoundException -> L25 java.lang.Throwable -> L2f
                java.io.File[] r3 = r3.cleanFiles     // Catch: java.io.FileNotFoundException -> L25 java.lang.Throwable -> L2f
                r5 = r3[r5]     // Catch: java.io.FileNotFoundException -> L25 java.lang.Throwable -> L2f
                okio.Source r5 = r1.source(r5)     // Catch: java.io.FileNotFoundException -> L25 java.lang.Throwable -> L2f
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L2f
                return r5
            L25:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L2f
                return r2
            L27:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L2f
                return r2
            L29:
                java.lang.IllegalStateException r5 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L2f
                r5.<init>()     // Catch: java.lang.Throwable -> L2f
                throw r5     // Catch: java.lang.Throwable -> L2f
            L2f:
                r5 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L2f
                throw r5
        }
    }

    private final class Entry {
        final java.io.File[] cleanFiles;
        okhttp3.internal.cache.DiskLruCache.Editor currentEditor;
        final java.io.File[] dirtyFiles;
        final java.lang.String key;
        final long[] lengths;
        boolean readable;
        long sequenceNumber;
        final okhttp3.internal.cache.DiskLruCache this$0;

        Entry(okhttp3.internal.cache.DiskLruCache r7, java.lang.String r8) {
                r6 = this;
                r6.this$0 = r7
                r6.<init>()
                r6.key = r8
                int r0 = r7.valueCount
                long[] r0 = new long[r0]
                r6.lengths = r0
                int r0 = r7.valueCount
                java.io.File[] r0 = new java.io.File[r0]
                r6.cleanFiles = r0
                int r0 = r7.valueCount
                java.io.File[] r0 = new java.io.File[r0]
                r6.dirtyFiles = r0
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>(r8)
                r8 = 46
                r0.append(r8)
                int r8 = r0.length()
                r1 = 0
            L28:
                int r2 = r7.valueCount
                if (r1 >= r2) goto L58
                r0.append(r1)
                java.io.File[] r2 = r6.cleanFiles
                java.io.File r3 = new java.io.File
                java.io.File r4 = r7.directory
                java.lang.String r5 = r0.toString()
                r3.<init>(r4, r5)
                r2[r1] = r3
                java.lang.String r2 = ".tmp"
                r0.append(r2)
                java.io.File[] r2 = r6.dirtyFiles
                java.io.File r3 = new java.io.File
                java.io.File r4 = r7.directory
                java.lang.String r5 = r0.toString()
                r3.<init>(r4, r5)
                r2[r1] = r3
                r0.setLength(r8)
                int r1 = r1 + 1
                goto L28
            L58:
                return
        }

        private java.io.IOException invalidLengths(java.lang.String[] r4) throws java.io.IOException {
                r3 = this;
                java.io.IOException r0 = new java.io.IOException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "unexpected journal line: "
                r1.append(r2)
                java.lang.String r4 = java.util.Arrays.toString(r4)
                r1.append(r4)
                java.lang.String r4 = r1.toString()
                r0.<init>(r4)
                throw r0
        }

        void setLengths(java.lang.String[] r5) throws java.io.IOException {
                r4 = this;
                int r0 = r5.length
                okhttp3.internal.cache.DiskLruCache r1 = r4.this$0
                int r1 = r1.valueCount
                if (r0 != r1) goto L1e
                r0 = 0
            L8:
                int r1 = r5.length     // Catch: java.lang.NumberFormatException -> L19
                if (r0 >= r1) goto L18
                long[] r1 = r4.lengths     // Catch: java.lang.NumberFormatException -> L19
                r2 = r5[r0]     // Catch: java.lang.NumberFormatException -> L19
                long r2 = java.lang.Long.parseLong(r2)     // Catch: java.lang.NumberFormatException -> L19
                r1[r0] = r2     // Catch: java.lang.NumberFormatException -> L19
                int r0 = r0 + 1
                goto L8
            L18:
                return
            L19:
                java.io.IOException r5 = r4.invalidLengths(r5)
                throw r5
            L1e:
                java.io.IOException r5 = r4.invalidLengths(r5)
                throw r5
        }

        okhttp3.internal.cache.DiskLruCache.Snapshot snapshot() {
                r10 = this;
                okhttp3.internal.cache.DiskLruCache r0 = r10.this$0
                boolean r0 = java.lang.Thread.holdsLock(r0)
                if (r0 == 0) goto L57
                okhttp3.internal.cache.DiskLruCache r0 = r10.this$0
                int r0 = r0.valueCount
                okio.Source[] r0 = new okio.Source[r0]
                long[] r1 = r10.lengths
                java.lang.Object r1 = r1.clone()
                r7 = r1
                long[] r7 = (long[]) r7
                r8 = 0
                r1 = 0
            L19:
                okhttp3.internal.cache.DiskLruCache r2 = r10.this$0     // Catch: java.io.FileNotFoundException -> L3e
                int r2 = r2.valueCount     // Catch: java.io.FileNotFoundException -> L3e
                if (r1 >= r2) goto L30
                okhttp3.internal.cache.DiskLruCache r2 = r10.this$0     // Catch: java.io.FileNotFoundException -> L3e
                okhttp3.internal.io.FileSystem r2 = r2.fileSystem     // Catch: java.io.FileNotFoundException -> L3e
                java.io.File[] r3 = r10.cleanFiles     // Catch: java.io.FileNotFoundException -> L3e
                r3 = r3[r1]     // Catch: java.io.FileNotFoundException -> L3e
                okio.Source r2 = r2.source(r3)     // Catch: java.io.FileNotFoundException -> L3e
                r0[r1] = r2     // Catch: java.io.FileNotFoundException -> L3e
                int r1 = r1 + 1
                goto L19
            L30:
                okhttp3.internal.cache.DiskLruCache$Snapshot r9 = new okhttp3.internal.cache.DiskLruCache$Snapshot     // Catch: java.io.FileNotFoundException -> L3e
                okhttp3.internal.cache.DiskLruCache r2 = r10.this$0     // Catch: java.io.FileNotFoundException -> L3e
                java.lang.String r3 = r10.key     // Catch: java.io.FileNotFoundException -> L3e
                long r4 = r10.sequenceNumber     // Catch: java.io.FileNotFoundException -> L3e
                r1 = r9
                r6 = r0
                r1.<init>(r2, r3, r4, r6, r7)     // Catch: java.io.FileNotFoundException -> L3e
                return r9
            L3e:
                okhttp3.internal.cache.DiskLruCache r1 = r10.this$0
                int r1 = r1.valueCount
                if (r8 >= r1) goto L50
                r1 = r0[r8]
                if (r1 == 0) goto L50
                r1 = r0[r8]
                okhttp3.internal.Util.closeQuietly(r1)
                int r8 = r8 + 1
                goto L3e
            L50:
                okhttp3.internal.cache.DiskLruCache r0 = r10.this$0     // Catch: java.io.IOException -> L55
                r0.removeEntry(r10)     // Catch: java.io.IOException -> L55
            L55:
                r0 = 0
                return r0
            L57:
                java.lang.AssertionError r0 = new java.lang.AssertionError
                r0.<init>()
                throw r0
        }

        void writeLengths(okio.BufferedSink r7) throws java.io.IOException {
                r6 = this;
                long[] r0 = r6.lengths
                int r1 = r0.length
                r2 = 0
            L4:
                if (r2 >= r1) goto L14
                r3 = r0[r2]
                r5 = 32
                okio.BufferedSink r5 = r7.writeByte(r5)
                r5.writeDecimalLong(r3)
                int r2 = r2 + 1
                goto L4
            L14:
                return
        }
    }

    public final class Snapshot implements java.io.Closeable {
        private final java.lang.String key;
        private final long[] lengths;
        private final long sequenceNumber;
        private final okio.Source[] sources;
        final okhttp3.internal.cache.DiskLruCache this$0;

        Snapshot(okhttp3.internal.cache.DiskLruCache r1, java.lang.String r2, long r3, okio.Source[] r5, long[] r6) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.key = r2
                r0.sequenceNumber = r3
                r0.sources = r5
                r0.lengths = r6
                return
        }

        static java.lang.String access$000(okhttp3.internal.cache.DiskLruCache.Snapshot r0) {
                java.lang.String r0 = r0.key
                return r0
        }

        @Override
        public void close() {
                r4 = this;
                okio.Source[] r0 = r4.sources
                int r1 = r0.length
                r2 = 0
            L4:
                if (r2 >= r1) goto Le
                r3 = r0[r2]
                okhttp3.internal.Util.closeQuietly(r3)
                int r2 = r2 + 1
                goto L4
            Le:
                return
        }

        @javax.annotation.Nullable
        public okhttp3.internal.cache.DiskLruCache.Editor edit() throws java.io.IOException {
                r4 = this;
                okhttp3.internal.cache.DiskLruCache r0 = r4.this$0
                java.lang.String r1 = r4.key
                long r2 = r4.sequenceNumber
                okhttp3.internal.cache.DiskLruCache$Editor r0 = r0.edit(r1, r2)
                return r0
        }

        public long getLength(int r4) {
                r3 = this;
                long[] r0 = r3.lengths
                r1 = r0[r4]
                return r1
        }

        public okio.Source getSource(int r2) {
                r1 = this;
                okio.Source[] r0 = r1.sources
                r2 = r0[r2]
                return r2
        }

        public java.lang.String key() {
                r1 = this;
                java.lang.String r0 = r1.key
                return r0
        }
    }

    static {
            java.lang.String r0 = "[a-z0-9_-]{1,120}"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            okhttp3.internal.cache.DiskLruCache.LEGAL_KEY_PATTERN = r0
            return
    }

    DiskLruCache(okhttp3.internal.io.FileSystem r7, java.io.File r8, int r9, int r10, long r11, java.util.concurrent.Executor r13) {
            r6 = this;
            r6.<init>()
            r0 = 0
            r6.size = r0
            java.util.LinkedHashMap r2 = new java.util.LinkedHashMap
            r3 = 0
            r4 = 1061158912(0x3f400000, float:0.75)
            r5 = 1
            r2.<init>(r3, r4, r5)
            r6.lruEntries = r2
            r6.nextSequenceNumber = r0
            okhttp3.internal.cache.DiskLruCache$1 r0 = new okhttp3.internal.cache.DiskLruCache$1
            r0.<init>(r6)
            r6.cleanupRunnable = r0
            r6.fileSystem = r7
            r6.directory = r8
            r6.appVersion = r9
            java.io.File r7 = new java.io.File
            java.lang.String r9 = "journal"
            r7.<init>(r8, r9)
            r6.journalFile = r7
            java.io.File r7 = new java.io.File
            java.lang.String r9 = "journal.tmp"
            r7.<init>(r8, r9)
            r6.journalFileTmp = r7
            java.io.File r7 = new java.io.File
            java.lang.String r9 = "journal.bkp"
            r7.<init>(r8, r9)
            r6.journalFileBackup = r7
            r6.valueCount = r10
            r6.maxSize = r11
            r6.executor = r13
            return
    }

    private synchronized void checkNotClosed() {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.isClosed()     // Catch: java.lang.Throwable -> L11
            if (r0 != 0) goto L9
            monitor-exit(r2)
            return
        L9:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L11
            java.lang.String r1 = "cache is closed"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L11
            throw r0     // Catch: java.lang.Throwable -> L11
        L11:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public static okhttp3.internal.cache.DiskLruCache create(okhttp3.internal.io.FileSystem r10, java.io.File r11, int r12, int r13, long r14) {
            r0 = 0
            int r2 = (r14 > r0 ? 1 : (r14 == r0 ? 0 : -1))
            if (r2 <= 0) goto L34
            if (r13 <= 0) goto L2c
            java.util.concurrent.ThreadPoolExecutor r9 = new java.util.concurrent.ThreadPoolExecutor
            r1 = 0
            r2 = 1
            r3 = 60
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingQueue r6 = new java.util.concurrent.LinkedBlockingQueue
            r6.<init>()
            r0 = 1
            java.lang.String r7 = "OkHttp DiskLruCache"
            java.util.concurrent.ThreadFactory r7 = okhttp3.internal.Util.threadFactory(r7, r0)
            r0 = r9
            r0.<init>(r1, r2, r3, r5, r6, r7)
            okhttp3.internal.cache.DiskLruCache r0 = new okhttp3.internal.cache.DiskLruCache
            r2 = r0
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r7 = r14
            r2.<init>(r3, r4, r5, r6, r7, r9)
            return r0
        L2c:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "valueCount <= 0"
            r0.<init>(r1)
            throw r0
        L34:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "maxSize <= 0"
            r0.<init>(r1)
            throw r0
    }

    private okio.BufferedSink newJournalWriter() throws java.io.FileNotFoundException {
            r2 = this;
            okhttp3.internal.io.FileSystem r0 = r2.fileSystem
            java.io.File r1 = r2.journalFile
            okio.Sink r0 = r0.appendingSink(r1)
            okhttp3.internal.cache.DiskLruCache$2 r1 = new okhttp3.internal.cache.DiskLruCache$2
            r1.<init>(r2, r0)
            okio.BufferedSink r0 = okio.Okio.buffer(r1)
            return r0
    }

    private void processJournal() throws java.io.IOException {
            r8 = this;
            okhttp3.internal.io.FileSystem r0 = r8.fileSystem
            java.io.File r1 = r8.journalFileTmp
            r0.delete(r1)
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r0 = r8.lruEntries
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        L11:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L52
            java.lang.Object r1 = r0.next()
            okhttp3.internal.cache.DiskLruCache$Entry r1 = (okhttp3.internal.cache.DiskLruCache.Entry) r1
            okhttp3.internal.cache.DiskLruCache$Editor r2 = r1.currentEditor
            r3 = 0
            if (r2 != 0) goto L32
        L22:
            int r2 = r8.valueCount
            if (r3 >= r2) goto L11
            long r4 = r8.size
            long[] r2 = r1.lengths
            r6 = r2[r3]
            long r4 = r4 + r6
            r8.size = r4
            int r3 = r3 + 1
            goto L22
        L32:
            r2 = 0
            r1.currentEditor = r2
        L35:
            int r2 = r8.valueCount
            if (r3 >= r2) goto L4e
            okhttp3.internal.io.FileSystem r2 = r8.fileSystem
            java.io.File[] r4 = r1.cleanFiles
            r4 = r4[r3]
            r2.delete(r4)
            okhttp3.internal.io.FileSystem r2 = r8.fileSystem
            java.io.File[] r4 = r1.dirtyFiles
            r4 = r4[r3]
            r2.delete(r4)
            int r3 = r3 + 1
            goto L35
        L4e:
            r0.remove()
            goto L11
        L52:
            return
    }

    private void readJournal() throws java.io.IOException {
            r9 = this;
            java.lang.String r0 = ", "
            okhttp3.internal.io.FileSystem r1 = r9.fileSystem
            java.io.File r2 = r9.journalFile
            okio.Source r1 = r1.source(r2)
            okio.BufferedSource r1 = okio.Okio.buffer(r1)
            java.lang.String r2 = r1.readUtf8LineStrict()     // Catch: java.lang.Throwable -> La8
            java.lang.String r3 = r1.readUtf8LineStrict()     // Catch: java.lang.Throwable -> La8
            java.lang.String r4 = r1.readUtf8LineStrict()     // Catch: java.lang.Throwable -> La8
            java.lang.String r5 = r1.readUtf8LineStrict()     // Catch: java.lang.Throwable -> La8
            java.lang.String r6 = r1.readUtf8LineStrict()     // Catch: java.lang.Throwable -> La8
            java.lang.String r7 = "libcore.io.DiskLruCache"
            boolean r7 = r7.equals(r2)     // Catch: java.lang.Throwable -> La8
            if (r7 == 0) goto L7a
            java.lang.String r7 = "1"
            boolean r7 = r7.equals(r3)     // Catch: java.lang.Throwable -> La8
            if (r7 == 0) goto L7a
            int r7 = r9.appVersion     // Catch: java.lang.Throwable -> La8
            java.lang.String r7 = java.lang.Integer.toString(r7)     // Catch: java.lang.Throwable -> La8
            boolean r4 = r7.equals(r4)     // Catch: java.lang.Throwable -> La8
            if (r4 == 0) goto L7a
            int r4 = r9.valueCount     // Catch: java.lang.Throwable -> La8
            java.lang.String r4 = java.lang.Integer.toString(r4)     // Catch: java.lang.Throwable -> La8
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Throwable -> La8
            if (r4 == 0) goto L7a
            java.lang.String r4 = ""
            boolean r4 = r4.equals(r6)     // Catch: java.lang.Throwable -> La8
            if (r4 == 0) goto L7a
            r0 = 0
        L53:
            java.lang.String r2 = r1.readUtf8LineStrict()     // Catch: java.io.EOFException -> L5d java.lang.Throwable -> La8
            r9.readJournalLine(r2)     // Catch: java.io.EOFException -> L5d java.lang.Throwable -> La8
            int r0 = r0 + 1
            goto L53
        L5d:
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r2 = r9.lruEntries     // Catch: java.lang.Throwable -> La8
            int r2 = r2.size()     // Catch: java.lang.Throwable -> La8
            int r0 = r0 - r2
            r9.redundantOpCount = r0     // Catch: java.lang.Throwable -> La8
            boolean r0 = r1.exhausted()     // Catch: java.lang.Throwable -> La8
            if (r0 != 0) goto L70
            r9.rebuildJournal()     // Catch: java.lang.Throwable -> La8
            goto L76
        L70:
            okio.BufferedSink r0 = r9.newJournalWriter()     // Catch: java.lang.Throwable -> La8
            r9.journalWriter = r0     // Catch: java.lang.Throwable -> La8
        L76:
            okhttp3.internal.Util.closeQuietly(r1)
            return
        L7a:
            java.io.IOException r4 = new java.io.IOException     // Catch: java.lang.Throwable -> La8
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La8
            r7.<init>()     // Catch: java.lang.Throwable -> La8
            java.lang.String r8 = "unexpected journal header: ["
            r7.append(r8)     // Catch: java.lang.Throwable -> La8
            r7.append(r2)     // Catch: java.lang.Throwable -> La8
            r7.append(r0)     // Catch: java.lang.Throwable -> La8
            r7.append(r3)     // Catch: java.lang.Throwable -> La8
            r7.append(r0)     // Catch: java.lang.Throwable -> La8
            r7.append(r5)     // Catch: java.lang.Throwable -> La8
            r7.append(r0)     // Catch: java.lang.Throwable -> La8
            r7.append(r6)     // Catch: java.lang.Throwable -> La8
            java.lang.String r0 = "]"
            r7.append(r0)     // Catch: java.lang.Throwable -> La8
            java.lang.String r0 = r7.toString()     // Catch: java.lang.Throwable -> La8
            r4.<init>(r0)     // Catch: java.lang.Throwable -> La8
            throw r4     // Catch: java.lang.Throwable -> La8
        La8:
            r0 = move-exception
            okhttp3.internal.Util.closeQuietly(r1)
            throw r0
    }

    private void readJournalLine(java.lang.String r8) throws java.io.IOException {
            r7 = this;
            r0 = 32
            int r1 = r8.indexOf(r0)
            java.lang.String r2 = "unexpected journal line: "
            r3 = -1
            if (r1 == r3) goto L99
            int r4 = r1 + 1
            int r0 = r8.indexOf(r0, r4)
            if (r0 != r3) goto L28
            java.lang.String r4 = r8.substring(r4)
            r5 = 6
            if (r1 != r5) goto L2c
            java.lang.String r5 = "REMOVE"
            boolean r5 = r8.startsWith(r5)
            if (r5 == 0) goto L2c
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r8 = r7.lruEntries
            r8.remove(r4)
            return
        L28:
            java.lang.String r4 = r8.substring(r4, r0)
        L2c:
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r5 = r7.lruEntries
            java.lang.Object r5 = r5.get(r4)
            okhttp3.internal.cache.DiskLruCache$Entry r5 = (okhttp3.internal.cache.DiskLruCache.Entry) r5
            if (r5 != 0) goto L40
            okhttp3.internal.cache.DiskLruCache$Entry r5 = new okhttp3.internal.cache.DiskLruCache$Entry
            r5.<init>(r7, r4)
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r6 = r7.lruEntries
            r6.put(r4, r5)
        L40:
            r4 = 5
            if (r0 == r3) goto L62
            if (r1 != r4) goto L62
            java.lang.String r6 = "CLEAN"
            boolean r6 = r8.startsWith(r6)
            if (r6 == 0) goto L62
            r1 = 1
            int r0 = r0 + r1
            java.lang.String r8 = r8.substring(r0)
            java.lang.String r0 = " "
            java.lang.String[] r8 = r8.split(r0)
            r5.readable = r1
            r0 = 0
            r5.currentEditor = r0
            r5.setLengths(r8)
            goto L83
        L62:
            if (r0 != r3) goto L76
            if (r1 != r4) goto L76
            java.lang.String r4 = "DIRTY"
            boolean r4 = r8.startsWith(r4)
            if (r4 == 0) goto L76
            okhttp3.internal.cache.DiskLruCache$Editor r8 = new okhttp3.internal.cache.DiskLruCache$Editor
            r8.<init>(r7, r5)
            r5.currentEditor = r8
            goto L83
        L76:
            if (r0 != r3) goto L84
            r0 = 4
            if (r1 != r0) goto L84
            java.lang.String r0 = "READ"
            boolean r0 = r8.startsWith(r0)
            if (r0 == 0) goto L84
        L83:
            return
        L84:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            r1.append(r8)
            java.lang.String r8 = r1.toString()
            r0.<init>(r8)
            throw r0
        L99:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            r1.append(r8)
            java.lang.String r8 = r1.toString()
            r0.<init>(r8)
            throw r0
    }

    private void validateKey(java.lang.String r4) {
            r3 = this;
            java.util.regex.Pattern r0 = okhttp3.internal.cache.DiskLruCache.LEGAL_KEY_PATTERN
            java.util.regex.Matcher r0 = r0.matcher(r4)
            boolean r0 = r0.matches()
            if (r0 == 0) goto Ld
            return
        Ld:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "keys must match regex [a-z0-9_-]{1,120}: \""
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = "\""
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    @Override
    public synchronized void close() throws java.io.IOException {
            r6 = this;
            monitor-enter(r6)
            boolean r0 = r6.initialized     // Catch: java.lang.Throwable -> L44
            r1 = 1
            if (r0 == 0) goto L40
            boolean r0 = r6.closed     // Catch: java.lang.Throwable -> L44
            if (r0 == 0) goto Lb
            goto L40
        Lb:
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r0 = r6.lruEntries     // Catch: java.lang.Throwable -> L44
            java.util.Collection r0 = r0.values()     // Catch: java.lang.Throwable -> L44
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r2 = r6.lruEntries     // Catch: java.lang.Throwable -> L44
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L44
            okhttp3.internal.cache.DiskLruCache$Entry[] r2 = new okhttp3.internal.cache.DiskLruCache.Entry[r2]     // Catch: java.lang.Throwable -> L44
            java.lang.Object[] r0 = r0.toArray(r2)     // Catch: java.lang.Throwable -> L44
            okhttp3.internal.cache.DiskLruCache$Entry[] r0 = (okhttp3.internal.cache.DiskLruCache.Entry[]) r0     // Catch: java.lang.Throwable -> L44
            int r2 = r0.length     // Catch: java.lang.Throwable -> L44
            r3 = 0
        L21:
            if (r3 >= r2) goto L31
            r4 = r0[r3]     // Catch: java.lang.Throwable -> L44
            okhttp3.internal.cache.DiskLruCache$Editor r5 = r4.currentEditor     // Catch: java.lang.Throwable -> L44
            if (r5 == 0) goto L2e
            okhttp3.internal.cache.DiskLruCache$Editor r4 = r4.currentEditor     // Catch: java.lang.Throwable -> L44
            r4.abort()     // Catch: java.lang.Throwable -> L44
        L2e:
            int r3 = r3 + 1
            goto L21
        L31:
            r6.trimToSize()     // Catch: java.lang.Throwable -> L44
            okio.BufferedSink r0 = r6.journalWriter     // Catch: java.lang.Throwable -> L44
            r0.close()     // Catch: java.lang.Throwable -> L44
            r0 = 0
            r6.journalWriter = r0     // Catch: java.lang.Throwable -> L44
            r6.closed = r1     // Catch: java.lang.Throwable -> L44
            monitor-exit(r6)
            return
        L40:
            r6.closed = r1     // Catch: java.lang.Throwable -> L44
            monitor-exit(r6)
            return
        L44:
            r0 = move-exception
            monitor-exit(r6)
            throw r0
    }

    synchronized void completeEdit(okhttp3.internal.cache.DiskLruCache.Editor r10, boolean r11) throws java.io.IOException {
            r9 = this;
            monitor-enter(r9)
            okhttp3.internal.cache.DiskLruCache$Entry r0 = r10.entry     // Catch: java.lang.Throwable -> Lfb
            okhttp3.internal.cache.DiskLruCache$Editor r1 = r0.currentEditor     // Catch: java.lang.Throwable -> Lfb
            if (r1 != r10) goto Lf5
            r1 = 0
            if (r11 == 0) goto L47
            boolean r2 = r0.readable     // Catch: java.lang.Throwable -> Lfb
            if (r2 != 0) goto L47
            r2 = 0
        Lf:
            int r3 = r9.valueCount     // Catch: java.lang.Throwable -> Lfb
            if (r2 >= r3) goto L47
            boolean[] r3 = r10.written     // Catch: java.lang.Throwable -> Lfb
            boolean r3 = r3[r2]     // Catch: java.lang.Throwable -> Lfb
            if (r3 == 0) goto L2d
            okhttp3.internal.io.FileSystem r3 = r9.fileSystem     // Catch: java.lang.Throwable -> Lfb
            java.io.File[] r4 = r0.dirtyFiles     // Catch: java.lang.Throwable -> Lfb
            r4 = r4[r2]     // Catch: java.lang.Throwable -> Lfb
            boolean r3 = r3.exists(r4)     // Catch: java.lang.Throwable -> Lfb
            if (r3 != 0) goto L2a
            r10.abort()     // Catch: java.lang.Throwable -> Lfb
            monitor-exit(r9)
            return
        L2a:
            int r2 = r2 + 1
            goto Lf
        L2d:
            r10.abort()     // Catch: java.lang.Throwable -> Lfb
            java.lang.IllegalStateException r10 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> Lfb
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lfb
            r11.<init>()     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r0 = "Newly created entry didn't create value for index "
            r11.append(r0)     // Catch: java.lang.Throwable -> Lfb
            r11.append(r2)     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> Lfb
            r10.<init>(r11)     // Catch: java.lang.Throwable -> Lfb
            throw r10     // Catch: java.lang.Throwable -> Lfb
        L47:
            int r10 = r9.valueCount     // Catch: java.lang.Throwable -> Lfb
            if (r1 >= r10) goto L7f
            java.io.File[] r10 = r0.dirtyFiles     // Catch: java.lang.Throwable -> Lfb
            r10 = r10[r1]     // Catch: java.lang.Throwable -> Lfb
            if (r11 == 0) goto L77
            okhttp3.internal.io.FileSystem r2 = r9.fileSystem     // Catch: java.lang.Throwable -> Lfb
            boolean r2 = r2.exists(r10)     // Catch: java.lang.Throwable -> Lfb
            if (r2 == 0) goto L7c
            java.io.File[] r2 = r0.cleanFiles     // Catch: java.lang.Throwable -> Lfb
            r2 = r2[r1]     // Catch: java.lang.Throwable -> Lfb
            okhttp3.internal.io.FileSystem r3 = r9.fileSystem     // Catch: java.lang.Throwable -> Lfb
            r3.rename(r10, r2)     // Catch: java.lang.Throwable -> Lfb
            long[] r10 = r0.lengths     // Catch: java.lang.Throwable -> Lfb
            r3 = r10[r1]     // Catch: java.lang.Throwable -> Lfb
            okhttp3.internal.io.FileSystem r10 = r9.fileSystem     // Catch: java.lang.Throwable -> Lfb
            long r5 = r10.size(r2)     // Catch: java.lang.Throwable -> Lfb
            long[] r10 = r0.lengths     // Catch: java.lang.Throwable -> Lfb
            r10[r1] = r5     // Catch: java.lang.Throwable -> Lfb
            long r7 = r9.size     // Catch: java.lang.Throwable -> Lfb
            long r7 = r7 - r3
            long r7 = r7 + r5
            r9.size = r7     // Catch: java.lang.Throwable -> Lfb
            goto L7c
        L77:
            okhttp3.internal.io.FileSystem r2 = r9.fileSystem     // Catch: java.lang.Throwable -> Lfb
            r2.delete(r10)     // Catch: java.lang.Throwable -> Lfb
        L7c:
            int r1 = r1 + 1
            goto L47
        L7f:
            int r10 = r9.redundantOpCount     // Catch: java.lang.Throwable -> Lfb
            r1 = 1
            int r10 = r10 + r1
            r9.redundantOpCount = r10     // Catch: java.lang.Throwable -> Lfb
            r10 = 0
            r0.currentEditor = r10     // Catch: java.lang.Throwable -> Lfb
            boolean r10 = r0.readable     // Catch: java.lang.Throwable -> Lfb
            r10 = r10 | r11
            r2 = 10
            r3 = 32
            if (r10 == 0) goto Lbb
            r0.readable = r1     // Catch: java.lang.Throwable -> Lfb
            okio.BufferedSink r10 = r9.journalWriter     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r1 = "CLEAN"
            okio.BufferedSink r10 = r10.writeUtf8(r1)     // Catch: java.lang.Throwable -> Lfb
            r10.writeByte(r3)     // Catch: java.lang.Throwable -> Lfb
            okio.BufferedSink r10 = r9.journalWriter     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r1 = r0.key     // Catch: java.lang.Throwable -> Lfb
            r10.writeUtf8(r1)     // Catch: java.lang.Throwable -> Lfb
            okio.BufferedSink r10 = r9.journalWriter     // Catch: java.lang.Throwable -> Lfb
            r0.writeLengths(r10)     // Catch: java.lang.Throwable -> Lfb
            okio.BufferedSink r10 = r9.journalWriter     // Catch: java.lang.Throwable -> Lfb
            r10.writeByte(r2)     // Catch: java.lang.Throwable -> Lfb
            if (r11 == 0) goto Ld9
            long r10 = r9.nextSequenceNumber     // Catch: java.lang.Throwable -> Lfb
            r1 = 1
            long r1 = r1 + r10
            r9.nextSequenceNumber = r1     // Catch: java.lang.Throwable -> Lfb
            r0.sequenceNumber = r10     // Catch: java.lang.Throwable -> Lfb
            goto Ld9
        Lbb:
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r10 = r9.lruEntries     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r11 = r0.key     // Catch: java.lang.Throwable -> Lfb
            r10.remove(r11)     // Catch: java.lang.Throwable -> Lfb
            okio.BufferedSink r10 = r9.journalWriter     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r11 = "REMOVE"
            okio.BufferedSink r10 = r10.writeUtf8(r11)     // Catch: java.lang.Throwable -> Lfb
            r10.writeByte(r3)     // Catch: java.lang.Throwable -> Lfb
            okio.BufferedSink r10 = r9.journalWriter     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r11 = r0.key     // Catch: java.lang.Throwable -> Lfb
            r10.writeUtf8(r11)     // Catch: java.lang.Throwable -> Lfb
            okio.BufferedSink r10 = r9.journalWriter     // Catch: java.lang.Throwable -> Lfb
            r10.writeByte(r2)     // Catch: java.lang.Throwable -> Lfb
        Ld9:
            okio.BufferedSink r10 = r9.journalWriter     // Catch: java.lang.Throwable -> Lfb
            r10.flush()     // Catch: java.lang.Throwable -> Lfb
            long r10 = r9.size     // Catch: java.lang.Throwable -> Lfb
            long r0 = r9.maxSize     // Catch: java.lang.Throwable -> Lfb
            int r2 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r2 > 0) goto Lec
            boolean r10 = r9.journalRebuildRequired()     // Catch: java.lang.Throwable -> Lfb
            if (r10 == 0) goto Lf3
        Lec:
            java.util.concurrent.Executor r10 = r9.executor     // Catch: java.lang.Throwable -> Lfb
            java.lang.Runnable r11 = r9.cleanupRunnable     // Catch: java.lang.Throwable -> Lfb
            r10.execute(r11)     // Catch: java.lang.Throwable -> Lfb
        Lf3:
            monitor-exit(r9)
            return
        Lf5:
            java.lang.IllegalStateException r10 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> Lfb
            r10.<init>()     // Catch: java.lang.Throwable -> Lfb
            throw r10     // Catch: java.lang.Throwable -> Lfb
        Lfb:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
    }

    public void delete() throws java.io.IOException {
            r2 = this;
            r2.close()
            okhttp3.internal.io.FileSystem r0 = r2.fileSystem
            java.io.File r1 = r2.directory
            r0.deleteContents(r1)
            return
    }

    @javax.annotation.Nullable
    public okhttp3.internal.cache.DiskLruCache.Editor edit(java.lang.String r3) throws java.io.IOException {
            r2 = this;
            r0 = -1
            okhttp3.internal.cache.DiskLruCache$Editor r3 = r2.edit(r3, r0)
            return r3
    }

    synchronized okhttp3.internal.cache.DiskLruCache.Editor edit(java.lang.String r6, long r7) throws java.io.IOException {
            r5 = this;
            monitor-enter(r5)
            r5.initialize()     // Catch: java.lang.Throwable -> L74
            r5.checkNotClosed()     // Catch: java.lang.Throwable -> L74
            r5.validateKey(r6)     // Catch: java.lang.Throwable -> L74
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r0 = r5.lruEntries     // Catch: java.lang.Throwable -> L74
            java.lang.Object r0 = r0.get(r6)     // Catch: java.lang.Throwable -> L74
            okhttp3.internal.cache.DiskLruCache$Entry r0 = (okhttp3.internal.cache.DiskLruCache.Entry) r0     // Catch: java.lang.Throwable -> L74
            r1 = -1
            r3 = 0
            int r4 = (r7 > r1 ? 1 : (r7 == r1 ? 0 : -1))
            if (r4 == 0) goto L23
            if (r0 == 0) goto L21
            long r1 = r0.sequenceNumber     // Catch: java.lang.Throwable -> L74
            int r4 = (r1 > r7 ? 1 : (r1 == r7 ? 0 : -1))
            if (r4 == 0) goto L23
        L21:
            monitor-exit(r5)
            return r3
        L23:
            if (r0 == 0) goto L2b
            okhttp3.internal.cache.DiskLruCache$Editor r7 = r0.currentEditor     // Catch: java.lang.Throwable -> L74
            if (r7 == 0) goto L2b
            monitor-exit(r5)
            return r3
        L2b:
            boolean r7 = r5.mostRecentTrimFailed     // Catch: java.lang.Throwable -> L74
            if (r7 != 0) goto L6b
            boolean r7 = r5.mostRecentRebuildFailed     // Catch: java.lang.Throwable -> L74
            if (r7 == 0) goto L34
            goto L6b
        L34:
            okio.BufferedSink r7 = r5.journalWriter     // Catch: java.lang.Throwable -> L74
            java.lang.String r8 = "DIRTY"
            okio.BufferedSink r7 = r7.writeUtf8(r8)     // Catch: java.lang.Throwable -> L74
            r8 = 32
            okio.BufferedSink r7 = r7.writeByte(r8)     // Catch: java.lang.Throwable -> L74
            okio.BufferedSink r7 = r7.writeUtf8(r6)     // Catch: java.lang.Throwable -> L74
            r8 = 10
            r7.writeByte(r8)     // Catch: java.lang.Throwable -> L74
            okio.BufferedSink r7 = r5.journalWriter     // Catch: java.lang.Throwable -> L74
            r7.flush()     // Catch: java.lang.Throwable -> L74
            boolean r7 = r5.hasJournalErrors     // Catch: java.lang.Throwable -> L74
            if (r7 == 0) goto L56
            monitor-exit(r5)
            return r3
        L56:
            if (r0 != 0) goto L62
            okhttp3.internal.cache.DiskLruCache$Entry r0 = new okhttp3.internal.cache.DiskLruCache$Entry     // Catch: java.lang.Throwable -> L74
            r0.<init>(r5, r6)     // Catch: java.lang.Throwable -> L74
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r7 = r5.lruEntries     // Catch: java.lang.Throwable -> L74
            r7.put(r6, r0)     // Catch: java.lang.Throwable -> L74
        L62:
            okhttp3.internal.cache.DiskLruCache$Editor r6 = new okhttp3.internal.cache.DiskLruCache$Editor     // Catch: java.lang.Throwable -> L74
            r6.<init>(r5, r0)     // Catch: java.lang.Throwable -> L74
            r0.currentEditor = r6     // Catch: java.lang.Throwable -> L74
            monitor-exit(r5)
            return r6
        L6b:
            java.util.concurrent.Executor r6 = r5.executor     // Catch: java.lang.Throwable -> L74
            java.lang.Runnable r7 = r5.cleanupRunnable     // Catch: java.lang.Throwable -> L74
            r6.execute(r7)     // Catch: java.lang.Throwable -> L74
            monitor-exit(r5)
            return r3
        L74:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    public synchronized void evictAll() throws java.io.IOException {
            r5 = this;
            monitor-enter(r5)
            r5.initialize()     // Catch: java.lang.Throwable -> L29
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r0 = r5.lruEntries     // Catch: java.lang.Throwable -> L29
            java.util.Collection r0 = r0.values()     // Catch: java.lang.Throwable -> L29
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r1 = r5.lruEntries     // Catch: java.lang.Throwable -> L29
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L29
            okhttp3.internal.cache.DiskLruCache$Entry[] r1 = new okhttp3.internal.cache.DiskLruCache.Entry[r1]     // Catch: java.lang.Throwable -> L29
            java.lang.Object[] r0 = r0.toArray(r1)     // Catch: java.lang.Throwable -> L29
            okhttp3.internal.cache.DiskLruCache$Entry[] r0 = (okhttp3.internal.cache.DiskLruCache.Entry[]) r0     // Catch: java.lang.Throwable -> L29
            int r1 = r0.length     // Catch: java.lang.Throwable -> L29
            r2 = 0
            r3 = 0
        L1b:
            if (r3 >= r1) goto L25
            r4 = r0[r3]     // Catch: java.lang.Throwable -> L29
            r5.removeEntry(r4)     // Catch: java.lang.Throwable -> L29
            int r3 = r3 + 1
            goto L1b
        L25:
            r5.mostRecentTrimFailed = r2     // Catch: java.lang.Throwable -> L29
            monitor-exit(r5)
            return
        L29:
            r0 = move-exception
            monitor-exit(r5)
            throw r0
    }

    @Override
    public synchronized void flush() throws java.io.IOException {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.initialized     // Catch: java.lang.Throwable -> L14
            if (r0 != 0) goto L7
            monitor-exit(r1)
            return
        L7:
            r1.checkNotClosed()     // Catch: java.lang.Throwable -> L14
            r1.trimToSize()     // Catch: java.lang.Throwable -> L14
            okio.BufferedSink r0 = r1.journalWriter     // Catch: java.lang.Throwable -> L14
            r0.flush()     // Catch: java.lang.Throwable -> L14
            monitor-exit(r1)
            return
        L14:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized okhttp3.internal.cache.DiskLruCache.Snapshot get(java.lang.String r4) throws java.io.IOException {
            r3 = this;
            monitor-enter(r3)
            r3.initialize()     // Catch: java.lang.Throwable -> L50
            r3.checkNotClosed()     // Catch: java.lang.Throwable -> L50
            r3.validateKey(r4)     // Catch: java.lang.Throwable -> L50
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r0 = r3.lruEntries     // Catch: java.lang.Throwable -> L50
            java.lang.Object r0 = r0.get(r4)     // Catch: java.lang.Throwable -> L50
            okhttp3.internal.cache.DiskLruCache$Entry r0 = (okhttp3.internal.cache.DiskLruCache.Entry) r0     // Catch: java.lang.Throwable -> L50
            r1 = 0
            if (r0 == 0) goto L4e
            boolean r2 = r0.readable     // Catch: java.lang.Throwable -> L50
            if (r2 != 0) goto L1a
            goto L4e
        L1a:
            okhttp3.internal.cache.DiskLruCache$Snapshot r0 = r0.snapshot()     // Catch: java.lang.Throwable -> L50
            if (r0 != 0) goto L22
            monitor-exit(r3)
            return r1
        L22:
            int r1 = r3.redundantOpCount     // Catch: java.lang.Throwable -> L50
            int r1 = r1 + 1
            r3.redundantOpCount = r1     // Catch: java.lang.Throwable -> L50
            okio.BufferedSink r1 = r3.journalWriter     // Catch: java.lang.Throwable -> L50
            java.lang.String r2 = "READ"
            okio.BufferedSink r1 = r1.writeUtf8(r2)     // Catch: java.lang.Throwable -> L50
            r2 = 32
            okio.BufferedSink r1 = r1.writeByte(r2)     // Catch: java.lang.Throwable -> L50
            okio.BufferedSink r4 = r1.writeUtf8(r4)     // Catch: java.lang.Throwable -> L50
            r1 = 10
            r4.writeByte(r1)     // Catch: java.lang.Throwable -> L50
            boolean r4 = r3.journalRebuildRequired()     // Catch: java.lang.Throwable -> L50
            if (r4 == 0) goto L4c
            java.util.concurrent.Executor r4 = r3.executor     // Catch: java.lang.Throwable -> L50
            java.lang.Runnable r1 = r3.cleanupRunnable     // Catch: java.lang.Throwable -> L50
            r4.execute(r1)     // Catch: java.lang.Throwable -> L50
        L4c:
            monitor-exit(r3)
            return r0
        L4e:
            monitor-exit(r3)
            return r1
        L50:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public java.io.File getDirectory() {
            r1 = this;
            java.io.File r0 = r1.directory
            return r0
    }

    public synchronized long getMaxSize() {
            r2 = this;
            monitor-enter(r2)
            long r0 = r2.maxSize     // Catch: java.lang.Throwable -> L5
            monitor-exit(r2)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public synchronized void initialize() throws java.io.IOException {
            r6 = this;
            monitor-enter(r6)
            boolean r0 = r6.initialized     // Catch: java.lang.Throwable -> L80
            if (r0 == 0) goto L7
            monitor-exit(r6)
            return
        L7:
            okhttp3.internal.io.FileSystem r0 = r6.fileSystem     // Catch: java.lang.Throwable -> L80
            java.io.File r1 = r6.journalFileBackup     // Catch: java.lang.Throwable -> L80
            boolean r0 = r0.exists(r1)     // Catch: java.lang.Throwable -> L80
            if (r0 == 0) goto L2c
            okhttp3.internal.io.FileSystem r0 = r6.fileSystem     // Catch: java.lang.Throwable -> L80
            java.io.File r1 = r6.journalFile     // Catch: java.lang.Throwable -> L80
            boolean r0 = r0.exists(r1)     // Catch: java.lang.Throwable -> L80
            if (r0 == 0) goto L23
            okhttp3.internal.io.FileSystem r0 = r6.fileSystem     // Catch: java.lang.Throwable -> L80
            java.io.File r1 = r6.journalFileBackup     // Catch: java.lang.Throwable -> L80
            r0.delete(r1)     // Catch: java.lang.Throwable -> L80
            goto L2c
        L23:
            okhttp3.internal.io.FileSystem r0 = r6.fileSystem     // Catch: java.lang.Throwable -> L80
            java.io.File r1 = r6.journalFileBackup     // Catch: java.lang.Throwable -> L80
            java.io.File r2 = r6.journalFile     // Catch: java.lang.Throwable -> L80
            r0.rename(r1, r2)     // Catch: java.lang.Throwable -> L80
        L2c:
            okhttp3.internal.io.FileSystem r0 = r6.fileSystem     // Catch: java.lang.Throwable -> L80
            java.io.File r1 = r6.journalFile     // Catch: java.lang.Throwable -> L80
            boolean r0 = r0.exists(r1)     // Catch: java.lang.Throwable -> L80
            r1 = 1
            if (r0 == 0) goto L79
            r6.readJournal()     // Catch: java.io.IOException -> L41 java.lang.Throwable -> L80
            r6.processJournal()     // Catch: java.io.IOException -> L41 java.lang.Throwable -> L80
            r6.initialized = r1     // Catch: java.io.IOException -> L41 java.lang.Throwable -> L80
            monitor-exit(r6)
            return
        L41:
            r0 = move-exception
            okhttp3.internal.platform.Platform r2 = okhttp3.internal.platform.Platform.get()     // Catch: java.lang.Throwable -> L80
            r3 = 5
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L80
            r4.<init>()     // Catch: java.lang.Throwable -> L80
            java.lang.String r5 = "DiskLruCache "
            r4.append(r5)     // Catch: java.lang.Throwable -> L80
            java.io.File r5 = r6.directory     // Catch: java.lang.Throwable -> L80
            r4.append(r5)     // Catch: java.lang.Throwable -> L80
            java.lang.String r5 = " is corrupt: "
            r4.append(r5)     // Catch: java.lang.Throwable -> L80
            java.lang.String r5 = r0.getMessage()     // Catch: java.lang.Throwable -> L80
            r4.append(r5)     // Catch: java.lang.Throwable -> L80
            java.lang.String r5 = ", removing"
            r4.append(r5)     // Catch: java.lang.Throwable -> L80
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L80
            r2.log(r3, r4, r0)     // Catch: java.lang.Throwable -> L80
            r0 = 0
            r6.delete()     // Catch: java.lang.Throwable -> L75
            r6.closed = r0     // Catch: java.lang.Throwable -> L80
            goto L79
        L75:
            r1 = move-exception
            r6.closed = r0     // Catch: java.lang.Throwable -> L80
            throw r1     // Catch: java.lang.Throwable -> L80
        L79:
            r6.rebuildJournal()     // Catch: java.lang.Throwable -> L80
            r6.initialized = r1     // Catch: java.lang.Throwable -> L80
            monitor-exit(r6)
            return
        L80:
            r0 = move-exception
            monitor-exit(r6)
            throw r0
    }

    public synchronized boolean isClosed() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.closed     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    boolean journalRebuildRequired() {
            r2 = this;
            int r0 = r2.redundantOpCount
            r1 = 2000(0x7d0, float:2.803E-42)
            if (r0 < r1) goto L10
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r1 = r2.lruEntries
            int r1 = r1.size()
            if (r0 < r1) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            return r0
    }

    synchronized void rebuildJournal() throws java.io.IOException {
            r6 = this;
            monitor-enter(r6)
            okio.BufferedSink r0 = r6.journalWriter     // Catch: java.lang.Throwable -> Lbc
            if (r0 == 0) goto La
            okio.BufferedSink r0 = r6.journalWriter     // Catch: java.lang.Throwable -> Lbc
            r0.close()     // Catch: java.lang.Throwable -> Lbc
        La:
            okhttp3.internal.io.FileSystem r0 = r6.fileSystem     // Catch: java.lang.Throwable -> Lbc
            java.io.File r1 = r6.journalFileTmp     // Catch: java.lang.Throwable -> Lbc
            okio.Sink r0 = r0.sink(r1)     // Catch: java.lang.Throwable -> Lbc
            okio.BufferedSink r0 = okio.Okio.buffer(r0)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r1 = "libcore.io.DiskLruCache"
            okio.BufferedSink r1 = r0.writeUtf8(r1)     // Catch: java.lang.Throwable -> Lb7
            r2 = 10
            r1.writeByte(r2)     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r1 = "1"
            okio.BufferedSink r1 = r0.writeUtf8(r1)     // Catch: java.lang.Throwable -> Lb7
            r1.writeByte(r2)     // Catch: java.lang.Throwable -> Lb7
            int r1 = r6.appVersion     // Catch: java.lang.Throwable -> Lb7
            long r3 = (long) r1     // Catch: java.lang.Throwable -> Lb7
            okio.BufferedSink r1 = r0.writeDecimalLong(r3)     // Catch: java.lang.Throwable -> Lb7
            r1.writeByte(r2)     // Catch: java.lang.Throwable -> Lb7
            int r1 = r6.valueCount     // Catch: java.lang.Throwable -> Lb7
            long r3 = (long) r1     // Catch: java.lang.Throwable -> Lb7
            okio.BufferedSink r1 = r0.writeDecimalLong(r3)     // Catch: java.lang.Throwable -> Lb7
            r1.writeByte(r2)     // Catch: java.lang.Throwable -> Lb7
            r0.writeByte(r2)     // Catch: java.lang.Throwable -> Lb7
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r1 = r6.lruEntries     // Catch: java.lang.Throwable -> Lb7
            java.util.Collection r1 = r1.values()     // Catch: java.lang.Throwable -> Lb7
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> Lb7
        L4b:
            boolean r3 = r1.hasNext()     // Catch: java.lang.Throwable -> Lb7
            if (r3 == 0) goto L84
            java.lang.Object r3 = r1.next()     // Catch: java.lang.Throwable -> Lb7
            okhttp3.internal.cache.DiskLruCache$Entry r3 = (okhttp3.internal.cache.DiskLruCache.Entry) r3     // Catch: java.lang.Throwable -> Lb7
            okhttp3.internal.cache.DiskLruCache$Editor r4 = r3.currentEditor     // Catch: java.lang.Throwable -> Lb7
            r5 = 32
            if (r4 == 0) goto L6f
            java.lang.String r4 = "DIRTY"
            okio.BufferedSink r4 = r0.writeUtf8(r4)     // Catch: java.lang.Throwable -> Lb7
            r4.writeByte(r5)     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r3 = r3.key     // Catch: java.lang.Throwable -> Lb7
            r0.writeUtf8(r3)     // Catch: java.lang.Throwable -> Lb7
            r0.writeByte(r2)     // Catch: java.lang.Throwable -> Lb7
            goto L4b
        L6f:
            java.lang.String r4 = "CLEAN"
            okio.BufferedSink r4 = r0.writeUtf8(r4)     // Catch: java.lang.Throwable -> Lb7
            r4.writeByte(r5)     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r4 = r3.key     // Catch: java.lang.Throwable -> Lb7
            r0.writeUtf8(r4)     // Catch: java.lang.Throwable -> Lb7
            r3.writeLengths(r0)     // Catch: java.lang.Throwable -> Lb7
            r0.writeByte(r2)     // Catch: java.lang.Throwable -> Lb7
            goto L4b
        L84:
            r0.close()     // Catch: java.lang.Throwable -> Lbc
            okhttp3.internal.io.FileSystem r0 = r6.fileSystem     // Catch: java.lang.Throwable -> Lbc
            java.io.File r1 = r6.journalFile     // Catch: java.lang.Throwable -> Lbc
            boolean r0 = r0.exists(r1)     // Catch: java.lang.Throwable -> Lbc
            if (r0 == 0) goto L9a
            okhttp3.internal.io.FileSystem r0 = r6.fileSystem     // Catch: java.lang.Throwable -> Lbc
            java.io.File r1 = r6.journalFile     // Catch: java.lang.Throwable -> Lbc
            java.io.File r2 = r6.journalFileBackup     // Catch: java.lang.Throwable -> Lbc
            r0.rename(r1, r2)     // Catch: java.lang.Throwable -> Lbc
        L9a:
            okhttp3.internal.io.FileSystem r0 = r6.fileSystem     // Catch: java.lang.Throwable -> Lbc
            java.io.File r1 = r6.journalFileTmp     // Catch: java.lang.Throwable -> Lbc
            java.io.File r2 = r6.journalFile     // Catch: java.lang.Throwable -> Lbc
            r0.rename(r1, r2)     // Catch: java.lang.Throwable -> Lbc
            okhttp3.internal.io.FileSystem r0 = r6.fileSystem     // Catch: java.lang.Throwable -> Lbc
            java.io.File r1 = r6.journalFileBackup     // Catch: java.lang.Throwable -> Lbc
            r0.delete(r1)     // Catch: java.lang.Throwable -> Lbc
            okio.BufferedSink r0 = r6.newJournalWriter()     // Catch: java.lang.Throwable -> Lbc
            r6.journalWriter = r0     // Catch: java.lang.Throwable -> Lbc
            r0 = 0
            r6.hasJournalErrors = r0     // Catch: java.lang.Throwable -> Lbc
            r6.mostRecentRebuildFailed = r0     // Catch: java.lang.Throwable -> Lbc
            monitor-exit(r6)
            return
        Lb7:
            r1 = move-exception
            r0.close()     // Catch: java.lang.Throwable -> Lbc
            throw r1     // Catch: java.lang.Throwable -> Lbc
        Lbc:
            r0 = move-exception
            monitor-exit(r6)
            throw r0
    }

    public synchronized boolean remove(java.lang.String r7) throws java.io.IOException {
            r6 = this;
            monitor-enter(r6)
            r6.initialize()     // Catch: java.lang.Throwable -> L29
            r6.checkNotClosed()     // Catch: java.lang.Throwable -> L29
            r6.validateKey(r7)     // Catch: java.lang.Throwable -> L29
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r0 = r6.lruEntries     // Catch: java.lang.Throwable -> L29
            java.lang.Object r7 = r0.get(r7)     // Catch: java.lang.Throwable -> L29
            okhttp3.internal.cache.DiskLruCache$Entry r7 = (okhttp3.internal.cache.DiskLruCache.Entry) r7     // Catch: java.lang.Throwable -> L29
            r0 = 0
            if (r7 != 0) goto L17
            monitor-exit(r6)
            return r0
        L17:
            boolean r7 = r6.removeEntry(r7)     // Catch: java.lang.Throwable -> L29
            if (r7 == 0) goto L27
            long r1 = r6.size     // Catch: java.lang.Throwable -> L29
            long r3 = r6.maxSize     // Catch: java.lang.Throwable -> L29
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 > 0) goto L27
            r6.mostRecentTrimFailed = r0     // Catch: java.lang.Throwable -> L29
        L27:
            monitor-exit(r6)
            return r7
        L29:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    boolean removeEntry(okhttp3.internal.cache.DiskLruCache.Entry r7) throws java.io.IOException {
            r6 = this;
            okhttp3.internal.cache.DiskLruCache$Editor r0 = r7.currentEditor
            if (r0 == 0) goto L9
            okhttp3.internal.cache.DiskLruCache$Editor r0 = r7.currentEditor
            r0.detach()
        L9:
            r0 = 0
        La:
            int r1 = r6.valueCount
            if (r0 >= r1) goto L29
            okhttp3.internal.io.FileSystem r1 = r6.fileSystem
            java.io.File[] r2 = r7.cleanFiles
            r2 = r2[r0]
            r1.delete(r2)
            long r1 = r6.size
            long[] r3 = r7.lengths
            r4 = r3[r0]
            long r1 = r1 - r4
            r6.size = r1
            long[] r1 = r7.lengths
            r2 = 0
            r1[r0] = r2
            int r0 = r0 + 1
            goto La
        L29:
            int r0 = r6.redundantOpCount
            r1 = 1
            int r0 = r0 + r1
            r6.redundantOpCount = r0
            okio.BufferedSink r0 = r6.journalWriter
            java.lang.String r2 = "REMOVE"
            okio.BufferedSink r0 = r0.writeUtf8(r2)
            r2 = 32
            okio.BufferedSink r0 = r0.writeByte(r2)
            java.lang.String r2 = r7.key
            okio.BufferedSink r0 = r0.writeUtf8(r2)
            r2 = 10
            r0.writeByte(r2)
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r0 = r6.lruEntries
            java.lang.String r7 = r7.key
            r0.remove(r7)
            boolean r7 = r6.journalRebuildRequired()
            if (r7 == 0) goto L5c
            java.util.concurrent.Executor r7 = r6.executor
            java.lang.Runnable r0 = r6.cleanupRunnable
            r7.execute(r0)
        L5c:
            return r1
    }

    public synchronized void setMaxSize(long r1) {
            r0 = this;
            monitor-enter(r0)
            r0.maxSize = r1     // Catch: java.lang.Throwable -> L10
            boolean r1 = r0.initialized     // Catch: java.lang.Throwable -> L10
            if (r1 == 0) goto Le
            java.util.concurrent.Executor r1 = r0.executor     // Catch: java.lang.Throwable -> L10
            java.lang.Runnable r2 = r0.cleanupRunnable     // Catch: java.lang.Throwable -> L10
            r1.execute(r2)     // Catch: java.lang.Throwable -> L10
        Le:
            monitor-exit(r0)
            return
        L10:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public synchronized long size() throws java.io.IOException {
            r2 = this;
            monitor-enter(r2)
            r2.initialize()     // Catch: java.lang.Throwable -> L8
            long r0 = r2.size     // Catch: java.lang.Throwable -> L8
            monitor-exit(r2)
            return r0
        L8:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public synchronized java.util.Iterator<okhttp3.internal.cache.DiskLruCache.Snapshot> snapshots() throws java.io.IOException {
            r1 = this;
            monitor-enter(r1)
            r1.initialize()     // Catch: java.lang.Throwable -> Lb
            okhttp3.internal.cache.DiskLruCache$3 r0 = new okhttp3.internal.cache.DiskLruCache$3     // Catch: java.lang.Throwable -> Lb
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r1)
            return r0
        Lb:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    void trimToSize() throws java.io.IOException {
            r5 = this;
        L0:
            long r0 = r5.size
            long r2 = r5.maxSize
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L1c
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r0 = r5.lruEntries
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
            java.lang.Object r0 = r0.next()
            okhttp3.internal.cache.DiskLruCache$Entry r0 = (okhttp3.internal.cache.DiskLruCache.Entry) r0
            r5.removeEntry(r0)
            goto L0
        L1c:
            r0 = 0
            r5.mostRecentTrimFailed = r0
            return
    }
}
