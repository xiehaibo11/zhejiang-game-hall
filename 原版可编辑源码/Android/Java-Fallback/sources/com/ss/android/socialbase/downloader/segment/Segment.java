package com.ss.android.socialbase.downloader.segment;

public final class Segment {
    private static final java.lang.String TAG = "Segment";
    int competitor;
    private final java.util.concurrent.atomic.AtomicLong currentOffset;
    private volatile long currentOffsetRead;
    private long endOffset;
    private int index;
    private org.json.JSONObject jsonObject;
    volatile com.ss.android.socialbase.downloader.segment.SegmentReader owner;
    private final long startOffset;


    interface JsonKey {
        public static final java.lang.String CURRENT = "cu";
        public static final java.lang.String END = "en";
        public static final java.lang.String START = "st";
    }

    public Segment(long r3) {
            r2 = this;
            r0 = -1
            r2.<init>(r3, r0)
            return
    }

    public Segment(long r3, long r5) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r0.<init>()
            r2.currentOffset = r0
            r1 = 0
            r2.competitor = r1
            r2.startOffset = r3
            r0.set(r3)
            r2.currentOffsetRead = r3
            int r3 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r3 < 0) goto L1b
            r2.endOffset = r5
            goto L1f
        L1b:
            r3 = -1
            r2.endOffset = r3
        L1f:
            return
    }

    public Segment(com.ss.android.socialbase.downloader.segment.Segment r4) {
            r3 = this;
            r3.<init>()
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r0.<init>()
            r3.currentOffset = r0
            r1 = 0
            r3.competitor = r1
            long r1 = r4.startOffset
            r3.startOffset = r1
            long r1 = r4.endOffset
            r3.endOffset = r1
            java.util.concurrent.atomic.AtomicLong r1 = r4.currentOffset
            long r1 = r1.get()
            r0.set(r1)
            java.util.concurrent.atomic.AtomicLong r0 = r3.currentOffset
            long r0 = r0.get()
            r3.currentOffsetRead = r0
            int r4 = r4.index
            r3.index = r4
            return
    }

    public Segment(org.json.JSONObject r3) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r0.<init>()
            r2.currentOffset = r0
            r0 = 0
            r2.competitor = r0
            java.lang.String r0 = "st"
            long r0 = r3.optLong(r0)
            r2.startOffset = r0
            java.lang.String r0 = "en"
            long r0 = r3.optLong(r0)
            r2.setEndOffset(r0)
            java.lang.String r0 = "cu"
            long r0 = r3.optLong(r0)
            r2.setCurrentOffset(r0)
            long r0 = r2.getCurrentOffset()
            r2.setCurrentOffsetRead(r0)
            return
    }

    public static java.lang.String toString(java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r2) {
            if (r2 == 0) goto L34
            boolean r0 = r2.isEmpty()
            if (r0 == 0) goto L9
            goto L34
        L9:
            com.ss.android.socialbase.downloader.segment.Segment$1 r0 = new com.ss.android.socialbase.downloader.segment.Segment$1
            r0.<init>()
            java.util.Collections.sort(r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.Iterator r2 = r2.iterator()
        L1a:
            boolean r1 = r2.hasNext()
            if (r1 == 0) goto L2f
            java.lang.Object r1 = r2.next()
            com.ss.android.socialbase.downloader.segment.Segment r1 = (com.ss.android.socialbase.downloader.segment.Segment) r1
            r0.append(r1)
            java.lang.String r1 = "\r\n"
            r0.append(r1)
            goto L1a
        L2f:
            java.lang.String r2 = r0.toString()
            return r2
        L34:
            r2 = 0
            return r2
    }

    void decreaseCompetitor() {
            r1 = this;
            int r0 = r1.competitor
            int r0 = r0 + (-1)
            r1.competitor = r0
            return
    }

    int getCompetitor() {
            r1 = this;
            int r0 = r1.competitor
            return r0
    }

    public long getCurrentOffset() {
            r6 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r6.currentOffset
            long r0 = r0.get()
            long r2 = r6.endOffset
            r4 = 0
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 <= 0) goto L16
            r4 = 1
            long r2 = r2 + r4
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L16
            return r2
        L16:
            return r0
    }

    public long getCurrentOffsetRead() {
            r4 = this;
            com.ss.android.socialbase.downloader.segment.SegmentReader r0 = r4.owner
            if (r0 == 0) goto Lf
            long r0 = r0.getCurSegmentReadOffset()
            long r2 = r4.currentOffsetRead
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 <= 0) goto Lf
            return r0
        Lf:
            long r0 = r4.currentOffsetRead
            return r0
    }

    public long getDownloadBytes() {
            r4 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r4.currentOffset
            long r0 = r0.get()
            long r2 = r4.startOffset
            long r0 = r0 - r2
            return r0
    }

    public long getEndOffset() {
            r2 = this;
            long r0 = r2.endOffset
            return r0
    }

    public int getIndex() {
            r1 = this;
            int r0 = r1.index
            return r0
    }

    public long getReadBytes() {
            r4 = this;
            long r0 = r4.getCurrentOffsetRead()
            long r2 = r4.startOffset
            long r0 = r0 - r2
            return r0
    }

    public long getRemainDownloadBytes() {
            r4 = this;
            long r0 = r4.endOffset
            long r2 = r4.startOffset
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 < 0) goto L13
            java.util.concurrent.atomic.AtomicLong r2 = r4.currentOffset
            long r2 = r2.get()
            long r0 = r0 - r2
            r2 = 1
            long r0 = r0 + r2
            return r0
        L13:
            r0 = -1
            return r0
    }

    public long getRemainReadBytes() {
            r4 = this;
            long r0 = r4.endOffset
            long r2 = r4.startOffset
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 < 0) goto L11
            long r2 = r4.getCurrentOffsetRead()
            long r0 = r0 - r2
            r2 = 1
            long r0 = r0 + r2
            return r0
        L11:
            r0 = -1
            return r0
    }

    public long getStartOffset() {
            r2 = this;
            long r0 = r2.startOffset
            return r0
    }

    void increaseCompetitor() {
            r1 = this;
            int r0 = r1.competitor
            int r0 = r0 + 1
            r1.competitor = r0
            return
    }

    void increaseCurrentOffset(long r2) {
            r1 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r1.currentOffset
            r0.addAndGet(r2)
            return
    }

    public boolean isDownloaded() {
            r4 = this;
            long r0 = r4.endOffset
            long r2 = r4.startOffset
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L16
            java.util.concurrent.atomic.AtomicLong r0 = r4.currentOffset
            long r0 = r0.get()
            long r2 = r4.endOffset
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L16
            r0 = 1
            goto L17
        L16:
            r0 = 0
        L17:
            return r0
    }

    public boolean isReadFinish() {
            r4 = this;
            long r0 = r4.endOffset
            long r2 = r4.startOffset
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L14
            long r0 = r4.getCurrentOffsetRead()
            long r2 = r4.endOffset
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L14
            r0 = 1
            goto L15
        L14:
            r0 = 0
        L15:
            return r0
    }

    void setCompetitor(int r1) {
            r0 = this;
            r0.competitor = r1
            return
    }

    public void setCurrentOffset(long r5) {
            r4 = this;
            long r0 = r4.startOffset
            int r2 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r2 >= 0) goto L7
            r5 = r0
        L7:
            long r0 = r4.endOffset
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 <= 0) goto L17
            r2 = 1
            long r0 = r0 + r2
            int r2 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r2 <= 0) goto L17
            r5 = r0
        L17:
            java.util.concurrent.atomic.AtomicLong r0 = r4.currentOffset
            r0.set(r5)
            return
    }

    public void setCurrentOffsetRead(long r3) {
            r2 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r2.currentOffset
            long r0 = r0.get()
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 < 0) goto Lc
            r2.currentOffsetRead = r3
        Lc:
            return
    }

    void setEndOffset(long r3) {
            r2 = this;
            long r0 = r2.startOffset
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 < 0) goto L9
            r2.endOffset = r3
            goto L2f
        L9:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "setEndOffset: endOffset = "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = ", segment = "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "Segment"
            android.util.Log.w(r1, r0)
            r0 = -1
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 != 0) goto L2f
            r2.endOffset = r3
        L2f:
            return
    }

    void setIndex(int r1) {
            r0 = this;
            r0.index = r1
            return
    }

    public org.json.JSONObject toJson() throws org.json.JSONException {
            r4 = this;
            org.json.JSONObject r0 = r4.jsonObject
            if (r0 != 0) goto Lb
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            r4.jsonObject = r0
        Lb:
            long r1 = r4.getStartOffset()
            java.lang.String r3 = "st"
            r0.put(r3, r1)
            long r1 = r4.getCurrentOffset()
            java.lang.String r3 = "cu"
            r0.put(r3, r1)
            long r1 = r4.getEndOffset()
            java.lang.String r3 = "en"
            r0.put(r3, r1)
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Segment{startOffset="
            r0.append(r1)
            long r1 = r3.startOffset
            r0.append(r1)
            java.lang.String r1 = ",\t currentOffset="
            r0.append(r1)
            java.util.concurrent.atomic.AtomicLong r1 = r3.currentOffset
            r0.append(r1)
            java.lang.String r1 = ",\t currentOffsetRead="
            r0.append(r1)
            long r1 = r3.getCurrentOffsetRead()
            r0.append(r1)
            java.lang.String r1 = ",\t endOffset="
            r0.append(r1)
            long r1 = r3.endOffset
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
