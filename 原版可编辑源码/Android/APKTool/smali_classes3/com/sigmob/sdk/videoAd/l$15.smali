.class Lcom/sigmob/sdk/videoAd/l$15;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/media/MediaPlayer$OnPreparedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/videoAd/l;->a(Landroid/content/Context;I)Lcom/sigmob/sdk/videoAd/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/videoAd/b;

.field final synthetic b:Lcom/sigmob/sdk/videoAd/l;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/videoAd/l;Lcom/sigmob/sdk/videoAd/b;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    iput-object p2, p0, Lcom/sigmob/sdk/videoAd/l$15;->a:Lcom/sigmob/sdk/videoAd/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onPrepared(Landroid/media/MediaPlayer;)V
    .locals 6

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {p1}, Landroid/media/MediaPlayer;->getDuration()I

    move-result v1

    invoke-static {v0, v1}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;I)I

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->e(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/h;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->e(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/h;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v1}, Lcom/sigmob/sdk/videoAd/l;->f(Lcom/sigmob/sdk/videoAd/l;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoAd/h;->a(I)V

    :cond_0
    new-instance v0, Lcom/sigmob/sdk/videoAd/l$15$1;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/videoAd/l$15$1;-><init>(Lcom/sigmob/sdk/videoAd/l$15;)V

    invoke-virtual {p1, v0}, Landroid/media/MediaPlayer;->setOnSeekCompleteListener(Landroid/media/MediaPlayer$OnSeekCompleteListener;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->k(Lcom/sigmob/sdk/videoAd/l;)I

    move-result v0

    const/4 v1, 0x0

    if-lez v0, :cond_1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "seek to "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v2}, Lcom/sigmob/sdk/videoAd/l;->k(Lcom/sigmob/sdk/videoAd/l;)I

    move-result v2

    div-int/lit16 v2, v2, 0x3e8

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->k(Lcom/sigmob/sdk/videoAd/l;)I

    move-result v0

    add-int/lit16 v0, v0, -0x1f4

    invoke-virtual {p1, v0}, Landroid/media/MediaPlayer;->seekTo(I)V

    goto :goto_0

    :cond_1
    const-string v0, "seek to 0"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    invoke-virtual {p1, v1}, Landroid/media/MediaPlayer;->seekTo(I)V

    :goto_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/4 v2, 0x3

    if-lt v0, v2, :cond_2

    new-instance v0, Lcom/sigmob/sdk/videoAd/l$15$2;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/videoAd/l$15$2;-><init>(Lcom/sigmob/sdk/videoAd/l$15;)V

    invoke-virtual {p1, v0}, Landroid/media/MediaPlayer;->setOnVideoSizeChangedListener(Landroid/media/MediaPlayer$OnVideoSizeChangedListener;)V

    :cond_2
    :try_start_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x10

    if-lt v0, v2, :cond_3

    invoke-virtual {p1}, Landroid/media/MediaPlayer;->getTrackInfo()[Landroid/media/MediaPlayer$TrackInfo;

    move-result-object v0

    array-length v2, v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v3, ""

    move v4, v1

    :goto_1
    if-ge v4, v2, :cond_3

    :try_start_1
    aget-object v5, v0, v4

    invoke-virtual {v5}, Landroid/media/MediaPlayer$TrackInfo;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    add-int/lit8 v4, v4, 0x1

    goto :goto_1

    :catchall_0
    :cond_3
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->l(Lcom/sigmob/sdk/videoAd/l;)Z

    move-result v0

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->m(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/x;

    move-result-object v0

    sget-object v2, Lcom/sigmob/sdk/base/views/o;->b:Lcom/sigmob/sdk/base/views/o;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/views/o;->a()Landroid/graphics/Bitmap;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/views/x;->a(Landroid/graphics/Bitmap;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->n(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/b;

    move-result-object v0

    const/4 v2, 0x0

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/videoAd/b;->setVolume(F)V

    :cond_4
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/l;->n()Lcom/sigmob/sdk/base/common/r;

    move-result-object v0

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v2}, Lcom/sigmob/sdk/videoAd/l;->f(Lcom/sigmob/sdk/videoAd/l;)I

    move-result v2

    iget-object v3, p0, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v3}, Lcom/sigmob/sdk/videoAd/l;->o(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/sigmob/sdk/videoAd/a;->l()I

    move-result v3

    invoke-virtual {v0, v2, v3}, Lcom/sigmob/sdk/base/common/r;->a(II)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->g(Lcom/sigmob/sdk/videoAd/l;)Z

    move-result v0

    if-nez v0, :cond_6

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->p(Lcom/sigmob/sdk/videoAd/l;)I

    move-result v0

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->p(Lcom/sigmob/sdk/videoAd/l;)I

    move-result v0

    const/4 v2, -0x1

    if-ne v0, v2, :cond_6

    :cond_5
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v0

    instance-of v2, v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v2, :cond_6

    check-cast v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v2, "_COMPLETED_"

    const-string v3, "0"

    invoke-virtual {v0, v2, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v2}, Lcom/sigmob/sdk/videoAd/l;->f(Lcom/sigmob/sdk/videoAd/l;)I

    move-result v2

    div-int/lit16 v2, v2, 0x3e8

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    const-string v3, "_VIDEOTIME_"

    invoke-virtual {v0, v3, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->q(Lcom/sigmob/sdk/videoAd/l;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->r(Lcom/sigmob/sdk/videoAd/l;)Z

    move-result v0

    if-eqz v0, :cond_7

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->s(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/y;

    move-result-object v0

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v2}, Lcom/sigmob/sdk/videoAd/l;->s()I

    move-result v2

    invoke-virtual {v0, v2, v1}, Lcom/sigmob/sdk/base/views/y;->a(II)V

    :cond_7
    new-instance v0, Lcom/sigmob/sdk/videoAd/l$15$3;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/videoAd/l$15$3;-><init>(Lcom/sigmob/sdk/videoAd/l$15;)V

    invoke-virtual {p1, v0}, Landroid/media/MediaPlayer;->setOnInfoListener(Landroid/media/MediaPlayer$OnInfoListener;)V

    return-void
.end method
