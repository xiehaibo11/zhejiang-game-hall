package com.bumptech.glide.util;

public final class ByteArrayPool {
    private static final com.bumptech.glide.util.ByteArrayPool BYTE_ARRAY_POOL = null;
    private static final int MAX_BYTE_ARRAY_COUNT = 32;
    private static final int MAX_SIZE = 2146304;
    private static final java.lang.String TAG = "ByteArrayPool";
    private static final int TEMP_BYTES_SIZE = 65536;
    private final java.util.Queue<byte[]> tempQueue;

    static {
            com.bumptech.glide.util.ByteArrayPool r0 = new com.bumptech.glide.util.ByteArrayPool
            r0.<init>()
            com.bumptech.glide.util.ByteArrayPool.BYTE_ARRAY_POOL = r0
            return
    }

    private ByteArrayPool() {
            r1 = this;
            r1.<init>()
            r0 = 0
            java.util.Queue r0 = com.bumptech.glide.util.Util.createQueue(r0)
            r1.tempQueue = r0
            return
    }

    public static com.bumptech.glide.util.ByteArrayPool get() {
            com.bumptech.glide.util.ByteArrayPool r0 = com.bumptech.glide.util.ByteArrayPool.BYTE_ARRAY_POOL
            return r0
    }

    public void clear() {
            r2 = this;
            java.util.Queue<byte[]> r0 = r2.tempQueue
            monitor-enter(r0)
            java.util.Queue<byte[]> r1 = r2.tempQueue     // Catch: java.lang.Throwable -> La
            r1.clear()     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            return
        La:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            throw r1
    }

    public byte[] getBytes() {
            r3 = this;
            java.util.Queue<byte[]> r0 = r3.tempQueue
            monitor-enter(r0)
            java.util.Queue<byte[]> r1 = r3.tempQueue     // Catch: java.lang.Throwable -> L23
            java.lang.Object r1 = r1.poll()     // Catch: java.lang.Throwable -> L23
            byte[] r1 = (byte[]) r1     // Catch: java.lang.Throwable -> L23
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L23
            if (r1 != 0) goto L22
            r0 = 65536(0x10000, float:9.1835E-41)
            byte[] r1 = new byte[r0]
            java.lang.String r0 = "ByteArrayPool"
            r2 = 3
            boolean r0 = android.util.Log.isLoggable(r0, r2)
            if (r0 == 0) goto L22
            java.lang.String r0 = "ByteArrayPool"
            java.lang.String r2 = "Created temp bytes"
            android.util.Log.d(r0, r2)
        L22:
            return r1
        L23:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L23
            throw r1
    }

    public boolean releaseBytes(byte[] r5) {
            r4 = this;
            int r0 = r5.length
            r1 = 0
            r2 = 65536(0x10000, float:9.1835E-41)
            if (r0 == r2) goto L7
            return r1
        L7:
            java.util.Queue<byte[]> r0 = r4.tempQueue
            monitor-enter(r0)
            java.util.Queue<byte[]> r2 = r4.tempQueue     // Catch: java.lang.Throwable -> L1c
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L1c
            r3 = 32
            if (r2 >= r3) goto L1a
            r1 = 1
            java.util.Queue<byte[]> r2 = r4.tempQueue     // Catch: java.lang.Throwable -> L1c
            r2.offer(r5)     // Catch: java.lang.Throwable -> L1c
        L1a:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1c
            return r1
        L1c:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1c
            throw r5
    }
}
