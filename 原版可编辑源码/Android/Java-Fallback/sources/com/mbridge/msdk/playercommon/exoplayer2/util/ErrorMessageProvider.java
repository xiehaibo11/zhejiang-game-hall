package com.mbridge.msdk.playercommon.exoplayer2.util;

import java.lang.Throwable;

public interface ErrorMessageProvider<T extends java.lang.Throwable> {
    android.util.Pair<java.lang.Integer, java.lang.String> getErrorMessage(T r1);
}
