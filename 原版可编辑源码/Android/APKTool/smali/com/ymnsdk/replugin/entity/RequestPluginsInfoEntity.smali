.class public Lcom/ymnsdk/replugin/entity/RequestPluginsInfoEntity;
.super Ljava/lang/Object;
.source "RequestPluginsInfoEntity.java"


# instance fields
.field app_id:Ljava/lang/String;

.field framework:Ljava/lang/String;

.field label:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 4
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getApp_id()Ljava/lang/String;
    .locals 1

    .line 13
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/RequestPluginsInfoEntity;->app_id:Ljava/lang/String;

    return-object v0
.end method

.method public getFramework()Ljava/lang/String;
    .locals 1

    .line 21
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/RequestPluginsInfoEntity;->framework:Ljava/lang/String;

    return-object v0
.end method

.method public getLabel()Ljava/lang/String;
    .locals 1

    .line 29
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/RequestPluginsInfoEntity;->label:Ljava/lang/String;

    return-object v0
.end method

.method public setApp_id(Ljava/lang/String;)V
    .locals 0

    .line 17
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/RequestPluginsInfoEntity;->app_id:Ljava/lang/String;

    return-void
.end method

.method public setFramework(Ljava/lang/String;)V
    .locals 0

    .line 25
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/RequestPluginsInfoEntity;->framework:Ljava/lang/String;

    return-void
.end method

.method public setLabel(Ljava/lang/String;)V
    .locals 0

    .line 33
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/RequestPluginsInfoEntity;->label:Ljava/lang/String;

    return-void
.end method
