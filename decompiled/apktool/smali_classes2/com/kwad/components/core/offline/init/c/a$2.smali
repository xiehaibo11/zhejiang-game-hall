.class final Lcom/kwad/components/core/offline/init/c/a$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/offline/init/c/a;->op()Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic LX:Lcom/kwad/components/core/offline/init/c/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/offline/init/c/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/offline/init/c/a$2;->LX:Lcom/kwad/components/core/offline/init/c/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAudioBeOccupied()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a$2;->LX:Lcom/kwad/components/core/offline/init/c/a;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/kwad/components/core/offline/init/c/a;->a(Lcom/kwad/components/core/offline/init/c/a;Z)Z

    new-instance v0, Lcom/kwad/components/core/offline/init/c/a$2$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/offline/init/c/a$2$1;-><init>(Lcom/kwad/components/core/offline/init/c/a$2;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onAudioBeReleased()V
    .locals 0

    return-void
.end method
