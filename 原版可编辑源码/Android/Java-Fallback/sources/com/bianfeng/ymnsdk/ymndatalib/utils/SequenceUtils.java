package com.bianfeng.ymnsdk.ymndatalib.utils;

public class SequenceUtils {
    public static java.util.concurrent.atomic.AtomicLong atomicLong;

    static {
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r1 = 0
            r0.<init>(r1)
            com.bianfeng.ymnsdk.ymndatalib.utils.SequenceUtils.atomicLong = r0
            return
    }

    public SequenceUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static long get() {
            java.util.concurrent.atomic.AtomicLong r0 = com.bianfeng.ymnsdk.ymndatalib.utils.SequenceUtils.atomicLong
            long r0 = r0.getAndIncrement()
            return r0
    }
}
