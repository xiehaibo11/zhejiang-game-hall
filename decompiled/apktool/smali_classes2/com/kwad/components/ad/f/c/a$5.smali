.class final Lcom/kwad/components/ad/f/c/a$5;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/f/c/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic nz:Lcom/kwad/components/ad/f/c/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/f/c/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/c/a$5;->nz:Lcom/kwad/components/ad/f/c/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAudioBeOccupied()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a$5;->nz:Lcom/kwad/components/ad/f/c/a;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/kwad/components/ad/f/c/a;->c(Lcom/kwad/components/ad/f/c/a;Z)Z

    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a$5;->nz:Lcom/kwad/components/ad/f/c/a;

    invoke-static {v0, v1}, Lcom/kwad/components/ad/f/c/a;->b(Lcom/kwad/components/ad/f/c/a;Z)V

    return-void
.end method

.method public final onAudioBeReleased()V
    .locals 0

    return-void
.end method
