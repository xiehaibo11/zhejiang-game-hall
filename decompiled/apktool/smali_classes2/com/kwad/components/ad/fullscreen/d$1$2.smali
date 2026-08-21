.class final Lcom/kwad/components/ad/fullscreen/d$1$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/fullscreen/d$1;->a(Lcom/kwad/components/core/response/model/AdResultData;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic bW:Ljava/util/List;

.field final synthetic fT:Lcom/kwad/components/ad/fullscreen/d$1;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/fullscreen/d$1;Ljava/util/List;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/fullscreen/d$1$2;->fT:Lcom/kwad/components/ad/fullscreen/d$1;

    iput-object p2, p0, Lcom/kwad/components/ad/fullscreen/d$1$2;->bW:Ljava/util/List;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    :try_start_0
    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/d$1$2;->fT:Lcom/kwad/components/ad/fullscreen/d$1;

    iget-object v0, v0, Lcom/kwad/components/ad/fullscreen/d$1;->fR:Lcom/kwad/sdk/api/KsLoadManager$FullScreenVideoAdListener;

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/d$1$2;->bW:Ljava/util/List;

    invoke-interface {v0, v1}, Lcom/kwad/sdk/api/KsLoadManager$FullScreenVideoAdListener;->onFullScreenVideoResult(Ljava/util/List;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :try_start_1
    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/d$1$2;->fT:Lcom/kwad/components/ad/fullscreen/d$1;

    iget-object v0, v0, Lcom/kwad/components/ad/fullscreen/d$1;->fR:Lcom/kwad/sdk/api/KsLoadManager$FullScreenVideoAdListener;

    const-string v1, "onRequestResult"

    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    iget-object v4, p0, Lcom/kwad/components/ad/fullscreen/d$1$2;->bW:Ljava/util/List;

    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v2, v3

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/utils/s;->f(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :catchall_1
    return-void
.end method
