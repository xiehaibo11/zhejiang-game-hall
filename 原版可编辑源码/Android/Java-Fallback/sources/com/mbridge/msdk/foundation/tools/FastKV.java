package com.mbridge.msdk.foundation.tools;

public class FastKV {
    static final int ASYNC_BLOCKING = 1;
    private static final java.lang.String A_SUFFIX = ".kva";
    private static final int BASE_GC_BYTES_THRESHOLD = 4096;
    private static final int BASE_GC_KEYS_THRESHOLD = 80;
    private static final java.lang.String BOTH_FILES_ERROR = "both files error";
    private static final java.lang.String B_SUFFIX = ".kvb";
    private static final java.lang.String C_SUFFIX = ".kvc";
    private static final int DATA_SIZE_LIMIT = 536870912;
    private static final int DATA_START = 12;
    private static final int DOUBLE_LIMIT = 0;
    private static final byte[] EMPTY_ARRAY = null;
    static final java.lang.String GC_FINISH = "gc finish";
    private static final int INTERNAL_LIMIT = 2048;
    private static final java.lang.String MAP_FAILED = "map failed";
    static final int NON_BLOCKING = 0;
    private static final java.lang.String OPEN_FILE_FAILED = "open file failed";
    private static final int PAGE_SIZE = 0;
    private static final java.lang.String PARSE_DATA_FAILED = "parse dara failed";
    static final int SYNC_BLOCKING = 2;
    private static final java.lang.String TEMP_SUFFIX = ".tmp";
    static final java.lang.String TRUNCATE_FINISH = "truncate finish";
    private static final int TRUNCATE_THRESHOLD = 0;
    private static final int[] TYPE_SIZE = null;
    private java.nio.MappedByteBuffer aBuffer;
    private java.nio.channels.FileChannel aChannel;
    private boolean autoCommit;
    private java.nio.MappedByteBuffer bBuffer;
    private java.nio.channels.FileChannel bChannel;
    private long checksum;
    private final java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c.b> data;
    private int dataEnd;
    private final java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.FastKV.a> encoderMap;
    private final java.util.concurrent.Executor executor;
    private com.mbridge.msdk.foundation.tools.j fastBuffer;
    private int invalidBytes;
    private final java.util.ArrayList<com.mbridge.msdk.foundation.tools.FastKV.c> invalids;
    private final com.mbridge.msdk.foundation.tools.FastKV.b logger;
    private final java.lang.String name;
    private final java.lang.String path;
    private int removeStart;
    private boolean sizeChanged;
    private java.lang.String tempExternalName;
    private int updateSize;
    private int updateStart;
    private int writingMode;


    public static class Builder {
        private static final java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.FastKV> INSTANCE_MAP = null;
        private com.mbridge.msdk.foundation.tools.FastKV.a[] encoders;
        private final java.lang.String name;
        private final java.lang.String path;
        private int writingMode;

        static {
                java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
                r0.<init>()
                com.mbridge.msdk.foundation.tools.FastKV.Builder.INSTANCE_MAP = r0
                return
        }

        public Builder(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.writingMode = r0
                if (r2 == 0) goto L3d
                boolean r0 = r2.isEmpty()
                if (r0 != 0) goto L3d
                if (r3 == 0) goto L35
                boolean r0 = r3.isEmpty()
                if (r0 != 0) goto L35
                java.lang.String r0 = "/"
                boolean r0 = r2.endsWith(r0)
                if (r0 == 0) goto L1f
                goto L30
            L1f:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r2)
                r2 = 47
                r0.append(r2)
                java.lang.String r2 = r0.toString()
            L30:
                r1.path = r2
                r1.name = r3
                return
            L35:
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.String r3 = "name is empty"
                r2.<init>(r3)
                throw r2
            L3d:
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.String r3 = "path is empty"
                r2.<init>(r3)
                throw r2
        }

        public com.mbridge.msdk.foundation.tools.FastKV.Builder asyncBlocking() {
                r1 = this;
                r0 = 1
                r1.writingMode = r0
                return r1
        }

        public com.mbridge.msdk.foundation.tools.FastKV.Builder blocking() {
                r1 = this;
                r0 = 2
                r1.writingMode = r0
                return r1
        }

        public com.mbridge.msdk.foundation.tools.FastKV build() {
                r7 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = r7.path
                r0.append(r1)
                java.lang.String r1 = r7.name
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.FastKV> r1 = com.mbridge.msdk.foundation.tools.FastKV.Builder.INSTANCE_MAP
                java.lang.Object r1 = r1.get(r0)
                com.mbridge.msdk.foundation.tools.FastKV r1 = (com.mbridge.msdk.foundation.tools.FastKV) r1
                if (r1 != 0) goto L41
                java.lang.Class<com.mbridge.msdk.foundation.tools.FastKV$Builder> r2 = com.mbridge.msdk.foundation.tools.FastKV.Builder.class
                monitor-enter(r2)
                java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.FastKV> r1 = com.mbridge.msdk.foundation.tools.FastKV.Builder.INSTANCE_MAP     // Catch: java.lang.Throwable -> L3e
                java.lang.Object r1 = r1.get(r0)     // Catch: java.lang.Throwable -> L3e
                com.mbridge.msdk.foundation.tools.FastKV r1 = (com.mbridge.msdk.foundation.tools.FastKV) r1     // Catch: java.lang.Throwable -> L3e
                if (r1 != 0) goto L3c
                com.mbridge.msdk.foundation.tools.FastKV r1 = new com.mbridge.msdk.foundation.tools.FastKV     // Catch: java.lang.Throwable -> L3e
                java.lang.String r3 = r7.path     // Catch: java.lang.Throwable -> L3e
                java.lang.String r4 = r7.name     // Catch: java.lang.Throwable -> L3e
                com.mbridge.msdk.foundation.tools.FastKV$a[] r5 = r7.encoders     // Catch: java.lang.Throwable -> L3e
                int r6 = r7.writingMode     // Catch: java.lang.Throwable -> L3e
                r1.<init>(r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L3e
                java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.FastKV> r3 = com.mbridge.msdk.foundation.tools.FastKV.Builder.INSTANCE_MAP     // Catch: java.lang.Throwable -> L3e
                r3.put(r0, r1)     // Catch: java.lang.Throwable -> L3e
            L3c:
                monitor-exit(r2)     // Catch: java.lang.Throwable -> L3e
                goto L41
            L3e:
                r0 = move-exception
                monitor-exit(r2)     // Catch: java.lang.Throwable -> L3e
                throw r0
            L41:
                return r1
        }

        public com.mbridge.msdk.foundation.tools.FastKV.Builder encoder(com.mbridge.msdk.foundation.tools.FastKV.a[] r1) {
                r0 = this;
                r0.encoders = r1
                return r0
        }
    }

    public interface a<T> {
        T a(byte[] r1, int r2, int r3);

        java.lang.String a();

        byte[] a(T r1);
    }

    public interface b {
        void a(java.lang.String r1, java.lang.Exception r2);

        void a(java.lang.String r1, java.lang.String r2);

        void b(java.lang.String r1, java.lang.Exception r2);
    }

    private static class c implements java.lang.Comparable<com.mbridge.msdk.foundation.tools.FastKV.c> {
        int a;
        int b;

        c(int r1, int r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        @Override
        public final int compareTo(com.mbridge.msdk.foundation.tools.FastKV.c r2) {
                r1 = this;
                com.mbridge.msdk.foundation.tools.FastKV$c r2 = (com.mbridge.msdk.foundation.tools.FastKV.c) r2
                int r0 = r1.a
                int r2 = r2.a
                int r0 = r0 - r2
                return r0
        }
    }

    static {
            r0 = 6
            int[] r0 = new int[r0]
            r0 = {x0022: FILL_ARRAY_DATA , data: [0, 1, 4, 4, 8, 8} // fill-array
            com.mbridge.msdk.foundation.tools.FastKV.TYPE_SIZE = r0
            r0 = 0
            byte[] r0 = new byte[r0]
            com.mbridge.msdk.foundation.tools.FastKV.EMPTY_ARRAY = r0
            int r0 = com.mbridge.msdk.foundation.tools.al.b()
            com.mbridge.msdk.foundation.tools.FastKV.PAGE_SIZE = r0
            int r0 = r0 << 1
            r1 = 16384(0x4000, float:2.2959E-41)
            int r0 = java.lang.Math.max(r0, r1)
            com.mbridge.msdk.foundation.tools.FastKV.DOUBLE_LIMIT = r0
            int r0 = r0 << 1
            com.mbridge.msdk.foundation.tools.FastKV.TRUNCATE_THRESHOLD = r0
            return
    }

    FastKV(java.lang.String r4, java.lang.String r5, com.mbridge.msdk.foundation.tools.FastKV.a[] r6, int r7) {
            r3 = this;
            r3.<init>()
            com.mbridge.msdk.foundation.tools.FastKV$b r0 = com.mbridge.msdk.foundation.tools.k.a
            r3.logger = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r3.data = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r3.invalids = r0
            r0 = 1
            r3.autoCommit = r0
            com.mbridge.msdk.foundation.tools.n r0 = new com.mbridge.msdk.foundation.tools.n
            r0.<init>()
            r3.executor = r0
            r3.path = r4
            r3.name = r5
            r3.writingMode = r7
            java.util.HashMap r4 = new java.util.HashMap
            r4.<init>()
            com.mbridge.msdk.foundation.tools.ah r5 = com.mbridge.msdk.foundation.tools.ah.a
            java.lang.String r7 = "StringSet"
            r4.put(r7, r5)
            if (r6 == 0) goto L61
            int r5 = r6.length
            if (r5 <= 0) goto L61
            int r5 = r6.length
            r7 = 0
        L38:
            if (r7 >= r5) goto L61
            r0 = r6[r7]
            java.lang.String r1 = r0.a()
            boolean r2 = r4.containsKey(r1)
            if (r2 == 0) goto L5b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "duplicate encoder tag:"
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.error(r0)
            goto L5e
        L5b:
            r4.put(r1, r0)
        L5e:
            int r7 = r7 + 1
            goto L38
        L61:
            r3.encoderMap = r4
            r3.loadData()
            return
    }

    static boolean access$000(com.mbridge.msdk.foundation.tools.FastKV r0) {
            boolean r0 = r0.writeToCFile()
            return r0
    }

    private void addObject(java.lang.String r7, java.lang.Object r8, byte[] r9, byte r10) {
            r6 = this;
            int r2 = r6.saveArray(r7, r9, r10)
            if (r2 == 0) goto L47
            java.lang.String r0 = r6.tempExternalName
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            r5 = r0
            if (r5 == 0) goto L1a
            r8 = 32
            java.lang.String r9 = r6.tempExternalName
            r0 = 0
            r6.tempExternalName = r0
            r4 = r8
            r3 = r9
            goto L1d
        L1a:
            int r9 = r9.length
            r3 = r8
            r4 = r9
        L1d:
            r8 = 6
            if (r10 != r8) goto L2b
            com.mbridge.msdk.foundation.tools.c$i r8 = new com.mbridge.msdk.foundation.tools.c$i
            int r1 = r6.updateStart
            java.lang.String r3 = (java.lang.String) r3
            r0 = r8
            r0.<init>(r1, r2, r3, r4, r5)
            goto L3f
        L2b:
            r8 = 7
            if (r10 != r8) goto L37
            com.mbridge.msdk.foundation.tools.c$a r8 = new com.mbridge.msdk.foundation.tools.c$a
            int r1 = r6.updateStart
            r0 = r8
            r0.<init>(r1, r2, r3, r4, r5)
            goto L3f
        L37:
            com.mbridge.msdk.foundation.tools.c$h r8 = new com.mbridge.msdk.foundation.tools.c$h
            int r1 = r6.updateStart
            r0 = r8
            r0.<init>(r1, r2, r3, r4, r5)
        L3f:
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r9 = r6.data
            r9.put(r7, r8)
            r6.updateChange()
        L47:
            return
    }

    private void addOrUpdate(java.lang.String r2, java.lang.Object r3, byte[] r4, com.mbridge.msdk.foundation.tools.c.j r5, byte r6) {
            r1 = this;
            if (r5 != 0) goto L6
            r1.addObject(r2, r3, r4, r6)
            goto L1b
        L6:
            boolean r6 = r5.e
            if (r6 != 0) goto L18
            int r6 = r5.d
            int r0 = r4.length
            if (r6 == r0) goto L10
            goto L18
        L10:
            int r2 = r5.a
            r1.updateBytes(r2, r4)
            r5.b = r3
            goto L1b
        L18:
            r1.updateObject(r2, r3, r4, r5)
        L1b:
            r1.checkIfCommit()
            return
    }

    private int bytesThreshold() {
            r3 = this;
            int r0 = r3.dataEnd
            r1 = 16384(0x4000, float:2.2959E-41)
            if (r0 > r1) goto L9
            r0 = 4096(0x1000, float:5.74E-42)
            return r0
        L9:
            r2 = 65536(0x10000, float:9.1835E-41)
            if (r0 > r2) goto Lf
            r1 = 8192(0x2000, float:1.148E-41)
        Lf:
            return r1
    }

    private void checkGC() {
            r3 = this;
            int r0 = r3.invalidBytes
            int r1 = r3.bytesThreshold()
            int r1 = r1 << 1
            if (r0 >= r1) goto L1d
            java.util.ArrayList<com.mbridge.msdk.foundation.tools.FastKV$c> r0 = r3.invalids
            int r0 = r0.size()
            int r1 = r3.dataEnd
            r2 = 16384(0x4000, float:2.2959E-41)
            if (r1 >= r2) goto L19
            r1 = 80
            goto L1b
        L19:
            r1 = 160(0xa0, float:2.24E-43)
        L1b:
            if (r0 < r1) goto L21
        L1d:
            r0 = 0
            r3.gc(r0)
        L21:
            return
    }

    private void checkIfCommit() {
            r1 = this;
            int r0 = r1.writingMode
            if (r0 == 0) goto Lb
            boolean r0 = r1.autoCommit
            if (r0 == 0) goto Lb
            r1.commitToCFile()
        Lb:
            return
    }

    private void checkKey(java.lang.String r2) {
            r1 = this;
            if (r2 == 0) goto L9
            boolean r2 = r2.isEmpty()
            if (r2 != 0) goto L9
            return
        L9:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "key is empty"
            r2.<init>(r0)
            throw r2
    }

    private void checkKeySize(int r2) {
            r1 = this;
            r0 = 255(0xff, float:3.57E-43)
            if (r2 > r0) goto L5
            return
        L5:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "key's length must less than 256"
            r2.<init>(r0)
            throw r2
    }

    private void checkValueSize(int r1, boolean r2) {
            r0 = this;
            if (r2 == 0) goto Lf
            r2 = 32
            if (r1 != r2) goto L7
            goto L15
        L7:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "name size not match"
            r1.<init>(r2)
            throw r1
        Lf:
            if (r1 < 0) goto L16
            r2 = 2048(0x800, float:2.87E-42)
            if (r1 >= r2) goto L16
        L15:
            return
        L16:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "value size out of bound"
            r1.<init>(r2)
            throw r1
    }

    private void clearData() {
            r4 = this;
            r0 = 12
            r4.dataEnd = r0
            r0 = 0
            r4.checksum = r0
            r4.clearInvalid()
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r2 = r4.data
            r2.clear()
            com.mbridge.msdk.foundation.tools.j r2 = r4.fastBuffer
            if (r2 == 0) goto L29
            byte[] r2 = r2.a
            int r2 = r2.length
            int r3 = com.mbridge.msdk.foundation.tools.FastKV.PAGE_SIZE
            if (r2 == r3) goto L1c
            goto L29
        L1c:
            com.mbridge.msdk.foundation.tools.j r2 = r4.fastBuffer
            r3 = 0
            r2.a(r3, r3)
            com.mbridge.msdk.foundation.tools.j r2 = r4.fastBuffer
            r3 = 4
            r2.a(r3, r0)
            goto L32
        L29:
            com.mbridge.msdk.foundation.tools.j r0 = new com.mbridge.msdk.foundation.tools.j
            int r1 = com.mbridge.msdk.foundation.tools.FastKV.PAGE_SIZE
            r0.<init>(r1)
            r4.fastBuffer = r0
        L32:
            return
    }

    private void clearInvalid() {
            r1 = this;
            r0 = 0
            r1.invalidBytes = r0
            java.util.ArrayList<com.mbridge.msdk.foundation.tools.FastKV$c> r0 = r1.invalids
            r0.clear()
            return
    }

    private boolean commitToCFile() {
            r3 = this;
            int r0 = r3.writingMode
            r1 = 1
            if (r0 != r1) goto L10
            java.util.concurrent.Executor r0 = r3.executor
            com.mbridge.msdk.foundation.tools.FastKV$1 r2 = new com.mbridge.msdk.foundation.tools.FastKV$1
            r2.<init>(r3)
            r0.execute(r2)
            goto L18
        L10:
            r2 = 2
            if (r0 != r2) goto L18
            boolean r0 = r3.writeToCFile()
            return r0
        L18:
            return r1
    }

    private void copyBuffer(java.nio.MappedByteBuffer r8, java.nio.MappedByteBuffer r9, int r10) {
            r7 = this;
            int r0 = r8.capacity()
            int r1 = r9.capacity()
            if (r0 == r1) goto L39
            java.nio.MappedByteBuffer r0 = r7.bBuffer     // Catch: java.io.IOException -> L31
            if (r9 != r0) goto L11
            java.nio.channels.FileChannel r0 = r7.bChannel     // Catch: java.io.IOException -> L31
            goto L13
        L11:
            java.nio.channels.FileChannel r0 = r7.aChannel     // Catch: java.io.IOException -> L31
        L13:
            r1 = r0
            java.nio.channels.FileChannel$MapMode r2 = java.nio.channels.FileChannel.MapMode.READ_WRITE     // Catch: java.io.IOException -> L31
            r3 = 0
            int r0 = r8.capacity()     // Catch: java.io.IOException -> L31
            long r5 = (long) r0     // Catch: java.io.IOException -> L31
            java.nio.MappedByteBuffer r0 = r1.map(r2, r3, r5)     // Catch: java.io.IOException -> L31
            java.nio.ByteOrder r1 = java.nio.ByteOrder.LITTLE_ENDIAN     // Catch: java.io.IOException -> L31
            r0.order(r1)     // Catch: java.io.IOException -> L31
            java.nio.MappedByteBuffer r1 = r7.bBuffer     // Catch: java.io.IOException -> L31
            if (r9 != r1) goto L2d
            r7.bBuffer = r0     // Catch: java.io.IOException -> L31
            goto L2f
        L2d:
            r7.aBuffer = r0     // Catch: java.io.IOException -> L31
        L2f:
            r9 = r0
            goto L39
        L31:
            r8 = move-exception
            r7.error(r8)
            r7.toBlockingMode()
            return
        L39:
            r8.rewind()
            r9.rewind()
            r8.limit(r10)
            r9.put(r8)
            int r9 = r8.capacity()
            r8.limit(r9)
            return
    }

    private void countInvalid(int r3, int r4) {
            r2 = this;
            int r0 = r2.invalidBytes
            int r1 = r4 - r3
            int r0 = r0 + r1
            r2.invalidBytes = r0
            java.util.ArrayList<com.mbridge.msdk.foundation.tools.FastKV$c> r0 = r2.invalids
            com.mbridge.msdk.foundation.tools.FastKV$c r1 = new com.mbridge.msdk.foundation.tools.FastKV$c
            r1.<init>(r3, r4)
            r0.add(r1)
            return
    }

    private void deleteCFiles() {
            r4 = this;
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L3b
            java.lang.String r1 = r4.path     // Catch: java.lang.Exception -> L3b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3b
            r2.<init>()     // Catch: java.lang.Exception -> L3b
            java.lang.String r3 = r4.name     // Catch: java.lang.Exception -> L3b
            r2.append(r3)     // Catch: java.lang.Exception -> L3b
            java.lang.String r3 = ".kvc"
            r2.append(r3)     // Catch: java.lang.Exception -> L3b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L3b
            r0.<init>(r1, r2)     // Catch: java.lang.Exception -> L3b
            com.mbridge.msdk.foundation.tools.al.c(r0)     // Catch: java.lang.Exception -> L3b
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L3b
            java.lang.String r1 = r4.path     // Catch: java.lang.Exception -> L3b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3b
            r2.<init>()     // Catch: java.lang.Exception -> L3b
            java.lang.String r3 = r4.name     // Catch: java.lang.Exception -> L3b
            r2.append(r3)     // Catch: java.lang.Exception -> L3b
            java.lang.String r3 = ".tmp"
            r2.append(r3)     // Catch: java.lang.Exception -> L3b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L3b
            r0.<init>(r1, r2)     // Catch: java.lang.Exception -> L3b
            com.mbridge.msdk.foundation.tools.al.c(r0)     // Catch: java.lang.Exception -> L3b
            goto L3f
        L3b:
            r0 = move-exception
            r4.error(r0)
        L3f:
            return
    }

    private void ensureSize(int r15) {
            r14 = this;
            com.mbridge.msdk.foundation.tools.j r0 = r14.fastBuffer
            byte[] r0 = r0.a
            int r0 = r0.length
            int r1 = r14.dataEnd
            int r1 = r1 + r15
            if (r1 < r0) goto L74
            int r2 = r14.invalidBytes
            if (r2 <= r15) goto L18
            int r3 = r14.bytesThreshold()
            if (r2 <= r3) goto L18
            r14.gc(r15)
            goto L74
        L18:
            int r15 = r14.getNewCapacity(r0, r1)
            byte[] r0 = new byte[r15]
            com.mbridge.msdk.foundation.tools.j r1 = r14.fastBuffer
            byte[] r1 = r1.a
            int r2 = r14.dataEnd
            r3 = 0
            java.lang.System.arraycopy(r1, r3, r0, r3, r2)
            com.mbridge.msdk.foundation.tools.j r1 = r14.fastBuffer
            r1.a = r0
            int r0 = r14.writingMode
            if (r0 != 0) goto L74
            java.nio.channels.FileChannel r4 = r14.aChannel     // Catch: java.io.IOException -> L55
            java.nio.channels.FileChannel$MapMode r5 = java.nio.channels.FileChannel.MapMode.READ_WRITE     // Catch: java.io.IOException -> L55
            r6 = 0
            long r12 = (long) r15     // Catch: java.io.IOException -> L55
            r8 = r12
            java.nio.MappedByteBuffer r15 = r4.map(r5, r6, r8)     // Catch: java.io.IOException -> L55
            r14.aBuffer = r15     // Catch: java.io.IOException -> L55
            java.nio.ByteOrder r0 = java.nio.ByteOrder.LITTLE_ENDIAN     // Catch: java.io.IOException -> L55
            r15.order(r0)     // Catch: java.io.IOException -> L55
            java.nio.channels.FileChannel r8 = r14.bChannel     // Catch: java.io.IOException -> L55
            java.nio.channels.FileChannel$MapMode r9 = java.nio.channels.FileChannel.MapMode.READ_WRITE     // Catch: java.io.IOException -> L55
            r10 = 0
            java.nio.MappedByteBuffer r15 = r8.map(r9, r10, r12)     // Catch: java.io.IOException -> L55
            r14.bBuffer = r15     // Catch: java.io.IOException -> L55
            java.nio.ByteOrder r0 = java.nio.ByteOrder.LITTLE_ENDIAN     // Catch: java.io.IOException -> L55
            r15.order(r0)     // Catch: java.io.IOException -> L55
            goto L74
        L55:
            r15 = move-exception
            java.lang.Exception r0 = new java.lang.Exception
            java.lang.String r1 = "map failed"
            r0.<init>(r1, r15)
            r14.error(r0)
            com.mbridge.msdk.foundation.tools.j r15 = r14.fastBuffer
            int r0 = r14.dataEnd
            int r0 = r0 + (-12)
            r15.a(r3, r0)
            com.mbridge.msdk.foundation.tools.j r15 = r14.fastBuffer
            r0 = 4
            long r1 = r14.checksum
            r15.a(r0, r1)
            r14.toBlockingMode()
        L74:
            return
    }

    private void error(java.lang.Exception r3) {
            r2 = this;
            com.mbridge.msdk.foundation.tools.FastKV$b r0 = r2.logger
            if (r0 == 0) goto L9
            java.lang.String r1 = r2.name
            r0.b(r1, r3)
        L9:
            return
    }

    private void error(java.lang.String r4) {
            r3 = this;
            com.mbridge.msdk.foundation.tools.FastKV$b r0 = r3.logger
            if (r0 == 0) goto Le
            java.lang.String r1 = r3.name
            java.lang.Exception r2 = new java.lang.Exception
            r2.<init>(r4)
            r0.b(r1, r2)
        Le:
            return
    }

    private void fastPutString(java.lang.String r11, java.lang.String r12, com.mbridge.msdk.foundation.tools.c.i r13) {
            r10 = this;
            int r4 = com.mbridge.msdk.foundation.tools.j.b(r12)
            r0 = 6
            if (r13 != 0) goto L3a
            int r13 = com.mbridge.msdk.foundation.tools.j.b(r11)
            r10.checkKeySize(r13)
            int r1 = r13 + 4
            int r2 = r1 + r4
            r10.updateSize = r2
            r10.preparePutBytes()
            com.mbridge.msdk.foundation.tools.j r2 = r10.fastBuffer
            r2.a(r0)
            r10.putKey(r11, r13)
            r10.putStringValue(r12, r4)
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r13 = r10.data
            com.mbridge.msdk.foundation.tools.c$i r6 = new com.mbridge.msdk.foundation.tools.c$i
            int r2 = r10.updateStart
            int r3 = r2 + r1
            r5 = 0
            r0 = r6
            r1 = r2
            r2 = r3
            r3 = r12
            r0.<init>(r1, r2, r3, r4, r5)
            r13.put(r11, r6)
            r10.updateChange()
            goto Le8
        L3a:
            r11 = 0
            int r1 = r13.a
            int r2 = r13.c
            int r1 = r1 - r2
            int r2 = r13.d
            r3 = 1
            r5 = 0
            if (r2 != r4) goto L78
            long r0 = r10.checksum
            com.mbridge.msdk.foundation.tools.j r2 = r10.fastBuffer
            int r3 = r13.a
            int r6 = r13.d
            long r2 = r2.b(r3, r6)
            long r0 = r0 ^ r2
            r10.checksum = r0
            int r0 = r12.length()
            if (r4 != r0) goto L65
            com.mbridge.msdk.foundation.tools.j r0 = r10.fastBuffer
            byte[] r0 = r0.a
            int r1 = r13.a
            r12.getBytes(r5, r4, r0, r1)
            goto L70
        L65:
            com.mbridge.msdk.foundation.tools.j r0 = r10.fastBuffer
            int r1 = r13.a
            r0.b = r1
            com.mbridge.msdk.foundation.tools.j r0 = r10.fastBuffer
            r0.a(r12)
        L70:
            int r0 = r13.a
            r10.updateStart = r0
            r10.updateSize = r4
            r3 = r5
            goto Lc1
        L78:
            int r2 = r1 + r4
            r10.updateSize = r2
            r10.preparePutBytes()
            com.mbridge.msdk.foundation.tools.j r2 = r10.fastBuffer
            r2.a(r0)
            int r2 = r1 + (-3)
            com.mbridge.msdk.foundation.tools.j r6 = r10.fastBuffer
            byte[] r6 = r6.a
            int r7 = r13.c
            int r7 = r7 + r3
            com.mbridge.msdk.foundation.tools.j r8 = r10.fastBuffer
            byte[] r8 = r8.a
            com.mbridge.msdk.foundation.tools.j r9 = r10.fastBuffer
            int r9 = r9.b
            java.lang.System.arraycopy(r6, r7, r8, r9, r2)
            com.mbridge.msdk.foundation.tools.j r6 = r10.fastBuffer
            int r7 = r6.b
            int r7 = r7 + r2
            r6.b = r7
            r10.putStringValue(r12, r4)
            int r2 = r13.c
            int r6 = r13.a
            int r7 = r13.d
            int r6 = r6 + r7
            r10.remove(r0, r2, r6)
            boolean r0 = r13.e
            if (r0 == 0) goto Lb4
            java.lang.Object r11 = r13.b
            java.lang.String r11 = (java.lang.String) r11
        Lb4:
            r13.e = r5
            int r0 = r10.updateStart
            r13.c = r0
            int r0 = r10.updateStart
            int r0 = r0 + r1
            r13.a = r0
            r13.d = r4
        Lc1:
            r13.b = r12
            r10.updateChange()
            if (r3 == 0) goto Lcb
            r10.checkGC()
        Lcb:
            if (r11 == 0) goto Le8
            java.io.File r12 = new java.io.File
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            java.lang.String r0 = r10.path
            r13.append(r0)
            java.lang.String r0 = r10.name
            r13.append(r0)
            java.lang.String r13 = r13.toString()
            r12.<init>(r13, r11)
            com.mbridge.msdk.foundation.tools.al.c(r12)
        Le8:
            r10.checkIfCommit()
            return
    }

    private byte[] getArrayFromFile(com.mbridge.msdk.foundation.tools.c.a r4) {
            r3 = this;
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r3.path
            r1.append(r2)
            java.lang.String r2 = r3.name
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.Object r4 = r4.b
            java.lang.String r4 = (java.lang.String) r4
            r0.<init>(r1, r4)
            byte[] r4 = com.mbridge.msdk.foundation.tools.al.b(r0)     // Catch: java.lang.Exception -> L26
            if (r4 == 0) goto L23
            goto L25
        L23:
            byte[] r4 = com.mbridge.msdk.foundation.tools.FastKV.EMPTY_ARRAY     // Catch: java.lang.Exception -> L26
        L25:
            return r4
        L26:
            r4 = move-exception
            r3.error(r4)
            byte[] r4 = com.mbridge.msdk.foundation.tools.FastKV.EMPTY_ARRAY
            return r4
    }

    private int getNewCapacity(int r2, int r3) {
            r1 = this;
            r0 = 536870912(0x20000000, float:1.0842022E-19)
            if (r3 > r0) goto L15
            int r0 = com.mbridge.msdk.foundation.tools.FastKV.PAGE_SIZE
            if (r3 > r0) goto L9
            return r0
        L9:
            if (r2 >= r3) goto L14
            int r0 = com.mbridge.msdk.foundation.tools.FastKV.DOUBLE_LIMIT
            if (r2 > r0) goto L12
            int r2 = r2 << 1
            goto L9
        L12:
            int r2 = r2 + r0
            goto L9
        L14:
            return r2
        L15:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "data size out of limit"
            r2.<init>(r3)
            throw r2
    }

    private java.lang.Object getObjectFromFile(com.mbridge.msdk.foundation.tools.c.h r5) {
            r4 = this;
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r4.path
            r1.append(r2)
            java.lang.String r2 = r4.name
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.Object r5 = r5.b
            java.lang.String r5 = (java.lang.String) r5
            r0.<init>(r1, r5)
            byte[] r5 = com.mbridge.msdk.foundation.tools.al.b(r0)     // Catch: java.lang.Exception -> L72
            if (r5 == 0) goto L67
            r0 = 0
            r0 = r5[r0]     // Catch: java.lang.Exception -> L72
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L72
            r2 = 19
            r3 = 1
            if (r1 < r2) goto L36
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Exception -> L72
            java.nio.charset.Charset r2 = java.nio.charset.StandardCharsets.UTF_8     // Catch: java.lang.Exception -> L72
            r1.<init>(r5, r3, r0, r2)     // Catch: java.lang.Exception -> L72
            goto L3b
        L36:
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Exception -> L72
            r1.<init>(r5, r3, r0)     // Catch: java.lang.Exception -> L72
        L3b:
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.FastKV$a> r2 = r4.encoderMap     // Catch: java.lang.Exception -> L72
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Exception -> L72
            com.mbridge.msdk.foundation.tools.FastKV$a r2 = (com.mbridge.msdk.foundation.tools.FastKV.a) r2     // Catch: java.lang.Exception -> L72
            if (r2 == 0) goto L4d
            int r0 = r0 + r3
            int r1 = r5.length     // Catch: java.lang.Exception -> L72
            int r1 = r1 - r0
            java.lang.Object r5 = r2.a(r5, r0, r1)     // Catch: java.lang.Exception -> L72
            return r5
        L4d:
            java.lang.Exception r5 = new java.lang.Exception     // Catch: java.lang.Exception -> L72
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L72
            r0.<init>()     // Catch: java.lang.Exception -> L72
            java.lang.String r2 = "No encoder for tag:"
            r0.append(r2)     // Catch: java.lang.Exception -> L72
            r0.append(r1)     // Catch: java.lang.Exception -> L72
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L72
            r5.<init>(r0)     // Catch: java.lang.Exception -> L72
            r4.warning(r5)     // Catch: java.lang.Exception -> L72
            goto L76
        L67:
            java.lang.Exception r5 = new java.lang.Exception     // Catch: java.lang.Exception -> L72
            java.lang.String r0 = "Read object data failed"
            r5.<init>(r0)     // Catch: java.lang.Exception -> L72
            r4.warning(r5)     // Catch: java.lang.Exception -> L72
            goto L76
        L72:
            r5 = move-exception
            r4.error(r5)
        L76:
            r5 = 0
            return r5
    }

    private java.lang.String getStringFromFile(com.mbridge.msdk.foundation.tools.c.i r5) {
            r4 = this;
            java.lang.String r0 = ""
            java.lang.Object r5 = r5.b
            java.lang.String r5 = (java.lang.String) r5
            java.io.File r1 = new java.io.File
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r4.path
            r2.append(r3)
            java.lang.String r3 = r4.name
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2, r5)
            byte[] r5 = com.mbridge.msdk.foundation.tools.al.b(r1)     // Catch: java.lang.Exception -> L42
            if (r5 == 0) goto L46
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L42
            r2 = 19
            if (r1 < r2) goto L37
            int r1 = r5.length     // Catch: java.lang.Exception -> L42
            if (r1 != 0) goto L2e
            goto L36
        L2e:
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Exception -> L42
            java.nio.charset.Charset r2 = java.nio.charset.StandardCharsets.UTF_8     // Catch: java.lang.Exception -> L42
            r1.<init>(r5, r2)     // Catch: java.lang.Exception -> L42
            r0 = r1
        L36:
            return r0
        L37:
            int r1 = r5.length     // Catch: java.lang.Exception -> L42
            if (r1 != 0) goto L3b
            goto L41
        L3b:
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Exception -> L42
            r1.<init>(r5)     // Catch: java.lang.Exception -> L42
            r0 = r1
        L41:
            return r0
        L42:
            r5 = move-exception
            r4.error(r5)
        L46:
            return r0
    }

    private void info(java.lang.String r3) {
            r2 = this;
            com.mbridge.msdk.foundation.tools.FastKV$b r0 = r2.logger
            if (r0 == 0) goto L9
            java.lang.String r1 = r2.name
            r0.a(r1, r3)
        L9:
            return
    }

    private boolean isABFileEqual() {
            r6 = this;
            com.mbridge.msdk.foundation.tools.j r0 = new com.mbridge.msdk.foundation.tools.j
            int r1 = r6.dataEnd
            r0.<init>(r1)
            java.nio.MappedByteBuffer r1 = r6.bBuffer
            r1.rewind()
            java.nio.MappedByteBuffer r1 = r6.bBuffer
            byte[] r2 = r0.a
            int r3 = r6.dataEnd
            r4 = 0
            r1.get(r2, r4, r3)
            com.mbridge.msdk.foundation.tools.j r1 = r6.fastBuffer
            byte[] r1 = r1.a
            byte[] r0 = r0.a
            r2 = r4
        L1d:
            int r3 = r6.dataEnd
            if (r2 >= r3) goto L2b
            r3 = r1[r2]
            r5 = r0[r2]
            if (r3 == r5) goto L28
            return r4
        L28:
            int r2 = r2 + 1
            goto L1d
        L2b:
            r0 = 1
            return r0
    }

    private synchronized void loadData() {
            r4 = this;
            monitor-enter(r4)
            long r0 = java.lang.System.nanoTime()     // Catch: java.lang.Throwable -> L5f
            boolean r2 = r4.loadFromCFile()     // Catch: java.lang.Throwable -> L5f
            if (r2 != 0) goto L12
            int r2 = r4.writingMode     // Catch: java.lang.Throwable -> L5f
            if (r2 != 0) goto L12
            r4.loadFromABFile()     // Catch: java.lang.Throwable -> L5f
        L12:
            com.mbridge.msdk.foundation.tools.j r2 = r4.fastBuffer     // Catch: java.lang.Throwable -> L5f
            if (r2 != 0) goto L1f
            com.mbridge.msdk.foundation.tools.j r2 = new com.mbridge.msdk.foundation.tools.j     // Catch: java.lang.Throwable -> L5f
            int r3 = com.mbridge.msdk.foundation.tools.FastKV.PAGE_SIZE     // Catch: java.lang.Throwable -> L5f
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L5f
            r4.fastBuffer = r2     // Catch: java.lang.Throwable -> L5f
        L1f:
            com.mbridge.msdk.foundation.tools.FastKV$b r2 = r4.logger     // Catch: java.lang.Throwable -> L5f
            if (r2 == 0) goto L5d
            long r2 = java.lang.System.nanoTime()     // Catch: java.lang.Throwable -> L5f
            long r2 = r2 - r0
            r0 = 1000000(0xf4240, double:4.940656E-318)
            long r2 = r2 / r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5f
            r0.<init>()     // Catch: java.lang.Throwable -> L5f
            java.lang.String r1 = "loading finish, data len:"
            r0.append(r1)     // Catch: java.lang.Throwable -> L5f
            int r1 = r4.dataEnd     // Catch: java.lang.Throwable -> L5f
            r0.append(r1)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r1 = ", get keys:"
            r0.append(r1)     // Catch: java.lang.Throwable -> L5f
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r1 = r4.data     // Catch: java.lang.Throwable -> L5f
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L5f
            r0.append(r1)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r1 = ", use time:"
            r0.append(r1)     // Catch: java.lang.Throwable -> L5f
            r0.append(r2)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r1 = " ms"
            r0.append(r1)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L5f
            r4.info(r0)     // Catch: java.lang.Throwable -> L5f
        L5d:
            monitor-exit(r4)
            return
        L5f:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    private void loadFromABFile() {
            r21 = this;
            r1 = r21
            java.lang.String r0 = "rw"
            java.io.File r2 = new java.io.File
            java.lang.String r3 = r1.path
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = r1.name
            r4.append(r5)
            java.lang.String r5 = ".kva"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r2.<init>(r3, r4)
            java.io.File r3 = new java.io.File
            java.lang.String r4 = r1.path
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = r1.name
            r5.append(r6)
            java.lang.String r6 = ".kvb"
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r3.<init>(r4, r5)
            boolean r4 = com.mbridge.msdk.foundation.tools.al.a(r2)     // Catch: java.lang.Exception -> L1b4
            if (r4 == 0) goto L1a6
            boolean r4 = com.mbridge.msdk.foundation.tools.al.a(r3)     // Catch: java.lang.Exception -> L1b4
            if (r4 != 0) goto L46
            goto L1a6
        L46:
            java.io.RandomAccessFile r4 = new java.io.RandomAccessFile     // Catch: java.lang.Exception -> L1b4
            r4.<init>(r2, r0)     // Catch: java.lang.Exception -> L1b4
            java.io.RandomAccessFile r5 = new java.io.RandomAccessFile     // Catch: java.lang.Exception -> L1b4
            r5.<init>(r3, r0)     // Catch: java.lang.Exception -> L1b4
            long r6 = r4.length()     // Catch: java.lang.Exception -> L1b4
            long r8 = r5.length()     // Catch: java.lang.Exception -> L1b4
            java.nio.channels.FileChannel r0 = r4.getChannel()     // Catch: java.lang.Exception -> L1b4
            r1.aChannel = r0     // Catch: java.lang.Exception -> L1b4
            java.nio.channels.FileChannel r0 = r5.getChannel()     // Catch: java.lang.Exception -> L1b4
            r1.bChannel = r0     // Catch: java.lang.Exception -> L1b4
            java.nio.channels.FileChannel r10 = r1.aChannel     // Catch: java.io.IOException -> L19b java.lang.Exception -> L1b4
            java.nio.channels.FileChannel$MapMode r11 = java.nio.channels.FileChannel.MapMode.READ_WRITE     // Catch: java.io.IOException -> L19b java.lang.Exception -> L1b4
            r12 = 0
            r4 = 0
            int r0 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r0 <= 0) goto L72
            r14 = r6
            goto L75
        L72:
            int r14 = com.mbridge.msdk.foundation.tools.FastKV.PAGE_SIZE     // Catch: java.io.IOException -> L19b java.lang.Exception -> L1b4
            long r14 = (long) r14     // Catch: java.io.IOException -> L19b java.lang.Exception -> L1b4
        L75:
            java.nio.MappedByteBuffer r10 = r10.map(r11, r12, r14)     // Catch: java.io.IOException -> L19b java.lang.Exception -> L1b4
            r1.aBuffer = r10     // Catch: java.io.IOException -> L19b java.lang.Exception -> L1b4
            java.nio.ByteOrder r11 = java.nio.ByteOrder.LITTLE_ENDIAN     // Catch: java.io.IOException -> L19b java.lang.Exception -> L1b4
            r10.order(r11)     // Catch: java.io.IOException -> L19b java.lang.Exception -> L1b4
            java.nio.channels.FileChannel r12 = r1.bChannel     // Catch: java.io.IOException -> L19b java.lang.Exception -> L1b4
            java.nio.channels.FileChannel$MapMode r13 = java.nio.channels.FileChannel.MapMode.READ_WRITE     // Catch: java.io.IOException -> L19b java.lang.Exception -> L1b4
            r14 = 0
            int r4 = (r8 > r4 ? 1 : (r8 == r4 ? 0 : -1))
            if (r4 <= 0) goto L8d
            r16 = r8
            goto L92
        L8d:
            int r5 = com.mbridge.msdk.foundation.tools.FastKV.PAGE_SIZE     // Catch: java.io.IOException -> L19b java.lang.Exception -> L1b4
            long r10 = (long) r5     // Catch: java.io.IOException -> L19b java.lang.Exception -> L1b4
            r16 = r10
        L92:
            java.nio.MappedByteBuffer r5 = r12.map(r13, r14, r16)     // Catch: java.io.IOException -> L19b java.lang.Exception -> L1b4
            r1.bBuffer = r5     // Catch: java.io.IOException -> L19b java.lang.Exception -> L1b4
            java.nio.ByteOrder r10 = java.nio.ByteOrder.LITTLE_ENDIAN     // Catch: java.io.IOException -> L19b java.lang.Exception -> L1b4
            r5.order(r10)     // Catch: java.io.IOException -> L19b java.lang.Exception -> L1b4
            com.mbridge.msdk.foundation.tools.j r2 = new com.mbridge.msdk.foundation.tools.j     // Catch: java.lang.Exception -> L1b4
            java.nio.MappedByteBuffer r3 = r1.aBuffer     // Catch: java.lang.Exception -> L1b4
            int r3 = r3.capacity()     // Catch: java.lang.Exception -> L1b4
            r2.<init>(r3)     // Catch: java.lang.Exception -> L1b4
            r1.fastBuffer = r2     // Catch: java.lang.Exception -> L1b4
            r2 = 12
            if (r0 != 0) goto Lb4
            if (r4 != 0) goto Lb4
            r1.dataEnd = r2     // Catch: java.lang.Exception -> L1b4
            goto L1be
        Lb4:
            java.nio.MappedByteBuffer r0 = r1.aBuffer     // Catch: java.lang.Exception -> L1b4
            int r0 = r0.getInt()     // Catch: java.lang.Exception -> L1b4
            java.nio.MappedByteBuffer r3 = r1.aBuffer     // Catch: java.lang.Exception -> L1b4
            long r3 = r3.getLong()     // Catch: java.lang.Exception -> L1b4
            java.nio.MappedByteBuffer r5 = r1.bBuffer     // Catch: java.lang.Exception -> L1b4
            int r5 = r5.getInt()     // Catch: java.lang.Exception -> L1b4
            java.nio.MappedByteBuffer r10 = r1.bBuffer     // Catch: java.lang.Exception -> L1b4
            long r10 = r10.getLong()     // Catch: java.lang.Exception -> L1b4
            r12 = 1
            r13 = 12
            r15 = 0
            if (r0 < 0) goto L107
            r17 = r3
            long r2 = (long) r0     // Catch: java.lang.Exception -> L1b4
            long r19 = r6 - r13
            int r2 = (r2 > r19 ? 1 : (r2 == r19 ? 0 : -1))
            if (r2 > 0) goto L107
            int r2 = r0 + 12
            r1.dataEnd = r2     // Catch: java.lang.Exception -> L1b4
            java.nio.MappedByteBuffer r2 = r1.aBuffer     // Catch: java.lang.Exception -> L1b4
            r2.rewind()     // Catch: java.lang.Exception -> L1b4
            java.nio.MappedByteBuffer r2 = r1.aBuffer     // Catch: java.lang.Exception -> L1b4
            com.mbridge.msdk.foundation.tools.j r3 = r1.fastBuffer     // Catch: java.lang.Exception -> L1b4
            byte[] r3 = r3.a     // Catch: java.lang.Exception -> L1b4
            int r4 = r1.dataEnd     // Catch: java.lang.Exception -> L1b4
            r2.get(r3, r15, r4)     // Catch: java.lang.Exception -> L1b4
            com.mbridge.msdk.foundation.tools.j r2 = r1.fastBuffer     // Catch: java.lang.Exception -> L1b4
            r3 = 12
            long r19 = r2.b(r3, r0)     // Catch: java.lang.Exception -> L1b4
            int r0 = (r17 > r19 ? 1 : (r17 == r19 ? 0 : -1))
            if (r0 != 0) goto L107
            int r0 = r21.parseData()     // Catch: java.lang.Exception -> L1b4
            if (r0 != 0) goto L107
            r2 = r17
            r1.checksum = r2     // Catch: java.lang.Exception -> L1b4
            r0 = r12
            goto L108
        L107:
            r0 = r15
        L108:
            if (r0 == 0) goto L129
            int r0 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r0 != 0) goto L114
            boolean r0 = r21.isABFileEqual()     // Catch: java.lang.Exception -> L1b4
            if (r0 != 0) goto L1be
        L114:
            java.lang.Exception r0 = new java.lang.Exception     // Catch: java.lang.Exception -> L1b4
            java.lang.String r2 = "B file error"
            r0.<init>(r2)     // Catch: java.lang.Exception -> L1b4
            r1.warning(r0)     // Catch: java.lang.Exception -> L1b4
            java.nio.MappedByteBuffer r0 = r1.aBuffer     // Catch: java.lang.Exception -> L1b4
            java.nio.MappedByteBuffer r2 = r1.bBuffer     // Catch: java.lang.Exception -> L1b4
            int r3 = r1.dataEnd     // Catch: java.lang.Exception -> L1b4
            r1.copyBuffer(r0, r2, r3)     // Catch: java.lang.Exception -> L1b4
            goto L1be
        L129:
            if (r5 < 0) goto L18f
            long r2 = (long) r5     // Catch: java.lang.Exception -> L1b4
            long r8 = r8 - r13
            int r0 = (r2 > r8 ? 1 : (r2 == r8 ? 0 : -1))
            if (r0 > 0) goto L18f
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r0 = r1.data     // Catch: java.lang.Exception -> L1b4
            r0.clear()     // Catch: java.lang.Exception -> L1b4
            r21.clearInvalid()     // Catch: java.lang.Exception -> L1b4
            int r0 = r5 + 12
            r1.dataEnd = r0     // Catch: java.lang.Exception -> L1b4
            com.mbridge.msdk.foundation.tools.j r0 = r1.fastBuffer     // Catch: java.lang.Exception -> L1b4
            byte[] r0 = r0.a     // Catch: java.lang.Exception -> L1b4
            int r0 = r0.length     // Catch: java.lang.Exception -> L1b4
            java.nio.MappedByteBuffer r2 = r1.bBuffer     // Catch: java.lang.Exception -> L1b4
            int r2 = r2.capacity()     // Catch: java.lang.Exception -> L1b4
            if (r0 == r2) goto L157
            com.mbridge.msdk.foundation.tools.j r0 = new com.mbridge.msdk.foundation.tools.j     // Catch: java.lang.Exception -> L1b4
            java.nio.MappedByteBuffer r2 = r1.bBuffer     // Catch: java.lang.Exception -> L1b4
            int r2 = r2.capacity()     // Catch: java.lang.Exception -> L1b4
            r0.<init>(r2)     // Catch: java.lang.Exception -> L1b4
            r1.fastBuffer = r0     // Catch: java.lang.Exception -> L1b4
        L157:
            java.nio.MappedByteBuffer r0 = r1.bBuffer     // Catch: java.lang.Exception -> L1b4
            r0.rewind()     // Catch: java.lang.Exception -> L1b4
            java.nio.MappedByteBuffer r0 = r1.bBuffer     // Catch: java.lang.Exception -> L1b4
            com.mbridge.msdk.foundation.tools.j r2 = r1.fastBuffer     // Catch: java.lang.Exception -> L1b4
            byte[] r2 = r2.a     // Catch: java.lang.Exception -> L1b4
            int r3 = r1.dataEnd     // Catch: java.lang.Exception -> L1b4
            r0.get(r2, r15, r3)     // Catch: java.lang.Exception -> L1b4
            com.mbridge.msdk.foundation.tools.j r0 = r1.fastBuffer     // Catch: java.lang.Exception -> L1b4
            r2 = 12
            long r2 = r0.b(r2, r5)     // Catch: java.lang.Exception -> L1b4
            int r0 = (r10 > r2 ? 1 : (r10 == r2 ? 0 : -1))
            if (r0 != 0) goto L18f
            int r0 = r21.parseData()     // Catch: java.lang.Exception -> L1b4
            if (r0 != 0) goto L18f
            java.lang.Exception r0 = new java.lang.Exception     // Catch: java.lang.Exception -> L1b4
            java.lang.String r2 = "A file error"
            r0.<init>(r2)     // Catch: java.lang.Exception -> L1b4
            r1.warning(r0)     // Catch: java.lang.Exception -> L1b4
            java.nio.MappedByteBuffer r0 = r1.bBuffer     // Catch: java.lang.Exception -> L1b4
            java.nio.MappedByteBuffer r2 = r1.aBuffer     // Catch: java.lang.Exception -> L1b4
            int r3 = r1.dataEnd     // Catch: java.lang.Exception -> L1b4
            r1.copyBuffer(r0, r2, r3)     // Catch: java.lang.Exception -> L1b4
            r1.checksum = r10     // Catch: java.lang.Exception -> L1b4
            goto L190
        L18f:
            r12 = r15
        L190:
            if (r12 != 0) goto L1be
            java.lang.String r0 = "both files error"
            r1.error(r0)     // Catch: java.lang.Exception -> L1b4
            r21.resetData()     // Catch: java.lang.Exception -> L1b4
            goto L1be
        L19b:
            r0 = move-exception
            r1.error(r0)     // Catch: java.lang.Exception -> L1b4
            r21.toBlockingMode()     // Catch: java.lang.Exception -> L1b4
            r1.tryBlockingIO(r2, r3)     // Catch: java.lang.Exception -> L1b4
            return
        L1a6:
            java.lang.Exception r0 = new java.lang.Exception     // Catch: java.lang.Exception -> L1b4
            java.lang.String r2 = "open file failed"
            r0.<init>(r2)     // Catch: java.lang.Exception -> L1b4
            r1.error(r0)     // Catch: java.lang.Exception -> L1b4
            r21.toBlockingMode()     // Catch: java.lang.Exception -> L1b4
            return
        L1b4:
            r0 = move-exception
            r1.error(r0)
            r21.clearData()
            r21.toBlockingMode()
        L1be:
            return
    }

    private boolean loadFromCFile() {
            r6 = this;
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r6.path
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r6.name
            r2.append(r3)
            java.lang.String r3 = ".kvc"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.<init>(r1, r2)
            java.io.File r1 = new java.io.File
            java.lang.String r2 = r6.path
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = r6.name
            r3.append(r4)
            java.lang.String r4 = ".tmp"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r1.<init>(r2, r3)
            r2 = 0
            r3 = 1
            r4 = 0
            boolean r5 = r0.exists()     // Catch: java.lang.Exception -> Lb9
            if (r5 == 0) goto L3e
            goto L47
        L3e:
            boolean r0 = r1.exists()     // Catch: java.lang.Exception -> Lb9
            if (r0 == 0) goto L46
            r0 = r1
            goto L47
        L46:
            r0 = r2
        L47:
            if (r0 == 0) goto L70
            boolean r0 = r6.loadWithBlockingIO(r0)     // Catch: java.lang.Exception -> Lb9
            if (r0 == 0) goto L69
            int r0 = r6.writingMode     // Catch: java.lang.Exception -> Lb9
            if (r0 != 0) goto Lb7
            com.mbridge.msdk.foundation.tools.j r0 = r6.fastBuffer     // Catch: java.lang.Exception -> Lb9
            boolean r0 = r6.writeToABFile(r0)     // Catch: java.lang.Exception -> Lb9
            if (r0 == 0) goto L66
            java.lang.String r0 = "recover from c file"
            r6.info(r0)     // Catch: java.lang.Exception -> Lb9
            r6.deleteCFiles()     // Catch: java.lang.Exception -> L64
            goto Lbe
        L64:
            r0 = move-exception
            goto Lbb
        L66:
            r6.writingMode = r3     // Catch: java.lang.Exception -> Lb9
            goto Lb7
        L69:
            r6.clearData()     // Catch: java.lang.Exception -> Lb9
            r6.deleteCFiles()     // Catch: java.lang.Exception -> Lb9
            goto Lb7
        L70:
            int r0 = r6.writingMode     // Catch: java.lang.Exception -> Lb9
            if (r0 == 0) goto Lb7
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> Lb9
            java.lang.String r1 = r6.path     // Catch: java.lang.Exception -> Lb9
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb9
            r2.<init>()     // Catch: java.lang.Exception -> Lb9
            java.lang.String r3 = r6.name     // Catch: java.lang.Exception -> Lb9
            r2.append(r3)     // Catch: java.lang.Exception -> Lb9
            java.lang.String r3 = ".kva"
            r2.append(r3)     // Catch: java.lang.Exception -> Lb9
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Lb9
            r0.<init>(r1, r2)     // Catch: java.lang.Exception -> Lb9
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> Lb9
            java.lang.String r2 = r6.path     // Catch: java.lang.Exception -> Lb9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb9
            r3.<init>()     // Catch: java.lang.Exception -> Lb9
            java.lang.String r5 = r6.name     // Catch: java.lang.Exception -> Lb9
            r3.append(r5)     // Catch: java.lang.Exception -> Lb9
            java.lang.String r5 = ".kvb"
            r3.append(r5)     // Catch: java.lang.Exception -> Lb9
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> Lb9
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> Lb9
            boolean r2 = r0.exists()     // Catch: java.lang.Exception -> Lb9
            if (r2 == 0) goto Lb7
            boolean r2 = r1.exists()     // Catch: java.lang.Exception -> Lb9
            if (r2 == 0) goto Lb7
            r6.tryBlockingIO(r0, r1)     // Catch: java.lang.Exception -> Lb9
        Lb7:
            r3 = r4
            goto Lbe
        Lb9:
            r0 = move-exception
            r3 = r4
        Lbb:
            r6.error(r0)
        Lbe:
            return r3
    }

    private boolean loadWithBlockingIO(java.io.File r7) throws java.io.IOException {
            r6 = this;
            long r0 = r7.length()
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r3 = 0
            if (r2 == 0) goto L5c
            r4 = 536870912(0x20000000, double:2.65249474E-315)
            int r2 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r2 <= 0) goto L13
            goto L5c
        L13:
            int r0 = (int) r0
            int r1 = com.mbridge.msdk.foundation.tools.FastKV.PAGE_SIZE
            int r1 = r6.getNewCapacity(r1, r0)
            com.mbridge.msdk.foundation.tools.j r2 = r6.fastBuffer
            if (r2 == 0) goto L28
            byte[] r2 = r2.a
            int r2 = r2.length
            if (r2 != r1) goto L28
            com.mbridge.msdk.foundation.tools.j r1 = r6.fastBuffer
            r1.b = r3
            goto L32
        L28:
            com.mbridge.msdk.foundation.tools.j r2 = new com.mbridge.msdk.foundation.tools.j
            byte[] r1 = new byte[r1]
            r2.<init>(r1)
            r6.fastBuffer = r2
            r1 = r2
        L32:
            byte[] r2 = r1.a
            com.mbridge.msdk.foundation.tools.al.a(r7, r2, r0)
            int r7 = r1.c()
            long r4 = r1.d()
            int r2 = r7 + 12
            r6.dataEnd = r2
            if (r7 < 0) goto L5c
            r2 = 12
            int r0 = r0 - r2
            if (r7 > r0) goto L5c
            long r0 = r1.b(r2, r7)
            int r7 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r7 != 0) goto L5c
            int r7 = r6.parseData()
            if (r7 != 0) goto L5c
            r6.checksum = r4
            r7 = 1
            return r7
        L5c:
            return r3
    }

    private void mergeInvalids() {
            r5 = this;
            java.util.ArrayList<com.mbridge.msdk.foundation.tools.FastKV$c> r0 = r5.invalids
            int r0 = r0.size()
            int r0 = r0 + (-1)
            java.util.ArrayList<com.mbridge.msdk.foundation.tools.FastKV$c> r1 = r5.invalids
            java.lang.Object r1 = r1.get(r0)
            com.mbridge.msdk.foundation.tools.FastKV$c r1 = (com.mbridge.msdk.foundation.tools.FastKV.c) r1
        L10:
            if (r0 <= 0) goto L2f
            java.util.ArrayList<com.mbridge.msdk.foundation.tools.FastKV$c> r2 = r5.invalids
            int r0 = r0 + (-1)
            java.lang.Object r2 = r2.get(r0)
            com.mbridge.msdk.foundation.tools.FastKV$c r2 = (com.mbridge.msdk.foundation.tools.FastKV.c) r2
            int r3 = r1.a
            int r4 = r2.b
            if (r3 != r4) goto L2d
            int r1 = r1.b
            r2.b = r1
            java.util.ArrayList<com.mbridge.msdk.foundation.tools.FastKV$c> r1 = r5.invalids
            int r3 = r0 + 1
            r1.remove(r3)
        L2d:
            r1 = r2
            goto L10
        L2f:
            return
    }

    private int parseData() {
            r13 = this;
            com.mbridge.msdk.foundation.tools.j r0 = r13.fastBuffer
            r1 = 12
            r0.b = r1
        L6:
            r1 = -1
            int r2 = r0.b     // Catch: java.lang.Exception -> L190
            int r3 = r13.dataEnd     // Catch: java.lang.Exception -> L190
            java.lang.String r4 = "parse dara failed"
            r5 = 0
            if (r2 >= r3) goto L180
            int r7 = r0.b     // Catch: java.lang.Exception -> L190
            byte r2 = r0.a()     // Catch: java.lang.Exception -> L190
            r3 = r2 & 63
            byte r3 = (byte) r3     // Catch: java.lang.Exception -> L190
            r6 = 1
            if (r3 < r6) goto L17a
            r8 = 8
            if (r3 > r8) goto L17a
            byte r8 = r0.a()     // Catch: java.lang.Exception -> L190
            r8 = r8 & 255(0xff, float:3.57E-43)
            r9 = 65535(0xffff, float:9.1834E-41)
            r10 = 5
            if (r2 >= 0) goto L4c
            int r2 = r0.b     // Catch: java.lang.Exception -> L190
            int r2 = r2 + r8
            r0.b = r2     // Catch: java.lang.Exception -> L190
            if (r3 > r10) goto L38
            int[] r2 = com.mbridge.msdk.foundation.tools.FastKV.TYPE_SIZE     // Catch: java.lang.Exception -> L190
            r2 = r2[r3]     // Catch: java.lang.Exception -> L190
            goto L3d
        L38:
            short r2 = r0.b()     // Catch: java.lang.Exception -> L190
            r2 = r2 & r9
        L3d:
            com.mbridge.msdk.foundation.tools.j r3 = r13.fastBuffer     // Catch: java.lang.Exception -> L190
            int r4 = r3.b     // Catch: java.lang.Exception -> L190
            int r4 = r4 + r2
            r3.b = r4     // Catch: java.lang.Exception -> L190
            com.mbridge.msdk.foundation.tools.j r2 = r13.fastBuffer     // Catch: java.lang.Exception -> L190
            int r2 = r2.b     // Catch: java.lang.Exception -> L190
            r13.countInvalid(r7, r2)     // Catch: java.lang.Exception -> L190
            goto L6
        L4c:
            java.lang.String r12 = r0.b(r8)     // Catch: java.lang.Exception -> L190
            int r8 = r0.b     // Catch: java.lang.Exception -> L190
            if (r3 > r10) goto Lb8
            if (r3 == r6) goto La5
            r2 = 2
            if (r3 == r2) goto L95
            r2 = 3
            if (r3 == r2) goto L81
            r2 = 4
            if (r3 == r2) goto L72
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r2 = r13.data     // Catch: java.lang.Exception -> L190
            com.mbridge.msdk.foundation.tools.c$d r3 = new com.mbridge.msdk.foundation.tools.c$d     // Catch: java.lang.Exception -> L190
            long r4 = r0.d()     // Catch: java.lang.Exception -> L190
            double r4 = java.lang.Double.longBitsToDouble(r4)     // Catch: java.lang.Exception -> L190
            r3.<init>(r8, r4)     // Catch: java.lang.Exception -> L190
            r2.put(r12, r3)     // Catch: java.lang.Exception -> L190
            goto L6
        L72:
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r2 = r13.data     // Catch: java.lang.Exception -> L190
            com.mbridge.msdk.foundation.tools.c$g r3 = new com.mbridge.msdk.foundation.tools.c$g     // Catch: java.lang.Exception -> L190
            long r4 = r0.d()     // Catch: java.lang.Exception -> L190
            r3.<init>(r8, r4)     // Catch: java.lang.Exception -> L190
            r2.put(r12, r3)     // Catch: java.lang.Exception -> L190
            goto L6
        L81:
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r2 = r13.data     // Catch: java.lang.Exception -> L190
            com.mbridge.msdk.foundation.tools.c$e r3 = new com.mbridge.msdk.foundation.tools.c$e     // Catch: java.lang.Exception -> L190
            int r4 = r0.c()     // Catch: java.lang.Exception -> L190
            float r4 = java.lang.Float.intBitsToFloat(r4)     // Catch: java.lang.Exception -> L190
            r3.<init>(r8, r4)     // Catch: java.lang.Exception -> L190
            r2.put(r12, r3)     // Catch: java.lang.Exception -> L190
            goto L6
        L95:
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r2 = r13.data     // Catch: java.lang.Exception -> L190
            com.mbridge.msdk.foundation.tools.c$f r3 = new com.mbridge.msdk.foundation.tools.c$f     // Catch: java.lang.Exception -> L190
            int r4 = r0.c()     // Catch: java.lang.Exception -> L190
            r3.<init>(r8, r4)     // Catch: java.lang.Exception -> L190
            r2.put(r12, r3)     // Catch: java.lang.Exception -> L190
            goto L6
        La5:
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r2 = r13.data     // Catch: java.lang.Exception -> L190
            com.mbridge.msdk.foundation.tools.c$c r3 = new com.mbridge.msdk.foundation.tools.c$c     // Catch: java.lang.Exception -> L190
            byte r4 = r0.a()     // Catch: java.lang.Exception -> L190
            if (r4 != r6) goto Lb0
            r5 = r6
        Lb0:
            r3.<init>(r8, r5)     // Catch: java.lang.Exception -> L190
            r2.put(r12, r3)     // Catch: java.lang.Exception -> L190
            goto L6
        Lb8:
            short r10 = r0.b()     // Catch: java.lang.Exception -> L190
            r10 = r10 & r9
            r2 = r2 & 64
            if (r2 == 0) goto Lc3
            r11 = r6
            goto Lc4
        Lc3:
            r11 = r5
        Lc4:
            r13.checkValueSize(r10, r11)     // Catch: java.lang.Exception -> L190
            r2 = 6
            if (r3 == r2) goto L167
            r2 = 7
            if (r3 == r2) goto L141
            if (r11 == 0) goto Le3
            java.lang.String r9 = r0.b(r10)     // Catch: java.lang.Exception -> L190
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r2 = r13.data     // Catch: java.lang.Exception -> L190
            com.mbridge.msdk.foundation.tools.c$h r3 = new com.mbridge.msdk.foundation.tools.c$h     // Catch: java.lang.Exception -> L190
            int r8 = r8 + 2
            r11 = 1
            r6 = r3
            r6.<init>(r7, r8, r9, r10, r11)     // Catch: java.lang.Exception -> L190
            r2.put(r12, r3)     // Catch: java.lang.Exception -> L190
            goto L6
        Le3:
            byte r2 = r0.a()     // Catch: java.lang.Exception -> L190
            r2 = r2 & 255(0xff, float:3.57E-43)
            java.lang.String r3 = r0.b(r2)     // Catch: java.lang.Exception -> L190
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.FastKV$a> r5 = r13.encoderMap     // Catch: java.lang.Exception -> L190
            java.lang.Object r5 = r5.get(r3)     // Catch: java.lang.Exception -> L190
            com.mbridge.msdk.foundation.tools.FastKV$a r5 = (com.mbridge.msdk.foundation.tools.FastKV.a) r5     // Catch: java.lang.Exception -> L190
            int r2 = r2 + 1
            int r2 = r10 - r2
            if (r2 < 0) goto L13b
            if (r5 == 0) goto L11b
            byte[] r3 = r0.a     // Catch: java.lang.Exception -> L116
            int r4 = r0.b     // Catch: java.lang.Exception -> L116
            java.lang.Object r9 = r5.a(r3, r4, r2)     // Catch: java.lang.Exception -> L116
            if (r9 == 0) goto L134
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r3 = r13.data     // Catch: java.lang.Exception -> L116
            com.mbridge.msdk.foundation.tools.c$h r4 = new com.mbridge.msdk.foundation.tools.c$h     // Catch: java.lang.Exception -> L116
            int r8 = r8 + 2
            r11 = 0
            r6 = r4
            r6.<init>(r7, r8, r9, r10, r11)     // Catch: java.lang.Exception -> L116
            r3.put(r12, r4)     // Catch: java.lang.Exception -> L116
            goto L134
        L116:
            r3 = move-exception
            r13.error(r3)     // Catch: java.lang.Exception -> L190
            goto L134
        L11b:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L190
            r4.<init>()     // Catch: java.lang.Exception -> L190
            java.lang.String r5 = "object with tag: "
            r4.append(r5)     // Catch: java.lang.Exception -> L190
            r4.append(r3)     // Catch: java.lang.Exception -> L190
            java.lang.String r3 = " without encoder"
            r4.append(r3)     // Catch: java.lang.Exception -> L190
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Exception -> L190
            r13.error(r3)     // Catch: java.lang.Exception -> L190
        L134:
            int r3 = r0.b     // Catch: java.lang.Exception -> L190
            int r3 = r3 + r2
            r0.b = r3     // Catch: java.lang.Exception -> L190
            goto L6
        L13b:
            java.lang.Exception r0 = new java.lang.Exception     // Catch: java.lang.Exception -> L190
            r0.<init>(r4)     // Catch: java.lang.Exception -> L190
            throw r0     // Catch: java.lang.Exception -> L190
        L141:
            if (r11 == 0) goto L149
            java.lang.String r2 = r0.b(r10)     // Catch: java.lang.Exception -> L190
        L147:
            r9 = r2
            goto L158
        L149:
            byte[] r2 = new byte[r10]     // Catch: java.lang.Exception -> L190
            byte[] r3 = r0.a     // Catch: java.lang.Exception -> L190
            int r4 = r0.b     // Catch: java.lang.Exception -> L190
            java.lang.System.arraycopy(r3, r4, r2, r5, r10)     // Catch: java.lang.Exception -> L190
            int r3 = r0.b     // Catch: java.lang.Exception -> L190
            int r3 = r3 + r10
            r0.b = r3     // Catch: java.lang.Exception -> L190
            goto L147
        L158:
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r2 = r13.data     // Catch: java.lang.Exception -> L190
            com.mbridge.msdk.foundation.tools.c$a r3 = new com.mbridge.msdk.foundation.tools.c$a     // Catch: java.lang.Exception -> L190
            int r8 = r8 + 2
            r6 = r3
            r6.<init>(r7, r8, r9, r10, r11)     // Catch: java.lang.Exception -> L190
            r2.put(r12, r3)     // Catch: java.lang.Exception -> L190
            goto L6
        L167:
            java.lang.String r9 = r0.b(r10)     // Catch: java.lang.Exception -> L190
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r2 = r13.data     // Catch: java.lang.Exception -> L190
            com.mbridge.msdk.foundation.tools.c$i r3 = new com.mbridge.msdk.foundation.tools.c$i     // Catch: java.lang.Exception -> L190
            int r8 = r8 + 2
            r6 = r3
            r6.<init>(r7, r8, r9, r10, r11)     // Catch: java.lang.Exception -> L190
            r2.put(r12, r3)     // Catch: java.lang.Exception -> L190
            goto L6
        L17a:
            java.lang.Exception r0 = new java.lang.Exception     // Catch: java.lang.Exception -> L190
            r0.<init>(r4)     // Catch: java.lang.Exception -> L190
            throw r0     // Catch: java.lang.Exception -> L190
        L180:
            int r0 = r0.b
            int r2 = r13.dataEnd
            if (r0 == r2) goto L18f
            java.lang.Exception r0 = new java.lang.Exception
            r0.<init>(r4)
            r13.warning(r0)
            return r1
        L18f:
            return r5
        L190:
            r0 = move-exception
            r13.warning(r0)
            return r1
    }

    private void preparePutBytes() {
            r2 = this;
            int r0 = r2.updateSize
            r2.ensureSize(r0)
            int r0 = r2.dataEnd
            r2.updateStart = r0
            int r1 = r2.updateSize
            int r1 = r1 + r0
            r2.dataEnd = r1
            com.mbridge.msdk.foundation.tools.j r1 = r2.fastBuffer
            r1.b = r0
            r0 = 1
            r2.sizeChanged = r0
            return
    }

    private void putKey(java.lang.String r4, int r5) {
            r3 = this;
            com.mbridge.msdk.foundation.tools.j r0 = r3.fastBuffer
            byte r1 = (byte) r5
            r0.a(r1)
            int r0 = r4.length()
            if (r5 != r0) goto L20
            r0 = 0
            com.mbridge.msdk.foundation.tools.j r1 = r3.fastBuffer
            byte[] r1 = r1.a
            com.mbridge.msdk.foundation.tools.j r2 = r3.fastBuffer
            int r2 = r2.b
            r4.getBytes(r0, r5, r1, r2)
            com.mbridge.msdk.foundation.tools.j r4 = r3.fastBuffer
            int r0 = r4.b
            int r0 = r0 + r5
            r4.b = r0
            goto L25
        L20:
            com.mbridge.msdk.foundation.tools.j r5 = r3.fastBuffer
            r5.a(r4)
        L25:
            return
    }

    private void putStringValue(java.lang.String r4, int r5) {
            r3 = this;
            com.mbridge.msdk.foundation.tools.j r0 = r3.fastBuffer
            short r1 = (short) r5
            r0.a(r1)
            int r0 = r4.length()
            if (r5 != r0) goto L19
            r0 = 0
            com.mbridge.msdk.foundation.tools.j r1 = r3.fastBuffer
            byte[] r1 = r1.a
            com.mbridge.msdk.foundation.tools.j r2 = r3.fastBuffer
            int r2 = r2.b
            r4.getBytes(r0, r5, r1, r2)
            goto L1e
        L19:
            com.mbridge.msdk.foundation.tools.j r5 = r3.fastBuffer
            r5.a(r4)
        L1e:
            return
    }

    private void remove(byte r8, int r9, int r10) {
            r7 = this;
            r7.countInvalid(r9, r10)
            r8 = r8 | (-128(0xffffffffffffff80, float:NaN))
            byte r8 = (byte) r8
            com.mbridge.msdk.foundation.tools.j r10 = r7.fastBuffer
            byte[] r10 = r10.a
            r10 = r10[r9]
            r0 = r9 & 7
            int r0 = r0 << 3
            long r1 = r7.checksum
            r10 = r10 ^ r8
            long r3 = (long) r10
            r5 = 255(0xff, double:1.26E-321)
            long r3 = r3 & r5
            long r3 = r3 << r0
            long r0 = r1 ^ r3
            r7.checksum = r0
            com.mbridge.msdk.foundation.tools.j r10 = r7.fastBuffer
            byte[] r10 = r10.a
            r10[r9] = r8
            r7.removeStart = r9
            return
    }

    private void resetBuffer(java.nio.MappedByteBuffer r8) throws java.io.IOException {
            r7 = this;
            int r0 = r8.capacity()
            int r1 = com.mbridge.msdk.foundation.tools.FastKV.PAGE_SIZE
            if (r0 == r1) goto L32
            java.nio.MappedByteBuffer r0 = r7.aBuffer
            if (r8 != r0) goto Lf
            java.nio.channels.FileChannel r0 = r7.aChannel
            goto L11
        Lf:
            java.nio.channels.FileChannel r0 = r7.bChannel
        L11:
            r1 = r0
            int r0 = com.mbridge.msdk.foundation.tools.FastKV.PAGE_SIZE
            long r2 = (long) r0
            r1.truncate(r2)
            java.nio.channels.FileChannel$MapMode r2 = java.nio.channels.FileChannel.MapMode.READ_WRITE
            r3 = 0
            int r0 = com.mbridge.msdk.foundation.tools.FastKV.PAGE_SIZE
            long r5 = (long) r0
            java.nio.MappedByteBuffer r0 = r1.map(r2, r3, r5)
            java.nio.ByteOrder r1 = java.nio.ByteOrder.LITTLE_ENDIAN
            r0.order(r1)
            java.nio.MappedByteBuffer r1 = r7.aBuffer
            if (r8 != r1) goto L2f
            r7.aBuffer = r0
            goto L31
        L2f:
            r7.bBuffer = r0
        L31:
            r8 = r0
        L32:
            r0 = 0
            r8.putInt(r0, r0)
            r0 = 4
            r1 = 0
            r8.putLong(r0, r1)
            return
    }

    private void resetData() {
            r3 = this;
            int r0 = r3.writingMode
            if (r0 != 0) goto L12
            java.nio.MappedByteBuffer r0 = r3.aBuffer     // Catch: java.io.IOException -> Lf
            r3.resetBuffer(r0)     // Catch: java.io.IOException -> Lf
            java.nio.MappedByteBuffer r0 = r3.bBuffer     // Catch: java.io.IOException -> Lf
            r3.resetBuffer(r0)     // Catch: java.io.IOException -> Lf
            goto L12
        Lf:
            r3.toBlockingMode()
        L12:
            r3.clearData()
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r3.path
            r1.append(r2)
            java.lang.String r2 = r3.name
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            com.mbridge.msdk.foundation.tools.al.c(r0)
            return
    }

    private int saveArray(java.lang.String r5, byte[] r6, byte r7) {
            r4 = this;
            r0 = 0
            r4.tempExternalName = r0
            int r0 = r6.length
            r1 = 2048(0x800, float:2.87E-42)
            if (r0 >= r1) goto Ld
            int r5 = r4.wrapArray(r5, r6, r7)
            return r5
        Ld:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "large value, key: "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r1 = ", size: "
            r0.append(r1)
            int r1 = r6.length
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r4.info(r0)
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.al.a()
            java.io.File r1 = new java.io.File
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r4.path
            r2.append(r3)
            java.lang.String r3 = r4.name
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2, r0)
            boolean r6 = com.mbridge.msdk.foundation.tools.al.a(r1, r6)
            r1 = 0
            if (r6 == 0) goto L5e
            r4.tempExternalName = r0
            r6 = 32
            byte[] r2 = new byte[r6]
            r0.getBytes(r1, r6, r2, r1)
            r6 = r7 | 64
            byte r6 = (byte) r6
            int r5 = r4.wrapArray(r5, r2, r6)
            return r5
        L5e:
            java.lang.String r5 = "save large value failed"
            r4.error(r5)
            return r1
    }

    private long shiftCheckSum(long r3, int r5) {
            r2 = this;
            r5 = r5 & 7
            int r5 = r5 << 3
            long r0 = r3 << r5
            int r5 = 64 - r5
            long r3 = r3 >>> r5
            long r3 = r3 | r0
            return r3
    }

    private void syncABBuffer(java.nio.MappedByteBuffer r4) {
            r3 = this;
            boolean r0 = r3.sizeChanged
            if (r0 == 0) goto L10
            java.nio.MappedByteBuffer r0 = r3.aBuffer
            if (r4 == r0) goto L10
            r0 = 0
            int r1 = r3.dataEnd
            int r1 = r1 + (-12)
            r4.putInt(r0, r1)
        L10:
            r0 = 4
            long r1 = r3.checksum
            r4.putLong(r0, r1)
            int r0 = r3.removeStart
            if (r0 == 0) goto L25
            com.mbridge.msdk.foundation.tools.j r1 = r3.fastBuffer
            byte[] r1 = r1.a
            int r2 = r3.removeStart
            r1 = r1[r2]
            r4.put(r0, r1)
        L25:
            int r0 = r3.updateSize
            if (r0 == 0) goto L39
            int r0 = r3.updateStart
            r4.position(r0)
            com.mbridge.msdk.foundation.tools.j r0 = r3.fastBuffer
            byte[] r0 = r0.a
            int r1 = r3.updateStart
            int r2 = r3.updateSize
            r4.put(r0, r1, r2)
        L39:
            return
    }

    private void toBlockingMode() {
            r1 = this;
            r0 = 1
            r1.writingMode = r0
            java.nio.channels.FileChannel r0 = r1.aChannel
            com.mbridge.msdk.foundation.tools.al.a(r0)
            java.nio.channels.FileChannel r0 = r1.bChannel
            com.mbridge.msdk.foundation.tools.al.a(r0)
            r0 = 0
            r1.aChannel = r0
            r1.bChannel = r0
            r1.aBuffer = r0
            r1.bBuffer = r0
            return
    }

    private void truncate(int r10) {
            r9 = this;
            int r0 = com.mbridge.msdk.foundation.tools.FastKV.PAGE_SIZE
            int r10 = r10 + r0
            int r10 = r9.getNewCapacity(r0, r10)
            com.mbridge.msdk.foundation.tools.j r0 = r9.fastBuffer
            byte[] r0 = r0.a
            int r0 = r0.length
            if (r10 < r0) goto Lf
            return
        Lf:
            byte[] r0 = new byte[r10]
            com.mbridge.msdk.foundation.tools.j r1 = r9.fastBuffer
            byte[] r1 = r1.a
            int r2 = r9.dataEnd
            r3 = 0
            java.lang.System.arraycopy(r1, r3, r0, r3, r2)
            com.mbridge.msdk.foundation.tools.j r1 = r9.fastBuffer
            r1.a = r0
            int r0 = r9.writingMode
            if (r0 != 0) goto L61
            java.nio.channels.FileChannel r0 = r9.aChannel     // Catch: java.io.IOException -> L53
            long r7 = (long) r10     // Catch: java.io.IOException -> L53
            r0.truncate(r7)     // Catch: java.io.IOException -> L53
            java.nio.channels.FileChannel r1 = r9.aChannel     // Catch: java.io.IOException -> L53
            java.nio.channels.FileChannel$MapMode r2 = java.nio.channels.FileChannel.MapMode.READ_WRITE     // Catch: java.io.IOException -> L53
            r3 = 0
            r5 = r7
            java.nio.MappedByteBuffer r10 = r1.map(r2, r3, r5)     // Catch: java.io.IOException -> L53
            r9.aBuffer = r10     // Catch: java.io.IOException -> L53
            java.nio.ByteOrder r0 = java.nio.ByteOrder.LITTLE_ENDIAN     // Catch: java.io.IOException -> L53
            r10.order(r0)     // Catch: java.io.IOException -> L53
            java.nio.channels.FileChannel r10 = r9.bChannel     // Catch: java.io.IOException -> L53
            r10.truncate(r7)     // Catch: java.io.IOException -> L53
            java.nio.channels.FileChannel r1 = r9.bChannel     // Catch: java.io.IOException -> L53
            java.nio.channels.FileChannel$MapMode r2 = java.nio.channels.FileChannel.MapMode.READ_WRITE     // Catch: java.io.IOException -> L53
            r3 = 0
            r5 = r7
            java.nio.MappedByteBuffer r10 = r1.map(r2, r3, r5)     // Catch: java.io.IOException -> L53
            r9.bBuffer = r10     // Catch: java.io.IOException -> L53
            java.nio.ByteOrder r0 = java.nio.ByteOrder.LITTLE_ENDIAN     // Catch: java.io.IOException -> L53
            r10.order(r0)     // Catch: java.io.IOException -> L53
            goto L61
        L53:
            r10 = move-exception
            java.lang.Exception r0 = new java.lang.Exception
            java.lang.String r1 = "map failed"
            r0.<init>(r1, r10)
            r9.error(r0)
            r9.toBlockingMode()
        L61:
            java.lang.String r10 = "truncate finish"
            r9.info(r10)
            return
    }

    private void tryBlockingIO(java.io.File r1, java.io.File r2) {
            r0 = this;
            boolean r1 = r0.loadWithBlockingIO(r1)     // Catch: java.io.IOException -> L7
            if (r1 == 0) goto Lb
            return
        L7:
            r1 = move-exception
            r0.warning(r1)
        Lb:
            r0.clearData()
            boolean r1 = r0.loadWithBlockingIO(r2)     // Catch: java.io.IOException -> L15
            if (r1 == 0) goto L19
            return
        L15:
            r1 = move-exception
            r0.warning(r1)
        L19:
            r0.clearData()
            return
    }

    private void updateBoolean(byte r5, int r6) {
            r4 = this;
            long r0 = r4.checksum
            r2 = 1
            long r2 = r4.shiftCheckSum(r2, r6)
            long r0 = r0 ^ r2
            r4.checksum = r0
            int r2 = r4.writingMode
            r3 = 4
            if (r2 != 0) goto L27
            java.nio.MappedByteBuffer r2 = r4.aBuffer
            r2.putLong(r3, r0)
            java.nio.MappedByteBuffer r0 = r4.aBuffer
            r0.put(r6, r5)
            java.nio.MappedByteBuffer r0 = r4.bBuffer
            long r1 = r4.checksum
            r0.putLong(r3, r1)
            java.nio.MappedByteBuffer r0 = r4.bBuffer
            r0.put(r6, r5)
            goto L2c
        L27:
            com.mbridge.msdk.foundation.tools.j r2 = r4.fastBuffer
            r2.a(r3, r0)
        L2c:
            com.mbridge.msdk.foundation.tools.j r0 = r4.fastBuffer
            byte[] r0 = r0.a
            r0[r6] = r5
            return
    }

    private void updateBytes(int r7, byte[] r8) {
            r6 = this;
            int r0 = r8.length
            long r1 = r6.checksum
            com.mbridge.msdk.foundation.tools.j r3 = r6.fastBuffer
            long r3 = r3.b(r7, r0)
            long r1 = r1 ^ r3
            r6.checksum = r1
            com.mbridge.msdk.foundation.tools.j r1 = r6.fastBuffer
            r1.b = r7
            com.mbridge.msdk.foundation.tools.j r1 = r6.fastBuffer
            r1.a(r8)
            long r1 = r6.checksum
            com.mbridge.msdk.foundation.tools.j r3 = r6.fastBuffer
            long r3 = r3.b(r7, r0)
            long r0 = r1 ^ r3
            r6.checksum = r0
            int r2 = r6.writingMode
            r3 = 4
            if (r2 != 0) goto L59
            java.nio.MappedByteBuffer r0 = r6.aBuffer
            r1 = -1
            r2 = 0
            r0.putInt(r2, r1)
            java.nio.MappedByteBuffer r0 = r6.aBuffer
            long r4 = r6.checksum
            r0.putLong(r3, r4)
            java.nio.MappedByteBuffer r0 = r6.aBuffer
            r0.position(r7)
            java.nio.MappedByteBuffer r0 = r6.aBuffer
            r0.put(r8)
            java.nio.MappedByteBuffer r0 = r6.aBuffer
            int r1 = r6.dataEnd
            int r1 = r1 + (-12)
            r0.putInt(r2, r1)
            java.nio.MappedByteBuffer r0 = r6.bBuffer
            long r1 = r6.checksum
            r0.putLong(r3, r1)
            java.nio.MappedByteBuffer r0 = r6.bBuffer
            r0.position(r7)
            java.nio.MappedByteBuffer r7 = r6.bBuffer
            r7.put(r8)
            goto L5e
        L59:
            com.mbridge.msdk.foundation.tools.j r7 = r6.fastBuffer
            r7.a(r3, r0)
        L5e:
            return
    }

    private void updateChange() {
            r5 = this;
            long r0 = r5.checksum
            com.mbridge.msdk.foundation.tools.j r2 = r5.fastBuffer
            int r3 = r5.updateStart
            int r4 = r5.updateSize
            long r2 = r2.b(r3, r4)
            long r0 = r0 ^ r2
            r5.checksum = r0
            int r0 = r5.writingMode
            r1 = 0
            if (r0 != 0) goto L2e
            java.nio.MappedByteBuffer r0 = r5.aBuffer
            r2 = -1
            r0.putInt(r1, r2)
            java.nio.MappedByteBuffer r0 = r5.aBuffer
            r5.syncABBuffer(r0)
            java.nio.MappedByteBuffer r0 = r5.aBuffer
            int r2 = r5.dataEnd
            int r2 = r2 + (-12)
            r0.putInt(r1, r2)
            java.nio.MappedByteBuffer r0 = r5.bBuffer
            r5.syncABBuffer(r0)
            goto L43
        L2e:
            boolean r0 = r5.sizeChanged
            if (r0 == 0) goto L3b
            com.mbridge.msdk.foundation.tools.j r0 = r5.fastBuffer
            int r2 = r5.dataEnd
            int r2 = r2 + (-12)
            r0.a(r1, r2)
        L3b:
            com.mbridge.msdk.foundation.tools.j r0 = r5.fastBuffer
            r2 = 4
            long r3 = r5.checksum
            r0.a(r2, r3)
        L43:
            r5.sizeChanged = r1
            r5.removeStart = r1
            r5.updateSize = r1
            return
    }

    private void updateInt32(int r5, long r6, int r8) {
            r4 = this;
            long r0 = r4.checksum
            long r6 = r4.shiftCheckSum(r6, r8)
            long r6 = r6 ^ r0
            r4.checksum = r6
            int r0 = r4.writingMode
            r1 = 4
            if (r0 != 0) goto L25
            java.nio.MappedByteBuffer r0 = r4.aBuffer
            r0.putLong(r1, r6)
            java.nio.MappedByteBuffer r6 = r4.aBuffer
            r6.putInt(r8, r5)
            java.nio.MappedByteBuffer r6 = r4.bBuffer
            long r2 = r4.checksum
            r6.putLong(r1, r2)
            java.nio.MappedByteBuffer r6 = r4.bBuffer
            r6.putInt(r8, r5)
            goto L2a
        L25:
            com.mbridge.msdk.foundation.tools.j r0 = r4.fastBuffer
            r0.a(r1, r6)
        L2a:
            com.mbridge.msdk.foundation.tools.j r6 = r4.fastBuffer
            r6.a(r8, r5)
            return
    }

    private void updateInt64(long r5, long r7, int r9) {
            r4 = this;
            long r0 = r4.checksum
            long r7 = r4.shiftCheckSum(r7, r9)
            long r7 = r7 ^ r0
            r4.checksum = r7
            int r0 = r4.writingMode
            r1 = 4
            if (r0 != 0) goto L25
            java.nio.MappedByteBuffer r0 = r4.aBuffer
            r0.putLong(r1, r7)
            java.nio.MappedByteBuffer r7 = r4.aBuffer
            r7.putLong(r9, r5)
            java.nio.MappedByteBuffer r7 = r4.bBuffer
            long r2 = r4.checksum
            r7.putLong(r1, r2)
            java.nio.MappedByteBuffer r7 = r4.bBuffer
            r7.putLong(r9, r5)
            goto L2a
        L25:
            com.mbridge.msdk.foundation.tools.j r0 = r4.fastBuffer
            r0.a(r1, r7)
        L2a:
            com.mbridge.msdk.foundation.tools.j r7 = r4.fastBuffer
            r7.a(r9, r5)
            return
    }

    private void updateObject(java.lang.String r7, java.lang.Object r8, byte[] r9, com.mbridge.msdk.foundation.tools.c.j r10) {
            r6 = this;
            byte r0 = r10.a()
            int r7 = r6.saveArray(r7, r9, r0)
            if (r7 == 0) goto L67
            boolean r0 = r10.e
            r1 = 0
            if (r0 == 0) goto L14
            java.lang.Object r0 = r10.b
            java.lang.String r0 = (java.lang.String) r0
            goto L15
        L14:
            r0 = r1
        L15:
            byte r2 = r10.a()
            int r3 = r10.c
            int r4 = r10.a
            int r5 = r10.d
            int r4 = r4 + r5
            r6.remove(r2, r3, r4)
            java.lang.String r2 = r6.tempExternalName
            if (r2 == 0) goto L29
            r2 = 1
            goto L2a
        L29:
            r2 = 0
        L2a:
            int r3 = r6.updateStart
            r10.c = r3
            r10.a = r7
            r10.e = r2
            if (r2 == 0) goto L3f
            java.lang.String r7 = r6.tempExternalName
            r10.b = r7
            r7 = 32
            r10.d = r7
            r6.tempExternalName = r1
            goto L44
        L3f:
            r10.b = r8
            int r7 = r9.length
            r10.d = r7
        L44:
            r6.updateChange()
            r6.checkGC()
            if (r0 == 0) goto L67
            java.io.File r7 = new java.io.File
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = r6.path
            r8.append(r9)
            java.lang.String r9 = r6.name
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            r7.<init>(r8, r0)
            com.mbridge.msdk.foundation.tools.al.c(r7)
        L67:
            return
    }

    private void updateOffset(int r8, int[] r9) {
            r7 = this;
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r0 = r7.data
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L53
            java.lang.Object r1 = r0.next()
            com.mbridge.msdk.foundation.tools.c$b r1 = (com.mbridge.msdk.foundation.tools.c.b) r1
            int r2 = r1.a
            if (r2 <= r8) goto La
            int r2 = r1.a
            r3 = 0
            int r4 = r9.length
            int r4 = r4 >> 1
            int r4 = r4 + (-1)
        L22:
            if (r3 > r4) goto L39
            int r5 = r3 + r4
            int r5 = r5 >>> 1
            int r6 = r5 << 1
            r6 = r9[r6]
            if (r6 >= r2) goto L32
            int r5 = r5 + 1
            r3 = r5
            goto L22
        L32:
            if (r6 <= r2) goto L38
            int r5 = r5 + (-1)
            r4 = r5
            goto L22
        L38:
            r4 = r5
        L39:
            int r2 = r4 << 1
            int r2 = r2 + 1
            r2 = r9[r2]
            int r3 = r1.a
            int r3 = r3 - r2
            r1.a = r3
            byte r3 = r1.a()
            r4 = 6
            if (r3 < r4) goto La
            com.mbridge.msdk.foundation.tools.c$j r1 = (com.mbridge.msdk.foundation.tools.c.j) r1
            int r3 = r1.c
            int r3 = r3 - r2
            r1.c = r3
            goto La
        L53:
            return
    }

    private void warning(java.lang.Exception r3) {
            r2 = this;
            com.mbridge.msdk.foundation.tools.FastKV$b r0 = r2.logger
            if (r0 == 0) goto L9
            java.lang.String r1 = r2.name
            r0.a(r1, r3)
        L9:
            return
    }

    private int wrapArray(java.lang.String r2, byte[] r3, byte r4) {
            r1 = this;
            int r0 = r3.length
            int r0 = r0 + 2
            r1.wrapHeader(r2, r4, r0)
            com.mbridge.msdk.foundation.tools.j r2 = r1.fastBuffer
            int r4 = r3.length
            short r4 = (short) r4
            r2.a(r4)
            com.mbridge.msdk.foundation.tools.j r2 = r1.fastBuffer
            int r2 = r2.b
            com.mbridge.msdk.foundation.tools.j r4 = r1.fastBuffer
            r4.a(r3)
            return r2
    }

    private void wrapHeader(java.lang.String r2, byte r3) {
            r1 = this;
            int[] r0 = com.mbridge.msdk.foundation.tools.FastKV.TYPE_SIZE
            r0 = r0[r3]
            r1.wrapHeader(r2, r3, r0)
            return
    }

    private void wrapHeader(java.lang.String r3, byte r4, int r5) {
            r2 = this;
            int r0 = com.mbridge.msdk.foundation.tools.j.b(r3)
            r2.checkKeySize(r0)
            int r1 = r0 + 2
            int r1 = r1 + r5
            r2.updateSize = r1
            r2.preparePutBytes()
            com.mbridge.msdk.foundation.tools.j r5 = r2.fastBuffer
            r5.a(r4)
            r2.putKey(r3, r0)
            return
    }

    private boolean writeToABFile(com.mbridge.msdk.foundation.tools.j r13) {
            r12 = this;
            java.lang.String r0 = "rw"
            byte[] r1 = r13.a
            int r1 = r1.length
            java.io.File r2 = new java.io.File
            java.lang.String r3 = r12.path
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = r12.name
            r4.append(r5)
            java.lang.String r5 = ".kva"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r2.<init>(r3, r4)
            java.io.File r3 = new java.io.File
            java.lang.String r4 = r12.path
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = r12.name
            r5.append(r6)
            java.lang.String r6 = ".kvb"
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r3.<init>(r4, r5)
            r4 = 0
            boolean r5 = com.mbridge.msdk.foundation.tools.al.a(r2)     // Catch: java.lang.Exception -> La3
            if (r5 == 0) goto L9b
            boolean r5 = com.mbridge.msdk.foundation.tools.al.a(r3)     // Catch: java.lang.Exception -> La3
            if (r5 == 0) goto L9b
            java.io.RandomAccessFile r5 = new java.io.RandomAccessFile     // Catch: java.lang.Exception -> La3
            r5.<init>(r2, r0)     // Catch: java.lang.Exception -> La3
            java.io.RandomAccessFile r2 = new java.io.RandomAccessFile     // Catch: java.lang.Exception -> La3
            r2.<init>(r3, r0)     // Catch: java.lang.Exception -> La3
            long r0 = (long) r1     // Catch: java.lang.Exception -> La3
            r5.setLength(r0)     // Catch: java.lang.Exception -> La3
            r2.setLength(r0)     // Catch: java.lang.Exception -> La3
            java.nio.channels.FileChannel r3 = r5.getChannel()     // Catch: java.lang.Exception -> La3
            r12.aChannel = r3     // Catch: java.lang.Exception -> La3
            java.nio.channels.FileChannel r2 = r2.getChannel()     // Catch: java.lang.Exception -> La3
            r12.bChannel = r2     // Catch: java.lang.Exception -> La3
            java.nio.channels.FileChannel r6 = r12.aChannel     // Catch: java.lang.Exception -> La3
            java.nio.channels.FileChannel$MapMode r7 = java.nio.channels.FileChannel.MapMode.READ_WRITE     // Catch: java.lang.Exception -> La3
            r8 = 0
            r10 = r0
            java.nio.MappedByteBuffer r2 = r6.map(r7, r8, r10)     // Catch: java.lang.Exception -> La3
            r12.aBuffer = r2     // Catch: java.lang.Exception -> La3
            java.nio.ByteOrder r3 = java.nio.ByteOrder.LITTLE_ENDIAN     // Catch: java.lang.Exception -> La3
            r2.order(r3)     // Catch: java.lang.Exception -> La3
            java.nio.channels.FileChannel r6 = r12.bChannel     // Catch: java.lang.Exception -> La3
            java.nio.channels.FileChannel$MapMode r7 = java.nio.channels.FileChannel.MapMode.READ_WRITE     // Catch: java.lang.Exception -> La3
            r8 = 0
            r10 = r0
            java.nio.MappedByteBuffer r0 = r6.map(r7, r8, r10)     // Catch: java.lang.Exception -> La3
            r12.bBuffer = r0     // Catch: java.lang.Exception -> La3
            java.nio.ByteOrder r1 = java.nio.ByteOrder.LITTLE_ENDIAN     // Catch: java.lang.Exception -> La3
            r0.order(r1)     // Catch: java.lang.Exception -> La3
            java.nio.MappedByteBuffer r0 = r12.aBuffer     // Catch: java.lang.Exception -> La3
            byte[] r1 = r13.a     // Catch: java.lang.Exception -> La3
            int r2 = r12.dataEnd     // Catch: java.lang.Exception -> La3
            r0.put(r1, r4, r2)     // Catch: java.lang.Exception -> La3
            java.nio.MappedByteBuffer r0 = r12.bBuffer     // Catch: java.lang.Exception -> La3
            byte[] r13 = r13.a     // Catch: java.lang.Exception -> La3
            int r1 = r12.dataEnd     // Catch: java.lang.Exception -> La3
            r0.put(r13, r4, r1)     // Catch: java.lang.Exception -> La3
            r13 = 1
            return r13
        L9b:
            java.lang.Exception r13 = new java.lang.Exception     // Catch: java.lang.Exception -> La3
            java.lang.String r0 = "open file failed"
            r13.<init>(r0)     // Catch: java.lang.Exception -> La3
            throw r13     // Catch: java.lang.Exception -> La3
        La3:
            r13 = move-exception
            r12.error(r13)
            return r4
    }

    private synchronized boolean writeToCFile() {
            r6 = this;
            monitor-enter(r6)
            r0 = 0
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r2 = r6.path     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r3.<init>()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r4 = r6.name     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r3.append(r4)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r4 = ".tmp"
            r3.append(r4)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            boolean r2 = com.mbridge.msdk.foundation.tools.al.a(r1)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            if (r2 == 0) goto L7b
            java.io.RandomAccessFile r2 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r3 = "rw"
            r2.<init>(r1, r3)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            int r3 = r6.dataEnd     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            long r3 = (long) r3     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r2.setLength(r3)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            com.mbridge.msdk.foundation.tools.j r3 = r6.fastBuffer     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            byte[] r3 = r3.a     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            int r4 = r6.dataEnd     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r2.write(r3, r0, r4)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r2.close()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r3 = r6.path     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r4.<init>()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r5 = r6.name     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r4.append(r5)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r5 = ".kvc"
            r4.append(r5)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r2.<init>(r3, r4)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            boolean r3 = r2.exists()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            if (r3 == 0) goto L61
            boolean r3 = r2.delete()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            if (r3 == 0) goto L7b
        L61:
            boolean r1 = r1.renameTo(r2)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            if (r1 == 0) goto L6a
            r0 = 1
            monitor-exit(r6)
            return r0
        L6a:
            java.lang.Exception r1 = new java.lang.Exception     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r2 = "rename failed"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r6.warning(r1)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            goto L7b
        L75:
            r0 = move-exception
            goto L7d
        L77:
            r1 = move-exception
            r6.error(r1)     // Catch: java.lang.Throwable -> L75
        L7b:
            monitor-exit(r6)
            return r0
        L7d:
            monitor-exit(r6)
            throw r0
    }

    public synchronized void clear() {
            r1 = this;
            monitor-enter(r1)
            r1.resetData()     // Catch: java.lang.Throwable -> Ld
            int r0 = r1.writingMode     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto Lb
            r1.deleteCFiles()     // Catch: java.lang.Throwable -> Ld
        Lb:
            monitor-exit(r1)
            return
        Ld:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized boolean commit() {
            r1 = this;
            monitor-enter(r1)
            r0 = 1
            r1.autoCommit = r0     // Catch: java.lang.Throwable -> La
            boolean r0 = r1.commitToCFile()     // Catch: java.lang.Throwable -> La
            monitor-exit(r1)
            return r0
        La:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized boolean contains(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r0 = r1.data     // Catch: java.lang.Throwable -> L9
            boolean r2 = r0.containsKey(r2)     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)
            return r2
        L9:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized void disableAutoCommit() {
            r1 = this;
            monitor-enter(r1)
            r0 = 0
            r1.autoCommit = r0     // Catch: java.lang.Throwable -> L6
            monitor-exit(r1)
            return
        L6:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized void force() {
            r1 = this;
            monitor-enter(r1)
            int r0 = r1.writingMode     // Catch: java.lang.Throwable -> L11
            if (r0 != 0) goto Lf
            java.nio.MappedByteBuffer r0 = r1.aBuffer     // Catch: java.lang.Throwable -> L11
            r0.force()     // Catch: java.lang.Throwable -> L11
            java.nio.MappedByteBuffer r0 = r1.bBuffer     // Catch: java.lang.Throwable -> L11
            r0.force()     // Catch: java.lang.Throwable -> L11
        Lf:
            monitor-exit(r1)
            return
        L11:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    void gc(int r18) {
            r17 = this;
            r0 = r17
            java.util.ArrayList<com.mbridge.msdk.foundation.tools.FastKV$c> r1 = r0.invalids
            java.util.Collections.sort(r1)
            r17.mergeInvalids()
            java.util.ArrayList<com.mbridge.msdk.foundation.tools.FastKV$c> r1 = r0.invalids
            r2 = 0
            java.lang.Object r1 = r1.get(r2)
            com.mbridge.msdk.foundation.tools.FastKV$c r1 = (com.mbridge.msdk.foundation.tools.FastKV.c) r1
            int r3 = r1.a
            int r4 = r0.dataEnd
            int r5 = r0.invalidBytes
            int r5 = r4 - r5
            int r6 = r5 + (-12)
            int r7 = r5 - r3
            int r4 = r4 - r3
            int r8 = r4 + r7
            r9 = 1
            if (r6 >= r8) goto L27
            r8 = r9
            goto L28
        L27:
            r8 = r2
        L28:
            if (r8 != 0) goto L35
            long r10 = r0.checksum
            com.mbridge.msdk.foundation.tools.j r12 = r0.fastBuffer
            long r12 = r12.b(r3, r4)
            long r10 = r10 ^ r12
            r0.checksum = r10
        L35:
            java.util.ArrayList<com.mbridge.msdk.foundation.tools.FastKV$c> r4 = r0.invalids
            int r4 = r4.size()
            int r10 = r0.dataEnd
            java.util.ArrayList<com.mbridge.msdk.foundation.tools.FastKV$c> r11 = r0.invalids
            int r12 = r4 + (-1)
            java.lang.Object r11 = r11.get(r12)
            com.mbridge.msdk.foundation.tools.FastKV$c r11 = (com.mbridge.msdk.foundation.tools.FastKV.c) r11
            int r11 = r11.b
            int r10 = r10 - r11
            if (r10 <= 0) goto L4e
            r11 = r4
            goto L4f
        L4e:
            r11 = r12
        L4f:
            int r11 = r11 << r9
            int[] r11 = new int[r11]
            int r13 = r1.a
            int r1 = r1.b
            r14 = r9
        L57:
            if (r14 >= r4) goto L85
            java.util.ArrayList<com.mbridge.msdk.foundation.tools.FastKV$c> r15 = r0.invalids
            java.lang.Object r15 = r15.get(r14)
            com.mbridge.msdk.foundation.tools.FastKV$c r15 = (com.mbridge.msdk.foundation.tools.FastKV.c) r15
            int r2 = r15.a
            int r2 = r2 - r1
            com.mbridge.msdk.foundation.tools.j r9 = r0.fastBuffer
            byte[] r9 = r9.a
            r16 = r4
            com.mbridge.msdk.foundation.tools.j r4 = r0.fastBuffer
            byte[] r4 = r4.a
            java.lang.System.arraycopy(r9, r1, r4, r13, r2)
            int r4 = r14 + (-1)
            r9 = 1
            int r4 = r4 << r9
            r11[r4] = r1
            int r4 = r4 + r9
            int r1 = r1 - r13
            r11[r4] = r1
            int r13 = r13 + r2
            int r1 = r15.b
            int r14 = r14 + 1
            r4 = r16
            r2 = 0
            r9 = 1
            goto L57
        L85:
            if (r10 <= 0) goto L9b
            com.mbridge.msdk.foundation.tools.j r2 = r0.fastBuffer
            byte[] r2 = r2.a
            com.mbridge.msdk.foundation.tools.j r4 = r0.fastBuffer
            byte[] r4 = r4.a
            java.lang.System.arraycopy(r2, r1, r4, r13, r10)
            r2 = 1
            int r4 = r12 << 1
            r11[r4] = r1
            int r4 = r4 + r2
            int r1 = r1 - r13
            r11[r4] = r1
        L9b:
            r17.clearInvalid()
            if (r8 == 0) goto Lab
            com.mbridge.msdk.foundation.tools.j r1 = r0.fastBuffer
            r2 = 12
            long r1 = r1.b(r2, r6)
            r0.checksum = r1
            goto Lb6
        Lab:
            long r1 = r0.checksum
            com.mbridge.msdk.foundation.tools.j r4 = r0.fastBuffer
            long r8 = r4.b(r3, r7)
            long r1 = r1 ^ r8
            r0.checksum = r1
        Lb6:
            r0.dataEnd = r5
            int r1 = r0.writingMode
            r2 = 4
            if (r1 != 0) goto Lf9
            java.nio.MappedByteBuffer r1 = r0.aBuffer
            r4 = -1
            r8 = 0
            r1.putInt(r8, r4)
            java.nio.MappedByteBuffer r1 = r0.aBuffer
            long r9 = r0.checksum
            r1.putLong(r2, r9)
            java.nio.MappedByteBuffer r1 = r0.aBuffer
            r1.position(r3)
            java.nio.MappedByteBuffer r1 = r0.aBuffer
            com.mbridge.msdk.foundation.tools.j r4 = r0.fastBuffer
            byte[] r4 = r4.a
            r1.put(r4, r3, r7)
            java.nio.MappedByteBuffer r1 = r0.aBuffer
            r1.putInt(r8, r6)
            java.nio.MappedByteBuffer r1 = r0.bBuffer
            r1.putInt(r8, r6)
            java.nio.MappedByteBuffer r1 = r0.bBuffer
            long r8 = r0.checksum
            r1.putLong(r2, r8)
            java.nio.MappedByteBuffer r1 = r0.bBuffer
            r1.position(r3)
            java.nio.MappedByteBuffer r1 = r0.bBuffer
            com.mbridge.msdk.foundation.tools.j r2 = r0.fastBuffer
            byte[] r2 = r2.a
            r1.put(r2, r3, r7)
            goto L106
        Lf9:
            com.mbridge.msdk.foundation.tools.j r1 = r0.fastBuffer
            r4 = 0
            r1.a(r4, r6)
            com.mbridge.msdk.foundation.tools.j r1 = r0.fastBuffer
            long r6 = r0.checksum
            r1.a(r2, r6)
        L106:
            r0.updateOffset(r3, r11)
            int r5 = r5 + r18
            com.mbridge.msdk.foundation.tools.j r1 = r0.fastBuffer
            byte[] r1 = r1.a
            int r1 = r1.length
            int r1 = r1 - r5
            int r2 = com.mbridge.msdk.foundation.tools.FastKV.TRUNCATE_THRESHOLD
            if (r1 <= r2) goto L118
            r0.truncate(r5)
        L118:
            java.lang.String r1 = "gc finish"
            r0.info(r1)
            return
    }

    public synchronized java.util.Map<java.lang.String, java.lang.Object> getAll() {
            r6 = this;
            monitor-enter(r6)
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r0 = r6.data     // Catch: java.lang.Throwable -> La7
            int r0 = r0.size()     // Catch: java.lang.Throwable -> La7
            if (r0 != 0) goto L10
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Throwable -> La7
            r0.<init>()     // Catch: java.lang.Throwable -> La7
            monitor-exit(r6)
            return r0
        L10:
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> La7
            int r0 = r0 * 4
            int r0 = r0 / 3
            int r0 = r0 + 1
            r1.<init>(r0)     // Catch: java.lang.Throwable -> La7
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r0 = r6.data     // Catch: java.lang.Throwable -> La7
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> La7
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> La7
        L25:
            boolean r2 = r0.hasNext()     // Catch: java.lang.Throwable -> La7
            if (r2 == 0) goto La5
            java.lang.Object r2 = r0.next()     // Catch: java.lang.Throwable -> La7
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.lang.Throwable -> La7
            java.lang.Object r3 = r2.getKey()     // Catch: java.lang.Throwable -> La7
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> La7
            java.lang.Object r2 = r2.getValue()     // Catch: java.lang.Throwable -> La7
            com.mbridge.msdk.foundation.tools.c$b r2 = (com.mbridge.msdk.foundation.tools.c.b) r2     // Catch: java.lang.Throwable -> La7
            r4 = 0
            byte r5 = r2.a()     // Catch: java.lang.Throwable -> La7
            switch(r5) {
                case 1: goto L98;
                case 2: goto L8f;
                case 3: goto L86;
                case 4: goto L7d;
                case 5: goto L74;
                case 6: goto L66;
                case 7: goto L57;
                case 8: goto L46;
                default: goto L45;
            }     // Catch: java.lang.Throwable -> La7
        L45:
            goto La1
        L46:
            r4 = r2
            com.mbridge.msdk.foundation.tools.c$h r4 = (com.mbridge.msdk.foundation.tools.c.h) r4     // Catch: java.lang.Throwable -> La7
            boolean r5 = r4.e     // Catch: java.lang.Throwable -> La7
            if (r5 == 0) goto L52
            java.lang.Object r2 = r6.getObjectFromFile(r4)     // Catch: java.lang.Throwable -> La7
            goto L64
        L52:
            com.mbridge.msdk.foundation.tools.c$h r2 = (com.mbridge.msdk.foundation.tools.c.h) r2     // Catch: java.lang.Throwable -> La7
            java.lang.Object r2 = r2.b     // Catch: java.lang.Throwable -> La7
            goto L64
        L57:
            com.mbridge.msdk.foundation.tools.c$a r2 = (com.mbridge.msdk.foundation.tools.c.a) r2     // Catch: java.lang.Throwable -> La7
            boolean r4 = r2.e     // Catch: java.lang.Throwable -> La7
            if (r4 == 0) goto L62
            byte[] r2 = r6.getArrayFromFile(r2)     // Catch: java.lang.Throwable -> La7
            goto L64
        L62:
            java.lang.Object r2 = r2.b     // Catch: java.lang.Throwable -> La7
        L64:
            r4 = r2
            goto La1
        L66:
            com.mbridge.msdk.foundation.tools.c$i r2 = (com.mbridge.msdk.foundation.tools.c.i) r2     // Catch: java.lang.Throwable -> La7
            boolean r4 = r2.e     // Catch: java.lang.Throwable -> La7
            if (r4 == 0) goto L71
            java.lang.String r2 = r6.getStringFromFile(r2)     // Catch: java.lang.Throwable -> La7
            goto L64
        L71:
            java.lang.Object r2 = r2.b     // Catch: java.lang.Throwable -> La7
            goto L64
        L74:
            com.mbridge.msdk.foundation.tools.c$d r2 = (com.mbridge.msdk.foundation.tools.c.d) r2     // Catch: java.lang.Throwable -> La7
            double r4 = r2.b     // Catch: java.lang.Throwable -> La7
            java.lang.Double r2 = java.lang.Double.valueOf(r4)     // Catch: java.lang.Throwable -> La7
            goto L64
        L7d:
            com.mbridge.msdk.foundation.tools.c$g r2 = (com.mbridge.msdk.foundation.tools.c.g) r2     // Catch: java.lang.Throwable -> La7
            long r4 = r2.b     // Catch: java.lang.Throwable -> La7
            java.lang.Long r2 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> La7
            goto L64
        L86:
            com.mbridge.msdk.foundation.tools.c$e r2 = (com.mbridge.msdk.foundation.tools.c.e) r2     // Catch: java.lang.Throwable -> La7
            float r2 = r2.b     // Catch: java.lang.Throwable -> La7
            java.lang.Float r2 = java.lang.Float.valueOf(r2)     // Catch: java.lang.Throwable -> La7
            goto L64
        L8f:
            com.mbridge.msdk.foundation.tools.c$f r2 = (com.mbridge.msdk.foundation.tools.c.f) r2     // Catch: java.lang.Throwable -> La7
            int r2 = r2.b     // Catch: java.lang.Throwable -> La7
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> La7
            goto L64
        L98:
            com.mbridge.msdk.foundation.tools.c$c r2 = (com.mbridge.msdk.foundation.tools.c.c) r2     // Catch: java.lang.Throwable -> La7
            boolean r2 = r2.b     // Catch: java.lang.Throwable -> La7
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)     // Catch: java.lang.Throwable -> La7
            goto L64
        La1:
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> La7
            goto L25
        La5:
            monitor-exit(r6)
            return r1
        La7:
            r0 = move-exception
            monitor-exit(r6)
            throw r0
    }

    public byte[] getArray(java.lang.String r2) {
            r1 = this;
            byte[] r0 = com.mbridge.msdk.foundation.tools.FastKV.EMPTY_ARRAY
            byte[] r2 = r1.getArray(r2, r0)
            return r2
    }

    public synchronized byte[] getArray(java.lang.String r2, byte[] r3) {
            r1 = this;
            monitor-enter(r1)
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r0 = r1.data     // Catch: java.lang.Throwable -> L1e
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L1e
            com.mbridge.msdk.foundation.tools.c$a r2 = (com.mbridge.msdk.foundation.tools.c.a) r2     // Catch: java.lang.Throwable -> L1e
            if (r2 == 0) goto L1c
            boolean r3 = r2.e     // Catch: java.lang.Throwable -> L1e
            if (r3 == 0) goto L14
            byte[] r2 = r1.getArrayFromFile(r2)     // Catch: java.lang.Throwable -> L1e
            goto L1a
        L14:
            java.lang.Object r2 = r2.b     // Catch: java.lang.Throwable -> L1e
            byte[] r2 = (byte[]) r2     // Catch: java.lang.Throwable -> L1e
            byte[] r2 = (byte[]) r2     // Catch: java.lang.Throwable -> L1e
        L1a:
            monitor-exit(r1)
            return r2
        L1c:
            monitor-exit(r1)
            return r3
        L1e:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized boolean getBoolean(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            r0 = 0
            boolean r2 = r1.getBoolean(r2, r0)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return r2
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized boolean getBoolean(java.lang.String r2, boolean r3) {
            r1 = this;
            monitor-enter(r1)
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r0 = r1.data     // Catch: java.lang.Throwable -> L10
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L10
            com.mbridge.msdk.foundation.tools.c$c r2 = (com.mbridge.msdk.foundation.tools.c.c) r2     // Catch: java.lang.Throwable -> L10
            if (r2 != 0) goto Lc
            goto Le
        Lc:
            boolean r3 = r2.b     // Catch: java.lang.Throwable -> L10
        Le:
            monitor-exit(r1)
            return r3
        L10:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public double getDouble(java.lang.String r3) {
            r2 = this;
            r0 = 0
            double r0 = r2.getDouble(r3, r0)
            return r0
    }

    public synchronized double getDouble(java.lang.String r2, double r3) {
            r1 = this;
            monitor-enter(r1)
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r0 = r1.data     // Catch: java.lang.Throwable -> L10
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L10
            com.mbridge.msdk.foundation.tools.c$d r2 = (com.mbridge.msdk.foundation.tools.c.d) r2     // Catch: java.lang.Throwable -> L10
            if (r2 != 0) goto Lc
            goto Le
        Lc:
            double r3 = r2.b     // Catch: java.lang.Throwable -> L10
        Le:
            monitor-exit(r1)
            return r3
        L10:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public float getFloat(java.lang.String r2) {
            r1 = this;
            r0 = 0
            float r2 = r1.getFloat(r2, r0)
            return r2
    }

    public synchronized float getFloat(java.lang.String r2, float r3) {
            r1 = this;
            monitor-enter(r1)
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r0 = r1.data     // Catch: java.lang.Throwable -> L10
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L10
            com.mbridge.msdk.foundation.tools.c$e r2 = (com.mbridge.msdk.foundation.tools.c.e) r2     // Catch: java.lang.Throwable -> L10
            if (r2 != 0) goto Lc
            goto Le
        Lc:
            float r3 = r2.b     // Catch: java.lang.Throwable -> L10
        Le:
            monitor-exit(r1)
            return r3
        L10:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public int getInt(java.lang.String r2) {
            r1 = this;
            r0 = 0
            int r2 = r1.getInt(r2, r0)
            return r2
    }

    public synchronized int getInt(java.lang.String r2, int r3) {
            r1 = this;
            monitor-enter(r1)
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r0 = r1.data     // Catch: java.lang.Throwable -> L10
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L10
            com.mbridge.msdk.foundation.tools.c$f r2 = (com.mbridge.msdk.foundation.tools.c.f) r2     // Catch: java.lang.Throwable -> L10
            if (r2 != 0) goto Lc
            goto Le
        Lc:
            int r3 = r2.b     // Catch: java.lang.Throwable -> L10
        Le:
            monitor-exit(r1)
            return r3
        L10:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized long getLong(java.lang.String r3) {
            r2 = this;
            monitor-enter(r2)
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r0 = r2.data     // Catch: java.lang.Throwable -> L12
            java.lang.Object r3 = r0.get(r3)     // Catch: java.lang.Throwable -> L12
            com.mbridge.msdk.foundation.tools.c$g r3 = (com.mbridge.msdk.foundation.tools.c.g) r3     // Catch: java.lang.Throwable -> L12
            if (r3 != 0) goto Le
            r0 = 0
            goto L10
        Le:
            long r0 = r3.b     // Catch: java.lang.Throwable -> L12
        L10:
            monitor-exit(r2)
            return r0
        L12:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public synchronized long getLong(java.lang.String r2, long r3) {
            r1 = this;
            monitor-enter(r1)
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r0 = r1.data     // Catch: java.lang.Throwable -> L10
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L10
            com.mbridge.msdk.foundation.tools.c$g r2 = (com.mbridge.msdk.foundation.tools.c.g) r2     // Catch: java.lang.Throwable -> L10
            if (r2 != 0) goto Lc
            goto Le
        Lc:
            long r3 = r2.b     // Catch: java.lang.Throwable -> L10
        Le:
            monitor-exit(r1)
            return r3
        L10:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized <T> T getObject(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r0 = r1.data     // Catch: java.lang.Throwable -> L1b
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L1b
            com.mbridge.msdk.foundation.tools.c$h r2 = (com.mbridge.msdk.foundation.tools.c.h) r2     // Catch: java.lang.Throwable -> L1b
            if (r2 == 0) goto L18
            boolean r0 = r2.e     // Catch: java.lang.Throwable -> L1b
            if (r0 == 0) goto L14
            java.lang.Object r2 = r1.getObjectFromFile(r2)     // Catch: java.lang.Throwable -> L1b
            goto L16
        L14:
            java.lang.Object r2 = r2.b     // Catch: java.lang.Throwable -> L1b
        L16:
            monitor-exit(r1)
            return r2
        L18:
            r2 = 0
            monitor-exit(r1)
            return r2
        L1b:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public java.lang.String getString(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = ""
            java.lang.String r2 = r1.getString(r2, r0)
            return r2
    }

    public synchronized java.lang.String getString(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            monitor-enter(r1)
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r0 = r1.data     // Catch: java.lang.Throwable -> L1c
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L1c
            com.mbridge.msdk.foundation.tools.c$i r2 = (com.mbridge.msdk.foundation.tools.c.i) r2     // Catch: java.lang.Throwable -> L1c
            if (r2 == 0) goto L1a
            boolean r3 = r2.e     // Catch: java.lang.Throwable -> L1c
            if (r3 == 0) goto L14
            java.lang.String r2 = r1.getStringFromFile(r2)     // Catch: java.lang.Throwable -> L1c
            goto L18
        L14:
            java.lang.Object r2 = r2.b     // Catch: java.lang.Throwable -> L1c
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L1c
        L18:
            monitor-exit(r1)
            return r2
        L1a:
            monitor-exit(r1)
            return r3
        L1c:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized java.util.Set<java.lang.String> getStringSet(java.lang.String r1) {
            r0 = this;
            monitor-enter(r0)
            java.lang.Object r1 = r0.getObject(r1)     // Catch: java.lang.Throwable -> L9
            java.util.Set r1 = (java.util.Set) r1     // Catch: java.lang.Throwable -> L9
            monitor-exit(r0)
            return r1
        L9:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public void putAll(java.util.Map<java.lang.String, java.lang.Object> r2) {
            r1 = this;
            r0 = 0
            r1.putAll(r2, r0)
            return
    }

    public synchronized void putAll(java.util.Map<java.lang.String, java.lang.Object> r5, java.util.Map<java.lang.Class, com.mbridge.msdk.foundation.tools.FastKV.a> r6) {
            r4 = this;
            monitor-enter(r4)
            java.util.Set r5 = r5.entrySet()     // Catch: java.lang.Throwable -> Le4
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> Le4
        L9:
            boolean r0 = r5.hasNext()     // Catch: java.lang.Throwable -> Le4
            if (r0 == 0) goto Le2
            java.lang.Object r0 = r5.next()     // Catch: java.lang.Throwable -> Le4
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0     // Catch: java.lang.Throwable -> Le4
            java.lang.Object r1 = r0.getKey()     // Catch: java.lang.Throwable -> Le4
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> Le4
            java.lang.Object r0 = r0.getValue()     // Catch: java.lang.Throwable -> Le4
            if (r1 == 0) goto L9
            boolean r2 = r1.isEmpty()     // Catch: java.lang.Throwable -> Le4
            if (r2 != 0) goto L9
            boolean r2 = r0 instanceof java.lang.String     // Catch: java.lang.Throwable -> Le4
            if (r2 == 0) goto L31
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> Le4
            r4.putString(r1, r0)     // Catch: java.lang.Throwable -> Le4
            goto L9
        L31:
            boolean r2 = r0 instanceof java.lang.Boolean     // Catch: java.lang.Throwable -> Le4
            if (r2 == 0) goto L3f
            java.lang.Boolean r0 = (java.lang.Boolean) r0     // Catch: java.lang.Throwable -> Le4
            boolean r0 = r0.booleanValue()     // Catch: java.lang.Throwable -> Le4
            r4.putBoolean(r1, r0)     // Catch: java.lang.Throwable -> Le4
            goto L9
        L3f:
            boolean r2 = r0 instanceof java.lang.Integer     // Catch: java.lang.Throwable -> Le4
            if (r2 == 0) goto L4d
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.Throwable -> Le4
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> Le4
            r4.putInt(r1, r0)     // Catch: java.lang.Throwable -> Le4
            goto L9
        L4d:
            boolean r2 = r0 instanceof java.lang.Long     // Catch: java.lang.Throwable -> Le4
            if (r2 == 0) goto L5b
            java.lang.Long r0 = (java.lang.Long) r0     // Catch: java.lang.Throwable -> Le4
            long r2 = r0.longValue()     // Catch: java.lang.Throwable -> Le4
            r4.putLong(r1, r2)     // Catch: java.lang.Throwable -> Le4
            goto L9
        L5b:
            boolean r2 = r0 instanceof java.lang.Float     // Catch: java.lang.Throwable -> Le4
            if (r2 == 0) goto L69
            java.lang.Float r0 = (java.lang.Float) r0     // Catch: java.lang.Throwable -> Le4
            float r0 = r0.floatValue()     // Catch: java.lang.Throwable -> Le4
            r4.putFloat(r1, r0)     // Catch: java.lang.Throwable -> Le4
            goto L9
        L69:
            boolean r2 = r0 instanceof java.lang.Double     // Catch: java.lang.Throwable -> Le4
            if (r2 == 0) goto L77
            java.lang.Double r0 = (java.lang.Double) r0     // Catch: java.lang.Throwable -> Le4
            double r2 = r0.doubleValue()     // Catch: java.lang.Throwable -> Le4
            r4.putDouble(r1, r2)     // Catch: java.lang.Throwable -> Le4
            goto L9
        L77:
            boolean r2 = r0 instanceof java.util.Set     // Catch: java.lang.Throwable -> Le4
            if (r2 == 0) goto L97
            r2 = r0
            java.util.Set r2 = (java.util.Set) r2     // Catch: java.lang.Throwable -> Le4
            boolean r3 = r2.isEmpty()     // Catch: java.lang.Throwable -> Le4
            if (r3 != 0) goto L9
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> Le4
            java.lang.Object r2 = r2.next()     // Catch: java.lang.Throwable -> Le4
            boolean r2 = r2 instanceof java.lang.String     // Catch: java.lang.Throwable -> Le4
            if (r2 == 0) goto L9
            java.util.Set r0 = (java.util.Set) r0     // Catch: java.lang.Throwable -> Le4
            r4.putStringSet(r1, r0)     // Catch: java.lang.Throwable -> Le4
            goto L9
        L97:
            boolean r2 = r0 instanceof byte[]     // Catch: java.lang.Throwable -> Le4
            if (r2 == 0) goto La4
            byte[] r0 = (byte[]) r0     // Catch: java.lang.Throwable -> Le4
            byte[] r0 = (byte[]) r0     // Catch: java.lang.Throwable -> Le4
            r4.putArray(r1, r0)     // Catch: java.lang.Throwable -> Le4
            goto L9
        La4:
            if (r6 == 0) goto Ld6
            java.lang.Class r2 = r0.getClass()     // Catch: java.lang.Throwable -> Le4
            java.lang.Object r2 = r6.get(r2)     // Catch: java.lang.Throwable -> Le4
            com.mbridge.msdk.foundation.tools.FastKV$a r2 = (com.mbridge.msdk.foundation.tools.FastKV.a) r2     // Catch: java.lang.Throwable -> Le4
            if (r2 == 0) goto Lb7
            r4.putObject(r1, r0, r2)     // Catch: java.lang.Throwable -> Le4
            goto L9
        Lb7:
            java.lang.Exception r1 = new java.lang.Exception     // Catch: java.lang.Throwable -> Le4
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le4
            r2.<init>()     // Catch: java.lang.Throwable -> Le4
            java.lang.String r3 = "missing encoder for type:"
            r2.append(r3)     // Catch: java.lang.Throwable -> Le4
            java.lang.Class r0 = r0.getClass()     // Catch: java.lang.Throwable -> Le4
            r2.append(r0)     // Catch: java.lang.Throwable -> Le4
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> Le4
            r1.<init>(r0)     // Catch: java.lang.Throwable -> Le4
            r4.warning(r1)     // Catch: java.lang.Throwable -> Le4
            goto L9
        Ld6:
            java.lang.Exception r0 = new java.lang.Exception     // Catch: java.lang.Throwable -> Le4
            java.lang.String r1 = "missing encoders"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Le4
            r4.warning(r0)     // Catch: java.lang.Throwable -> Le4
            goto L9
        Le2:
            monitor-exit(r4)
            return
        Le4:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public synchronized void putArray(java.lang.String r8, byte[] r9) {
            r7 = this;
            monitor-enter(r7)
            r7.checkKey(r8)     // Catch: java.lang.Throwable -> L1d
            if (r9 != 0) goto La
            r7.remove(r8)     // Catch: java.lang.Throwable -> L1d
            goto L1b
        La:
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r0 = r7.data     // Catch: java.lang.Throwable -> L1d
            java.lang.Object r0 = r0.get(r8)     // Catch: java.lang.Throwable -> L1d
            r5 = r0
            com.mbridge.msdk.foundation.tools.c$a r5 = (com.mbridge.msdk.foundation.tools.c.a) r5     // Catch: java.lang.Throwable -> L1d
            r6 = 7
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r9
            r1.addOrUpdate(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L1d
        L1b:
            monitor-exit(r7)
            return
        L1d:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
    }

    public synchronized void putBoolean(java.lang.String r5, boolean r6) {
            r4 = this;
            monitor-enter(r4)
            r4.checkKey(r5)     // Catch: java.lang.Throwable -> L45
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r0 = r4.data     // Catch: java.lang.Throwable -> L45
            java.lang.Object r0 = r0.get(r5)     // Catch: java.lang.Throwable -> L45
            com.mbridge.msdk.foundation.tools.c$c r0 = (com.mbridge.msdk.foundation.tools.c.c) r0     // Catch: java.lang.Throwable -> L45
            r1 = 0
            r2 = 1
            if (r0 != 0) goto L31
            r4.wrapHeader(r5, r2)     // Catch: java.lang.Throwable -> L45
            com.mbridge.msdk.foundation.tools.j r0 = r4.fastBuffer     // Catch: java.lang.Throwable -> L45
            int r0 = r0.b     // Catch: java.lang.Throwable -> L45
            com.mbridge.msdk.foundation.tools.j r3 = r4.fastBuffer     // Catch: java.lang.Throwable -> L45
            if (r6 == 0) goto L1c
            r1 = r2
        L1c:
            byte r1 = (byte) r1     // Catch: java.lang.Throwable -> L45
            r3.a(r1)     // Catch: java.lang.Throwable -> L45
            r4.updateChange()     // Catch: java.lang.Throwable -> L45
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r1 = r4.data     // Catch: java.lang.Throwable -> L45
            com.mbridge.msdk.foundation.tools.c$c r2 = new com.mbridge.msdk.foundation.tools.c$c     // Catch: java.lang.Throwable -> L45
            r2.<init>(r0, r6)     // Catch: java.lang.Throwable -> L45
            r1.put(r5, r2)     // Catch: java.lang.Throwable -> L45
            r4.checkIfCommit()     // Catch: java.lang.Throwable -> L45
            goto L43
        L31:
            boolean r5 = r0.b     // Catch: java.lang.Throwable -> L45
            if (r5 == r6) goto L43
            r0.b = r6     // Catch: java.lang.Throwable -> L45
            if (r6 == 0) goto L3a
            r1 = r2
        L3a:
            byte r5 = (byte) r1     // Catch: java.lang.Throwable -> L45
            int r6 = r0.a     // Catch: java.lang.Throwable -> L45
            r4.updateBoolean(r5, r6)     // Catch: java.lang.Throwable -> L45
            r4.checkIfCommit()     // Catch: java.lang.Throwable -> L45
        L43:
            monitor-exit(r4)
            return
        L45:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public synchronized void putDouble(java.lang.String r8, double r9) {
            r7 = this;
            monitor-enter(r7)
            r7.checkKey(r8)     // Catch: java.lang.Throwable -> L4e
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r0 = r7.data     // Catch: java.lang.Throwable -> L4e
            java.lang.Object r0 = r0.get(r8)     // Catch: java.lang.Throwable -> L4e
            com.mbridge.msdk.foundation.tools.c$d r0 = (com.mbridge.msdk.foundation.tools.c.d) r0     // Catch: java.lang.Throwable -> L4e
            if (r0 != 0) goto L30
            r0 = 5
            r7.wrapHeader(r8, r0)     // Catch: java.lang.Throwable -> L4e
            com.mbridge.msdk.foundation.tools.j r0 = r7.fastBuffer     // Catch: java.lang.Throwable -> L4e
            int r0 = r0.b     // Catch: java.lang.Throwable -> L4e
            com.mbridge.msdk.foundation.tools.j r1 = r7.fastBuffer     // Catch: java.lang.Throwable -> L4e
            long r2 = java.lang.Double.doubleToRawLongBits(r9)     // Catch: java.lang.Throwable -> L4e
            r1.a(r2)     // Catch: java.lang.Throwable -> L4e
            r7.updateChange()     // Catch: java.lang.Throwable -> L4e
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r1 = r7.data     // Catch: java.lang.Throwable -> L4e
            com.mbridge.msdk.foundation.tools.c$d r2 = new com.mbridge.msdk.foundation.tools.c$d     // Catch: java.lang.Throwable -> L4e
            r2.<init>(r0, r9)     // Catch: java.lang.Throwable -> L4e
            r1.put(r8, r2)     // Catch: java.lang.Throwable -> L4e
            r7.checkIfCommit()     // Catch: java.lang.Throwable -> L4e
            goto L4c
        L30:
            double r1 = r0.b     // Catch: java.lang.Throwable -> L4e
            int r8 = (r1 > r9 ? 1 : (r1 == r9 ? 0 : -1))
            if (r8 == 0) goto L4c
            long r2 = java.lang.Double.doubleToRawLongBits(r9)     // Catch: java.lang.Throwable -> L4e
            double r4 = r0.b     // Catch: java.lang.Throwable -> L4e
            long r4 = java.lang.Double.doubleToRawLongBits(r4)     // Catch: java.lang.Throwable -> L4e
            long r4 = r4 ^ r2
            r0.b = r9     // Catch: java.lang.Throwable -> L4e
            int r6 = r0.a     // Catch: java.lang.Throwable -> L4e
            r1 = r7
            r1.updateInt64(r2, r4, r6)     // Catch: java.lang.Throwable -> L4e
            r7.checkIfCommit()     // Catch: java.lang.Throwable -> L4e
        L4c:
            monitor-exit(r7)
            return
        L4e:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
    }

    public synchronized void putFloat(java.lang.String r6, float r7) {
            r5 = this;
            monitor-enter(r5)
            r5.checkKey(r6)     // Catch: java.lang.Throwable -> L54
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r0 = r5.data     // Catch: java.lang.Throwable -> L54
            java.lang.Object r0 = r0.get(r6)     // Catch: java.lang.Throwable -> L54
            com.mbridge.msdk.foundation.tools.c$e r0 = (com.mbridge.msdk.foundation.tools.c.e) r0     // Catch: java.lang.Throwable -> L54
            if (r0 != 0) goto L30
            r0 = 3
            r5.wrapHeader(r6, r0)     // Catch: java.lang.Throwable -> L54
            com.mbridge.msdk.foundation.tools.j r0 = r5.fastBuffer     // Catch: java.lang.Throwable -> L54
            int r0 = r0.b     // Catch: java.lang.Throwable -> L54
            com.mbridge.msdk.foundation.tools.j r1 = r5.fastBuffer     // Catch: java.lang.Throwable -> L54
            int r2 = java.lang.Float.floatToRawIntBits(r7)     // Catch: java.lang.Throwable -> L54
            r1.a(r2)     // Catch: java.lang.Throwable -> L54
            r5.updateChange()     // Catch: java.lang.Throwable -> L54
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r1 = r5.data     // Catch: java.lang.Throwable -> L54
            com.mbridge.msdk.foundation.tools.c$e r2 = new com.mbridge.msdk.foundation.tools.c$e     // Catch: java.lang.Throwable -> L54
            r2.<init>(r0, r7)     // Catch: java.lang.Throwable -> L54
            r1.put(r6, r2)     // Catch: java.lang.Throwable -> L54
            r5.checkIfCommit()     // Catch: java.lang.Throwable -> L54
            goto L52
        L30:
            float r6 = r0.b     // Catch: java.lang.Throwable -> L54
            int r6 = (r6 > r7 ? 1 : (r6 == r7 ? 0 : -1))
            if (r6 == 0) goto L52
            int r6 = java.lang.Float.floatToRawIntBits(r7)     // Catch: java.lang.Throwable -> L54
            float r1 = r0.b     // Catch: java.lang.Throwable -> L54
            int r1 = java.lang.Float.floatToRawIntBits(r1)     // Catch: java.lang.Throwable -> L54
            r1 = r1 ^ r6
            long r1 = (long) r1     // Catch: java.lang.Throwable -> L54
            r3 = 4294967295(0xffffffff, double:2.1219957905E-314)
            long r1 = r1 & r3
            r0.b = r7     // Catch: java.lang.Throwable -> L54
            int r7 = r0.a     // Catch: java.lang.Throwable -> L54
            r5.updateInt32(r6, r1, r7)     // Catch: java.lang.Throwable -> L54
            r5.checkIfCommit()     // Catch: java.lang.Throwable -> L54
        L52:
            monitor-exit(r5)
            return
        L54:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    public synchronized void putInt(java.lang.String r6, int r7) {
            r5 = this;
            monitor-enter(r5)
            r5.checkKey(r6)     // Catch: java.lang.Throwable -> L46
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r0 = r5.data     // Catch: java.lang.Throwable -> L46
            java.lang.Object r0 = r0.get(r6)     // Catch: java.lang.Throwable -> L46
            com.mbridge.msdk.foundation.tools.c$f r0 = (com.mbridge.msdk.foundation.tools.c.f) r0     // Catch: java.lang.Throwable -> L46
            if (r0 != 0) goto L2c
            r0 = 2
            r5.wrapHeader(r6, r0)     // Catch: java.lang.Throwable -> L46
            com.mbridge.msdk.foundation.tools.j r0 = r5.fastBuffer     // Catch: java.lang.Throwable -> L46
            int r0 = r0.b     // Catch: java.lang.Throwable -> L46
            com.mbridge.msdk.foundation.tools.j r1 = r5.fastBuffer     // Catch: java.lang.Throwable -> L46
            r1.a(r7)     // Catch: java.lang.Throwable -> L46
            r5.updateChange()     // Catch: java.lang.Throwable -> L46
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r1 = r5.data     // Catch: java.lang.Throwable -> L46
            com.mbridge.msdk.foundation.tools.c$f r2 = new com.mbridge.msdk.foundation.tools.c$f     // Catch: java.lang.Throwable -> L46
            r2.<init>(r0, r7)     // Catch: java.lang.Throwable -> L46
            r1.put(r6, r2)     // Catch: java.lang.Throwable -> L46
            r5.checkIfCommit()     // Catch: java.lang.Throwable -> L46
            goto L44
        L2c:
            int r6 = r0.b     // Catch: java.lang.Throwable -> L46
            if (r6 == r7) goto L44
            int r6 = r0.b     // Catch: java.lang.Throwable -> L46
            r6 = r6 ^ r7
            long r1 = (long) r6     // Catch: java.lang.Throwable -> L46
            r3 = 4294967295(0xffffffff, double:2.1219957905E-314)
            long r1 = r1 & r3
            r0.b = r7     // Catch: java.lang.Throwable -> L46
            int r6 = r0.a     // Catch: java.lang.Throwable -> L46
            r5.updateInt32(r7, r1, r6)     // Catch: java.lang.Throwable -> L46
            r5.checkIfCommit()     // Catch: java.lang.Throwable -> L46
        L44:
            monitor-exit(r5)
            return
        L46:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    public synchronized void putLong(java.lang.String r10, long r11) {
            r9 = this;
            monitor-enter(r9)
            r9.checkKey(r10)     // Catch: java.lang.Throwable -> L44
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r0 = r9.data     // Catch: java.lang.Throwable -> L44
            java.lang.Object r0 = r0.get(r10)     // Catch: java.lang.Throwable -> L44
            com.mbridge.msdk.foundation.tools.c$g r0 = (com.mbridge.msdk.foundation.tools.c.g) r0     // Catch: java.lang.Throwable -> L44
            if (r0 != 0) goto L2c
            r0 = 4
            r9.wrapHeader(r10, r0)     // Catch: java.lang.Throwable -> L44
            com.mbridge.msdk.foundation.tools.j r0 = r9.fastBuffer     // Catch: java.lang.Throwable -> L44
            int r0 = r0.b     // Catch: java.lang.Throwable -> L44
            com.mbridge.msdk.foundation.tools.j r1 = r9.fastBuffer     // Catch: java.lang.Throwable -> L44
            r1.a(r11)     // Catch: java.lang.Throwable -> L44
            r9.updateChange()     // Catch: java.lang.Throwable -> L44
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r1 = r9.data     // Catch: java.lang.Throwable -> L44
            com.mbridge.msdk.foundation.tools.c$g r2 = new com.mbridge.msdk.foundation.tools.c$g     // Catch: java.lang.Throwable -> L44
            r2.<init>(r0, r11)     // Catch: java.lang.Throwable -> L44
            r1.put(r10, r2)     // Catch: java.lang.Throwable -> L44
            r9.checkIfCommit()     // Catch: java.lang.Throwable -> L44
            goto L42
        L2c:
            long r1 = r0.b     // Catch: java.lang.Throwable -> L44
            int r10 = (r1 > r11 ? 1 : (r1 == r11 ? 0 : -1))
            if (r10 == 0) goto L42
            long r1 = r0.b     // Catch: java.lang.Throwable -> L44
            long r6 = r11 ^ r1
            r0.b = r11     // Catch: java.lang.Throwable -> L44
            int r8 = r0.a     // Catch: java.lang.Throwable -> L44
            r3 = r9
            r4 = r11
            r3.updateInt64(r4, r6, r8)     // Catch: java.lang.Throwable -> L44
            r9.checkIfCommit()     // Catch: java.lang.Throwable -> L44
        L42:
            monitor-exit(r9)
            return
        L44:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
    }

    public synchronized <T> void putObject(java.lang.String r10, T r11, com.mbridge.msdk.foundation.tools.FastKV.a<T> r12) {
            r9 = this;
            monitor-enter(r9)
            r9.checkKey(r10)     // Catch: java.lang.Throwable -> L8d
            if (r12 == 0) goto L85
            java.lang.String r0 = r12.a()     // Catch: java.lang.Throwable -> L8d
            if (r0 == 0) goto L6e
            boolean r1 = r0.isEmpty()     // Catch: java.lang.Throwable -> L8d
            if (r1 != 0) goto L6e
            int r1 = r0.length()     // Catch: java.lang.Throwable -> L8d
            r2 = 50
            if (r1 > r2) goto L6e
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.FastKV$a> r1 = r9.encoderMap     // Catch: java.lang.Throwable -> L8d
            boolean r1 = r1.containsKey(r0)     // Catch: java.lang.Throwable -> L8d
            if (r1 == 0) goto L66
            if (r11 != 0) goto L29
            r9.remove(r10)     // Catch: java.lang.Throwable -> L8d
            monitor-exit(r9)
            return
        L29:
            r1 = 0
            byte[] r1 = r12.a(r11)     // Catch: java.lang.Exception -> L2f java.lang.Throwable -> L8d
            goto L33
        L2f:
            r12 = move-exception
            r9.error(r12)     // Catch: java.lang.Throwable -> L8d
        L33:
            if (r1 != 0) goto L3a
            r9.remove(r10)     // Catch: java.lang.Throwable -> L8d
            monitor-exit(r9)
            return
        L3a:
            int r12 = com.mbridge.msdk.foundation.tools.j.b(r0)     // Catch: java.lang.Throwable -> L8d
            com.mbridge.msdk.foundation.tools.j r2 = new com.mbridge.msdk.foundation.tools.j     // Catch: java.lang.Throwable -> L8d
            int r3 = r12 + 1
            int r4 = r1.length     // Catch: java.lang.Throwable -> L8d
            int r3 = r3 + r4
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L8d
            byte r12 = (byte) r12     // Catch: java.lang.Throwable -> L8d
            r2.a(r12)     // Catch: java.lang.Throwable -> L8d
            r2.a(r0)     // Catch: java.lang.Throwable -> L8d
            r2.a(r1)     // Catch: java.lang.Throwable -> L8d
            byte[] r6 = r2.a     // Catch: java.lang.Throwable -> L8d
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r12 = r9.data     // Catch: java.lang.Throwable -> L8d
            java.lang.Object r12 = r12.get(r10)     // Catch: java.lang.Throwable -> L8d
            r7 = r12
            com.mbridge.msdk.foundation.tools.c$h r7 = (com.mbridge.msdk.foundation.tools.c.h) r7     // Catch: java.lang.Throwable -> L8d
            r8 = 8
            r3 = r9
            r4 = r10
            r5 = r11
            r3.addOrUpdate(r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L8d
            monitor-exit(r9)
            return
        L66:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L8d
            java.lang.String r11 = "Encoder hasn't been registered"
            r10.<init>(r11)     // Catch: java.lang.Throwable -> L8d
            throw r10     // Catch: java.lang.Throwable -> L8d
        L6e:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L8d
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8d
            r11.<init>()     // Catch: java.lang.Throwable -> L8d
            java.lang.String r12 = "Invalid encoder tag:"
            r11.append(r12)     // Catch: java.lang.Throwable -> L8d
            r11.append(r0)     // Catch: java.lang.Throwable -> L8d
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> L8d
            r10.<init>(r11)     // Catch: java.lang.Throwable -> L8d
            throw r10     // Catch: java.lang.Throwable -> L8d
        L85:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L8d
            java.lang.String r11 = "Encoder is null"
            r10.<init>(r11)     // Catch: java.lang.Throwable -> L8d
            throw r10     // Catch: java.lang.Throwable -> L8d
        L8d:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
    }

    public synchronized void putString(java.lang.String r8, java.lang.String r9) {
            r7 = this;
            monitor-enter(r7)
            r7.checkKey(r8)     // Catch: java.lang.Throwable -> L4e
            if (r9 != 0) goto La
            r7.remove(r8)     // Catch: java.lang.Throwable -> L4e
            goto L4c
        La:
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r0 = r7.data     // Catch: java.lang.Throwable -> L4e
            java.lang.Object r0 = r0.get(r8)     // Catch: java.lang.Throwable -> L4e
            r5 = r0
            com.mbridge.msdk.foundation.tools.c$i r5 = (com.mbridge.msdk.foundation.tools.c.i) r5     // Catch: java.lang.Throwable -> L4e
            int r0 = r9.length()     // Catch: java.lang.Throwable -> L4e
            int r0 = r0 * 3
            r1 = 2048(0x800, float:2.87E-42)
            if (r0 >= r1) goto L21
            r7.fastPutString(r8, r9, r5)     // Catch: java.lang.Throwable -> L4e
            goto L4c
        L21:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L4e
            r1 = 19
            if (r0 < r1) goto L37
            boolean r0 = r9.isEmpty()     // Catch: java.lang.Throwable -> L4e
            if (r0 == 0) goto L30
            byte[] r0 = com.mbridge.msdk.foundation.tools.FastKV.EMPTY_ARRAY     // Catch: java.lang.Throwable -> L4e
            goto L44
        L30:
            java.nio.charset.Charset r0 = java.nio.charset.StandardCharsets.UTF_8     // Catch: java.lang.Throwable -> L4e
            byte[] r0 = r9.getBytes(r0)     // Catch: java.lang.Throwable -> L4e
            goto L44
        L37:
            boolean r0 = r9.isEmpty()     // Catch: java.lang.Throwable -> L4e
            if (r0 == 0) goto L40
            byte[] r0 = com.mbridge.msdk.foundation.tools.FastKV.EMPTY_ARRAY     // Catch: java.lang.Throwable -> L4e
            goto L44
        L40:
            byte[] r0 = r9.getBytes()     // Catch: java.lang.Throwable -> L4e
        L44:
            r4 = r0
            r6 = 6
            r1 = r7
            r2 = r8
            r3 = r9
            r1.addOrUpdate(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L4e
        L4c:
            monitor-exit(r7)
            return
        L4e:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
    }

    public synchronized void putStringSet(java.lang.String r2, java.util.Set<java.lang.String> r3) {
            r1 = this;
            monitor-enter(r1)
            if (r3 != 0) goto L7
            r1.remove(r2)     // Catch: java.lang.Throwable -> Le
            goto Lc
        L7:
            com.mbridge.msdk.foundation.tools.ah r0 = com.mbridge.msdk.foundation.tools.ah.a     // Catch: java.lang.Throwable -> Le
            r1.putObject(r2, r3, r0)     // Catch: java.lang.Throwable -> Le
        Lc:
            monitor-exit(r1)
            return
        Le:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized void remove(java.lang.String r7) {
            r6 = this;
            monitor-enter(r6)
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r0 = r6.data     // Catch: java.lang.Throwable -> L95
            java.lang.Object r0 = r0.get(r7)     // Catch: java.lang.Throwable -> L95
            com.mbridge.msdk.foundation.tools.c$b r0 = (com.mbridge.msdk.foundation.tools.c.b) r0     // Catch: java.lang.Throwable -> L95
            if (r0 == 0) goto L93
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.tools.c$b> r1 = r6.data     // Catch: java.lang.Throwable -> L95
            r1.remove(r7)     // Catch: java.lang.Throwable -> L95
            byte r1 = r0.a()     // Catch: java.lang.Throwable -> L95
            r2 = 5
            r3 = 0
            if (r1 > r2) goto L2c
            int r7 = com.mbridge.msdk.foundation.tools.j.b(r7)     // Catch: java.lang.Throwable -> L95
            int r2 = r0.a     // Catch: java.lang.Throwable -> L95
            int r7 = r7 + 2
            int r2 = r2 - r7
            int r7 = r0.a     // Catch: java.lang.Throwable -> L95
            int[] r0 = com.mbridge.msdk.foundation.tools.FastKV.TYPE_SIZE     // Catch: java.lang.Throwable -> L95
            r0 = r0[r1]     // Catch: java.lang.Throwable -> L95
            int r7 = r7 + r0
            r6.remove(r1, r2, r7)     // Catch: java.lang.Throwable -> L95
            goto L41
        L2c:
            com.mbridge.msdk.foundation.tools.c$j r0 = (com.mbridge.msdk.foundation.tools.c.j) r0     // Catch: java.lang.Throwable -> L95
            int r7 = r0.c     // Catch: java.lang.Throwable -> L95
            int r2 = r0.a     // Catch: java.lang.Throwable -> L95
            int r4 = r0.d     // Catch: java.lang.Throwable -> L95
            int r2 = r2 + r4
            r6.remove(r1, r7, r2)     // Catch: java.lang.Throwable -> L95
            boolean r7 = r0.e     // Catch: java.lang.Throwable -> L95
            if (r7 == 0) goto L41
            java.lang.Object r7 = r0.b     // Catch: java.lang.Throwable -> L95
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> L95
            r3 = r7
        L41:
            r7 = r1 | (-128(0xffffffffffffff80, float:NaN))
            byte r7 = (byte) r7     // Catch: java.lang.Throwable -> L95
            int r0 = r6.writingMode     // Catch: java.lang.Throwable -> L95
            r1 = 4
            if (r0 != 0) goto L66
            java.nio.MappedByteBuffer r0 = r6.aBuffer     // Catch: java.lang.Throwable -> L95
            long r4 = r6.checksum     // Catch: java.lang.Throwable -> L95
            r0.putLong(r1, r4)     // Catch: java.lang.Throwable -> L95
            java.nio.MappedByteBuffer r0 = r6.aBuffer     // Catch: java.lang.Throwable -> L95
            int r2 = r6.removeStart     // Catch: java.lang.Throwable -> L95
            r0.put(r2, r7)     // Catch: java.lang.Throwable -> L95
            java.nio.MappedByteBuffer r0 = r6.bBuffer     // Catch: java.lang.Throwable -> L95
            long r4 = r6.checksum     // Catch: java.lang.Throwable -> L95
            r0.putLong(r1, r4)     // Catch: java.lang.Throwable -> L95
            java.nio.MappedByteBuffer r0 = r6.bBuffer     // Catch: java.lang.Throwable -> L95
            int r1 = r6.removeStart     // Catch: java.lang.Throwable -> L95
            r0.put(r1, r7)     // Catch: java.lang.Throwable -> L95
            goto L6d
        L66:
            com.mbridge.msdk.foundation.tools.j r7 = r6.fastBuffer     // Catch: java.lang.Throwable -> L95
            long r4 = r6.checksum     // Catch: java.lang.Throwable -> L95
            r7.a(r1, r4)     // Catch: java.lang.Throwable -> L95
        L6d:
            r7 = 0
            r6.removeStart = r7     // Catch: java.lang.Throwable -> L95
            if (r3 == 0) goto L8d
            java.io.File r7 = new java.io.File     // Catch: java.lang.Throwable -> L95
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L95
            r0.<init>()     // Catch: java.lang.Throwable -> L95
            java.lang.String r1 = r6.path     // Catch: java.lang.Throwable -> L95
            r0.append(r1)     // Catch: java.lang.Throwable -> L95
            java.lang.String r1 = r6.name     // Catch: java.lang.Throwable -> L95
            r0.append(r1)     // Catch: java.lang.Throwable -> L95
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L95
            r7.<init>(r0, r3)     // Catch: java.lang.Throwable -> L95
            com.mbridge.msdk.foundation.tools.al.c(r7)     // Catch: java.lang.Throwable -> L95
        L8d:
            r6.checkGC()     // Catch: java.lang.Throwable -> L95
            r6.checkIfCommit()     // Catch: java.lang.Throwable -> L95
        L93:
            monitor-exit(r6)
            return
        L95:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    public synchronized java.lang.String toString() {
            r2 = this;
            monitor-enter(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L20
            r0.<init>()     // Catch: java.lang.Throwable -> L20
            java.lang.String r1 = "FastKV: path:"
            r0.append(r1)     // Catch: java.lang.Throwable -> L20
            java.lang.String r1 = r2.path     // Catch: java.lang.Throwable -> L20
            r0.append(r1)     // Catch: java.lang.Throwable -> L20
            java.lang.String r1 = " name:"
            r0.append(r1)     // Catch: java.lang.Throwable -> L20
            java.lang.String r1 = r2.name     // Catch: java.lang.Throwable -> L20
            r0.append(r1)     // Catch: java.lang.Throwable -> L20
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L20
            monitor-exit(r2)
            return r0
        L20:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }
}
