.class public Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;
.super Ljava/lang/Object;
.source "DevicesIDsHelper.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;
    }
.end annotation


# instance fields
.field private _listener:Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;


# direct methods
.method public constructor <init>(Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;)V
    .locals 0

    .line 17
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 18
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->_listener:Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;)Ljava/lang/String;
    .locals 0

    .line 13
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->getManufacturer()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic access$100(Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;)Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;
    .locals 0

    .line 13
    iget-object p0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->_listener:Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;

    return-object p0
.end method

.method private getBrand()Ljava/lang/String;
    .locals 1

    .line 22
    sget-object v0, Landroid/os/Build;->BRAND:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private getIDFromNewThead(Landroid/content/Context;)V
    .locals 2

    .line 83
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$1;

    invoke-direct {v1, p0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$1;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;Landroid/content/Context;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 96
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    return-void
.end method

.method private getManufacturer()Ljava/lang/String;
    .locals 1

    .line 26
    sget-object v0, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public getOAID(Landroid/content/Context;)V
    .locals 2

    .line 32
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "getManufacturer===> "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->getManufacturer()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "getManufacturer"

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 34
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->getManufacturer()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ASUS"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 35
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->getIDFromNewThead(Landroid/content/Context;)V

    goto/16 :goto_0

    .line 37
    :cond_0
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->getManufacturer()Ljava/lang/String;

    move-result-object v0

    const-string v1, "HUAWEI"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 38
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->getIDFromNewThead(Landroid/content/Context;)V

    goto/16 :goto_0

    .line 40
    :cond_1
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->getManufacturer()Ljava/lang/String;

    move-result-object v0

    const-string v1, "LENOVO"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 41
    new-instance v0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/LenovoDeviceIDHelper;

    invoke-direct {v0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/LenovoDeviceIDHelper;-><init>(Landroid/content/Context;)V

    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->_listener:Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/LenovoDeviceIDHelper;->getIdRun(Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;)V

    goto/16 :goto_0

    .line 43
    :cond_2
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->getManufacturer()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MEIZU"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 44
    new-instance v0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/MeizuDeviceIDHelper;

    invoke-direct {v0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/MeizuDeviceIDHelper;-><init>(Landroid/content/Context;)V

    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->_listener:Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/MeizuDeviceIDHelper;->getMeizuID(Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;)V

    goto/16 :goto_0

    .line 46
    :cond_3
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->getManufacturer()Ljava/lang/String;

    move-result-object v0

    const-string v1, "NUBIA"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 47
    new-instance v0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/NubiaDeviceIDHelper;

    invoke-direct {v0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/NubiaDeviceIDHelper;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/NubiaDeviceIDHelper;->getNubiaID()Ljava/lang/String;

    move-result-object p1

    .line 48
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->_listener:Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;

    if-eqz v0, :cond_8

    .line 49
    invoke-interface {v0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V

    goto :goto_0

    .line 52
    :cond_4
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->getManufacturer()Ljava/lang/String;

    move-result-object v0

    const-string v1, "OPPO"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 53
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->getIDFromNewThead(Landroid/content/Context;)V

    goto :goto_0

    .line 55
    :cond_5
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->getManufacturer()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SAMSUNG"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_6

    .line 56
    new-instance v0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/SamsungDeviceIDHelper;

    invoke-direct {v0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/SamsungDeviceIDHelper;-><init>(Landroid/content/Context;)V

    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->_listener:Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/SamsungDeviceIDHelper;->getSumsungID(Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;)V

    goto :goto_0

    .line 58
    :cond_6
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->getManufacturer()Ljava/lang/String;

    move-result-object v0

    const-string v1, "VIVO"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_7

    .line 59
    new-instance v0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;

    invoke-direct {v0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;->getOaid()Ljava/lang/String;

    move-result-object p1

    .line 60
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->_listener:Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;

    if-eqz v0, :cond_8

    .line 61
    invoke-interface {v0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V

    goto :goto_0

    .line 64
    :cond_7
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->getManufacturer()Ljava/lang/String;

    move-result-object v0

    const-string v1, "XIAOMI"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_8

    .line 65
    new-instance v0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/XiaomiDeviceIDHelper;

    invoke-direct {v0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/XiaomiDeviceIDHelper;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/XiaomiDeviceIDHelper;->getOAID()Ljava/lang/String;

    move-result-object p1

    .line 66
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->_listener:Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;

    if-eqz v0, :cond_8

    .line 67
    invoke-interface {v0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V

    :cond_8
    :goto_0
    return-void
.end method
