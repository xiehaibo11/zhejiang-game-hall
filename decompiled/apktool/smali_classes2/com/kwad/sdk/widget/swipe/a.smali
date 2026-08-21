.class public abstract Lcom/kwad/sdk/widget/swipe/a;
.super Ljava/lang/Object;


# instance fields
.field private aMv:Z


# virtual methods
.method protected abstract KK()Z
.end method

.method protected abstract KL()Z
.end method

.method public final b(Landroid/view/View;Landroid/view/MotionEvent;)Z
    .locals 0

    iget-boolean p1, p0, Lcom/kwad/sdk/widget/swipe/a;->aMv:Z

    if-nez p1, :cond_0

    invoke-virtual {p0}, Lcom/kwad/sdk/widget/swipe/a;->KK()Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public final c(Landroid/view/View;Landroid/view/MotionEvent;)Z
    .locals 0

    iget-boolean p1, p0, Lcom/kwad/sdk/widget/swipe/a;->aMv:Z

    if-nez p1, :cond_0

    invoke-virtual {p0}, Lcom/kwad/sdk/widget/swipe/a;->KL()Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method
