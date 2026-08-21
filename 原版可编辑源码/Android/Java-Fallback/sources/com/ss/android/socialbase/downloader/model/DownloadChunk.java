package com.ss.android.socialbase.downloader.model;

public class DownloadChunk implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.ss.android.socialbase.downloader.model.DownloadChunk> CREATOR = null;
    private static final java.lang.String TAG = null;
    private int bindValueCount;
    private int chunkIndex;
    private com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable chunkRunnable;
    private long contentLength;
    private java.util.concurrent.atomic.AtomicLong currentOffset;
    private long endOffset;
    private com.ss.android.socialbase.downloader.model.DownloadChunk hostChunk;
    private java.util.concurrent.atomic.AtomicInteger hostChunkIndex;
    private int id;
    private java.util.concurrent.atomic.AtomicBoolean isDownloading;
    private long oldOffset;
    private boolean reuseingFirstConnection;
    private long startOffset;
    private java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> subChunkList;


    public static class Builder {
        private int chunkIndex;
        private long contentLength;
        private long currentOffset;
        private long endOffset;
        private com.ss.android.socialbase.downloader.model.DownloadChunk hostChunk;
        private int id;
        private long oldOffset;
        private long startOffset;

        public Builder(int r1) {
                r0 = this;
                r0.<init>()
                r0.id = r1
                return
        }

        static int access$000(com.ss.android.socialbase.downloader.model.DownloadChunk.Builder r0) {
                int r0 = r0.id
                return r0
        }

        static long access$100(com.ss.android.socialbase.downloader.model.DownloadChunk.Builder r2) {
                long r0 = r2.startOffset
                return r0
        }

        static long access$200(com.ss.android.socialbase.downloader.model.DownloadChunk.Builder r2) {
                long r0 = r2.currentOffset
                return r0
        }

        static long access$300(com.ss.android.socialbase.downloader.model.DownloadChunk.Builder r2) {
                long r0 = r2.endOffset
                return r0
        }

        static long access$400(com.ss.android.socialbase.downloader.model.DownloadChunk.Builder r2) {
                long r0 = r2.contentLength
                return r0
        }

        static int access$500(com.ss.android.socialbase.downloader.model.DownloadChunk.Builder r0) {
                int r0 = r0.chunkIndex
                return r0
        }

        static long access$600(com.ss.android.socialbase.downloader.model.DownloadChunk.Builder r2) {
                long r0 = r2.oldOffset
                return r0
        }

        static com.ss.android.socialbase.downloader.model.DownloadChunk access$700(com.ss.android.socialbase.downloader.model.DownloadChunk.Builder r0) {
                com.ss.android.socialbase.downloader.model.DownloadChunk r0 = r0.hostChunk
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadChunk build() {
                r2 = this;
                com.ss.android.socialbase.downloader.model.DownloadChunk r0 = new com.ss.android.socialbase.downloader.model.DownloadChunk
                r1 = 0
                r0.<init>(r2, r1)
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadChunk.Builder chunkIndex(int r1) {
                r0 = this;
                r0.chunkIndex = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadChunk.Builder contentLength(long r1) {
                r0 = this;
                r0.contentLength = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadChunk.Builder currentOffset(long r1) {
                r0 = this;
                r0.currentOffset = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadChunk.Builder endOffset(long r1) {
                r0 = this;
                r0.endOffset = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadChunk.Builder hostChunk(com.ss.android.socialbase.downloader.model.DownloadChunk r1) {
                r0 = this;
                r0.hostChunk = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadChunk.Builder id(int r1) {
                r0 = this;
                r0.id = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadChunk.Builder oldOffset(long r1) {
                r0 = this;
                r0.oldOffset = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadChunk.Builder startOffset(long r1) {
                r0 = this;
                r0.startOffset = r1
                return r0
        }
    }

    static {
            java.lang.Class<com.ss.android.socialbase.downloader.model.DownloadChunk> r0 = com.ss.android.socialbase.downloader.model.DownloadChunk.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.socialbase.downloader.model.DownloadChunk.TAG = r0
            com.ss.android.socialbase.downloader.model.DownloadChunk$1 r0 = new com.ss.android.socialbase.downloader.model.DownloadChunk$1
            r0.<init>()
            com.ss.android.socialbase.downloader.model.DownloadChunk.CREATOR = r0
            return
    }

    public DownloadChunk(android.database.Cursor r6) {
            r5 = this;
            r5.<init>()
            if (r6 != 0) goto L6
            return
        L6:
            java.lang.String r0 = "_id"
            int r0 = r6.getColumnIndex(r0)
            int r0 = r6.getInt(r0)
            r5.id = r0
            java.lang.String r0 = "chunkIndex"
            int r0 = r6.getColumnIndex(r0)
            int r0 = r6.getInt(r0)
            r5.chunkIndex = r0
            java.lang.String r0 = "startOffset"
            int r0 = r6.getColumnIndex(r0)
            long r0 = r6.getLong(r0)
            r5.startOffset = r0
            java.lang.String r0 = "curOffset"
            int r0 = r6.getColumnIndex(r0)
            r1 = -1
            if (r0 == r1) goto L3f
            java.util.concurrent.atomic.AtomicLong r2 = new java.util.concurrent.atomic.AtomicLong
            long r3 = r6.getLong(r0)
            r2.<init>(r3)
            r5.currentOffset = r2
            goto L48
        L3f:
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r2 = 0
            r0.<init>(r2)
            r5.currentOffset = r0
        L48:
            java.lang.String r0 = "endOffset"
            int r0 = r6.getColumnIndex(r0)
            long r2 = r6.getLong(r0)
            r5.endOffset = r2
            java.lang.String r0 = "hostChunkIndex"
            int r0 = r6.getColumnIndex(r0)
            if (r0 == r1) goto L68
            java.util.concurrent.atomic.AtomicInteger r2 = new java.util.concurrent.atomic.AtomicInteger
            int r0 = r6.getInt(r0)
            r2.<init>(r0)
            r5.hostChunkIndex = r2
            goto L6f
        L68:
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r0.<init>(r1)
            r5.hostChunkIndex = r0
        L6f:
            java.lang.String r0 = "chunkContentLen"
            int r0 = r6.getColumnIndex(r0)
            if (r0 == r1) goto L7d
            long r0 = r6.getLong(r0)
            r5.contentLength = r0
        L7d:
            java.util.concurrent.atomic.AtomicBoolean r6 = new java.util.concurrent.atomic.AtomicBoolean
            r0 = 0
            r6.<init>(r0)
            r5.isDownloading = r6
            return
    }

    protected DownloadChunk(android.os.Parcel r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.readInt()
            r3.id = r0
            long r0 = r4.readLong()
            r3.startOffset = r0
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            long r1 = r4.readLong()
            r0.<init>(r1)
            r3.currentOffset = r0
            long r0 = r4.readLong()
            r3.endOffset = r0
            long r0 = r4.readLong()
            r3.contentLength = r0
            int r0 = r4.readInt()
            r3.chunkIndex = r0
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            int r4 = r4.readInt()
            r0.<init>(r4)
            r3.hostChunkIndex = r0
            return
    }

    private DownloadChunk(com.ss.android.socialbase.downloader.model.DownloadChunk.Builder r4) {
            r3 = this;
            r3.<init>()
            if (r4 != 0) goto L6
            return
        L6:
            int r0 = com.ss.android.socialbase.downloader.model.DownloadChunk.Builder.access$000(r4)
            r3.id = r0
            long r0 = com.ss.android.socialbase.downloader.model.DownloadChunk.Builder.access$100(r4)
            r3.startOffset = r0
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            long r1 = com.ss.android.socialbase.downloader.model.DownloadChunk.Builder.access$200(r4)
            r0.<init>(r1)
            r3.currentOffset = r0
            long r0 = com.ss.android.socialbase.downloader.model.DownloadChunk.Builder.access$300(r4)
            r3.endOffset = r0
            long r0 = com.ss.android.socialbase.downloader.model.DownloadChunk.Builder.access$400(r4)
            r3.contentLength = r0
            int r0 = com.ss.android.socialbase.downloader.model.DownloadChunk.Builder.access$500(r4)
            r3.chunkIndex = r0
            long r0 = com.ss.android.socialbase.downloader.model.DownloadChunk.Builder.access$600(r4)
            r3.oldOffset = r0
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r1 = -1
            r0.<init>(r1)
            r3.hostChunkIndex = r0
            com.ss.android.socialbase.downloader.model.DownloadChunk r4 = com.ss.android.socialbase.downloader.model.DownloadChunk.Builder.access$700(r4)
            r3.setHostChunk(r4)
            java.util.concurrent.atomic.AtomicBoolean r4 = new java.util.concurrent.atomic.AtomicBoolean
            r0 = 0
            r4.<init>(r0)
            r3.isDownloading = r4
            return
    }

    DownloadChunk(com.ss.android.socialbase.downloader.model.DownloadChunk.Builder r1, com.ss.android.socialbase.downloader.model.DownloadChunk.1 r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public void bindValue(android.database.sqlite.SQLiteStatement r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            r0 = 0
            r3.bindValueCount = r0
            r4.clearBindings()
            int r0 = r3.bindValueCount
            int r0 = r0 + 1
            r3.bindValueCount = r0
            int r1 = r3.id
            long r1 = (long) r1
            r4.bindLong(r0, r1)
            int r0 = r3.bindValueCount
            int r0 = r0 + 1
            r3.bindValueCount = r0
            int r1 = r3.chunkIndex
            long r1 = (long) r1
            r4.bindLong(r0, r1)
            int r0 = r3.bindValueCount
            int r0 = r0 + 1
            r3.bindValueCount = r0
            long r1 = r3.startOffset
            r4.bindLong(r0, r1)
            int r0 = r3.bindValueCount
            int r0 = r0 + 1
            r3.bindValueCount = r0
            long r1 = r3.getCurrentOffset()
            r4.bindLong(r0, r1)
            int r0 = r3.bindValueCount
            int r0 = r0 + 1
            r3.bindValueCount = r0
            long r1 = r3.endOffset
            r4.bindLong(r0, r1)
            int r0 = r3.bindValueCount
            int r0 = r0 + 1
            r3.bindValueCount = r0
            long r1 = r3.contentLength
            r4.bindLong(r0, r1)
            int r0 = r3.bindValueCount
            int r0 = r0 + 1
            r3.bindValueCount = r0
            int r1 = r3.getHostChunkIndex()
            long r1 = (long) r1
            r4.bindLong(r0, r1)
            return
    }

    public boolean canRefreshCurOffsetForReuseChunk() {
            r5 = this;
            com.ss.android.socialbase.downloader.model.DownloadChunk r0 = r5.hostChunk
            r1 = 1
            if (r0 != 0) goto L6
            return r1
        L6:
            boolean r0 = r0.hasChunkDivided()
            r2 = 0
            if (r0 != 0) goto Le
            return r2
        Le:
            r0 = r2
        Lf:
            com.ss.android.socialbase.downloader.model.DownloadChunk r3 = r5.hostChunk
            java.util.List r3 = r3.getSubChunkList()
            int r3 = r3.size()
            if (r0 >= r3) goto L42
            com.ss.android.socialbase.downloader.model.DownloadChunk r3 = r5.hostChunk
            java.util.List r3 = r3.getSubChunkList()
            java.lang.Object r3 = r3.get(r0)
            com.ss.android.socialbase.downloader.model.DownloadChunk r3 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r3
            if (r3 == 0) goto L3f
            com.ss.android.socialbase.downloader.model.DownloadChunk r4 = r5.hostChunk
            java.util.List r4 = r4.getSubChunkList()
            int r4 = r4.indexOf(r5)
            if (r4 <= r0) goto L3c
            boolean r3 = r3.hasNoBytesDownload()
            if (r3 != 0) goto L3c
            return r2
        L3c:
            if (r4 != r0) goto L3f
            return r1
        L3f:
            int r0 = r0 + 1
            goto Lf
        L42:
            return r2
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> divideChunkForReuse(int r23, long r24) {
            r22 = this;
            r0 = r22
            r1 = r23
            boolean r2 = r22.isHostChunk()
            if (r2 == 0) goto L167
            boolean r2 = r22.hasChunkDivided()
            if (r2 == 0) goto L12
            goto L167
        L12:
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            long r3 = r22.getCurOffset()
            r5 = 1
            long r6 = r0.getRetainLength(r5)
            long r8 = (long) r1
            long r8 = r6 / r8
            java.lang.String r10 = com.ss.android.socialbase.downloader.model.DownloadChunk.TAG
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r12 = "retainLen:"
            r11.append(r12)
            r11.append(r6)
            java.lang.String r12 = " divideChunkForReuse chunkSize:"
            r11.append(r12)
            r11.append(r8)
            java.lang.String r12 = " current host downloadChunk index:"
            r11.append(r12)
            int r12 = r0.chunkIndex
            r11.append(r12)
            java.lang.String r11 = r11.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r10, r11)
            r11 = 0
        L4c:
            r12 = 1
            if (r11 >= r1) goto Lf2
            if (r11 != 0) goto L5e
            long r14 = r22.getStartOffset()
            long r16 = r3 + r8
            long r16 = r16 - r12
        L5a:
            r12 = r8
            r18 = r16
            goto L7d
        L5e:
            int r14 = r1 + (-1)
            if (r11 != r14) goto L77
            long r16 = r22.getEndOffset()
            int r15 = (r16 > r3 ? 1 : (r16 == r3 ? 0 : -1))
            if (r15 <= 0) goto L6e
            long r14 = r16 - r3
            long r14 = r14 + r12
            goto L72
        L6e:
            long r12 = (long) r14
            long r12 = r12 * r8
            long r14 = r6 - r12
        L72:
            r12 = r14
            r18 = r16
            r14 = r3
            goto L7d
        L77:
            long r14 = r3 + r8
            long r16 = r14 - r12
            r14 = r3
            goto L5a
        L7d:
            com.ss.android.socialbase.downloader.model.DownloadChunk$Builder r10 = new com.ss.android.socialbase.downloader.model.DownloadChunk$Builder
            int r5 = r0.id
            r10.<init>(r5)
            int r5 = -r11
            r17 = 1
            int r5 = r5 + (-1)
            com.ss.android.socialbase.downloader.model.DownloadChunk$Builder r5 = r10.chunkIndex(r5)
            com.ss.android.socialbase.downloader.model.DownloadChunk$Builder r5 = r5.startOffset(r14)
            com.ss.android.socialbase.downloader.model.DownloadChunk$Builder r5 = r5.currentOffset(r3)
            com.ss.android.socialbase.downloader.model.DownloadChunk$Builder r5 = r5.oldOffset(r3)
            r20 = r6
            r6 = r18
            com.ss.android.socialbase.downloader.model.DownloadChunk$Builder r5 = r5.endOffset(r6)
            com.ss.android.socialbase.downloader.model.DownloadChunk$Builder r5 = r5.contentLength(r12)
            com.ss.android.socialbase.downloader.model.DownloadChunk$Builder r5 = r5.hostChunk(r0)
            com.ss.android.socialbase.downloader.model.DownloadChunk r5 = r5.build()
            java.lang.String r10 = com.ss.android.socialbase.downloader.model.DownloadChunk.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "divide sub chunk : "
            r1.append(r0)
            r1.append(r11)
            java.lang.String r0 = " startOffset:"
            r1.append(r0)
            r1.append(r14)
            java.lang.String r0 = " curOffset:"
            r1.append(r0)
            r1.append(r3)
            java.lang.String r0 = " endOffset:"
            r1.append(r0)
            r1.append(r6)
            java.lang.String r0 = " contentLen:"
            r1.append(r0)
            r1.append(r12)
            java.lang.String r0 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r10, r0)
            r2.add(r5)
            long r3 = r3 + r8
            int r11 = r11 + 1
            r5 = 1
            r0 = r22
            r1 = r23
            r6 = r20
            goto L4c
        Lf2:
            int r0 = r2.size()
            r1 = 1
            int r0 = r0 - r1
            r3 = 0
            r5 = r3
        Lfb:
            if (r0 <= 0) goto L10d
            java.lang.Object r1 = r2.get(r0)
            com.ss.android.socialbase.downloader.model.DownloadChunk r1 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r1
            if (r1 == 0) goto L10a
            long r7 = r1.getContentLength()
            long r5 = r5 + r7
        L10a:
            int r0 = r0 + (-1)
            goto Lfb
        L10d:
            java.lang.String r0 = com.ss.android.socialbase.downloader.model.DownloadChunk.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r7 = "reuseChunkContentLen:"
            r1.append(r7)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
            r0 = 0
            java.lang.Object r0 = r2.get(r0)
            com.ss.android.socialbase.downloader.model.DownloadChunk r0 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r0
            if (r0 == 0) goto L161
            long r7 = r22.getEndOffset()
            int r1 = (r7 > r3 ? 1 : (r7 == r3 ? 0 : -1))
            if (r1 != 0) goto L13b
            long r3 = r22.getStartOffset()
            long r3 = r24 - r3
            goto L145
        L13b:
            long r3 = r22.getEndOffset()
            long r7 = r22.getStartOffset()
            long r3 = r3 - r7
            long r3 = r3 + r12
        L145:
            long r3 = r3 - r5
            r0.setContentLength(r3)
            r1 = r22
            int r3 = r1.chunkIndex
            r0.setChunkIndex(r3)
            com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable r3 = r1.chunkRunnable
            if (r3 == 0) goto L163
            long r7 = r0.getEndOffset()
            long r9 = r22.getContentLength()
            long r9 = r9 - r5
            r3.refreshResponseHandleOffset(r7, r9)
            goto L163
        L161:
            r1 = r22
        L163:
            r1.setSubChunkList(r2)
            return r2
        L167:
            r1 = r0
            r0 = 0
            return r0
    }

    public int getBindValueCount() {
            r1 = this;
            int r0 = r1.bindValueCount
            return r0
    }

    public int getChunkIndex() {
            r1 = this;
            int r0 = r1.chunkIndex
            return r0
    }

    public long getContentLength() {
            r2 = this;
            long r0 = r2.contentLength
            return r0
    }

    public long getCurOffset() {
            r2 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r2.currentOffset
            if (r0 == 0) goto L9
            long r0 = r0.get()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public long getCurrentOffset() {
            r6 = this;
            boolean r0 = r6.isHostChunk()
            if (r0 == 0) goto L3c
            boolean r0 = r6.hasChunkDivided()
            if (r0 == 0) goto L3c
            r0 = 0
            r2 = 0
        Lf:
            java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r3 = r6.subChunkList
            int r3 = r3.size()
            if (r2 >= r3) goto L3b
            java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r3 = r6.subChunkList
            java.lang.Object r3 = r3.get(r2)
            com.ss.android.socialbase.downloader.model.DownloadChunk r3 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r3
            if (r3 == 0) goto L38
            boolean r4 = r3.hasNoBytesDownload()
            if (r4 != 0) goto L2c
            long r0 = r3.getCurOffset()
            return r0
        L2c:
            long r4 = r3.getCurOffset()
            int r4 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r4 >= 0) goto L38
            long r0 = r3.getCurOffset()
        L38:
            int r2 = r2 + 1
            goto Lf
        L3b:
            return r0
        L3c:
            long r0 = r6.getCurOffset()
            return r0
    }

    public long getDownloadChunkBytes() {
            r8 = this;
            long r0 = r8.getCurrentOffset()
            long r2 = r8.startOffset
            long r0 = r0 - r2
            boolean r2 = r8.hasChunkDivided()
            if (r2 == 0) goto L2f
            r0 = 0
            r2 = 0
        L10:
            java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r3 = r8.subChunkList
            int r3 = r3.size()
            if (r2 >= r3) goto L2f
            java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r3 = r8.subChunkList
            java.lang.Object r3 = r3.get(r2)
            com.ss.android.socialbase.downloader.model.DownloadChunk r3 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r3
            if (r3 == 0) goto L2c
            long r4 = r3.getCurrentOffset()
            long r6 = r3.getStartOffset()
            long r4 = r4 - r6
            long r0 = r0 + r4
        L2c:
            int r2 = r2 + 1
            goto L10
        L2f:
            return r0
    }

    public long getEndOffset() {
            r2 = this;
            long r0 = r2.endOffset
            return r0
    }

    public com.ss.android.socialbase.downloader.model.DownloadChunk getFirstReuseChunk() {
            r2 = this;
            boolean r0 = r2.isHostChunk()
            if (r0 != 0) goto L9
            com.ss.android.socialbase.downloader.model.DownloadChunk r0 = r2.hostChunk
            goto La
        L9:
            r0 = r2
        La:
            if (r0 == 0) goto L1f
            boolean r1 = r0.hasChunkDivided()
            if (r1 != 0) goto L13
            goto L1f
        L13:
            java.util.List r0 = r0.getSubChunkList()
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.ss.android.socialbase.downloader.model.DownloadChunk r0 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r0
            return r0
        L1f:
            r0 = 0
            return r0
    }

    public com.ss.android.socialbase.downloader.model.DownloadChunk getHostChunk() {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadChunk r0 = r1.hostChunk
            return r0
    }

    public int getHostChunkIndex() {
            r1 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r1.hostChunkIndex
            if (r0 != 0) goto L6
            r0 = -1
            return r0
        L6:
            int r0 = r0.get()
            return r0
    }

    public int getId() {
            r1 = this;
            int r0 = r1.id
            return r0
    }

    public long getNextChunkCurOffset() {
            r6 = this;
            com.ss.android.socialbase.downloader.model.DownloadChunk r0 = r6.hostChunk
            r1 = -1
            if (r0 == 0) goto L40
            java.util.List r0 = r0.getSubChunkList()
            if (r0 != 0) goto Ld
            goto L40
        Ld:
            com.ss.android.socialbase.downloader.model.DownloadChunk r0 = r6.hostChunk
            java.util.List r0 = r0.getSubChunkList()
            int r0 = r0.indexOf(r6)
            r3 = 0
            r4 = r3
        L19:
            com.ss.android.socialbase.downloader.model.DownloadChunk r5 = r6.hostChunk
            java.util.List r5 = r5.getSubChunkList()
            int r5 = r5.size()
            if (r3 >= r5) goto L40
            com.ss.android.socialbase.downloader.model.DownloadChunk r5 = r6.hostChunk
            java.util.List r5 = r5.getSubChunkList()
            java.lang.Object r5 = r5.get(r3)
            com.ss.android.socialbase.downloader.model.DownloadChunk r5 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r5
            if (r5 == 0) goto L3d
            if (r4 == 0) goto L3a
            long r0 = r5.getCurrentOffset()
            return r0
        L3a:
            if (r0 != r3) goto L3d
            r4 = 1
        L3d:
            int r3 = r3 + 1
            goto L19
        L40:
            return r1
    }

    public long getOldOffset() {
            r2 = this;
            long r0 = r2.oldOffset
            return r0
    }

    public long getRetainLength(boolean r9) {
            r8 = this;
            long r0 = r8.getCurrentOffset()
            long r2 = r8.contentLength
            long r4 = r8.oldOffset
            long r6 = r0 - r4
            long r6 = r2 - r6
            if (r9 != 0) goto L17
            int r9 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r9 != 0) goto L17
            long r4 = r8.startOffset
            long r0 = r0 - r4
            long r6 = r2 - r0
        L17:
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r0 = "contentLength:"
            r9.append(r0)
            long r0 = r8.contentLength
            r9.append(r0)
            java.lang.String r0 = " curOffset:"
            r9.append(r0)
            long r0 = r8.getCurrentOffset()
            r9.append(r0)
            java.lang.String r0 = " oldOffset:"
            r9.append(r0)
            long r0 = r8.oldOffset
            r9.append(r0)
            java.lang.String r0 = " retainLen:"
            r9.append(r0)
            r9.append(r6)
            java.lang.String r9 = r9.toString()
            java.lang.String r0 = "DownloadChunk"
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r9)
            r0 = 0
            int r9 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r9 >= 0) goto L54
            r6 = r0
        L54:
            return r6
    }

    public long getStartOffset() {
            r2 = this;
            long r0 = r2.startOffset
            return r0
    }

    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> getSubChunkList() {
            r1 = this;
            java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r0 = r1.subChunkList
            return r0
    }

    public boolean hasChunkDivided() {
            r1 = this;
            java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r0 = r1.subChunkList
            if (r0 == 0) goto Lc
            int r0 = r0.size()
            if (r0 <= 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    public boolean hasNoBytesDownload() {
            r6 = this;
            long r0 = r6.startOffset
            boolean r2 = r6.isHostChunk()
            if (r2 == 0) goto L11
            long r2 = r6.oldOffset
            long r4 = r6.startOffset
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 <= 0) goto L11
            r0 = r2
        L11:
            long r2 = r6.getCurrentOffset()
            long r2 = r2 - r0
            long r0 = r6.contentLength
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 < 0) goto L1e
            r0 = 1
            goto L1f
        L1e:
            r0 = 0
        L1f:
            return r0
    }

    public boolean isDownloading() {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.isDownloading
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            boolean r0 = r0.get()
            return r0
    }

    public boolean isHostChunk() {
            r2 = this;
            int r0 = r2.getHostChunkIndex()
            r1 = -1
            if (r0 != r1) goto L9
            r0 = 1
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public boolean isReuseingFirstConnection() {
            r1 = this;
            int r0 = r1.chunkIndex
            if (r0 != 0) goto La
            boolean r0 = r1.reuseingFirstConnection
            if (r0 == 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    public void setChunkIndex(int r1) {
            r0 = this;
            r0.chunkIndex = r1
            return
    }

    public void setChunkRunnable(com.ss.android.socialbase.downloader.thread.DownloadChunkRunnable r1) {
            r0 = this;
            r0.chunkRunnable = r1
            r0.setOldOffset()
            return
    }

    public void setContentLength(long r1) {
            r0 = this;
            r0.contentLength = r1
            return
    }

    public void setCurrentOffset(long r2) {
            r1 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r1.currentOffset
            if (r0 == 0) goto L8
            r0.set(r2)
            goto Lf
        L8:
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r0.<init>(r2)
            r1.currentOffset = r0
        Lf:
            return
    }

    public void setDownloading(boolean r2) {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.isDownloading
            if (r0 != 0) goto Lc
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r0.<init>(r2)
            r1.isDownloading = r0
            goto Lf
        Lc:
            r0.set(r2)
        Lf:
            r2 = 0
            r1.chunkRunnable = r2
            return
    }

    public void setHostChunk(com.ss.android.socialbase.downloader.model.DownloadChunk r1) {
            r0 = this;
            r0.hostChunk = r1
            if (r1 == 0) goto Lb
            int r1 = r1.getChunkIndex()
            r0.setHostChunkIndex(r1)
        Lb:
            return
    }

    public void setHostChunkIndex(int r2) {
            r1 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r1.hostChunkIndex
            if (r0 != 0) goto Lc
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r0.<init>(r2)
            r1.hostChunkIndex = r0
            goto Lf
        Lc:
            r0.set(r2)
        Lf:
            return
    }

    public void setId(int r1) {
            r0 = this;
            r0.id = r1
            return
    }

    public void setOldOffset() {
            r2 = this;
            long r0 = r2.getCurrentOffset()
            r2.oldOffset = r0
            return
    }

    public void setOldOffset(long r1) {
            r0 = this;
            r0.oldOffset = r1
            return
    }

    public void setReuseingFirstConnection(boolean r1) {
            r0 = this;
            r0.reuseingFirstConnection = r1
            return
    }

    public void setSubChunkList(java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r1) {
            r0 = this;
            r0.subChunkList = r1
            return
    }

    public android.content.ContentValues toContentValues() {
            r3 = this;
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            int r1 = r3.id
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "_id"
            r0.put(r2, r1)
            int r1 = r3.chunkIndex
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "chunkIndex"
            r0.put(r2, r1)
            long r1 = r3.startOffset
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "startOffset"
            r0.put(r2, r1)
            long r1 = r3.getCurrentOffset()
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "curOffset"
            r0.put(r2, r1)
            long r1 = r3.endOffset
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "endOffset"
            r0.put(r2, r1)
            long r1 = r3.contentLength
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "chunkContentLen"
            r0.put(r2, r1)
            int r1 = r3.getHostChunkIndex()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "hostChunkIndex"
            r0.put(r2, r1)
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r3, int r4) {
            r2 = this;
            int r4 = r2.id
            r3.writeInt(r4)
            long r0 = r2.startOffset
            r3.writeLong(r0)
            java.util.concurrent.atomic.AtomicLong r4 = r2.currentOffset
            if (r4 == 0) goto L13
            long r0 = r4.get()
            goto L15
        L13:
            r0 = 0
        L15:
            r3.writeLong(r0)
            long r0 = r2.endOffset
            r3.writeLong(r0)
            long r0 = r2.contentLength
            r3.writeLong(r0)
            int r4 = r2.chunkIndex
            r3.writeInt(r4)
            r4 = -1
            java.util.concurrent.atomic.AtomicInteger r0 = r2.hostChunkIndex
            if (r0 == 0) goto L30
            int r4 = r0.get()
        L30:
            r3.writeInt(r4)
            return
    }
}
