.class public final Lcom/kwad/components/core/offline/init/b/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/core/adlive/ILive;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final getAdLivePlayModule(Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;
    .locals 2

    const-class v0, Lcom/kwad/components/core/offline/api/a/a;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/offline/api/a/a;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/components/core/offline/api/a/a;->hasLiveCompoReady()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0, p1, p2, p3}, Lcom/kwad/components/core/offline/api/a/a;->getAdLivePlayModule(Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    move-result-object p1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return-object p1
.end method

.method public final getIAdLiveOfflineView(Landroid/content/Context;I)Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;
    .locals 2

    const-class v0, Lcom/kwad/components/core/offline/api/a/a;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/offline/api/a/a;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/components/core/offline/api/a/a;->hasLiveCompoReady()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/kwad/components/core/offline/api/a/a;->getView(Landroid/content/Context;I)Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;

    move-result-object p1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return-object p1
.end method

.method public final mIAdLiveEndRequest(Ljava/lang/String;)Lcom/kwad/components/offline/api/core/adlive/IAdLiveEndRequest;
    .locals 2

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-class v0, Lcom/kwad/components/core/offline/api/a/a;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/offline/api/a/a;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/components/core/offline/api/a/a;->hasLiveCompoReady()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/components/core/offline/api/a/a;->getAdLiveEndRequest(Ljava/lang/String;)Lcom/kwad/components/offline/api/core/adlive/IAdLiveEndRequest;

    move-result-object p1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return-object p1
.end method
