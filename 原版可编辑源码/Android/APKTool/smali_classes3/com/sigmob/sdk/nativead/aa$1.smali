.class Lcom/sigmob/sdk/nativead/aa$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/animation/ValueAnimator$AnimatorUpdateListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/nativead/aa;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/nativead/aa;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/nativead/aa;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/aa$1;->a:Lcom/sigmob/sdk/nativead/aa;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAnimationUpdate(Landroid/animation/ValueAnimator;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/aa$1;->a:Lcom/sigmob/sdk/nativead/aa;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/aa;->a(Lcom/sigmob/sdk/nativead/aa;)Landroid/view/ViewGroup;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    invoke-virtual {p1}, Landroid/animation/ValueAnimator;->getAnimatedValue()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    iput p1, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/aa$1;->a:Lcom/sigmob/sdk/nativead/aa;

    invoke-static {p1}, Lcom/sigmob/sdk/nativead/aa;->a(Lcom/sigmob/sdk/nativead/aa;)Landroid/view/ViewGroup;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method
