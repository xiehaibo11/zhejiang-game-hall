package com.czhj.wire;

public interface TagHandler {
    public static final Object UNKNOWN_TAG = new Object();

    Object decodeMessage(int i);
}
