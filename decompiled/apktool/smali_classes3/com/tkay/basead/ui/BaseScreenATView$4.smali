.class final Lcom/tkay/basead/ui/BaseScreenATView$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/BaseScreenATView;->a(Lcom/tkay/basead/ui/BaseShakeView;Lcom/tkay/basead/ui/BaseShakeView;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/BaseShakeView;

.field final synthetic b:Lcom/tkay/basead/ui/BaseShakeView;

.field final synthetic c:Lcom/tkay/basead/ui/BaseScreenATView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/BaseScreenATView;Lcom/tkay/basead/ui/BaseShakeView;Lcom/tkay/basead/ui/BaseShakeView;)V
    .locals 0

    .line 950
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$4;->c:Lcom/tkay/basead/ui/BaseScreenATView;

    iput-object p2, p0, Lcom/tkay/basead/ui/BaseScreenATView$4;->a:Lcom/tkay/basead/ui/BaseShakeView;

    iput-object p3, p0, Lcom/tkay/basead/ui/BaseScreenATView$4;->b:Lcom/tkay/basead/ui/BaseShakeView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 7

    .line 953
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$4;->c:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-boolean v0, v0, Lcom/tkay/basead/ui/BaseScreenATView;->u:Z

    if-nez v0, :cond_0

    const/4 v0, 0x0

    const/4 v1, 0x2

    :try_start_0
    new-array v2, v1, [F

    const/high16 v3, 0x3f800000    # 1.0f

    aput v3, v2, v0

    const v3, 0x3e4ccccd    # 0.2f

    const/4 v4, 0x1

    aput v3, v2, v4

    .line 955
    invoke-static {v2}, Landroid/animation/ValueAnimator;->ofFloat([F)Landroid/animation/ValueAnimator;

    move-result-object v2

    const-wide/16 v5, 0x1f4

    .line 956
    invoke-virtual {v2, v5, v6}, Landroid/animation/ValueAnimator;->setDuration(J)Landroid/animation/ValueAnimator;

    .line 957
    invoke-virtual {v2, v4}, Landroid/animation/ValueAnimator;->setRepeatCount(I)V

    .line 958
    invoke-virtual {v2, v1}, Landroid/animation/ValueAnimator;->setRepeatMode(I)V

    .line 959
    new-instance v1, Lcom/tkay/basead/ui/BaseScreenATView$4$1;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/BaseScreenATView$4$1;-><init>(Lcom/tkay/basead/ui/BaseScreenATView$4;)V

    invoke-virtual {v2, v1}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    .line 971
    new-instance v1, Lcom/tkay/basead/ui/BaseScreenATView$4$2;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/BaseScreenATView$4$2;-><init>(Lcom/tkay/basead/ui/BaseScreenATView$4;)V

    invoke-virtual {v2, v1}, Landroid/animation/ValueAnimator;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    .line 983
    invoke-virtual {v2}, Landroid/animation/ValueAnimator;->start()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    .line 985
    :catchall_0
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView$4;->a:Lcom/tkay/basead/ui/BaseShakeView;

    const/16 v2, 0x8

    invoke-virtual {v1, v2}, Lcom/tkay/basead/ui/BaseShakeView;->setVisibility(I)V

    .line 986
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView$4;->b:Lcom/tkay/basead/ui/BaseShakeView;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView$4;->c:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-boolean v1, v1, Lcom/tkay/basead/ui/BaseScreenATView;->u:Z

    if-nez v1, :cond_0

    .line 987
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView$4;->b:Lcom/tkay/basead/ui/BaseShakeView;

    invoke-virtual {v1, v0}, Lcom/tkay/basead/ui/BaseShakeView;->setVisibility(I)V

    :cond_0
    return-void
.end method
