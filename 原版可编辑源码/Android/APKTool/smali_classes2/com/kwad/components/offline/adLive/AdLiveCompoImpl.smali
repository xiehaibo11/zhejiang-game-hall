.class public Lcom/kwad/components/offline/adLive/AdLiveCompoImpl;
.super Lcom/kwad/components/core/offline/init/DefaultOfflineCompo;

# interfaces
.implements Lcom/kwad/components/core/offline/api/a/a;


# instance fields
.field private final mOfflineCompo:Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo;


# direct methods
.method public constructor <init>(Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/offline/init/DefaultOfflineCompo;-><init>(Lcom/kwad/components/offline/api/IOfflineCompo;)V

    iput-object p1, p0, Lcom/kwad/components/offline/adLive/AdLiveCompoImpl;->mOfflineCompo:Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo;

    return-void
.end method


# virtual methods
.method public getAdLiveEndRequest(Ljava/lang/String;)Lcom/kwad/components/offline/api/core/adlive/IAdLiveEndRequest;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/adLive/AdLiveCompoImpl;->mOfflineCompo:Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo;

    invoke-interface {v0, p1}, Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo;->getAdLiveEndRequest(Ljava/lang/String;)Lcom/kwad/components/offline/api/core/adlive/IAdLiveEndRequest;

    move-result-object p1

    return-object p1
.end method

.method public getAdLivePlayModule(Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/adLive/AdLiveCompoImpl;->mOfflineCompo:Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo;

    invoke-interface {v0, p1, p2, p3}, Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo;->getAdLivePlayModule(Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    move-result-object p1

    return-object p1
.end method

.method public getComponentsType()Ljava/lang/Class;
    .locals 1

    const-class v0, Lcom/kwad/components/offline/adLive/AdLiveCompoImpl;

    return-object v0
.end method

.method public getState()Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/adLive/AdLiveCompoImpl;->mOfflineCompo:Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo;

    invoke-interface {v0}, Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo;->getState()Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;

    move-result-object v0

    return-object v0
.end method

.method public getView(Landroid/content/Context;I)Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/adLive/AdLiveCompoImpl;->mOfflineCompo:Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo;

    invoke-interface {v0, p1, p2}, Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo;->getView(Landroid/content/Context;I)Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;

    move-result-object p1

    return-object p1
.end method

.method public hasLiveCompoReady()Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/offline/adLive/AdLiveCompoImpl;->mOfflineCompo:Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo;

    invoke-interface {v0}, Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo;->getState()Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;

    move-result-object v0

    sget-object v1, Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;->READY:Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public onConfigRefresh(Landroid/content/Context;Lorg/json/JSONObject;)V
    .locals 1

    if-eqz p2, :cond_0

    iget-object v0, p0, Lcom/kwad/components/offline/adLive/AdLiveCompoImpl;->mOfflineCompo:Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo;

    invoke-interface {v0, p1, p2}, Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo;->onConfigRefresh(Landroid/content/Context;Lorg/json/JSONObject;)V

    :cond_0
    return-void
.end method
