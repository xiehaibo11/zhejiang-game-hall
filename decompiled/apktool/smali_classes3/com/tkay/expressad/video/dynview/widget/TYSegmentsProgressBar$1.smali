.class final Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/animation/Animation$AnimationListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->dismiss()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;)V
    .locals 0

    .line 267
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar$1;->a:Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationEnd(Landroid/view/animation/Animation;)V
    .locals 1

    .line 275
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar$1;->a:Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;

    const/16 v0, 0x8

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->setVisibility(I)V

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
