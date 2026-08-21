.class final Lcom/tkay/basead/ui/BaseShakeView$3;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/animation/Interpolator;


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

    .line 101
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseShakeView$3;->a:Lcom/tkay/basead/ui/BaseShakeView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final getInterpolation(F)F
    .locals 1

    .line 104
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseShakeView$3;->a:Lcom/tkay/basead/ui/BaseShakeView;

    invoke-static {v0}, Lcom/tkay/basead/ui/BaseShakeView;->c(Lcom/tkay/basead/ui/BaseShakeView;)I

    move-result v0

    div-int/lit8 v0, v0, 0x2

    rem-int/lit8 v0, v0, 0x3

    if-nez v0, :cond_0

    const/4 p1, 0x0

    :cond_0
    return p1
.end method
