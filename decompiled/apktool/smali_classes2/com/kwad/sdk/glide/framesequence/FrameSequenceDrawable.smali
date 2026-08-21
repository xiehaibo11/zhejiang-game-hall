.class public Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;
.super Landroid/graphics/drawable/Drawable;

# interfaces
.implements Landroid/graphics/drawable/Animatable;
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$a;,
        Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$b;
    }
.end annotation


# static fields
.field private static final DEFAULT_DELAY_MS:J = 0x64L

.field public static final LOOP_DEFAULT:I = 0x3

.field public static final LOOP_FINITE:I = 0x1

.field public static final LOOP_INF:I = 0x2

.field public static final LOOP_ONCE:I = 0x1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end field

.field private static final MIN_DELAY_MS:J = 0x14L

.field private static final STATE_DECODING:I = 0x2

.field private static final STATE_READY_TO_SWAP:I = 0x4

.field private static final STATE_SCHEDULED:I = 0x1

.field private static final STATE_WAITING_TO_SWAP:I = 0x3

.field private static final TAG:Ljava/lang/String; = "FrameSequenceDrawable"

.field private static sAllocatingBitmapProvider:Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$a;

.field private static sDecodingThread:Landroid/os/HandlerThread;

.field private static sDecodingThreadHandler:Landroid/os/Handler;

.field private static final sLock:Ljava/lang/Object;


# instance fields
.field private mBackBitmap:Landroid/graphics/Bitmap;

.field private mBackBitmapShader:Landroid/graphics/BitmapShader;

.field private final mBitmapProvider:Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$a;

.field private mCircleMaskEnabled:Z

.field private mCurrentLoop:I

.field private mDecodeRunnable:Ljava/lang/Runnable;

.field private mDestroyed:Z

.field private mFinishedCallbackRunnable:Ljava/lang/Runnable;

.field private final mFrameSequence:Lcom/kwad/sdk/glide/framesequence/FrameSequence;

.field private final mFrameSequenceState:Lcom/kwad/sdk/glide/framesequence/FrameSequence$State;

.field private mFrontBitmap:Landroid/graphics/Bitmap;

.field private mFrontBitmapShader:Landroid/graphics/BitmapShader;

.field private mLastSwap:J

.field private final mLock:Ljava/lang/Object;

.field private mLoopBehavior:I

.field private mLoopCount:I

.field private mNextFrameToDecode:I

.field private mNextSwap:J

.field private mOnFinishedListener:Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$b;

.field private final mPaint:Landroid/graphics/Paint;

.field private final mSrcRect:Landroid/graphics/Rect;

.field private mState:I

.field private mTempRectF:Landroid/graphics/RectF;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    sput-object v0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->sLock:Ljava/lang/Object;

    new-instance v0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$1;

    invoke-direct {v0}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$1;-><init>()V

    sput-object v0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->sAllocatingBitmapProvider:Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$a;

    return-void
.end method

.method public constructor <init>(Lcom/kwad/sdk/glide/framesequence/FrameSequence;)V
    .locals 1

    sget-object v0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->sAllocatingBitmapProvider:Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$a;

    invoke-direct {p0, p1, v0}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;-><init>(Lcom/kwad/sdk/glide/framesequence/FrameSequence;Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$a;)V

    return-void
.end method

.method public constructor <init>(Lcom/kwad/sdk/glide/framesequence/FrameSequence;Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$a;)V
    .locals 4

    invoke-direct {p0}, Landroid/graphics/drawable/Drawable;-><init>()V

    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mLock:Ljava/lang/Object;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mDestroyed:Z

    const/4 v1, 0x3

    iput v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mLoopBehavior:I

    const/4 v1, 0x1

    iput v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mLoopCount:I

    new-instance v2, Landroid/graphics/RectF;

    invoke-direct {v2}, Landroid/graphics/RectF;-><init>()V

    iput-object v2, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mTempRectF:Landroid/graphics/RectF;

    new-instance v2, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$2;

    invoke-direct {v2, p0}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$2;-><init>(Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;)V

    iput-object v2, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mDecodeRunnable:Ljava/lang/Runnable;

    new-instance v2, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$3;

    invoke-direct {v2, p0}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$3;-><init>(Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;)V

    iput-object v2, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFinishedCallbackRunnable:Ljava/lang/Runnable;

    if-eqz p1, :cond_0

    if-eqz p2, :cond_0

    iput-object p1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFrameSequence:Lcom/kwad/sdk/glide/framesequence/FrameSequence;

    invoke-virtual {p1}, Lcom/kwad/sdk/glide/framesequence/FrameSequence;->createState()Lcom/kwad/sdk/glide/framesequence/FrameSequence$State;

    move-result-object v2

    iput-object v2, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFrameSequenceState:Lcom/kwad/sdk/glide/framesequence/FrameSequence$State;

    invoke-virtual {p1}, Lcom/kwad/sdk/glide/framesequence/FrameSequence;->getWidth()I

    move-result v2

    invoke-virtual {p1}, Lcom/kwad/sdk/glide/framesequence/FrameSequence;->getHeight()I

    move-result p1

    iput-object p2, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mBitmapProvider:Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$a;

    invoke-static {p2, v2, p1}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->acquireAndValidateBitmap(Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$a;II)Landroid/graphics/Bitmap;

    move-result-object v3

    iput-object v3, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFrontBitmap:Landroid/graphics/Bitmap;

    invoke-static {p2, v2, p1}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->acquireAndValidateBitmap(Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$a;II)Landroid/graphics/Bitmap;

    move-result-object p2

    iput-object p2, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mBackBitmap:Landroid/graphics/Bitmap;

    new-instance p2, Landroid/graphics/Rect;

    invoke-direct {p2, v0, v0, v2, p1}, Landroid/graphics/Rect;-><init>(IIII)V

    iput-object p2, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mSrcRect:Landroid/graphics/Rect;

    new-instance p1, Landroid/graphics/Paint;

    invoke-direct {p1}, Landroid/graphics/Paint;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mPaint:Landroid/graphics/Paint;

    invoke-virtual {p1, v1}, Landroid/graphics/Paint;->setFilterBitmap(Z)V

    new-instance p1, Landroid/graphics/BitmapShader;

    iget-object p2, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFrontBitmap:Landroid/graphics/Bitmap;

    sget-object v1, Landroid/graphics/Shader$TileMode;->CLAMP:Landroid/graphics/Shader$TileMode;

    invoke-direct {p1, p2, v1, v1}, Landroid/graphics/BitmapShader;-><init>(Landroid/graphics/Bitmap;Landroid/graphics/Shader$TileMode;Landroid/graphics/Shader$TileMode;)V

    iput-object p1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFrontBitmapShader:Landroid/graphics/BitmapShader;

    new-instance p1, Landroid/graphics/BitmapShader;

    iget-object p2, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mBackBitmap:Landroid/graphics/Bitmap;

    sget-object v1, Landroid/graphics/Shader$TileMode;->CLAMP:Landroid/graphics/Shader$TileMode;

    invoke-direct {p1, p2, v1, v1}, Landroid/graphics/BitmapShader;-><init>(Landroid/graphics/Bitmap;Landroid/graphics/Shader$TileMode;Landroid/graphics/Shader$TileMode;)V

    iput-object p1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mBackBitmapShader:Landroid/graphics/BitmapShader;

    const-wide/16 p1, 0x0

    iput-wide p1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mLastSwap:J

    const/4 p1, -0x1

    iput p1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mNextFrameToDecode:I

    iget-object p2, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFrameSequenceState:Lcom/kwad/sdk/glide/framesequence/FrameSequence$State;

    iget-object v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFrontBitmap:Landroid/graphics/Bitmap;

    invoke-virtual {p2, v0, v1, p1}, Lcom/kwad/sdk/glide/framesequence/FrameSequence$State;->getFrame(ILandroid/graphics/Bitmap;I)J

    invoke-static {}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->initializeDecodingThread()V

    return-void

    :cond_0
    new-instance p1, Ljava/lang/IllegalArgumentException;

    invoke-direct {p1}, Ljava/lang/IllegalArgumentException;-><init>()V

    throw p1
.end method

.method public constructor <init>(Ljava/io/InputStream;)V
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/glide/framesequence/FrameSequence;->decodeStream(Ljava/io/InputStream;)Lcom/kwad/sdk/glide/framesequence/FrameSequence;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;-><init>(Lcom/kwad/sdk/glide/framesequence/FrameSequence;)V

    return-void
.end method

.method static synthetic access$000(Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;)Ljava/lang/Object;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mLock:Ljava/lang/Object;

    return-object p0
.end method

.method static synthetic access$100(Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mDestroyed:Z

    return p0
.end method

.method static synthetic access$200(Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;)I
    .locals 0

    iget p0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mNextFrameToDecode:I

    return p0
.end method

.method static synthetic access$202(Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;I)I
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mNextFrameToDecode:I

    return p1
.end method

.method static synthetic access$300(Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;)Landroid/graphics/Bitmap;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mBackBitmap:Landroid/graphics/Bitmap;

    return-object p0
.end method

.method static synthetic access$302(Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mBackBitmap:Landroid/graphics/Bitmap;

    return-object p1
.end method

.method static synthetic access$400(Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;)I
    .locals 0

    iget p0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mState:I

    return p0
.end method

.method static synthetic access$402(Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;I)I
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mState:I

    return p1
.end method

.method static synthetic access$500(Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;)Lcom/kwad/sdk/glide/framesequence/FrameSequence$State;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFrameSequenceState:Lcom/kwad/sdk/glide/framesequence/FrameSequence$State;

    return-object p0
.end method

.method static synthetic access$600(Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mNextSwap:J

    return-wide v0
.end method

.method static synthetic access$602(Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;J)J
    .locals 0

    iput-wide p1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mNextSwap:J

    return-wide p1
.end method

.method static synthetic access$700(Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mLastSwap:J

    return-wide v0
.end method

.method static synthetic access$800(Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;)Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mBitmapProvider:Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$a;

    return-object p0
.end method

.method static synthetic access$900(Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;)Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mOnFinishedListener:Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$b;

    return-object p0
.end method

.method private static acquireAndValidateBitmap(Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$a;II)Landroid/graphics/Bitmap;
    .locals 1

    invoke-interface {p0, p1, p2}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$a;->w(II)Landroid/graphics/Bitmap;

    move-result-object p0

    invoke-virtual {p0}, Landroid/graphics/Bitmap;->getWidth()I

    move-result v0

    if-lt v0, p1, :cond_0

    invoke-virtual {p0}, Landroid/graphics/Bitmap;->getHeight()I

    move-result p1

    if-lt p1, p2, :cond_0

    invoke-virtual {p0}, Landroid/graphics/Bitmap;->getConfig()Landroid/graphics/Bitmap$Config;

    move-result-object p1

    sget-object p2, Landroid/graphics/Bitmap$Config;->ARGB_8888:Landroid/graphics/Bitmap$Config;

    if-ne p1, p2, :cond_0

    return-object p0

    :cond_0
    new-instance p0, Ljava/lang/IllegalArgumentException;

    const-string p1, "Invalid bitmap provided"

    invoke-direct {p0, p1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method private checkDestroyedLocked()V
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mDestroyed:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    new-instance v0, Ljava/lang/IllegalStateException;

    const-string v1, "Cannot perform operation on recycled drawable"

    invoke-direct {v0, v1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method private static initializeDecodingThread()V
    .locals 4

    sget-object v0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->sLock:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->sDecodingThread:Landroid/os/HandlerThread;

    if-eqz v1, :cond_0

    monitor-exit v0

    return-void

    :cond_0
    new-instance v1, Landroid/os/HandlerThread;

    const-string v2, "FrameSequence decoding thread"

    const/16 v3, 0xa

    invoke-direct {v1, v2, v3}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;I)V

    sput-object v1, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->sDecodingThread:Landroid/os/HandlerThread;

    invoke-virtual {v1}, Landroid/os/HandlerThread;->start()V

    new-instance v1, Landroid/os/Handler;

    sget-object v2, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->sDecodingThread:Landroid/os/HandlerThread;

    invoke-virtual {v2}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    sput-object v1, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->sDecodingThreadHandler:Landroid/os/Handler;

    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method private scheduleDecodeLocked()V
    .locals 2

    const/4 v0, 0x1

    iput v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mState:I

    iget v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mNextFrameToDecode:I

    add-int/2addr v1, v0

    iget-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFrameSequence:Lcom/kwad/sdk/glide/framesequence/FrameSequence;

    invoke-virtual {v0}, Lcom/kwad/sdk/glide/framesequence/FrameSequence;->getFrameCount()I

    move-result v0

    rem-int/2addr v1, v0

    iput v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mNextFrameToDecode:I

    sget-object v0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->sDecodingThreadHandler:Landroid/os/Handler;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mDecodeRunnable:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    sget-object v0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->sDecodingThreadHandler:Landroid/os/Handler;

    iget-object v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mDecodeRunnable:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method


# virtual methods
.method public destroy()V
    .locals 5

    iget-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mBitmapProvider:Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$a;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mLock:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget-boolean v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mDestroyed:Z

    if-eqz v1, :cond_0

    monitor-exit v0

    return-void

    :cond_0
    iget-object v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFrontBitmap:Landroid/graphics/Bitmap;

    const/4 v2, 0x0

    iput-object v2, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFrontBitmap:Landroid/graphics/Bitmap;

    iget v3, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mState:I

    const/4 v4, 0x2

    if-eq v3, v4, :cond_1

    iget-object v3, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mBackBitmap:Landroid/graphics/Bitmap;

    iput-object v2, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mBackBitmap:Landroid/graphics/Bitmap;

    move-object v2, v3

    :cond_1
    const/4 v3, 0x1

    iput-boolean v3, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mDestroyed:Z

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    iget-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mBitmapProvider:Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$a;

    invoke-interface {v0, v1}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$a;->a(Landroid/graphics/Bitmap;)V

    if-eqz v2, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mBitmapProvider:Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$a;

    invoke-interface {v0, v2}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$a;->a(Landroid/graphics/Bitmap;)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFrameSequenceState:Lcom/kwad/sdk/glide/framesequence/FrameSequence$State;

    invoke-virtual {v0}, Lcom/kwad/sdk/glide/framesequence/FrameSequence$State;->destroy()V

    iget-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFrameSequence:Lcom/kwad/sdk/glide/framesequence/FrameSequence;

    invoke-virtual {v0}, Lcom/kwad/sdk/glide/framesequence/FrameSequence;->destroy()V

    return-void

    :catchall_0
    move-exception v1

    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v1

    :cond_3
    new-instance v0, Ljava/lang/IllegalStateException;

    const-string v1, "BitmapProvider must be non-null"

    invoke-direct {v0, v1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public draw(Landroid/graphics/Canvas;)V
    .locals 10

    iget-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mLock:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    invoke-virtual {p0}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->isDestroyed()Z

    move-result v1

    if-eqz v1, :cond_0

    monitor-exit v0

    return-void

    :cond_0
    iget v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mState:I

    const/4 v2, 0x4

    const-wide/16 v3, 0x0

    const/4 v5, 0x3

    if-ne v1, v5, :cond_1

    iget-wide v6, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mNextSwap:J

    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v8

    sub-long/2addr v6, v8

    cmp-long v1, v6, v3

    if-gtz v1, :cond_1

    iput v2, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mState:I

    :cond_1
    invoke-virtual {p0}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->isRunning()Z

    move-result v1

    if-eqz v1, :cond_6

    iget v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mState:I

    if-ne v1, v2, :cond_6

    iget-object v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mBackBitmap:Landroid/graphics/Bitmap;

    iget-object v2, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFrontBitmap:Landroid/graphics/Bitmap;

    iput-object v2, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mBackBitmap:Landroid/graphics/Bitmap;

    iput-object v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFrontBitmap:Landroid/graphics/Bitmap;

    iget-object v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mBackBitmapShader:Landroid/graphics/BitmapShader;

    iget-object v2, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFrontBitmapShader:Landroid/graphics/BitmapShader;

    iput-object v2, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mBackBitmapShader:Landroid/graphics/BitmapShader;

    iput-object v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFrontBitmapShader:Landroid/graphics/BitmapShader;

    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v1

    iput-wide v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mLastSwap:J

    iget v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mNextFrameToDecode:I

    iget-object v2, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFrameSequence:Lcom/kwad/sdk/glide/framesequence/FrameSequence;

    invoke-virtual {v2}, Lcom/kwad/sdk/glide/framesequence/FrameSequence;->getFrameCount()I

    move-result v2

    const/4 v6, 0x1

    sub-int/2addr v2, v6

    if-ne v1, v2, :cond_4

    iget v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mCurrentLoop:I

    add-int/2addr v1, v6

    iput v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mCurrentLoop:I

    iget v2, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mLoopBehavior:I

    if-ne v2, v6, :cond_2

    iget v2, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mLoopCount:I

    if-eq v1, v2, :cond_3

    :cond_2
    iget v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mLoopBehavior:I

    if-ne v1, v5, :cond_4

    iget v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mCurrentLoop:I

    iget-object v2, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFrameSequence:Lcom/kwad/sdk/glide/framesequence/FrameSequence;

    invoke-virtual {v2}, Lcom/kwad/sdk/glide/framesequence/FrameSequence;->getDefaultLoopCount()I

    move-result v2

    if-ne v1, v2, :cond_4

    :cond_3
    const/4 v6, 0x0

    :cond_4
    if-eqz v6, :cond_5

    invoke-direct {p0}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->scheduleDecodeLocked()V

    goto :goto_0

    :cond_5
    iget-object v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFinishedCallbackRunnable:Ljava/lang/Runnable;

    invoke-virtual {p0, v1}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->unscheduleSelf(Ljava/lang/Runnable;)V

    iget-object v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFinishedCallbackRunnable:Ljava/lang/Runnable;

    invoke-virtual {p0, v1, v3, v4}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->scheduleSelf(Ljava/lang/Runnable;J)V

    :cond_6
    :goto_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    iget-boolean v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mCircleMaskEnabled:Z

    if-eqz v0, :cond_7

    invoke-virtual {p0}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->getBounds()Landroid/graphics/Rect;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->getIntrinsicWidth()I

    move-result v1

    invoke-virtual {p0}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->getIntrinsicHeight()I

    move-result v2

    invoke-virtual {v0}, Landroid/graphics/Rect;->width()I

    move-result v3

    int-to-float v3, v3

    const/high16 v4, 0x3f800000    # 1.0f

    mul-float/2addr v3, v4

    int-to-float v1, v1

    div-float/2addr v3, v1

    invoke-virtual {v0}, Landroid/graphics/Rect;->height()I

    move-result v5

    int-to-float v5, v5

    mul-float/2addr v5, v4

    int-to-float v2, v2

    div-float/2addr v5, v2

    invoke-virtual {p1}, Landroid/graphics/Canvas;->save()I

    iget v4, v0, Landroid/graphics/Rect;->left:I

    int-to-float v4, v4

    iget v6, v0, Landroid/graphics/Rect;->top:I

    int-to-float v6, v6

    invoke-virtual {p1, v4, v6}, Landroid/graphics/Canvas;->translate(FF)V

    invoke-virtual {p1, v3, v5}, Landroid/graphics/Canvas;->scale(FF)V

    invoke-virtual {v0}, Landroid/graphics/Rect;->width()I

    move-result v4

    invoke-virtual {v0}, Landroid/graphics/Rect;->height()I

    move-result v0

    invoke-static {v4, v0}, Ljava/lang/Math;->min(II)I

    move-result v0

    int-to-float v0, v0

    div-float v3, v0, v3

    div-float/2addr v0, v5

    iget-object v4, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mTempRectF:Landroid/graphics/RectF;

    sub-float v5, v1, v3

    const/high16 v6, 0x40000000    # 2.0f

    div-float/2addr v5, v6

    sub-float v7, v2, v0

    div-float/2addr v7, v6

    add-float/2addr v1, v3

    div-float/2addr v1, v6

    add-float/2addr v2, v0

    div-float/2addr v2, v6

    invoke-virtual {v4, v5, v7, v1, v2}, Landroid/graphics/RectF;->set(FFFF)V

    iget-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mPaint:Landroid/graphics/Paint;

    iget-object v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFrontBitmapShader:Landroid/graphics/BitmapShader;

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setShader(Landroid/graphics/Shader;)Landroid/graphics/Shader;

    iget-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mTempRectF:Landroid/graphics/RectF;

    iget-object v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mPaint:Landroid/graphics/Paint;

    invoke-virtual {p1, v0, v1}, Landroid/graphics/Canvas;->drawOval(Landroid/graphics/RectF;Landroid/graphics/Paint;)V

    invoke-virtual {p1}, Landroid/graphics/Canvas;->restore()V

    return-void

    :cond_7
    iget-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mPaint:Landroid/graphics/Paint;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setShader(Landroid/graphics/Shader;)Landroid/graphics/Shader;

    iget-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFrontBitmap:Landroid/graphics/Bitmap;

    iget-object v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mSrcRect:Landroid/graphics/Rect;

    invoke-virtual {p0}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->getBounds()Landroid/graphics/Rect;

    move-result-object v2

    iget-object v3, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mPaint:Landroid/graphics/Paint;

    invoke-virtual {p1, v0, v1, v2, v3}, Landroid/graphics/Canvas;->drawBitmap(Landroid/graphics/Bitmap;Landroid/graphics/Rect;Landroid/graphics/Rect;Landroid/graphics/Paint;)V

    return-void

    :catchall_0
    move-exception p1

    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method public final getCircleMaskEnabled()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mCircleMaskEnabled:Z

    return v0
.end method

.method public getIntrinsicHeight()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFrameSequence:Lcom/kwad/sdk/glide/framesequence/FrameSequence;

    invoke-virtual {v0}, Lcom/kwad/sdk/glide/framesequence/FrameSequence;->getHeight()I

    move-result v0

    return v0
.end method

.method public getIntrinsicWidth()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFrameSequence:Lcom/kwad/sdk/glide/framesequence/FrameSequence;

    invoke-virtual {v0}, Lcom/kwad/sdk/glide/framesequence/FrameSequence;->getWidth()I

    move-result v0

    return v0
.end method

.method public getOpacity()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFrameSequence:Lcom/kwad/sdk/glide/framesequence/FrameSequence;

    invoke-virtual {v0}, Lcom/kwad/sdk/glide/framesequence/FrameSequence;->isOpaque()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, -0x1

    return v0

    :cond_0
    const/4 v0, -0x2

    return v0
.end method

.method public getSize()I
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFrameSequence:Lcom/kwad/sdk/glide/framesequence/FrameSequence;

    invoke-virtual {v0}, Lcom/kwad/sdk/glide/framesequence/FrameSequence;->getWidth()I

    move-result v0

    iget-object v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mFrameSequence:Lcom/kwad/sdk/glide/framesequence/FrameSequence;

    invoke-virtual {v1}, Lcom/kwad/sdk/glide/framesequence/FrameSequence;->getHeight()I

    move-result v1

    mul-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x4

    return v0
.end method

.method public isDestroyed()Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mLock:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget-boolean v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mDestroyed:Z

    monitor-exit v0

    return v1

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public isRunning()Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mLock:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mNextFrameToDecode:I

    if-ltz v1, :cond_0

    iget-boolean v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mDestroyed:Z

    if-nez v1, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    monitor-exit v0

    return v1

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public run()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mLock:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mNextFrameToDecode:I

    if-ltz v1, :cond_0

    iget v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mState:I

    const/4 v2, 0x3

    if-ne v1, v2, :cond_0

    const/4 v1, 0x4

    iput v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mState:I

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_1

    invoke-virtual {p0}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->invalidateSelf()V

    :cond_1
    return-void

    :catchall_0
    move-exception v1

    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v1
.end method

.method public setAlpha(I)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mPaint:Landroid/graphics/Paint;

    invoke-virtual {v0, p1}, Landroid/graphics/Paint;->setAlpha(I)V

    return-void
.end method

.method public final setCircleMaskEnabled(Z)V
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mCircleMaskEnabled:Z

    if-eq v0, p1, :cond_0

    iput-boolean p1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mCircleMaskEnabled:Z

    iget-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mPaint:Landroid/graphics/Paint;

    invoke-virtual {v0, p1}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    invoke-virtual {p0}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->invalidateSelf()V

    :cond_0
    return-void
.end method

.method public setColorFilter(Landroid/graphics/ColorFilter;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mPaint:Landroid/graphics/Paint;

    invoke-virtual {v0, p1}, Landroid/graphics/Paint;->setColorFilter(Landroid/graphics/ColorFilter;)Landroid/graphics/ColorFilter;

    return-void
.end method

.method public setFilterBitmap(Z)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mPaint:Landroid/graphics/Paint;

    invoke-virtual {v0, p1}, Landroid/graphics/Paint;->setFilterBitmap(Z)V

    return-void
.end method

.method public setLoopCount(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mLoopCount:I

    return-void
.end method

.method public setOnFinishedListener(Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mOnFinishedListener:Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$b;

    return-void
.end method

.method public setVisible(ZZ)Z
    .locals 0

    invoke-super {p0, p1, p2}, Landroid/graphics/drawable/Drawable;->setVisible(ZZ)Z

    move-result p1

    return p1
.end method

.method public start()V
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->isRunning()Z

    move-result v0

    if-nez v0, :cond_2

    invoke-virtual {p0}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->isDestroyed()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mLock:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mState:I

    const/4 v2, 0x1

    if-ne v1, v2, :cond_1

    monitor-exit v0

    return-void

    :cond_1
    const/4 v1, 0x0

    iput v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mCurrentLoop:I

    invoke-direct {p0}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->scheduleDecodeLocked()V

    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    :cond_2
    return-void
.end method

.method public stop()V
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->isRunning()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p0, p0}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->unscheduleSelf(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method public unscheduleSelf(Ljava/lang/Runnable;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mLock:Ljava/lang/Object;

    monitor-enter v0

    const/4 v1, -0x1

    :try_start_0
    iput v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mNextFrameToDecode:I

    const/4 v1, 0x0

    iput v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->mState:I

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-super {p0, p1}, Landroid/graphics/drawable/Drawable;->unscheduleSelf(Ljava/lang/Runnable;)V

    return-void

    :catchall_0
    move-exception p1

    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method
