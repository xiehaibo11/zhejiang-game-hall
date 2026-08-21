package com.mbridge.msdk.playercommon.exoplayer2.decoder;

import java.lang.Exception;

public interface Decoder<I, O, E extends java.lang.Exception> {
    I dequeueInputBuffer() throws java.lang.Exception;

    O dequeueOutputBuffer() throws java.lang.Exception;

    void flush();

    java.lang.String getName();

    void queueInputBuffer(I r1) throws java.lang.Exception;

    void release();
}
