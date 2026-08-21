.class Lcom/sigmob/sdk/b$1;
.super Lcom/czhj/sdk/common/CustomController;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/b;->a(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/windad/WindCustomController;


# direct methods
.method constructor <init>(Lcom/sigmob/windad/WindCustomController;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/b$1;->a:Lcom/sigmob/windad/WindCustomController;

    invoke-direct {p0}, Lcom/czhj/sdk/common/CustomController;-><init>()V

    return-void
.end method


# virtual methods
.method public getAndroidId()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/b$1;->a:Lcom/sigmob/windad/WindCustomController;

    invoke-virtual {v0}, Lcom/sigmob/windad/WindCustomController;->getAndroidId()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getDevImei()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/b$1;->a:Lcom/sigmob/windad/WindCustomController;

    invoke-virtual {v0}, Lcom/sigmob/windad/WindCustomController;->getDevImei()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getDevOaid()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/b$1;->a:Lcom/sigmob/windad/WindCustomController;

    invoke-virtual {v0}, Lcom/sigmob/windad/WindCustomController;->getDevOaid()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getLocation()Landroid/location/Location;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/b$1;->a:Lcom/sigmob/windad/WindCustomController;

    invoke-virtual {v0}, Lcom/sigmob/windad/WindCustomController;->getLocation()Landroid/location/Location;

    move-result-object v0

    return-object v0
.end method

.method public isCanUseAndroidId()Z
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/b$1;->a:Lcom/sigmob/windad/WindCustomController;

    invoke-virtual {v0}, Lcom/sigmob/windad/WindCustomController;->isCanUseAndroidId()Z

    move-result v0

    return v0
.end method

.method public isCanUseLocation()Z
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/b$1;->a:Lcom/sigmob/windad/WindCustomController;

    invoke-virtual {v0}, Lcom/sigmob/windad/WindCustomController;->isCanUseLocation()Z

    move-result v0

    return v0
.end method

.method public isCanUsePhoneState()Z
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/b$1;->a:Lcom/sigmob/windad/WindCustomController;

    invoke-virtual {v0}, Lcom/sigmob/windad/WindCustomController;->isCanUsePhoneState()Z

    move-result v0

    return v0
.end method
