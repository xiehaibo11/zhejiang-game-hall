package com.mbridge.msdk.playercommon.exoplayer2.extractor.ts;

import android.util.Pair;
import com.mbridge.msdk.playercommon.exoplayer2.Format;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader;
import com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil;
import com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray;
import com.tkay.expressad.video.module.a.a;
import java.util.Arrays;
import java.util.Collections;
import kotlin.UByte;

public final class H262Reader implements ElementaryStreamReader {
    private static final double[] FRAME_RATE_VALUES = {23.976023976023978d, 24.0d, 25.0d, 29.97002997002997d, 30.0d, 50.0d, 59.94005994005994d, 60.0d};
    private static final int START_EXTENSION = 181;
    private static final int START_GROUP = 184;
    private static final int START_PICTURE = 0;
    private static final int START_SEQUENCE_HEADER = 179;
    private String formatId;
    private long frameDurationUs;
    private boolean hasOutputFormat;
    private TrackOutput output;
    private long pesTimeUs;
    private boolean sampleHasPicture;
    private boolean sampleIsKeyframe;
    private long samplePosition;
    private long sampleTimeUs;
    private boolean startedFirstSample;
    private long totalBytesWritten;
    private final boolean[] prefixFlags = new boolean[4];
    private final CsdBuffer csdBuffer = new CsdBuffer(128);

    @Override
    public final void packetFinished() {
    }

    @Override
    public final void seek() {
        NalUnitUtil.clearPrefixFlags(this.prefixFlags);
        this.csdBuffer.reset();
        this.totalBytesWritten = 0L;
        this.startedFirstSample = false;
    }

    @Override
    public final void createTracks(ExtractorOutput extractorOutput, TsPayloadReader.TrackIdGenerator trackIdGenerator) {
        trackIdGenerator.generateNewId();
        this.formatId = trackIdGenerator.getFormatId();
        this.output = extractorOutput.track(trackIdGenerator.getTrackId(), 2);
    }

    @Override
    public final void packetStarted(long j, boolean z) {
        this.pesTimeUs = j;
    }

    /* JADX WARN: Type inference fix 'apply assigned field type' failed
    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$PrimitiveArg
    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:593)
    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
     */
    @Override
    public final void consume(ParsableByteArray parsableByteArray) {
        boolean z;
        boolean z2;
        int position = parsableByteArray.getPosition();
        int iLimit = parsableByteArray.limit();
        byte[] bArr = parsableByteArray.data;
        this.totalBytesWritten += (long) parsableByteArray.bytesLeft();
        this.output.sampleData(parsableByteArray, parsableByteArray.bytesLeft());
        while (true) {
            int iFindNalUnit = NalUnitUtil.findNalUnit(bArr, position, iLimit, this.prefixFlags);
            if (iFindNalUnit == iLimit) {
                break;
            }
            int i = iFindNalUnit + 3;
            int i2 = parsableByteArray.data[i] & UByte.MAX_VALUE;
            if (!this.hasOutputFormat) {
                int i3 = iFindNalUnit - position;
                if (i3 > 0) {
                    this.csdBuffer.onData(bArr, position, iFindNalUnit);
                }
                if (this.csdBuffer.onStartCode(i2, i3 < 0 ? -i3 : 0)) {
                    Pair<Format, Long> csdBuffer = parseCsdBuffer(this.csdBuffer, this.formatId);
                    this.output.format((Format) csdBuffer.first);
                    this.frameDurationUs = ((Long) csdBuffer.second).longValue();
                    this.hasOutputFormat = true;
                }
            }
            if (i2 == 0 || i2 == START_SEQUENCE_HEADER) {
                int i4 = iLimit - iFindNalUnit;
                if (this.startedFirstSample && this.sampleHasPicture && this.hasOutputFormat) {
                    this.output.sampleMetadata(this.sampleTimeUs, this.sampleIsKeyframe ? 1 : 0, ((int) (this.totalBytesWritten - this.samplePosition)) - i4, i4, null);
                }
                if (!this.startedFirstSample || this.sampleHasPicture) {
                    this.samplePosition = this.totalBytesWritten - ((long) i4);
                    long j = this.pesTimeUs;
                    if (j == -9223372036854775807L) {
                        j = this.startedFirstSample ? this.sampleTimeUs + this.frameDurationUs : 0L;
                    }
                    this.sampleTimeUs = j;
                    z = false;
                    this.sampleIsKeyframe = false;
                    this.pesTimeUs = -9223372036854775807L;
                    z2 = true;
                    this.startedFirstSample = true;
                } else {
                    z = false;
                    z2 = true;
                }
                this.sampleHasPicture = i2 == 0 ? z2 : z;
            } else if (i2 == START_GROUP) {
                this.sampleIsKeyframe = true;
            }
            position = i;
        }
        if (this.hasOutputFormat) {
            return;
        }
        this.csdBuffer.onData(bArr, position, iLimit);
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x006a  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static Pair<Format, Long> parseCsdBuffer(CsdBuffer csdBuffer, String str) {
        float f;
        int i;
        float f2;
        int i2;
        byte[] bArrCopyOf = Arrays.copyOf(csdBuffer.data, csdBuffer.length);
        int i3 = bArrCopyOf[4] & UByte.MAX_VALUE;
        int i4 = bArrCopyOf[5] & UByte.MAX_VALUE;
        int i5 = (i3 << 4) | (i4 >> 4);
        int i6 = ((i4 & 15) << 8) | (bArrCopyOf[6] & UByte.MAX_VALUE);
        int i7 = (bArrCopyOf[7] & 240) >> 4;
        if (i7 == 2) {
            f = i6 * 4;
            i = i5 * 3;
        } else if (i7 == 3) {
            f = i6 * 16;
            i = i5 * 9;
        } else {
            if (i7 != 4) {
                f2 = 1.0f;
                Format formatCreateVideoSampleFormat = Format.createVideoSampleFormat(str, "video/mpeg2", null, -1, -1, i5, i6, -1.0f, Collections.singletonList(bArrCopyOf), -1, f2, null);
                long j = 0;
                i2 = (bArrCopyOf[7] & 15) - 1;
                if (i2 >= 0) {
                    double[] dArr = FRAME_RATE_VALUES;
                    if (i2 < dArr.length) {
                        double d = dArr[i2];
                        int i8 = csdBuffer.sequenceExtensionPosition + 9;
                        int i9 = (bArrCopyOf[i8] & 96) >> 5;
                        int i10 = bArrCopyOf[i8] & 31;
                        if (i9 != i10) {
                            d *= (((double) i9) + 1.0d) / ((double) (i10 + 1));
                        }
                        j = (long) (1000000.0d / d);
                    }
                }
                return Pair.create(formatCreateVideoSampleFormat, Long.valueOf(j));
            }
            f = i6 * a.L;
            i = i5 * 100;
        }
        f2 = f / i;
        Format formatCreateVideoSampleFormat2 = Format.createVideoSampleFormat(str, "video/mpeg2", null, -1, -1, i5, i6, -1.0f, Collections.singletonList(bArrCopyOf), -1, f2, null);
        long j2 = 0;
        i2 = (bArrCopyOf[7] & 15) - 1;
        if (i2 >= 0) {
        }
        return Pair.create(formatCreateVideoSampleFormat2, Long.valueOf(j2));
    }

    private static final class CsdBuffer {
        private static final byte[] START_CODE = {0, 0, 1};
        public byte[] data;
        private boolean isFilling;
        public int length;
        public int sequenceExtensionPosition;

        public CsdBuffer(int i) {
            this.data = new byte[i];
        }

        public final void reset() {
            this.isFilling = false;
            this.length = 0;
            this.sequenceExtensionPosition = 0;
        }

        public final boolean onStartCode(int i, int i2) {
            if (this.isFilling) {
                int i3 = this.length - i2;
                this.length = i3;
                if (this.sequenceExtensionPosition == 0 && i == H262Reader.START_EXTENSION) {
                    this.sequenceExtensionPosition = i3;
                } else {
                    this.isFilling = false;
                    return true;
                }
            } else if (i == H262Reader.START_SEQUENCE_HEADER) {
                this.isFilling = true;
            }
            byte[] bArr = START_CODE;
            onData(bArr, 0, bArr.length);
            return false;
        }

        public final void onData(byte[] bArr, int i, int i2) {
            if (this.isFilling) {
                int i3 = i2 - i;
                byte[] bArr2 = this.data;
                int length = bArr2.length;
                int i4 = this.length;
                if (length < i4 + i3) {
                    this.data = Arrays.copyOf(bArr2, (i4 + i3) * 2);
                }
                System.arraycopy(bArr, i, this.data, this.length, i3);
                this.length += i3;
            }
        }
    }
}
