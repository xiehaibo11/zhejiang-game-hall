.class final Lcom/kwad/components/ad/interstitial/d/i$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/interstitial/d/i;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic kY:Lcom/kwad/components/ad/interstitial/d/i;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/i;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/i$3;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/i$3;->kY:Lcom/kwad/components/ad/interstitial/d/i;

    new-instance v1, Lcom/kwad/components/ad/interstitial/d/i$3$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/interstitial/d/i$3$1;-><init>(Lcom/kwad/components/ad/interstitial/d/i$3;)V

    invoke-static {v0, v1}, Lcom/kwad/components/ad/interstitial/d/i;->b(Lcom/kwad/components/ad/interstitial/d/i;Landroid/animation/Animator$AnimatorListener;)V

    return-void
.end method
