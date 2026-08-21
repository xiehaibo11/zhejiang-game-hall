.class Lcom/sigmob/sdk/videoAd/l$4;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/videoAd/l;->f(Landroid/content/Context;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Lcom/sigmob/sdk/videoAd/l;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/videoAd/l;Landroid/content/Context;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/l$4;->b:Lcom/sigmob/sdk/videoAd/l;

    iput-object p2, p0, Lcom/sigmob/sdk/videoAd/l$4;->a:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 5

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$4;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->P(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/w;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/views/w;->a()Z

    move-result p1

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$4;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoAd/l;->n()Lcom/sigmob/sdk/base/common/r;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->t:Lcom/sigmob/sdk/base/common/a;

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l$4;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v1}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v1

    invoke-virtual {p1, v0, v1}, Lcom/sigmob/sdk/base/common/r;->a(Lcom/sigmob/sdk/base/common/a;I)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$4;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->Q(Lcom/sigmob/sdk/videoAd/l;)Z

    move-result p1

    const/4 v0, 0x0

    if-nez p1, :cond_2

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$4;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_type()I

    move-result p1

    const/4 v1, 0x4

    if-ne p1, v1, :cond_0

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$4;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->n(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoAd/b;->pause()V

    const-string p1, "videoView.pause()"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$4;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->b(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/d;

    move-result-object p1

    if-nez p1, :cond_1

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$4;->b:Lcom/sigmob/sdk/videoAd/l;

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/l$4;->a:Landroid/content/Context;

    invoke-static {p1, v2, v1}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;Landroid/content/Context;I)V

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$4;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->b(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/d;

    move-result-object p1

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l$4;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v1}, Lcom/sigmob/sdk/videoAd/l;->P(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/w;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/views/w;->getTime()I

    move-result v1

    invoke-virtual {p1, v1}, Lcom/sigmob/sdk/base/views/d;->setduration(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$4;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->b(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/d;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/views/d;->setVisibility(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$4;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->c(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/j;

    move-result-object p1

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$4;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->c(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/j;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/views/j;->getFourElementsLayout()Landroid/widget/LinearLayout;

    move-result-object p1

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$4;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->c(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/j;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/views/j;->getFourElementsLayout()Landroid/widget/LinearLayout;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/widget/LinearLayout;->setClickable(Z)V

    goto :goto_1

    :cond_2
    :goto_0
    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$4;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoAd/l;->n()Lcom/sigmob/sdk/base/common/r;

    move-result-object p1

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->s:Lcom/sigmob/sdk/base/common/a;

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/l$4;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v2}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v2

    invoke-virtual {p1, v1, v2}, Lcom/sigmob/sdk/base/common/r;->a(Lcom/sigmob/sdk/base/common/a;I)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$4;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->o(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/a;

    move-result-object p1

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l$4;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v1}, Lcom/sigmob/sdk/videoAd/l;->R(Lcom/sigmob/sdk/videoAd/l;)Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/l$4;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v2}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v2

    iget-object v3, p0, Lcom/sigmob/sdk/videoAd/l$4;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v3}, Lcom/sigmob/sdk/videoAd/l;->s()I

    move-result v3

    iget-object v4, p0, Lcom/sigmob/sdk/videoAd/l$4;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v4}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v4

    invoke-virtual {p1, v1, v2, v3, v4}, Lcom/sigmob/sdk/videoAd/a;->b(Landroid/content/Context;IILcom/sigmob/sdk/base/models/BaseAdUnit;)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$4;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/videoAd/l;->b(Z)V

    :cond_3
    :goto_1
    return-void
.end method
