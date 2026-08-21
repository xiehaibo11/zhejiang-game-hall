package com.bianfeng.ymnsdk.ymndatalib.utils;

import java.util.concurrent.atomic.AtomicLong;

/* JADX INFO: loaded from: classes.dex */
public class SequenceUtils {
    public static AtomicLong atomicLong = new AtomicLong(0);

    public static long get() {
        return atomicLong.getAndIncrement();
    }
}
