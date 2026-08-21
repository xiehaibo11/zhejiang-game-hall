.class final Lcom/kwad/components/ad/interstitial/d/d$19;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/g/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/d;->bs()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic kd:Lcom/kwad/components/ad/interstitial/d/d;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/d;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$19;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(D)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$19;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->e(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/sdk/widget/KSFrameLayout;

    move-result-object v0

    const/16 v1, 0x64

    invoke-static {v0, v1}, Lcom/kwad/sdk/utils/bm;->o(Landroid/view/View;I)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$19;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0, p1, p2}, Lcom/kwad/components/ad/interstitial/d/d;->a(Lcom/kwad/components/ad/interstitial/d/d;D)V

    :cond_0
    new-instance p1, Lcom/kwad/components/ad/interstitial/d/d$19$1;

    invoke-direct {p1, p0}, Lcom/kwad/components/ad/interstitial/d/d$19$1;-><init>(Lcom/kwad/components/ad/interstitial/d/d$19;)V

    const/4 p2, 0x0

    const-wide/16 v0, 0x1f4

    invoke-static {p1, p2, v0, v1}, Lcom/kwad/sdk/utils/bj;->a(Ljava/lang/Runnable;Ljava/lang/Object;J)V

    return-void
.end method

.method public final aT()V
    .locals 0

    return-void
.end method
