.class public Lcom/sigmob/sdk/videoAd/b;
.super Landroid/widget/VideoView;


# static fields
.field private static final b:I = 0x1

.field private static final c:I = -0x80000000


# instance fields
.field protected final a:Landroid/media/MediaMetadataRetriever;

.field private d:I

.field private e:I


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0, p1}, Landroid/widget/VideoView;-><init>(Landroid/content/Context;)V

    const-string v0, "context cannot be null"

    invoke-static {p1, v0}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;Ljava/lang/String;)Z

    new-instance p1, Landroid/media/MediaMetadataRetriever;

    invoke-direct {p1}, Landroid/media/MediaMetadataRetriever;-><init>()V

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/b;->a:Landroid/media/MediaMetadataRetriever;

    return-void
.end method

.method private a(Landroid/media/MediaPlayer;Landroid/content/Context;)V
    .locals 9

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-lt v0, v1, :cond_0

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1c

    if-ge v0, v1, :cond_0

    :try_start_0
    const-string v0, "android.media.MediaTimeProvider"

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "android.media.SubtitleController"

    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v2, "android.media.SubtitleController$Anchor"

    invoke-static {v2}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v2

    const-string v3, "android.media.SubtitleController$Listener"

    invoke-static {v3}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v3

    const/4 v4, 0x3

    new-array v5, v4, [Ljava/lang/Class;

    const-class v6, Landroid/content/Context;

    const/4 v7, 0x0

    aput-object v6, v5, v7

    const/4 v6, 0x1

    aput-object v0, v5, v6

    const/4 v0, 0x2

    aput-object v3, v5, v0

    invoke-virtual {v1, v5}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v3

    new-array v4, v4, [Ljava/lang/Object;

    aput-object p2, v4, v7

    const/4 p2, 0x0

    aput-object p2, v4, v6

    aput-object p2, v4, v0

    invoke-virtual {v3, v4}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    const-string v4, "mHandler"

    invoke-virtual {v1, v4}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v4

    invoke-virtual {v4, v6}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    new-instance v5, Landroid/os/Handler;

    invoke-direct {v5}, Landroid/os/Handler;-><init>()V

    invoke-virtual {v4, v3, v5}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V

    invoke-virtual {v4, v7}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v4

    const-string v5, "setSubtitleAnchor"

    new-array v8, v0, [Ljava/lang/Class;

    aput-object v1, v8, v7

    aput-object v2, v8, v6

    invoke-virtual {v4, v5, v8}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v0, v0, [Ljava/lang/Object;

    aput-object v3, v0, v7

    aput-object p2, v0, v6

    invoke-virtual {v1, p1, v0}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string p2, "setSubtitleController error: "

    invoke-static {p2, p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method private b()V
    .locals 3

    const/4 v0, 0x0

    :try_start_0
    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoAd/b;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoAd/b;->setOnCompletionListener(Landroid/media/MediaPlayer$OnCompletionListener;)V

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoAd/b;->setOnErrorListener(Landroid/media/MediaPlayer$OnErrorListener;)V

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoAd/b;->setOnPreparedListener(Landroid/media/MediaPlayer$OnPreparedListener;)V

    const-class v1, Landroid/view/View;

    const-string v2, "mContext"

    invoke-virtual {v1, v2}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v1

    if-eqz v1, :cond_0

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    invoke-virtual {v1, p0, v0}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method


# virtual methods
.method public a()V
    .locals 1

    const-string v0, "BaseVideoView onDestroy() called"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/b;->suspend()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/b;->stopPlayback()V

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/ViewUtil;->removeFromParent(Landroid/view/View;)V

    invoke-direct {p0}, Lcom/sigmob/sdk/videoAd/b;->b()V

    invoke-super {p0}, Landroid/widget/VideoView;->destroyDrawingCache()V

    return-void
.end method

.method public a(II)V
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/videoAd/b;->d:I

    iput p2, p0, Lcom/sigmob/sdk/videoAd/b;->e:I

    return-void
.end method

.method protected onMeasure(II)V
    .locals 4

    const/4 v0, 0x0

    invoke-static {v0, p1}, Lcom/sigmob/sdk/videoAd/b;->getDefaultSize(II)I

    move-result v1

    invoke-static {v0, p2}, Lcom/sigmob/sdk/videoAd/b;->getDefaultSize(II)I

    move-result v0

    iget v2, p0, Lcom/sigmob/sdk/videoAd/b;->e:I

    iget v3, p0, Lcom/sigmob/sdk/videoAd/b;->d:I

    if-le v0, v1, :cond_1

    if-le v2, v3, :cond_0

    goto :goto_0

    :cond_0
    int-to-float v0, v2

    int-to-float v2, v3

    div-float/2addr v0, v2

    int-to-float v2, v1

    mul-float/2addr v2, v0

    float-to-int v0, v2

    goto :goto_0

    :cond_1
    if-le v2, v3, :cond_2

    int-to-float v1, v3

    int-to-float v2, v2

    div-float/2addr v1, v2

    int-to-float v2, v0

    mul-float/2addr v2, v1

    float-to-int v1, v2

    :cond_2
    :goto_0
    iget v2, p0, Lcom/sigmob/sdk/videoAd/b;->e:I

    iget v3, p0, Lcom/sigmob/sdk/videoAd/b;->d:I

    if-ne v2, v3, :cond_4

    const/4 v0, -0x1

    if-ne v2, v0, :cond_3

    invoke-static {p1}, Landroid/view/View$MeasureSpec;->getSize(I)I

    move-result p1

    invoke-static {p2}, Landroid/view/View$MeasureSpec;->getSize(I)I

    move-result p2

    invoke-virtual {p0, p1, p2}, Lcom/sigmob/sdk/videoAd/b;->setMeasuredDimension(II)V

    goto :goto_1

    :cond_3
    invoke-super {p0, p1, p2}, Landroid/widget/VideoView;->onMeasure(II)V

    goto :goto_1

    :cond_4
    invoke-virtual {p0, v1, v0}, Lcom/sigmob/sdk/videoAd/b;->setMeasuredDimension(II)V

    :goto_1
    return-void
.end method

.method public setVolume(F)V
    .locals 2

    :try_start_0
    const-string v0, "android.widget.VideoView"

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "mMediaPlayer"

    invoke-virtual {v0, v1}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v0

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    invoke-virtual {v0, p0}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/media/MediaPlayer;

    invoke-virtual {v0, p1, p1}, Landroid/media/MediaPlayer;->setVolume(FF)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method
