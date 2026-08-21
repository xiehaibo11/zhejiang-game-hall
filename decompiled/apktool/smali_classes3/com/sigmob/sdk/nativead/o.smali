.class public Lcom/sigmob/sdk/nativead/o;
.super Lcom/sigmob/sdk/nativead/i;


# instance fields
.field g:Lcom/sigmob/sdk/nativead/x;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/nativead/i;-><init>(Landroid/content/Context;)V

    return-void
.end method


# virtual methods
.method public a(Lcom/sigmob/sdk/nativead/x;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/o;->g:Lcom/sigmob/sdk/nativead/x;

    return-void
.end method

.method public c()V
    .locals 1

    invoke-super {p0}, Lcom/sigmob/sdk/nativead/i;->c()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/o;->g:Lcom/sigmob/sdk/nativead/x;

    return-void
.end method

.method public e()V
    .locals 0

    return-void
.end method

.method public getAdConfig()Lcom/sigmob/sdk/nativead/b;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/o;->g:Lcom/sigmob/sdk/nativead/x;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/x;->x()Lcom/sigmob/sdk/nativead/b;

    move-result-object v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return-object v0
.end method

.method public getAdUnit()Lcom/sigmob/sdk/base/models/BaseAdUnit;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/o;->g:Lcom/sigmob/sdk/nativead/x;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/x;->k()Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return-object v0
.end method

.method public getAppInfoView()Lcom/sigmob/sdk/nativead/j;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/o;->g:Lcom/sigmob/sdk/nativead/x;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/x;->m()Lcom/sigmob/sdk/nativead/j;

    move-result-object v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return-object v0
.end method

.method public getNativeAdUnit()Lcom/sigmob/windad/natives/WindNativeAdData;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/o;->g:Lcom/sigmob/sdk/nativead/x;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/x;->l()Lcom/sigmob/windad/natives/WindNativeAdData;

    move-result-object v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return-object v0
.end method

.method public getVideoDuration()D
    .locals 2

    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public getVideoProgress()D
    .locals 2

    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public i()V
    .locals 0

    return-void
.end method

.method public j()V
    .locals 0

    return-void
.end method

.method public setUIStyle(Lcom/sigmob/sdk/nativead/f;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/o;->d:Lcom/sigmob/sdk/nativead/f;

    return-void
.end method
