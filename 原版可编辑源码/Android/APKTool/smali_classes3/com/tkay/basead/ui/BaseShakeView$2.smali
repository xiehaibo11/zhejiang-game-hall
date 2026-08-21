.class final Lcom/tkay/basead/ui/BaseShakeView$2;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/animation/Animation$AnimationListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/BaseShakeView;->b()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/BaseShakeView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/BaseShakeView;)V
    .locals 0

    .line 87
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseShakeView$2;->a:Lcom/tkay/basead/ui/BaseShakeView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationEnd(Landroid/view/animation/Animation;)V
    .locals 0

    return-void
.end method

.method public final onAnimationRepeat(Landroid/view/animation/Animation;)V
    .locals 0

    .line 98
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseShakeView$2;->a:Lcom/tkay/basead/ui/BaseShakeView;

    invoke-static {p1}, Lcom/tkay/basead/ui/BaseShakeView;->b(Lcom/tkay/basead/ui/BaseShakeView;)I

    return-void
.end method

.method public final onAnimationStart(Landroid/view/animation/Animation;)V
    .locals 0

    return-void
.end method
