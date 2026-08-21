.class public abstract Lcom/sigmob/sdk/videoAd/c;
.super Lcom/sigmob/sdk/base/common/i;


# direct methods
.method protected constructor <init>(Landroid/app/Activity;Ljava/lang/String;Lcom/sigmob/sdk/base/common/j;)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Lcom/sigmob/sdk/base/common/i;-><init>(Landroid/app/Activity;Ljava/lang/String;Lcom/sigmob/sdk/base/common/j;)V

    return-void
.end method


# virtual methods
.method protected a(Z)V
    .locals 0

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/c;->d:Lcom/sigmob/sdk/base/common/j;

    invoke-interface {p1}, Lcom/sigmob/sdk/base/common/j;->a()V

    :cond_0
    return-void
.end method

.method public b()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/c;->d:Lcom/sigmob/sdk/base/common/j;

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/c;->c:Landroid/widget/RelativeLayout;

    invoke-interface {v0, v1}, Lcom/sigmob/sdk/base/common/j;->onSetContentView(Landroid/view/View;)V

    return-void
.end method

.method protected b(Landroid/content/Context;ILandroid/os/Bundle;)V
    .locals 1

    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {p0, p1, p2, p3}, Lcom/sigmob/sdk/videoAd/c;->a(Landroid/content/Context;ILandroid/os/Bundle;)V

    const-string p1, "enablekeepon"

    const/4 p2, 0x0

    invoke-virtual {p3, p1, p2}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;Z)Z

    move-result p1

    const-string v0, "enablescreenlockdisplayad"

    invoke-virtual {p3, v0, p2}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;Z)Z

    move-result p2

    sget p3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v0, 0x1b

    if-lt p3, v0, :cond_1

    const/4 p3, 0x1

    if-eqz p2, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/c;->k()Landroid/app/Activity;

    move-result-object p2

    invoke-virtual {p2, p3}, Landroid/app/Activity;->setShowWhenLocked(Z)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/c;->k()Landroid/app/Activity;

    move-result-object p2

    invoke-virtual {p2, p3}, Landroid/app/Activity;->setTurnScreenOn(Z)V

    :cond_0
    if-eqz p1, :cond_3

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/c;->k()Landroid/app/Activity;

    move-result-object p1

    invoke-virtual {p1, p3}, Landroid/app/Activity;->setShowWhenLocked(Z)V

    goto :goto_0

    :cond_1
    if-eqz p2, :cond_2

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/c;->k()Landroid/app/Activity;

    move-result-object p2

    invoke-virtual {p2}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p2

    const/high16 p3, 0x280000

    invoke-virtual {p2, p3}, Landroid/view/Window;->addFlags(I)V

    :cond_2
    if-eqz p1, :cond_3

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/c;->k()Landroid/app/Activity;

    move-result-object p1

    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p1

    const/16 p2, 0x80

    invoke-virtual {p1, p2}, Landroid/view/Window;->addFlags(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_3
    :goto_0
    return-void
.end method
