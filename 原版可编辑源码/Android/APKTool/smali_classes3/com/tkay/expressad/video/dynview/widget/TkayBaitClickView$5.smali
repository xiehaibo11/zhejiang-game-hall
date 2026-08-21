.class final Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$5;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/animation/Animation$AnimationListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->e()V
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

    .line 401
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$5;->a:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationEnd(Landroid/view/animation/Animation;)V
    .locals 3

    .line 408
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$5;->a:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    new-instance v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$5$1;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$5$1;-><init>(Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$5;)V

    const-wide/16 v1, 0x3e8

    invoke-virtual {p1, v0, v1, v2}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method public final onAnimationRepeat(Landroid/view/animation/Animation;)V
    .locals 0

    return-void
.end method

.method public final onAnimationStart(Landroid/view/animation/Animation;)V
    .locals 0

    return-void
.end method
