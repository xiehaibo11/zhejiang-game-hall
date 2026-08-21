package org.cocos2dx.okhttp3.internal.http2;

final class Http2Reader implements java.io.Closeable {
    static final java.util.logging.Logger logger = null;
    private final boolean client;
    private final org.cocos2dx.okhttp3.internal.http2.Http2Reader.ContinuationSource continuation;
    final org.cocos2dx.okhttp3.internal.http2.Hpack.Reader hpackReader;
    private final org.cocos2dx.okio.BufferedSource source;

    static final class ContinuationSource implements org.cocos2dx.okio.Source {
        byte flags;
        int left;
        int length;
        short padding;
        private final org.cocos2dx.okio.BufferedSource source;
        int streamId;

        ContinuationSource(org.cocos2dx.okio.BufferedSource r1) {
                r0 = this;
                r0.<init>()
                r0.source = r1
                return
        }

        private void readContinuationHeader() throws java.io.IOException {
                r7 = this;
                int r0 = r7.streamId
                org.cocos2dx.okio.BufferedSource r1 = r7.source
                int r1 = org.cocos2dx.okhttp3.internal.http2.Http2Reader.readMedium(r1)
                r7.left = r1
                r7.length = r1
                org.cocos2dx.okio.BufferedSource r1 = r7.source
                byte r1 = r1.readByte()
                r1 = r1 & 255(0xff, float:3.57E-43)
                byte r1 = (byte) r1
                org.cocos2dx.okio.BufferedSource r2 = r7.source
                byte r2 = r2.readByte()
                r2 = r2 & 255(0xff, float:3.57E-43)
                byte r2 = (byte) r2
                r7.flags = r2
                java.util.logging.Logger r2 = org.cocos2dx.okhttp3.internal.http2.Http2Reader.logger
                java.util.logging.Level r3 = java.util.logging.Level.FINE
                boolean r2 = r2.isLoggable(r3)
                r3 = 1
                if (r2 == 0) goto L3a
                java.util.logging.Logger r2 = org.cocos2dx.okhttp3.internal.http2.Http2Reader.logger
                int r4 = r7.streamId
                int r5 = r7.length
                byte r6 = r7.flags
                java.lang.String r4 = org.cocos2dx.okhttp3.internal.http2.Http2.frameLog(r3, r4, r5, r1, r6)
                r2.fine(r4)
            L3a:
                org.cocos2dx.okio.BufferedSource r2 = r7.source
                int r2 = r2.readInt()
                r4 = 2147483647(0x7fffffff, float:NaN)
                r2 = r2 & r4
                r7.streamId = r2
                r2 = 9
                r4 = 0
                if (r1 != r2) goto L59
                int r1 = r7.streamId
                if (r1 != r0) goto L50
                return
            L50:
                java.lang.Object[] r0 = new java.lang.Object[r4]
                java.lang.String r1 = "TYPE_CONTINUATION streamId changed"
                java.io.IOException r0 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r1, r0)
                throw r0
            L59:
                java.lang.Object[] r0 = new java.lang.Object[r3]
                java.lang.Byte r1 = java.lang.Byte.valueOf(r1)
                r0[r4] = r1
                java.lang.String r1 = "%s != TYPE_CONTINUATION"
                java.io.IOException r0 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r1, r0)
                throw r0
        }

        @Override
        public void close() throws java.io.IOException {
                r0 = this;
                return
        }

        @Override
        public long read(org.cocos2dx.okio.Buffer r7, long r8) throws java.io.IOException {
                r6 = this;
            L0:
                int r0 = r6.left
                r1 = -1
                if (r0 != 0) goto L1c
                org.cocos2dx.okio.BufferedSource r0 = r6.source
                short r3 = r6.padding
                long r3 = (long) r3
                r0.skip(r3)
                r0 = 0
                r6.padding = r0
                byte r0 = r6.flags
                r0 = r0 & 4
                if (r0 == 0) goto L18
                return r1
            L18:
                r6.readContinuationHeader()
                goto L0
            L1c:
                org.cocos2dx.okio.BufferedSource r3 = r6.source
                long r4 = (long) r0
                long r8 = java.lang.Math.min(r8, r4)
                long r7 = r3.read(r7, r8)
                int r9 = (r7 > r1 ? 1 : (r7 == r1 ? 0 : -1))
                if (r9 != 0) goto L2c
                return r1
            L2c:
                int r9 = r6.left
                long r0 = (long) r9
                long r0 = r0 - r7
                int r9 = (int) r0
                r6.left = r9
                return r7
        }

        @Override
        public org.cocos2dx.okio.Timeout timeout() {
                r1 = this;
                org.cocos2dx.okio.BufferedSource r0 = r1.source
                org.cocos2dx.okio.Timeout r0 = r0.timeout()
                return r0
        }
    }

    interface Handler {
        void ackSettings();

        void alternateService(int r1, java.lang.String r2, org.cocos2dx.okio.ByteString r3, java.lang.String r4, int r5, long r6);

        void data(boolean r1, int r2, org.cocos2dx.okio.BufferedSource r3, int r4) throws java.io.IOException;

        void goAway(int r1, org.cocos2dx.okhttp3.internal.http2.ErrorCode r2, org.cocos2dx.okio.ByteString r3);

        void headers(boolean r1, int r2, int r3, java.util.List<org.cocos2dx.okhttp3.internal.http2.Header> r4);

        void ping(boolean r1, int r2, int r3);

        void priority(int r1, int r2, int r3, boolean r4);

        void pushPromise(int r1, int r2, java.util.List<org.cocos2dx.okhttp3.internal.http2.Header> r3) throws java.io.IOException;

        void rstStream(int r1, org.cocos2dx.okhttp3.internal.http2.ErrorCode r2);

        void settings(boolean r1, org.cocos2dx.okhttp3.internal.http2.Settings r2);

        void windowUpdate(int r1, long r2);
    }

    static {
            java.lang.Class<org.cocos2dx.okhttp3.internal.http2.Http2> r0 = org.cocos2dx.okhttp3.internal.http2.Http2.class
            java.lang.String r0 = r0.getName()
            java.util.logging.Logger r0 = java.util.logging.Logger.getLogger(r0)
            org.cocos2dx.okhttp3.internal.http2.Http2Reader.logger = r0
            return
    }

    Http2Reader(org.cocos2dx.okio.BufferedSource r2, boolean r3) {
            r1 = this;
            r1.<init>()
            r1.source = r2
            r1.client = r3
            org.cocos2dx.okhttp3.internal.http2.Http2Reader$ContinuationSource r2 = new org.cocos2dx.okhttp3.internal.http2.Http2Reader$ContinuationSource
            org.cocos2dx.okio.BufferedSource r3 = r1.source
            r2.<init>(r3)
            r1.continuation = r2
            org.cocos2dx.okhttp3.internal.http2.Hpack$Reader r2 = new org.cocos2dx.okhttp3.internal.http2.Hpack$Reader
            org.cocos2dx.okhttp3.internal.http2.Http2Reader$ContinuationSource r3 = r1.continuation
            r0 = 4096(0x1000, float:5.74E-42)
            r2.<init>(r0, r3)
            r1.hpackReader = r2
            return
    }

    static int lengthWithoutPadding(int r1, byte r2, short r3) throws java.io.IOException {
            r2 = r2 & 8
            if (r2 == 0) goto L6
            int r1 = r1 + (-1)
        L6:
            if (r3 > r1) goto Lb
            int r1 = r1 - r3
            short r1 = (short) r1
            return r1
        Lb:
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r0 = 0
            java.lang.Short r3 = java.lang.Short.valueOf(r3)
            r2[r0] = r3
            r3 = 1
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2[r3] = r1
            java.lang.String r1 = "PROTOCOL_ERROR padding %s > remaining length %s"
            java.io.IOException r1 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r1, r2)
            throw r1
    }

    private void readData(org.cocos2dx.okhttp3.internal.http2.Http2Reader.Handler r5, int r6, byte r7, int r8) throws java.io.IOException {
            r4 = this;
            r0 = 0
            if (r8 == 0) goto L39
            r1 = r7 & 1
            r2 = 1
            if (r1 == 0) goto La
            r1 = 1
            goto Lb
        La:
            r1 = 0
        Lb:
            r3 = r7 & 32
            if (r3 == 0) goto L10
            goto L11
        L10:
            r2 = 0
        L11:
            if (r2 != 0) goto L30
            r2 = r7 & 8
            if (r2 == 0) goto L20
            org.cocos2dx.okio.BufferedSource r0 = r4.source
            byte r0 = r0.readByte()
            r0 = r0 & 255(0xff, float:3.57E-43)
            short r0 = (short) r0
        L20:
            int r6 = lengthWithoutPadding(r6, r7, r0)
            org.cocos2dx.okio.BufferedSource r7 = r4.source
            r5.data(r1, r8, r7, r6)
            org.cocos2dx.okio.BufferedSource r5 = r4.source
            long r6 = (long) r0
            r5.skip(r6)
            return
        L30:
            java.lang.Object[] r5 = new java.lang.Object[r0]
            java.lang.String r6 = "PROTOCOL_ERROR: FLAG_COMPRESSED without SETTINGS_COMPRESS_DATA"
            java.io.IOException r5 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r6, r5)
            throw r5
        L39:
            java.lang.Object[] r5 = new java.lang.Object[r0]
            java.lang.String r6 = "PROTOCOL_ERROR: TYPE_DATA streamId == 0"
            java.io.IOException r5 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r6, r5)
            throw r5
    }

    private void readGoAway(org.cocos2dx.okhttp3.internal.http2.Http2Reader.Handler r4, int r5, byte r6, int r7) throws java.io.IOException {
            r3 = this;
            r6 = 1
            r0 = 8
            r1 = 0
            if (r5 < r0) goto L42
            if (r7 != 0) goto L39
            org.cocos2dx.okio.BufferedSource r7 = r3.source
            int r7 = r7.readInt()
            org.cocos2dx.okio.BufferedSource r2 = r3.source
            int r2 = r2.readInt()
            int r5 = r5 - r0
            org.cocos2dx.okhttp3.internal.http2.ErrorCode r0 = org.cocos2dx.okhttp3.internal.http2.ErrorCode.fromHttp2(r2)
            if (r0 == 0) goto L2a
            org.cocos2dx.okio.ByteString r6 = org.cocos2dx.okio.ByteString.EMPTY
            if (r5 <= 0) goto L26
            org.cocos2dx.okio.BufferedSource r6 = r3.source
            long r1 = (long) r5
            org.cocos2dx.okio.ByteString r6 = r6.readByteString(r1)
        L26:
            r4.goAway(r7, r0, r6)
            return
        L2a:
            java.lang.Object[] r4 = new java.lang.Object[r6]
            java.lang.Integer r5 = java.lang.Integer.valueOf(r2)
            r4[r1] = r5
            java.lang.String r5 = "TYPE_GOAWAY unexpected error code: %d"
            java.io.IOException r4 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r5, r4)
            throw r4
        L39:
            java.lang.Object[] r4 = new java.lang.Object[r1]
            java.lang.String r5 = "TYPE_GOAWAY streamId != 0"
            java.io.IOException r4 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r5, r4)
            throw r4
        L42:
            java.lang.Object[] r4 = new java.lang.Object[r6]
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r4[r1] = r5
            java.lang.String r5 = "TYPE_GOAWAY length < 8: %s"
            java.io.IOException r4 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r5, r4)
            throw r4
    }

    private java.util.List<org.cocos2dx.okhttp3.internal.http2.Header> readHeaderBlock(int r2, short r3, byte r4, int r5) throws java.io.IOException {
            r1 = this;
            org.cocos2dx.okhttp3.internal.http2.Http2Reader$ContinuationSource r0 = r1.continuation
            r0.left = r2
            r0.length = r2
            r0.padding = r3
            r0.flags = r4
            r0.streamId = r5
            org.cocos2dx.okhttp3.internal.http2.Hpack$Reader r2 = r1.hpackReader
            r2.readHeaders()
            org.cocos2dx.okhttp3.internal.http2.Hpack$Reader r2 = r1.hpackReader
            java.util.List r2 = r2.getAndResetHeaderList()
            return r2
    }

    private void readHeaders(org.cocos2dx.okhttp3.internal.http2.Http2Reader.Handler r4, int r5, byte r6, int r7) throws java.io.IOException {
            r3 = this;
            r0 = 0
            if (r7 == 0) goto L2d
            r1 = r6 & 1
            if (r1 == 0) goto L9
            r1 = 1
            goto La
        L9:
            r1 = 0
        La:
            r2 = r6 & 8
            if (r2 == 0) goto L17
            org.cocos2dx.okio.BufferedSource r0 = r3.source
            byte r0 = r0.readByte()
            r0 = r0 & 255(0xff, float:3.57E-43)
            short r0 = (short) r0
        L17:
            r2 = r6 & 32
            if (r2 == 0) goto L20
            r3.readPriority(r4, r7)
            int r5 = r5 + (-5)
        L20:
            int r5 = lengthWithoutPadding(r5, r6, r0)
            java.util.List r5 = r3.readHeaderBlock(r5, r0, r6, r7)
            r6 = -1
            r4.headers(r1, r7, r6, r5)
            return
        L2d:
            java.lang.Object[] r4 = new java.lang.Object[r0]
            java.lang.String r5 = "PROTOCOL_ERROR: TYPE_HEADERS streamId == 0"
            java.io.IOException r4 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r5, r4)
            throw r4
    }

    static int readMedium(org.cocos2dx.okio.BufferedSource r2) throws java.io.IOException {
            byte r0 = r2.readByte()
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 16
            byte r1 = r2.readByte()
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            r0 = r0 | r1
            byte r2 = r2.readByte()
            r2 = r2 & 255(0xff, float:3.57E-43)
            r2 = r2 | r0
            return r2
    }

    private void readPing(org.cocos2dx.okhttp3.internal.http2.Http2Reader.Handler r4, int r5, byte r6, int r7) throws java.io.IOException {
            r3 = this;
            r0 = 0
            r1 = 1
            r2 = 8
            if (r5 != r2) goto L25
            if (r7 != 0) goto L1c
            org.cocos2dx.okio.BufferedSource r5 = r3.source
            int r5 = r5.readInt()
            org.cocos2dx.okio.BufferedSource r7 = r3.source
            int r7 = r7.readInt()
            r6 = r6 & r1
            if (r6 == 0) goto L18
            r0 = 1
        L18:
            r4.ping(r0, r5, r7)
            return
        L1c:
            java.lang.Object[] r4 = new java.lang.Object[r0]
            java.lang.String r5 = "TYPE_PING streamId != 0"
            java.io.IOException r4 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r5, r4)
            throw r4
        L25:
            java.lang.Object[] r4 = new java.lang.Object[r1]
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r4[r0] = r5
            java.lang.String r5 = "TYPE_PING length != 8: %s"
            java.io.IOException r4 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r5, r4)
            throw r4
    }

    private void readPriority(org.cocos2dx.okhttp3.internal.http2.Http2Reader.Handler r5, int r6) throws java.io.IOException {
            r4 = this;
            org.cocos2dx.okio.BufferedSource r0 = r4.source
            int r0 = r0.readInt()
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            r1 = r1 & r0
            r2 = 1
            if (r1 == 0) goto Le
            r1 = 1
            goto Lf
        Le:
            r1 = 0
        Lf:
            r3 = 2147483647(0x7fffffff, float:NaN)
            r0 = r0 & r3
            org.cocos2dx.okio.BufferedSource r3 = r4.source
            byte r3 = r3.readByte()
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 + r2
            r5.priority(r6, r0, r3, r1)
            return
    }

    private void readPriority(org.cocos2dx.okhttp3.internal.http2.Http2Reader.Handler r2, int r3, byte r4, int r5) throws java.io.IOException {
            r1 = this;
            r4 = 0
            r0 = 5
            if (r3 != r0) goto L13
            if (r5 == 0) goto La
            r1.readPriority(r2, r5)
            return
        La:
            java.lang.Object[] r2 = new java.lang.Object[r4]
            java.lang.String r3 = "TYPE_PRIORITY streamId == 0"
            java.io.IOException r2 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r3, r2)
            throw r2
        L13:
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r2[r4] = r3
            java.lang.String r3 = "TYPE_PRIORITY length: %d != 5"
            java.io.IOException r2 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r3, r2)
            throw r2
    }

    private void readPushPromise(org.cocos2dx.okhttp3.internal.http2.Http2Reader.Handler r4, int r5, byte r6, int r7) throws java.io.IOException {
            r3 = this;
            r0 = 0
            if (r7 == 0) goto L28
            r1 = r6 & 8
            if (r1 == 0) goto L10
            org.cocos2dx.okio.BufferedSource r0 = r3.source
            byte r0 = r0.readByte()
            r0 = r0 & 255(0xff, float:3.57E-43)
            short r0 = (short) r0
        L10:
            org.cocos2dx.okio.BufferedSource r1 = r3.source
            int r1 = r1.readInt()
            r2 = 2147483647(0x7fffffff, float:NaN)
            r1 = r1 & r2
            int r5 = r5 + (-4)
            int r5 = lengthWithoutPadding(r5, r6, r0)
            java.util.List r5 = r3.readHeaderBlock(r5, r0, r6, r7)
            r4.pushPromise(r7, r1, r5)
            return
        L28:
            java.lang.Object[] r4 = new java.lang.Object[r0]
            java.lang.String r5 = "PROTOCOL_ERROR: TYPE_PUSH_PROMISE streamId == 0"
            java.io.IOException r4 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r5, r4)
            throw r4
    }

    private void readRstStream(org.cocos2dx.okhttp3.internal.http2.Http2Reader.Handler r3, int r4, byte r5, int r6) throws java.io.IOException {
            r2 = this;
            r5 = 1
            r0 = 0
            r1 = 4
            if (r4 != r1) goto L2f
            if (r6 == 0) goto L26
            org.cocos2dx.okio.BufferedSource r4 = r2.source
            int r4 = r4.readInt()
            org.cocos2dx.okhttp3.internal.http2.ErrorCode r1 = org.cocos2dx.okhttp3.internal.http2.ErrorCode.fromHttp2(r4)
            if (r1 == 0) goto L17
            r3.rstStream(r6, r1)
            return
        L17:
            java.lang.Object[] r3 = new java.lang.Object[r5]
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r3[r0] = r4
            java.lang.String r4 = "TYPE_RST_STREAM unexpected error code: %d"
            java.io.IOException r3 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r4, r3)
            throw r3
        L26:
            java.lang.Object[] r3 = new java.lang.Object[r0]
            java.lang.String r4 = "TYPE_RST_STREAM streamId == 0"
            java.io.IOException r3 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r4, r3)
            throw r3
        L2f:
            java.lang.Object[] r3 = new java.lang.Object[r5]
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r3[r0] = r4
            java.lang.String r4 = "TYPE_RST_STREAM length: %d != 4"
            java.io.IOException r3 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r4, r3)
            throw r3
    }

    private void readSettings(org.cocos2dx.okhttp3.internal.http2.Http2Reader.Handler r6, int r7, byte r8, int r9) throws java.io.IOException {
            r5 = this;
            r0 = 0
            if (r9 != 0) goto L85
            r9 = 1
            r8 = r8 & r9
            if (r8 == 0) goto L16
            if (r7 != 0) goto Ld
            r6.ackSettings()
            return
        Ld:
            java.lang.Object[] r6 = new java.lang.Object[r0]
            java.lang.String r7 = "FRAME_SIZE_ERROR ack frame should be empty!"
            java.io.IOException r6 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r7, r6)
            throw r6
        L16:
            int r8 = r7 % 6
            if (r8 != 0) goto L76
            org.cocos2dx.okhttp3.internal.http2.Settings r8 = new org.cocos2dx.okhttp3.internal.http2.Settings
            r8.<init>()
            r1 = 0
        L20:
            if (r1 >= r7) goto L72
            org.cocos2dx.okio.BufferedSource r2 = r5.source
            short r2 = r2.readShort()
            r3 = 65535(0xffff, float:9.1834E-41)
            r2 = r2 & r3
            org.cocos2dx.okio.BufferedSource r3 = r5.source
            int r3 = r3.readInt()
            switch(r2) {
                case 1: goto L6c;
                case 2: goto L5e;
                case 3: goto L5c;
                case 4: goto L4f;
                case 5: goto L36;
                case 6: goto L6c;
                default: goto L35;
            }
        L35:
            goto L6c
        L36:
            r4 = 16384(0x4000, float:2.2959E-41)
            if (r3 < r4) goto L40
            r4 = 16777215(0xffffff, float:2.3509886E-38)
            if (r3 > r4) goto L40
            goto L6c
        L40:
            java.lang.Object[] r6 = new java.lang.Object[r9]
            java.lang.Integer r7 = java.lang.Integer.valueOf(r3)
            r6[r0] = r7
            java.lang.String r7 = "PROTOCOL_ERROR SETTINGS_MAX_FRAME_SIZE: %s"
            java.io.IOException r6 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r7, r6)
            throw r6
        L4f:
            r2 = 7
            if (r3 < 0) goto L53
            goto L6c
        L53:
            java.lang.Object[] r6 = new java.lang.Object[r0]
            java.lang.String r7 = "PROTOCOL_ERROR SETTINGS_INITIAL_WINDOW_SIZE > 2^31 - 1"
            java.io.IOException r6 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r7, r6)
            throw r6
        L5c:
            r2 = 4
            goto L6c
        L5e:
            if (r3 == 0) goto L6c
            if (r3 != r9) goto L63
            goto L6c
        L63:
            java.lang.Object[] r6 = new java.lang.Object[r0]
            java.lang.String r7 = "PROTOCOL_ERROR SETTINGS_ENABLE_PUSH != 0 or 1"
            java.io.IOException r6 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r7, r6)
            throw r6
        L6c:
            r8.set(r2, r3)
            int r1 = r1 + 6
            goto L20
        L72:
            r6.settings(r0, r8)
            return
        L76:
            java.lang.Object[] r6 = new java.lang.Object[r9]
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)
            r6[r0] = r7
            java.lang.String r7 = "TYPE_SETTINGS length %% 6 != 0: %s"
            java.io.IOException r6 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r7, r6)
            throw r6
        L85:
            java.lang.Object[] r6 = new java.lang.Object[r0]
            java.lang.String r7 = "TYPE_SETTINGS streamId != 0"
            java.io.IOException r6 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r7, r6)
            throw r6
    }

    private void readWindowUpdate(org.cocos2dx.okhttp3.internal.http2.Http2Reader.Handler r6, int r7, byte r8, int r9) throws java.io.IOException {
            r5 = this;
            r8 = 0
            r0 = 1
            r1 = 4
            if (r7 != r1) goto L29
            org.cocos2dx.okio.BufferedSource r7 = r5.source
            int r7 = r7.readInt()
            long r1 = (long) r7
            r3 = 2147483647(0x7fffffff, double:1.060997895E-314)
            long r1 = r1 & r3
            r3 = 0
            int r7 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r7 == 0) goto L1a
            r6.windowUpdate(r9, r1)
            return
        L1a:
            java.lang.Object[] r6 = new java.lang.Object[r0]
            java.lang.Long r7 = java.lang.Long.valueOf(r1)
            r6[r8] = r7
            java.lang.String r7 = "windowSizeIncrement was 0"
            java.io.IOException r6 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r7, r6)
            throw r6
        L29:
            java.lang.Object[] r6 = new java.lang.Object[r0]
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)
            r6[r8] = r7
            java.lang.String r7 = "TYPE_WINDOW_UPDATE length !=4: %s"
            java.io.IOException r6 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r7, r6)
            throw r6
    }

    @Override
    public void close() throws java.io.IOException {
            r1 = this;
            org.cocos2dx.okio.BufferedSource r0 = r1.source
            r0.close()
            return
    }

    public boolean nextFrame(boolean r7, org.cocos2dx.okhttp3.internal.http2.Http2Reader.Handler r8) throws java.io.IOException {
            r6 = this;
            r0 = 0
            org.cocos2dx.okio.BufferedSource r1 = r6.source     // Catch: java.io.IOException -> L96
            r2 = 9
            r1.require(r2)     // Catch: java.io.IOException -> L96
            org.cocos2dx.okio.BufferedSource r1 = r6.source
            int r1 = readMedium(r1)
            r2 = 1
            if (r1 < 0) goto L87
            r3 = 16384(0x4000, float:2.2959E-41)
            if (r1 > r3) goto L87
            org.cocos2dx.okio.BufferedSource r3 = r6.source
            byte r3 = r3.readByte()
            r3 = r3 & 255(0xff, float:3.57E-43)
            byte r3 = (byte) r3
            if (r7 == 0) goto L33
            r7 = 4
            if (r3 != r7) goto L24
            goto L33
        L24:
            java.lang.Object[] r7 = new java.lang.Object[r2]
            java.lang.Byte r8 = java.lang.Byte.valueOf(r3)
            r7[r0] = r8
            java.lang.String r8 = "Expected a SETTINGS frame but was %s"
            java.io.IOException r7 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r8, r7)
            throw r7
        L33:
            org.cocos2dx.okio.BufferedSource r7 = r6.source
            byte r7 = r7.readByte()
            r7 = r7 & 255(0xff, float:3.57E-43)
            byte r7 = (byte) r7
            org.cocos2dx.okio.BufferedSource r0 = r6.source
            int r0 = r0.readInt()
            r4 = 2147483647(0x7fffffff, float:NaN)
            r0 = r0 & r4
            java.util.logging.Logger r4 = org.cocos2dx.okhttp3.internal.http2.Http2Reader.logger
            java.util.logging.Level r5 = java.util.logging.Level.FINE
            boolean r4 = r4.isLoggable(r5)
            if (r4 == 0) goto L59
            java.util.logging.Logger r4 = org.cocos2dx.okhttp3.internal.http2.Http2Reader.logger
            java.lang.String r5 = org.cocos2dx.okhttp3.internal.http2.Http2.frameLog(r2, r0, r1, r3, r7)
            r4.fine(r5)
        L59:
            switch(r3) {
                case 0: goto L83;
                case 1: goto L7f;
                case 2: goto L7b;
                case 3: goto L77;
                case 4: goto L73;
                case 5: goto L6f;
                case 6: goto L6b;
                case 7: goto L67;
                case 8: goto L63;
                default: goto L5c;
            }
        L5c:
            org.cocos2dx.okio.BufferedSource r7 = r6.source
            long r0 = (long) r1
            r7.skip(r0)
            goto L86
        L63:
            r6.readWindowUpdate(r8, r1, r7, r0)
            goto L86
        L67:
            r6.readGoAway(r8, r1, r7, r0)
            goto L86
        L6b:
            r6.readPing(r8, r1, r7, r0)
            goto L86
        L6f:
            r6.readPushPromise(r8, r1, r7, r0)
            goto L86
        L73:
            r6.readSettings(r8, r1, r7, r0)
            goto L86
        L77:
            r6.readRstStream(r8, r1, r7, r0)
            goto L86
        L7b:
            r6.readPriority(r8, r1, r7, r0)
            goto L86
        L7f:
            r6.readHeaders(r8, r1, r7, r0)
            goto L86
        L83:
            r6.readData(r8, r1, r7, r0)
        L86:
            return r2
        L87:
            java.lang.Object[] r7 = new java.lang.Object[r2]
            java.lang.Integer r8 = java.lang.Integer.valueOf(r1)
            r7[r0] = r8
            java.lang.String r8 = "FRAME_SIZE_ERROR: %s"
            java.io.IOException r7 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r8, r7)
            throw r7
        L96:
            return r0
    }

    public void readConnectionPreface(org.cocos2dx.okhttp3.internal.http2.Http2Reader.Handler r6) throws java.io.IOException {
            r5 = this;
            boolean r0 = r5.client
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L16
            boolean r6 = r5.nextFrame(r2, r6)
            if (r6 == 0) goto Ld
            goto L48
        Ld:
            java.lang.Object[] r6 = new java.lang.Object[r1]
            java.lang.String r0 = "Required SETTINGS preface not received"
            java.io.IOException r6 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r0, r6)
            throw r6
        L16:
            org.cocos2dx.okio.BufferedSource r6 = r5.source
            org.cocos2dx.okio.ByteString r0 = org.cocos2dx.okhttp3.internal.http2.Http2.CONNECTION_PREFACE
            int r0 = r0.size()
            long r3 = (long) r0
            org.cocos2dx.okio.ByteString r6 = r6.readByteString(r3)
            java.util.logging.Logger r0 = org.cocos2dx.okhttp3.internal.http2.Http2Reader.logger
            java.util.logging.Level r3 = java.util.logging.Level.FINE
            boolean r0 = r0.isLoggable(r3)
            if (r0 == 0) goto L40
            java.util.logging.Logger r0 = org.cocos2dx.okhttp3.internal.http2.Http2Reader.logger
            java.lang.Object[] r3 = new java.lang.Object[r2]
            java.lang.String r4 = r6.hex()
            r3[r1] = r4
            java.lang.String r4 = "<< CONNECTION %s"
            java.lang.String r3 = org.cocos2dx.okhttp3.internal.Util.format(r4, r3)
            r0.fine(r3)
        L40:
            org.cocos2dx.okio.ByteString r0 = org.cocos2dx.okhttp3.internal.http2.Http2.CONNECTION_PREFACE
            boolean r0 = r0.equals(r6)
            if (r0 == 0) goto L49
        L48:
            return
        L49:
            java.lang.Object[] r0 = new java.lang.Object[r2]
            java.lang.String r6 = r6.utf8()
            r0[r1] = r6
            java.lang.String r6 = "Expected a connection header but was %s"
            java.io.IOException r6 = org.cocos2dx.okhttp3.internal.http2.Http2.ioException(r6, r0)
            throw r6
    }
}
