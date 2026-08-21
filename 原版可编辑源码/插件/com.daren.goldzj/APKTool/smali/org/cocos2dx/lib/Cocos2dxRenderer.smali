.class public Lorg/cocos2dx/lib/Cocos2dxRenderer;
.super Ljava/lang/Object;
.source "Cocos2dxRenderer.java"

# interfaces
.implements Landroid/opengl/GLSurfaceView$Renderer;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lorg/cocos2dx/lib/Cocos2dxRenderer$OnGameEngineInitializedListener;
    }
.end annotation


# static fields
.field private static final INTERVAL_60_FPS:J = 0xfe502aL

.field private static final NANOSECONDSPERMICROSECOND:J = 0xf4240L

.field private static final NANOSECONDSPERSECOND:J = 0x3b9aca00L

.field private static final TAG:Ljava/lang/String; = "Cocos2dxRenderer"

.field private static isSupportAstc:Ljava/lang/String; = "1"

.field private static sAnimationInterval:J = 0xfe502aL

.field private static sRenderer:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Lorg/cocos2dx/lib/Cocos2dxRenderer;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private mDefaultResourcePath:Ljava/lang/String;

.field private mFrameCount:J

.field private mGameEngineInitializedListener:Lorg/cocos2dx/lib/Cocos2dxRenderer$OnGameEngineInitializedListener;

.field private mLastTickInNanoSeconds:J

.field private mNativeInitCompleted:Z

.field private mNeedShowFPS:Z

.field private mNeedToPause:Z

.field private mOldNanoTime:J

.field private mScreenHeight:I

.field private mScreenWidth:I


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 3

    .line 34
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 54
    iput-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mNativeInitCompleted:Z

    .line 55
    iput-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mNeedShowFPS:Z

    const-string v1, ""

    .line 56
    iput-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mDefaultResourcePath:Ljava/lang/String;

    const-wide/16 v1, 0x0

    .line 57
    iput-wide v1, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mOldNanoTime:J

    .line 58
    iput-wide v1, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mFrameCount:J

    .line 59
    iput-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mNeedToPause:Z

    return-void
.end method

.method static synthetic access$000(Lorg/cocos2dx/lib/Cocos2dxRenderer;)Lorg/cocos2dx/lib/Cocos2dxRenderer$OnGameEngineInitializedListener;
    .locals 0

    .line 34
    iget-object p0, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mGameEngineInitializedListener:Lorg/cocos2dx/lib/Cocos2dxRenderer$OnGameEngineInitializedListener;

    return-object p0
.end method

.method public static getSupportAstc()Ljava/lang/String;
    .locals 1

    .line 125
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->isSupportAstc:Ljava/lang/String;

    return-object v0
.end method

.method private static native nativeDeleteBackward()V
.end method

.method private static native nativeGetContentText()Ljava/lang/String;
.end method

.method private static native nativeInit(IILjava/lang/String;)V
.end method

.method private static native nativeInsertText(Ljava/lang/String;)V
.end method

.method private static native nativeKeyEvent(IZ)Z
.end method

.method private static native nativeOnPause()V
.end method

.method private static native nativeOnResume()V
.end method

.method private static native nativeOnSurfaceChanged(II)V
.end method

.method private static native nativeRender()V
.end method

.method private static native nativeTouchesBegin(IFF)V
.end method

.method private static native nativeTouchesCancel([I[F[F)V
.end method

.method private static native nativeTouchesEnd(IFF)V
.end method

.method private static native nativeTouchesMove([I[F[F)V
.end method

.method public static setPreferredFramesPerSecond(I)V
    .locals 4

    int-to-double v0, p0

    const-wide/high16 v2, 0x3ff0000000000000L    # 1.0

    div-double/2addr v2, v0

    const-wide v0, 0x41cdcd6500000000L    # 1.0E9

    mul-double v2, v2, v0

    double-to-long v0, v2

    .line 71
    sput-wide v0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->sAnimationInterval:J

    return-void
.end method


# virtual methods
.method public getContentText()Ljava/lang/String;
    .locals 1

    .line 273
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxRenderer;->nativeGetContentText()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public handleActionCancel([I[F[F)V
    .locals 1

    .line 214
    iget-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mNativeInitCompleted:Z

    if-nez v0, :cond_0

    return-void

    .line 217
    :cond_0
    invoke-static {p1, p2, p3}, Lorg/cocos2dx/lib/Cocos2dxRenderer;->nativeTouchesCancel([I[F[F)V

    return-void
.end method

.method public handleActionDown(IFF)V
    .locals 1

    .line 200
    iget-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mNativeInitCompleted:Z

    if-nez v0, :cond_0

    return-void

    .line 203
    :cond_0
    invoke-static {p1, p2, p3}, Lorg/cocos2dx/lib/Cocos2dxRenderer;->nativeTouchesBegin(IFF)V

    return-void
.end method

.method public handleActionMove([I[F[F)V
    .locals 1

    .line 221
    iget-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mNativeInitCompleted:Z

    if-nez v0, :cond_0

    return-void

    .line 224
    :cond_0
    invoke-static {p1, p2, p3}, Lorg/cocos2dx/lib/Cocos2dxRenderer;->nativeTouchesMove([I[F[F)V

    return-void
.end method

.method public handleActionUp(IFF)V
    .locals 1

    .line 207
    iget-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mNativeInitCompleted:Z

    if-nez v0, :cond_0

    return-void

    .line 210
    :cond_0
    invoke-static {p1, p2, p3}, Lorg/cocos2dx/lib/Cocos2dxRenderer;->nativeTouchesEnd(IFF)V

    return-void
.end method

.method public handleDeleteBackward()V
    .locals 0

    .line 269
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxRenderer;->nativeDeleteBackward()V

    return-void
.end method

.method public handleInsertText(Ljava/lang/String;)V
    .locals 0

    .line 265
    invoke-static {p1}, Lorg/cocos2dx/lib/Cocos2dxRenderer;->nativeInsertText(Ljava/lang/String;)V

    return-void
.end method

.method public handleKeyDown(I)V
    .locals 1

    .line 228
    iget-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mNativeInitCompleted:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 231
    invoke-static {p1, v0}, Lorg/cocos2dx/lib/Cocos2dxRenderer;->nativeKeyEvent(IZ)Z

    return-void
.end method

.method public handleKeyUp(I)V
    .locals 1

    .line 235
    iget-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mNativeInitCompleted:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    .line 238
    invoke-static {p1, v0}, Lorg/cocos2dx/lib/Cocos2dxRenderer;->nativeKeyEvent(IZ)Z

    return-void
.end method

.method public handleOnPause()V
    .locals 1

    .line 248
    iget-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mNativeInitCompleted:Z

    if-nez v0, :cond_0

    return-void

    .line 251
    :cond_0
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->onEnterBackground()V

    .line 252
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxRenderer;->nativeOnPause()V

    return-void
.end method

.method public handleOnResume()V
    .locals 0

    .line 256
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->onEnterForeground()V

    .line 257
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxRenderer;->nativeOnResume()V

    return-void
.end method

.method public onDrawFrame(Ljavax/microedition/khronos/opengles/GL10;)V
    .locals 6

    .line 135
    iget-boolean p1, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mNeedToPause:Z

    if-eqz p1, :cond_0

    return-void

    .line 138
    :cond_0
    iget-boolean p1, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mNeedShowFPS:Z

    if-eqz p1, :cond_2

    .line 141
    iget-wide v0, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mFrameCount:J

    const-wide/16 v2, 0x1

    add-long/2addr v0, v2

    iput-wide v0, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mFrameCount:J

    .line 142
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v0

    .line 143
    iget-wide v2, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mOldNanoTime:J

    sub-long/2addr v0, v2

    const-wide/32 v2, 0x3b9aca00

    cmp-long p1, v0, v2

    if-lez p1, :cond_2

    const-wide v2, 0x41cdcd6500000000L    # 1.0E9

    .line 145
    iget-wide v4, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mFrameCount:J

    long-to-double v4, v4

    mul-double v4, v4, v2

    long-to-double v0, v0

    div-double/2addr v4, v0

    .line 146
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getOnGameInfoUpdatedListener()Lorg/cocos2dx/lib/Cocos2dxHelper$OnGameInfoUpdatedListener;

    move-result-object p1

    if-eqz p1, :cond_1

    double-to-float v0, v4

    .line 148
    invoke-interface {p1, v0}, Lorg/cocos2dx/lib/Cocos2dxHelper$OnGameInfoUpdatedListener;->onFPSUpdated(F)V

    :cond_1
    const-wide/16 v0, 0x0

    .line 150
    iput-wide v0, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mFrameCount:J

    .line 151
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v0

    iput-wide v0, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mOldNanoTime:J

    .line 159
    :cond_2
    sget-wide v0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->sAnimationInterval:J

    const-wide/32 v2, 0xfe502a

    cmp-long p1, v0, v2

    if-gtz p1, :cond_3

    .line 160
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxRenderer;->nativeRender()V

    goto :goto_0

    .line 162
    :cond_3
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v0

    .line 163
    iget-wide v2, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mLastTickInNanoSeconds:J

    sub-long/2addr v0, v2

    .line 165
    sget-wide v2, Lorg/cocos2dx/lib/Cocos2dxRenderer;->sAnimationInterval:J

    cmp-long p1, v0, v2

    if-gez p1, :cond_4

    sub-long/2addr v2, v0

    const-wide/32 v0, 0xf4240

    .line 167
    :try_start_0
    div-long/2addr v2, v0

    invoke-static {v2, v3}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 174
    :catch_0
    :cond_4
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v0

    iput-wide v0, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mLastTickInNanoSeconds:J

    .line 175
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxRenderer;->nativeRender()V

    :goto_0
    return-void
.end method

.method public onSurfaceChanged(Ljavax/microedition/khronos/opengles/GL10;II)V
    .locals 0

    .line 130
    invoke-static {p2, p3}, Lorg/cocos2dx/lib/Cocos2dxRenderer;->nativeOnSurfaceChanged(II)V

    return-void
.end method

.method public onSurfaceCreated(Ljavax/microedition/khronos/opengles/GL10;Ljavax/microedition/khronos/egl/EGLConfig;)V
    .locals 2

    const/4 p2, 0x0

    .line 105
    iput-boolean p2, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mNativeInitCompleted:Z

    .line 106
    iget p2, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mScreenWidth:I

    iget v0, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mScreenHeight:I

    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mDefaultResourcePath:Ljava/lang/String;

    invoke-static {p2, v0, v1}, Lorg/cocos2dx/lib/Cocos2dxRenderer;->nativeInit(IILjava/lang/String;)V

    .line 107
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v0

    iput-wide v0, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mOldNanoTime:J

    .line 108
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v0

    iput-wide v0, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mLastTickInNanoSeconds:J

    const/4 p2, 0x1

    .line 109
    iput-boolean p2, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mNativeInitCompleted:Z

    .line 110
    iget-object p2, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mGameEngineInitializedListener:Lorg/cocos2dx/lib/Cocos2dxRenderer$OnGameEngineInitializedListener;

    if-eqz p2, :cond_0

    .line 111
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getActivity()Landroid/app/Activity;

    move-result-object p2

    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxRenderer$1;

    invoke-direct {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxRenderer$1;-><init>(Lorg/cocos2dx/lib/Cocos2dxRenderer;)V

    invoke-virtual {p2, v0}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    :cond_0
    const/16 p2, 0x1f03

    .line 118
    invoke-interface {p1, p2}, Ljavax/microedition/khronos/opengles/GL10;->glGetString(I)Ljava/lang/String;

    move-result-object p1

    const-string p2, "GL_KHR_texture_compression_astc_ldr"

    .line 119
    invoke-virtual {p1, p2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    const-string p1, ""

    .line 120
    sput-object p1, Lorg/cocos2dx/lib/Cocos2dxRenderer;->isSupportAstc:Ljava/lang/String;

    :cond_1
    return-void
.end method

.method public setDefaultResourcePath(Ljava/lang/String;)V
    .locals 0

    if-nez p1, :cond_0

    return-void

    .line 82
    :cond_0
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mDefaultResourcePath:Ljava/lang/String;

    return-void
.end method

.method public setOnGameEngineInitializedListener(Lorg/cocos2dx/lib/Cocos2dxRenderer$OnGameEngineInitializedListener;)V
    .locals 0

    .line 96
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mGameEngineInitializedListener:Lorg/cocos2dx/lib/Cocos2dxRenderer$OnGameEngineInitializedListener;

    return-void
.end method

.method public setPauseInMainThread(Z)V
    .locals 0

    .line 196
    iput-boolean p1, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mNeedToPause:Z

    return-void
.end method

.method public setScreenWidthAndHeight(II)V
    .locals 0

    .line 75
    iput p1, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mScreenWidth:I

    .line 76
    iput p2, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mScreenHeight:I

    return-void
.end method

.method public showFPS()V
    .locals 1

    const/4 v0, 0x1

    .line 86
    iput-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxRenderer;->mNeedShowFPS:Z

    return-void
.end method
