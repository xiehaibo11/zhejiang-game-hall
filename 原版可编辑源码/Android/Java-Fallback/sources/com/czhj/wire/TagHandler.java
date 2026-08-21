package com.czhj.wire;

public interface TagHandler {
    public static final java.lang.Object UNKNOWN_TAG = null;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.czhj.wire.TagHandler.UNKNOWN_TAG = r0
            return
    }

    java.lang.Object decodeMessage(int r1);
}
