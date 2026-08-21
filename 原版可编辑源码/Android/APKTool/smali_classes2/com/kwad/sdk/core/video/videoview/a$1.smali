.class final Lcom/kwad/sdk/core/video/videoview/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/video/a/c$e;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/video/videoview/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic awe:Lcom/kwad/sdk/core/video/videoview/a;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/video/videoview/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/video/videoview/a$1;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/video/a/c;)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a$1;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    const/4 v1, 0x2

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/video/videoview/a;->b(Lcom/kwad/sdk/core/video/videoview/a;I)I

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a$1;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {v0}, Lcom/kwad/sdk/core/video/videoview/a;->d(Lcom/kwad/sdk/core/video/videoview/a;)Lcom/kwad/sdk/core/video/videoview/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a$1;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {v1}, Lcom/kwad/sdk/core/video/videoview/a;->c(Lcom/kwad/sdk/core/video/videoview/a;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/video/videoview/b;->onPlayStateChanged(I)V

    const-string v0, "KSVideoPlayerViewView"

    const-string v1, "onPrepared \u2014\u2014> STATE_PREPARED"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {p1}, Lcom/kwad/sdk/core/video/a/c;->start()V

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a$1;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {v0}, Lcom/kwad/sdk/core/video/videoview/a;->e(Lcom/kwad/sdk/core/video/videoview/a;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a$1;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {v0}, Lcom/kwad/sdk/core/video/videoview/a;->f(Lcom/kwad/sdk/core/video/videoview/a;)Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a$1;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {v1}, Lcom/kwad/sdk/core/video/videoview/a;->g(Lcom/kwad/sdk/core/video/videoview/a;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/utils/y;->Q(Landroid/content/Context;Ljava/lang/String;)J

    move-result-wide v0

    long-to-int v0, v0

    int-to-long v0, v0

    invoke-interface {p1, v0, v1}, Lcom/kwad/sdk/core/video/a/c;->seekTo(J)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a$1;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {v0}, Lcom/kwad/sdk/core/video/videoview/a;->h(Lcom/kwad/sdk/core/video/videoview/a;)J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a$1;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {v0}, Lcom/kwad/sdk/core/video/videoview/a;->h(Lcom/kwad/sdk/core/video/videoview/a;)J

    move-result-wide v0

    long-to-int v0, v0

    int-to-long v0, v0

    invoke-interface {p1, v0, v1}, Lcom/kwad/sdk/core/video/a/c;->seekTo(J)V

    :cond_1
    return-void
.end method
