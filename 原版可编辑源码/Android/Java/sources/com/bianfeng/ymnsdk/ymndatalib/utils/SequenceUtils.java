package com.bianfeng.ymnsdk.ymndatalib.utils;

import java.util.concurrent.atomic.AtomicLong;

public class SequenceUtils {
    public static AtomicLong atomicLong = new AtomicLong(0);

    public static long get() {
        return atomicLong.getAndIncrement();
    }
}
