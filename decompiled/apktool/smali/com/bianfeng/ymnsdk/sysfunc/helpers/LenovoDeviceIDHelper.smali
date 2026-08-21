.class public Lcom/bianfeng/ymnsdk/sysfunc/helpers/LenovoDeviceIDHelper;
.super Ljava/lang/Object;
.source "LenovoDeviceIDHelper.java"


# instance fields
.field lenovoIDInterface:Lcom/bianfeng/ymnsdk/sysfunc/interfaces/LenovoIDInterface;

.field private mContext:Landroid/content/Context;

.field serviceConnection:Landroid/content/ServiceConnection;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 24
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 53
    new-instance v0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/LenovoDeviceIDHelper$1;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/LenovoDeviceIDHelper$1;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/helpers/LenovoDeviceIDHelper;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/LenovoDeviceIDHelper;->serviceConnection:Landroid/content/ServiceConnection;

    .line 25
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/LenovoDeviceIDHelper;->mContext:Landroid/content/Context;

    return-void
.end method


# virtual methods
.method public getIdRun(Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;)V
    .locals 5

    const-string v0, "LenovoDeviceIDHelper"

    const-string v1, "getIdRun"

    .line 29
    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 31
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/LenovoDeviceIDHelper;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    .line 32
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    const-string v2, "com.zui.deviceidservice"

    const-string v3, "com.zui.deviceidservice.DeviceidService"

    .line 33
    invoke-virtual {v1, v2, v3}, Landroid/content/Intent;->setClassName(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 34
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/LenovoDeviceIDHelper;->mContext:Landroid/content/Context;

    iget-object v3, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/LenovoDeviceIDHelper;->serviceConnection:Landroid/content/ServiceConnection;

    const/4 v4, 0x1

    invoke-virtual {v2, v1, v3, v4}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 36
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/LenovoDeviceIDHelper;->lenovoIDInterface:Lcom/bianfeng/ymnsdk/sysfunc/interfaces/LenovoIDInterface;

    if-eqz v1, :cond_1

    .line 37
    invoke-interface {v1}, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/LenovoIDInterface;->a()Ljava/lang/String;

    move-result-object v1

    .line 38
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/LenovoDeviceIDHelper;->lenovoIDInterface:Lcom/bianfeng/ymnsdk/sysfunc/interfaces/LenovoIDInterface;

    invoke-interface {v2}, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/LenovoIDInterface;->b()Ljava/lang/String;

    .line 39
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/LenovoDeviceIDHelper;->lenovoIDInterface:Lcom/bianfeng/ymnsdk/sysfunc/interfaces/LenovoIDInterface;

    invoke-interface {v2, v0}, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/LenovoIDInterface;->b(Ljava/lang/String;)Ljava/lang/String;

    .line 40
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/LenovoDeviceIDHelper;->lenovoIDInterface:Lcom/bianfeng/ymnsdk/sysfunc/interfaces/LenovoIDInterface;

    invoke-interface {v2, v0}, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/LenovoIDInterface;->b(Ljava/lang/String;)Ljava/lang/String;

    if-eqz p1, :cond_1

    .line 43
    invoke-interface {p1, v1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    if-eqz p1, :cond_1

    const-string v0, ""

    .line 48
    invoke-interface {p1, v0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method
