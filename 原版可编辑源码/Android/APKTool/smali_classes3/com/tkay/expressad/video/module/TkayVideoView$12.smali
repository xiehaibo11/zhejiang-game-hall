.class final Lcom/tkay/expressad/video/module/TkayVideoView$12;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/module/TkayVideoView;->setNotchPadding(IIII)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:I

.field final synthetic c:I

.field final synthetic d:I

.field final synthetic e:Lcom/tkay/expressad/video/module/TkayVideoView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/module/TkayVideoView;IIII)V
    .locals 0

    .line 2134
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$12;->e:Lcom/tkay/expressad/video/module/TkayVideoView;

    iput p2, p0, Lcom/tkay/expressad/video/module/TkayVideoView$12;->a:I

    iput p3, p0, Lcom/tkay/expressad/video/module/TkayVideoView$12;->b:I

    iput p4, p0, Lcom/tkay/expressad/video/module/TkayVideoView$12;->c:I

    iput p5, p0, Lcom/tkay/expressad/video/module/TkayVideoView$12;->d:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 6

    .line 2137
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$12;->e:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->s(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/RelativeLayout;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 2140
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$12;->e:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->s(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/RelativeLayout;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    .line 2141
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$12;->e:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$12;->e:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$12;->e:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->f()I

    move-result v0

    const/4 v2, 0x2

    if-eq v0, v2, :cond_1

    .line 2142
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$12;->e:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->s(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/RelativeLayout;

    move-result-object v0

    iget v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView$12;->a:I

    iget v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView$12;->b:I

    iget v4, p0, Lcom/tkay/expressad/video/module/TkayVideoView$12;->c:I

    iget v5, p0, Lcom/tkay/expressad/video/module/TkayVideoView$12;->d:I

    invoke-virtual {v0, v2, v3, v4, v5}, Landroid/widget/RelativeLayout;->setPadding(IIII)V

    .line 2143
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$12;->e:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->s(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/RelativeLayout;

    move-result-object v0

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView$12;->e:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v2}, Lcom/tkay/expressad/video/module/TkayVideoView;->F(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/view/animation/AlphaAnimation;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/RelativeLayout;->startAnimation(Landroid/view/animation/Animation;)V

    .line 2145
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$12;->e:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->s(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/RelativeLayout;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    return-void
.end method
