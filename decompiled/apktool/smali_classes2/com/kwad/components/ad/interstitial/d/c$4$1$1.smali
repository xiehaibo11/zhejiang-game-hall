.class final Lcom/kwad/components/ad/interstitial/d/c$4$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/c$4$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic jC:Landroid/support/v4/graphics/drawable/RoundedBitmapDrawable;

.field final synthetic jD:Lcom/kwad/components/ad/interstitial/d/c$4$1;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/c$4$1;Landroid/support/v4/graphics/drawable/RoundedBitmapDrawable;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/c$4$1$1;->jD:Lcom/kwad/components/ad/interstitial/d/c$4$1;

    iput-object p2, p0, Lcom/kwad/components/ad/interstitial/d/c$4$1$1;->jC:Landroid/support/v4/graphics/drawable/RoundedBitmapDrawable;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c$4$1$1;->jD:Lcom/kwad/components/ad/interstitial/d/c$4$1;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c$4$1;->jB:Lcom/kwad/components/ad/interstitial/d/c$4;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c$4;->eX:Landroid/view/View;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/c$4$1$1;->jC:Landroid/support/v4/graphics/drawable/RoundedBitmapDrawable;

    invoke-virtual {v0, v1}, Landroid/view/View;->setBackground(Landroid/graphics/drawable/Drawable;)V

    return-void
.end method
