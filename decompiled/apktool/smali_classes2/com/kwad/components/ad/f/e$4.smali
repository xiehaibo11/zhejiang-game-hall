.class final Lcom/kwad/components/ad/f/e$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/j/a$c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/f/e;->getCurrentVoiceItem()Lcom/kwad/components/core/j/a$b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic mS:Lcom/kwad/components/ad/f/e;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/f/e;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/e$4;->mS:Lcom/kwad/components/ad/f/e;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final bi()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/f/e$4;->mS:Lcom/kwad/components/ad/f/e;

    iget-object v0, v0, Lcom/kwad/components/ad/f/e;->eF:Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/f/e$4;->mS:Lcom/kwad/components/ad/f/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/e;->q(Lcom/kwad/components/ad/f/e;)Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/ad/f/e;->eF:Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/e$4;->mS:Lcom/kwad/components/ad/f/e;

    iget-object v0, v0, Lcom/kwad/components/ad/f/e;->eF:Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    iget-object v1, p0, Lcom/kwad/components/ad/f/e$4;->mS:Lcom/kwad/components/ad/f/e;

    invoke-static {v1}, Lcom/kwad/components/ad/f/e;->p(Lcom/kwad/components/ad/f/e;)Z

    move-result v2

    invoke-static {v1, v2}, Lcom/kwad/components/ad/f/e;->a(Lcom/kwad/components/ad/f/e;Z)Z

    move-result v1

    const/4 v2, 0x0

    invoke-interface {v0, v1, v2}, Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;->setAudioEnabled(ZZ)V

    return-void
.end method
