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
    .param p1, "context"    # Landroid/content/Context;

    .line 29
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 21
    const-string v0, "deviceid_sp_id"

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->deviceidSp_id:Ljava/lang/String;

    .line 22
    const-string v0, "ANDROID_ID"

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->ANDROID_ID:Ljava/lang/String;

    .line 26
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    iput v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->sdk_int:I

    .line 30
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->context:Landroid/content/Context;

    .line 32
    return-void
.end method

.method private generateDeviceId()Ljava/lang/String;
    .locals 4

    .line 101
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->getAndroidId()Ljava/lang/String;

    move-result-object v0

    .line 102
    .local v0, "deviceid":Ljava/lang/String;
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "9774d56d682e549c"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 103
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->getMac()Ljava/lang/String;

    move-result-object v0

    .line 105
    :cond_1
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    const-string v1, "02:00:00:00:00:00"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 106
    :cond_2
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->getDeviceUUID()Ljava/lang/String;

    move-result-object v0

    .line 108
    :cond_3
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    const-string v1, "unknown"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_5

    .line 109
    :cond_4
    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v1

    invoke-virtual {v1}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "-"

    const-string v3, ""

    invoke-virtual {v1, v2, v3}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    .line 111
    :cond_5
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_6

    .line 112
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "T"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 114
    :cond_6
    return-object v0
.end method

.method private getBfDataLocal()Ljava/lang/String;
    .locals 4

    .line 176
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->getDeviceidFromBfdataSp()Ljava/lang/String;

    move-result-object v0

    .line 177
    .local v0, "mid":Ljava/lang/String;
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 178
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "bfdata-sp->"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    .line 179
    return-object v0

    .line 182
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

    .line 184
    goto :goto_0

    .line 183
    :catch_0
    move-exception v1

    .line 185
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "bfdata-file->"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    .line 186
    return-object v0
.end method

.method private getDeviceidFromBfdataSp()Ljava/lang/String;
    .locals 2

    .line 211
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->context:Landroid/content/Context;

    const-string v1, "pref.deviceid.key.bf"

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getStringFromBfData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private getDeviceidFromFile()Ljava/lang/String;
    .locals 3

    .line 190
    const/4 v0, 0x0

    .line 192
    .local v0, "deviceid":Ljava/lang/String;
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->isSDCardMounted()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 193
    new-instance v1, Ljava/lang/String;

    const-string v2, "ymn-data-fun.tidbf"

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->readFileToSDCardPublicDir(Ljava/lang/String;)[B

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/lang/String;-><init>([B)V

    move-object v0, v1

    .line 195
    :cond_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 196
    new-instance v1, Ljava/lang/String;

    const-string v2, "ymn-data-fun.ymntidbf"

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->readFileToSDCardPrivateFilesDir(Ljava/lang/String;)[B

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/lang/String;-><init>([B)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, v1

    .line 200
    :cond_1
    nop

    .line 202
    return-object v0

    .line 198
    :catch_0
    move-exception v1

    .line 199
    .local v1, "e":Ljava/lang/Exception;
    const/4 v2, 0x0

    return-object v2
.end method

.method private getDeviceidFromSp()Ljava/lang/String;
    .locals 1

    .line 215
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->deviceidSp_id:Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private getLocalDeviceId()Ljava/lang/String;
    .locals 3

    .line 152
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->getBfDataLocal()Ljava/lang/String;

    move-result-object v0

    .line 153
    .local v0, "deviceidLocal":Ljava/lang/String;
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 154
    return-object v0

    .line 156
    :cond_0
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->getDeviceidFromSp()Ljava/lang/String;

    move-result-object v0

    .line 157
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 158
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Local-df-sp->"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    .line 159
    return-object v0

    .line 162
    :cond_1
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->getDeviceidFromFile()Ljava/lang/String;

    move-result-object v0

    .line 163
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 164
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Local-file-sp->"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    .line 165
    return-object v0

    .line 167
    :cond_2
    const/4 v1, 0x0

    return-object v1
.end method

.method private isEmulator()Z
    .locals 3

    .line 94
    const/4 v0, 0x0

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

    :cond_1
    return v0

    .line 95
    :catch_0
    move-exception v1

    .line 97
    return v0
.end method

.method private saveDeviceId(Ljava/lang/String;)V
    .locals 1
    .param p1, "deviceid"    # Ljava/lang/String;

    .line 81
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->deviceidSp_id:Ljava/lang/String;

    invoke-static {v0, p1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException; {:try_start_0 .. :try_end_0} :catch_0

    .line 84
    goto :goto_0

    .line 82
    :catch_0
    move-exception v0

    .line 83
    .local v0, "e":Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 85
    .end local v0    # "e":Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
    :goto_0
    return-void
.end method

.method private saveFile(Ljava/lang/String;)V
    .locals 2
    .param p1, "deviceid"    # Ljava/lang/String;

    .line 66
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->isSDCardMounted()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 68
    :try_start_0
    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const-string v1, "ymn-data-fun.tidbf"

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->saveFileToSDCardPublicDir([BLjava/lang/String;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 70
    goto :goto_0

    .line 69
    :catch_0
    move-exception v0

    .line 73
    :goto_0
    :try_start_1
    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const-string v1, "ymn-data-fun.ymntidbf"

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->saveFileToSDCardPrivateFilesDir([BLjava/lang/String;)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    .line 75
    goto :goto_1

    .line 74
    :catch_1
    move-exception v0

    .line 77
    :cond_0
    :goto_1
    return-void
.end method

.method private saveLocalDeviceId(Ljava/lang/String;)V
    .locals 0
    .param p1, "deviceid"    # Ljava/lang/String;

    .line 61
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->saveDeviceId(Ljava/lang/String;)V

    .line 62
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->saveFile(Ljava/lang/String;)V

    .line 63
    return-void
.end method


# virtual methods
.method protected getAndroidId()Ljava/lang/String;
    .locals 4

    .line 119
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->ANDROID_ID:Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 120
    .local v0, "androidId":Ljava/lang/String;
    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 123
    :cond_0
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "bfdata_"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->context:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v2

    const-string v3, "android_id"

    invoke-static {v2, v3}, Landroid/provider/Settings$Secure;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, ""

    invoke-static {v2, v3}, Lcom/bianfeng/ymnsdk/utilslib/security/AESGCM256;->encrypt(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    move-object v0, v1

    .line 125
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->ANDROID_ID:Ljava/lang/String;

    invoke-static {v1, v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 127
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLSPName()Ljava/lang/String;

    move-result-object v1

    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_androidid:Ljava/lang/String;

    invoke-static {v1, v2, v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->setPLStringToSP(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 130
    goto :goto_0

    .line 128
    :catch_0
    move-exception v1

    .line 129
    .local v1, "e":Ljava/lang/Exception;
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 132
    .end local v1    # "e":Ljava/lang/Exception;
    :cond_1
    :goto_0
    return-object v0
.end method

.method public getDevcieId()Ljava/lang/String;
    .locals 2

    .line 42
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->isAgreeprivacy()Z

    move-result v0

    if-nez v0, :cond_0

    .line 43
    const-string v0, ""

    return-object v0

    .line 45
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->mid:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 46
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->mid:Ljava/lang/String;

    return-object v0

    .line 48
    :cond_1
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->getLocalDeviceId()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->mid:Ljava/lang/String;

    .line 49
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->mid:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->mid:Ljava/lang/String;

    const-string v1, "02:00:00:00:00:00"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 50
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->mid:Ljava/lang/String;

    return-object v0

    .line 52
    :cond_2
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->generateDeviceId()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->mid:Ljava/lang/String;

    .line 53
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->mid:Ljava/lang/String;

    invoke-direct {p0, v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->saveLocalDeviceId(Ljava/lang/String;)V

    .line 54
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->mid:Ljava/lang/String;

    return-object v0
.end method

.method public getDeviceUUID()Ljava/lang/String;
    .locals 6

    .line 226
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "3883756"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Landroid/os/Build;->BOARD:Ljava/lang/String;

    .line 227
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    rem-int/lit8 v1, v1, 0xa

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    sget-object v1, Landroid/os/Build;->BRAND:Ljava/lang/String;

    .line 228
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    rem-int/lit8 v1, v1, 0xa

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    sget-object v1, Landroid/os/Build;->DEVICE:Ljava/lang/String;

    .line 229
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    rem-int/lit8 v1, v1, 0xa

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    sget-object v1, Landroid/os/Build;->HARDWARE:Ljava/lang/String;

    .line 230
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    rem-int/lit8 v1, v1, 0xa

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    sget-object v1, Landroid/os/Build;->ID:Ljava/lang/String;

    .line 231
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    rem-int/lit8 v1, v1, 0xa

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    sget-object v1, Landroid/os/Build;->MODEL:Ljava/lang/String;

    .line 232
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    rem-int/lit8 v1, v1, 0xa

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    sget-object v1, Landroid/os/Build;->PRODUCT:Ljava/lang/String;

    .line 233
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    rem-int/lit8 v1, v1, 0xa

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    sget-object v1, Landroid/os/Build;->SERIAL:Ljava/lang/String;

    .line 234
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    rem-int/lit8 v1, v1, 0xa

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 235
    .local v0, "dev":Ljava/lang/String;
    new-instance v1, Ljava/util/UUID;

    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v2

    int-to-long v2, v2

    sget-object v4, Landroid/os/Build;->SERIAL:Ljava/lang/String;

    .line 236
    invoke-virtual {v4}, Ljava/lang/String;->hashCode()I

    move-result v4

    int-to-long v4, v4

    invoke-direct {v1, v2, v3, v4, v5}, Ljava/util/UUID;-><init>(JJ)V

    invoke-virtual {v1}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 235
    return-object v1

    .line 237
    .end local v0    # "dev":Ljava/lang/String;
    :catch_0
    move-exception v0

    .line 238
    .local v0, "ex":Ljava/lang/Exception;
    const-string v1, ""

    return-object v1
.end method

.method protected getMac()Ljava/lang/String;
    .locals 1

    .line 141
    const/4 v0, 0x0

    return-object v0
.end method
