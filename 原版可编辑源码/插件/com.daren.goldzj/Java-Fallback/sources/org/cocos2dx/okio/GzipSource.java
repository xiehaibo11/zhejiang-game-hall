package org.cocos2dx.okio;

import java.io.EOFException;
import java.io.IOException;
import java.util.zip.CRC32;
import java.util.zip.Inflater;

public final class GzipSource implements Source {
    private static final byte FCOMMENT = 4;
    private static final byte FEXTRA = 2;
    private static final byte FHCRC = 1;
    private static final byte FNAME = 3;
    private static final byte SECTION_BODY = 1;
    private static final byte SECTION_DONE = 3;
    private static final byte SECTION_HEADER = 0;
    private static final byte SECTION_TRAILER = 2;
    private final CRC32 crc;
    private final Inflater inflater;
    private final InflaterSource inflaterSource;
    private int section;
    private final BufferedSource source;

    public GzipSource(Source r3) {
        this.section = 0;
        this.crc = new CRC32();
        if (r3 == null) goto L7;
        this.inflater = new Inflater(true);
        this.source = Okio.buffer(r3);
        this.inflaterSource = new InflaterSource(this.source, this.inflater);
        return;
    L7:
        throw new IllegalArgumentException("source == null");
    }

    @Override
    public long read(Buffer r12, long r13) throws IOException {
        if (r13 < 0) goto L25;
        if (r13 != 0) goto L7;
        return 0;
    L7:
        if (this.section != 0) goto L10;
        consumeHeader();
        this.section = 1;
    L10:
        if (this.section != 1) goto L17;
        long r7 = r12.size;
        long r132 = this.inflaterSource.read(r12, r13);
        if (r132 == (-1)) goto L15;
        updateCrc(r12, r7, r132);
        return r132;
    L15:
        this.section = 2;
    L17:
        if (this.section != 2) goto L23;
        consumeTrailer();
        this.section = 3;
        if (this.source.exhausted() == true) goto L23;
        throw new IOException("gzip finished without exhausting source");
    L23:
        return -1;
    L25:
        throw new IllegalArgumentException("byteCount < 0: " + r13);
    }

    private void consumeHeader() throws IOException {
        this.source.require(10);
        byte r7 = this.source.buffer().getByte(3);
        if (((r7 >> 1) & 1) != 1) goto L5;
        boolean r10 = true;
    L6:
        if (r10 == false) goto L8;
        updateCrc(this.source.buffer(), 0, 10);
    L8:
        checkEqual("ID1ID2", 8075, this.source.readShort());
        this.source.skip(8);
        if (((r7 >> 2) & 1) != 1) goto L18;
        this.source.require(2);
        if (r10 == false) goto L13;
        updateCrc(this.source.buffer(), 0, 2);
    L13:
        long r11 = this.source.buffer().readShortLe();
        this.source.require(r11);
        if (r10 == false) goto L16;
        updateCrc(this.source.buffer(), 0, r11);
    L16:
        this.source.skip(r11);
    L18:
        if (((r7 >> 3) & 1) != 1) goto L27;
        long r15 = this.source.indexOf(SECTION_HEADER);
        if (r15 == (-1)) goto L25;
        if (r10 == false) goto L23;
        updateCrc(this.source.buffer(), 0, r15 + 1);
    L23:
        this.source.skip(r15 + 1);
        goto L27
    L25:
        throw new EOFException();
    L27:
        if (((r7 >> FCOMMENT) & 1) != 1) goto L35;
        long r72 = this.source.indexOf(SECTION_HEADER);
        if (r72 == (-1)) goto L34;
        if (r10 == false) goto L32;
        updateCrc(this.source.buffer(), 0, r72 + 1);
    L32:
        this.source.skip(r72 + 1);
        goto L35
    L34:
        throw new EOFException();
    L35:
        if (r10 == false) goto L38;
        checkEqual("FHCRC", this.source.readShortLe(), (short) this.crc.getValue());
        this.crc.reset();
        return;
    L38:
        return;
    L5:
        r10 = false;
        goto L6
    }

    private void consumeTrailer() throws IOException {
        checkEqual("CRC", this.source.readIntLe(), (int) this.crc.getValue());
        checkEqual("ISIZE", this.source.readIntLe(), (int) this.inflater.getBytesWritten());
    }

    @Override
    public Timeout timeout() {
        return this.source.timeout();
    }

    @Override
    public void close() throws IOException {
        this.inflaterSource.close();
    }

    private void updateCrc(Buffer r5, long r6, long r8) {
        Segment r52 = r5.head;
    L4:
        if (r6 < (r52.limit - r52.pos)) goto L8;
        r6 = r6 - ((long) (r52.limit - r52.pos));
        r52 = r52.next;
    L8:
        if (r8 <= 0) goto L10;
        int r62 = (int) (((long) r52.pos) + r6);
        int r7 = (int) Math.min(r52.limit - r62, r8);
        this.crc.update(r52.data, r62, r7);
        r8 = r8 - ((long) r7);
        r52 = r52.next;
        r6 = 0;
        goto L8
    }

    private void checkEqual(String r4, int r5, int r6) throws IOException {
        if (r6 != r5) goto L5;
        return;
    L5:
        throw new IOException(String.format("%s: actual 0x%08x != expected 0x%08x", new Object[]{r4, Integer.valueOf(r6), Integer.valueOf(r5)}));
    }
}
