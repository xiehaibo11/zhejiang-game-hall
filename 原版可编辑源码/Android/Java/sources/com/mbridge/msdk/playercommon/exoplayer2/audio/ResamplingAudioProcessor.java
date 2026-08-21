package com.mbridge.msdk.playercommon.exoplayer2.audio;

import com.alipay.sdk.m.n.a;
import com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import kotlin.UByte;

final class ResamplingAudioProcessor implements AudioProcessor {
    private boolean inputEnded;
    private int sampleRateHz = -1;
    private int channelCount = -1;
    private int encoding = 0;
    private ByteBuffer buffer = EMPTY_BUFFER;
    private ByteBuffer outputBuffer = EMPTY_BUFFER;

    @Override
    public final int getOutputEncoding() {
        return 2;
    }

    @Override
    public final boolean configure(int i, int i2, int i3) throws AudioProcessor.UnhandledFormatException {
        if (i3 != 3 && i3 != 2 && i3 != Integer.MIN_VALUE && i3 != 1073741824) {
            throw new AudioProcessor.UnhandledFormatException(i, i2, i3);
        }
        if (this.sampleRateHz == i && this.channelCount == i2 && this.encoding == i3) {
            return false;
        }
        this.sampleRateHz = i;
        this.channelCount = i2;
        this.encoding = i3;
        return true;
    }

    @Override
    public final boolean isActive() {
        int i = this.encoding;
        return (i == 0 || i == 2) ? false : true;
    }

    @Override
    public final int getOutputChannelCount() {
        return this.channelCount;
    }

    @Override
    public final int getOutputSampleRateHz() {
        return this.sampleRateHz;
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x002b  */
    /* JADX WARN: Removed duplicated region for block: B:14:0x003a  */
    /* JADX WARN: Removed duplicated region for block: B:17:0x0043  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x0081 A[ADDED_TO_REGION, LOOP:2: B:25:0x0081->B:26:0x0083, LOOP_START, PHI: r0
      0x0081: PHI (r0v1 int) = (r0v0 int), (r0v2 int) binds: [B:16:0x0041, B:26:0x0083] A[DONT_GENERATE, DONT_INLINE]] */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void queueInput(ByteBuffer byteBuffer) {
        int i;
        int i2;
        int iPosition = byteBuffer.position();
        int iLimit = byteBuffer.limit();
        int i3 = iLimit - iPosition;
        int i4 = this.encoding;
        if (i4 == Integer.MIN_VALUE) {
            i3 /= 3;
        } else {
            if (i4 != 3) {
                if (i4 == 1073741824) {
                    i = i3 / 2;
                } else {
                    throw new IllegalStateException();
                }
            }
            if (this.buffer.capacity() >= i) {
                this.buffer = ByteBuffer.allocateDirect(i).order(ByteOrder.nativeOrder());
            } else {
                this.buffer.clear();
            }
            i2 = this.encoding;
            if (i2 != Integer.MIN_VALUE) {
                while (iPosition < iLimit) {
                    this.buffer.put(byteBuffer.get(iPosition + 1));
                    this.buffer.put(byteBuffer.get(iPosition + 2));
                    iPosition += 3;
                }
            } else if (i2 == 3) {
                while (iPosition < iLimit) {
                    this.buffer.put((byte) 0);
                    this.buffer.put((byte) ((byteBuffer.get(iPosition) & UByte.MAX_VALUE) + a.g));
                    iPosition++;
                }
            } else {
                if (i2 != 1073741824) {
                    throw new IllegalStateException();
                }
                while (iPosition < iLimit) {
                    this.buffer.put(byteBuffer.get(iPosition + 2));
                    this.buffer.put(byteBuffer.get(iPosition + 3));
                    iPosition += 4;
                }
            }
            byteBuffer.position(byteBuffer.limit());
            this.buffer.flip();
            this.outputBuffer = this.buffer;
        }
        i = i3 * 2;
        if (this.buffer.capacity() >= i) {
        }
        i2 = this.encoding;
        if (i2 != Integer.MIN_VALUE) {
        }
        byteBuffer.position(byteBuffer.limit());
        this.buffer.flip();
        this.outputBuffer = this.buffer;
    }

    @Override
    public final void queueEndOfStream() {
        this.inputEnded = true;
    }

    @Override
    public final ByteBuffer getOutput() {
        ByteBuffer byteBuffer = this.outputBuffer;
        this.outputBuffer = EMPTY_BUFFER;
        return byteBuffer;
    }

    @Override
    public final boolean isEnded() {
        return this.inputEnded && this.outputBuffer == EMPTY_BUFFER;
    }

    @Override
    public final void flush() {
        this.outputBuffer = EMPTY_BUFFER;
        this.inputEnded = false;
    }

    @Override
    public final void reset() {
        flush();
        this.sampleRateHz = -1;
        this.channelCount = -1;
        this.encoding = 0;
        this.buffer = EMPTY_BUFFER;
    }
}
