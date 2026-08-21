.class public Lcom/kwad/components/offline/obiwan/ObiwanComponentsImpl;
.super Lcom/kwad/components/core/offline/init/DefaultOfflineCompo;

# interfaces
.implements Lcom/kwad/components/core/offline/api/obiwan/ObiwanComponents;


# instance fields
.field private final mOfflineCompo:Lcom/kwad/components/offline/api/obiwan/IObiwanOfflineCompo;


# direct methods
.method public constructor <init>(Lcom/kwad/components/offline/api/obiwan/IObiwanOfflineCompo;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/offline/init/DefaultOfflineCompo;-><init>(Lcom/kwad/components/offline/api/IOfflineCompo;)V

    iput-object p1, p0, Lcom/kwad/components/offline/obiwan/ObiwanComponentsImpl;->mOfflineCompo:Lcom/kwad/components/offline/api/obiwan/IObiwanOfflineCompo;

    return-void
.end method


# virtual methods
.method public getComponentsType()Ljava/lang/Class;
    .locals 1

    const-class v0, Lcom/kwad/components/offline/obiwan/ObiwanComponentsImpl;

    return-object v0
.end method

.method public getLog()Lcom/kwad/components/offline/api/obiwan/IObiwanLogcat;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/obiwan/ObiwanComponentsImpl;->mOfflineCompo:Lcom/kwad/components/offline/api/obiwan/IObiwanOfflineCompo;

    invoke-interface {v0}, Lcom/kwad/components/offline/api/obiwan/IObiwanOfflineCompo;->getLog()Lcom/kwad/components/offline/api/obiwan/IObiwanLogcat;

    move-result-object v0

    return-object v0
.end method

.method public initReal(Landroid/content/Context;Lcom/kwad/sdk/api/SdkConfig;Lcom/kwad/components/offline/api/obiwan/IObiwanOfflineCompoInitConfig;Lcom/kwad/components/offline/api/InitCallBack;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/obiwan/ObiwanComponentsImpl;->mOfflineCompo:Lcom/kwad/components/offline/api/obiwan/IObiwanOfflineCompo;

    invoke-interface {v0, p1, p2, p3, p4}, Lcom/kwad/components/offline/api/obiwan/IObiwanOfflineCompo;->initReal(Landroid/content/Context;Lcom/kwad/sdk/api/SdkConfig;Lcom/kwad/components/offline/api/obiwan/IObiwanOfflineCompoInitConfig;Lcom/kwad/components/offline/api/InitCallBack;)V

    return-void
.end method

.method public updateConfigs()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/obiwan/ObiwanComponentsImpl;->mOfflineCompo:Lcom/kwad/components/offline/api/obiwan/IObiwanOfflineCompo;

    invoke-interface {v0}, Lcom/kwad/components/offline/api/obiwan/IObiwanOfflineCompo;->updateConfigs()V

    return-void
.end method
