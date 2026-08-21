.class final Lcom/kwad/components/ad/interstitial/d/j$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/interstitial/d/h;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/interstitial/d/j;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic lc:Lcom/kwad/components/ad/interstitial/d/j;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/j;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/j$1;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final du()V
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j$1;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/j;->a(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/components/core/video/f;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/video/f;->qy()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public final dv()V
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j$1;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/j;->a(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/components/core/video/f;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/video/f;->qA()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method
