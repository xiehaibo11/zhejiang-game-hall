package com.mbridge.msdk.playercommon.exoplayer2.upstream.cache;

public interface ContentMetadata {
    public static final java.lang.String INTERNAL_METADATA_NAME_PREFIX = "exo_";

    boolean contains(java.lang.String r1);

    long get(java.lang.String r1, long r2);

    java.lang.String get(java.lang.String r1, java.lang.String r2);

    byte[] get(java.lang.String r1, byte[] r2);
}
