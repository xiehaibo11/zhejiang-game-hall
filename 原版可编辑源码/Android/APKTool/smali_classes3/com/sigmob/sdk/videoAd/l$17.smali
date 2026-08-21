.class Lcom/sigmob/sdk/videoAd/l$17;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/media/MediaPlayer$OnErrorListener;


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

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/l$17;->b:Lcom/sigmob/sdk/videoAd/l;

    iput-object p2, p0, Lcom/sigmob/sdk/videoAd/l$17;->a:Lcom/sigmob/sdk/videoAd/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onError(Landroid/media/MediaPlayer;II)Z
    .locals 11

    const/4 v0, 0x2

    new-array v1, v0, [Ljava/lang/Object;

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v1, v3

    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v4, 0x1

    aput-object v2, v1, v4

    const-string v2, "what %d, extra %d"

    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l$17;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v1}, Lcom/sigmob/sdk/videoAd/l;->t(Lcom/sigmob/sdk/videoAd/l;)Z

    move-result v1

    if-eqz v1, :cond_0

    iget-object p2, p0, Lcom/sigmob/sdk/videoAd/l$17;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p2}, Lcom/sigmob/sdk/videoAd/l;->v(Lcom/sigmob/sdk/videoAd/l;)V

    iget-object p2, p0, Lcom/sigmob/sdk/videoAd/l$17;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p2, v4}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;Z)Z

    iget-object p2, p0, Lcom/sigmob/sdk/videoAd/l$17;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {p1}, Landroid/media/MediaPlayer;->getCurrentPosition()I

    move-result p1

    invoke-static {p2, p1}, Lcom/sigmob/sdk/videoAd/l;->b(Lcom/sigmob/sdk/videoAd/l;I)I

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$17;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->w(Lcom/sigmob/sdk/videoAd/l;)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$17;->a:Lcom/sigmob/sdk/videoAd/b;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoAd/b;->pause()V

    const-string p1, "videoView.pause()"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    return v4

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l$17;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v1, v4}, Lcom/sigmob/sdk/videoAd/l;->b(Lcom/sigmob/sdk/videoAd/l;Z)Z

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l$17;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v1}, Lcom/sigmob/sdk/videoAd/l;->n()Lcom/sigmob/sdk/base/common/r;

    move-result-object v1

    sget-object v5, Lcom/sigmob/sdk/base/common/a;->K:Lcom/sigmob/sdk/base/common/a;

    iget-object v6, p0, Lcom/sigmob/sdk/videoAd/l$17;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v6}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v6

    invoke-virtual {v1, v5, v6}, Lcom/sigmob/sdk/base/common/r;->a(Lcom/sigmob/sdk/base/common/a;I)V

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l$17;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v1}, Lcom/sigmob/sdk/videoAd/l;->w(Lcom/sigmob/sdk/videoAd/l;)V

    const-string v1, ""

    :try_start_0
    sget v5, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v6, 0x10

    if-lt v5, v6, :cond_1

    invoke-virtual {p1}, Landroid/media/MediaPlayer;->getTrackInfo()[Landroid/media/MediaPlayer$TrackInfo;

    move-result-object p1

    array-length v5, p1

    move v6, v3

    :goto_0
    if-ge v6, v5, :cond_1

    aget-object v7, p1, v6

    invoke-virtual {v7}, Landroid/media/MediaPlayer$TrackInfo;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v1, v7}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    add-int/lit8 v6, v6, 0x1

    goto :goto_0

    :catchall_0
    :cond_1
    new-array p1, v0, [Ljava/lang/Object;

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    aput-object p2, p1, v3

    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    aput-object p2, p1, v4

    invoke-static {v2, p1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$17;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->o(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/a;

    move-result-object v5

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$17;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->y(Lcom/sigmob/sdk/videoAd/l;)Landroid/content/Context;

    move-result-object v6

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$17;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v8

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$17;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v10

    const-string v9, "video"

    move-object v7, v1

    invoke-virtual/range {v5 .. v10}, Lcom/sigmob/sdk/videoAd/a;->a(Landroid/content/Context;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;I)V

    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "video play error: "

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string p3, "error"

    invoke-virtual {p1, p3, p2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object p2, p0, Lcom/sigmob/sdk/videoAd/l$17;->b:Lcom/sigmob/sdk/videoAd/l;

    const-string p3, "com.sigmob.action.rewardedvideo.playFail"

    invoke-static {p2, p3, p1}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;Ljava/lang/String;Ljava/util/Map;)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$17;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->z(Lcom/sigmob/sdk/videoAd/l;)V

    return v3
.end method
