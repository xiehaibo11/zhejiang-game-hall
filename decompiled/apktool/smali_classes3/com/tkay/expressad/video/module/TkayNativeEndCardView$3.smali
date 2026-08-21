.class final Lcom/tkay/expressad/video/module/TkayNativeEndCardView$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->h()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V
    .locals 0

    .line 652
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$3;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    .line 655
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$3;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$3;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$3;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->f()I

    move-result v0

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    .line 656
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$3;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->l(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Landroid/widget/RelativeLayout;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$3;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {v1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->h(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)I

    move-result v1

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$3;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {v2}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->i(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)I

    move-result v2

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$3;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {v3}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->j(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)I

    move-result v3

    iget-object v4, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$3;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {v4}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->k(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)I

    move-result v4

    invoke-virtual {v0, v1, v2, v3, v4}, Landroid/widget/RelativeLayout;->setPadding(IIII)V

    .line 657
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$3;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->l(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Landroid/widget/RelativeLayout;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$3;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {v1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->m(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Landroid/view/animation/AlphaAnimation;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->startAnimation(Landroid/view/animation/Animation;)V

    .line 659
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$3;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->l(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Landroid/widget/RelativeLayout;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    .line 660
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$3;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/View;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$3;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->n(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 661
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$3;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    .line 663
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$3;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->o(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V

    return-void
.end method
