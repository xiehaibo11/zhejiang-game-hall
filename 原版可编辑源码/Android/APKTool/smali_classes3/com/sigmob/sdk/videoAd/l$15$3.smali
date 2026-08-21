.class Lcom/sigmob/sdk/videoAd/l$15$3;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/media/MediaPlayer$OnInfoListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/videoAd/l$15;->onPrepared(Landroid/media/MediaPlayer;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/videoAd/l$15;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/videoAd/l$15;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/l$15$3;->a:Lcom/sigmob/sdk/videoAd/l$15;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onInfo(Landroid/media/MediaPlayer;II)Z
    .locals 1

    iget-object p3, p0, Lcom/sigmob/sdk/videoAd/l$15$3;->a:Lcom/sigmob/sdk/videoAd/l$15;

    iget-object p3, p3, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p3}, Lcom/sigmob/sdk/videoAd/l;->t(Lcom/sigmob/sdk/videoAd/l;)Z

    move-result p3

    const/4 v0, 0x1

    if-eqz p3, :cond_2

    invoke-virtual {p1}, Landroid/media/MediaPlayer;->isPlaying()Z

    move-result p3

    if-eqz p3, :cond_2

    const/4 p3, 0x3

    if-eq p2, p3, :cond_1

    const/16 p3, 0x324

    if-eq p2, p3, :cond_0

    goto :goto_1

    :cond_0
    iget-object p2, p0, Lcom/sigmob/sdk/videoAd/l$15$3;->a:Lcom/sigmob/sdk/videoAd/l$15;

    iget-object p2, p2, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p2}, Lcom/sigmob/sdk/videoAd/l;->u(Lcom/sigmob/sdk/videoAd/l;)Z

    move-result p2

    if-nez p2, :cond_2

    iget-object p2, p0, Lcom/sigmob/sdk/videoAd/l$15$3;->a:Lcom/sigmob/sdk/videoAd/l$15;

    iget-object p2, p2, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p2}, Lcom/sigmob/sdk/videoAd/l;->v(Lcom/sigmob/sdk/videoAd/l;)V

    iget-object p2, p0, Lcom/sigmob/sdk/videoAd/l$15$3;->a:Lcom/sigmob/sdk/videoAd/l$15;

    iget-object p2, p2, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p2, v0}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;Z)Z

    iget-object p2, p0, Lcom/sigmob/sdk/videoAd/l$15$3;->a:Lcom/sigmob/sdk/videoAd/l$15;

    iget-object p2, p2, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {p1}, Landroid/media/MediaPlayer;->getCurrentPosition()I

    move-result p1

    invoke-static {p2, p1}, Lcom/sigmob/sdk/videoAd/l;->b(Lcom/sigmob/sdk/videoAd/l;I)I

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$15$3;->a:Lcom/sigmob/sdk/videoAd/l$15;

    iget-object p1, p1, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->w(Lcom/sigmob/sdk/videoAd/l;)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$15$3;->a:Lcom/sigmob/sdk/videoAd/l$15;

    iget-object p1, p1, Lcom/sigmob/sdk/videoAd/l$15;->a:Lcom/sigmob/sdk/videoAd/b;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoAd/b;->pause()V

    const-string p1, "videoView.pause()"

    goto :goto_0

    :cond_1
    invoke-virtual {p1}, Landroid/media/MediaPlayer;->start()V

    const-string p1, "mediaplayer onInfo start"

    :goto_0
    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    :cond_2
    :goto_1
    return v0
.end method
