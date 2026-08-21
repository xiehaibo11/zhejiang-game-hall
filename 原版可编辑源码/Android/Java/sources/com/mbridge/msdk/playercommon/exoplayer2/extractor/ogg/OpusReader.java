package com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg;

import com.mbridge.msdk.playercommon.exoplayer2.Format;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader;
import com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray;
import com.mbridge.msdk.playercommon.exoplayer2.util.Util;
import com.ss.android.download.api.constant.BaseConstants;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import kotlin.UByte;
import okio.Utf8;

final class OpusReader extends StreamReader {
    private static final int DEFAULT_SEEK_PRE_ROLL_SAMPLES = 3840;
    private static final int OPUS_CODE = Util.getIntegerCodeForString("Opus");
    private static final byte[] OPUS_SIGNATURE = {79, 112, 117, 115, 72, 101, 97, 100};
    private static final int SAMPLE_RATE = 48000;
    private boolean headerRead;

    OpusReader() {
    }

    public static boolean verifyBitstreamType(ParsableByteArray parsableByteArray) {
        int iBytesLeft = parsableByteArray.bytesLeft();
        byte[] bArr = OPUS_SIGNATURE;
        if (iBytesLeft < bArr.length) {
            return false;
        }
        byte[] bArr2 = new byte[bArr.length];
        parsableByteArray.readBytes(bArr2, 0, bArr.length);
        return Arrays.equals(bArr2, OPUS_SIGNATURE);
    }

    @Override
    protected final void reset(boolean z) {
        super.reset(z);
        if (z) {
            this.headerRead = false;
        }
    }

    @Override
    protected final long preparePayload(ParsableByteArray parsableByteArray) {
        return convertTimeToGranule(getPacketDurationUs(parsableByteArray.data));
    }

    @Override
    protected final boolean readHeaders(ParsableByteArray parsableByteArray, long j, StreamReader.SetupData setupData) throws InterruptedException, IOException {
        if (!this.headerRead) {
            byte[] bArrCopyOf = Arrays.copyOf(parsableByteArray.data, parsableByteArray.limit());
            int i = bArrCopyOf[9] & UByte.MAX_VALUE;
            int i2 = ((bArrCopyOf[11] & UByte.MAX_VALUE) << 8) | (bArrCopyOf[10] & UByte.MAX_VALUE);
            ArrayList arrayList = new ArrayList(3);
            arrayList.add(bArrCopyOf);
            putNativeOrderLong(arrayList, i2);
            putNativeOrderLong(arrayList, DEFAULT_SEEK_PRE_ROLL_SAMPLES);
            setupData.format = Format.createAudioSampleFormat(null, "audio/opus", null, -1, -1, i, SAMPLE_RATE, arrayList, null, 0, null);
            this.headerRead = true;
            return true;
        }
        boolean z = parsableByteArray.readInt() == OPUS_CODE;
        parsableByteArray.setPosition(0);
        return z;
    }

    private void putNativeOrderLong(List<byte[]> list, int i) {
        list.add(ByteBuffer.allocate(8).order(ByteOrder.nativeOrder()).putLong((((long) i) * 1000000000) / 48000).array());
    }

    private long getPacketDurationUs(byte[] bArr) {
        int i = bArr[0] & UByte.MAX_VALUE;
        int i2 = i & 3;
        int i3 = 2;
        if (i2 == 0) {
            i3 = 1;
        } else if (i2 != 1 && i2 != 2) {
            i3 = bArr[1] & Utf8.REPLACEMENT_BYTE;
        }
        int i4 = i >> 3;
        int i5 = i4 & 3;
        return ((long) i3) * ((long) (i4 >= 16 ? 2500 << i5 : i4 >= 12 ? 10000 << (i5 & 1) : i5 == 3 ? BaseConstants.Time.MINUTE : 10000 << i5));
    }
}
