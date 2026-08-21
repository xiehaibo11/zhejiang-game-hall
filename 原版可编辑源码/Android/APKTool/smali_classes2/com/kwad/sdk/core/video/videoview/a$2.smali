.class final Lcom/kwad/sdk/core/video/videoview/a$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/video/a/c$h;


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

    iput-object p1, p0, Lcom/kwad/sdk/core/video/videoview/a$2;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final i(II)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a$2;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {v0}, Lcom/kwad/sdk/core/video/videoview/a;->i(Lcom/kwad/sdk/core/video/videoview/a;)Z

    move-result v0

    if-eqz v0, :cond_0

    if-le p2, p1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a$2;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {v0}, Lcom/kwad/sdk/core/video/videoview/a;->j(Lcom/kwad/sdk/core/video/videoview/a;)Lcom/kwad/sdk/core/video/a;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/kwad/sdk/core/video/a;->adaptVideoSize(II)V

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onVideoSizeChanged \u2014\u2014> width\uff1a"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "\uff0c height\uff1a"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "KSVideoPlayerViewView"

    invoke-static {p2, p1}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
