.class public Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.super Ljava/lang/Object;
.source "SepperllitaEvent.java"


# static fields
.field private static final SAVE_DEVICE_ID_FILE_PATH:Ljava/lang/String; = ".tidbf"

.field private static final SAVE_DEVICE_ID_SP_PATH:Ljava/lang/String; = "pref.deviceid.key.bf"


# instance fields
.field private final SEPPELLITA_SITE:Ljava/lang/String;

.field private act:Ljava/lang/String;

.field private an:Ljava/lang/String;

.field private bl:Ljava/lang/String;

.field private blk:Ljava/lang/String;

.field private cust:Ljava/lang/String;

.field private deviceidSp_id:Ljava/lang/String;

.field private did:Ljava/lang/String;

.field private dur:Ljava/lang/String;

.field private eid:Ljava/lang/String;

.field private et:Ljava/lang/String;

.field private label:Ljava/lang/String;

.field private pg:Ljava/lang/String;

.field private pkg:Ljava/lang/String;

.field private rv:Ljava/lang/String;

.field private st:Ljava/lang/String;

.field private uid:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 4

    .line 57
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "deviceid_sp_id"

    .line 23
    iput-object v0, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->deviceidSp_id:Ljava/lang/String;

    const-string v0, "sl_site"

    .line 24
    iput-object v0, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->SEPPELLITA_SITE:Ljava/lang/String;

    .line 58
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v2, ""

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->et:Ljava/lang/String;

    .line 61
    :try_start_0
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->getAndroid(Landroid/app/Activity;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->did:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 64
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 66
    :goto_0
    iget-object v1, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->did:Ljava/lang/String;

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 68
    :cond_0
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->getAndroid(Landroid/app/Activity;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->did:Ljava/lang/String;

    .line 70
    :cond_1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getAppName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->an:Ljava/lang/String;

    .line 71
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getPkgName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->pkg:Ljava/lang/String;

    .line 73
    :try_start_1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->st:Ljava/lang/String;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception p1

    .line 75
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 76
    iput-object v2, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->st:Ljava/lang/String;

    .line 79
    :goto_1
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getUserId()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->uid:Ljava/lang/String;

    return-void
.end method

.method private getAndroid(Landroid/app/Activity;)Ljava/lang/String;
    .locals 0

    .line 279
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getAndroidId()Ljava/lang/String;

    move-result-object p1

    .line 280
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {p1}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setAndroidId(Ljava/lang/String;)V

    return-object p1
.end method

.method private getBfDataLocal(Landroid/app/Activity;)Ljava/lang/String;
    .locals 3

    .line 236
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->getDeviceidFromBfdataSp(Landroid/app/Activity;)Ljava/lang/String;

    move-result-object p1

    .line 237
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 238
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "bfdata-sp->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    return-object p1

    .line 242
    :cond_0
    :try_start_0
    new-instance v0, Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->getSDCardBaseDir()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ".tidbf"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->loadFileFromSDCard(Ljava/lang/String;)[B

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/String;-><init>([B)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object p1, v0

    .line 245
    :catch_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "bfdata-file->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    return-object p1
.end method

.method private getDeviceidFromBfdataSp(Landroid/app/Activity;)Ljava/lang/String;
    .locals 1

    const-string v0, "pref.deviceid.key.bf"

    .line 270
    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getStringFromBfData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method private getDeviceidFromFile()Ljava/lang/String;
    .locals 3

    const/4 v0, 0x0

    .line 252
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->isSDCardMounted()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 253
    new-instance v1, Ljava/lang/String;

    const-string v2, "ymn-data-fun.tidbf"

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->readFileToSDCardPublicDir(Ljava/lang/String;)[B

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/lang/String;-><init>([B)V

    goto :goto_0

    :cond_0
    move-object v1, v0

    .line 255
    :goto_0
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 256
    new-instance v1, Ljava/lang/String;

    const-string v2, "ymn-data-fun.ymntidbf"

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->readFileToSDCardPrivateFilesDir(Ljava/lang/String;)[B

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/lang/String;-><init>([B)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    return-object v1

    :catch_0
    return-object v0
.end method

.method private getDeviceidFromSp()Ljava/lang/String;
    .locals 1

    .line 274
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->deviceidSp_id:Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private getLocalDeviceId(Landroid/app/Activity;)Ljava/lang/String;
    .locals 2

    .line 213
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->getBfDataLocal(Landroid/app/Activity;)Ljava/lang/String;

    move-result-object p1

    .line 214
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    return-object p1

    .line 217
    :cond_0
    invoke-direct {p0}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->getDeviceidFromSp()Ljava/lang/String;

    move-result-object p1

    .line 218
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 219
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Local-df-sp->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    return-object p1

    .line 223
    :cond_1
    invoke-direct {p0}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->getDeviceidFromFile()Ljava/lang/String;

    move-result-object p1

    .line 224
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 225
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Local-file-sp->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    return-object p1

    :cond_2
    const/4 p1, 0x0

    return-object p1
.end method


# virtual methods
.method public getAct()Ljava/lang/String;
    .locals 1

    .line 85
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->act:Ljava/lang/String;

    return-object v0
.end method

.method public getAn()Ljava/lang/String;
    .locals 1

    .line 159
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->an:Ljava/lang/String;

    return-object v0
.end method

.method public getBl()Ljava/lang/String;
    .locals 1

    .line 183
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->bl:Ljava/lang/String;

    return-object v0
.end method

.method public getBlk()Ljava/lang/String;
    .locals 1

    .line 175
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->blk:Ljava/lang/String;

    return-object v0
.end method

.method public getCust()Ljava/lang/String;
    .locals 1

    .line 199
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->cust:Ljava/lang/String;

    return-object v0
.end method

.method public getDid()Ljava/lang/String;
    .locals 1

    .line 125
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->did:Ljava/lang/String;

    return-object v0
.end method

.method public getDur()Ljava/lang/String;
    .locals 1

    .line 151
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->dur:Ljava/lang/String;

    return-object v0
.end method

.method public getEid()Ljava/lang/String;
    .locals 1

    .line 101
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->eid:Ljava/lang/String;

    return-object v0
.end method

.method public getEt()Ljava/lang/String;
    .locals 1

    .line 109
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->et:Ljava/lang/String;

    return-object v0
.end method

.method public getLabel()Ljava/lang/String;
    .locals 1

    .line 191
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->label:Ljava/lang/String;

    return-object v0
.end method

.method public getPg()Ljava/lang/String;
    .locals 1

    .line 93
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->pg:Ljava/lang/String;

    return-object v0
.end method

.method public getPkg()Ljava/lang/String;
    .locals 1

    .line 167
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->pkg:Ljava/lang/String;

    return-object v0
.end method

.method public getRv()Ljava/lang/String;
    .locals 1

    .line 141
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->rv:Ljava/lang/String;

    return-object v0
.end method

.method public getSt()Ljava/lang/String;
    .locals 1

    .line 133
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->st:Ljava/lang/String;

    return-object v0
.end method

.method public getUid()Ljava/lang/String;
    .locals 1

    .line 117
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->uid:Ljava/lang/String;

    return-object v0
.end method

.method public setAct(Ljava/lang/String;)V
    .locals 0

    .line 89
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->act:Ljava/lang/String;

    return-void
.end method

.method public setAn(Ljava/lang/String;)V
    .locals 0

    .line 163
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->an:Ljava/lang/String;

    return-void
.end method

.method public setBl(Ljava/lang/String;)V
    .locals 0

    .line 187
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->bl:Ljava/lang/String;

    return-void
.end method

.method public setBlk(Ljava/lang/String;)V
    .locals 0

    .line 179
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->blk:Ljava/lang/String;

    return-void
.end method

.method public setCust(Ljava/lang/String;)V
    .locals 0

    .line 203
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->cust:Ljava/lang/String;

    return-void
.end method

.method public setDid(Ljava/lang/String;)V
    .locals 0

    .line 129
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->did:Ljava/lang/String;

    return-void
.end method

.method public setDur(Ljava/lang/String;)V
    .locals 0

    .line 155
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->dur:Ljava/lang/String;

    return-void
.end method

.method public setEid(Ljava/lang/String;)V
    .locals 0

    .line 105
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->eid:Ljava/lang/String;

    return-void
.end method

.method public setEt(Ljava/lang/String;)V
    .locals 0

    .line 113
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->et:Ljava/lang/String;

    return-void
.end method

.method public setLabel(Ljava/lang/String;)V
    .locals 0

    .line 195
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->label:Ljava/lang/String;

    return-void
.end method

.method public setPg(Ljava/lang/String;)V
    .locals 0

    .line 97
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->pg:Ljava/lang/String;

    return-void
.end method

.method public setPkg(Ljava/lang/String;)V
    .locals 0

    .line 171
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->pkg:Ljava/lang/String;

    return-void
.end method

.method public setRv(Ljava/lang/String;)V
    .locals 1

    .line 145
    invoke-virtual {p1}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    .line 146
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->rv:Ljava/lang/String;

    :cond_0
    return-void
.end method

.method public setSt(Ljava/lang/String;)V
    .locals 0

    .line 137
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->st:Ljava/lang/String;

    return-void
.end method

.method public setUid(Ljava/lang/String;)V
    .locals 0

    .line 121
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;->uid:Ljava/lang/String;

    return-void
.end method
