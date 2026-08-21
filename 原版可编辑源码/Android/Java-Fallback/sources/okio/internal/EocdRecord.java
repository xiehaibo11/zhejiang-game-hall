package okio.internal;

@kotlin.Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0007\b\u0002\u0018\u00002\u00020\u0001B\u001d\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006¢\u0006\u0002\u0010\u0007R\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000bR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\t¨\u0006\r"}, d2 = {"Lokio/internal/EocdRecord;", "", "entryCount", "", "centralDirectoryOffset", "commentByteCount", "", "(JJI)V", "getCentralDirectoryOffset", "()J", "getCommentByteCount", "()I", "getEntryCount", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
final class EocdRecord {
    private final long centralDirectoryOffset;
    private final int commentByteCount;
    private final long entryCount;

    public EocdRecord(long r1, long r3, int r5) {
            r0 = this;
            r0.<init>()
            r0.entryCount = r1
            r0.centralDirectoryOffset = r3
            r0.commentByteCount = r5
            return
    }

    public final long getCentralDirectoryOffset() {
            r2 = this;
            long r0 = r2.centralDirectoryOffset
            return r0
    }

    public final int getCommentByteCount() {
            r1 = this;
            int r0 = r1.commentByteCount
            return r0
    }

    public final long getEntryCount() {
            r2 = this;
            long r0 = r2.entryCount
            return r0
    }
}
