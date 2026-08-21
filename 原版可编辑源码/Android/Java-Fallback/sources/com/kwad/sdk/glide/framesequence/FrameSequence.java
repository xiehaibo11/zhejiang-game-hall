package com.kwad.sdk.glide.framesequence;

public class FrameSequence implements java.io.Serializable {
    private static final java.util.concurrent.atomic.AtomicBoolean ISLOADED = null;
    private int mDefaultLoopCount;
    private int mFrameCount;
    private int mHeight;
    private long mNativeFrameSequence;
    private boolean mOpaque;
    private int mWidth;

    static class State implements java.io.Serializable {
        private long mNativeState;

        public State(long r1) {
                r0 = this;
                r0.<init>()
                r0.mNativeState = r1
                return
        }

        public void destroy() {
                r5 = this;
                long r0 = r5.mNativeState
                r2 = 0
                int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r4 == 0) goto Ld
                com.kwad.sdk.glide.framesequence.FrameSequence.access$000(r0)
                r5.mNativeState = r2
            Ld:
                return
        }

        public long getFrame(int r5, android.graphics.Bitmap r6, int r7) {
                r4 = this;
                if (r6 == 0) goto L1f
                android.graphics.Bitmap$Config r0 = r6.getConfig()
                android.graphics.Bitmap$Config r1 = android.graphics.Bitmap.Config.ARGB_8888
                if (r0 != r1) goto L1f
                long r0 = r4.mNativeState
                r2 = 0
                int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r2 == 0) goto L17
                long r5 = com.kwad.sdk.glide.framesequence.FrameSequence.access$100(r0, r5, r6, r7)
                return r5
            L17:
                java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
                java.lang.String r6 = "attempted to draw destroyed FrameSequenceState"
                r5.<init>(r6)
                throw r5
            L1f:
                java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
                java.lang.String r6 = "Bitmap passed must be non-null and ARGB_8888"
                r5.<init>(r6)
                throw r5
        }
    }

    static {
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            com.kwad.sdk.glide.framesequence.FrameSequence.ISLOADED = r0
            java.lang.String r0 = "framesequencev2"
            java.lang.System.loadLibrary(r0)     // Catch: java.lang.Throwable -> L14
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.sdk.glide.framesequence.FrameSequence.ISLOADED     // Catch: java.lang.Throwable -> L14
            r2 = 1
            r0.set(r2)     // Catch: java.lang.Throwable -> L14
            return
        L14:
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.sdk.glide.framesequence.FrameSequence.ISLOADED
            r0.set(r1)
            return
    }

    public FrameSequence() {
            r0 = this;
            r0.<init>()
            return
    }

    private FrameSequence(long r1, int r3, int r4, boolean r5, int r6, int r7) {
            r0 = this;
            r0.<init>()
            r0.mNativeFrameSequence = r1
            r0.mWidth = r3
            r0.mHeight = r4
            r0.mOpaque = r5
            r0.mFrameCount = r6
            r0.mDefaultLoopCount = r7
            return
    }

    static void access$000(long r0) {
            nativeDestroyState(r0)
            return
    }

    static long access$100(long r0, int r2, android.graphics.Bitmap r3, int r4) {
            long r0 = nativeGetFrame(r0, r2, r3, r4)
            return r0
    }

    public static com.kwad.sdk.glide.framesequence.FrameSequence decodeByteArray(byte[] r2) {
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.sdk.glide.framesequence.FrameSequence.ISLOADED
            boolean r0 = r0.get()
            if (r0 != 0) goto La
            r2 = 0
            return r2
        La:
            r0 = 0
            int r1 = r2.length
            com.kwad.sdk.glide.framesequence.FrameSequence r2 = decodeByteArray(r2, r0, r1)
            return r2
    }

    public static com.kwad.sdk.glide.framesequence.FrameSequence decodeByteArray(byte[] r2, int r3, int r4) {
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.sdk.glide.framesequence.FrameSequence.ISLOADED
            boolean r0 = r0.get()
            if (r0 != 0) goto La
            r2 = 0
            return r2
        La:
            if (r2 == 0) goto L22
            if (r3 < 0) goto L1a
            if (r4 < 0) goto L1a
            int r0 = r3 + r4
            int r1 = r2.length
            if (r0 > r1) goto L1a
            com.kwad.sdk.glide.framesequence.FrameSequence r2 = nativeDecodeByteArray(r2, r3, r4)
            return r2
        L1a:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "invalid offset/length parameters"
            r2.<init>(r3)
            throw r2
        L22:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            r2.<init>()
            throw r2
    }

    public static com.kwad.sdk.glide.framesequence.FrameSequence decodeByteBuffer(java.nio.ByteBuffer r2) {
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.sdk.glide.framesequence.FrameSequence.ISLOADED
            boolean r0 = r0.get()
            if (r0 != 0) goto La
            r2 = 0
            return r2
        La:
            if (r2 == 0) goto L3e
            boolean r0 = r2.isDirect()
            if (r0 != 0) goto L31
            boolean r0 = r2.hasArray()
            if (r0 == 0) goto L29
            byte[] r0 = r2.array()
            int r1 = r2.position()
            int r2 = r2.remaining()
            com.kwad.sdk.glide.framesequence.FrameSequence r2 = decodeByteArray(r0, r1, r2)
            return r2
        L29:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Cannot have non-direct ByteBuffer with no byte array"
            r2.<init>(r0)
            throw r2
        L31:
            int r0 = r2.position()
            int r1 = r2.remaining()
            com.kwad.sdk.glide.framesequence.FrameSequence r2 = nativeDecodeByteBuffer(r2, r0, r1)
            return r2
        L3e:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            r2.<init>()
            throw r2
    }

    public static com.kwad.sdk.glide.framesequence.FrameSequence decodeStream(java.io.InputStream r1) {
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.sdk.glide.framesequence.FrameSequence.ISLOADED
            boolean r0 = r0.get()
            if (r0 != 0) goto La
            r1 = 0
            return r1
        La:
            if (r1 == 0) goto L15
            r0 = 16384(0x4000, float:2.2959E-41)
            byte[] r0 = new byte[r0]
            com.kwad.sdk.glide.framesequence.FrameSequence r1 = nativeDecodeStream(r1, r0)
            return r1
        L15:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            r1.<init>()
            throw r1
    }

    public static boolean isEnable() {
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.sdk.glide.framesequence.FrameSequence.ISLOADED
            boolean r0 = r0.get()
            return r0
    }

    private static native long nativeCreateState(long r0);

    private static native com.kwad.sdk.glide.framesequence.FrameSequence nativeDecodeByteArray(byte[] r0, int r1, int r2);

    private static native com.kwad.sdk.glide.framesequence.FrameSequence nativeDecodeByteBuffer(java.nio.ByteBuffer r0, int r1, int r2);

    private static native com.kwad.sdk.glide.framesequence.FrameSequence nativeDecodeStream(java.io.InputStream r0, byte[] r1);

    private static native void nativeDestroyFrameSequence(long r0);

    private static native void nativeDestroyState(long r0);

    private static native long nativeGetFrame(long r0, int r2, android.graphics.Bitmap r3, int r4);

    com.kwad.sdk.glide.framesequence.FrameSequence.State createState() {
            r5 = this;
            long r0 = r5.mNativeFrameSequence
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto L18
            long r0 = nativeCreateState(r0)
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto L12
            r0 = 0
            return r0
        L12:
            com.kwad.sdk.glide.framesequence.FrameSequence$State r2 = new com.kwad.sdk.glide.framesequence.FrameSequence$State
            r2.<init>(r0)
            return r2
        L18:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "attempted to use incorrectly built FrameSequence"
            r0.<init>(r1)
            throw r0
    }

    public void destroy() {
            r4 = this;
            long r0 = r4.mNativeFrameSequence
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto Lb
            nativeDestroyFrameSequence(r0)
        Lb:
            return
    }

    public int getDefaultLoopCount() {
            r1 = this;
            int r0 = r1.mDefaultLoopCount
            return r0
    }

    public int getFrameCount() {
            r1 = this;
            int r0 = r1.mFrameCount
            return r0
    }

    public int getHeight() {
            r1 = this;
            int r0 = r1.mHeight
            return r0
    }

    public int getWidth() {
            r1 = this;
            int r0 = r1.mWidth
            return r0
    }

    public boolean isOpaque() {
            r1 = this;
            boolean r0 = r1.mOpaque
            return r0
    }
}
