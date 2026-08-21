package org.cocos2dx.okhttp3.internal.http2;

import android.support.v7.widget.ActivityChooserView;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import org.cocos2dx.okhttp3.internal.Util;
import org.cocos2dx.okio.Buffer;
import org.cocos2dx.okio.BufferedSource;
import org.cocos2dx.okio.ByteString;
import org.cocos2dx.okio.Okio;
import org.cocos2dx.okio.Source;

final class Hpack {
    static final Map<ByteString, Integer> NAME_TO_FIRST_INDEX = null;
    private static final int PREFIX_4_BITS = 15;
    private static final int PREFIX_5_BITS = 31;
    private static final int PREFIX_6_BITS = 63;
    private static final int PREFIX_7_BITS = 127;
    static final Header[] STATIC_HEADER_TABLE = null;

    static final class Reader {
        Header[] dynamicTable;
        int dynamicTableByteCount;
        int headerCount;
        private final List<Header> headerList;
        private final int headerTableSizeSetting;
        private int maxDynamicTableByteCount;
        int nextHeaderIndex;
        private final BufferedSource source;

        Reader(int r1, Source r2) {
            this(r1, r1, r2);
        }

        Reader(int r2, int r3, Source r4) {
            this.headerList = new ArrayList();
            this.dynamicTable = new Header[8];
            this.nextHeaderIndex = this.dynamicTable.length - 1;
            this.headerCount = 0;
            this.dynamicTableByteCount = 0;
            this.headerTableSizeSetting = r2;
            this.maxDynamicTableByteCount = r3;
            this.source = Okio.buffer(r4);
        }

        int maxDynamicTableByteCount() {
            return this.maxDynamicTableByteCount;
        }

        private void adjustDynamicTableByteCount() {
            int r0 = this.maxDynamicTableByteCount;
            int r1 = this.dynamicTableByteCount;
            if (r0 >= r1) goto L8;
            if (r0 != 0) goto L6;
            clearDynamicTable();
            return;
        L6:
            evictToRecoverBytes(r1 - r0);
            return;
        }

        private void clearDynamicTable() {
            Arrays.fill(this.dynamicTable, null);
            this.nextHeaderIndex = this.dynamicTable.length - 1;
            this.headerCount = 0;
            this.dynamicTableByteCount = 0;
        }

        private int evictToRecoverBytes(int r5) {
            int r0 = 0;
            if (r5 <= 0) goto L10;
            int r1 = this.dynamicTable.length;
        L5:
            r1 = r1 - 1;
            if (r1 < this.nextHeaderIndex) goto L9;
            if (r5 <= 0) goto L9;
            r5 = r5 - this.dynamicTable[r1].hpackSize;
            this.dynamicTableByteCount -= this.dynamicTable[r1].hpackSize;
            this.headerCount--;
            r0 = r0 + 1;
        L9:
            Header[] r52 = this.dynamicTable;
            int r12 = this.nextHeaderIndex;
            System.arraycopy(r52, r12 + 1, r52, (r12 + 1) + r0, this.headerCount);
            this.nextHeaderIndex += r0;
        L10:
            return r0;
        }

        void readHeaders() throws IOException {
        L3:
            if (this.source.exhausted() == true) goto L32;
            int r0 = this.source.readByte() & 255;
            if (r0 == 128) goto L31;
            if ((r0 & 128) == 128) goto L8;
            if (r0 == 64) goto L11;
            if ((r0 & 64) == 64) goto L14;
            if ((r0 & 32) == 32) goto L17;
            if (r0 == 16) goto L29;
            if (r0 == 0) goto L29;
            readLiteralHeaderWithoutIndexingIndexedName(readInt(r0, 15) - 1);
        L29:
            readLiteralHeaderWithoutIndexingNewName();
            goto L3
        L17:
            this.maxDynamicTableByteCount = readInt(r0, 31);
            int r02 = this.maxDynamicTableByteCount;
            if (r02 < 0) goto L23;
            if (r02 > this.headerTableSizeSetting) goto L23;
            adjustDynamicTableByteCount();
        L23:
            throw new IOException("Invalid dynamic table size update " + this.maxDynamicTableByteCount);
        L14:
            readLiteralHeaderWithIncrementalIndexingIndexedName(readInt(r0, 63) - 1);
            goto L3
        L11:
            readLiteralHeaderWithIncrementalIndexingNewName();
            goto L3
        L8:
            readIndexedHeader(readInt(r0, Hpack.PREFIX_7_BITS) - 1);
            goto L3
        L31:
            throw new IOException("index == 0");
        }

        public List<Header> getAndResetHeaderList() {
            ArrayList r0 = new ArrayList(this.headerList);
            this.headerList.clear();
            return r0;
        }

        private void readIndexedHeader(int r4) throws IOException {
            if (isStaticHeader(r4) == false) goto L5;
            this.headerList.add(Hpack.STATIC_HEADER_TABLE[r4]);
            return;
        L5:
            int r0 = dynamicTableIndex(r4 - Hpack.STATIC_HEADER_TABLE.length);
            if (r0 < 0) goto L12;
            Header[] r1 = this.dynamicTable;
            if (r0 >= r1.length) goto L12;
            this.headerList.add(r1[r0]);
            return;
        L12:
            throw new IOException("Header index too large " + (r4 + 1));
        }

        private int dynamicTableIndex(int r2) {
            return (this.nextHeaderIndex + 1) + r2;
        }

        private void readLiteralHeaderWithoutIndexingIndexedName(int r4) throws IOException {
            ByteString r42 = getName(r4);
            ByteString r0 = readByteString();
            this.headerList.add(new Header(r42, r0));
        }

        private void readLiteralHeaderWithoutIndexingNewName() throws IOException {
            ByteString r0 = Hpack.checkLowercase(readByteString());
            ByteString r1 = readByteString();
            this.headerList.add(new Header(r0, r1));
        }

        private void readLiteralHeaderWithIncrementalIndexingIndexedName(int r3) throws IOException {
            insertIntoDynamicTable(-1, new Header(getName(r3), readByteString()));
        }

        private void readLiteralHeaderWithIncrementalIndexingNewName() throws IOException {
            insertIntoDynamicTable(-1, new Header(Hpack.checkLowercase(readByteString()), readByteString()));
        }

        private ByteString getName(int r4) throws IOException {
            if (isStaticHeader(r4) == true) goto L5;
            int r0 = dynamicTableIndex(r4 - Hpack.STATIC_HEADER_TABLE.length);
            if (r0 < 0) goto L13;
            Header[] r1 = this.dynamicTable;
            if (r0 >= r1.length) goto L13;
            return r1[r0].name;
        L13:
            throw new IOException("Header index too large " + (r4 + 1));
        L5:
            return Hpack.STATIC_HEADER_TABLE[r4].name;
        }

        private boolean isStaticHeader(int r3) {
            if (r3 >= 0) goto L5;
        L7:
            return false;
        L5:
            if (r3 > (Hpack.STATIC_HEADER_TABLE.length - 1)) goto L7;
            return true;
        }

        private void insertIntoDynamicTable(int r6, Header r7) {
            this.headerList.add(r7);
            int r0 = r7.hpackSize;
            if (r6 == (-1)) goto L5;
            r0 = r0 - this.dynamicTable[dynamicTableIndex(r6)].hpackSize;
        L5:
            int r2 = this.maxDynamicTableByteCount;
            if (r0 <= r2) goto L9;
            clearDynamicTable();
            return;
        L9:
            int r22 = evictToRecoverBytes((this.dynamicTableByteCount + r0) - r2);
            if (r6 != (-1)) goto L15;
            int r62 = this.headerCount + 1;
            Header[] r1 = this.dynamicTable;
            if (r62 <= r1.length) goto L14;
            Header[] r63 = new Header[r1.length * 2];
            System.arraycopy(r1, 0, r63, r1.length, r1.length);
            this.nextHeaderIndex = this.dynamicTable.length - 1;
            this.dynamicTable = r63;
        L14:
            int r64 = this.nextHeaderIndex;
            this.nextHeaderIndex = r64 - 1;
            this.dynamicTable[r64] = r7;
            this.headerCount++;
        L16:
            this.dynamicTableByteCount += r0;
            return;
        L15:
            this.dynamicTable[r6 + (dynamicTableIndex(r6) + r22)] = r7;
            goto L16
        }

        private int readByte() throws IOException {
            return this.source.readByte() & 255;
        }

        int readInt(int r3, int r4) throws IOException {
            int r32 = r3 & r4;
            if (r32 >= r4) goto L5;
            return r32;
        L5:
            int r33 = 0;
        L6:
            int r0 = readByte();
            if ((r0 & 128) == 0) goto L10;
            r4 = r4 + ((r0 & Hpack.PREFIX_7_BITS) << r33);
            r33 = r33 + 7;
            goto L6
        L10:
            return r4 + (r0 << r33);
        }

        ByteString readByteString() throws IOException {
            int r0 = readByte();
            if ((r0 & 128) != 128) goto L5;
            boolean r1 = true;
        L6:
            int r02 = readInt(r0, Hpack.PREFIX_7_BITS);
            if (r1 == false) goto L11;
            return ByteString.of(Huffman.get().decode(this.source.readByteArray(r02)));
        L11:
            return this.source.readByteString(r02);
        L5:
            r1 = false;
            goto L6
        }
    }

    static final class Writer {
        private static final int SETTINGS_HEADER_TABLE_SIZE = 4096;
        private static final int SETTINGS_HEADER_TABLE_SIZE_LIMIT = 16384;
        Header[] dynamicTable;
        int dynamicTableByteCount;
        private boolean emitDynamicTableSizeUpdate;
        int headerCount;
        int headerTableSizeSetting;
        int maxDynamicTableByteCount;
        int nextHeaderIndex;
        private final Buffer out;
        private int smallestHeaderTableSizeSetting;
        private final boolean useCompression;

        Writer(Buffer r3) {
            this(4096, true, r3);
        }

        Writer(int r2, boolean r3, Buffer r4) {
            this.smallestHeaderTableSizeSetting = ActivityChooserView.ActivityChooserViewAdapter.MAX_ACTIVITY_COUNT_UNLIMITED;
            this.dynamicTable = new Header[8];
            this.nextHeaderIndex = this.dynamicTable.length - 1;
            this.headerCount = 0;
            this.dynamicTableByteCount = 0;
            this.headerTableSizeSetting = r2;
            this.maxDynamicTableByteCount = r2;
            this.useCompression = r3;
            this.out = r4;
        }

        private void clearDynamicTable() {
            Arrays.fill(this.dynamicTable, null);
            this.nextHeaderIndex = this.dynamicTable.length - 1;
            this.headerCount = 0;
            this.dynamicTableByteCount = 0;
        }

        private int evictToRecoverBytes(int r5) {
            int r0 = 0;
            if (r5 <= 0) goto L10;
            int r1 = this.dynamicTable.length;
        L5:
            r1 = r1 - 1;
            if (r1 < this.nextHeaderIndex) goto L9;
            if (r5 <= 0) goto L9;
            r5 = r5 - this.dynamicTable[r1].hpackSize;
            this.dynamicTableByteCount -= this.dynamicTable[r1].hpackSize;
            this.headerCount--;
            r0 = r0 + 1;
        L9:
            Header[] r52 = this.dynamicTable;
            int r12 = this.nextHeaderIndex;
            System.arraycopy(r52, r12 + 1, r52, (r12 + 1) + r0, this.headerCount);
            Header[] r53 = this.dynamicTable;
            int r13 = this.nextHeaderIndex;
            Arrays.fill(r53, r13 + 1, (r13 + 1) + r0, null);
            this.nextHeaderIndex += r0;
        L10:
            return r0;
        }

        private void insertIntoDynamicTable(Header r7) {
            int r0 = r7.hpackSize;
            int r1 = this.maxDynamicTableByteCount;
            if (r0 <= r1) goto L6;
            clearDynamicTable();
            return;
        L6:
            evictToRecoverBytes((this.dynamicTableByteCount + r0) - r1);
            int r12 = this.headerCount + 1;
            Header[] r2 = this.dynamicTable;
            if (r12 <= r2.length) goto L9;
            Header[] r13 = new Header[r2.length * 2];
            System.arraycopy(r2, 0, r13, r2.length, r2.length);
            this.nextHeaderIndex = this.dynamicTable.length - 1;
            this.dynamicTable = r13;
        L9:
            int r14 = this.nextHeaderIndex;
            this.nextHeaderIndex = r14 - 1;
            this.dynamicTable[r14] = r7;
            this.headerCount++;
            this.dynamicTableByteCount += r0;
        }

        void writeHeaders(List<Header> r14) throws IOException {
            if (this.emitDynamicTableSizeUpdate == false) goto L8;
            int r0 = this.smallestHeaderTableSizeSetting;
            if (r0 >= this.maxDynamicTableByteCount) goto L7;
            writeInt(r0, 31, 32);
        L7:
            this.emitDynamicTableSizeUpdate = false;
            this.smallestHeaderTableSizeSetting = ActivityChooserView.ActivityChooserViewAdapter.MAX_ACTIVITY_COUNT_UNLIMITED;
            writeInt(this.maxDynamicTableByteCount, 31, 32);
        L8:
            int r02 = r14.size();
            int r2 = 0;
        L9:
            if (r2 >= r02) goto L47;
            Header r3 = r14.get(r2);
            ByteString r4 = r3.name.toAsciiLowercase();
            ByteString r5 = r3.value;
            Integer r6 = Hpack.NAME_TO_FIRST_INDEX.get(r4);
            if (r6 == null) goto L23;
            int r62 = r6.intValue() + 1;
            if (r62 > 1) goto L15;
        L22:
            int r9 = r62;
            r62 = -1;
        L24:
            if (r62 != (-1)) goto L35;
            int r10 = this.nextHeaderIndex + 1;
            int r8 = this.dynamicTable.length;
        L26:
            if (r10 >= r8) goto L35;
            if (Util.equal(this.dynamicTable[r10].name, r4) == false) goto L34;
            if (Util.equal(this.dynamicTable[r10].value, r5) == true) goto L31;
            if (r9 != (-1)) goto L34;
            r9 = (r10 - this.nextHeaderIndex) + Hpack.STATIC_HEADER_TABLE.length;
            goto L34
        L31:
            r62 = Hpack.STATIC_HEADER_TABLE.length + (r10 - this.nextHeaderIndex);
        L34:
            r10 = r10 + 1;
        L35:
            if (r62 == (-1)) goto L38;
            writeInt(r62, Hpack.PREFIX_7_BITS, 128);
        L46:
            r2 = r2 + 1;
            goto L9
        L38:
            if (r9 != (-1)) goto L41;
            this.out.writeByte(64);
            writeByteString(r4);
            writeByteString(r5);
            insertIntoDynamicTable(r3);
            goto L46
        L41:
            if (r4.startsWith(Header.PSEUDO_PREFIX) == true) goto L43;
        L45:
            writeInt(r9, 63, 64);
            writeByteString(r5);
            insertIntoDynamicTable(r3);
            goto L46
        L43:
            if (Header.TARGET_AUTHORITY.equals(r4) == true) goto L45;
            writeInt(r9, 15, 0);
            writeByteString(r5);
            goto L46
        L15:
            if (r62 >= 8) goto L22;
            if (Util.equal(Hpack.STATIC_HEADER_TABLE[r62 - 1].value, r5) == false) goto L20;
            r9 = r62;
            goto L24
        L20:
            if (Util.equal(Hpack.STATIC_HEADER_TABLE[r62].value, r5) == false) goto L22;
            r9 = r62;
            r62 = r62 + 1;
            goto L24
        L23:
            r62 = -1;
            r9 = -1;
            goto L24
        }

        void writeInt(int r2, int r3, int r4) {
            if (r2 >= r3) goto L5;
            this.out.writeByte(r2 | r4);
            return;
        L5:
            this.out.writeByte(r4 | r3);
            int r22 = r2 - r3;
        L7:
            if (r22 < 128) goto L9;
            int r42 = r22 & Hpack.PREFIX_7_BITS;
            this.out.writeByte(128 | r42);
            r22 = r22 >>> 7;
            goto L7
        L9:
            this.out.writeByte(r22);
        }

        void writeByteString(ByteString r4) throws IOException {
            if (this.useCompression == true) goto L5;
        L7:
            writeInt(r4.size(), Hpack.PREFIX_7_BITS, 0);
            this.out.write(r4);
            return;
        L5:
            if (Huffman.get().encodedLength(r4) >= r4.size()) goto L7;
            Buffer r0 = new Buffer();
            Huffman.get().encode(r4, r0);
            ByteString r42 = r0.readByteString();
            writeInt(r42.size(), Hpack.PREFIX_7_BITS, 128);
            this.out.write(r42);
        }

        void setHeaderTableSizeSetting(int r2) {
            this.headerTableSizeSetting = r2;
            int r22 = Math.min(r2, 16384);
            int r0 = this.maxDynamicTableByteCount;
            if (r0 != r22) goto L5;
            return;
        L5:
            if (r22 >= r0) goto L7;
            this.smallestHeaderTableSizeSetting = Math.min(this.smallestHeaderTableSizeSetting, r22);
        L7:
            this.emitDynamicTableSizeUpdate = true;
            this.maxDynamicTableByteCount = r22;
            adjustDynamicTableByteCount();
        }

        private void adjustDynamicTableByteCount() {
            int r0 = this.maxDynamicTableByteCount;
            int r1 = this.dynamicTableByteCount;
            if (r0 >= r1) goto L8;
            if (r0 != 0) goto L6;
            clearDynamicTable();
            return;
        L6:
            evictToRecoverBytes(r1 - r0);
            return;
        }
    }

    static {
        STATIC_HEADER_TABLE = new Header[]{new Header(Header.TARGET_AUTHORITY, ""), new Header(Header.TARGET_METHOD, "GET"), new Header(Header.TARGET_METHOD, "POST"), new Header(Header.TARGET_PATH, "/"), new Header(Header.TARGET_PATH, "/index.html"), new Header(Header.TARGET_SCHEME, "http"), new Header(Header.TARGET_SCHEME, "https"), new Header(Header.RESPONSE_STATUS, "200"), new Header(Header.RESPONSE_STATUS, "204"), new Header(Header.RESPONSE_STATUS, "206"), new Header(Header.RESPONSE_STATUS, "304"), new Header(Header.RESPONSE_STATUS, "400"), new Header(Header.RESPONSE_STATUS, "404"), new Header(Header.RESPONSE_STATUS, "500"), new Header("accept-charset", ""), new Header("accept-encoding", "gzip, deflate"), new Header("accept-language", ""), new Header("accept-ranges", ""), new Header("accept", ""), new Header("access-control-allow-origin", ""), new Header("age", ""), new Header("allow", ""), new Header("authorization", ""), new Header("cache-control", ""), new Header("content-disposition", ""), new Header("content-encoding", ""), new Header("content-language", ""), new Header("content-length", ""), new Header("content-location", ""), new Header("content-range", ""), new Header("content-type", ""), new Header("cookie", ""), new Header("date", ""), new Header("etag", ""), new Header("expect", ""), new Header("expires", ""), new Header("from", ""), new Header("host", ""), new Header("if-match", ""), new Header("if-modified-since", ""), new Header("if-none-match", ""), new Header("if-range", ""), new Header("if-unmodified-since", ""), new Header("last-modified", ""), new Header("link", ""), new Header("location", ""), new Header("max-forwards", ""), new Header("proxy-authenticate", ""), new Header("proxy-authorization", ""), new Header("range", ""), new Header("referer", ""), new Header("refresh", ""), new Header("retry-after", ""), new Header("server", ""), new Header("set-cookie", ""), new Header("strict-transport-security", ""), new Header("transfer-encoding", ""), new Header("user-agent", ""), new Header("vary", ""), new Header("via", ""), new Header("www-authenticate", "")};
        NAME_TO_FIRST_INDEX = nameToFirstIndex();
    }

    private Hpack() {
    }

    private static Map<ByteString, Integer> nameToFirstIndex() {
        LinkedHashMap r0 = new LinkedHashMap(STATIC_HEADER_TABLE.length);
        int r1 = 0;
    L3:
        Header[] r2 = STATIC_HEADER_TABLE;
        if (r1 >= r2.length) goto L10;
        if (r0.containsKey(r2[r1].name) == true) goto L8;
        r0.put(STATIC_HEADER_TABLE[r1].name, Integer.valueOf(r1));
    L8:
        r1 = r1 + 1;
        goto L3
    L10:
        return Collections.unmodifiableMap(r0);
    }

    static ByteString checkLowercase(ByteString r4) throws IOException {
        int r0 = r4.size();
        int r1 = 0;
    L3:
        if (r1 >= r0) goto L12;
        byte r2 = r4.getByte(r1);
        if (r2 < 65) goto L11;
        if (r2 > 90) goto L11;
        throw new IOException("PROTOCOL_ERROR response malformed: mixed case name: " + r4.utf8());
    L11:
        r1 = r1 + 1;
        goto L3
    L12:
        return r4;
    }
}
