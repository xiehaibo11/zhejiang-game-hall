.class final Lcom/mbridge/msdk/widget/custom/baseview/c$2;
.super Ljava/lang/Object;
.source "MorphingAnimation.java"

# interfaces
.implements Landroid/animation/Animator$AnimatorListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/widget/custom/baseview/c;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/widget/custom/baseview/c;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/widget/custom/baseview/c;)V
    .locals 0

    .line 121
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/c$2;->a:Lcom/mbridge/msdk/widget/custom/baseview/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationCancel(Landroid/animation/Animator;)V
    .locals 0

    return-void
.end method

.method public final onAnimationEnd(Landroid/animation/Animator;)V
    .locals 0

    .line 129
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/c$2;->a:Lcom/mbridge/msdk/widget/custom/baseview/c;

    invoke-static {p1}, Lcom/mbridge/msdk/widget/custom/baseview/c;->e(Lcom/mbridge/msdk/widget/custom/baseview/c;)Lcom/mbridge/msdk/widget/custom/baseview/d;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 130
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/c$2;->a:Lcom/mbridge/msdk/widget/custom/baseview/c;

    invoke-static {p1}, Lcom/mbridge/msdk/widget/custom/baseview/c;->e(Lcom/mbridge/msdk/widget/custom/baseview/c;)Lcom/mbridge/msdk/widget/custom/baseview/d;

    move-result-object p1

    invoke-interface {p1}, Lcom/mbridge/msdk/widget/custom/baseview/d;->a()V

    :cond_0
    return-void
.end method

.method public final onAnimationRepeat(Landroid/animation/Animator;)V
    .locals 0

    return-void
.end method

.method public final onAnimationStart(Landroid/animation/Animator;)V
    .locals 0

    return-void
.end method
