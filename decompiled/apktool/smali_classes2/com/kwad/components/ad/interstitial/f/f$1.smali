.class final Lcom/kwad/components/ad/interstitial/f/f$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/f/f;->s(Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic mg:Lcom/kwad/components/ad/interstitial/f/f;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/f/f;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f$1;->mg:Lcom/kwad/components/ad/interstitial/f/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 1

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f$1;->mg:Lcom/kwad/components/ad/interstitial/f/f;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/f/f;->a(Lcom/kwad/components/ad/interstitial/f/f;)Landroid/widget/ImageView;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f$1;->mg:Lcom/kwad/components/ad/interstitial/f/f;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/f/f;->a(Lcom/kwad/components/ad/interstitial/f/f;)Landroid/widget/ImageView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/ImageView;->isSelected()Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setSelected(Z)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f$1;->mg:Lcom/kwad/components/ad/interstitial/f/f;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/f/f;->b(Lcom/kwad/components/ad/interstitial/f/f;)Lcom/kwad/components/ad/interstitial/f/g;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f$1;->mg:Lcom/kwad/components/ad/interstitial/f/f;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/f/f;->b(Lcom/kwad/components/ad/interstitial/f/f;)Lcom/kwad/components/ad/interstitial/f/g;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f$1;->mg:Lcom/kwad/components/ad/interstitial/f/f;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/f/f;->a(Lcom/kwad/components/ad/interstitial/f/f;)Landroid/widget/ImageView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/ImageView;->isSelected()Z

    move-result v0

    invoke-interface {p1, v0}, Lcom/kwad/components/ad/interstitial/f/g;->o(Z)V

    :cond_0
    return-void
.end method
