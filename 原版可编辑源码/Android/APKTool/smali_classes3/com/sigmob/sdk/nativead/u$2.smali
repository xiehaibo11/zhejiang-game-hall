.class Lcom/sigmob/sdk/nativead/u$2;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/ViewTreeObserver$OnPreDrawListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/nativead/u;->b()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/nativead/u;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/nativead/u;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/u$2;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onPreDraw()Z
    .locals 9

    invoke-static {}, Lcom/sigmob/sdk/nativead/u;->m()Lcom/sigmob/sdk/nativead/n;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$2;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/u;->b(Lcom/sigmob/sdk/nativead/u;)Landroid/widget/FrameLayout;

    move-result-object v0

    if-nez v0, :cond_0

    goto/16 :goto_0

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$2;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/u;->b(Lcom/sigmob/sdk/nativead/u;)Landroid/widget/FrameLayout;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/FrameLayout;->getViewTreeObserver()Landroid/view/ViewTreeObserver;

    move-result-object v0

    invoke-virtual {v0, p0}, Landroid/view/ViewTreeObserver;->removeOnPreDrawListener(Landroid/view/ViewTreeObserver$OnPreDrawListener;)V

    invoke-static {}, Lcom/sigmob/sdk/nativead/u;->m()Lcom/sigmob/sdk/nativead/n;

    move-result-object v0

    sget-object v2, Lcom/sigmob/sdk/nativead/f;->b:Lcom/sigmob/sdk/nativead/f;

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/nativead/n;->setUIStyle(Lcom/sigmob/sdk/nativead/f;)V

    invoke-static {}, Lcom/sigmob/sdk/nativead/u;->m()Lcom/sigmob/sdk/nativead/n;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/n;->getVideoContainer()Landroid/view/ViewGroup;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ViewUtil;->removeFromParent(Landroid/view/View;)V

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/u$2;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v2}, Lcom/sigmob/sdk/nativead/u;->b(Lcom/sigmob/sdk/nativead/u;)Landroid/widget/FrameLayout;

    move-result-object v2

    new-instance v3, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v4, -0x1

    invoke-direct {v3, v4, v4}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v2, v0, v3}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$2;->a:Lcom/sigmob/sdk/nativead/u;

    new-instance v2, Lcom/sigmob/sdk/nativead/z;

    invoke-direct {v2}, Lcom/sigmob/sdk/nativead/z;-><init>()V

    invoke-static {v0, v2}, Lcom/sigmob/sdk/nativead/u;->a(Lcom/sigmob/sdk/nativead/u;Lcom/sigmob/sdk/nativead/z;)Lcom/sigmob/sdk/nativead/z;

    const/4 v0, 0x2

    new-array v0, v0, [I

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/u$2;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v2}, Lcom/sigmob/sdk/nativead/u;->b(Lcom/sigmob/sdk/nativead/u;)Landroid/widget/FrameLayout;

    move-result-object v2

    invoke-virtual {v2, v0}, Landroid/widget/FrameLayout;->getLocationOnScreen([I)V

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/u$2;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v2}, Lcom/sigmob/sdk/nativead/u;->c(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/nativead/z;

    move-result-object v2

    aget v3, v0, v1

    invoke-virtual {v2, v3}, Lcom/sigmob/sdk/nativead/z;->a(I)V

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/u$2;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v2}, Lcom/sigmob/sdk/nativead/u;->c(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/nativead/z;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/sigmob/sdk/nativead/z;->b(I)V

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/u$2;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v1}, Lcom/sigmob/sdk/nativead/u;->c(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/nativead/z;

    move-result-object v1

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/u$2;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v2}, Lcom/sigmob/sdk/nativead/u;->b(Lcom/sigmob/sdk/nativead/u;)Landroid/widget/FrameLayout;

    move-result-object v2

    invoke-virtual {v2}, Landroid/widget/FrameLayout;->getMeasuredWidth()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/sigmob/sdk/nativead/z;->c(I)V

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/u$2;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v1}, Lcom/sigmob/sdk/nativead/u;->c(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/nativead/z;

    move-result-object v1

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/u$2;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v2}, Lcom/sigmob/sdk/nativead/u;->b(Lcom/sigmob/sdk/nativead/u;)Landroid/widget/FrameLayout;

    move-result-object v2

    invoke-virtual {v2}, Landroid/widget/FrameLayout;->getMeasuredHeight()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/sigmob/sdk/nativead/z;->d(I)V

    new-instance v1, Lcom/sigmob/sdk/nativead/aa;

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/u$2;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v2}, Lcom/sigmob/sdk/nativead/u;->b(Lcom/sigmob/sdk/nativead/u;)Landroid/widget/FrameLayout;

    move-result-object v4

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/u$2;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v2}, Lcom/sigmob/sdk/nativead/u;->d(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/nativead/z;

    move-result-object v5

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/u$2;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v2}, Lcom/sigmob/sdk/nativead/u;->c(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/nativead/z;

    move-result-object v6

    const-wide/16 v7, 0x12c

    move-object v3, v1

    invoke-direct/range {v3 .. v8}, Lcom/sigmob/sdk/nativead/aa;-><init>(Landroid/view/ViewGroup;Lcom/sigmob/sdk/nativead/z;Lcom/sigmob/sdk/nativead/z;J)V

    invoke-virtual {v1}, Lcom/sigmob/sdk/nativead/aa;->a()V

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/u$2;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v1}, Lcom/sigmob/sdk/nativead/u;->d(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/nativead/z;

    move-result-object v1

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/u$2;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v2}, Lcom/sigmob/sdk/nativead/u;->d(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/nativead/z;

    move-result-object v2

    invoke-virtual {v2}, Lcom/sigmob/sdk/nativead/z;->b()I

    move-result v2

    const/4 v3, 0x1

    aget v0, v0, v3

    sub-int/2addr v2, v0

    invoke-virtual {v1, v2}, Lcom/sigmob/sdk/nativead/z;->b(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$2;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/u;->e(Lcom/sigmob/sdk/nativead/u;)Landroid/widget/RelativeLayout;

    move-result-object v0

    if-eqz v0, :cond_2

    new-instance v0, Landroid/view/animation/AlphaAnimation;

    const/4 v1, 0x0

    const/high16 v2, 0x3f800000    # 1.0f

    invoke-direct {v0, v1, v2}, Landroid/view/animation/AlphaAnimation;-><init>(FF)V

    const-wide/16 v1, 0x12c

    invoke-virtual {v0, v1, v2}, Landroid/view/animation/AlphaAnimation;->setDuration(J)V

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/u$2;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v1}, Lcom/sigmob/sdk/nativead/u;->e(Lcom/sigmob/sdk/nativead/u;)Landroid/widget/RelativeLayout;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/widget/RelativeLayout;->setAnimation(Landroid/view/animation/Animation;)V

    invoke-virtual {v0}, Landroid/view/animation/AlphaAnimation;->start()V

    :cond_2
    return v3

    :cond_3
    :goto_0
    return v1
.end method
