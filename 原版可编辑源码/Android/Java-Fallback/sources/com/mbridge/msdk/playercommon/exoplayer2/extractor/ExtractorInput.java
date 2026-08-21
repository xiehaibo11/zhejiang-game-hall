package com.mbridge.msdk.playercommon.exoplayer2.extractor;

public interface ExtractorInput {
    void advancePeekPosition(int r1) throws java.io.IOException, java.lang.InterruptedException;

    boolean advancePeekPosition(int r1, boolean r2) throws java.io.IOException, java.lang.InterruptedException;

    long getLength();

    long getPeekPosition();

    long getPosition();

    void peekFully(byte[] r1, int r2, int r3) throws java.io.IOException, java.lang.InterruptedException;

    boolean peekFully(byte[] r1, int r2, int r3, boolean r4) throws java.io.IOException, java.lang.InterruptedException;

    int read(byte[] r1, int r2, int r3) throws java.io.IOException, java.lang.InterruptedException;

    void readFully(byte[] r1, int r2, int r3) throws java.io.IOException, java.lang.InterruptedException;

    boolean readFully(byte[] r1, int r2, int r3, boolean r4) throws java.io.IOException, java.lang.InterruptedException;

    void resetPeekPosition();

    <E extends java.lang.Throwable> void setRetryPosition(long r1, E r3) throws java.lang.Throwable;

    int skip(int r1) throws java.io.IOException, java.lang.InterruptedException;

    void skipFully(int r1) throws java.io.IOException, java.lang.InterruptedException;

    boolean skipFully(int r1, boolean r2) throws java.io.IOException, java.lang.InterruptedException;
}
