.class Lcom/sigmob/sdk/videoAd/l$15$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/media/MediaPlayer$OnSeekCompleteListener;


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

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/l$15$1;->a:Lcom/sigmob/sdk/videoAd/l$15;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onSeekComplete(Landroid/media/MediaPlayer;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$15$1;->a:Lcom/sigmob/sdk/videoAd/l$15;

    iget-object v0, v0, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->g(Lcom/sigmob/sdk/videoAd/l;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$15$1;->a:Lcom/sigmob/sdk/videoAd/l$15;

    iget-object v0, v0, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->b(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/d;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$15$1;->a:Lcom/sigmob/sdk/videoAd/l$15;

    iget-object v0, v0, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->b(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/d;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_1

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$15$1;->a:Lcom/sigmob/sdk/videoAd/l$15;

    iget-object v0, v0, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->h(Lcom/sigmob/sdk/videoAd/l;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$15$1;->a:Lcom/sigmob/sdk/videoAd/l$15;

    iget-object v0, v0, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->i(Lcom/sigmob/sdk/videoAd/l;)V

    invoke-virtual {p1}, Landroid/media/MediaPlayer;->start()V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$15$1;->a:Lcom/sigmob/sdk/videoAd/l$15;

    iget-object p1, p1, Lcom/sigmob/sdk/videoAd/l$15;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->j(Lcom/sigmob/sdk/videoAd/l;)V

    const-string p1, "mediaplayer omPrepared start"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    :cond_1
    return-void
.end method
