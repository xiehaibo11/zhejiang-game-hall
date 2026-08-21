.class final Lcom/kwad/components/ad/feed/b/d$3;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/animation/Animation$AnimationListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/feed/b/d;->a(Landroid/view/View;FI)Landroid/view/animation/Animation;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic eW:Lcom/kwad/components/ad/feed/b/d;

.field final synthetic eX:Landroid/view/View;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/feed/b/d;Landroid/view/View;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/d$3;->eW:Lcom/kwad/components/ad/feed/b/d;

    iput-object p2, p0, Lcom/kwad/components/ad/feed/b/d$3;->eX:Landroid/view/View;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationEnd(Landroid/view/animation/Animation;)V
    .locals 1

    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/d$3;->eX:Landroid/view/View;

    const/4 v0, 0x4

    invoke-virtual {p1, v0}, Landroid/view/View;->setVisibility(I)V

    return-void
.end method

.method public final onAnimationRepeat(Landroid/view/animation/Animation;)V
    .locals 0

    return-void
.end method

.method public final onAnimationStart(Landroid/view/animation/Animation;)V
    .locals 1

    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/d$3;->eX:Landroid/view/View;

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/view/View;->setVisibility(I)V

    return-void
.end method
