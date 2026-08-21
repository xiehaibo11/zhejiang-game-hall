.class Lcom/sigmob/sdk/videoAd/l$19;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/views/d$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/videoAd/l;->c(Landroid/content/Context;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/videoAd/l;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/videoAd/l;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/l$19;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 5

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$19;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->g(Lcom/sigmob/sdk/videoAd/l;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$19;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/l;->n()Lcom/sigmob/sdk/base/common/r;

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->s:Lcom/sigmob/sdk/base/common/a;

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/l$19;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v2}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/base/common/r;->a(Lcom/sigmob/sdk/base/common/a;I)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$19;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->o(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/a;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l$19;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v1}, Lcom/sigmob/sdk/videoAd/l;->E(Lcom/sigmob/sdk/videoAd/l;)Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/l$19;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v2}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v2

    iget-object v3, p0, Lcom/sigmob/sdk/videoAd/l$19;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v3}, Lcom/sigmob/sdk/videoAd/l;->s()I

    move-result v3

    iget-object v4, p0, Lcom/sigmob/sdk/videoAd/l$19;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v4}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v4

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/sigmob/sdk/videoAd/a;->b(Landroid/content/Context;IILcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$19;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->b(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/d;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/d;->setVisibility(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$19;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->c(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/j;

    move-result-object v0

    const/4 v1, 0x1

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$19;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->c(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/j;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/j;->getFourElementsLayout()Landroid/widget/LinearLayout;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$19;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->c(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/j;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/j;->getFourElementsLayout()Landroid/widget/LinearLayout;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->setClickable(Z)V

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$19;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->o(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/a;->m()Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$19;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->F(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/common/j;

    move-result-object v0

    invoke-interface {v0}, Lcom/sigmob/sdk/base/common/j;->a()V

    return-void

    :cond_2
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$19;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->G(Lcom/sigmob/sdk/videoAd/l;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$19;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v2

    invoke-static {v0, v2}, Lcom/sigmob/sdk/videoAd/l;->c(Lcom/sigmob/sdk/videoAd/l;I)V

    :cond_3
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$19;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->n(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/b;->stopPlayback()V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$19;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->w(Lcom/sigmob/sdk/videoAd/l;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$19;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->z(Lcom/sigmob/sdk/videoAd/l;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$19;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0, v1}, Lcom/sigmob/sdk/videoAd/l;->c(Lcom/sigmob/sdk/videoAd/l;Z)Z

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$19;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->H(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/common/r;

    move-result-object v0

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$19;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->H(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/common/r;

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->h:Lcom/sigmob/sdk/base/common/a;

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/base/common/r;->a(Lcom/sigmob/sdk/base/common/a;I)V

    :cond_4
    return-void
.end method

.method public b()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$19;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->n(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/b;->start()V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$19;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->b(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/d;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/d;->setVisibility(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$19;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->c(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/j;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$19;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->c(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/j;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/j;->getFourElementsLayout()Landroid/widget/LinearLayout;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$19;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->c(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/j;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/j;->getFourElementsLayout()Landroid/widget/LinearLayout;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->setClickable(Z)V

    :cond_0
    return-void
.end method
