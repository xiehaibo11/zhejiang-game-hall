.class public Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;
.super Ljava/lang/Object;
.source "ScreenShotLinstenManager.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$MediaContentObserver;,
        Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$OnScreenShotListener;
    }
.end annotation


# static fields
.field private static final KEYWORDS:[Ljava/lang/String;

.field private static final MEDIA_PROJECTIONS_API_16:[Ljava/lang/String;

.field private static volatile manager:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;

.field private static sScreenRealSize:Landroid/graphics/Point;


# instance fields
.field private final mContext:Landroid/content/Context;

.field private mExternalObserver:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$MediaContentObserver;

.field private mInternalObserver:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$MediaContentObserver;

.field private mListener:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$OnScreenShotListener;

.field private mStartListenTime:J

.field private final mUiHandler:Landroid/os/Handler;

.field private final sHasCallbackPaths:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 16

    const-string v0, "_data"

    const-string v1, "datetaken"

    const-string v2, "width"

    const-string v3, "height"

    .line 29
    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->MEDIA_PROJECTIONS_API_16:[Ljava/lang/String;

    const-string v1, "screenshot"

    const-string v2, "screen_shot"

    const-string v3, "screen-shot"

    const-string v4, "screen shot"

    const-string v5, "screencapture"

    const-string v6, "screen_capture"

    const-string v7, "screen-capture"

    const-string v8, "screen capture"

    const-string v9, "screencap"

    const-string v10, "screen_cap"

    const-string v11, "screen-cap"

    const-string v12, "screen cap"

    const-string v13, "\u622a\u5c4f"

    const-string v14, "Screenshots"

    const-string v15, "\u622a\u56fe"

    .line 39
    filled-new-array/range {v1 .. v15}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->KEYWORDS:[Ljava/lang/String;

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 72
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 54
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->sHasCallbackPaths:Ljava/util/List;

    .line 70
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->mUiHandler:Landroid/os/Handler;

    if-eqz p1, :cond_2

    .line 76
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->mContext:Landroid/content/Context;

    .line 78
    sget-object p1, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->sScreenRealSize:Landroid/graphics/Point;

    if-nez p1, :cond_1

    .line 79
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->getRealScreenSize()Landroid/graphics/Point;

    move-result-object p1

    sput-object p1, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->sScreenRealSize:Landroid/graphics/Point;

    if-eqz p1, :cond_0

    .line 81
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "Screen Real Size: "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->sScreenRealSize:Landroid/graphics/Point;

    iget v0, v0, Landroid/graphics/Point;->x:I

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, " * "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->sScreenRealSize:Landroid/graphics/Point;

    iget v0, v0, Landroid/graphics/Point;->y:I

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    goto :goto_0

    :cond_0
    const-string p1, "Get screen real size failed."

    .line 83
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    :cond_1
    :goto_0
    return-void

    .line 74
    :cond_2
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string v0, "The context must not be null."

    invoke-direct {p1, v0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method static synthetic access$000(Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;Landroid/net/Uri;)V
    .locals 0

    .line 23
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->handleMediaContentChange(Landroid/net/Uri;)V

    return-void
.end method

.method private static assertInMainThread()V
    .locals 4

    .line 162
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    if-eq v0, v1, :cond_1

    .line 163
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Thread;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object v0

    const/4 v1, 0x0

    .line 165
    array-length v2, v0

    const/4 v3, 0x4

    if-lt v2, v3, :cond_0

    const/4 v1, 0x3

    .line 166
    aget-object v0, v0, v1

    invoke-virtual {v0}, Ljava/lang/StackTraceElement;->toString()Ljava/lang/String;

    move-result-object v1

    .line 168
    :cond_0
    new-instance v0, Ljava/lang/IllegalStateException;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Call the method must be in main thread: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_1
    return-void
.end method

.method private checkCallback(Ljava/lang/String;)Z
    .locals 3

    .line 297
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->sHasCallbackPaths:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, 0x1

    return p1

    .line 301
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->sHasCallbackPaths:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    const/16 v1, 0x14

    const/4 v2, 0x0

    if-lt v0, v1, :cond_1

    const/4 v0, 0x0

    :goto_0
    const/4 v1, 0x5

    if-ge v0, v1, :cond_1

    .line 303
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->sHasCallbackPaths:Ljava/util/List;

    invoke-interface {v1, v2}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 306
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->sHasCallbackPaths:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return v2
.end method

.method private checkScreenShot(Ljava/lang/String;JII)Z
    .locals 4

    .line 253
    iget-wide v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->mStartListenTime:J

    const/4 v2, 0x0

    cmp-long v3, p2, v0

    if-ltz v3, :cond_7

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sub-long/2addr v0, p2

    const-wide/16 p2, 0x2710

    cmp-long v3, v0, p2

    if-lez v3, :cond_0

    goto :goto_1

    .line 260
    :cond_0
    sget-object p2, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->sScreenRealSize:Landroid/graphics/Point;

    if-eqz p2, :cond_3

    .line 262
    iget p2, p2, Landroid/graphics/Point;->x:I

    if-gt p4, p2, :cond_1

    sget-object p2, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->sScreenRealSize:Landroid/graphics/Point;

    iget p2, p2, Landroid/graphics/Point;->y:I

    if-le p5, p2, :cond_3

    :cond_1
    sget-object p2, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->sScreenRealSize:Landroid/graphics/Point;

    iget p2, p2, Landroid/graphics/Point;->x:I

    if-gt p5, p2, :cond_2

    sget-object p2, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->sScreenRealSize:Landroid/graphics/Point;

    iget p2, p2, Landroid/graphics/Point;->y:I

    if-le p4, p2, :cond_3

    :cond_2
    const-string p1, "\u56fe\u7247\u5c3a\u5bf8\u8d85\u51fa\u5c4f\u5e55"

    .line 264
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    return v2

    .line 271
    :cond_3
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_4

    return v2

    .line 274
    :cond_4
    invoke-virtual {p1}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object p1

    .line 276
    sget-object p2, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->KEYWORDS:[Ljava/lang/String;

    array-length p3, p2

    const/4 p4, 0x0

    :goto_0
    if-ge p4, p3, :cond_6

    aget-object p5, p2, p4

    .line 277
    invoke-virtual {p1, p5}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p5

    if-eqz p5, :cond_5

    const/4 p1, 0x1

    return p1

    :cond_5
    add-int/lit8 p4, p4, 0x1

    goto :goto_0

    :cond_6
    const-string p1, "\u8def\u5f84\u4e2d\u6ca1\u6709\u5305\u542b\u5173\u952e\u5b57"

    .line 281
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    return v2

    :cond_7
    :goto_1
    const-string p1, "\u65f6\u95f4\u8d85\u8fc710\u79d2"

    .line 254
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    return v2
.end method

.method private getImageSize(Ljava/lang/String;)Landroid/graphics/Point;
    .locals 2

    .line 286
    new-instance v0, Landroid/graphics/BitmapFactory$Options;

    invoke-direct {v0}, Landroid/graphics/BitmapFactory$Options;-><init>()V

    const/4 v1, 0x1

    .line 287
    iput-boolean v1, v0, Landroid/graphics/BitmapFactory$Options;->inJustDecodeBounds:Z

    .line 288
    invoke-static {p1, v0}, Landroid/graphics/BitmapFactory;->decodeFile(Ljava/lang/String;Landroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;

    .line 289
    new-instance p1, Landroid/graphics/Point;

    iget v1, v0, Landroid/graphics/BitmapFactory$Options;->outWidth:I

    iget v0, v0, Landroid/graphics/BitmapFactory$Options;->outHeight:I

    invoke-direct {p1, v1, v0}, Landroid/graphics/Point;-><init>(II)V

    return-object p1
.end method

.method public static getInstance(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;
    .locals 2

    .line 89
    invoke-static {}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->assertInMainThread()V

    .line 90
    sget-object v0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->manager:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;

    if-nez v0, :cond_1

    .line 91
    const-class v0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;

    monitor-enter v0

    .line 92
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->manager:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;

    if-nez v1, :cond_0

    .line 93
    new-instance v1, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->manager:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;

    .line 95
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    .line 97
    :cond_1
    :goto_0
    sget-object p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->manager:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;

    return-object p0
.end method

.method private getRealScreenSize()Landroid/graphics/Point;
    .locals 8

    const/4 v0, 0x0

    .line 316
    :try_start_0
    new-instance v1, Landroid/graphics/Point;

    invoke-direct {v1}, Landroid/graphics/Point;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    .line 317
    :try_start_1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->mContext:Landroid/content/Context;

    const-string v2, "window"

    invoke-virtual {v0, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/WindowManager;

    .line 318
    invoke-interface {v0}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object v0

    .line 319
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x11

    if-lt v2, v3, :cond_0

    .line 320
    invoke-virtual {v0, v1}, Landroid/view/Display;->getRealSize(Landroid/graphics/Point;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    .line 323
    :cond_0
    :try_start_2
    const-class v2, Landroid/view/Display;

    const-string v3, "getRawWidth"

    const/4 v4, 0x0

    new-array v5, v4, [Ljava/lang/Class;

    invoke-virtual {v2, v3, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    .line 324
    const-class v3, Landroid/view/Display;

    const-string v5, "getRawHeight"

    new-array v6, v4, [Ljava/lang/Class;

    invoke-virtual {v3, v5, v6}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v3

    new-array v5, v4, [Ljava/lang/Object;

    .line 326
    invoke-virtual {v2, v0, v5}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    new-array v4, v4, [Ljava/lang/Object;

    .line 327
    invoke-virtual {v3, v0, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    .line 325
    invoke-virtual {v1, v2, v3}, Landroid/graphics/Point;->set(II)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_1

    :catch_0
    move-exception v2

    .line 330
    :try_start_3
    invoke-virtual {v0}, Landroid/view/Display;->getWidth()I

    move-result v3

    invoke-virtual {v0}, Landroid/view/Display;->getHeight()I

    move-result v0

    invoke-virtual {v1, v3, v0}, Landroid/graphics/Point;->set(II)V

    .line 331
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    goto :goto_0

    :catch_2
    move-exception v1

    move-object v7, v1

    move-object v1, v0

    move-object v0, v7

    .line 335
    :goto_0
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    return-object v1
.end method

.method private handleMediaContentChange(Landroid/net/Uri;)V
    .locals 11

    const-string v0, "\u67e5\u8be2\u6700\u540e\u4e00\u6761\u6570\u636e\u7ed3\u675f\uff01"

    if-nez p1, :cond_0

    const-string p1, "mContentUri is null"

    .line 174
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    return-void

    .line 179
    :cond_0
    :try_start_0
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x1e

    if-lt v1, v2, :cond_1

    .line 180
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->mContext:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v2

    sget-object v4, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->MEDIA_PROJECTIONS_API_16:[Ljava/lang/String;

    const/4 v5, 0x0

    const/4 v6, 0x0

    const-string v7, "date_added DESC"

    move-object v3, p1

    invoke-virtual/range {v2 .. v7}, Landroid/content/ContentResolver;->query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1

    goto :goto_0

    .line 186
    :cond_1
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->mContext:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v2

    sget-object v4, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->MEDIA_PROJECTIONS_API_16:[Ljava/lang/String;

    const/4 v5, 0x0

    const/4 v6, 0x0

    const-string v7, "date_addeddesc limit 1"

    move-object v3, p1

    invoke-virtual/range {v2 .. v7}, Landroid/content/ContentResolver;->query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1

    :goto_0
    if-nez p1, :cond_2

    const-string p1, "mCursor\u4e3anull"

    .line 195
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 229
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    return-void

    .line 198
    :cond_2
    :try_start_1
    invoke-interface {p1}, Landroid/database/Cursor;->moveToFirst()Z

    move-result v1

    if-nez v1, :cond_3

    const-string p1, "\u67e5\u8be2\u65e0\u6570\u636e"

    .line 199
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 229
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    return-void

    :cond_3
    :try_start_2
    const-string v1, "_data"

    .line 203
    invoke-interface {p1, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    const-string v2, "datetaken"

    .line 204
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    const-string v3, "width"

    .line 207
    invoke-interface {p1, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    const-string v4, "height"

    .line 208
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    .line 211
    invoke-interface {p1, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v6

    .line 212
    invoke-interface {p1, v2}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v7

    if-ltz v3, :cond_4

    if-ltz v4, :cond_4

    .line 216
    invoke-interface {p1, v3}, Landroid/database/Cursor;->getInt(I)I

    move-result v1

    .line 217
    invoke-interface {p1, v4}, Landroid/database/Cursor;->getInt(I)I

    move-result p1

    goto :goto_1

    .line 220
    :cond_4
    invoke-direct {p0, v6}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->getImageSize(Ljava/lang/String;)Landroid/graphics/Point;

    move-result-object p1

    .line 221
    iget v1, p1, Landroid/graphics/Point;->x:I

    .line 222
    iget p1, p1, Landroid/graphics/Point;->y:I

    :goto_1
    move v10, p1

    move v9, v1

    move-object v5, p0

    .line 225
    invoke-direct/range {v5 .. v10}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->handleMediaRowData(Ljava/lang/String;JII)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p1

    goto :goto_3

    :catch_0
    move-exception p1

    .line 227
    :try_start_3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 229
    :goto_2
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    return-void

    :goto_3
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 230
    throw p1
.end method

.method private handleMediaRowData(Ljava/lang/String;JII)V
    .locals 5

    .line 234
    invoke-direct/range {p0 .. p5}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->checkScreenShot(Ljava/lang/String;JII)Z

    move-result v0

    const-string v1, "; date = "

    const-string v2, " * "

    const-string v3, "; size = "

    if-eqz v0, :cond_0

    .line 235
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "ScreenShot: path = "

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2, p3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 237
    iget-object p2, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->mListener:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$OnScreenShotListener;

    if-eqz p2, :cond_1

    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->checkCallback(Ljava/lang/String;)Z

    move-result p2

    if-nez p2, :cond_1

    .line 238
    iget-object p2, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->mListener:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$OnScreenShotListener;

    invoke-interface {p2, p1}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$OnScreenShotListener;->onShotSuccess(Ljava/lang/String;)V

    goto :goto_0

    .line 242
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Media content changed, but not screenshot: path = "

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2, p3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    :cond_1
    :goto_0
    return-void
.end method


# virtual methods
.method public setListener(Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$OnScreenShotListener;)V
    .locals 0

    .line 344
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->mListener:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$OnScreenShotListener;

    return-void
.end method

.method public startListen()V
    .locals 7

    .line 104
    invoke-static {}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->assertInMainThread()V

    .line 105
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Build.VERSION.SDK_INT = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 106
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->sHasCallbackPaths:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 109
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->mStartListenTime:J

    .line 112
    new-instance v0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$MediaContentObserver;

    sget-object v1, Landroid/provider/MediaStore$Images$Media;->INTERNAL_CONTENT_URI:Landroid/net/Uri;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->mUiHandler:Landroid/os/Handler;

    invoke-direct {v0, p0, v1, v2}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$MediaContentObserver;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;Landroid/net/Uri;Landroid/os/Handler;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->mInternalObserver:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$MediaContentObserver;

    .line 113
    new-instance v0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$MediaContentObserver;

    sget-object v1, Landroid/provider/MediaStore$Images$Media;->EXTERNAL_CONTENT_URI:Landroid/net/Uri;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->mUiHandler:Landroid/os/Handler;

    invoke-direct {v0, p0, v1, v2}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$MediaContentObserver;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;Landroid/net/Uri;Landroid/os/Handler;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->mExternalObserver:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$MediaContentObserver;

    .line 116
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    sget-object v1, Landroid/provider/MediaStore$Images$Media;->INTERNAL_CONTENT_URI:Landroid/net/Uri;

    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/4 v3, 0x1

    const/4 v4, 0x0

    const/16 v5, 0x1d

    if-lt v2, v5, :cond_0

    const/4 v2, 0x1

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    :goto_0
    iget-object v6, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->mInternalObserver:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$MediaContentObserver;

    invoke-virtual {v0, v1, v2, v6}, Landroid/content/ContentResolver;->registerContentObserver(Landroid/net/Uri;ZLandroid/database/ContentObserver;)V

    .line 121
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    sget-object v1, Landroid/provider/MediaStore$Images$Media;->EXTERNAL_CONTENT_URI:Landroid/net/Uri;

    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v2, v5, :cond_1

    goto :goto_1

    :cond_1
    const/4 v3, 0x0

    :goto_1
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->mExternalObserver:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$MediaContentObserver;

    invoke-virtual {v0, v1, v3, v2}, Landroid/content/ContentResolver;->registerContentObserver(Landroid/net/Uri;ZLandroid/database/ContentObserver;)V

    return-void
.end method

.method public stopListen()V
    .locals 3

    .line 133
    invoke-static {}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->assertInMainThread()V

    .line 136
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->mInternalObserver:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$MediaContentObserver;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 138
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->mInternalObserver:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$MediaContentObserver;

    invoke-virtual {v0, v2}, Landroid/content/ContentResolver;->unregisterContentObserver(Landroid/database/ContentObserver;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 140
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 142
    :goto_0
    iput-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->mInternalObserver:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$MediaContentObserver;

    .line 144
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->mExternalObserver:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$MediaContentObserver;

    if-eqz v0, :cond_1

    .line 146
    :try_start_1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->mExternalObserver:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$MediaContentObserver;

    invoke-virtual {v0, v2}, Landroid/content/ContentResolver;->unregisterContentObserver(Landroid/database/ContentObserver;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    .line 148
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 150
    :goto_1
    iput-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->mExternalObserver:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$MediaContentObserver;

    :cond_1
    const-wide/16 v0, 0x0

    .line 154
    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->mStartListenTime:J

    .line 155
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->sHasCallbackPaths:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    return-void
.end method
