package okhttp3.internal.http2;

@kotlin.Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010$\n\u0002\u0018\u0002\n\u0002\u0010\b\n\u0002\b\t\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\t\bÆ\u0002\u0018\u00002\u00020\u0001:\u0002\u0018\u0019B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u000e\u0010\u0015\u001a\u00020\u00052\u0006\u0010\u0016\u001a\u00020\u0005J\u0014\u0010\u0017\u001a\u000e\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u00060\u0004H\u0002R\u001d\u0010\u0003\u001a\u000e\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u00060\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u000e\u0010\t\u001a\u00020\u0006X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u0006X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0006X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\u0006X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\u0006X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u0006X\u0082T¢\u0006\u0002\n\u0000R\u0019\u0010\u000f\u001a\b\u0012\u0004\u0012\u00020\u00110\u0010¢\u0006\n\n\u0002\u0010\u0014\u001a\u0004\b\u0012\u0010\u0013¨\u0006\u001a"}, d2 = {"Lokhttp3/internal/http2/Hpack;", "", "()V", "NAME_TO_FIRST_INDEX", "", "Lokio/ByteString;", "", "getNAME_TO_FIRST_INDEX", "()Ljava/util/Map;", "PREFIX_4_BITS", "PREFIX_5_BITS", "PREFIX_6_BITS", "PREFIX_7_BITS", "SETTINGS_HEADER_TABLE_SIZE", "SETTINGS_HEADER_TABLE_SIZE_LIMIT", "STATIC_HEADER_TABLE", "", "Lokhttp3/internal/http2/Header;", "getSTATIC_HEADER_TABLE", "()[Lokhttp3/internal/http2/Header;", "[Lokhttp3/internal/http2/Header;", "checkLowercase", "name", "nameToFirstIndex", "Reader", "Writer", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class Hpack {
    public static final okhttp3.internal.http2.Hpack INSTANCE = null;
    private static final java.util.Map<okio.ByteString, java.lang.Integer> NAME_TO_FIRST_INDEX = null;
    private static final int PREFIX_4_BITS = 15;
    private static final int PREFIX_5_BITS = 31;
    private static final int PREFIX_6_BITS = 63;
    private static final int PREFIX_7_BITS = 127;
    private static final int SETTINGS_HEADER_TABLE_SIZE = 4096;
    private static final int SETTINGS_HEADER_TABLE_SIZE_LIMIT = 16384;
    private static final okhttp3.internal.http2.Header[] STATIC_HEADER_TABLE = null;

    @kotlin.Metadata(d1 = {"\u0000N\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010!\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0006\n\u0002\u0010 \n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\r\u0018\u00002\u00020\u0001B!\b\u0007\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0005¢\u0006\u0002\u0010\u0007J\b\u0010\u0012\u001a\u00020\u0013H\u0002J\b\u0010\u0014\u001a\u00020\u0013H\u0002J\u0010\u0010\u0015\u001a\u00020\u00052\u0006\u0010\u0016\u001a\u00020\u0005H\u0002J\u0010\u0010\u0017\u001a\u00020\u00052\u0006\u0010\u0018\u001a\u00020\u0005H\u0002J\f\u0010\u0019\u001a\b\u0012\u0004\u0012\u00020\n0\u001aJ\u0010\u0010\u001b\u001a\u00020\u001c2\u0006\u0010\u0016\u001a\u00020\u0005H\u0002J\u0018\u0010\u001d\u001a\u00020\u00132\u0006\u0010\u0016\u001a\u00020\u00052\u0006\u0010\u001e\u001a\u00020\nH\u0002J\u0010\u0010\u001f\u001a\u00020 2\u0006\u0010\u0016\u001a\u00020\u0005H\u0002J\u0006\u0010\u0006\u001a\u00020\u0005J\b\u0010!\u001a\u00020\u0005H\u0002J\u0006\u0010\"\u001a\u00020\u001cJ\u0006\u0010#\u001a\u00020\u0013J\u0010\u0010$\u001a\u00020\u00132\u0006\u0010\u0016\u001a\u00020\u0005H\u0002J\u0016\u0010%\u001a\u00020\u00052\u0006\u0010&\u001a\u00020\u00052\u0006\u0010'\u001a\u00020\u0005J\u0010\u0010(\u001a\u00020\u00132\u0006\u0010)\u001a\u00020\u0005H\u0002J\b\u0010*\u001a\u00020\u0013H\u0002J\u0010\u0010+\u001a\u00020\u00132\u0006\u0010\u0016\u001a\u00020\u0005H\u0002J\b\u0010,\u001a\u00020\u0013H\u0002R\u001c\u0010\b\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\n0\t8\u0006@\u0006X\u0087\u000e¢\u0006\u0004\n\u0002\u0010\u000bR\u0012\u0010\f\u001a\u00020\u00058\u0006@\u0006X\u0087\u000e¢\u0006\u0002\n\u0000R\u0012\u0010\r\u001a\u00020\u00058\u0006@\u0006X\u0087\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\u000e\u001a\b\u0012\u0004\u0012\u00020\n0\u000fX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u0005X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0002\u001a\u00020\u0011X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006-"}, d2 = {"Lokhttp3/internal/http2/Hpack$Reader;", "", "source", "Lokio/Source;", "headerTableSizeSetting", "", "maxDynamicTableByteCount", "(Lokio/Source;II)V", "dynamicTable", "", "Lokhttp3/internal/http2/Header;", "[Lokhttp3/internal/http2/Header;", "dynamicTableByteCount", "headerCount", "headerList", "", "nextHeaderIndex", "Lokio/BufferedSource;", "adjustDynamicTableByteCount", "", "clearDynamicTable", "dynamicTableIndex", "index", "evictToRecoverBytes", "bytesToRecover", "getAndResetHeaderList", "", "getName", "Lokio/ByteString;", "insertIntoDynamicTable", "entry", "isStaticHeader", "", "readByte", "readByteString", "readHeaders", "readIndexedHeader", "readInt", "firstByte", "prefixMask", "readLiteralHeaderWithIncrementalIndexingIndexedName", "nameIndex", "readLiteralHeaderWithIncrementalIndexingNewName", "readLiteralHeaderWithoutIndexingIndexedName", "readLiteralHeaderWithoutIndexingNewName", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Reader {
        public okhttp3.internal.http2.Header[] dynamicTable;
        public int dynamicTableByteCount;
        public int headerCount;
        private final java.util.List<okhttp3.internal.http2.Header> headerList;
        private final int headerTableSizeSetting;
        private int maxDynamicTableByteCount;
        private int nextHeaderIndex;
        private final okio.BufferedSource source;

        public Reader(okio.Source r8, int r9) {
                r7 = this;
                java.lang.String r0 = "source"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
                r4 = 0
                r5 = 4
                r6 = 0
                r1 = r7
                r2 = r8
                r3 = r9
                r1.<init>(r2, r3, r4, r5, r6)
                return
        }

        public Reader(okio.Source r2, int r3, int r4) {
                r1 = this;
                java.lang.String r0 = "source"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r1.<init>()
                r1.headerTableSizeSetting = r3
                r1.maxDynamicTableByteCount = r4
                java.util.ArrayList r3 = new java.util.ArrayList
                r3.<init>()
                java.util.List r3 = (java.util.List) r3
                r1.headerList = r3
                okio.BufferedSource r2 = okio.Okio.buffer(r2)
                r1.source = r2
                r2 = 8
                okhttp3.internal.http2.Header[] r2 = new okhttp3.internal.http2.Header[r2]
                r1.dynamicTable = r2
                int r2 = r2.length
                int r2 = r2 + (-1)
                r1.nextHeaderIndex = r2
                return
        }

        public Reader(okio.Source r1, int r2, int r3, int r4, kotlin.jvm.internal.DefaultConstructorMarker r5) {
                r0 = this;
                r4 = r4 & 4
                if (r4 == 0) goto L5
                r3 = r2
            L5:
                r0.<init>(r1, r2, r3)
                return
        }

        private final void adjustDynamicTableByteCount() {
                r2 = this;
                int r0 = r2.maxDynamicTableByteCount
                int r1 = r2.dynamicTableByteCount
                if (r0 >= r1) goto L10
                if (r0 != 0) goto Lc
                r2.clearDynamicTable()
                goto L10
            Lc:
                int r1 = r1 - r0
                r2.evictToRecoverBytes(r1)
            L10:
                return
        }

        private final void clearDynamicTable() {
                r6 = this;
                okhttp3.internal.http2.Header[] r0 = r6.dynamicTable
                r1 = 0
                r2 = 0
                r3 = 0
                r4 = 6
                r5 = 0
                kotlin.collections.ArraysKt.fill$default(r0, r1, r2, r3, r4, r5)
                okhttp3.internal.http2.Header[] r0 = r6.dynamicTable
                int r0 = r0.length
                int r0 = r0 + (-1)
                r6.nextHeaderIndex = r0
                r0 = 0
                r6.headerCount = r0
                r6.dynamicTableByteCount = r0
                return
        }

        private final int dynamicTableIndex(int r2) {
                r1 = this;
                int r0 = r1.nextHeaderIndex
                int r0 = r0 + 1
                int r0 = r0 + r2
                return r0
        }

        private final int evictToRecoverBytes(int r5) {
                r4 = this;
                r0 = 0
                if (r5 <= 0) goto L3d
                okhttp3.internal.http2.Header[] r1 = r4.dynamicTable
                int r1 = r1.length
                int r1 = r1 + (-1)
            L8:
                int r2 = r4.nextHeaderIndex
                if (r1 < r2) goto L2a
                if (r5 <= 0) goto L2a
                okhttp3.internal.http2.Header[] r2 = r4.dynamicTable
                r2 = r2[r1]
                kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
                int r3 = r2.hpackSize
                int r5 = r5 - r3
                int r3 = r4.dynamicTableByteCount
                int r2 = r2.hpackSize
                int r3 = r3 - r2
                r4.dynamicTableByteCount = r3
                int r2 = r4.headerCount
                int r2 = r2 + (-1)
                r4.headerCount = r2
                int r0 = r0 + 1
                int r1 = r1 + (-1)
                goto L8
            L2a:
                okhttp3.internal.http2.Header[] r5 = r4.dynamicTable
                int r1 = r4.nextHeaderIndex
                int r2 = r1 + 1
                int r1 = r1 + 1
                int r1 = r1 + r0
                int r3 = r4.headerCount
                java.lang.System.arraycopy(r5, r2, r5, r1, r3)
                int r5 = r4.nextHeaderIndex
                int r5 = r5 + r0
                r4.nextHeaderIndex = r5
            L3d:
                return r0
        }

        private final okio.ByteString getName(int r4) throws java.io.IOException {
                r3 = this;
                boolean r0 = r3.isStaticHeader(r4)
                if (r0 == 0) goto L11
                okhttp3.internal.http2.Hpack r0 = okhttp3.internal.http2.Hpack.INSTANCE
                okhttp3.internal.http2.Header[] r0 = r0.getSTATIC_HEADER_TABLE()
                r4 = r0[r4]
                okio.ByteString r4 = r4.name
                goto L2c
            L11:
                okhttp3.internal.http2.Hpack r0 = okhttp3.internal.http2.Hpack.INSTANCE
                okhttp3.internal.http2.Header[] r0 = r0.getSTATIC_HEADER_TABLE()
                int r0 = r0.length
                int r0 = r4 - r0
                int r0 = r3.dynamicTableIndex(r0)
                if (r0 < 0) goto L2d
                okhttp3.internal.http2.Header[] r1 = r3.dynamicTable
                int r2 = r1.length
                if (r0 >= r2) goto L2d
                r4 = r1[r0]
                kotlin.jvm.internal.Intrinsics.checkNotNull(r4)
                okio.ByteString r4 = r4.name
            L2c:
                return r4
            L2d:
                java.io.IOException r0 = new java.io.IOException
                int r4 = r4 + 1
                java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
                java.lang.String r1 = "Header index too large "
                java.lang.String r4 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r4)
                r0.<init>(r4)
                throw r0
        }

        private final void insertIntoDynamicTable(int r6, okhttp3.internal.http2.Header r7) {
                r5 = this;
                java.util.List<okhttp3.internal.http2.Header> r0 = r5.headerList
                r0.add(r7)
                int r0 = r7.hpackSize
                r1 = -1
                if (r6 == r1) goto L18
                okhttp3.internal.http2.Header[] r2 = r5.dynamicTable
                int r3 = r5.dynamicTableIndex(r6)
                r2 = r2[r3]
                kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
                int r2 = r2.hpackSize
                int r0 = r0 - r2
            L18:
                int r2 = r5.maxDynamicTableByteCount
                if (r0 <= r2) goto L20
                r5.clearDynamicTable()
                return
            L20:
                int r3 = r5.dynamicTableByteCount
                int r3 = r3 + r0
                int r3 = r3 - r2
                int r2 = r5.evictToRecoverBytes(r3)
                if (r6 != r1) goto L58
                int r6 = r5.headerCount
                int r6 = r6 + 1
                okhttp3.internal.http2.Header[] r1 = r5.dynamicTable
                int r2 = r1.length
                if (r6 <= r2) goto L47
                int r6 = r1.length
                int r6 = r6 * 2
                okhttp3.internal.http2.Header[] r6 = new okhttp3.internal.http2.Header[r6]
                r2 = 0
                int r3 = r1.length
                int r4 = r1.length
                java.lang.System.arraycopy(r1, r2, r6, r3, r4)
                okhttp3.internal.http2.Header[] r1 = r5.dynamicTable
                int r1 = r1.length
                int r1 = r1 + (-1)
                r5.nextHeaderIndex = r1
                r5.dynamicTable = r6
            L47:
                int r6 = r5.nextHeaderIndex
                int r1 = r6 + (-1)
                r5.nextHeaderIndex = r1
                okhttp3.internal.http2.Header[] r1 = r5.dynamicTable
                r1[r6] = r7
                int r6 = r5.headerCount
                int r6 = r6 + 1
                r5.headerCount = r6
                goto L62
            L58:
                int r1 = r5.dynamicTableIndex(r6)
                int r1 = r1 + r2
                int r6 = r6 + r1
                okhttp3.internal.http2.Header[] r1 = r5.dynamicTable
                r1[r6] = r7
            L62:
                int r6 = r5.dynamicTableByteCount
                int r6 = r6 + r0
                r5.dynamicTableByteCount = r6
                return
        }

        private final boolean isStaticHeader(int r3) {
                r2 = this;
                r0 = 1
                if (r3 < 0) goto Le
                okhttp3.internal.http2.Hpack r1 = okhttp3.internal.http2.Hpack.INSTANCE
                okhttp3.internal.http2.Header[] r1 = r1.getSTATIC_HEADER_TABLE()
                int r1 = r1.length
                int r1 = r1 - r0
                if (r3 > r1) goto Le
                goto Lf
            Le:
                r0 = 0
            Lf:
                return r0
        }

        private final int readByte() throws java.io.IOException {
                r2 = this;
                okio.BufferedSource r0 = r2.source
                byte r0 = r0.readByte()
                r1 = 255(0xff, float:3.57E-43)
                int r0 = okhttp3.internal.Util.and(r0, r1)
                return r0
        }

        private final void readIndexedHeader(int r4) throws java.io.IOException {
                r3 = this;
                boolean r0 = r3.isStaticHeader(r4)
                if (r0 == 0) goto L14
                okhttp3.internal.http2.Hpack r0 = okhttp3.internal.http2.Hpack.INSTANCE
                okhttp3.internal.http2.Header[] r0 = r0.getSTATIC_HEADER_TABLE()
                r4 = r0[r4]
                java.util.List<okhttp3.internal.http2.Header> r0 = r3.headerList
                r0.add(r4)
                goto L34
            L14:
                okhttp3.internal.http2.Hpack r0 = okhttp3.internal.http2.Hpack.INSTANCE
                okhttp3.internal.http2.Header[] r0 = r0.getSTATIC_HEADER_TABLE()
                int r0 = r0.length
                int r0 = r4 - r0
                int r0 = r3.dynamicTableIndex(r0)
                if (r0 < 0) goto L35
                okhttp3.internal.http2.Header[] r1 = r3.dynamicTable
                int r2 = r1.length
                if (r0 >= r2) goto L35
                java.util.List<okhttp3.internal.http2.Header> r4 = r3.headerList
                java.util.Collection r4 = (java.util.Collection) r4
                r0 = r1[r0]
                kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
                r4.add(r0)
            L34:
                return
            L35:
                java.io.IOException r0 = new java.io.IOException
                int r4 = r4 + 1
                java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
                java.lang.String r1 = "Header index too large "
                java.lang.String r4 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r4)
                r0.<init>(r4)
                throw r0
        }

        private final void readLiteralHeaderWithIncrementalIndexingIndexedName(int r3) throws java.io.IOException {
                r2 = this;
                okio.ByteString r3 = r2.getName(r3)
                okio.ByteString r0 = r2.readByteString()
                okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
                r1.<init>(r3, r0)
                r3 = -1
                r2.insertIntoDynamicTable(r3, r1)
                return
        }

        private final void readLiteralHeaderWithIncrementalIndexingNewName() throws java.io.IOException {
                r3 = this;
                okhttp3.internal.http2.Hpack r0 = okhttp3.internal.http2.Hpack.INSTANCE
                okio.ByteString r1 = r3.readByteString()
                okio.ByteString r0 = r0.checkLowercase(r1)
                okio.ByteString r1 = r3.readByteString()
                okhttp3.internal.http2.Header r2 = new okhttp3.internal.http2.Header
                r2.<init>(r0, r1)
                r0 = -1
                r3.insertIntoDynamicTable(r0, r2)
                return
        }

        private final void readLiteralHeaderWithoutIndexingIndexedName(int r4) throws java.io.IOException {
                r3 = this;
                okio.ByteString r4 = r3.getName(r4)
                okio.ByteString r0 = r3.readByteString()
                java.util.List<okhttp3.internal.http2.Header> r1 = r3.headerList
                okhttp3.internal.http2.Header r2 = new okhttp3.internal.http2.Header
                r2.<init>(r4, r0)
                r1.add(r2)
                return
        }

        private final void readLiteralHeaderWithoutIndexingNewName() throws java.io.IOException {
                r4 = this;
                okhttp3.internal.http2.Hpack r0 = okhttp3.internal.http2.Hpack.INSTANCE
                okio.ByteString r1 = r4.readByteString()
                okio.ByteString r0 = r0.checkLowercase(r1)
                okio.ByteString r1 = r4.readByteString()
                java.util.List<okhttp3.internal.http2.Header> r2 = r4.headerList
                okhttp3.internal.http2.Header r3 = new okhttp3.internal.http2.Header
                r3.<init>(r0, r1)
                r2.add(r3)
                return
        }

        public final java.util.List<okhttp3.internal.http2.Header> getAndResetHeaderList() {
                r2 = this;
                java.util.List<okhttp3.internal.http2.Header> r0 = r2.headerList
                java.lang.Iterable r0 = (java.lang.Iterable) r0
                java.util.List r0 = kotlin.collections.CollectionsKt.toList(r0)
                java.util.List<okhttp3.internal.http2.Header> r1 = r2.headerList
                r1.clear()
                return r0
        }

        public final int maxDynamicTableByteCount() {
                r1 = this;
                int r0 = r1.maxDynamicTableByteCount
                return r0
        }

        public final okio.ByteString readByteString() throws java.io.IOException {
                r6 = this;
                int r0 = r6.readByte()
                r1 = r0 & 128(0x80, float:1.8E-43)
                r2 = 128(0x80, float:1.8E-43)
                if (r1 != r2) goto Lc
                r1 = 1
                goto Ld
            Lc:
                r1 = 0
            Ld:
                r2 = 127(0x7f, float:1.78E-43)
                int r0 = r6.readInt(r0, r2)
                long r2 = (long) r0
                if (r1 == 0) goto L2a
                okio.Buffer r0 = new okio.Buffer
                r0.<init>()
                okhttp3.internal.http2.Huffman r1 = okhttp3.internal.http2.Huffman.INSTANCE
                okio.BufferedSource r4 = r6.source
                r5 = r0
                okio.BufferedSink r5 = (okio.BufferedSink) r5
                r1.decode(r4, r2, r5)
                okio.ByteString r0 = r0.readByteString()
                goto L30
            L2a:
                okio.BufferedSource r0 = r6.source
                okio.ByteString r0 = r0.readByteString(r2)
            L30:
                return r0
        }

        public final void readHeaders() throws java.io.IOException {
                r3 = this;
            L0:
                okio.BufferedSource r0 = r3.source
                boolean r0 = r0.exhausted()
                if (r0 != 0) goto L8a
                okio.BufferedSource r0 = r3.source
                byte r0 = r0.readByte()
                r1 = 255(0xff, float:3.57E-43)
                int r0 = okhttp3.internal.Util.and(r0, r1)
                r1 = 128(0x80, float:1.8E-43)
                if (r0 == r1) goto L82
                r2 = r0 & 128(0x80, float:1.8E-43)
                if (r2 != r1) goto L28
                r1 = 127(0x7f, float:1.78E-43)
                int r0 = r3.readInt(r0, r1)
                int r0 = r0 + (-1)
                r3.readIndexedHeader(r0)
                goto L0
            L28:
                r1 = 64
                if (r0 != r1) goto L30
                r3.readLiteralHeaderWithIncrementalIndexingNewName()
                goto L0
            L30:
                r2 = r0 & 64
                if (r2 != r1) goto L40
                r1 = 63
                int r0 = r3.readInt(r0, r1)
                int r0 = r0 + (-1)
                r3.readLiteralHeaderWithIncrementalIndexingIndexedName(r0)
                goto L0
            L40:
                r1 = r0 & 32
                r2 = 32
                if (r1 != r2) goto L6a
                r1 = 31
                int r0 = r3.readInt(r0, r1)
                r3.maxDynamicTableByteCount = r0
                if (r0 < 0) goto L58
                int r1 = r3.headerTableSizeSetting
                if (r0 > r1) goto L58
                r3.adjustDynamicTableByteCount()
                goto L0
            L58:
                java.io.IOException r0 = new java.io.IOException
                int r1 = r3.maxDynamicTableByteCount
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                java.lang.String r2 = "Invalid dynamic table size update "
                java.lang.String r1 = kotlin.jvm.internal.Intrinsics.stringPlus(r2, r1)
                r0.<init>(r1)
                throw r0
            L6a:
                r1 = 16
                if (r0 == r1) goto L7d
                if (r0 != 0) goto L71
                goto L7d
            L71:
                r1 = 15
                int r0 = r3.readInt(r0, r1)
                int r0 = r0 + (-1)
                r3.readLiteralHeaderWithoutIndexingIndexedName(r0)
                goto L0
            L7d:
                r3.readLiteralHeaderWithoutIndexingNewName()
                goto L0
            L82:
                java.io.IOException r0 = new java.io.IOException
                java.lang.String r1 = "index == 0"
                r0.<init>(r1)
                throw r0
            L8a:
                return
        }

        public final int readInt(int r3, int r4) throws java.io.IOException {
                r2 = this;
                r3 = r3 & r4
                if (r3 >= r4) goto L4
                return r3
            L4:
                r3 = 0
            L5:
                int r0 = r2.readByte()
                r1 = r0 & 128(0x80, float:1.8E-43)
                if (r1 == 0) goto L14
                r0 = r0 & 127(0x7f, float:1.78E-43)
                int r0 = r0 << r3
                int r4 = r4 + r0
                int r3 = r3 + 7
                goto L5
            L14:
                int r3 = r0 << r3
                int r4 = r4 + r3
                return r4
        }
    }

    @kotlin.Metadata(d1 = {"\u0000B\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0010\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\b\u0005\u0018\u00002\u00020\u0001B#\b\u0007\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0002\u0010\bJ\b\u0010\u0013\u001a\u00020\u0014H\u0002J\b\u0010\u0015\u001a\u00020\u0014H\u0002J\u0010\u0010\u0016\u001a\u00020\u00032\u0006\u0010\u0017\u001a\u00020\u0003H\u0002J\u0010\u0010\u0018\u001a\u00020\u00142\u0006\u0010\u0019\u001a\u00020\u000bH\u0002J\u000e\u0010\u001a\u001a\u00020\u00142\u0006\u0010\u0002\u001a\u00020\u0003J\u000e\u0010\u001b\u001a\u00020\u00142\u0006\u0010\u001c\u001a\u00020\u001dJ\u0014\u0010\u001e\u001a\u00020\u00142\f\u0010\u001f\u001a\b\u0012\u0004\u0012\u00020\u000b0 J\u001e\u0010!\u001a\u00020\u00142\u0006\u0010\"\u001a\u00020\u00032\u0006\u0010#\u001a\u00020\u00032\u0006\u0010$\u001a\u00020\u0003R\u001c\u0010\t\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u000b0\n8\u0006@\u0006X\u0087\u000e¢\u0006\u0004\n\u0002\u0010\fR\u0012\u0010\r\u001a\u00020\u00038\u0006@\u0006X\u0087\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u0005X\u0082\u000e¢\u0006\u0002\n\u0000R\u0012\u0010\u000f\u001a\u00020\u00038\u0006@\u0006X\u0087\u000e¢\u0006\u0002\n\u0000R\u0012\u0010\u0002\u001a\u00020\u00038\u0006@\u0006X\u0087\u000e¢\u0006\u0002\n\u0000R\u0012\u0010\u0010\u001a\u00020\u00038\u0006@\u0006X\u0087\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0011\u001a\u00020\u0003X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\u0003X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006%"}, d2 = {"Lokhttp3/internal/http2/Hpack$Writer;", "", "headerTableSizeSetting", "", "useCompression", "", "out", "Lokio/Buffer;", "(IZLokio/Buffer;)V", "dynamicTable", "", "Lokhttp3/internal/http2/Header;", "[Lokhttp3/internal/http2/Header;", "dynamicTableByteCount", "emitDynamicTableSizeUpdate", "headerCount", "maxDynamicTableByteCount", "nextHeaderIndex", "smallestHeaderTableSizeSetting", "adjustDynamicTableByteCount", "", "clearDynamicTable", "evictToRecoverBytes", "bytesToRecover", "insertIntoDynamicTable", "entry", "resizeHeaderTable", "writeByteString", "data", "Lokio/ByteString;", "writeHeaders", "headerBlock", "", "writeInt", "value", "prefixMask", "bits", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Writer {
        public okhttp3.internal.http2.Header[] dynamicTable;
        public int dynamicTableByteCount;
        private boolean emitDynamicTableSizeUpdate;
        public int headerCount;
        public int headerTableSizeSetting;
        public int maxDynamicTableByteCount;
        private int nextHeaderIndex;
        private final okio.Buffer out;
        private int smallestHeaderTableSizeSetting;
        private final boolean useCompression;

        public Writer(int r8, okio.Buffer r9) {
                r7 = this;
                java.lang.String r0 = "out"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
                r3 = 0
                r5 = 2
                r6 = 0
                r1 = r7
                r2 = r8
                r4 = r9
                r1.<init>(r2, r3, r4, r5, r6)
                return
        }

        public Writer(int r2, boolean r3, okio.Buffer r4) {
                r1 = this;
                java.lang.String r0 = "out"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
                r1.<init>()
                r1.headerTableSizeSetting = r2
                r1.useCompression = r3
                r1.out = r4
                r3 = 2147483647(0x7fffffff, float:NaN)
                r1.smallestHeaderTableSizeSetting = r3
                r1.maxDynamicTableByteCount = r2
                r2 = 8
                okhttp3.internal.http2.Header[] r2 = new okhttp3.internal.http2.Header[r2]
                r1.dynamicTable = r2
                int r2 = r2.length
                int r2 = r2 + (-1)
                r1.nextHeaderIndex = r2
                return
        }

        public Writer(int r1, boolean r2, okio.Buffer r3, int r4, kotlin.jvm.internal.DefaultConstructorMarker r5) {
                r0 = this;
                r5 = r4 & 1
                if (r5 == 0) goto L6
                r1 = 4096(0x1000, float:5.74E-42)
            L6:
                r4 = r4 & 2
                if (r4 == 0) goto Lb
                r2 = 1
            Lb:
                r0.<init>(r1, r2, r3)
                return
        }

        public Writer(okio.Buffer r8) {
                r7 = this;
                java.lang.String r0 = "out"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
                r2 = 0
                r3 = 0
                r5 = 3
                r6 = 0
                r1 = r7
                r4 = r8
                r1.<init>(r2, r3, r4, r5, r6)
                return
        }

        private final void adjustDynamicTableByteCount() {
                r2 = this;
                int r0 = r2.maxDynamicTableByteCount
                int r1 = r2.dynamicTableByteCount
                if (r0 >= r1) goto L10
                if (r0 != 0) goto Lc
                r2.clearDynamicTable()
                goto L10
            Lc:
                int r1 = r1 - r0
                r2.evictToRecoverBytes(r1)
            L10:
                return
        }

        private final void clearDynamicTable() {
                r6 = this;
                okhttp3.internal.http2.Header[] r0 = r6.dynamicTable
                r1 = 0
                r2 = 0
                r3 = 0
                r4 = 6
                r5 = 0
                kotlin.collections.ArraysKt.fill$default(r0, r1, r2, r3, r4, r5)
                okhttp3.internal.http2.Header[] r0 = r6.dynamicTable
                int r0 = r0.length
                int r0 = r0 + (-1)
                r6.nextHeaderIndex = r0
                r0 = 0
                r6.headerCount = r0
                r6.dynamicTableByteCount = r0
                return
        }

        private final int evictToRecoverBytes(int r5) {
                r4 = this;
                r0 = 0
                if (r5 <= 0) goto L51
                okhttp3.internal.http2.Header[] r1 = r4.dynamicTable
                int r1 = r1.length
                int r1 = r1 + (-1)
            L8:
                int r2 = r4.nextHeaderIndex
                if (r1 < r2) goto L31
                if (r5 <= 0) goto L31
                okhttp3.internal.http2.Header[] r2 = r4.dynamicTable
                r2 = r2[r1]
                kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
                int r2 = r2.hpackSize
                int r5 = r5 - r2
                int r2 = r4.dynamicTableByteCount
                okhttp3.internal.http2.Header[] r3 = r4.dynamicTable
                r3 = r3[r1]
                kotlin.jvm.internal.Intrinsics.checkNotNull(r3)
                int r3 = r3.hpackSize
                int r2 = r2 - r3
                r4.dynamicTableByteCount = r2
                int r2 = r4.headerCount
                int r2 = r2 + (-1)
                r4.headerCount = r2
                int r0 = r0 + 1
                int r1 = r1 + (-1)
                goto L8
            L31:
                okhttp3.internal.http2.Header[] r5 = r4.dynamicTable
                int r1 = r4.nextHeaderIndex
                int r2 = r1 + 1
                int r1 = r1 + 1
                int r1 = r1 + r0
                int r3 = r4.headerCount
                java.lang.System.arraycopy(r5, r2, r5, r1, r3)
                okhttp3.internal.http2.Header[] r5 = r4.dynamicTable
                int r1 = r4.nextHeaderIndex
                int r2 = r1 + 1
                int r1 = r1 + 1
                int r1 = r1 + r0
                r3 = 0
                java.util.Arrays.fill(r5, r2, r1, r3)
                int r5 = r4.nextHeaderIndex
                int r5 = r5 + r0
                r4.nextHeaderIndex = r5
            L51:
                return r0
        }

        private final void insertIntoDynamicTable(okhttp3.internal.http2.Header r7) {
                r6 = this;
                int r0 = r7.hpackSize
                int r1 = r6.maxDynamicTableByteCount
                if (r0 <= r1) goto La
                r6.clearDynamicTable()
                return
            La:
                int r2 = r6.dynamicTableByteCount
                int r2 = r2 + r0
                int r2 = r2 - r1
                r6.evictToRecoverBytes(r2)
                int r1 = r6.headerCount
                int r1 = r1 + 1
                okhttp3.internal.http2.Header[] r2 = r6.dynamicTable
                int r3 = r2.length
                if (r1 <= r3) goto L2e
                int r1 = r2.length
                int r1 = r1 * 2
                okhttp3.internal.http2.Header[] r1 = new okhttp3.internal.http2.Header[r1]
                r3 = 0
                int r4 = r2.length
                int r5 = r2.length
                java.lang.System.arraycopy(r2, r3, r1, r4, r5)
                okhttp3.internal.http2.Header[] r2 = r6.dynamicTable
                int r2 = r2.length
                int r2 = r2 + (-1)
                r6.nextHeaderIndex = r2
                r6.dynamicTable = r1
            L2e:
                int r1 = r6.nextHeaderIndex
                int r2 = r1 + (-1)
                r6.nextHeaderIndex = r2
                okhttp3.internal.http2.Header[] r2 = r6.dynamicTable
                r2[r1] = r7
                int r7 = r6.headerCount
                int r7 = r7 + 1
                r6.headerCount = r7
                int r7 = r6.dynamicTableByteCount
                int r7 = r7 + r0
                r6.dynamicTableByteCount = r7
                return
        }

        public final void resizeHeaderTable(int r2) {
                r1 = this;
                r1.headerTableSizeSetting = r2
                r0 = 16384(0x4000, float:2.2959E-41)
                int r2 = java.lang.Math.min(r2, r0)
                int r0 = r1.maxDynamicTableByteCount
                if (r0 != r2) goto Ld
                return
            Ld:
                if (r2 >= r0) goto L17
                int r0 = r1.smallestHeaderTableSizeSetting
                int r0 = java.lang.Math.min(r0, r2)
                r1.smallestHeaderTableSizeSetting = r0
            L17:
                r0 = 1
                r1.emitDynamicTableSizeUpdate = r0
                r1.maxDynamicTableByteCount = r2
                r1.adjustDynamicTableByteCount()
                return
        }

        public final void writeByteString(okio.ByteString r5) throws java.io.IOException {
                r4 = this;
                java.lang.String r0 = "data"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                boolean r0 = r4.useCompression
                r1 = 127(0x7f, float:1.78E-43)
                if (r0 == 0) goto L37
                okhttp3.internal.http2.Huffman r0 = okhttp3.internal.http2.Huffman.INSTANCE
                int r0 = r0.encodedLength(r5)
                int r2 = r5.size()
                if (r0 >= r2) goto L37
                okio.Buffer r0 = new okio.Buffer
                r0.<init>()
                okhttp3.internal.http2.Huffman r2 = okhttp3.internal.http2.Huffman.INSTANCE
                r3 = r0
                okio.BufferedSink r3 = (okio.BufferedSink) r3
                r2.encode(r5, r3)
                okio.ByteString r5 = r0.readByteString()
                int r0 = r5.size()
                r2 = 128(0x80, float:1.8E-43)
                r4.writeInt(r0, r1, r2)
                okio.Buffer r0 = r4.out
                r0.write(r5)
                goto L44
            L37:
                int r0 = r5.size()
                r2 = 0
                r4.writeInt(r0, r1, r2)
                okio.Buffer r0 = r4.out
                r0.write(r5)
            L44:
                return
        }

        public final void writeHeaders(java.util.List<okhttp3.internal.http2.Header> r15) throws java.io.IOException {
                r14 = this;
                java.lang.String r0 = "headerBlock"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r15, r0)
                boolean r0 = r14.emitDynamicTableSizeUpdate
                r1 = 0
                if (r0 == 0) goto L23
                int r0 = r14.smallestHeaderTableSizeSetting
                int r2 = r14.maxDynamicTableByteCount
                r3 = 32
                r4 = 31
                if (r0 >= r2) goto L17
                r14.writeInt(r0, r4, r3)
            L17:
                r14.emitDynamicTableSizeUpdate = r1
                r0 = 2147483647(0x7fffffff, float:NaN)
                r14.smallestHeaderTableSizeSetting = r0
                int r0 = r14.maxDynamicTableByteCount
                r14.writeInt(r0, r4, r3)
            L23:
                int r0 = r15.size()
                r2 = r1
            L28:
                if (r2 >= r0) goto L112
                int r3 = r2 + 1
                java.lang.Object r2 = r15.get(r2)
                okhttp3.internal.http2.Header r2 = (okhttp3.internal.http2.Header) r2
                okio.ByteString r4 = r2.name
                okio.ByteString r4 = r4.toAsciiLowercase()
                okio.ByteString r5 = r2.value
                okhttp3.internal.http2.Hpack r6 = okhttp3.internal.http2.Hpack.INSTANCE
                java.util.Map r6 = r6.getNAME_TO_FIRST_INDEX()
                java.lang.Object r6 = r6.get(r4)
                java.lang.Integer r6 = (java.lang.Integer) r6
                r7 = -1
                r8 = 1
                if (r6 == 0) goto L87
                int r6 = r6.intValue()
                int r6 = r6 + r8
                r9 = 2
                if (r9 > r6) goto L58
                r9 = 8
                if (r6 >= r9) goto L58
                r9 = r8
                goto L59
            L58:
                r9 = r1
            L59:
                if (r9 == 0) goto L84
                okhttp3.internal.http2.Hpack r9 = okhttp3.internal.http2.Hpack.INSTANCE
                okhttp3.internal.http2.Header[] r9 = r9.getSTATIC_HEADER_TABLE()
                int r10 = r6 + (-1)
                r9 = r9[r10]
                okio.ByteString r9 = r9.value
                boolean r9 = kotlin.jvm.internal.Intrinsics.areEqual(r9, r5)
                if (r9 == 0) goto L6e
                goto L88
            L6e:
                okhttp3.internal.http2.Hpack r9 = okhttp3.internal.http2.Hpack.INSTANCE
                okhttp3.internal.http2.Header[] r9 = r9.getSTATIC_HEADER_TABLE()
                r9 = r9[r6]
                okio.ByteString r9 = r9.value
                boolean r9 = kotlin.jvm.internal.Intrinsics.areEqual(r9, r5)
                if (r9 == 0) goto L84
                int r9 = r6 + 1
                r13 = r9
                r9 = r6
                r6 = r13
                goto L89
            L84:
                r9 = r6
                r6 = r7
                goto L89
            L87:
                r6 = r7
            L88:
                r9 = r6
            L89:
                if (r6 != r7) goto Lce
                int r10 = r14.nextHeaderIndex
                int r10 = r10 + r8
                okhttp3.internal.http2.Header[] r8 = r14.dynamicTable
                int r8 = r8.length
            L91:
                if (r10 >= r8) goto Lce
                int r11 = r10 + 1
                okhttp3.internal.http2.Header[] r12 = r14.dynamicTable
                r12 = r12[r10]
                kotlin.jvm.internal.Intrinsics.checkNotNull(r12)
                okio.ByteString r12 = r12.name
                boolean r12 = kotlin.jvm.internal.Intrinsics.areEqual(r12, r4)
                if (r12 == 0) goto Lcc
                okhttp3.internal.http2.Header[] r12 = r14.dynamicTable
                r12 = r12[r10]
                kotlin.jvm.internal.Intrinsics.checkNotNull(r12)
                okio.ByteString r12 = r12.value
                boolean r12 = kotlin.jvm.internal.Intrinsics.areEqual(r12, r5)
                if (r12 == 0) goto Lbf
                int r6 = r14.nextHeaderIndex
                int r10 = r10 - r6
                okhttp3.internal.http2.Hpack r6 = okhttp3.internal.http2.Hpack.INSTANCE
                okhttp3.internal.http2.Header[] r6 = r6.getSTATIC_HEADER_TABLE()
                int r6 = r6.length
                int r6 = r6 + r10
                goto Lce
            Lbf:
                if (r9 != r7) goto Lcc
                int r9 = r14.nextHeaderIndex
                int r10 = r10 - r9
                okhttp3.internal.http2.Hpack r9 = okhttp3.internal.http2.Hpack.INSTANCE
                okhttp3.internal.http2.Header[] r9 = r9.getSTATIC_HEADER_TABLE()
                int r9 = r9.length
                int r9 = r9 + r10
            Lcc:
                r10 = r11
                goto L91
            Lce:
                if (r6 == r7) goto Ld8
                r2 = 127(0x7f, float:1.78E-43)
                r4 = 128(0x80, float:1.8E-43)
                r14.writeInt(r6, r2, r4)
                goto L10f
            Ld8:
                r6 = 64
                if (r9 != r7) goto Leb
                okio.Buffer r7 = r14.out
                r7.writeByte(r6)
                r14.writeByteString(r4)
                r14.writeByteString(r5)
                r14.insertIntoDynamicTable(r2)
                goto L10f
            Leb:
                okio.ByteString r7 = okhttp3.internal.http2.Header.PSEUDO_PREFIX
                boolean r7 = r4.startsWith(r7)
                if (r7 == 0) goto L104
                okio.ByteString r7 = okhttp3.internal.http2.Header.TARGET_AUTHORITY
                boolean r4 = kotlin.jvm.internal.Intrinsics.areEqual(r7, r4)
                if (r4 != 0) goto L104
                r2 = 15
                r14.writeInt(r9, r2, r1)
                r14.writeByteString(r5)
                goto L10f
            L104:
                r4 = 63
                r14.writeInt(r9, r4, r6)
                r14.writeByteString(r5)
                r14.insertIntoDynamicTable(r2)
            L10f:
                r2 = r3
                goto L28
            L112:
                return
        }

        public final void writeInt(int r2, int r3, int r4) {
                r1 = this;
                if (r2 >= r3) goto L9
                okio.Buffer r3 = r1.out
                r2 = r2 | r4
                r3.writeByte(r2)
                return
            L9:
                okio.Buffer r0 = r1.out
                r4 = r4 | r3
                r0.writeByte(r4)
                int r2 = r2 - r3
            L10:
                r3 = 128(0x80, float:1.8E-43)
                if (r2 < r3) goto L1f
                r4 = r2 & 127(0x7f, float:1.78E-43)
                okio.Buffer r0 = r1.out
                r3 = r3 | r4
                r0.writeByte(r3)
                int r2 = r2 >>> 7
                goto L10
            L1f:
                okio.Buffer r3 = r1.out
                r3.writeByte(r2)
                return
        }
    }

    static {
            okhttp3.internal.http2.Hpack r0 = new okhttp3.internal.http2.Hpack
            r0.<init>()
            okhttp3.internal.http2.Hpack.INSTANCE = r0
            r0 = 61
            okhttp3.internal.http2.Header[] r0 = new okhttp3.internal.http2.Header[r0]
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            okio.ByteString r2 = okhttp3.internal.http2.Header.TARGET_AUTHORITY
            java.lang.String r3 = ""
            r1.<init>(r2, r3)
            r2 = 0
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            okio.ByteString r2 = okhttp3.internal.http2.Header.TARGET_METHOD
            java.lang.String r4 = "GET"
            r1.<init>(r2, r4)
            r2 = 1
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            okio.ByteString r2 = okhttp3.internal.http2.Header.TARGET_METHOD
            java.lang.String r4 = "POST"
            r1.<init>(r2, r4)
            r2 = 2
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            okio.ByteString r2 = okhttp3.internal.http2.Header.TARGET_PATH
            java.lang.String r4 = "/"
            r1.<init>(r2, r4)
            r2 = 3
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            okio.ByteString r2 = okhttp3.internal.http2.Header.TARGET_PATH
            java.lang.String r4 = "/index.html"
            r1.<init>(r2, r4)
            r2 = 4
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            okio.ByteString r2 = okhttp3.internal.http2.Header.TARGET_SCHEME
            java.lang.String r4 = "http"
            r1.<init>(r2, r4)
            r2 = 5
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            okio.ByteString r2 = okhttp3.internal.http2.Header.TARGET_SCHEME
            java.lang.String r4 = "https"
            r1.<init>(r2, r4)
            r2 = 6
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            okio.ByteString r2 = okhttp3.internal.http2.Header.RESPONSE_STATUS
            java.lang.String r4 = "200"
            r1.<init>(r2, r4)
            r2 = 7
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            okio.ByteString r2 = okhttp3.internal.http2.Header.RESPONSE_STATUS
            java.lang.String r4 = "204"
            r1.<init>(r2, r4)
            r2 = 8
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            okio.ByteString r2 = okhttp3.internal.http2.Header.RESPONSE_STATUS
            java.lang.String r4 = "206"
            r1.<init>(r2, r4)
            r2 = 9
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            okio.ByteString r2 = okhttp3.internal.http2.Header.RESPONSE_STATUS
            java.lang.String r4 = "304"
            r1.<init>(r2, r4)
            r2 = 10
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            okio.ByteString r2 = okhttp3.internal.http2.Header.RESPONSE_STATUS
            java.lang.String r4 = "400"
            r1.<init>(r2, r4)
            r2 = 11
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            okio.ByteString r2 = okhttp3.internal.http2.Header.RESPONSE_STATUS
            java.lang.String r4 = "404"
            r1.<init>(r2, r4)
            r2 = 12
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            okio.ByteString r2 = okhttp3.internal.http2.Header.RESPONSE_STATUS
            java.lang.String r4 = "500"
            r1.<init>(r2, r4)
            r2 = 13
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "accept-charset"
            r1.<init>(r2, r3)
            r2 = 14
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "accept-encoding"
            java.lang.String r4 = "gzip, deflate"
            r1.<init>(r2, r4)
            r2 = 15
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "accept-language"
            r1.<init>(r2, r3)
            r2 = 16
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "accept-ranges"
            r1.<init>(r2, r3)
            r2 = 17
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "accept"
            r1.<init>(r2, r3)
            r2 = 18
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "access-control-allow-origin"
            r1.<init>(r2, r3)
            r2 = 19
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "age"
            r1.<init>(r2, r3)
            r2 = 20
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "allow"
            r1.<init>(r2, r3)
            r2 = 21
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "authorization"
            r1.<init>(r2, r3)
            r2 = 22
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "cache-control"
            r1.<init>(r2, r3)
            r2 = 23
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "content-disposition"
            r1.<init>(r2, r3)
            r2 = 24
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "content-encoding"
            r1.<init>(r2, r3)
            r2 = 25
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "content-language"
            r1.<init>(r2, r3)
            r2 = 26
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "content-length"
            r1.<init>(r2, r3)
            r2 = 27
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "content-location"
            r1.<init>(r2, r3)
            r2 = 28
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "content-range"
            r1.<init>(r2, r3)
            r2 = 29
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "content-type"
            r1.<init>(r2, r3)
            r2 = 30
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "cookie"
            r1.<init>(r2, r3)
            r2 = 31
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "date"
            r1.<init>(r2, r3)
            r2 = 32
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "etag"
            r1.<init>(r2, r3)
            r2 = 33
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "expect"
            r1.<init>(r2, r3)
            r2 = 34
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "expires"
            r1.<init>(r2, r3)
            r2 = 35
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "from"
            r1.<init>(r2, r3)
            r2 = 36
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "host"
            r1.<init>(r2, r3)
            r2 = 37
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "if-match"
            r1.<init>(r2, r3)
            r2 = 38
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "if-modified-since"
            r1.<init>(r2, r3)
            r2 = 39
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "if-none-match"
            r1.<init>(r2, r3)
            r2 = 40
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "if-range"
            r1.<init>(r2, r3)
            r2 = 41
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "if-unmodified-since"
            r1.<init>(r2, r3)
            r2 = 42
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "last-modified"
            r1.<init>(r2, r3)
            r2 = 43
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "link"
            r1.<init>(r2, r3)
            r2 = 44
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "location"
            r1.<init>(r2, r3)
            r2 = 45
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "max-forwards"
            r1.<init>(r2, r3)
            r2 = 46
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "proxy-authenticate"
            r1.<init>(r2, r3)
            r2 = 47
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "proxy-authorization"
            r1.<init>(r2, r3)
            r2 = 48
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "range"
            r1.<init>(r2, r3)
            r2 = 49
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "referer"
            r1.<init>(r2, r3)
            r2 = 50
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "refresh"
            r1.<init>(r2, r3)
            r2 = 51
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "retry-after"
            r1.<init>(r2, r3)
            r2 = 52
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "server"
            r1.<init>(r2, r3)
            r2 = 53
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "set-cookie"
            r1.<init>(r2, r3)
            r2 = 54
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "strict-transport-security"
            r1.<init>(r2, r3)
            r2 = 55
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "transfer-encoding"
            r1.<init>(r2, r3)
            r2 = 56
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "user-agent"
            r1.<init>(r2, r3)
            r2 = 57
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "vary"
            r1.<init>(r2, r3)
            r2 = 58
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "via"
            r1.<init>(r2, r3)
            r2 = 59
            r0[r2] = r1
            okhttp3.internal.http2.Header r1 = new okhttp3.internal.http2.Header
            java.lang.String r2 = "www-authenticate"
            r1.<init>(r2, r3)
            r2 = 60
            r0[r2] = r1
            okhttp3.internal.http2.Hpack.STATIC_HEADER_TABLE = r0
            okhttp3.internal.http2.Hpack r0 = okhttp3.internal.http2.Hpack.INSTANCE
            java.util.Map r0 = r0.nameToFirstIndex()
            okhttp3.internal.http2.Hpack.NAME_TO_FIRST_INDEX = r0
            return
    }

    private Hpack() {
            r0 = this;
            r0.<init>()
            return
    }

    private final java.util.Map<okio.ByteString, java.lang.Integer> nameToFirstIndex() {
            r6 = this;
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            okhttp3.internal.http2.Header[] r1 = okhttp3.internal.http2.Hpack.STATIC_HEADER_TABLE
            int r1 = r1.length
            r0.<init>(r1)
            okhttp3.internal.http2.Header[] r1 = okhttp3.internal.http2.Hpack.STATIC_HEADER_TABLE
            int r1 = r1.length
            r2 = 0
        Lc:
            if (r2 >= r1) goto L2e
            int r3 = r2 + 1
            okhttp3.internal.http2.Header[] r4 = okhttp3.internal.http2.Hpack.STATIC_HEADER_TABLE
            r4 = r4[r2]
            okio.ByteString r4 = r4.name
            boolean r4 = r0.containsKey(r4)
            if (r4 != 0) goto L2c
            r4 = r0
            java.util.Map r4 = (java.util.Map) r4
            okhttp3.internal.http2.Header[] r5 = okhttp3.internal.http2.Hpack.STATIC_HEADER_TABLE
            r5 = r5[r2]
            okio.ByteString r5 = r5.name
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r4.put(r5, r2)
        L2c:
            r2 = r3
            goto Lc
        L2e:
            java.util.Map r0 = (java.util.Map) r0
            java.util.Map r0 = java.util.Collections.unmodifiableMap(r0)
            java.lang.String r1 = "unmodifiableMap(result)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            return r0
    }

    public final okio.ByteString checkLowercase(okio.ByteString r6) throws java.io.IOException {
            r5 = this;
            java.lang.String r0 = "name"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            int r0 = r6.size()
            r1 = 0
            r2 = r1
        Lb:
            if (r2 >= r0) goto L32
            int r3 = r2 + 1
            byte r2 = r6.getByte(r2)
            r4 = 65
            if (r4 > r2) goto L1d
            r4 = 90
            if (r2 > r4) goto L1d
            r2 = 1
            goto L1e
        L1d:
            r2 = r1
        L1e:
            if (r2 != 0) goto L22
            r2 = r3
            goto Lb
        L22:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r6 = r6.utf8()
            java.lang.String r1 = "PROTOCOL_ERROR response malformed: mixed case name: "
            java.lang.String r6 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r6)
            r0.<init>(r6)
            throw r0
        L32:
            return r6
    }

    public final java.util.Map<okio.ByteString, java.lang.Integer> getNAME_TO_FIRST_INDEX() {
            r1 = this;
            java.util.Map<okio.ByteString, java.lang.Integer> r0 = okhttp3.internal.http2.Hpack.NAME_TO_FIRST_INDEX
            return r0
    }

    public final okhttp3.internal.http2.Header[] getSTATIC_HEADER_TABLE() {
            r1 = this;
            okhttp3.internal.http2.Header[] r0 = okhttp3.internal.http2.Hpack.STATIC_HEADER_TABLE
            return r0
    }
}
