.class final Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$3;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/animation/Animation$AnimationListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->d()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;)V
    .locals 0

    .line 339
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$3;->a:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationEnd(Landroid/view/animation/Animation;)V
    .locals 1

    .line 349
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$3;->a:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->a(Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;)Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 350
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$3;->a:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->a(Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;)Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    move-result-object p1

    const/4 v0, 0x4

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method public final onAnimationRepeat(Landroid/view/animation/Animation;)V
    .locals 0

    return-void
.end method

.method public final onAnimationStart(Landroid/view/animation/Animation;)V
    .locals 1

    .line 342
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$3;->a:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->a(Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;)Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 343
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$3;->a:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->a(Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;)Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    move-result-object p1

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->setVisibility(I)V

    :cond_0
    return-void
.end method
