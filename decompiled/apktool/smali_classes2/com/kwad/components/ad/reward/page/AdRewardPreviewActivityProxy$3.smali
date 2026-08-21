.class final Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->initView()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$3;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$3;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$200(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$3;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$300(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)Landroid/os/Handler;

    move-result-object v0

    const-wide/16 v1, 0x190

    invoke-virtual {v0, p0, v1, v2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$3;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$400(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)I

    move-result v0

    if-gtz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$3;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$502(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;Z)Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$3;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$600(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)V

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$3;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$700(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)I

    move-result v0

    if-gtz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$3;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$800(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)Landroid/view/View;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$3;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$900(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$3;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$1000(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)Landroid/widget/TextView;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "\u6fc0\u52b1\u9886\u53d6\u89c6\u9891\u8fd8\u6709"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$3;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-static {v2}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$400(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "\u79d2"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$3;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$300(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)Landroid/os/Handler;

    move-result-object v0

    const-wide/16 v1, 0x3e8

    invoke-virtual {v0, p0, v1, v2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    :goto_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$3;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$710(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)I

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$3;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$410(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)I

    return-void
.end method
