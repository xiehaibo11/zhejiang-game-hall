.class final Lcom/kwad/components/ad/interstitial/d/d$24;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/d;->dc()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic kd:Lcom/kwad/components/ad/interstitial/d/d;

.field final synthetic kk:Z

.field final synthetic kl:Z

.field final synthetic km:Landroid/view/ViewGroup;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/d;ZZLandroid/view/ViewGroup;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$24;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    iput-boolean p2, p0, Lcom/kwad/components/ad/interstitial/d/d$24;->kk:Z

    iput-boolean p3, p0, Lcom/kwad/components/ad/interstitial/d/d$24;->kl:Z

    iput-object p4, p0, Lcom/kwad/components/ad/interstitial/d/d$24;->km:Landroid/view/ViewGroup;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    iget-boolean v0, p0, Lcom/kwad/components/ad/interstitial/d/d$24;->kk:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$24;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->e(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/sdk/widget/KSFrameLayout;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/widget/KSFrameLayout;->getWidth()I

    move-result v0

    iget-boolean v1, p0, Lcom/kwad/components/ad/interstitial/d/d$24;->kl:Z

    invoke-static {v0, v1}, Lcom/kwad/components/ad/interstitial/d/d;->b(IZ)Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$24;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->e(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/sdk/widget/KSFrameLayout;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/widget/KSFrameLayout;->getHeight()I

    move-result v0

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->B(I)Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    :goto_0
    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d$24;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v1}, Lcom/kwad/components/ad/interstitial/d/d;->f(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/sdk/core/webview/KsAdWebView;

    move-result-object v1

    const/16 v2, 0x8

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d$24;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v1}, Lcom/kwad/components/ad/interstitial/d/d;->f(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/sdk/core/webview/KsAdWebView;

    move-result-object v1

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setVisibility(I)V

    :cond_1
    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d$24;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v1}, Lcom/kwad/components/ad/interstitial/d/d;->g(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/sdk/widget/KSFrameLayout;

    move-result-object v1

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/widget/KSFrameLayout;->setVisibility(I)V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d$24;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v1}, Lcom/kwad/components/ad/interstitial/d/d;->d(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v1

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/d/c;->jg:Lcom/kwad/components/ad/interstitial/f/f;

    invoke-virtual {v1}, Lcom/kwad/components/ad/interstitial/f/f;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    instance-of v2, v1, Landroid/view/ViewGroup;

    if-eqz v2, :cond_2

    check-cast v1, Landroid/view/ViewGroup;

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/d/d$24;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v2}, Lcom/kwad/components/ad/interstitial/d/d;->d(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v2

    iget-object v2, v2, Lcom/kwad/components/ad/interstitial/d/c;->jg:Lcom/kwad/components/ad/interstitial/f/f;

    invoke-virtual {v1, v2}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    :cond_2
    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d$24;->km:Landroid/view/ViewGroup;

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/d/d$24;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v2}, Lcom/kwad/components/ad/interstitial/d/d;->d(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v2

    iget-object v2, v2, Lcom/kwad/components/ad/interstitial/d/c;->jg:Lcom/kwad/components/ad/interstitial/f/f;

    invoke-virtual {v1, v2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;)V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d$24;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v1}, Lcom/kwad/components/ad/interstitial/d/d;->d(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v1

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/d/c;->jg:Lcom/kwad/components/ad/interstitial/f/f;

    iget v2, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    iget v0, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    invoke-virtual {v1, v2, v0}, Lcom/kwad/components/ad/interstitial/f/f;->f(II)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$24;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->h(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/sdk/core/video/videoview/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/video/videoview/a;->requestLayout()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$24;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/kwad/components/ad/interstitial/d/d;->a(Lcom/kwad/components/ad/interstitial/d/d;Z)Z

    return-void
.end method
