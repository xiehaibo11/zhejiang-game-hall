.class final Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$4$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$4;->onAnimationStart(Landroid/view/animation/Animation;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$4;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$4;)V
    .locals 0

    .line 363
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$4$1;->a:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$4;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 366
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$4$1;->a:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$4;

    iget-object v0, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$4;->b:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    invoke-static {v0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->a(Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;)Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 367
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$4$1;->a:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$4;

    iget-object v0, v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$4;->b:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    invoke-static {v0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->a(Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;)Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$4$1;->a:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$4;

    iget-object v1, v1, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$4;->a:Landroid/view/animation/AnimationSet;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->startAnimation(Landroid/view/animation/Animation;)V

    :cond_0
    return-void
.end method
