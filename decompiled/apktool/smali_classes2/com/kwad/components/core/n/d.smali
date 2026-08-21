.class public abstract Lcom/kwad/components/core/n/d;
.super Landroid/app/AlertDialog;


# instance fields
.field public mActivity:Landroid/app/Activity;

.field protected final mContext:Landroid/content/Context;

.field protected zv:Landroid/view/ViewGroup;


# direct methods
.method protected constructor <init>(Landroid/app/Activity;)V
    .locals 0

    invoke-direct {p0, p1}, Landroid/app/AlertDialog;-><init>(Landroid/content/Context;)V

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/n/d;->setOwnerActivity(Landroid/app/Activity;)V

    iput-object p1, p0, Lcom/kwad/components/core/n/d;->mActivity:Landroid/app/Activity;

    invoke-static {p1}, Lcom/kwad/sdk/m/l;->wrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/core/n/d;->mContext:Landroid/content/Context;

    return-void
.end method


# virtual methods
.method protected cf()Landroid/view/ViewGroup;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public dismiss()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/n/d;->mActivity:Landroid/app/Activity;

    if-nez v0, :cond_0

    return-void

    :cond_0
    :try_start_0
    invoke-static {v0}, Lcom/kwad/sdk/m/l;->h(Landroid/app/Activity;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :try_start_1
    invoke-super {p0}, Landroid/app/AlertDialog;->dismiss()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    return-void

    :catchall_1
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    return-void
.end method

.method public findViewById(I)Landroid/view/View;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Landroid/view/View;",
            ">(I)TT;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/components/core/n/d;->zv:Landroid/view/ViewGroup;

    invoke-virtual {v0, p1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    invoke-super {p0, p1}, Landroid/app/AlertDialog;->findViewById(I)Landroid/view/View;

    move-result-object p1

    return-object p1
.end method

.method protected abstract g(Landroid/view/View;)V
.end method

.method protected abstract getLayoutId()I
.end method

.method protected na()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method protected final onCreate(Landroid/os/Bundle;)V
    .locals 2

    invoke-super {p0, p1}, Landroid/app/AlertDialog;->onCreate(Landroid/os/Bundle;)V

    :try_start_0
    invoke-virtual {p0}, Lcom/kwad/components/core/n/d;->getLayoutId()I

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/core/n/d;->mContext:Landroid/content/Context;

    invoke-virtual {p0}, Lcom/kwad/components/core/n/d;->getLayoutId()I

    move-result v0

    const/4 v1, 0x0

    invoke-static {p1, v0, v1}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup;

    :goto_0
    iput-object p1, p0, Lcom/kwad/components/core/n/d;->zv:Landroid/view/ViewGroup;

    goto :goto_1

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/components/core/n/d;->cf()Landroid/view/ViewGroup;

    move-result-object p1

    goto :goto_0

    :goto_1
    iget-object p1, p0, Lcom/kwad/components/core/n/d;->zv:Landroid/view/ViewGroup;

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/n/d;->setContentView(Landroid/view/View;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/n/d;->na()Z

    move-result p1

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/n/d;->setCanceledOnTouchOutside(Z)V

    invoke-virtual {p0}, Lcom/kwad/components/core/n/d;->getWindow()Landroid/view/Window;

    move-result-object p1

    invoke-virtual {p1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object p1

    const/4 v0, 0x0

    invoke-virtual {p1, v0, v0, v0, v0}, Landroid/view/View;->setPadding(IIII)V

    invoke-virtual {p0}, Lcom/kwad/components/core/n/d;->getWindow()Landroid/view/Window;

    move-result-object p1

    new-instance v1, Landroid/graphics/drawable/ColorDrawable;

    invoke-direct {v1, v0}, Landroid/graphics/drawable/ColorDrawable;-><init>(I)V

    invoke-virtual {p1, v1}, Landroid/view/Window;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/n/d;->getWindow()Landroid/view/Window;

    move-result-object p1

    const/high16 v0, 0x20000

    invoke-virtual {p1, v0}, Landroid/view/Window;->clearFlags(I)V

    invoke-virtual {p0}, Lcom/kwad/components/core/n/d;->getWindow()Landroid/view/Window;

    move-result-object p1

    invoke-virtual {p1}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object p1

    const/4 v0, -0x1

    iput v0, p1, Landroid/view/WindowManager$LayoutParams;->width:I

    iput v0, p1, Landroid/view/WindowManager$LayoutParams;->height:I

    invoke-virtual {p0}, Lcom/kwad/components/core/n/d;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    const/4 p1, 0x1

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/n/d;->setCancelable(Z)V

    iget-object p1, p0, Lcom/kwad/components/core/n/d;->zv:Landroid/view/ViewGroup;

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/n/d;->g(Landroid/view/View;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->getIsExternal()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {p1}, Lcom/kwad/components/core/d/a;->b(Ljava/lang/Throwable;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/n/d;->dismiss()V

    return-void

    :cond_1
    throw p1
.end method

.method protected onStart()V
    .locals 1

    invoke-super {p0}, Landroid/app/AlertDialog;->onStart()V

    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/n/d;->setTitle(Ljava/lang/CharSequence;)V

    return-void
.end method

.method public setContentView(I)V
    .locals 2

    invoke-super {p0, p1}, Landroid/app/AlertDialog;->setContentView(I)V

    iget-object v0, p0, Lcom/kwad/components/core/n/d;->mContext:Landroid/content/Context;

    const/4 v1, 0x0

    invoke-static {v0, p1, v1}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup;

    iput-object p1, p0, Lcom/kwad/components/core/n/d;->zv:Landroid/view/ViewGroup;

    return-void
.end method
