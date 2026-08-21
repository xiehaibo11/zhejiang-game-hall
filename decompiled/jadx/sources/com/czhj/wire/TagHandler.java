package com.czhj.wire;

/* JADX INFO: loaded from: classes.dex */
public interface TagHandler {
    public static final Object UNKNOWN_TAG = new Object();

    Object decodeMessage(int i);
}
