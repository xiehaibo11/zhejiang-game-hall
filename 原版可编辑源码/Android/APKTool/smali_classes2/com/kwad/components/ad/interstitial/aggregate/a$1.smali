.class final Lcom/kwad/components/ad/interstitial/aggregate/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/interstitial/d/c$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/aggregate/a;->instantiateItem(Landroid/view/ViewGroup;I)Ljava/lang/Object;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic hK:Lcom/kwad/components/ad/interstitial/aggregate/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/aggregate/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/a$1;->hK:Lcom/kwad/components/ad/interstitial/aggregate/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final ck()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/a$1;->hK:Lcom/kwad/components/ad/interstitial/aggregate/a;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/aggregate/a;->a(Lcom/kwad/components/ad/interstitial/aggregate/a;)Lcom/kwad/components/ad/interstitial/aggregate/a$a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/a$1;->hK:Lcom/kwad/components/ad/interstitial/aggregate/a;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/aggregate/a;->a(Lcom/kwad/components/ad/interstitial/aggregate/a;)Lcom/kwad/components/ad/interstitial/aggregate/a$a;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/components/ad/interstitial/aggregate/a$a;->cl()V

    :cond_0
    return-void
.end method
