package com.kwad.sdk.glide.framesequence;

public class FrameSequenceDrawable extends android.graphics.drawable.Drawable implements android.graphics.drawable.Animatable, java.lang.Runnable {
    private static final long DEFAULT_DELAY_MS = 100;
    public static final int LOOP_DEFAULT = 3;
    public static final int LOOP_FINITE = 1;
    public static final int LOOP_INF = 2;

    @java.lang.Deprecated
    public static final int LOOP_ONCE = 1;
    private static final long MIN_DELAY_MS = 20;
    private static final int STATE_DECODING = 2;
    private static final int STATE_READY_TO_SWAP = 4;
    private static final int STATE_SCHEDULED = 1;
    private static final int STATE_WAITING_TO_SWAP = 3;
    private static final java.lang.String TAG = "FrameSequenceDrawable";
    private static com.kwad.sdk.glide.framesequence.FrameSequenceDrawable.a sAllocatingBitmapProvider;
    private static android.os.HandlerThread sDecodingThread;
    private static android.os.Handler sDecodingThreadHandler;
    private static final java.lang.Object sLock = null;
    private android.graphics.Bitmap mBackBitmap;
    private android.graphics.BitmapShader mBackBitmapShader;
    private final com.kwad.sdk.glide.framesequence.FrameSequenceDrawable.a mBitmapProvider;
    private boolean mCircleMaskEnabled;
    private int mCurrentLoop;
    private java.lang.Runnable mDecodeRunnable;
    private boolean mDestroyed;
    private java.lang.Runnable mFinishedCallbackRunnable;
    private final com.kwad.sdk.glide.framesequence.FrameSequence mFrameSequence;
    private final com.kwad.sdk.glide.framesequence.FrameSequence.State mFrameSequenceState;
    private android.graphics.Bitmap mFrontBitmap;
    private android.graphics.BitmapShader mFrontBitmapShader;
    private long mLastSwap;
    private final java.lang.Object mLock;
    private int mLoopBehavior;
    private int mLoopCount;
    private int mNextFrameToDecode;
    private long mNextSwap;
    private com.kwad.sdk.glide.framesequence.FrameSequenceDrawable.b mOnFinishedListener;
    private final android.graphics.Paint mPaint;
    private final android.graphics.Rect mSrcRect;
    private int mState;
    private android.graphics.RectF mTempRectF;




    public interface a {
        void a(android.graphics.Bitmap r1);

        android.graphics.Bitmap w(int r1, int r2);
    }

    public interface b {
    }

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.kwad.sdk.glide.framesequence.FrameSequenceDrawable.sLock = r0
            com.kwad.sdk.glide.framesequence.FrameSequenceDrawable$1 r0 = new com.kwad.sdk.glide.framesequence.FrameSequenceDrawable$1
            r0.<init>()
            com.kwad.sdk.glide.framesequence.FrameSequenceDrawable.sAllocatingBitmapProvider = r0
            return
    }

    public FrameSequenceDrawable(com.kwad.sdk.glide.framesequence.FrameSequence r2) {
            r1 = this;
            com.kwad.sdk.glide.framesequence.FrameSequenceDrawable$a r0 = com.kwad.sdk.glide.framesequence.FrameSequenceDrawable.sAllocatingBitmapProvider
            r1.<init>(r2, r0)
            return
    }

    public FrameSequenceDrawable(com.kwad.sdk.glide.framesequence.FrameSequence r5, com.kwad.sdk.glide.framesequence.FrameSequenceDrawable.a r6) {
            r4 = this;
            r4.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r4.mLock = r0
            r0 = 0
            r4.mDestroyed = r0
            r1 = 3
            r4.mLoopBehavior = r1
            r1 = 1
            r4.mLoopCount = r1
            android.graphics.RectF r2 = new android.graphics.RectF
            r2.<init>()
            r4.mTempRectF = r2
            com.kwad.sdk.glide.framesequence.FrameSequenceDrawable$2 r2 = new com.kwad.sdk.glide.framesequence.FrameSequenceDrawable$2
            r2.<init>(r4)
            r4.mDecodeRunnable = r2
            com.kwad.sdk.glide.framesequence.FrameSequenceDrawable$3 r2 = new com.kwad.sdk.glide.framesequence.FrameSequenceDrawable$3
            r2.<init>(r4)
            r4.mFinishedCallbackRunnable = r2
            if (r5 == 0) goto L83
            if (r6 == 0) goto L83
            r4.mFrameSequence = r5
            com.kwad.sdk.glide.framesequence.FrameSequence$State r2 = r5.createState()
            r4.mFrameSequenceState = r2
            int r2 = r5.getWidth()
            int r5 = r5.getHeight()
            r4.mBitmapProvider = r6
            android.graphics.Bitmap r3 = acquireAndValidateBitmap(r6, r2, r5)
            r4.mFrontBitmap = r3
            android.graphics.Bitmap r6 = acquireAndValidateBitmap(r6, r2, r5)
            r4.mBackBitmap = r6
            android.graphics.Rect r6 = new android.graphics.Rect
            r6.<init>(r0, r0, r2, r5)
            r4.mSrcRect = r6
            android.graphics.Paint r5 = new android.graphics.Paint
            r5.<init>()
            r4.mPaint = r5
            r5.setFilterBitmap(r1)
            android.graphics.BitmapShader r5 = new android.graphics.BitmapShader
            android.graphics.Bitmap r6 = r4.mFrontBitmap
            android.graphics.Shader$TileMode r1 = android.graphics.Shader.TileMode.CLAMP
            r5.<init>(r6, r1, r1)
            r4.mFrontBitmapShader = r5
            android.graphics.BitmapShader r5 = new android.graphics.BitmapShader
            android.graphics.Bitmap r6 = r4.mBackBitmap
            android.graphics.Shader$TileMode r1 = android.graphics.Shader.TileMode.CLAMP
            r5.<init>(r6, r1, r1)
            r4.mBackBitmapShader = r5
            r5 = 0
            r4.mLastSwap = r5
            r5 = -1
            r4.mNextFrameToDecode = r5
            com.kwad.sdk.glide.framesequence.FrameSequence$State r6 = r4.mFrameSequenceState
            android.graphics.Bitmap r1 = r4.mFrontBitmap
            r6.getFrame(r0, r1, r5)
            initializeDecodingThread()
            return
        L83:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            r5.<init>()
            throw r5
    }

    public FrameSequenceDrawable(java.io.InputStream r1) {
            r0 = this;
            com.kwad.sdk.glide.framesequence.FrameSequence r1 = com.kwad.sdk.glide.framesequence.FrameSequence.decodeStream(r1)
            r0.<init>(r1)
            return
    }

    static java.lang.Object access$000(com.kwad.sdk.glide.framesequence.FrameSequenceDrawable r0) {
            java.lang.Object r0 = r0.mLock
            return r0
    }

    static boolean access$100(com.kwad.sdk.glide.framesequence.FrameSequenceDrawable r0) {
            boolean r0 = r0.mDestroyed
            return r0
    }

    static int access$200(com.kwad.sdk.glide.framesequence.FrameSequenceDrawable r0) {
            int r0 = r0.mNextFrameToDecode
            return r0
    }

    static int access$202(com.kwad.sdk.glide.framesequence.FrameSequenceDrawable r0, int r1) {
            r0.mNextFrameToDecode = r1
            return r1
    }

    static android.graphics.Bitmap access$300(com.kwad.sdk.glide.framesequence.FrameSequenceDrawable r0) {
            android.graphics.Bitmap r0 = r0.mBackBitmap
            return r0
    }

    static android.graphics.Bitmap access$302(com.kwad.sdk.glide.framesequence.FrameSequenceDrawable r0, android.graphics.Bitmap r1) {
            r0.mBackBitmap = r1
            return r1
    }

    static int access$400(com.kwad.sdk.glide.framesequence.FrameSequenceDrawable r0) {
            int r0 = r0.mState
            return r0
    }

    static int access$402(com.kwad.sdk.glide.framesequence.FrameSequenceDrawable r0, int r1) {
            r0.mState = r1
            return r1
    }

    static com.kwad.sdk.glide.framesequence.FrameSequence.State access$500(com.kwad.sdk.glide.framesequence.FrameSequenceDrawable r0) {
            com.kwad.sdk.glide.framesequence.FrameSequence$State r0 = r0.mFrameSequenceState
            return r0
    }

    static long access$600(com.kwad.sdk.glide.framesequence.FrameSequenceDrawable r2) {
            long r0 = r2.mNextSwap
            return r0
    }

    static long access$602(com.kwad.sdk.glide.framesequence.FrameSequenceDrawable r0, long r1) {
            r0.mNextSwap = r1
            return r1
    }

    static long access$700(com.kwad.sdk.glide.framesequence.FrameSequenceDrawable r2) {
            long r0 = r2.mLastSwap
            return r0
    }

    static com.kwad.sdk.glide.framesequence.FrameSequenceDrawable.a access$800(com.kwad.sdk.glide.framesequence.FrameSequenceDrawable r0) {
            com.kwad.sdk.glide.framesequence.FrameSequenceDrawable$a r0 = r0.mBitmapProvider
            return r0
    }

    static com.kwad.sdk.glide.framesequence.FrameSequenceDrawable.b access$900(com.kwad.sdk.glide.framesequence.FrameSequenceDrawable r0) {
            com.kwad.sdk.glide.framesequence.FrameSequenceDrawable$b r0 = r0.mOnFinishedListener
            return r0
    }

    private static android.graphics.Bitmap acquireAndValidateBitmap(com.kwad.sdk.glide.framesequence.FrameSequenceDrawable.a r1, int r2, int r3) {
            android.graphics.Bitmap r1 = r1.w(r2, r3)
            int r0 = r1.getWidth()
            if (r0 < r2) goto L19
            int r2 = r1.getHeight()
            if (r2 < r3) goto L19
            android.graphics.Bitmap$Config r2 = r1.getConfig()
            android.graphics.Bitmap$Config r3 = android.graphics.Bitmap.Config.ARGB_8888
            if (r2 != r3) goto L19
            return r1
        L19:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "Invalid bitmap provided"
            r1.<init>(r2)
            throw r1
    }

    private void checkDestroyedLocked() {
            r2 = this;
            boolean r0 = r2.mDestroyed
            if (r0 != 0) goto L5
            return
        L5:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Cannot perform operation on recycled drawable"
            r0.<init>(r1)
            throw r0
    }

    private static void initializeDecodingThread() {
            java.lang.Object r0 = com.kwad.sdk.glide.framesequence.FrameSequenceDrawable.sLock
            monitor-enter(r0)
            android.os.HandlerThread r1 = com.kwad.sdk.glide.framesequence.FrameSequenceDrawable.sDecodingThread     // Catch: java.lang.Throwable -> L26
            if (r1 == 0) goto L9
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L26
            return
        L9:
            android.os.HandlerThread r1 = new android.os.HandlerThread     // Catch: java.lang.Throwable -> L26
            java.lang.String r2 = "FrameSequence decoding thread"
            r3 = 10
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L26
            com.kwad.sdk.glide.framesequence.FrameSequenceDrawable.sDecodingThread = r1     // Catch: java.lang.Throwable -> L26
            r1.start()     // Catch: java.lang.Throwable -> L26
            android.os.Handler r1 = new android.os.Handler     // Catch: java.lang.Throwable -> L26
            android.os.HandlerThread r2 = com.kwad.sdk.glide.framesequence.FrameSequenceDrawable.sDecodingThread     // Catch: java.lang.Throwable -> L26
            android.os.Looper r2 = r2.getLooper()     // Catch: java.lang.Throwable -> L26
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L26
            com.kwad.sdk.glide.framesequence.FrameSequenceDrawable.sDecodingThreadHandler = r1     // Catch: java.lang.Throwable -> L26
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L26
            return
        L26:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L26
            throw r1
    }

    private void scheduleDecodeLocked() {
            r2 = this;
            r0 = 1
            r2.mState = r0
            int r1 = r2.mNextFrameToDecode
            int r1 = r1 + r0
            com.kwad.sdk.glide.framesequence.FrameSequence r0 = r2.mFrameSequence
            int r0 = r0.getFrameCount()
            int r1 = r1 % r0
            r2.mNextFrameToDecode = r1
            android.os.Handler r0 = com.kwad.sdk.glide.framesequence.FrameSequenceDrawable.sDecodingThreadHandler
            if (r0 == 0) goto L1f
            java.lang.Runnable r1 = r2.mDecodeRunnable
            r0.removeCallbacks(r1)
            android.os.Handler r0 = com.kwad.sdk.glide.framesequence.FrameSequenceDrawable.sDecodingThreadHandler
            java.lang.Runnable r1 = r2.mDecodeRunnable
            r0.post(r1)
        L1f:
            return
    }

    public void destroy() {
            r5 = this;
            com.kwad.sdk.glide.framesequence.FrameSequenceDrawable$a r0 = r5.mBitmapProvider
            if (r0 == 0) goto L3a
            java.lang.Object r0 = r5.mLock
            monitor-enter(r0)
            boolean r1 = r5.mDestroyed     // Catch: java.lang.Throwable -> L37
            if (r1 == 0) goto Ld
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L37
            return
        Ld:
            android.graphics.Bitmap r1 = r5.mFrontBitmap     // Catch: java.lang.Throwable -> L37
            r2 = 0
            r5.mFrontBitmap = r2     // Catch: java.lang.Throwable -> L37
            int r3 = r5.mState     // Catch: java.lang.Throwable -> L37
            r4 = 2
            if (r3 == r4) goto L1c
            android.graphics.Bitmap r3 = r5.mBackBitmap     // Catch: java.lang.Throwable -> L37
            r5.mBackBitmap = r2     // Catch: java.lang.Throwable -> L37
            r2 = r3
        L1c:
            r3 = 1
            r5.mDestroyed = r3     // Catch: java.lang.Throwable -> L37
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L37
            com.kwad.sdk.glide.framesequence.FrameSequenceDrawable$a r0 = r5.mBitmapProvider
            r0.a(r1)
            if (r2 == 0) goto L2c
            com.kwad.sdk.glide.framesequence.FrameSequenceDrawable$a r0 = r5.mBitmapProvider
            r0.a(r2)
        L2c:
            com.kwad.sdk.glide.framesequence.FrameSequence$State r0 = r5.mFrameSequenceState
            r0.destroy()
            com.kwad.sdk.glide.framesequence.FrameSequence r0 = r5.mFrameSequence
            r0.destroy()
            return
        L37:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L37
            throw r1
        L3a:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "BitmapProvider must be non-null"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public void draw(android.graphics.Canvas r11) {
            r10 = this;
            java.lang.Object r0 = r10.mLock
            monitor-enter(r0)
            boolean r1 = r10.isDestroyed()     // Catch: java.lang.Throwable -> Lf1
            if (r1 == 0) goto Lb
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lf1
            return
        Lb:
            int r1 = r10.mState     // Catch: java.lang.Throwable -> Lf1
            r2 = 4
            r3 = 0
            r5 = 3
            if (r1 != r5) goto L20
            long r6 = r10.mNextSwap     // Catch: java.lang.Throwable -> Lf1
            long r8 = android.os.SystemClock.uptimeMillis()     // Catch: java.lang.Throwable -> Lf1
            long r6 = r6 - r8
            int r1 = (r6 > r3 ? 1 : (r6 == r3 ? 0 : -1))
            if (r1 > 0) goto L20
            r10.mState = r2     // Catch: java.lang.Throwable -> Lf1
        L20:
            boolean r1 = r10.isRunning()     // Catch: java.lang.Throwable -> Lf1
            if (r1 == 0) goto L78
            int r1 = r10.mState     // Catch: java.lang.Throwable -> Lf1
            if (r1 != r2) goto L78
            android.graphics.Bitmap r1 = r10.mBackBitmap     // Catch: java.lang.Throwable -> Lf1
            android.graphics.Bitmap r2 = r10.mFrontBitmap     // Catch: java.lang.Throwable -> Lf1
            r10.mBackBitmap = r2     // Catch: java.lang.Throwable -> Lf1
            r10.mFrontBitmap = r1     // Catch: java.lang.Throwable -> Lf1
            android.graphics.BitmapShader r1 = r10.mBackBitmapShader     // Catch: java.lang.Throwable -> Lf1
            android.graphics.BitmapShader r2 = r10.mFrontBitmapShader     // Catch: java.lang.Throwable -> Lf1
            r10.mBackBitmapShader = r2     // Catch: java.lang.Throwable -> Lf1
            r10.mFrontBitmapShader = r1     // Catch: java.lang.Throwable -> Lf1
            long r1 = android.os.SystemClock.uptimeMillis()     // Catch: java.lang.Throwable -> Lf1
            r10.mLastSwap = r1     // Catch: java.lang.Throwable -> Lf1
            int r1 = r10.mNextFrameToDecode     // Catch: java.lang.Throwable -> Lf1
            com.kwad.sdk.glide.framesequence.FrameSequence r2 = r10.mFrameSequence     // Catch: java.lang.Throwable -> Lf1
            int r2 = r2.getFrameCount()     // Catch: java.lang.Throwable -> Lf1
            r6 = 1
            int r2 = r2 - r6
            if (r1 != r2) goto L68
            int r1 = r10.mCurrentLoop     // Catch: java.lang.Throwable -> Lf1
            int r1 = r1 + r6
            r10.mCurrentLoop = r1     // Catch: java.lang.Throwable -> Lf1
            int r2 = r10.mLoopBehavior     // Catch: java.lang.Throwable -> Lf1
            if (r2 != r6) goto L59
            int r2 = r10.mLoopCount     // Catch: java.lang.Throwable -> Lf1
            if (r1 == r2) goto L67
        L59:
            int r1 = r10.mLoopBehavior     // Catch: java.lang.Throwable -> Lf1
            if (r1 != r5) goto L68
            int r1 = r10.mCurrentLoop     // Catch: java.lang.Throwable -> Lf1
            com.kwad.sdk.glide.framesequence.FrameSequence r2 = r10.mFrameSequence     // Catch: java.lang.Throwable -> Lf1
            int r2 = r2.getDefaultLoopCount()     // Catch: java.lang.Throwable -> Lf1
            if (r1 != r2) goto L68
        L67:
            r6 = 0
        L68:
            if (r6 == 0) goto L6e
            r10.scheduleDecodeLocked()     // Catch: java.lang.Throwable -> Lf1
            goto L78
        L6e:
            java.lang.Runnable r1 = r10.mFinishedCallbackRunnable     // Catch: java.lang.Throwable -> Lf1
            r10.unscheduleSelf(r1)     // Catch: java.lang.Throwable -> Lf1
            java.lang.Runnable r1 = r10.mFinishedCallbackRunnable     // Catch: java.lang.Throwable -> Lf1
            r10.scheduleSelf(r1, r3)     // Catch: java.lang.Throwable -> Lf1
        L78:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lf1
            boolean r0 = r10.mCircleMaskEnabled
            if (r0 == 0) goto Ldd
            android.graphics.Rect r0 = r10.getBounds()
            int r1 = r10.getIntrinsicWidth()
            int r2 = r10.getIntrinsicHeight()
            int r3 = r0.width()
            float r3 = (float) r3
            r4 = 1065353216(0x3f800000, float:1.0)
            float r3 = r3 * r4
            float r1 = (float) r1
            float r3 = r3 / r1
            int r5 = r0.height()
            float r5 = (float) r5
            float r5 = r5 * r4
            float r2 = (float) r2
            float r5 = r5 / r2
            r11.save()
            int r4 = r0.left
            float r4 = (float) r4
            int r6 = r0.top
            float r6 = (float) r6
            r11.translate(r4, r6)
            r11.scale(r3, r5)
            int r4 = r0.width()
            int r0 = r0.height()
            int r0 = java.lang.Math.min(r4, r0)
            float r0 = (float) r0
            float r3 = r0 / r3
            float r0 = r0 / r5
            android.graphics.RectF r4 = r10.mTempRectF
            float r5 = r1 - r3
            r6 = 1073741824(0x40000000, float:2.0)
            float r5 = r5 / r6
            float r7 = r2 - r0
            float r7 = r7 / r6
            float r1 = r1 + r3
            float r1 = r1 / r6
            float r2 = r2 + r0
            float r2 = r2 / r6
            r4.set(r5, r7, r1, r2)
            android.graphics.Paint r0 = r10.mPaint
            android.graphics.BitmapShader r1 = r10.mFrontBitmapShader
            r0.setShader(r1)
            android.graphics.RectF r0 = r10.mTempRectF
            android.graphics.Paint r1 = r10.mPaint
            r11.drawOval(r0, r1)
            r11.restore()
            return
        Ldd:
            android.graphics.Paint r0 = r10.mPaint
            r1 = 0
            r0.setShader(r1)
            android.graphics.Bitmap r0 = r10.mFrontBitmap
            android.graphics.Rect r1 = r10.mSrcRect
            android.graphics.Rect r2 = r10.getBounds()
            android.graphics.Paint r3 = r10.mPaint
            r11.drawBitmap(r0, r1, r2, r3)
            return
        Lf1:
            r11 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lf1
            throw r11
    }

    public final boolean getCircleMaskEnabled() {
            r1 = this;
            boolean r0 = r1.mCircleMaskEnabled
            return r0
    }

    @Override
    public int getIntrinsicHeight() {
            r1 = this;
            com.kwad.sdk.glide.framesequence.FrameSequence r0 = r1.mFrameSequence
            int r0 = r0.getHeight()
            return r0
    }

    @Override
    public int getIntrinsicWidth() {
            r1 = this;
            com.kwad.sdk.glide.framesequence.FrameSequence r0 = r1.mFrameSequence
            int r0 = r0.getWidth()
            return r0
    }

    @Override
    public int getOpacity() {
            r1 = this;
            com.kwad.sdk.glide.framesequence.FrameSequence r0 = r1.mFrameSequence
            boolean r0 = r0.isOpaque()
            if (r0 == 0) goto La
            r0 = -1
            return r0
        La:
            r0 = -2
            return r0
    }

    public int getSize() {
            r2 = this;
            com.kwad.sdk.glide.framesequence.FrameSequence r0 = r2.mFrameSequence
            int r0 = r0.getWidth()
            com.kwad.sdk.glide.framesequence.FrameSequence r1 = r2.mFrameSequence
            int r1 = r1.getHeight()
            int r0 = r0 * r1
            int r0 = r0 * 4
            return r0
    }

    public boolean isDestroyed() {
            r2 = this;
            java.lang.Object r0 = r2.mLock
            monitor-enter(r0)
            boolean r1 = r2.mDestroyed     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            throw r1
    }

    @Override
    public boolean isRunning() {
            r2 = this;
            java.lang.Object r0 = r2.mLock
            monitor-enter(r0)
            int r1 = r2.mNextFrameToDecode     // Catch: java.lang.Throwable -> L10
            if (r1 < 0) goto Ld
            boolean r1 = r2.mDestroyed     // Catch: java.lang.Throwable -> L10
            if (r1 != 0) goto Ld
            r1 = 1
            goto Le
        Ld:
            r1 = 0
        Le:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            return r1
        L10:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            throw r1
    }

    @Override
    public void run() {
            r3 = this;
            java.lang.Object r0 = r3.mLock
            monitor-enter(r0)
            int r1 = r3.mNextFrameToDecode     // Catch: java.lang.Throwable -> L19
            if (r1 < 0) goto L11
            int r1 = r3.mState     // Catch: java.lang.Throwable -> L19
            r2 = 3
            if (r1 != r2) goto L11
            r1 = 4
            r3.mState = r1     // Catch: java.lang.Throwable -> L19
            r1 = 1
            goto L12
        L11:
            r1 = 0
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            if (r1 == 0) goto L18
            r3.invalidateSelf()
        L18:
            return
        L19:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            throw r1
    }

    @Override
    public void setAlpha(int r2) {
            r1 = this;
            android.graphics.Paint r0 = r1.mPaint
            r0.setAlpha(r2)
            return
    }

    public final void setCircleMaskEnabled(boolean r2) {
            r1 = this;
            boolean r0 = r1.mCircleMaskEnabled
            if (r0 == r2) goto Le
            r1.mCircleMaskEnabled = r2
            android.graphics.Paint r0 = r1.mPaint
            r0.setAntiAlias(r2)
            r1.invalidateSelf()
        Le:
            return
    }

    @Override
    public void setColorFilter(android.graphics.ColorFilter r2) {
            r1 = this;
            android.graphics.Paint r0 = r1.mPaint
            r0.setColorFilter(r2)
            return
    }

    @Override
    public void setFilterBitmap(boolean r2) {
            r1 = this;
            android.graphics.Paint r0 = r1.mPaint
            r0.setFilterBitmap(r2)
            return
    }

    public void setLoopCount(int r1) {
            r0 = this;
            r0.mLoopCount = r1
            return
    }

    public void setOnFinishedListener(com.kwad.sdk.glide.framesequence.FrameSequenceDrawable.b r1) {
            r0 = this;
            r0.mOnFinishedListener = r1
            return
    }

    @Override
    public boolean setVisible(boolean r1, boolean r2) {
            r0 = this;
            boolean r1 = super.setVisible(r1, r2)
            return r1
    }

    @Override
    public void start() {
            r3 = this;
            boolean r0 = r3.isRunning()
            if (r0 != 0) goto L22
            boolean r0 = r3.isDestroyed()
            if (r0 == 0) goto Ld
            return
        Ld:
            java.lang.Object r0 = r3.mLock
            monitor-enter(r0)
            int r1 = r3.mState     // Catch: java.lang.Throwable -> L1f
            r2 = 1
            if (r1 != r2) goto L17
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1f
            return
        L17:
            r1 = 0
            r3.mCurrentLoop = r1     // Catch: java.lang.Throwable -> L1f
            r3.scheduleDecodeLocked()     // Catch: java.lang.Throwable -> L1f
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1f
            return
        L1f:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1f
            throw r1
        L22:
            return
    }

    @Override
    public void stop() {
            r1 = this;
            boolean r0 = r1.isRunning()
            if (r0 == 0) goto L9
            r1.unscheduleSelf(r1)
        L9:
            return
    }

    @Override
    public void unscheduleSelf(java.lang.Runnable r3) {
            r2 = this;
            java.lang.Object r0 = r2.mLock
            monitor-enter(r0)
            r1 = -1
            r2.mNextFrameToDecode = r1     // Catch: java.lang.Throwable -> Le
            r1 = 0
            r2.mState = r1     // Catch: java.lang.Throwable -> Le
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le
            super.unscheduleSelf(r3)
            return
        Le:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le
            throw r3
    }
}
