.class public Lcom/sigmob/sdk/mraid/o;
.super Lcom/sigmob/sdk/base/views/e;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/mraid/o$a;
    }
.end annotation


# static fields
.field private static final a:I = 0x1


# instance fields
.field private b:Lcom/sigmob/sdk/mraid/o$a;

.field private c:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/views/e;-><init>(Landroid/content/Context;)V

    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v0, 0x16

    if-gt p1, v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/o;->getVisibility()I

    move-result p1

    if-nez p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    iput-boolean p1, p0, Lcom/sigmob/sdk/mraid/o;->c:Z

    :cond_1
    return-void
.end method

.method private setMraidViewable(Z)V
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/mraid/o;->c:Z

    if-ne v0, p1, :cond_0

    return-void

    :cond_0
    iput-boolean p1, p0, Lcom/sigmob/sdk/mraid/o;->c:Z

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/o;->b:Lcom/sigmob/sdk/mraid/o$a;

    if-eqz v0, :cond_1

    invoke-interface {v0, p1}, Lcom/sigmob/sdk/mraid/o$a;->a(Z)V

    :cond_1
    return-void
.end method


# virtual methods
.method public destroy()V
    .locals 1

    invoke-super {p0}, Lcom/sigmob/sdk/base/views/e;->destroy()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/mraid/o;->b:Lcom/sigmob/sdk/mraid/o$a;

    return-void
.end method

.method public h()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/mraid/o;->c:Z

    return v0
.end method

.method protected onVisibilityChanged(Landroid/view/View;I)V
    .locals 0

    invoke-super {p0, p1, p2}, Lcom/sigmob/sdk/base/views/e;->onVisibilityChanged(Landroid/view/View;I)V

    if-nez p2, :cond_0

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/mraid/o;->setMraidViewable(Z)V

    :goto_0
    return-void
.end method

.method public setVisibilityChangedListener(Lcom/sigmob/sdk/mraid/o$a;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/o;->b:Lcom/sigmob/sdk/mraid/o$a;

    return-void
.end method
