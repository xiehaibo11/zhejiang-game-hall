.class public Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;
.super Ljava/lang/Object;
.source "DeviceID.java"


# static fields
.field private static final SAVE_DEVICE_ID_FILE_PATH:Ljava/lang/String; = ".tidbf"

.field private static final SAVE_DEVICE_ID_SP_PATH:Ljava/lang/String; = "pref.deviceid.key.bf"


# instance fields
.field private ANDROID_ID:Ljava/lang/String;

.field private context:Landroid/content/Context;

.field private deviceidSp_id:Ljava/lang/String;

.field private mid:Ljava/lang/String;

.field private sdk_int:I


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 28
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "deviceid_sp_id"

    .line 20
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->deviceidSp_id:Ljava/lang/String;

    const-string v0, "ANDROID_ID"

    .line 21
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->ANDROID_ID:Ljava/lang/String;

    .line 25
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    iput v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->sdk_int:I

    .line 29
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->context:Landroid/content/Context;

    return-void
.end method

.method private generateDeviceId()Ljava/lang/String;
    .locals 3

    .line 105
    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "-"

    const-string v2, ""

    invoke-virtual {v0, v1, v2}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    .line 106
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 107
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "T"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    :cond_0
    return-object v0
.end method

.method private getBfDataLocal()Ljava/lang/String;
    .locals 4

    .line 166
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->getDeviceidFromBfdataSp()Ljava/lang/String;

    move-result-object v0

    .line 167
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 168
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "bfdata-sp->"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    return-object v0

    .line 172
    :cond_0
    :try_start_0
    new-instance v1, Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->getSDCardBaseDir()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ".tidbf"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->loadFileFromSDCard(Ljava/lang/String;)[B

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/lang/String;-><init>([B)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, v1

    .line 175
    :catch_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "bfdata-file->"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    return-object v0
.end method

.method private getDeviceidFromBfdataSp()Ljava/lang/String;
    .locals 2

    .line 200
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->context:Landroid/content/Context;

    const-string v1, "pref.deviceid.key.bf"

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getStringFromBfData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private getDeviceidFromFile()Ljava/lang/String;
    .locals 3

    const/4 v0, 0x0

    .line 182
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->isSDCardMounted()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 183
    new-instance v1, Ljava/lang/String;

    const-string v2, "ymn-data-fun.tidbf"

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->readFileToSDCardPublicDir(Ljava/lang/String;)[B

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/lang/String;-><init>([B)V

    goto :goto_0

    :cond_0
    move-object v1, v0

    .line 185
    :goto_0
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 186
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

    .line 204
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->deviceidSp_id:Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private getLocalDeviceId()Ljava/lang/String;
    .locals 3

    .line 143
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->getBfDataLocal()Ljava/lang/String;

    move-result-object v0

    .line 144
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    return-object v0

    .line 147
    :cond_0
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->getDeviceidFromSp()Ljava/lang/String;

    move-result-object v0

    .line 148
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 149
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Local-df-sp->"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    return-object v0

    .line 153
    :cond_1
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->getDeviceidFromFile()Ljava/lang/String;

    move-result-object v0

    .line 154
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 155
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Local-file-sp->"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    return-object v0

    :cond_2
    const/4 v0, 0x0

    return-object v0
.end method

.method private isEmulator()Z
    .locals 3

    const/4 v0, 0x0

    .line 91
    :try_start_0
    sget-object v1, Landroid/os/Build;->MODEL:Ljava/lang/String;

    const-string v2, "sdk"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    sget-object v1, Landroid/os/Build;->MODEL:Ljava/lang/String;

    const-string v2, "google_sdk"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v1, :cond_1

    :cond_0
    const/4 v0, 0x1

    :catch_0
    :cond_1
    return v0
.end method

.method private saveDeviceId(Ljava/lang/String;)V
    .locals 1

    .line 79
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->deviceidSp_id:Ljava/lang/String;

    invoke-static {v0, p1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 81
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private saveFile(Ljava/lang/String;)V
    .locals 2

    .line 64
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->isSDCardMounted()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 66
    :try_start_0
    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const-string v1, "ymn-data-fun.tidbf"

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->saveFileToSDCardPublicDir([BLjava/lang/String;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 71
    :catch_0
    :try_start_1
    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    const-string v0, "ymn-data-fun.ymntidbf"

    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->saveFileToSDCardPrivateFilesDir([BLjava/lang/String;)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    :catch_1
    :cond_0
    return-void
.end method

.method private saveLocalDeviceId(Ljava/lang/String;)V
    .locals 0

    .line 59
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->saveDeviceId(Ljava/lang/String;)V

    .line 60
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->saveFile(Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method protected getAndroidId()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public getDevcieId()Ljava/lang/String;
    .locals 2

    .line 40
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->isAgreeprivacy()Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 43
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->mid:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 44
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->mid:Ljava/lang/String;

    return-object v0

    .line 46
    :cond_1
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->getLocalDeviceId()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->mid:Ljava/lang/String;

    .line 47
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->mid:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->mid:Ljava/lang/String;

    const-string v1, "02:00:00:00:00:00"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 48
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->mid:Ljava/lang/String;

    return-object v0

    .line 50
    :cond_2
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->generateDeviceId()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->mid:Ljava/lang/String;

    .line 51
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->mid:Ljava/lang/String;

    invoke-direct {p0, v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->saveLocalDeviceId(Ljava/lang/String;)V

    .line 52
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->mid:Ljava/lang/String;

    return-object v0
.end method

.method public getDeviceUUID()Ljava/lang/String;
    .locals 6

    .line 214
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "3883756"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Landroid/os/Build;->BOARD:Ljava/lang/String;

    .line 215
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    rem-int/lit8 v1, v1, 0xa

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    sget-object v1, Landroid/os/Build;->BRAND:Ljava/lang/String;

    .line 216
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    rem-int/lit8 v1, v1, 0xa

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    sget-object v1, Landroid/os/Build;->DEVICE:Ljava/lang/String;

    .line 217
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    rem-int/lit8 v1, v1, 0xa

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    sget-object v1, Landroid/os/Build;->HARDWARE:Ljava/lang/String;

    .line 218
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    rem-int/lit8 v1, v1, 0xa

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    sget-object v1, Landroid/os/Build;->ID:Ljava/lang/String;

    .line 219
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    rem-int/lit8 v1, v1, 0xa

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    sget-object v1, Landroid/os/Build;->MODEL:Ljava/lang/String;

    .line 220
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    rem-int/lit8 v1, v1, 0xa

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    sget-object v1, Landroid/os/Build;->PRODUCT:Ljava/lang/String;

    .line 221
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    rem-int/lit8 v1, v1, 0xa

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    sget-object v1, Landroid/os/Build;->SERIAL:Ljava/lang/String;

    .line 222
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    rem-int/lit8 v1, v1, 0xa

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 223
    new-instance v1, Ljava/util/UUID;

    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v0

    int-to-long v2, v0

    sget-object v0, Landroid/os/Build;->SERIAL:Ljava/lang/String;

    .line 224
    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v0

    int-to-long v4, v0

    invoke-direct {v1, v2, v3, v4, v5}, Ljava/util/UUID;-><init>(JJ)V

    invoke-virtual {v1}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    const-string v0, ""

    return-object v0
.end method

.method protected getMac()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method
