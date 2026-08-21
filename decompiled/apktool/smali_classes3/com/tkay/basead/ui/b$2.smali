.class final Lcom/tkay/basead/ui/b$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/b;->b()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/b;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/b;)V
    .locals 0

    .line 71
    iput-object p1, p0, Lcom/tkay/basead/ui/b$2;->a:Lcom/tkay/basead/ui/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 9

    .line 75
    :try_start_0
    iget-object v0, p0, Lcom/tkay/basead/ui/b$2;->a:Lcom/tkay/basead/ui/b;

    invoke-static {v0}, Lcom/tkay/basead/ui/b;->c(Lcom/tkay/basead/ui/b;)Landroid/widget/ImageView;

    move-result-object v0

    const/high16 v1, 0x3f800000    # 1.0f

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setAlpha(F)V

    .line 76
    new-instance v0, Landroid/view/animation/RotateAnimation;

    const/4 v3, 0x0

    const/high16 v4, -0x3c4c0000    # -360.0f

    const/4 v5, 0x1

    const/high16 v6, 0x3f000000    # 0.5f

    const/4 v7, 0x1

    const/high16 v8, 0x3f000000    # 0.5f

    move-object v2, v0

    invoke-direct/range {v2 .. v8}, Landroid/view/animation/RotateAnimation;-><init>(FFIFIF)V

    const-wide/16 v1, 0x3e8

    .line 78
    invoke-virtual {v0, v1, v2}, Landroid/view/animation/RotateAnimation;->setDuration(J)V

    .line 79
    new-instance v1, Landroid/view/animation/LinearInterpolator;

    invoke-direct {v1}, Landroid/view/animation/LinearInterpolator;-><init>()V

    invoke-virtual {v0, v1}, Landroid/view/animation/RotateAnimation;->setInterpolator(Landroid/view/animation/Interpolator;)V

    const/4 v1, -0x1

    .line 80
    invoke-virtual {v0, v1}, Landroid/view/animation/RotateAnimation;->setRepeatCount(I)V

    .line 81
    iget-object v1, p0, Lcom/tkay/basead/ui/b$2;->a:Lcom/tkay/basead/ui/b;

    invoke-static {v1}, Lcom/tkay/basead/ui/b;->c(Lcom/tkay/basead/ui/b;)Landroid/widget/ImageView;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/widget/ImageView;->startAnimation(Landroid/view/animation/Animation;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method
