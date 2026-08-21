package com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv;

interface EbmlReaderOutput {
    public static final int TYPE_BINARY = 4;
    public static final int TYPE_FLOAT = 5;
    public static final int TYPE_MASTER = 1;
    public static final int TYPE_STRING = 3;
    public static final int TYPE_UNKNOWN = 0;
    public static final int TYPE_UNSIGNED_INT = 2;

    public @interface ElementType {
    }

    void binaryElement(int r1, int r2, com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r3) throws java.io.IOException, java.lang.InterruptedException;

    void endMasterElement(int r1) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException;

    void floatElement(int r1, double r2) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException;

    int getElementType(int r1);

    void integerElement(int r1, long r2) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException;

    boolean isLevel1Element(int r1);

    void startMasterElement(int r1, long r2, long r4) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException;

    void stringElement(int r1, java.lang.String r2) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException;
}
