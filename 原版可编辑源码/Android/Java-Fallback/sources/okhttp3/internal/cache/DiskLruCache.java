package okhttp3.internal.cache;

@kotlin.Metadata(d1 = {"\u0000y\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\b\u0011\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\u0018\u0002\n\u0002\b\u000f\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0018\u0002\n\u0002\b\u0010\n\u0002\u0010)\n\u0002\b\u0007*\u0001\u0014\u0018\u0000 [2\u00020\u00012\u00020\u0002:\u0004[\\]^B7\b\u0000\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\b\u0012\u0006\u0010\t\u001a\u00020\b\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\u0006\u0010\f\u001a\u00020\r¢\u0006\u0002\u0010\u000eJ\b\u00108\u001a\u000209H\u0002J\b\u0010:\u001a\u000209H\u0016J!\u0010;\u001a\u0002092\n\u0010<\u001a\u00060=R\u00020\u00002\u0006\u0010>\u001a\u00020\u0010H\u0000¢\u0006\u0002\b?J\u0006\u0010@\u001a\u000209J \u0010A\u001a\b\u0018\u00010=R\u00020\u00002\u0006\u0010B\u001a\u00020(2\b\b\u0002\u0010C\u001a\u00020\u000bH\u0007J\u0006\u0010D\u001a\u000209J\b\u0010E\u001a\u000209H\u0016J\u0017\u0010F\u001a\b\u0018\u00010GR\u00020\u00002\u0006\u0010B\u001a\u00020(H\u0086\u0002J\u0006\u0010H\u001a\u000209J\u0006\u0010I\u001a\u00020\u0010J\b\u0010J\u001a\u00020\u0010H\u0002J\b\u0010K\u001a\u00020%H\u0002J\b\u0010L\u001a\u000209H\u0002J\b\u0010M\u001a\u000209H\u0002J\u0010\u0010N\u001a\u0002092\u0006\u0010O\u001a\u00020(H\u0002J\r\u0010P\u001a\u000209H\u0000¢\u0006\u0002\bQJ\u000e\u0010R\u001a\u00020\u00102\u0006\u0010B\u001a\u00020(J\u0019\u0010S\u001a\u00020\u00102\n\u0010T\u001a\u00060)R\u00020\u0000H\u0000¢\u0006\u0002\bUJ\b\u0010V\u001a\u00020\u0010H\u0002J\u0006\u00105\u001a\u00020\u000bJ\u0010\u0010W\u001a\f\u0012\b\u0012\u00060GR\u00020\u00000XJ\u0006\u0010Y\u001a\u000209J\u0010\u0010Z\u001a\u0002092\u0006\u0010B\u001a\u00020(H\u0002R\u000e\u0010\u0007\u001a\u00020\bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000f\u001a\u00020\u0010X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0011\u001a\u00020\u0012X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0013\u001a\u00020\u0014X\u0082\u0004¢\u0006\u0004\n\u0002\u0010\u0015R\u001a\u0010\u0016\u001a\u00020\u0010X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0017\u0010\u0018\"\u0004\b\u0019\u0010\u001aR\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u001b\u0010\u001cR\u0014\u0010\u0003\u001a\u00020\u0004X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u001d\u0010\u001eR\u000e\u0010\u001f\u001a\u00020\u0010X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010 \u001a\u00020\u0010X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010!\u001a\u00020\u0006X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\"\u001a\u00020\u0006X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010#\u001a\u00020\u0006X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010$\u001a\u0004\u0018\u00010%X\u0082\u000e¢\u0006\u0002\n\u0000R$\u0010&\u001a\u0012\u0012\u0004\u0012\u00020(\u0012\b\u0012\u00060)R\u00020\u00000'X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b*\u0010+R&\u0010\n\u001a\u00020\u000b2\u0006\u0010,\u001a\u00020\u000b8F@FX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b-\u0010.\"\u0004\b/\u00100R\u000e\u00101\u001a\u00020\u0010X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u00102\u001a\u00020\u0010X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u00103\u001a\u00020\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u00104\u001a\u00020\bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u00105\u001a\u00020\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\t\u001a\u00020\bX\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b6\u00107¨\u0006_"}, d2 = {"Lokhttp3/internal/cache/DiskLruCache;", "Ljava/io/Closeable;", "Ljava/io/Flushable;", "fileSystem", "Lokhttp3/internal/io/FileSystem;", "directory", "Ljava/io/File;", "appVersion", "", "valueCount", "maxSize", "", "taskRunner", "Lokhttp3/internal/concurrent/TaskRunner;", "(Lokhttp3/internal/io/FileSystem;Ljava/io/File;IIJLokhttp3/internal/concurrent/TaskRunner;)V", "civilizedFileSystem", "", "cleanupQueue", "Lokhttp3/internal/concurrent/TaskQueue;", "cleanupTask", "okhttp3/internal/cache/DiskLruCache$cleanupTask$1", "Lokhttp3/internal/cache/DiskLruCache$cleanupTask$1;", "closed", "getClosed$okhttp", "()Z", "setClosed$okhttp", "(Z)V", "getDirectory", "()Ljava/io/File;", "getFileSystem$okhttp", "()Lokhttp3/internal/io/FileSystem;", "hasJournalErrors", "initialized", "journalFile", "journalFileBackup", "journalFileTmp", "journalWriter", "Lokio/BufferedSink;", "lruEntries", "Ljava/util/LinkedHashMap;", "", "Lokhttp3/internal/cache/DiskLruCache$Entry;", "getLruEntries$okhttp", "()Ljava/util/LinkedHashMap;", "value", "getMaxSize", "()J", "setMaxSize", "(J)V", "mostRecentRebuildFailed", "mostRecentTrimFailed", "nextSequenceNumber", "redundantOpCount", "size", "getValueCount$okhttp", "()I", "checkNotClosed", "", "close", "completeEdit", "editor", "Lokhttp3/internal/cache/DiskLruCache$Editor;", "success", "completeEdit$okhttp", "delete", "edit", "key", "expectedSequenceNumber", "evictAll", "flush", "get", "Lokhttp3/internal/cache/DiskLruCache$Snapshot;", "initialize", "isClosed", "journalRebuildRequired", "newJournalWriter", "processJournal", "readJournal", "readJournalLine", "line", "rebuildJournal", "rebuildJournal$okhttp", "remove", "removeEntry", "entry", "removeEntry$okhttp", "removeOldestEntry", "snapshots", "", "trimToSize", "validateKey", "Companion", "Editor", "Entry", "Snapshot", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class DiskLruCache implements java.io.Closeable, java.io.Flushable {
    public static final long ANY_SEQUENCE_NUMBER = 0;
    public static final java.lang.String CLEAN = null;
    public static final okhttp3.internal.cache.DiskLruCache.Companion Companion = null;
    public static final java.lang.String DIRTY = null;
    public static final java.lang.String JOURNAL_FILE = null;
    public static final java.lang.String JOURNAL_FILE_BACKUP = null;
    public static final java.lang.String JOURNAL_FILE_TEMP = null;
    public static final kotlin.text.Regex LEGAL_KEY_PATTERN = null;
    public static final java.lang.String MAGIC = null;
    public static final java.lang.String READ = null;
    public static final java.lang.String REMOVE = null;
    public static final java.lang.String VERSION_1 = null;
    private final int appVersion;
    private boolean civilizedFileSystem;
    private final okhttp3.internal.concurrent.TaskQueue cleanupQueue;
    private final okhttp3.internal.cache.DiskLruCache$cleanupTask$1 cleanupTask;
    private boolean closed;
    private final java.io.File directory;
    private final okhttp3.internal.io.FileSystem fileSystem;
    private boolean hasJournalErrors;
    private boolean initialized;
    private final java.io.File journalFile;
    private final java.io.File journalFileBackup;
    private final java.io.File journalFileTmp;
    private okio.BufferedSink journalWriter;
    private final java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache.Entry> lruEntries;
    private long maxSize;
    private boolean mostRecentRebuildFailed;
    private boolean mostRecentTrimFailed;
    private long nextSequenceNumber;
    private int redundantOpCount;
    private long size;
    private final int valueCount;

    class 1 implements java.lang.Runnable {
        final okhttp3.internal.cache.DiskLruCache this$0;

        1(okhttp3.internal.cache.DiskLruCache r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r5 = this;
                okhttp3.internal.cache.DiskLruCache r0 = r5.this$0
                monitor-enter(r0)
                okhttp3.internal.cache.DiskLruCache r1 = r5.this$0     // Catch: java.lang.Throwable -> L45
                boolean r1 = r1.initialized     // Catch: java.lang.Throwable -> L45
                r2 = 0
                r3 = 1
                if (r1 != 0) goto Ld
                r1 = 1
                goto Le
            Ld:
                r1 = 0
            Le:
                okhttp3.internal.cache.DiskLruCache r4 = r5.this$0     // Catch: java.lang.Throwable -> L45
                boolean r4 = r4.closed     // Catch: java.lang.Throwable -> L45
                r1 = r1 | r4
                if (r1 == 0) goto L17
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L45
                return
            L17:
                okhttp3.internal.cache.DiskLruCache r1 = r5.this$0     // Catch: java.io.IOException -> L1d java.lang.Throwable -> L45
                r1.trimToSize()     // Catch: java.io.IOException -> L1d java.lang.Throwable -> L45
                goto L21
            L1d:
                okhttp3.internal.cache.DiskLruCache r1 = r5.this$0     // Catch: java.lang.Throwable -> L45
                r1.mostRecentTrimFailed = r3     // Catch: java.lang.Throwable -> L45
            L21:
                okhttp3.internal.cache.DiskLruCache r1 = r5.this$0     // Catch: java.io.IOException -> L33 java.lang.Throwable -> L45
                boolean r1 = r1.journalRebuildRequired()     // Catch: java.io.IOException -> L33 java.lang.Throwable -> L45
                if (r1 == 0) goto L43
                okhttp3.internal.cache.DiskLruCache r1 = r5.this$0     // Catch: java.io.IOException -> L33 java.lang.Throwable -> L45
                r1.rebuildJournal()     // Catch: java.io.IOException -> L33 java.lang.Throwable -> L45
                okhttp3.internal.cache.DiskLruCache r1 = r5.this$0     // Catch: java.io.IOException -> L33 java.lang.Throwable -> L45
                r1.redundantOpCount = r2     // Catch: java.io.IOException -> L33 java.lang.Throwable -> L45
                goto L43
            L33:
                okhttp3.internal.cache.DiskLruCache r1 = r5.this$0     // Catch: java.lang.Throwable -> L45
                r1.mostRecentRebuildFailed = r3     // Catch: java.lang.Throwable -> L45
                okhttp3.internal.cache.DiskLruCache r1 = r5.this$0     // Catch: java.lang.Throwable -> L45
                okio.Sink r2 = okio.Okio.blackhole()     // Catch: java.lang.Throwable -> L45
                okio.BufferedSink r2 = okio.Okio.buffer(r2)     // Catch: java.lang.Throwable -> L45
                r1.journalWriter = r2     // Catch: java.lang.Throwable -> L45
            L43:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L45
                return
            L45:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L45
                throw r1
        }
    }

    class 2 extends okhttp3.internal.cache.FaultHidingSink {
        static final boolean $assertionsDisabled = false;
        final okhttp3.internal.cache.DiskLruCache this$0;

        static {
                java.lang.Class<okhttp3.internal.cache.DiskLruCache> r0 = okhttp3.internal.cache.DiskLruCache.class
                return
        }

        2(okhttp3.internal.cache.DiskLruCache r1, okio.Sink r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r2)
                return
        }

        protected void onException(java.io.IOException r2) {
                r1 = this;
                okhttp3.internal.cache.DiskLruCache r2 = r1.this$0
                r0 = 1
                r2.hasJournalErrors = r0
                return
        }
    }

    class 3 implements java.util.Iterator<okhttp3.internal.cache.DiskLruCache.Snapshot> {
        final java.util.Iterator<okhttp3.internal.cache.DiskLruCache.Entry> delegate;
        okhttp3.internal.cache.DiskLruCache.Snapshot nextSnapshot;
        okhttp3.internal.cache.DiskLruCache.Snapshot removeSnapshot;
        final okhttp3.internal.cache.DiskLruCache this$0;

        3(okhttp3.internal.cache.DiskLruCache r2) {
                r1 = this;
                r1.this$0 = r2
                r1.<init>()
                java.util.ArrayList r2 = new java.util.ArrayList
                okhttp3.internal.cache.DiskLruCache r0 = r1.this$0
                java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r0 = r0.lruEntries
                java.util.Collection r0 = r0.values()
                r2.<init>(r0)
                java.util.Iterator r2 = r2.iterator()
                r1.delegate = r2
                return
        }

        @Override
        public boolean hasNext() {
                r4 = this;
                okhttp3.internal.cache.DiskLruCache$Snapshot r0 = r4.nextSnapshot
                r1 = 1
                if (r0 == 0) goto L6
                return r1
            L6:
                okhttp3.internal.cache.DiskLruCache r0 = r4.this$0
                monitor-enter(r0)
                okhttp3.internal.cache.DiskLruCache r2 = r4.this$0     // Catch: java.lang.Throwable -> L2f
                boolean r2 = r2.closed     // Catch: java.lang.Throwable -> L2f
                r3 = 0
                if (r2 == 0) goto L12
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L2f
                return r3
            L12:
                java.util.Iterator<okhttp3.internal.cache.DiskLruCache$Entry> r2 = r4.delegate     // Catch: java.lang.Throwable -> L2f
                boolean r2 = r2.hasNext()     // Catch: java.lang.Throwable -> L2f
                if (r2 == 0) goto L2d
                java.util.Iterator<okhttp3.internal.cache.DiskLruCache$Entry> r2 = r4.delegate     // Catch: java.lang.Throwable -> L2f
                java.lang.Object r2 = r2.next()     // Catch: java.lang.Throwable -> L2f
                okhttp3.internal.cache.DiskLruCache$Entry r2 = (okhttp3.internal.cache.DiskLruCache.Entry) r2     // Catch: java.lang.Throwable -> L2f
                okhttp3.internal.cache.DiskLruCache$Snapshot r2 = r2.snapshot()     // Catch: java.lang.Throwable -> L2f
                if (r2 != 0) goto L29
                goto L12
            L29:
                r4.nextSnapshot = r2     // Catch: java.lang.Throwable -> L2f
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L2f
                return r1
            L2d:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L2f
                return r3
            L2f:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L2f
                goto L33
            L32:
                throw r1
            L33:
                goto L32
        }

        @Override
        public okhttp3.internal.cache.DiskLruCache.Snapshot next() {
                r1 = this;
                okhttp3.internal.cache.DiskLruCache$Snapshot r0 = r1.next()
                return r0
        }

        @Override
        public okhttp3.internal.cache.DiskLruCache.Snapshot next() {
                r2 = this;
                boolean r0 = r2.hasNext()
                if (r0 == 0) goto Le
                okhttp3.internal.cache.DiskLruCache$Snapshot r0 = r2.nextSnapshot
                r2.removeSnapshot = r0
                r1 = 0
                r2.nextSnapshot = r1
                return r0
            Le:
                java.util.NoSuchElementException r0 = new java.util.NoSuchElementException
                r0.<init>()
                throw r0
        }

        @Override
        public void remove() {
                r3 = this;
                okhttp3.internal.cache.DiskLruCache$Snapshot r0 = r3.removeSnapshot
                if (r0 == 0) goto L16
                r1 = 0
                okhttp3.internal.cache.DiskLruCache r2 = r3.this$0     // Catch: java.lang.Throwable -> Lf java.io.IOException -> L13
                java.lang.String r0 = okhttp3.internal.cache.DiskLruCache.Snapshot.access$000(r0)     // Catch: java.lang.Throwable -> Lf java.io.IOException -> L13
                r2.remove(r0)     // Catch: java.lang.Throwable -> Lf java.io.IOException -> L13
                goto L13
            Lf:
                r0 = move-exception
                r3.removeSnapshot = r1
                throw r0
            L13:
                r3.removeSnapshot = r1
                return
            L16:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                java.lang.String r1 = "remove() before next()"
                r0.<init>(r1)
                throw r0
        }
    }

    @kotlin.Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\t\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002R\u0010\u0010\u0003\u001a\u00020\u00048\u0006X\u0087D¢\u0006\u0002\n\u0000R\u0010\u0010\u0005\u001a\u00020\u00068\u0006X\u0087D¢\u0006\u0002\n\u0000R\u0010\u0010\u0007\u001a\u00020\u00068\u0006X\u0087D¢\u0006\u0002\n\u0000R\u0010\u0010\b\u001a\u00020\u00068\u0006X\u0087D¢\u0006\u0002\n\u0000R\u0010\u0010\t\u001a\u00020\u00068\u0006X\u0087D¢\u0006\u0002\n\u0000R\u0010\u0010\n\u001a\u00020\u00068\u0006X\u0087D¢\u0006\u0002\n\u0000R\u0010\u0010\u000b\u001a\u00020\f8\u0006X\u0087\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\r\u001a\u00020\u00068\u0006X\u0087D¢\u0006\u0002\n\u0000R\u0010\u0010\u000e\u001a\u00020\u00068\u0006X\u0087D¢\u0006\u0002\n\u0000R\u0010\u0010\u000f\u001a\u00020\u00068\u0006X\u0087D¢\u0006\u0002\n\u0000R\u0010\u0010\u0010\u001a\u00020\u00068\u0006X\u0087D¢\u0006\u0002\n\u0000¨\u0006\u0011"}, d2 = {"Lokhttp3/internal/cache/DiskLruCache$Companion;", "", "()V", "ANY_SEQUENCE_NUMBER", "", "CLEAN", "", "DIRTY", "JOURNAL_FILE", "JOURNAL_FILE_BACKUP", "JOURNAL_FILE_TEMP", "LEGAL_KEY_PATTERN", "Lkotlin/text/Regex;", "MAGIC", "READ", "REMOVE", "VERSION_1", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
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
    }

    @kotlin.Metadata(d1 = {"\u0000@\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u0018\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0086\u0004\u0018\u00002\u00020\u0001B\u0013\b\u0000\u0012\n\u0010\u0002\u001a\u00060\u0003R\u00020\u0004¢\u0006\u0002\u0010\u0005J\u0006\u0010\u000e\u001a\u00020\u000fJ\u0006\u0010\u0010\u001a\u00020\u000fJ\r\u0010\u0011\u001a\u00020\u000fH\u0000¢\u0006\u0002\b\u0012J\u000e\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0015\u001a\u00020\u0016J\u0010\u0010\u0017\u001a\u0004\u0018\u00010\u00182\u0006\u0010\u0015\u001a\u00020\u0016R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u0018\u0010\u0002\u001a\u00060\u0003R\u00020\u0004X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0016\u0010\n\u001a\u0004\u0018\u00010\u000bX\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\r¨\u0006\u0019"}, d2 = {"Lokhttp3/internal/cache/DiskLruCache$Editor;", "", "entry", "Lokhttp3/internal/cache/DiskLruCache$Entry;", "Lokhttp3/internal/cache/DiskLruCache;", "(Lokhttp3/internal/cache/DiskLruCache;Lokhttp3/internal/cache/DiskLruCache$Entry;)V", "done", "", "getEntry$okhttp", "()Lokhttp3/internal/cache/DiskLruCache$Entry;", "written", "", "getWritten$okhttp", "()[Z", "abort", "", "commit", "detach", "detach$okhttp", "newSink", "Lokio/Sink;", "index", "", "newSource", "Lokio/Source;", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public final class Editor {
        private boolean done;
        private final okhttp3.internal.cache.DiskLruCache.Entry entry;
        final okhttp3.internal.cache.DiskLruCache this$0;
        private final boolean[] written;

        class 1 extends okhttp3.internal.cache.FaultHidingSink {
            final okhttp3.internal.cache.DiskLruCache.Editor this$1;

            1(okhttp3.internal.cache.DiskLruCache.Editor r1, okio.Sink r2) {
                    r0 = this;
                    r0.this$1 = r1
                    r0.<init>(r2)
                    return
            }

            protected void onException(java.io.IOException r2) {
                    r1 = this;
                    okhttp3.internal.cache.DiskLruCache$Editor r2 = r1.this$1
                    okhttp3.internal.cache.DiskLruCache r2 = r2.this$0
                    monitor-enter(r2)
                    okhttp3.internal.cache.DiskLruCache$Editor r0 = r1.this$1     // Catch: java.lang.Throwable -> Lc
                    r0.detach()     // Catch: java.lang.Throwable -> Lc
                    monitor-exit(r2)     // Catch: java.lang.Throwable -> Lc
                    return
                Lc:
                    r0 = move-exception
                    monitor-exit(r2)     // Catch: java.lang.Throwable -> Lc
                    throw r0
            }
        }

        public Editor(okhttp3.internal.cache.DiskLruCache r2, okhttp3.internal.cache.DiskLruCache.Entry r3) {
                r1 = this;
                java.lang.String r0 = "this$0"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                java.lang.String r0 = "entry"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                r1.this$0 = r2
                r1.<init>()
                r1.entry = r3
                boolean r2 = r3.getReadable$okhttp()
                if (r2 == 0) goto L19
                r2 = 0
                goto L21
            L19:
                okhttp3.internal.cache.DiskLruCache r2 = r1.this$0
                int r2 = r2.getValueCount$okhttp()
                boolean[] r2 = new boolean[r2]
            L21:
                r1.written = r2
                return
        }

        public final void abort() throws java.io.IOException {
                r3 = this;
                okhttp3.internal.cache.DiskLruCache r0 = r3.this$0
                monitor-enter(r0)
                boolean r1 = r3.done     // Catch: java.lang.Throwable -> L2d
                r2 = 1
                r1 = r1 ^ r2
                if (r1 == 0) goto L21
                okhttp3.internal.cache.DiskLruCache$Entry r1 = r3.getEntry$okhttp()     // Catch: java.lang.Throwable -> L2d
                okhttp3.internal.cache.DiskLruCache$Editor r1 = r1.getCurrentEditor$okhttp()     // Catch: java.lang.Throwable -> L2d
                boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r1, r3)     // Catch: java.lang.Throwable -> L2d
                if (r1 == 0) goto L1b
                r1 = 0
                r0.completeEdit$okhttp(r3, r1)     // Catch: java.lang.Throwable -> L2d
            L1b:
                r3.done = r2     // Catch: java.lang.Throwable -> L2d
                kotlin.Unit r1 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L2d
                monitor-exit(r0)
                return
            L21:
                java.lang.String r1 = "Check failed."
                java.lang.IllegalStateException r2 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L2d
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L2d
                r2.<init>(r1)     // Catch: java.lang.Throwable -> L2d
                throw r2     // Catch: java.lang.Throwable -> L2d
            L2d:
                r1 = move-exception
                monitor-exit(r0)
                throw r1
        }

        public final void commit() throws java.io.IOException {
                r3 = this;
                okhttp3.internal.cache.DiskLruCache r0 = r3.this$0
                monitor-enter(r0)
                boolean r1 = r3.done     // Catch: java.lang.Throwable -> L2c
                r2 = 1
                r1 = r1 ^ r2
                if (r1 == 0) goto L20
                okhttp3.internal.cache.DiskLruCache$Entry r1 = r3.getEntry$okhttp()     // Catch: java.lang.Throwable -> L2c
                okhttp3.internal.cache.DiskLruCache$Editor r1 = r1.getCurrentEditor$okhttp()     // Catch: java.lang.Throwable -> L2c
                boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r1, r3)     // Catch: java.lang.Throwable -> L2c
                if (r1 == 0) goto L1a
                r0.completeEdit$okhttp(r3, r2)     // Catch: java.lang.Throwable -> L2c
            L1a:
                r3.done = r2     // Catch: java.lang.Throwable -> L2c
                kotlin.Unit r1 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L2c
                monitor-exit(r0)
                return
            L20:
                java.lang.String r1 = "Check failed."
                java.lang.IllegalStateException r2 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L2c
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L2c
                r2.<init>(r1)     // Catch: java.lang.Throwable -> L2c
                throw r2     // Catch: java.lang.Throwable -> L2c
            L2c:
                r1 = move-exception
                monitor-exit(r0)
                throw r1
        }

        public final void detach$okhttp() {
                r2 = this;
                okhttp3.internal.cache.DiskLruCache$Entry r0 = r2.entry
                okhttp3.internal.cache.DiskLruCache$Editor r0 = r0.getCurrentEditor$okhttp()
                boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r2)
                if (r0 == 0) goto L21
                okhttp3.internal.cache.DiskLruCache r0 = r2.this$0
                boolean r0 = okhttp3.internal.cache.DiskLruCache.access$getCivilizedFileSystem$p(r0)
                if (r0 == 0) goto L1b
                okhttp3.internal.cache.DiskLruCache r0 = r2.this$0
                r1 = 0
                r0.completeEdit$okhttp(r2, r1)
                goto L21
            L1b:
                okhttp3.internal.cache.DiskLruCache$Entry r0 = r2.entry
                r1 = 1
                r0.setZombie$okhttp(r1)
            L21:
                return
        }

        public final okhttp3.internal.cache.DiskLruCache.Entry getEntry$okhttp() {
                r1 = this;
                okhttp3.internal.cache.DiskLruCache$Entry r0 = r1.entry
                return r0
        }

        public final boolean[] getWritten$okhttp() {
                r1 = this;
                boolean[] r0 = r1.written
                return r0
        }

        public final okio.Sink newSink(int r4) {
                r3 = this;
                okhttp3.internal.cache.DiskLruCache r0 = r3.this$0
                monitor-enter(r0)
                boolean r1 = r3.done     // Catch: java.lang.Throwable -> L68
                r2 = 1
                r1 = r1 ^ r2
                if (r1 == 0) goto L5c
                okhttp3.internal.cache.DiskLruCache$Entry r1 = r3.getEntry$okhttp()     // Catch: java.lang.Throwable -> L68
                okhttp3.internal.cache.DiskLruCache$Editor r1 = r1.getCurrentEditor$okhttp()     // Catch: java.lang.Throwable -> L68
                boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r1, r3)     // Catch: java.lang.Throwable -> L68
                if (r1 != 0) goto L1d
                okio.Sink r4 = okio.Okio.blackhole()     // Catch: java.lang.Throwable -> L68
                monitor-exit(r0)
                return r4
            L1d:
                okhttp3.internal.cache.DiskLruCache$Entry r1 = r3.getEntry$okhttp()     // Catch: java.lang.Throwable -> L68
                boolean r1 = r1.getReadable$okhttp()     // Catch: java.lang.Throwable -> L68
                if (r1 != 0) goto L30
                boolean[] r1 = r3.getWritten$okhttp()     // Catch: java.lang.Throwable -> L68
                kotlin.jvm.internal.Intrinsics.checkNotNull(r1)     // Catch: java.lang.Throwable -> L68
                r1[r4] = r2     // Catch: java.lang.Throwable -> L68
            L30:
                okhttp3.internal.cache.DiskLruCache$Entry r1 = r3.getEntry$okhttp()     // Catch: java.lang.Throwable -> L68
                java.util.List r1 = r1.getDirtyFiles$okhttp()     // Catch: java.lang.Throwable -> L68
                java.lang.Object r4 = r1.get(r4)     // Catch: java.lang.Throwable -> L68
                java.io.File r4 = (java.io.File) r4     // Catch: java.lang.Throwable -> L68
                okhttp3.internal.io.FileSystem r1 = r0.getFileSystem$okhttp()     // Catch: java.io.FileNotFoundException -> L56 java.lang.Throwable -> L68
                okio.Sink r4 = r1.sink(r4)     // Catch: java.io.FileNotFoundException -> L56 java.lang.Throwable -> L68
                okhttp3.internal.cache.FaultHidingSink r1 = new okhttp3.internal.cache.FaultHidingSink     // Catch: java.lang.Throwable -> L68
                okhttp3.internal.cache.DiskLruCache$Editor$newSink$1$1 r2 = new okhttp3.internal.cache.DiskLruCache$Editor$newSink$1$1     // Catch: java.lang.Throwable -> L68
                r2.<init>(r0, r3)     // Catch: java.lang.Throwable -> L68
                kotlin.jvm.functions.Function1 r2 = (kotlin.jvm.functions.Function1) r2     // Catch: java.lang.Throwable -> L68
                r1.<init>(r4, r2)     // Catch: java.lang.Throwable -> L68
                okio.Sink r1 = (okio.Sink) r1     // Catch: java.lang.Throwable -> L68
                monitor-exit(r0)
                return r1
            L56:
                okio.Sink r4 = okio.Okio.blackhole()     // Catch: java.lang.Throwable -> L68
                monitor-exit(r0)
                return r4
            L5c:
                java.lang.String r4 = "Check failed."
                java.lang.IllegalStateException r1 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L68
                java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L68
                r1.<init>(r4)     // Catch: java.lang.Throwable -> L68
                throw r1     // Catch: java.lang.Throwable -> L68
            L68:
                r4 = move-exception
                monitor-exit(r0)
                throw r4
        }

        public final okio.Source newSource(int r5) {
                r4 = this;
                okhttp3.internal.cache.DiskLruCache r0 = r4.this$0
                monitor-enter(r0)
                boolean r1 = r4.done     // Catch: java.lang.Throwable -> L57
                r1 = r1 ^ 1
                if (r1 == 0) goto L4b
                okhttp3.internal.cache.DiskLruCache$Entry r1 = r4.getEntry$okhttp()     // Catch: java.lang.Throwable -> L57
                boolean r1 = r1.getReadable$okhttp()     // Catch: java.lang.Throwable -> L57
                r2 = 0
                if (r1 == 0) goto L49
                okhttp3.internal.cache.DiskLruCache$Entry r1 = r4.getEntry$okhttp()     // Catch: java.lang.Throwable -> L57
                okhttp3.internal.cache.DiskLruCache$Editor r1 = r1.getCurrentEditor$okhttp()     // Catch: java.lang.Throwable -> L57
                boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r1, r4)     // Catch: java.lang.Throwable -> L57
                if (r1 == 0) goto L49
                okhttp3.internal.cache.DiskLruCache$Entry r1 = r4.getEntry$okhttp()     // Catch: java.lang.Throwable -> L57
                boolean r1 = r1.getZombie$okhttp()     // Catch: java.lang.Throwable -> L57
                if (r1 == 0) goto L2d
                goto L49
            L2d:
                okhttp3.internal.io.FileSystem r1 = r0.getFileSystem$okhttp()     // Catch: java.io.FileNotFoundException -> L44 java.lang.Throwable -> L57
                okhttp3.internal.cache.DiskLruCache$Entry r3 = r4.getEntry$okhttp()     // Catch: java.io.FileNotFoundException -> L44 java.lang.Throwable -> L57
                java.util.List r3 = r3.getCleanFiles$okhttp()     // Catch: java.io.FileNotFoundException -> L44 java.lang.Throwable -> L57
                java.lang.Object r5 = r3.get(r5)     // Catch: java.io.FileNotFoundException -> L44 java.lang.Throwable -> L57
                java.io.File r5 = (java.io.File) r5     // Catch: java.io.FileNotFoundException -> L44 java.lang.Throwable -> L57
                okio.Source r5 = r1.source(r5)     // Catch: java.io.FileNotFoundException -> L44 java.lang.Throwable -> L57
                goto L47
            L44:
                r5 = r2
                okio.Source r5 = (okio.Source) r5     // Catch: java.lang.Throwable -> L57
            L47:
                monitor-exit(r0)
                return r5
            L49:
                monitor-exit(r0)
                return r2
            L4b:
                java.lang.String r5 = "Check failed."
                java.lang.IllegalStateException r1 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L57
                java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L57
                r1.<init>(r5)     // Catch: java.lang.Throwable -> L57
                throw r1     // Catch: java.lang.Throwable -> L57
            L57:
                r5 = move-exception
                monitor-exit(r0)
                throw r5
        }
    }

    @kotlin.Metadata(d1 = {"\u0000v\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010!\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0010\u0016\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\u0005\n\u0002\u0010\t\n\u0002\b\b\n\u0002\u0010\u0001\n\u0000\n\u0002\u0010 \n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0080\u0004\u0018\u00002\u00020\u0001B\u000f\b\u0000\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004J\u0016\u0010.\u001a\u00020/2\f\u00100\u001a\b\u0012\u0004\u0012\u00020\u000301H\u0002J\u0010\u00102\u001a\u0002032\u0006\u00104\u001a\u00020\u001aH\u0002J\u001b\u00105\u001a\u0002062\f\u00100\u001a\b\u0012\u0004\u0012\u00020\u000301H\u0000¢\u0006\u0002\b7J\u0013\u00108\u001a\b\u0018\u000109R\u00020\fH\u0000¢\u0006\u0002\b:J\u0015\u0010;\u001a\u0002062\u0006\u0010<\u001a\u00020=H\u0000¢\u0006\u0002\b>R\u001a\u0010\u0005\u001a\b\u0012\u0004\u0012\u00020\u00070\u0006X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR \u0010\n\u001a\b\u0018\u00010\u000bR\u00020\fX\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\r\u0010\u000e\"\u0004\b\u000f\u0010\u0010R\u001a\u0010\u0011\u001a\b\u0012\u0004\u0012\u00020\u00070\u0006X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\tR\u0014\u0010\u0002\u001a\u00020\u0003X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0014R\u0014\u0010\u0015\u001a\u00020\u0016X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0018R\u001a\u0010\u0019\u001a\u00020\u001aX\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001b\u0010\u001c\"\u0004\b\u001d\u0010\u001eR\u001a\u0010\u001f\u001a\u00020 X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b!\u0010\"\"\u0004\b#\u0010$R\u001a\u0010%\u001a\u00020&X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b'\u0010(\"\u0004\b)\u0010*R\u001a\u0010+\u001a\u00020 X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b,\u0010\"\"\u0004\b-\u0010$¨\u0006?"}, d2 = {"Lokhttp3/internal/cache/DiskLruCache$Entry;", "", "key", "", "(Lokhttp3/internal/cache/DiskLruCache;Ljava/lang/String;)V", "cleanFiles", "", "Ljava/io/File;", "getCleanFiles$okhttp", "()Ljava/util/List;", "currentEditor", "Lokhttp3/internal/cache/DiskLruCache$Editor;", "Lokhttp3/internal/cache/DiskLruCache;", "getCurrentEditor$okhttp", "()Lokhttp3/internal/cache/DiskLruCache$Editor;", "setCurrentEditor$okhttp", "(Lokhttp3/internal/cache/DiskLruCache$Editor;)V", "dirtyFiles", "getDirtyFiles$okhttp", "getKey$okhttp", "()Ljava/lang/String;", "lengths", "", "getLengths$okhttp", "()[J", "lockingSourceCount", "", "getLockingSourceCount$okhttp", "()I", "setLockingSourceCount$okhttp", "(I)V", "readable", "", "getReadable$okhttp", "()Z", "setReadable$okhttp", "(Z)V", "sequenceNumber", "", "getSequenceNumber$okhttp", "()J", "setSequenceNumber$okhttp", "(J)V", "zombie", "getZombie$okhttp", "setZombie$okhttp", "invalidLengths", "", "strings", "", "newSource", "Lokio/Source;", "index", "setLengths", "", "setLengths$okhttp", "snapshot", "Lokhttp3/internal/cache/DiskLruCache$Snapshot;", "snapshot$okhttp", "writeLengths", "writer", "Lokio/BufferedSink;", "writeLengths$okhttp", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public final class Entry {
        private final java.util.List<java.io.File> cleanFiles;
        private okhttp3.internal.cache.DiskLruCache.Editor currentEditor;
        private final java.util.List<java.io.File> dirtyFiles;
        private final java.lang.String key;
        private final long[] lengths;
        private int lockingSourceCount;
        private boolean readable;
        private long sequenceNumber;
        final okhttp3.internal.cache.DiskLruCache this$0;
        private boolean zombie;

        public Entry(okhttp3.internal.cache.DiskLruCache r7, java.lang.String r8) {
                r6 = this;
                java.lang.String r0 = "this$0"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
                java.lang.String r0 = "key"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
                r6.this$0 = r7
                r6.<init>()
                r6.key = r8
                okhttp3.internal.cache.DiskLruCache r7 = r6.this$0
                int r7 = r7.getValueCount$okhttp()
                long[] r7 = new long[r7]
                r6.lengths = r7
                java.util.ArrayList r7 = new java.util.ArrayList
                r7.<init>()
                java.util.List r7 = (java.util.List) r7
                r6.cleanFiles = r7
                java.util.ArrayList r7 = new java.util.ArrayList
                r7.<init>()
                java.util.List r7 = (java.util.List) r7
                r6.dirtyFiles = r7
                java.lang.StringBuilder r7 = new java.lang.StringBuilder
                java.lang.String r8 = r6.key
                r7.<init>(r8)
                r8 = 46
                r7.append(r8)
                int r8 = r7.length()
                okhttp3.internal.cache.DiskLruCache r0 = r6.this$0
                int r0 = r0.getValueCount$okhttp()
                r1 = 0
            L44:
                if (r1 >= r0) goto L81
                int r2 = r1 + 1
                r7.append(r1)
                java.util.List<java.io.File> r1 = r6.cleanFiles
                java.util.Collection r1 = (java.util.Collection) r1
                java.io.File r3 = new java.io.File
                okhttp3.internal.cache.DiskLruCache r4 = r6.this$0
                java.io.File r4 = r4.getDirectory()
                java.lang.String r5 = r7.toString()
                r3.<init>(r4, r5)
                r1.add(r3)
                java.lang.String r1 = ".tmp"
                r7.append(r1)
                java.util.List<java.io.File> r1 = r6.dirtyFiles
                java.util.Collection r1 = (java.util.Collection) r1
                java.io.File r3 = new java.io.File
                okhttp3.internal.cache.DiskLruCache r4 = r6.this$0
                java.io.File r4 = r4.getDirectory()
                java.lang.String r5 = r7.toString()
                r3.<init>(r4, r5)
                r1.add(r3)
                r7.setLength(r8)
                r1 = r2
                goto L44
            L81:
                return
        }

        private final java.lang.Void invalidLengths(java.util.List<java.lang.String> r3) throws java.io.IOException {
                r2 = this;
                java.io.IOException r0 = new java.io.IOException
                java.lang.String r1 = "unexpected journal line: "
                java.lang.String r3 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r3)
                r0.<init>(r3)
                throw r0
        }

        private final okio.Source newSource(int r3) {
                r2 = this;
                okhttp3.internal.cache.DiskLruCache r0 = r2.this$0
                okhttp3.internal.io.FileSystem r0 = r0.getFileSystem$okhttp()
                java.util.List<java.io.File> r1 = r2.cleanFiles
                java.lang.Object r3 = r1.get(r3)
                java.io.File r3 = (java.io.File) r3
                okio.Source r3 = r0.source(r3)
                okhttp3.internal.cache.DiskLruCache r0 = r2.this$0
                boolean r0 = okhttp3.internal.cache.DiskLruCache.access$getCivilizedFileSystem$p(r0)
                if (r0 == 0) goto L1b
                return r3
            L1b:
                int r0 = r2.lockingSourceCount
                int r0 = r0 + 1
                r2.lockingSourceCount = r0
                okhttp3.internal.cache.DiskLruCache$Entry$newSource$1 r0 = new okhttp3.internal.cache.DiskLruCache$Entry$newSource$1
                okhttp3.internal.cache.DiskLruCache r1 = r2.this$0
                r0.<init>(r3, r1, r2)
                okio.Source r0 = (okio.Source) r0
                return r0
        }

        public final java.util.List<java.io.File> getCleanFiles$okhttp() {
                r1 = this;
                java.util.List<java.io.File> r0 = r1.cleanFiles
                return r0
        }

        public final okhttp3.internal.cache.DiskLruCache.Editor getCurrentEditor$okhttp() {
                r1 = this;
                okhttp3.internal.cache.DiskLruCache$Editor r0 = r1.currentEditor
                return r0
        }

        public final java.util.List<java.io.File> getDirtyFiles$okhttp() {
                r1 = this;
                java.util.List<java.io.File> r0 = r1.dirtyFiles
                return r0
        }

        public final java.lang.String getKey$okhttp() {
                r1 = this;
                java.lang.String r0 = r1.key
                return r0
        }

        public final long[] getLengths$okhttp() {
                r1 = this;
                long[] r0 = r1.lengths
                return r0
        }

        public final int getLockingSourceCount$okhttp() {
                r1 = this;
                int r0 = r1.lockingSourceCount
                return r0
        }

        public final boolean getReadable$okhttp() {
                r1 = this;
                boolean r0 = r1.readable
                return r0
        }

        public final long getSequenceNumber$okhttp() {
                r2 = this;
                long r0 = r2.sequenceNumber
                return r0
        }

        public final boolean getZombie$okhttp() {
                r1 = this;
                boolean r0 = r1.zombie
                return r0
        }

        public final void setCurrentEditor$okhttp(okhttp3.internal.cache.DiskLruCache.Editor r1) {
                r0 = this;
                r0.currentEditor = r1
                return
        }

        public final void setLengths$okhttp(java.util.List<java.lang.String> r7) throws java.io.IOException {
                r6 = this;
                java.lang.String r0 = "strings"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
                int r0 = r7.size()
                okhttp3.internal.cache.DiskLruCache r1 = r6.this$0
                int r1 = r1.getValueCount$okhttp()
                if (r0 != r1) goto L34
                r0 = 0
                int r1 = r7.size()     // Catch: java.lang.NumberFormatException -> L2b
            L16:
                if (r0 >= r1) goto L2a
                int r2 = r0 + 1
                long[] r3 = r6.lengths     // Catch: java.lang.NumberFormatException -> L2b
                java.lang.Object r4 = r7.get(r0)     // Catch: java.lang.NumberFormatException -> L2b
                java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.NumberFormatException -> L2b
                long r4 = java.lang.Long.parseLong(r4)     // Catch: java.lang.NumberFormatException -> L2b
                r3[r0] = r4     // Catch: java.lang.NumberFormatException -> L2b
                r0 = r2
                goto L16
            L2a:
                return
            L2b:
                r6.invalidLengths(r7)
                kotlin.KotlinNothingValueException r7 = new kotlin.KotlinNothingValueException
                r7.<init>()
                throw r7
            L34:
                r6.invalidLengths(r7)
                kotlin.KotlinNothingValueException r7 = new kotlin.KotlinNothingValueException
                r7.<init>()
                throw r7
        }

        public final void setLockingSourceCount$okhttp(int r1) {
                r0 = this;
                r0.lockingSourceCount = r1
                return
        }

        public final void setReadable$okhttp(boolean r1) {
                r0 = this;
                r0.readable = r1
                return
        }

        public final void setSequenceNumber$okhttp(long r1) {
                r0 = this;
                r0.sequenceNumber = r1
                return
        }

        public final void setZombie$okhttp(boolean r1) {
                r0 = this;
                r0.zombie = r1
                return
        }

        public final okhttp3.internal.cache.DiskLruCache.Snapshot snapshot$okhttp() {
                r10 = this;
                okhttp3.internal.cache.DiskLruCache r0 = r10.this$0
                boolean r1 = okhttp3.internal.Util.assertionsEnabled
                if (r1 == 0) goto L34
                boolean r1 = java.lang.Thread.holdsLock(r0)
                if (r1 == 0) goto Ld
                goto L34
            Ld:
                java.lang.AssertionError r1 = new java.lang.AssertionError
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = "Thread "
                r2.append(r3)
                java.lang.Thread r3 = java.lang.Thread.currentThread()
                java.lang.String r3 = r3.getName()
                r2.append(r3)
                java.lang.String r3 = " MUST hold lock on "
                r2.append(r3)
                r2.append(r0)
                java.lang.String r0 = r2.toString()
                r1.<init>(r0)
                throw r1
            L34:
                boolean r0 = r10.readable
                r1 = 0
                if (r0 != 0) goto L3a
                return r1
            L3a:
                okhttp3.internal.cache.DiskLruCache r0 = r10.this$0
                boolean r0 = okhttp3.internal.cache.DiskLruCache.access$getCivilizedFileSystem$p(r0)
                if (r0 != 0) goto L4b
                okhttp3.internal.cache.DiskLruCache$Editor r0 = r10.currentEditor
                if (r0 != 0) goto L4a
                boolean r0 = r10.zombie
                if (r0 == 0) goto L4b
            L4a:
                return r1
            L4b:
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                java.util.List r0 = (java.util.List) r0
                long[] r2 = r10.lengths
                java.lang.Object r2 = r2.clone()
                r8 = r2
                long[] r8 = (long[]) r8
                r2 = 0
                okhttp3.internal.cache.DiskLruCache r3 = r10.this$0     // Catch: java.io.FileNotFoundException -> L80
                int r3 = r3.getValueCount$okhttp()     // Catch: java.io.FileNotFoundException -> L80
            L62:
                if (r2 >= r3) goto L72
                int r4 = r2 + 1
                r5 = r0
                java.util.Collection r5 = (java.util.Collection) r5     // Catch: java.io.FileNotFoundException -> L80
                okio.Source r2 = r10.newSource(r2)     // Catch: java.io.FileNotFoundException -> L80
                r5.add(r2)     // Catch: java.io.FileNotFoundException -> L80
                r2 = r4
                goto L62
            L72:
                okhttp3.internal.cache.DiskLruCache$Snapshot r9 = new okhttp3.internal.cache.DiskLruCache$Snapshot     // Catch: java.io.FileNotFoundException -> L80
                okhttp3.internal.cache.DiskLruCache r3 = r10.this$0     // Catch: java.io.FileNotFoundException -> L80
                java.lang.String r4 = r10.key     // Catch: java.io.FileNotFoundException -> L80
                long r5 = r10.sequenceNumber     // Catch: java.io.FileNotFoundException -> L80
                r2 = r9
                r7 = r0
                r2.<init>(r3, r4, r5, r7, r8)     // Catch: java.io.FileNotFoundException -> L80
                return r9
            L80:
                java.util.Iterator r0 = r0.iterator()
            L84:
                boolean r2 = r0.hasNext()
                if (r2 == 0) goto L96
                java.lang.Object r2 = r0.next()
                okio.Source r2 = (okio.Source) r2
                java.io.Closeable r2 = (java.io.Closeable) r2
                okhttp3.internal.Util.closeQuietly(r2)
                goto L84
            L96:
                okhttp3.internal.cache.DiskLruCache r0 = r10.this$0     // Catch: java.io.IOException -> L9b
                r0.removeEntry$okhttp(r10)     // Catch: java.io.IOException -> L9b
            L9b:
                return r1
        }

        public final void writeLengths$okhttp(okio.BufferedSink r7) throws java.io.IOException {
                r6 = this;
                java.lang.String r0 = "writer"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
                long[] r0 = r6.lengths
                int r1 = r0.length
                r2 = 0
            L9:
                if (r2 >= r1) goto L19
                r3 = r0[r2]
                int r2 = r2 + 1
                r5 = 32
                okio.BufferedSink r5 = r7.writeByte(r5)
                r5.writeDecimalLong(r3)
                goto L9
            L19:
                return
        }
    }

    @kotlin.Metadata(d1 = {"\u0000B\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0016\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\u0004\u0018\u00002\u00020\u0001B-\b\u0000\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\f\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\b0\u0007\u0012\u0006\u0010\t\u001a\u00020\n¢\u0006\u0002\u0010\u000bJ\b\u0010\f\u001a\u00020\rH\u0016J\f\u0010\u000e\u001a\b\u0018\u00010\u000fR\u00020\u0010J\u000e\u0010\u0011\u001a\u00020\u00052\u0006\u0010\u0012\u001a\u00020\u0013J\u000e\u0010\u0014\u001a\u00020\b2\u0006\u0010\u0012\u001a\u00020\u0013J\u0006\u0010\u0002\u001a\u00020\u0003R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\nX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\b0\u0007X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0015"}, d2 = {"Lokhttp3/internal/cache/DiskLruCache$Snapshot;", "Ljava/io/Closeable;", "key", "", "sequenceNumber", "", "sources", "", "Lokio/Source;", "lengths", "", "(Lokhttp3/internal/cache/DiskLruCache;Ljava/lang/String;JLjava/util/List;[J)V", "close", "", "edit", "Lokhttp3/internal/cache/DiskLruCache$Editor;", "Lokhttp3/internal/cache/DiskLruCache;", "getLength", "index", "", "getSource", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public final class Snapshot implements java.io.Closeable {
        private final java.lang.String key;
        private final long[] lengths;
        private final long sequenceNumber;
        private final java.util.List<okio.Source> sources;
        final okhttp3.internal.cache.DiskLruCache this$0;

        public Snapshot(okhttp3.internal.cache.DiskLruCache r2, java.lang.String r3, long r4, java.util.List<? extends okio.Source> r6, long[] r7) {
                r1 = this;
                java.lang.String r0 = "this$0"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                java.lang.String r0 = "key"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                java.lang.String r0 = "sources"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
                java.lang.String r0 = "lengths"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
                r1.this$0 = r2
                r1.<init>()
                r1.key = r3
                r1.sequenceNumber = r4
                r1.sources = r6
                r1.lengths = r7
                return
        }

        @Override
        public void close() {
                r2 = this;
                java.util.List<okio.Source> r0 = r2.sources
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L18
                java.lang.Object r1 = r0.next()
                okio.Source r1 = (okio.Source) r1
                java.io.Closeable r1 = (java.io.Closeable) r1
                okhttp3.internal.Util.closeQuietly(r1)
                goto L6
            L18:
                return
        }

        public final okhttp3.internal.cache.DiskLruCache.Editor edit() throws java.io.IOException {
                r4 = this;
                okhttp3.internal.cache.DiskLruCache r0 = r4.this$0
                java.lang.String r1 = r4.key
                long r2 = r4.sequenceNumber
                okhttp3.internal.cache.DiskLruCache$Editor r0 = r0.edit(r1, r2)
                return r0
        }

        public final long getLength(int r4) {
                r3 = this;
                long[] r0 = r3.lengths
                r1 = r0[r4]
                return r1
        }

        public final okio.Source getSource(int r2) {
                r1 = this;
                java.util.List<okio.Source> r0 = r1.sources
                java.lang.Object r2 = r0.get(r2)
                okio.Source r2 = (okio.Source) r2
                return r2
        }

        public final java.lang.String key() {
                r1 = this;
                java.lang.String r0 = r1.key
                return r0
        }
    }

    @kotlin.Metadata(d1 = {"\u0000)\n\u0000\n\u0002\u0010)\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000*\u0001\u0000\b\n\u0018\u00002\f\u0012\b\u0012\u00060\u0002R\u00020\u00030\u0001J\t\u0010\t\u001a\u00020\nH\u0096\u0002J\r\u0010\u000b\u001a\u00060\u0002R\u00020\u0003H\u0096\u0002J\b\u0010\f\u001a\u00020\rH\u0016R$\u0010\u0004\u001a\u0018\u0012\u0014\u0012\u0012 \u0006*\b\u0018\u00010\u0005R\u00020\u00030\u0005R\u00020\u00030\u0001X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0007\u001a\b\u0018\u00010\u0002R\u00020\u0003X\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\b\u001a\b\u0018\u00010\u0002R\u00020\u0003X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u000e"}, d2 = {"okhttp3/internal/cache/DiskLruCache$snapshots$1", "", "Lokhttp3/internal/cache/DiskLruCache$Snapshot;", "Lokhttp3/internal/cache/DiskLruCache;", "delegate", "Lokhttp3/internal/cache/DiskLruCache$Entry;", "kotlin.jvm.PlatformType", "nextSnapshot", "removeSnapshot", "hasNext", "", "next", "remove", "", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class 1 implements java.util.Iterator<okhttp3.internal.cache.DiskLruCache.Snapshot>, kotlin.jvm.internal.markers.KMutableIterator {
        private final java.util.Iterator<okhttp3.internal.cache.DiskLruCache.Entry> delegate;
        private okhttp3.internal.cache.DiskLruCache.Snapshot nextSnapshot;
        private okhttp3.internal.cache.DiskLruCache.Snapshot removeSnapshot;
        final okhttp3.internal.cache.DiskLruCache this$0;

        1(okhttp3.internal.cache.DiskLruCache r2) {
                r1 = this;
                r1.this$0 = r2
                r1.<init>()
                java.util.ArrayList r2 = new java.util.ArrayList
                okhttp3.internal.cache.DiskLruCache r0 = r1.this$0
                java.util.LinkedHashMap r0 = r0.getLruEntries$okhttp()
                java.util.Collection r0 = r0.values()
                r2.<init>(r0)
                java.util.Iterator r2 = r2.iterator()
                java.lang.String r0 = "ArrayList(lruEntries.values).iterator()"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r0)
                r1.delegate = r2
                return
        }

        @Override
        public boolean hasNext() {
                r4 = this;
                okhttp3.internal.cache.DiskLruCache$Snapshot r0 = r4.nextSnapshot
                r1 = 1
                if (r0 == 0) goto L6
                return r1
            L6:
                okhttp3.internal.cache.DiskLruCache r0 = r4.this$0
                monitor-enter(r0)
                boolean r2 = r0.getClosed$okhttp()     // Catch: java.lang.Throwable -> L35
                r3 = 0
                if (r2 == 0) goto L12
                monitor-exit(r0)
                return r3
            L12:
                java.util.Iterator<okhttp3.internal.cache.DiskLruCache$Entry> r2 = r4.delegate     // Catch: java.lang.Throwable -> L35
                boolean r2 = r2.hasNext()     // Catch: java.lang.Throwable -> L35
                if (r2 == 0) goto L31
                java.util.Iterator<okhttp3.internal.cache.DiskLruCache$Entry> r2 = r4.delegate     // Catch: java.lang.Throwable -> L35
                java.lang.Object r2 = r2.next()     // Catch: java.lang.Throwable -> L35
                okhttp3.internal.cache.DiskLruCache$Entry r2 = (okhttp3.internal.cache.DiskLruCache.Entry) r2     // Catch: java.lang.Throwable -> L35
                if (r2 != 0) goto L26
                r2 = 0
                goto L2a
            L26:
                okhttp3.internal.cache.DiskLruCache$Snapshot r2 = r2.snapshot$okhttp()     // Catch: java.lang.Throwable -> L35
            L2a:
                if (r2 != 0) goto L2d
                goto L12
            L2d:
                r4.nextSnapshot = r2     // Catch: java.lang.Throwable -> L35
                monitor-exit(r0)
                return r1
            L31:
                kotlin.Unit r1 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L35
                monitor-exit(r0)
                return r3
            L35:
                r1 = move-exception
                monitor-exit(r0)
                throw r1
        }

        @Override
        public okhttp3.internal.cache.DiskLruCache.Snapshot next() {
                r1 = this;
                okhttp3.internal.cache.DiskLruCache$Snapshot r0 = r1.next()
                return r0
        }

        @Override
        public okhttp3.internal.cache.DiskLruCache.Snapshot next() {
                r2 = this;
                boolean r0 = r2.hasNext()
                if (r0 == 0) goto L11
                okhttp3.internal.cache.DiskLruCache$Snapshot r0 = r2.nextSnapshot
                r2.removeSnapshot = r0
                r1 = 0
                r2.nextSnapshot = r1
                kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
                return r0
            L11:
                java.util.NoSuchElementException r0 = new java.util.NoSuchElementException
                r0.<init>()
                throw r0
        }

        @Override
        public void remove() {
                r3 = this;
                okhttp3.internal.cache.DiskLruCache$Snapshot r0 = r3.removeSnapshot
                if (r0 == 0) goto L16
                r1 = 0
                okhttp3.internal.cache.DiskLruCache r2 = r3.this$0     // Catch: java.lang.Throwable -> Lf java.io.IOException -> L13
                java.lang.String r0 = r0.key()     // Catch: java.lang.Throwable -> Lf java.io.IOException -> L13
                r2.remove(r0)     // Catch: java.lang.Throwable -> Lf java.io.IOException -> L13
                goto L13
            Lf:
                r0 = move-exception
                r3.removeSnapshot = r1
                throw r0
            L13:
                r3.removeSnapshot = r1
                return
            L16:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                java.lang.String r1 = "remove() before next()"
                java.lang.String r1 = r1.toString()
                r0.<init>(r1)
                throw r0
        }
    }

    static {
            okhttp3.internal.cache.DiskLruCache$Companion r0 = new okhttp3.internal.cache.DiskLruCache$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.internal.cache.DiskLruCache.Companion = r0
            java.lang.String r0 = "journal"
            okhttp3.internal.cache.DiskLruCache.JOURNAL_FILE = r0
            java.lang.String r0 = "journal.tmp"
            okhttp3.internal.cache.DiskLruCache.JOURNAL_FILE_TEMP = r0
            java.lang.String r0 = "journal.bkp"
            okhttp3.internal.cache.DiskLruCache.JOURNAL_FILE_BACKUP = r0
            java.lang.String r0 = "libcore.io.DiskLruCache"
            okhttp3.internal.cache.DiskLruCache.MAGIC = r0
            java.lang.String r0 = "1"
            okhttp3.internal.cache.DiskLruCache.VERSION_1 = r0
            r0 = -1
            okhttp3.internal.cache.DiskLruCache.ANY_SEQUENCE_NUMBER = r0
            kotlin.text.Regex r0 = new kotlin.text.Regex
            java.lang.String r1 = "[a-z0-9_-]{1,120}"
            r0.<init>(r1)
            okhttp3.internal.cache.DiskLruCache.LEGAL_KEY_PATTERN = r0
            java.lang.String r0 = "CLEAN"
            okhttp3.internal.cache.DiskLruCache.CLEAN = r0
            java.lang.String r0 = "DIRTY"
            okhttp3.internal.cache.DiskLruCache.DIRTY = r0
            java.lang.String r0 = "REMOVE"
            okhttp3.internal.cache.DiskLruCache.REMOVE = r0
            java.lang.String r0 = "READ"
            okhttp3.internal.cache.DiskLruCache.READ = r0
            return
    }

    public DiskLruCache(okhttp3.internal.io.FileSystem r3, java.io.File r4, int r5, int r6, long r7, okhttp3.internal.concurrent.TaskRunner r9) {
            r2 = this;
            java.lang.String r0 = "fileSystem"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "directory"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r0 = "taskRunner"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            r2.<init>()
            r2.fileSystem = r3
            r2.directory = r4
            r2.appVersion = r5
            r2.valueCount = r6
            r2.maxSize = r7
            java.util.LinkedHashMap r3 = new java.util.LinkedHashMap
            r4 = 1
            r5 = 0
            r6 = 1061158912(0x3f400000, float:0.75)
            r3.<init>(r5, r6, r4)
            r2.lruEntries = r3
            okhttp3.internal.concurrent.TaskQueue r3 = r9.newQueue()
            r2.cleanupQueue = r3
            java.lang.String r3 = okhttp3.internal.Util.okHttpName
            java.lang.String r6 = " Cache"
            java.lang.String r3 = kotlin.jvm.internal.Intrinsics.stringPlus(r3, r6)
            okhttp3.internal.cache.DiskLruCache$cleanupTask$1 r6 = new okhttp3.internal.cache.DiskLruCache$cleanupTask$1
            r6.<init>(r2, r3)
            r2.cleanupTask = r6
            r0 = 0
            int r3 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r3 <= 0) goto L44
            r3 = r4
            goto L45
        L44:
            r3 = r5
        L45:
            if (r3 == 0) goto L7d
            int r3 = r2.valueCount
            if (r3 <= 0) goto L4c
            goto L4d
        L4c:
            r4 = r5
        L4d:
            if (r4 == 0) goto L71
            java.io.File r3 = new java.io.File
            java.io.File r4 = r2.directory
            java.lang.String r5 = okhttp3.internal.cache.DiskLruCache.JOURNAL_FILE
            r3.<init>(r4, r5)
            r2.journalFile = r3
            java.io.File r3 = new java.io.File
            java.io.File r4 = r2.directory
            java.lang.String r5 = okhttp3.internal.cache.DiskLruCache.JOURNAL_FILE_TEMP
            r3.<init>(r4, r5)
            r2.journalFileTmp = r3
            java.io.File r3 = new java.io.File
            java.io.File r4 = r2.directory
            java.lang.String r5 = okhttp3.internal.cache.DiskLruCache.JOURNAL_FILE_BACKUP
            r3.<init>(r4, r5)
            r2.journalFileBackup = r3
            return
        L71:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "valueCount <= 0"
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            throw r3
        L7d:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "maxSize <= 0"
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            throw r3
    }

    public static final boolean access$getCivilizedFileSystem$p(okhttp3.internal.cache.DiskLruCache r0) {
            boolean r0 = r0.civilizedFileSystem
            return r0
    }

    public static final boolean access$getInitialized$p(okhttp3.internal.cache.DiskLruCache r0) {
            boolean r0 = r0.initialized
            return r0
    }

    public static final boolean access$journalRebuildRequired(okhttp3.internal.cache.DiskLruCache r0) {
            boolean r0 = r0.journalRebuildRequired()
            return r0
    }

    public static final void access$setHasJournalErrors$p(okhttp3.internal.cache.DiskLruCache r0, boolean r1) {
            r0.hasJournalErrors = r1
            return
    }

    public static final void access$setJournalWriter$p(okhttp3.internal.cache.DiskLruCache r0, okio.BufferedSink r1) {
            r0.journalWriter = r1
            return
    }

    public static final void access$setMostRecentRebuildFailed$p(okhttp3.internal.cache.DiskLruCache r0, boolean r1) {
            r0.mostRecentRebuildFailed = r1
            return
    }

    public static final void access$setMostRecentTrimFailed$p(okhttp3.internal.cache.DiskLruCache r0, boolean r1) {
            r0.mostRecentTrimFailed = r1
            return
    }

    public static final void access$setRedundantOpCount$p(okhttp3.internal.cache.DiskLruCache r0, int r1) {
            r0.redundantOpCount = r1
            return
    }

    private final synchronized void checkNotClosed() {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.closed     // Catch: java.lang.Throwable -> L15
            r0 = r0 ^ 1
            if (r0 == 0) goto L9
            monitor-exit(r2)
            return
        L9:
            java.lang.String r0 = "cache is closed"
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L15
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L15
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L15
            throw r1     // Catch: java.lang.Throwable -> L15
        L15:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public static okhttp3.internal.cache.DiskLruCache.Editor edit$default(okhttp3.internal.cache.DiskLruCache r0, java.lang.String r1, long r2, int r4, java.lang.Object r5) throws java.io.IOException {
            r4 = r4 & 2
            if (r4 == 0) goto L6
            long r2 = okhttp3.internal.cache.DiskLruCache.ANY_SEQUENCE_NUMBER
        L6:
            okhttp3.internal.cache.DiskLruCache$Editor r0 = r0.edit(r1, r2)
            return r0
    }

    private final boolean journalRebuildRequired() {
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

    private final okio.BufferedSink newJournalWriter() throws java.io.FileNotFoundException {
            r3 = this;
            okhttp3.internal.io.FileSystem r0 = r3.fileSystem
            java.io.File r1 = r3.journalFile
            okio.Sink r0 = r0.appendingSink(r1)
            okhttp3.internal.cache.FaultHidingSink r1 = new okhttp3.internal.cache.FaultHidingSink
            okhttp3.internal.cache.DiskLruCache$newJournalWriter$faultHidingSink$1 r2 = new okhttp3.internal.cache.DiskLruCache$newJournalWriter$faultHidingSink$1
            r2.<init>(r3)
            kotlin.jvm.functions.Function1 r2 = (kotlin.jvm.functions.Function1) r2
            r1.<init>(r0, r2)
            okio.Sink r1 = (okio.Sink) r1
            okio.BufferedSink r0 = okio.Okio.buffer(r1)
            return r0
    }

    private final void processJournal() throws java.io.IOException {
            r10 = this;
            okhttp3.internal.io.FileSystem r0 = r10.fileSystem
            java.io.File r1 = r10.journalFileTmp
            r0.delete(r1)
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r0 = r10.lruEntries
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        L11:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L6a
            java.lang.Object r1 = r0.next()
            java.lang.String r2 = "i.next()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            okhttp3.internal.cache.DiskLruCache$Entry r1 = (okhttp3.internal.cache.DiskLruCache.Entry) r1
            okhttp3.internal.cache.DiskLruCache$Editor r2 = r1.getCurrentEditor$okhttp()
            r3 = 0
            if (r2 != 0) goto L3c
            int r2 = r10.valueCount
        L2b:
            if (r3 >= r2) goto L11
            int r4 = r3 + 1
            long r5 = r10.size
            long[] r7 = r1.getLengths$okhttp()
            r8 = r7[r3]
            long r5 = r5 + r8
            r10.size = r5
            r3 = r4
            goto L2b
        L3c:
            r2 = 0
            r1.setCurrentEditor$okhttp(r2)
            int r2 = r10.valueCount
        L42:
            if (r3 >= r2) goto L66
            int r4 = r3 + 1
            okhttp3.internal.io.FileSystem r5 = r10.fileSystem
            java.util.List r6 = r1.getCleanFiles$okhttp()
            java.lang.Object r6 = r6.get(r3)
            java.io.File r6 = (java.io.File) r6
            r5.delete(r6)
            okhttp3.internal.io.FileSystem r5 = r10.fileSystem
            java.util.List r6 = r1.getDirtyFiles$okhttp()
            java.lang.Object r3 = r6.get(r3)
            java.io.File r3 = (java.io.File) r3
            r5.delete(r3)
            r3 = r4
            goto L42
        L66:
            r0.remove()
            goto L11
        L6a:
            return
    }

    private final void readJournal() throws java.io.IOException {
            r9 = this;
            java.lang.String r0 = ", "
            okhttp3.internal.io.FileSystem r1 = r9.fileSystem
            java.io.File r2 = r9.journalFile
            okio.Source r1 = r1.source(r2)
            okio.BufferedSource r1 = okio.Okio.buffer(r1)
            java.io.Closeable r1 = (java.io.Closeable) r1
            r2 = r1
            okio.BufferedSource r2 = (okio.BufferedSource) r2     // Catch: java.lang.Throwable -> Lba
            java.lang.String r3 = r2.readUtf8LineStrict()     // Catch: java.lang.Throwable -> Lba
            java.lang.String r4 = r2.readUtf8LineStrict()     // Catch: java.lang.Throwable -> Lba
            java.lang.String r5 = r2.readUtf8LineStrict()     // Catch: java.lang.Throwable -> Lba
            java.lang.String r6 = r2.readUtf8LineStrict()     // Catch: java.lang.Throwable -> Lba
            java.lang.String r7 = r2.readUtf8LineStrict()     // Catch: java.lang.Throwable -> Lba
            java.lang.String r8 = okhttp3.internal.cache.DiskLruCache.MAGIC     // Catch: java.lang.Throwable -> Lba
            boolean r8 = kotlin.jvm.internal.Intrinsics.areEqual(r8, r3)     // Catch: java.lang.Throwable -> Lba
            if (r8 == 0) goto L8c
            java.lang.String r8 = okhttp3.internal.cache.DiskLruCache.VERSION_1     // Catch: java.lang.Throwable -> Lba
            boolean r8 = kotlin.jvm.internal.Intrinsics.areEqual(r8, r4)     // Catch: java.lang.Throwable -> Lba
            if (r8 == 0) goto L8c
            int r8 = r9.appVersion     // Catch: java.lang.Throwable -> Lba
            java.lang.String r8 = java.lang.String.valueOf(r8)     // Catch: java.lang.Throwable -> Lba
            boolean r5 = kotlin.jvm.internal.Intrinsics.areEqual(r8, r5)     // Catch: java.lang.Throwable -> Lba
            if (r5 == 0) goto L8c
            int r5 = r9.getValueCount$okhttp()     // Catch: java.lang.Throwable -> Lba
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: java.lang.Throwable -> Lba
            boolean r5 = kotlin.jvm.internal.Intrinsics.areEqual(r5, r6)     // Catch: java.lang.Throwable -> Lba
            if (r5 == 0) goto L8c
            r5 = r7
            java.lang.CharSequence r5 = (java.lang.CharSequence) r5     // Catch: java.lang.Throwable -> Lba
            int r5 = r5.length()     // Catch: java.lang.Throwable -> Lba
            r8 = 0
            if (r5 <= 0) goto L5d
            r5 = 1
            goto L5e
        L5d:
            r5 = r8
        L5e:
            if (r5 != 0) goto L8c
        L60:
            java.lang.String r0 = r2.readUtf8LineStrict()     // Catch: java.io.EOFException -> L6a java.lang.Throwable -> Lba
            r9.readJournalLine(r0)     // Catch: java.io.EOFException -> L6a java.lang.Throwable -> Lba
            int r8 = r8 + 1
            goto L60
        L6a:
            java.util.LinkedHashMap r0 = r9.getLruEntries$okhttp()     // Catch: java.lang.Throwable -> Lba
            int r0 = r0.size()     // Catch: java.lang.Throwable -> Lba
            int r8 = r8 - r0
            r9.redundantOpCount = r8     // Catch: java.lang.Throwable -> Lba
            boolean r0 = r2.exhausted()     // Catch: java.lang.Throwable -> Lba
            if (r0 != 0) goto L7f
            r9.rebuildJournal$okhttp()     // Catch: java.lang.Throwable -> Lba
            goto L85
        L7f:
            okio.BufferedSink r0 = r9.newJournalWriter()     // Catch: java.lang.Throwable -> Lba
            r9.journalWriter = r0     // Catch: java.lang.Throwable -> Lba
        L85:
            kotlin.Unit r0 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> Lba
            r0 = 0
            kotlin.io.CloseableKt.closeFinally(r1, r0)
            return
        L8c:
            java.io.IOException r2 = new java.io.IOException     // Catch: java.lang.Throwable -> Lba
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lba
            r5.<init>()     // Catch: java.lang.Throwable -> Lba
            java.lang.String r8 = "unexpected journal header: ["
            r5.append(r8)     // Catch: java.lang.Throwable -> Lba
            r5.append(r3)     // Catch: java.lang.Throwable -> Lba
            r5.append(r0)     // Catch: java.lang.Throwable -> Lba
            r5.append(r4)     // Catch: java.lang.Throwable -> Lba
            r5.append(r0)     // Catch: java.lang.Throwable -> Lba
            r5.append(r6)     // Catch: java.lang.Throwable -> Lba
            r5.append(r0)     // Catch: java.lang.Throwable -> Lba
            r5.append(r7)     // Catch: java.lang.Throwable -> Lba
            r0 = 93
            r5.append(r0)     // Catch: java.lang.Throwable -> Lba
            java.lang.String r0 = r5.toString()     // Catch: java.lang.Throwable -> Lba
            r2.<init>(r0)     // Catch: java.lang.Throwable -> Lba
            throw r2     // Catch: java.lang.Throwable -> Lba
        Lba:
            r0 = move-exception
            throw r0     // Catch: java.lang.Throwable -> Lbc
        Lbc:
            r2 = move-exception
            kotlin.io.CloseableKt.closeFinally(r1, r0)
            throw r2
    }

    private final void readJournalLine(java.lang.String r14) throws java.io.IOException {
            r13 = this;
            r6 = r14
            java.lang.CharSequence r6 = (java.lang.CharSequence) r6
            r1 = 32
            r2 = 0
            r3 = 0
            r4 = 6
            r5 = 0
            r0 = r6
            int r7 = kotlin.text.StringsKt.indexOf$default(r0, r1, r2, r3, r4, r5)
            java.lang.String r8 = "unexpected journal line: "
            r9 = -1
            if (r7 == r9) goto Ld1
            int r10 = r7 + 1
            r1 = 32
            r3 = 0
            r4 = 4
            r5 = 0
            r0 = r6
            r2 = r10
            int r0 = kotlin.text.StringsKt.indexOf$default(r0, r1, r2, r3, r4, r5)
            java.lang.String r1 = "this as java.lang.String).substring(startIndex)"
            r2 = 2
            r3 = 0
            r4 = 0
            if (r0 != r9) goto L44
            java.lang.String r5 = r14.substring(r10)
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r5, r1)
            java.lang.String r6 = okhttp3.internal.cache.DiskLruCache.REMOVE
            int r6 = r6.length()
            if (r7 != r6) goto L4d
            java.lang.String r6 = okhttp3.internal.cache.DiskLruCache.REMOVE
            boolean r6 = kotlin.text.StringsKt.startsWith$default(r14, r6, r4, r2, r3)
            if (r6 == 0) goto L4d
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r14 = r13.lruEntries
            r14.remove(r5)
            return
        L44:
            java.lang.String r5 = r14.substring(r10, r0)
            java.lang.String r6 = "this as java.lang.String…ing(startIndex, endIndex)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r5, r6)
        L4d:
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r6 = r13.lruEntries
            java.lang.Object r6 = r6.get(r5)
            okhttp3.internal.cache.DiskLruCache$Entry r6 = (okhttp3.internal.cache.DiskLruCache.Entry) r6
            if (r6 != 0) goto L63
            okhttp3.internal.cache.DiskLruCache$Entry r6 = new okhttp3.internal.cache.DiskLruCache$Entry
            r6.<init>(r13, r5)
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r10 = r13.lruEntries
            java.util.Map r10 = (java.util.Map) r10
            r10.put(r5, r6)
        L63:
            if (r0 == r9) goto L99
            java.lang.String r5 = okhttp3.internal.cache.DiskLruCache.CLEAN
            int r5 = r5.length()
            if (r7 != r5) goto L99
            java.lang.String r5 = okhttp3.internal.cache.DiskLruCache.CLEAN
            boolean r5 = kotlin.text.StringsKt.startsWith$default(r14, r5, r4, r2, r3)
            if (r5 == 0) goto L99
            r2 = 1
            int r0 = r0 + r2
            java.lang.String r14 = r14.substring(r0)
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r14, r1)
            r7 = r14
            java.lang.CharSequence r7 = (java.lang.CharSequence) r7
            char[] r8 = new char[r2]
            r14 = 32
            r8[r4] = r14
            r9 = 0
            r10 = 0
            r11 = 6
            r12 = 0
            java.util.List r14 = kotlin.text.StringsKt.split$default(r7, r8, r9, r10, r11, r12)
            r6.setReadable$okhttp(r2)
            r6.setCurrentEditor$okhttp(r3)
            r6.setLengths$okhttp(r14)
            goto Lc6
        L99:
            if (r0 != r9) goto Lb4
            java.lang.String r1 = okhttp3.internal.cache.DiskLruCache.DIRTY
            int r1 = r1.length()
            if (r7 != r1) goto Lb4
            java.lang.String r1 = okhttp3.internal.cache.DiskLruCache.DIRTY
            boolean r1 = kotlin.text.StringsKt.startsWith$default(r14, r1, r4, r2, r3)
            if (r1 == 0) goto Lb4
            okhttp3.internal.cache.DiskLruCache$Editor r14 = new okhttp3.internal.cache.DiskLruCache$Editor
            r14.<init>(r13, r6)
            r6.setCurrentEditor$okhttp(r14)
            goto Lc6
        Lb4:
            if (r0 != r9) goto Lc7
            java.lang.String r0 = okhttp3.internal.cache.DiskLruCache.READ
            int r0 = r0.length()
            if (r7 != r0) goto Lc7
            java.lang.String r0 = okhttp3.internal.cache.DiskLruCache.READ
            boolean r0 = kotlin.text.StringsKt.startsWith$default(r14, r0, r4, r2, r3)
            if (r0 == 0) goto Lc7
        Lc6:
            return
        Lc7:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r14 = kotlin.jvm.internal.Intrinsics.stringPlus(r8, r14)
            r0.<init>(r14)
            throw r0
        Ld1:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r14 = kotlin.jvm.internal.Intrinsics.stringPlus(r8, r14)
            r0.<init>(r14)
            throw r0
    }

    private final boolean removeOldestEntry() {
            r3 = this;
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r0 = r3.lruEntries
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L26
            java.lang.Object r1 = r0.next()
            okhttp3.internal.cache.DiskLruCache$Entry r1 = (okhttp3.internal.cache.DiskLruCache.Entry) r1
            boolean r2 = r1.getZombie$okhttp()
            if (r2 != 0) goto La
            java.lang.String r0 = "toEvict"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r0)
            r3.removeEntry$okhttp(r1)
            r0 = 1
            return r0
        L26:
            r0 = 0
            return r0
    }

    private final void validateKey(java.lang.String r3) {
            r2 = this;
            kotlin.text.Regex r0 = okhttp3.internal.cache.DiskLruCache.LEGAL_KEY_PATTERN
            r1 = r3
            java.lang.CharSequence r1 = (java.lang.CharSequence) r1
            boolean r0 = r0.matches(r1)
            if (r0 == 0) goto Lc
            return
        Lc:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "keys must match regex [a-z0-9_-]{1,120}: \""
            r0.append(r1)
            r0.append(r3)
            r3 = 34
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r3 = r3.toString()
            r0.<init>(r3)
            throw r0
    }

    @Override
    public synchronized void close() throws java.io.IOException {
            r6 = this;
            monitor-enter(r6)
            boolean r0 = r6.initialized     // Catch: java.lang.Throwable -> L57
            r1 = 1
            if (r0 == 0) goto L53
            boolean r0 = r6.closed     // Catch: java.lang.Throwable -> L57
            if (r0 == 0) goto Lb
            goto L53
        Lb:
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r0 = r6.lruEntries     // Catch: java.lang.Throwable -> L57
            java.util.Collection r0 = r0.values()     // Catch: java.lang.Throwable -> L57
            java.lang.String r2 = "lruEntries.values"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r2)     // Catch: java.lang.Throwable -> L57
            r2 = 0
            okhttp3.internal.cache.DiskLruCache$Entry[] r3 = new okhttp3.internal.cache.DiskLruCache.Entry[r2]     // Catch: java.lang.Throwable -> L57
            java.lang.Object[] r0 = r0.toArray(r3)     // Catch: java.lang.Throwable -> L57
            if (r0 == 0) goto L4b
            okhttp3.internal.cache.DiskLruCache$Entry[] r0 = (okhttp3.internal.cache.DiskLruCache.Entry[]) r0     // Catch: java.lang.Throwable -> L57
            int r3 = r0.length     // Catch: java.lang.Throwable -> L57
        L22:
            if (r2 >= r3) goto L39
            r4 = r0[r2]     // Catch: java.lang.Throwable -> L57
            int r2 = r2 + 1
            okhttp3.internal.cache.DiskLruCache$Editor r5 = r4.getCurrentEditor$okhttp()     // Catch: java.lang.Throwable -> L57
            if (r5 == 0) goto L22
            okhttp3.internal.cache.DiskLruCache$Editor r4 = r4.getCurrentEditor$okhttp()     // Catch: java.lang.Throwable -> L57
            if (r4 != 0) goto L35
            goto L22
        L35:
            r4.detach$okhttp()     // Catch: java.lang.Throwable -> L57
            goto L22
        L39:
            r6.trimToSize()     // Catch: java.lang.Throwable -> L57
            okio.BufferedSink r0 = r6.journalWriter     // Catch: java.lang.Throwable -> L57
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)     // Catch: java.lang.Throwable -> L57
            r0.close()     // Catch: java.lang.Throwable -> L57
            r0 = 0
            r6.journalWriter = r0     // Catch: java.lang.Throwable -> L57
            r6.closed = r1     // Catch: java.lang.Throwable -> L57
            monitor-exit(r6)
            return
        L4b:
            java.lang.NullPointerException r0 = new java.lang.NullPointerException     // Catch: java.lang.Throwable -> L57
            java.lang.String r1 = "null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L57
            throw r0     // Catch: java.lang.Throwable -> L57
        L53:
            r6.closed = r1     // Catch: java.lang.Throwable -> L57
            monitor-exit(r6)
            return
        L57:
            r0 = move-exception
            monitor-exit(r6)
            throw r0
    }

    public final synchronized void completeEdit$okhttp(okhttp3.internal.cache.DiskLruCache.Editor r10, boolean r11) throws java.io.IOException {
            r9 = this;
            monitor-enter(r9)
            java.lang.String r0 = "editor"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)     // Catch: java.lang.Throwable -> L142
            okhttp3.internal.cache.DiskLruCache$Entry r0 = r10.getEntry$okhttp()     // Catch: java.lang.Throwable -> L142
            okhttp3.internal.cache.DiskLruCache$Editor r1 = r0.getCurrentEditor$okhttp()     // Catch: java.lang.Throwable -> L142
            boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r1, r10)     // Catch: java.lang.Throwable -> L142
            if (r1 == 0) goto L136
            r1 = 0
            if (r11 == 0) goto L5b
            boolean r2 = r0.getReadable$okhttp()     // Catch: java.lang.Throwable -> L142
            if (r2 != 0) goto L5b
            int r2 = r9.valueCount     // Catch: java.lang.Throwable -> L142
            r3 = r1
        L20:
            if (r3 >= r2) goto L5b
            int r4 = r3 + 1
            boolean[] r5 = r10.getWritten$okhttp()     // Catch: java.lang.Throwable -> L142
            kotlin.jvm.internal.Intrinsics.checkNotNull(r5)     // Catch: java.lang.Throwable -> L142
            boolean r5 = r5[r3]     // Catch: java.lang.Throwable -> L142
            if (r5 == 0) goto L48
            okhttp3.internal.io.FileSystem r5 = r9.fileSystem     // Catch: java.lang.Throwable -> L142
            java.util.List r6 = r0.getDirtyFiles$okhttp()     // Catch: java.lang.Throwable -> L142
            java.lang.Object r3 = r6.get(r3)     // Catch: java.lang.Throwable -> L142
            java.io.File r3 = (java.io.File) r3     // Catch: java.lang.Throwable -> L142
            boolean r3 = r5.exists(r3)     // Catch: java.lang.Throwable -> L142
            if (r3 != 0) goto L46
            r10.abort()     // Catch: java.lang.Throwable -> L142
            monitor-exit(r9)
            return
        L46:
            r3 = r4
            goto L20
        L48:
            r10.abort()     // Catch: java.lang.Throwable -> L142
            java.lang.IllegalStateException r10 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L142
            java.lang.String r11 = "Newly created entry didn't create value for index "
            java.lang.Integer r0 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L142
            java.lang.String r11 = kotlin.jvm.internal.Intrinsics.stringPlus(r11, r0)     // Catch: java.lang.Throwable -> L142
            r10.<init>(r11)     // Catch: java.lang.Throwable -> L142
            throw r10     // Catch: java.lang.Throwable -> L142
        L5b:
            int r10 = r9.valueCount     // Catch: java.lang.Throwable -> L142
        L5d:
            if (r1 >= r10) goto Laa
            int r2 = r1 + 1
            java.util.List r3 = r0.getDirtyFiles$okhttp()     // Catch: java.lang.Throwable -> L142
            java.lang.Object r3 = r3.get(r1)     // Catch: java.lang.Throwable -> L142
            java.io.File r3 = (java.io.File) r3     // Catch: java.lang.Throwable -> L142
            if (r11 == 0) goto La3
            boolean r4 = r0.getZombie$okhttp()     // Catch: java.lang.Throwable -> L142
            if (r4 != 0) goto La3
            okhttp3.internal.io.FileSystem r4 = r9.fileSystem     // Catch: java.lang.Throwable -> L142
            boolean r4 = r4.exists(r3)     // Catch: java.lang.Throwable -> L142
            if (r4 == 0) goto La8
            java.util.List r4 = r0.getCleanFiles$okhttp()     // Catch: java.lang.Throwable -> L142
            java.lang.Object r4 = r4.get(r1)     // Catch: java.lang.Throwable -> L142
            java.io.File r4 = (java.io.File) r4     // Catch: java.lang.Throwable -> L142
            okhttp3.internal.io.FileSystem r5 = r9.fileSystem     // Catch: java.lang.Throwable -> L142
            r5.rename(r3, r4)     // Catch: java.lang.Throwable -> L142
            long[] r3 = r0.getLengths$okhttp()     // Catch: java.lang.Throwable -> L142
            r5 = r3[r1]     // Catch: java.lang.Throwable -> L142
            okhttp3.internal.io.FileSystem r3 = r9.fileSystem     // Catch: java.lang.Throwable -> L142
            long r3 = r3.size(r4)     // Catch: java.lang.Throwable -> L142
            long[] r7 = r0.getLengths$okhttp()     // Catch: java.lang.Throwable -> L142
            r7[r1] = r3     // Catch: java.lang.Throwable -> L142
            long r7 = r9.size     // Catch: java.lang.Throwable -> L142
            long r7 = r7 - r5
            long r7 = r7 + r3
            r9.size = r7     // Catch: java.lang.Throwable -> L142
            goto La8
        La3:
            okhttp3.internal.io.FileSystem r1 = r9.fileSystem     // Catch: java.lang.Throwable -> L142
            r1.delete(r3)     // Catch: java.lang.Throwable -> L142
        La8:
            r1 = r2
            goto L5d
        Laa:
            r10 = 0
            r0.setCurrentEditor$okhttp(r10)     // Catch: java.lang.Throwable -> L142
            boolean r10 = r0.getZombie$okhttp()     // Catch: java.lang.Throwable -> L142
            if (r10 == 0) goto Lb9
            r9.removeEntry$okhttp(r0)     // Catch: java.lang.Throwable -> L142
            monitor-exit(r9)
            return
        Lb9:
            int r10 = r9.redundantOpCount     // Catch: java.lang.Throwable -> L142
            r1 = 1
            int r10 = r10 + r1
            r9.redundantOpCount = r10     // Catch: java.lang.Throwable -> L142
            okio.BufferedSink r10 = r9.journalWriter     // Catch: java.lang.Throwable -> L142
            kotlin.jvm.internal.Intrinsics.checkNotNull(r10)     // Catch: java.lang.Throwable -> L142
            boolean r2 = r0.getReadable$okhttp()     // Catch: java.lang.Throwable -> L142
            r3 = 10
            r4 = 32
            if (r2 != 0) goto Lf0
            if (r11 == 0) goto Ld1
            goto Lf0
        Ld1:
            java.util.LinkedHashMap r11 = r9.getLruEntries$okhttp()     // Catch: java.lang.Throwable -> L142
            java.lang.String r1 = r0.getKey$okhttp()     // Catch: java.lang.Throwable -> L142
            r11.remove(r1)     // Catch: java.lang.Throwable -> L142
            java.lang.String r11 = okhttp3.internal.cache.DiskLruCache.REMOVE     // Catch: java.lang.Throwable -> L142
            okio.BufferedSink r11 = r10.writeUtf8(r11)     // Catch: java.lang.Throwable -> L142
            r11.writeByte(r4)     // Catch: java.lang.Throwable -> L142
            java.lang.String r11 = r0.getKey$okhttp()     // Catch: java.lang.Throwable -> L142
            r10.writeUtf8(r11)     // Catch: java.lang.Throwable -> L142
            r10.writeByte(r3)     // Catch: java.lang.Throwable -> L142
            goto L115
        Lf0:
            r0.setReadable$okhttp(r1)     // Catch: java.lang.Throwable -> L142
            java.lang.String r1 = okhttp3.internal.cache.DiskLruCache.CLEAN     // Catch: java.lang.Throwable -> L142
            okio.BufferedSink r1 = r10.writeUtf8(r1)     // Catch: java.lang.Throwable -> L142
            r1.writeByte(r4)     // Catch: java.lang.Throwable -> L142
            java.lang.String r1 = r0.getKey$okhttp()     // Catch: java.lang.Throwable -> L142
            r10.writeUtf8(r1)     // Catch: java.lang.Throwable -> L142
            r0.writeLengths$okhttp(r10)     // Catch: java.lang.Throwable -> L142
            r10.writeByte(r3)     // Catch: java.lang.Throwable -> L142
            if (r11 == 0) goto L115
            long r1 = r9.nextSequenceNumber     // Catch: java.lang.Throwable -> L142
            r3 = 1
            long r3 = r3 + r1
            r9.nextSequenceNumber = r3     // Catch: java.lang.Throwable -> L142
            r0.setSequenceNumber$okhttp(r1)     // Catch: java.lang.Throwable -> L142
        L115:
            r10.flush()     // Catch: java.lang.Throwable -> L142
            long r10 = r9.size     // Catch: java.lang.Throwable -> L142
            long r0 = r9.maxSize     // Catch: java.lang.Throwable -> L142
            int r10 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r10 > 0) goto L126
            boolean r10 = r9.journalRebuildRequired()     // Catch: java.lang.Throwable -> L142
            if (r10 == 0) goto L134
        L126:
            okhttp3.internal.concurrent.TaskQueue r0 = r9.cleanupQueue     // Catch: java.lang.Throwable -> L142
            okhttp3.internal.cache.DiskLruCache$cleanupTask$1 r10 = r9.cleanupTask     // Catch: java.lang.Throwable -> L142
            r1 = r10
            okhttp3.internal.concurrent.Task r1 = (okhttp3.internal.concurrent.Task) r1     // Catch: java.lang.Throwable -> L142
            r2 = 0
            r4 = 2
            r5 = 0
            okhttp3.internal.concurrent.TaskQueue.schedule$default(r0, r1, r2, r4, r5)     // Catch: java.lang.Throwable -> L142
        L134:
            monitor-exit(r9)
            return
        L136:
            java.lang.String r10 = "Check failed."
            java.lang.IllegalStateException r11 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L142
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> L142
            r11.<init>(r10)     // Catch: java.lang.Throwable -> L142
            throw r11     // Catch: java.lang.Throwable -> L142
        L142:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
    }

    public final void delete() throws java.io.IOException {
            r2 = this;
            r2.close()
            okhttp3.internal.io.FileSystem r0 = r2.fileSystem
            java.io.File r1 = r2.directory
            r0.deleteContents(r1)
            return
    }

    public final okhttp3.internal.cache.DiskLruCache.Editor edit(java.lang.String r8) throws java.io.IOException {
            r7 = this;
            java.lang.String r0 = "key"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            r3 = 0
            r5 = 2
            r6 = 0
            r1 = r7
            r2 = r8
            okhttp3.internal.cache.DiskLruCache$Editor r8 = edit$default(r1, r2, r3, r5, r6)
            return r8
    }

    public final synchronized okhttp3.internal.cache.DiskLruCache.Editor edit(java.lang.String r10, long r11) throws java.io.IOException {
            r9 = this;
            monitor-enter(r9)
            java.lang.String r0 = "key"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)     // Catch: java.lang.Throwable -> L94
            r9.initialize()     // Catch: java.lang.Throwable -> L94
            r9.checkNotClosed()     // Catch: java.lang.Throwable -> L94
            r9.validateKey(r10)     // Catch: java.lang.Throwable -> L94
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r0 = r9.lruEntries     // Catch: java.lang.Throwable -> L94
            java.lang.Object r0 = r0.get(r10)     // Catch: java.lang.Throwable -> L94
            okhttp3.internal.cache.DiskLruCache$Entry r0 = (okhttp3.internal.cache.DiskLruCache.Entry) r0     // Catch: java.lang.Throwable -> L94
            long r1 = okhttp3.internal.cache.DiskLruCache.ANY_SEQUENCE_NUMBER     // Catch: java.lang.Throwable -> L94
            int r1 = (r11 > r1 ? 1 : (r11 == r1 ? 0 : -1))
            r2 = 0
            if (r1 == 0) goto L2a
            if (r0 == 0) goto L28
            long r3 = r0.getSequenceNumber$okhttp()     // Catch: java.lang.Throwable -> L94
            int r11 = (r3 > r11 ? 1 : (r3 == r11 ? 0 : -1))
            if (r11 == 0) goto L2a
        L28:
            monitor-exit(r9)
            return r2
        L2a:
            if (r0 != 0) goto L2e
            r11 = r2
            goto L32
        L2e:
            okhttp3.internal.cache.DiskLruCache$Editor r11 = r0.getCurrentEditor$okhttp()     // Catch: java.lang.Throwable -> L94
        L32:
            if (r11 == 0) goto L36
            monitor-exit(r9)
            return r2
        L36:
            if (r0 == 0) goto L40
            int r11 = r0.getLockingSourceCount$okhttp()     // Catch: java.lang.Throwable -> L94
            if (r11 == 0) goto L40
            monitor-exit(r9)
            return r2
        L40:
            boolean r11 = r9.mostRecentTrimFailed     // Catch: java.lang.Throwable -> L94
            if (r11 != 0) goto L84
            boolean r11 = r9.mostRecentRebuildFailed     // Catch: java.lang.Throwable -> L94
            if (r11 == 0) goto L49
            goto L84
        L49:
            okio.BufferedSink r11 = r9.journalWriter     // Catch: java.lang.Throwable -> L94
            kotlin.jvm.internal.Intrinsics.checkNotNull(r11)     // Catch: java.lang.Throwable -> L94
            java.lang.String r12 = okhttp3.internal.cache.DiskLruCache.DIRTY     // Catch: java.lang.Throwable -> L94
            okio.BufferedSink r12 = r11.writeUtf8(r12)     // Catch: java.lang.Throwable -> L94
            r1 = 32
            okio.BufferedSink r12 = r12.writeByte(r1)     // Catch: java.lang.Throwable -> L94
            okio.BufferedSink r12 = r12.writeUtf8(r10)     // Catch: java.lang.Throwable -> L94
            r1 = 10
            r12.writeByte(r1)     // Catch: java.lang.Throwable -> L94
            r11.flush()     // Catch: java.lang.Throwable -> L94
            boolean r11 = r9.hasJournalErrors     // Catch: java.lang.Throwable -> L94
            if (r11 == 0) goto L6c
            monitor-exit(r9)
            return r2
        L6c:
            if (r0 != 0) goto L7a
            okhttp3.internal.cache.DiskLruCache$Entry r0 = new okhttp3.internal.cache.DiskLruCache$Entry     // Catch: java.lang.Throwable -> L94
            r0.<init>(r9, r10)     // Catch: java.lang.Throwable -> L94
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r11 = r9.lruEntries     // Catch: java.lang.Throwable -> L94
            java.util.Map r11 = (java.util.Map) r11     // Catch: java.lang.Throwable -> L94
            r11.put(r10, r0)     // Catch: java.lang.Throwable -> L94
        L7a:
            okhttp3.internal.cache.DiskLruCache$Editor r10 = new okhttp3.internal.cache.DiskLruCache$Editor     // Catch: java.lang.Throwable -> L94
            r10.<init>(r9, r0)     // Catch: java.lang.Throwable -> L94
            r0.setCurrentEditor$okhttp(r10)     // Catch: java.lang.Throwable -> L94
            monitor-exit(r9)
            return r10
        L84:
            okhttp3.internal.concurrent.TaskQueue r3 = r9.cleanupQueue     // Catch: java.lang.Throwable -> L94
            okhttp3.internal.cache.DiskLruCache$cleanupTask$1 r10 = r9.cleanupTask     // Catch: java.lang.Throwable -> L94
            r4 = r10
            okhttp3.internal.concurrent.Task r4 = (okhttp3.internal.concurrent.Task) r4     // Catch: java.lang.Throwable -> L94
            r5 = 0
            r7 = 2
            r8 = 0
            okhttp3.internal.concurrent.TaskQueue.schedule$default(r3, r4, r5, r7, r8)     // Catch: java.lang.Throwable -> L94
            monitor-exit(r9)
            return r2
        L94:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
    }

    public final synchronized void evictAll() throws java.io.IOException {
            r6 = this;
            monitor-enter(r6)
            r6.initialize()     // Catch: java.lang.Throwable -> L37
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r0 = r6.lruEntries     // Catch: java.lang.Throwable -> L37
            java.util.Collection r0 = r0.values()     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = "lruEntries.values"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)     // Catch: java.lang.Throwable -> L37
            r1 = 0
            okhttp3.internal.cache.DiskLruCache$Entry[] r2 = new okhttp3.internal.cache.DiskLruCache.Entry[r1]     // Catch: java.lang.Throwable -> L37
            java.lang.Object[] r0 = r0.toArray(r2)     // Catch: java.lang.Throwable -> L37
            if (r0 == 0) goto L2f
            okhttp3.internal.cache.DiskLruCache$Entry[] r0 = (okhttp3.internal.cache.DiskLruCache.Entry[]) r0     // Catch: java.lang.Throwable -> L37
            int r2 = r0.length     // Catch: java.lang.Throwable -> L37
            r3 = r1
        L1c:
            if (r3 >= r2) goto L2b
            r4 = r0[r3]     // Catch: java.lang.Throwable -> L37
            int r3 = r3 + 1
            java.lang.String r5 = "entry"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r4, r5)     // Catch: java.lang.Throwable -> L37
            r6.removeEntry$okhttp(r4)     // Catch: java.lang.Throwable -> L37
            goto L1c
        L2b:
            r6.mostRecentTrimFailed = r1     // Catch: java.lang.Throwable -> L37
            monitor-exit(r6)
            return
        L2f:
            java.lang.NullPointerException r0 = new java.lang.NullPointerException     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = "null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L37
            throw r0     // Catch: java.lang.Throwable -> L37
        L37:
            r0 = move-exception
            monitor-exit(r6)
            throw r0
    }

    @Override
    public synchronized void flush() throws java.io.IOException {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.initialized     // Catch: java.lang.Throwable -> L17
            if (r0 != 0) goto L7
            monitor-exit(r1)
            return
        L7:
            r1.checkNotClosed()     // Catch: java.lang.Throwable -> L17
            r1.trimToSize()     // Catch: java.lang.Throwable -> L17
            okio.BufferedSink r0 = r1.journalWriter     // Catch: java.lang.Throwable -> L17
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)     // Catch: java.lang.Throwable -> L17
            r0.flush()     // Catch: java.lang.Throwable -> L17
            monitor-exit(r1)
            return
        L17:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized okhttp3.internal.cache.DiskLruCache.Snapshot get(java.lang.String r8) throws java.io.IOException {
            r7 = this;
            monitor-enter(r7)
            java.lang.String r0 = "key"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)     // Catch: java.lang.Throwable -> L5a
            r7.initialize()     // Catch: java.lang.Throwable -> L5a
            r7.checkNotClosed()     // Catch: java.lang.Throwable -> L5a
            r7.validateKey(r8)     // Catch: java.lang.Throwable -> L5a
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r0 = r7.lruEntries     // Catch: java.lang.Throwable -> L5a
            java.lang.Object r0 = r0.get(r8)     // Catch: java.lang.Throwable -> L5a
            okhttp3.internal.cache.DiskLruCache$Entry r0 = (okhttp3.internal.cache.DiskLruCache.Entry) r0     // Catch: java.lang.Throwable -> L5a
            r1 = 0
            if (r0 != 0) goto L1c
            monitor-exit(r7)
            return r1
        L1c:
            okhttp3.internal.cache.DiskLruCache$Snapshot r0 = r0.snapshot$okhttp()     // Catch: java.lang.Throwable -> L5a
            if (r0 != 0) goto L24
            monitor-exit(r7)
            return r1
        L24:
            int r1 = r7.redundantOpCount     // Catch: java.lang.Throwable -> L5a
            int r1 = r1 + 1
            r7.redundantOpCount = r1     // Catch: java.lang.Throwable -> L5a
            okio.BufferedSink r1 = r7.journalWriter     // Catch: java.lang.Throwable -> L5a
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r2 = okhttp3.internal.cache.DiskLruCache.READ     // Catch: java.lang.Throwable -> L5a
            okio.BufferedSink r1 = r1.writeUtf8(r2)     // Catch: java.lang.Throwable -> L5a
            r2 = 32
            okio.BufferedSink r1 = r1.writeByte(r2)     // Catch: java.lang.Throwable -> L5a
            okio.BufferedSink r8 = r1.writeUtf8(r8)     // Catch: java.lang.Throwable -> L5a
            r1 = 10
            r8.writeByte(r1)     // Catch: java.lang.Throwable -> L5a
            boolean r8 = r7.journalRebuildRequired()     // Catch: java.lang.Throwable -> L5a
            if (r8 == 0) goto L58
            okhttp3.internal.concurrent.TaskQueue r1 = r7.cleanupQueue     // Catch: java.lang.Throwable -> L5a
            okhttp3.internal.cache.DiskLruCache$cleanupTask$1 r8 = r7.cleanupTask     // Catch: java.lang.Throwable -> L5a
            r2 = r8
            okhttp3.internal.concurrent.Task r2 = (okhttp3.internal.concurrent.Task) r2     // Catch: java.lang.Throwable -> L5a
            r3 = 0
            r5 = 2
            r6 = 0
            okhttp3.internal.concurrent.TaskQueue.schedule$default(r1, r2, r3, r5, r6)     // Catch: java.lang.Throwable -> L5a
        L58:
            monitor-exit(r7)
            return r0
        L5a:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
    }

    public final boolean getClosed$okhttp() {
            r1 = this;
            boolean r0 = r1.closed
            return r0
    }

    public final java.io.File getDirectory() {
            r1 = this;
            java.io.File r0 = r1.directory
            return r0
    }

    public final okhttp3.internal.io.FileSystem getFileSystem$okhttp() {
            r1 = this;
            okhttp3.internal.io.FileSystem r0 = r1.fileSystem
            return r0
    }

    public final java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache.Entry> getLruEntries$okhttp() {
            r1 = this;
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r0 = r1.lruEntries
            return r0
    }

    public final synchronized long getMaxSize() {
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

    public final int getValueCount$okhttp() {
            r1 = this;
            int r0 = r1.valueCount
            return r0
    }

    public final synchronized void initialize() throws java.io.IOException {
            r5 = this;
            monitor-enter(r5)
            boolean r0 = okhttp3.internal.Util.assertionsEnabled     // Catch: java.lang.Throwable -> Lc0
            if (r0 == 0) goto L33
            boolean r0 = java.lang.Thread.holdsLock(r5)     // Catch: java.lang.Throwable -> Lc0
            if (r0 == 0) goto Lc
            goto L33
        Lc:
            java.lang.AssertionError r0 = new java.lang.AssertionError     // Catch: java.lang.Throwable -> Lc0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc0
            r1.<init>()     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r2 = "Thread "
            r1.append(r2)     // Catch: java.lang.Throwable -> Lc0
            java.lang.Thread r2 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r2 = r2.getName()     // Catch: java.lang.Throwable -> Lc0
            r1.append(r2)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r2 = " MUST hold lock on "
            r1.append(r2)     // Catch: java.lang.Throwable -> Lc0
            r1.append(r5)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Lc0
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Lc0
            throw r0     // Catch: java.lang.Throwable -> Lc0
        L33:
            boolean r0 = r5.initialized     // Catch: java.lang.Throwable -> Lc0
            if (r0 == 0) goto L39
            monitor-exit(r5)
            return
        L39:
            okhttp3.internal.io.FileSystem r0 = r5.fileSystem     // Catch: java.lang.Throwable -> Lc0
            java.io.File r1 = r5.journalFileBackup     // Catch: java.lang.Throwable -> Lc0
            boolean r0 = r0.exists(r1)     // Catch: java.lang.Throwable -> Lc0
            if (r0 == 0) goto L5e
            okhttp3.internal.io.FileSystem r0 = r5.fileSystem     // Catch: java.lang.Throwable -> Lc0
            java.io.File r1 = r5.journalFile     // Catch: java.lang.Throwable -> Lc0
            boolean r0 = r0.exists(r1)     // Catch: java.lang.Throwable -> Lc0
            if (r0 == 0) goto L55
            okhttp3.internal.io.FileSystem r0 = r5.fileSystem     // Catch: java.lang.Throwable -> Lc0
            java.io.File r1 = r5.journalFileBackup     // Catch: java.lang.Throwable -> Lc0
            r0.delete(r1)     // Catch: java.lang.Throwable -> Lc0
            goto L5e
        L55:
            okhttp3.internal.io.FileSystem r0 = r5.fileSystem     // Catch: java.lang.Throwable -> Lc0
            java.io.File r1 = r5.journalFileBackup     // Catch: java.lang.Throwable -> Lc0
            java.io.File r2 = r5.journalFile     // Catch: java.lang.Throwable -> Lc0
            r0.rename(r1, r2)     // Catch: java.lang.Throwable -> Lc0
        L5e:
            okhttp3.internal.io.FileSystem r0 = r5.fileSystem     // Catch: java.lang.Throwable -> Lc0
            java.io.File r1 = r5.journalFileBackup     // Catch: java.lang.Throwable -> Lc0
            boolean r0 = okhttp3.internal.Util.isCivilized(r0, r1)     // Catch: java.lang.Throwable -> Lc0
            r5.civilizedFileSystem = r0     // Catch: java.lang.Throwable -> Lc0
            okhttp3.internal.io.FileSystem r0 = r5.fileSystem     // Catch: java.lang.Throwable -> Lc0
            java.io.File r1 = r5.journalFile     // Catch: java.lang.Throwable -> Lc0
            boolean r0 = r0.exists(r1)     // Catch: java.lang.Throwable -> Lc0
            r1 = 1
            if (r0 == 0) goto Lb9
            r5.readJournal()     // Catch: java.io.IOException -> L7d java.lang.Throwable -> Lc0
            r5.processJournal()     // Catch: java.io.IOException -> L7d java.lang.Throwable -> Lc0
            r5.initialized = r1     // Catch: java.io.IOException -> L7d java.lang.Throwable -> Lc0
            monitor-exit(r5)
            return
        L7d:
            r0 = move-exception
            okhttp3.internal.platform.Platform$Companion r2 = okhttp3.internal.platform.Platform.Companion     // Catch: java.lang.Throwable -> Lc0
            okhttp3.internal.platform.Platform r2 = r2.get()     // Catch: java.lang.Throwable -> Lc0
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc0
            r3.<init>()     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r4 = "DiskLruCache "
            r3.append(r4)     // Catch: java.lang.Throwable -> Lc0
            java.io.File r4 = r5.directory     // Catch: java.lang.Throwable -> Lc0
            r3.append(r4)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r4 = " is corrupt: "
            r3.append(r4)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r4 = r0.getMessage()     // Catch: java.lang.Throwable -> Lc0
            r3.append(r4)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r4 = ", removing"
            r3.append(r4)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> Lc0
            r4 = 5
            java.lang.Throwable r0 = (java.lang.Throwable) r0     // Catch: java.lang.Throwable -> Lc0
            r2.log(r3, r4, r0)     // Catch: java.lang.Throwable -> Lc0
            r0 = 0
            r5.delete()     // Catch: java.lang.Throwable -> Lb5
            r5.closed = r0     // Catch: java.lang.Throwable -> Lc0
            goto Lb9
        Lb5:
            r1 = move-exception
            r5.closed = r0     // Catch: java.lang.Throwable -> Lc0
            throw r1     // Catch: java.lang.Throwable -> Lc0
        Lb9:
            r5.rebuildJournal$okhttp()     // Catch: java.lang.Throwable -> Lc0
            r5.initialized = r1     // Catch: java.lang.Throwable -> Lc0
            monitor-exit(r5)
            return
        Lc0:
            r0 = move-exception
            monitor-exit(r5)
            throw r0
    }

    public final synchronized boolean isClosed() {
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

    public final synchronized void rebuildJournal$okhttp() throws java.io.IOException {
            r8 = this;
            monitor-enter(r8)
            okio.BufferedSink r0 = r8.journalWriter     // Catch: java.lang.Throwable -> Lcf
            if (r0 != 0) goto L6
            goto L9
        L6:
            r0.close()     // Catch: java.lang.Throwable -> Lcf
        L9:
            okhttp3.internal.io.FileSystem r0 = r8.fileSystem     // Catch: java.lang.Throwable -> Lcf
            java.io.File r1 = r8.journalFileTmp     // Catch: java.lang.Throwable -> Lcf
            okio.Sink r0 = r0.sink(r1)     // Catch: java.lang.Throwable -> Lcf
            okio.BufferedSink r0 = okio.Okio.buffer(r0)     // Catch: java.lang.Throwable -> Lcf
            java.io.Closeable r0 = (java.io.Closeable) r0     // Catch: java.lang.Throwable -> Lcf
            r1 = 0
            r2 = r0
            okio.BufferedSink r2 = (okio.BufferedSink) r2     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r3 = okhttp3.internal.cache.DiskLruCache.MAGIC     // Catch: java.lang.Throwable -> Lc8
            okio.BufferedSink r3 = r2.writeUtf8(r3)     // Catch: java.lang.Throwable -> Lc8
            r4 = 10
            r3.writeByte(r4)     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r3 = okhttp3.internal.cache.DiskLruCache.VERSION_1     // Catch: java.lang.Throwable -> Lc8
            okio.BufferedSink r3 = r2.writeUtf8(r3)     // Catch: java.lang.Throwable -> Lc8
            r3.writeByte(r4)     // Catch: java.lang.Throwable -> Lc8
            int r3 = r8.appVersion     // Catch: java.lang.Throwable -> Lc8
            long r5 = (long) r3     // Catch: java.lang.Throwable -> Lc8
            okio.BufferedSink r3 = r2.writeDecimalLong(r5)     // Catch: java.lang.Throwable -> Lc8
            r3.writeByte(r4)     // Catch: java.lang.Throwable -> Lc8
            int r3 = r8.getValueCount$okhttp()     // Catch: java.lang.Throwable -> Lc8
            long r5 = (long) r3     // Catch: java.lang.Throwable -> Lc8
            okio.BufferedSink r3 = r2.writeDecimalLong(r5)     // Catch: java.lang.Throwable -> Lc8
            r3.writeByte(r4)     // Catch: java.lang.Throwable -> Lc8
            r2.writeByte(r4)     // Catch: java.lang.Throwable -> Lc8
            java.util.LinkedHashMap r3 = r8.getLruEntries$okhttp()     // Catch: java.lang.Throwable -> Lc8
            java.util.Collection r3 = r3.values()     // Catch: java.lang.Throwable -> Lc8
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> Lc8
        L54:
            boolean r5 = r3.hasNext()     // Catch: java.lang.Throwable -> Lc8
            if (r5 == 0) goto L93
            java.lang.Object r5 = r3.next()     // Catch: java.lang.Throwable -> Lc8
            okhttp3.internal.cache.DiskLruCache$Entry r5 = (okhttp3.internal.cache.DiskLruCache.Entry) r5     // Catch: java.lang.Throwable -> Lc8
            okhttp3.internal.cache.DiskLruCache$Editor r6 = r5.getCurrentEditor$okhttp()     // Catch: java.lang.Throwable -> Lc8
            r7 = 32
            if (r6 == 0) goto L7c
            java.lang.String r6 = okhttp3.internal.cache.DiskLruCache.DIRTY     // Catch: java.lang.Throwable -> Lc8
            okio.BufferedSink r6 = r2.writeUtf8(r6)     // Catch: java.lang.Throwable -> Lc8
            r6.writeByte(r7)     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r5 = r5.getKey$okhttp()     // Catch: java.lang.Throwable -> Lc8
            r2.writeUtf8(r5)     // Catch: java.lang.Throwable -> Lc8
            r2.writeByte(r4)     // Catch: java.lang.Throwable -> Lc8
            goto L54
        L7c:
            java.lang.String r6 = okhttp3.internal.cache.DiskLruCache.CLEAN     // Catch: java.lang.Throwable -> Lc8
            okio.BufferedSink r6 = r2.writeUtf8(r6)     // Catch: java.lang.Throwable -> Lc8
            r6.writeByte(r7)     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r6 = r5.getKey$okhttp()     // Catch: java.lang.Throwable -> Lc8
            r2.writeUtf8(r6)     // Catch: java.lang.Throwable -> Lc8
            r5.writeLengths$okhttp(r2)     // Catch: java.lang.Throwable -> Lc8
            r2.writeByte(r4)     // Catch: java.lang.Throwable -> Lc8
            goto L54
        L93:
            kotlin.Unit r2 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> Lc8
            kotlin.io.CloseableKt.closeFinally(r0, r1)     // Catch: java.lang.Throwable -> Lcf
            okhttp3.internal.io.FileSystem r0 = r8.fileSystem     // Catch: java.lang.Throwable -> Lcf
            java.io.File r1 = r8.journalFile     // Catch: java.lang.Throwable -> Lcf
            boolean r0 = r0.exists(r1)     // Catch: java.lang.Throwable -> Lcf
            if (r0 == 0) goto Lab
            okhttp3.internal.io.FileSystem r0 = r8.fileSystem     // Catch: java.lang.Throwable -> Lcf
            java.io.File r1 = r8.journalFile     // Catch: java.lang.Throwable -> Lcf
            java.io.File r2 = r8.journalFileBackup     // Catch: java.lang.Throwable -> Lcf
            r0.rename(r1, r2)     // Catch: java.lang.Throwable -> Lcf
        Lab:
            okhttp3.internal.io.FileSystem r0 = r8.fileSystem     // Catch: java.lang.Throwable -> Lcf
            java.io.File r1 = r8.journalFileTmp     // Catch: java.lang.Throwable -> Lcf
            java.io.File r2 = r8.journalFile     // Catch: java.lang.Throwable -> Lcf
            r0.rename(r1, r2)     // Catch: java.lang.Throwable -> Lcf
            okhttp3.internal.io.FileSystem r0 = r8.fileSystem     // Catch: java.lang.Throwable -> Lcf
            java.io.File r1 = r8.journalFileBackup     // Catch: java.lang.Throwable -> Lcf
            r0.delete(r1)     // Catch: java.lang.Throwable -> Lcf
            okio.BufferedSink r0 = r8.newJournalWriter()     // Catch: java.lang.Throwable -> Lcf
            r8.journalWriter = r0     // Catch: java.lang.Throwable -> Lcf
            r0 = 0
            r8.hasJournalErrors = r0     // Catch: java.lang.Throwable -> Lcf
            r8.mostRecentRebuildFailed = r0     // Catch: java.lang.Throwable -> Lcf
            monitor-exit(r8)
            return
        Lc8:
            r1 = move-exception
            throw r1     // Catch: java.lang.Throwable -> Lca
        Lca:
            r2 = move-exception
            kotlin.io.CloseableKt.closeFinally(r0, r1)     // Catch: java.lang.Throwable -> Lcf
            throw r2     // Catch: java.lang.Throwable -> Lcf
        Lcf:
            r0 = move-exception
            monitor-exit(r8)
            throw r0
    }

    public final synchronized boolean remove(java.lang.String r6) throws java.io.IOException {
            r5 = this;
            monitor-enter(r5)
            java.lang.String r0 = "key"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)     // Catch: java.lang.Throwable -> L2e
            r5.initialize()     // Catch: java.lang.Throwable -> L2e
            r5.checkNotClosed()     // Catch: java.lang.Throwable -> L2e
            r5.validateKey(r6)     // Catch: java.lang.Throwable -> L2e
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r0 = r5.lruEntries     // Catch: java.lang.Throwable -> L2e
            java.lang.Object r6 = r0.get(r6)     // Catch: java.lang.Throwable -> L2e
            okhttp3.internal.cache.DiskLruCache$Entry r6 = (okhttp3.internal.cache.DiskLruCache.Entry) r6     // Catch: java.lang.Throwable -> L2e
            r0 = 0
            if (r6 != 0) goto L1c
            monitor-exit(r5)
            return r0
        L1c:
            boolean r6 = r5.removeEntry$okhttp(r6)     // Catch: java.lang.Throwable -> L2e
            if (r6 == 0) goto L2c
            long r1 = r5.size     // Catch: java.lang.Throwable -> L2e
            long r3 = r5.maxSize     // Catch: java.lang.Throwable -> L2e
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 > 0) goto L2c
            r5.mostRecentTrimFailed = r0     // Catch: java.lang.Throwable -> L2e
        L2c:
            monitor-exit(r5)
            return r6
        L2e:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    public final boolean removeEntry$okhttp(okhttp3.internal.cache.DiskLruCache.Entry r12) throws java.io.IOException {
            r11 = this;
            java.lang.String r0 = "entry"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r12, r0)
            boolean r0 = r11.civilizedFileSystem
            r1 = 10
            r2 = 32
            r3 = 1
            if (r0 != 0) goto L3e
            int r0 = r12.getLockingSourceCount$okhttp()
            if (r0 <= 0) goto L2e
            okio.BufferedSink r0 = r11.journalWriter
            if (r0 != 0) goto L19
            goto L2e
        L19:
            java.lang.String r4 = okhttp3.internal.cache.DiskLruCache.DIRTY
            r0.writeUtf8(r4)
            r0.writeByte(r2)
            java.lang.String r4 = r12.getKey$okhttp()
            r0.writeUtf8(r4)
            r0.writeByte(r1)
            r0.flush()
        L2e:
            int r0 = r12.getLockingSourceCount$okhttp()
            if (r0 > 0) goto L3a
            okhttp3.internal.cache.DiskLruCache$Editor r0 = r12.getCurrentEditor$okhttp()
            if (r0 == 0) goto L3e
        L3a:
            r12.setZombie$okhttp(r3)
            return r3
        L3e:
            okhttp3.internal.cache.DiskLruCache$Editor r0 = r12.getCurrentEditor$okhttp()
            if (r0 != 0) goto L45
            goto L48
        L45:
            r0.detach$okhttp()
        L48:
            r0 = 0
            int r4 = r11.valueCount
        L4b:
            if (r0 >= r4) goto L73
            int r5 = r0 + 1
            okhttp3.internal.io.FileSystem r6 = r11.fileSystem
            java.util.List r7 = r12.getCleanFiles$okhttp()
            java.lang.Object r7 = r7.get(r0)
            java.io.File r7 = (java.io.File) r7
            r6.delete(r7)
            long r6 = r11.size
            long[] r8 = r12.getLengths$okhttp()
            r9 = r8[r0]
            long r6 = r6 - r9
            r11.size = r6
            long[] r6 = r12.getLengths$okhttp()
            r7 = 0
            r6[r0] = r7
            r0 = r5
            goto L4b
        L73:
            int r0 = r11.redundantOpCount
            int r0 = r0 + r3
            r11.redundantOpCount = r0
            okio.BufferedSink r0 = r11.journalWriter
            if (r0 != 0) goto L7d
            goto L8f
        L7d:
            java.lang.String r4 = okhttp3.internal.cache.DiskLruCache.REMOVE
            r0.writeUtf8(r4)
            r0.writeByte(r2)
            java.lang.String r2 = r12.getKey$okhttp()
            r0.writeUtf8(r2)
            r0.writeByte(r1)
        L8f:
            java.util.LinkedHashMap<java.lang.String, okhttp3.internal.cache.DiskLruCache$Entry> r0 = r11.lruEntries
            java.lang.String r12 = r12.getKey$okhttp()
            r0.remove(r12)
            boolean r12 = r11.journalRebuildRequired()
            if (r12 == 0) goto Lac
            okhttp3.internal.concurrent.TaskQueue r4 = r11.cleanupQueue
            okhttp3.internal.cache.DiskLruCache$cleanupTask$1 r12 = r11.cleanupTask
            r5 = r12
            okhttp3.internal.concurrent.Task r5 = (okhttp3.internal.concurrent.Task) r5
            r6 = 0
            r8 = 2
            r9 = 0
            okhttp3.internal.concurrent.TaskQueue.schedule$default(r4, r5, r6, r8, r9)
        Lac:
            return r3
    }

    public final void setClosed$okhttp(boolean r1) {
            r0 = this;
            r0.closed = r1
            return
    }

    public final synchronized void setMaxSize(long r7) {
            r6 = this;
            monitor-enter(r6)
            r6.maxSize = r7     // Catch: java.lang.Throwable -> L17
            boolean r7 = r6.initialized     // Catch: java.lang.Throwable -> L17
            if (r7 == 0) goto L15
            okhttp3.internal.concurrent.TaskQueue r0 = r6.cleanupQueue     // Catch: java.lang.Throwable -> L17
            okhttp3.internal.cache.DiskLruCache$cleanupTask$1 r7 = r6.cleanupTask     // Catch: java.lang.Throwable -> L17
            r1 = r7
            okhttp3.internal.concurrent.Task r1 = (okhttp3.internal.concurrent.Task) r1     // Catch: java.lang.Throwable -> L17
            r2 = 0
            r4 = 2
            r5 = 0
            okhttp3.internal.concurrent.TaskQueue.schedule$default(r0, r1, r2, r4, r5)     // Catch: java.lang.Throwable -> L17
        L15:
            monitor-exit(r6)
            return
        L17:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    public final synchronized long size() throws java.io.IOException {
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

    public final synchronized java.util.Iterator<okhttp3.internal.cache.DiskLruCache.Snapshot> snapshots() throws java.io.IOException {
            r1 = this;
            monitor-enter(r1)
            r1.initialize()     // Catch: java.lang.Throwable -> Ld
            okhttp3.internal.cache.DiskLruCache$snapshots$1 r0 = new okhttp3.internal.cache.DiskLruCache$snapshots$1     // Catch: java.lang.Throwable -> Ld
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Ld
            java.util.Iterator r0 = (java.util.Iterator) r0     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r1)
            return r0
        Ld:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final void trimToSize() throws java.io.IOException {
            r4 = this;
        L0:
            long r0 = r4.size
            long r2 = r4.maxSize
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto Lf
            boolean r0 = r4.removeOldestEntry()
            if (r0 != 0) goto L0
            return
        Lf:
            r0 = 0
            r4.mostRecentTrimFailed = r0
            return
    }
}
