.class public Lcom/kwad/components/offline/tk/TkCompoImpl;
.super Lcom/kwad/components/core/offline/init/DefaultOfflineCompo;

# interfaces
.implements Lcom/kwad/components/core/offline/api/b/c;


# instance fields
.field private final mOfflineCompo:Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;


# direct methods
.method public constructor <init>(Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/offline/init/DefaultOfflineCompo;-><init>(Lcom/kwad/components/offline/api/IOfflineCompo;)V

    iput-object p1, p0, Lcom/kwad/components/offline/tk/TkCompoImpl;->mOfflineCompo:Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;

    return-void
.end method


# virtual methods
.method public checkStyleTemplateById(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)Lcom/kwad/components/offline/api/tk/model/StyleTemplate;
    .locals 6

    iget-object v0, p0, Lcom/kwad/components/offline/tk/TkCompoImpl;->mOfflineCompo:Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move v5, p5

    invoke-interface/range {v0 .. v5}, Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;->checkStyleTemplateById(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    move-result-object p1

    return-object p1
.end method

.method public getComponentsType()Ljava/lang/Class;
    .locals 1

    const-class v0, Lcom/kwad/components/offline/tk/TkCompoImpl;

    return-object v0
.end method

.method public getJsBaseDir(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/tk/TkCompoImpl;->mOfflineCompo:Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;

    invoke-interface {v0, p1, p2}, Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;->getJsBaseDir(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public getState()Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/tk/TkCompoImpl;->mOfflineCompo:Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;

    invoke-interface {v0}, Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;->getState()Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;

    move-result-object v0

    return-object v0
.end method

.method public getTKVersion()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/tk/TkCompoImpl;->mOfflineCompo:Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;

    invoke-interface {v0}, Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;->getTKVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getView(Landroid/content/Context;Ljava/lang/String;II)Lcom/kwad/sdk/components/l;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/tk/TkCompoImpl;->mOfflineCompo:Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;

    invoke-interface {v0, p1, p2, p3, p4}, Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;->getView(Landroid/content/Context;Ljava/lang/String;II)Lcom/kwad/components/offline/api/tk/IOfflineCompoTachikomaView;

    move-result-object p1

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return-object p1

    :cond_0
    new-instance p2, Lcom/kwad/components/offline/tk/a/g;

    invoke-direct {p2, p1}, Lcom/kwad/components/offline/tk/a/g;-><init>(Lcom/kwad/components/offline/api/tk/IOfflineCompoTachikomaView;)V

    return-object p2
.end method

.method public init(Landroid/content/Context;)V
    .locals 0

    return-void
.end method

.method public loadTkFileByTemplateId(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILcom/kwad/components/offline/api/tk/TKDownloadListener;)V
    .locals 7

    iget-object v0, p0, Lcom/kwad/components/offline/tk/TkCompoImpl;->mOfflineCompo:Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move v5, p5

    move-object v6, p6

    invoke-interface/range {v0 .. v6}, Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;->loadTkFileByTemplateId(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILcom/kwad/components/offline/api/tk/TKDownloadListener;)V

    return-void
.end method

.method public onConfigRefresh(Landroid/content/Context;Lorg/json/JSONObject;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/tk/TkCompoImpl;->mOfflineCompo:Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;

    invoke-interface {v0, p1, p2}, Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;->onConfigRefresh(Landroid/content/Context;Lorg/json/JSONObject;)V

    return-void
.end method

.method public onDestroy()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/tk/TkCompoImpl;->mOfflineCompo:Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;

    invoke-interface {v0}, Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;->onDestroy()V

    return-void
.end method
