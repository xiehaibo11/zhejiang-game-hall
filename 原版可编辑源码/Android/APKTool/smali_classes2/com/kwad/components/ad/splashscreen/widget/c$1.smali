.class final Lcom/kwad/components/ad/splashscreen/widget/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/animation/ValueAnimator$AnimatorUpdateListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/splashscreen/widget/c;->init()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Ge:Lcom/kwad/components/ad/splashscreen/widget/c;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/widget/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/widget/c$1;->Ge:Lcom/kwad/components/ad/splashscreen/widget/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationUpdate(Landroid/animation/ValueAnimator;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/c$1;->Ge:Lcom/kwad/components/ad/splashscreen/widget/c;

    invoke-virtual {p1}, Landroid/animation/ValueAnimator;->getAnimatedValue()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Float;

    invoke-virtual {p1}, Ljava/lang/Float;->floatValue()F

    move-result p1

    invoke-static {v0, p1}, Lcom/kwad/components/ad/splashscreen/widget/c;->a(Lcom/kwad/components/ad/splashscreen/widget/c;F)F

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/widget/c$1;->Ge:Lcom/kwad/components/ad/splashscreen/widget/c;

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/widget/c;->a(Lcom/kwad/components/ad/splashscreen/widget/c;)F

    move-result v0

    invoke-static {p1, v0}, Lcom/kwad/components/ad/splashscreen/widget/c;->b(Lcom/kwad/components/ad/splashscreen/widget/c;F)V

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/widget/c$1;->Ge:Lcom/kwad/components/ad/splashscreen/widget/c;

    invoke-virtual {p1}, Lcom/kwad/components/ad/splashscreen/widget/c;->invalidateSelf()V

    return-void
.end method
