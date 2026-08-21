.class final Lcom/kwad/components/ad/interstitial/d/j$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/interstitial/d/c$d;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/j;->ea()V
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

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/j$3;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final db()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j$3;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/j;->d(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/sdk/core/video/videoview/a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j$3;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/j;->d(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/sdk/core/video/videoview/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/video/videoview/a;->restart()V

    :cond_0
    return-void
.end method
