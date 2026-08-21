.class public Lcom/tkay/expressad/video/dynview/widget/TYTextView;
.super Landroid/widget/TextView;


# instance fields
.field private a:Landroid/animation/ObjectAnimator;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 13
    invoke-direct {p0, p1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 17
    invoke-direct {p0, p1, p2}, Landroid/widget/TextView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 21
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/TextView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method


# virtual methods
.method protected onAttachedToWindow()V
    .locals 1

    .line 32
    invoke-super {p0}, Landroid/widget/TextView;->onAttachedToWindow()V

    .line 33
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYTextView;->a:Landroid/animation/ObjectAnimator;

    if-eqz v0, :cond_0

    .line 35
    :try_start_0
    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->start()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 37
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 1

    .line 45
    invoke-super {p0}, Landroid/widget/TextView;->onDetachedFromWindow()V

    .line 46
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYTextView;->a:Landroid/animation/ObjectAnimator;

    if-eqz v0, :cond_0

    .line 48
    :try_start_0
    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->cancel()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 50
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    return-void
.end method

.method public setObjectAnimator(Landroid/animation/ObjectAnimator;)V
    .locals 0

    .line 27
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYTextView;->a:Landroid/animation/ObjectAnimator;

    return-void
.end method
