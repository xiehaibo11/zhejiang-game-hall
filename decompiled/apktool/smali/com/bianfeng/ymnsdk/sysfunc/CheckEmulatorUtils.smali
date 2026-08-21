.class public Lcom/bianfeng/ymnsdk/sysfunc/CheckEmulatorUtils;
.super Ljava/lang/Object;
.source "CheckEmulatorUtils.java"


# static fields
.field private static volatile utils:Lcom/bianfeng/ymnsdk/sysfunc/CheckEmulatorUtils;


# instance fields
.field private known_numbers:[Ljava/lang/String;


# direct methods
.method private constructor <init>()V
    .locals 16

    .line 24
    invoke-direct/range {p0 .. p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "15555215554"

    const-string v1, "15555215556"

    const-string v2, "15555215558"

    const-string v3, "15555215560"

    const-string v4, "15555215562"

    const-string v5, "15555215564"

    const-string v6, "15555215566"

    const-string v7, "15555215568"

    const-string v8, "15555215570"

    const-string v9, "15555215572"

    const-string v10, "15555215574"

    const-string v11, "15555215576"

    const-string v12, "15555215578"

    const-string v13, "15555215580"

    const-string v14, "15555215582"

    const-string v15, "15555215584"

    .line 194
    filled-new-array/range {v0 .. v15}, [Ljava/lang/String;

    move-result-object v0

    move-object/from16 v1, p0

    iput-object v0, v1, Lcom/bianfeng/ymnsdk/sysfunc/CheckEmulatorUtils;->known_numbers:[Ljava/lang/String;

    return-void
.end method

.method private CheckDeviceIDS(Landroid/content/Context;)Z
    .locals 2

    :try_start_0
    const-string v0, "phone"

    .line 104
    invoke-virtual {p1, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/telephony/TelephonyManager;

    .line 105
    invoke-virtual {p1}, Landroid/telephony/TelephonyManager;->getDeviceId()Ljava/lang/String;

    move-result-object p1

    .line 106
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "imei = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    if-eqz p1, :cond_0

    const-string v0, "000000000000000"

    .line 107
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    return p1

    :catch_0
    move-exception p1

    .line 111
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method private CheckEmulatorBuild()Z
    .locals 8

    .line 132
    sget-object v0, Landroid/os/Build;->BOARD:Ljava/lang/String;

    .line 133
    sget-object v1, Landroid/os/Build;->BOOTLOADER:Ljava/lang/String;

    .line 134
    sget-object v2, Landroid/os/Build;->BRAND:Ljava/lang/String;

    .line 135
    sget-object v3, Landroid/os/Build;->DEVICE:Ljava/lang/String;

    .line 136
    sget-object v4, Landroid/os/Build;->HARDWARE:Ljava/lang/String;

    .line 137
    sget-object v5, Landroid/os/Build;->MODEL:Ljava/lang/String;

    .line 138
    sget-object v6, Landroid/os/Build;->PRODUCT:Ljava/lang/String;

    const-string v7, "unknown"

    if-eq v0, v7, :cond_1

    if-eq v1, v7, :cond_1

    const-string v0, "generic"

    if-eq v2, v0, :cond_1

    if-eq v3, v0, :cond_1

    const-string v0, "sdk"

    if-eq v5, v0, :cond_1

    if-eq v6, v0, :cond_1

    const-string v0, "goldfish"

    if-ne v4, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method private checkCpuInfo(Landroid/content/Context;)Z
    .locals 5

    const-string p1, ""

    :try_start_0
    const-string v0, "/system/bin/cat"

    const-string v1, "/proc/cpuinfo"

    .line 162
    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    .line 163
    new-instance v1, Ljava/lang/ProcessBuilder;

    invoke-direct {v1, v0}, Ljava/lang/ProcessBuilder;-><init>([Ljava/lang/String;)V

    .line 164
    invoke-virtual {v1}, Ljava/lang/ProcessBuilder;->start()Ljava/lang/Process;

    move-result-object v0

    .line 165
    new-instance v1, Ljava/lang/StringBuffer;

    invoke-direct {v1}, Ljava/lang/StringBuffer;-><init>()V

    .line 167
    new-instance v2, Ljava/io/BufferedReader;

    new-instance v3, Ljava/io/InputStreamReader;

    .line 168
    invoke-virtual {v0}, Ljava/lang/Process;->getInputStream()Ljava/io/InputStream;

    move-result-object v0

    const-string v4, "utf-8"

    invoke-direct {v3, v0, v4}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;Ljava/lang/String;)V

    invoke-direct {v2, v3}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V

    .line 169
    :goto_0
    invoke-virtual {v2}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 170
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "\n"

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto :goto_0

    .line 172
    :cond_0
    invoke-virtual {v2}, Ljava/io/BufferedReader;->close()V

    .line 173
    invoke-virtual {v1}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object p1

    .line 174
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "CpuInfo = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 176
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    :goto_1
    const-string v0, "intel"

    .line 178
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string v0, "amd"

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_1

    goto :goto_2

    :cond_1
    const/4 p1, 0x0

    goto :goto_3

    :cond_2
    :goto_2
    const/4 p1, 0x1

    :goto_3
    return p1
.end method

.method private checkImsiIDS(Landroid/content/Context;)Z
    .locals 2

    :try_start_0
    const-string v0, "phone"

    .line 118
    invoke-virtual {p1, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/telephony/TelephonyManager;

    .line 119
    invoke-virtual {p1}, Landroid/telephony/TelephonyManager;->getSubscriberId()Ljava/lang/String;

    move-result-object p1

    .line 120
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "imsi_ids = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    const-string v0, "310260000000000"

    .line 121
    invoke-virtual {v0, p1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    return p1

    :catch_0
    move-exception p1

    .line 125
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method private checkOperatorNameAndroid(Landroid/content/Context;)Z
    .locals 1

    :try_start_0
    const-string v0, "phone"

    .line 148
    invoke-virtual {p1, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/telephony/TelephonyManager;

    .line 149
    invoke-virtual {p1}, Landroid/telephony/TelephonyManager;->getNetworkOperatorName()Ljava/lang/String;

    move-result-object p1

    .line 150
    invoke-virtual {p1}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object p1

    const-string v0, "android"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    return v0

    :catch_0
    move-exception p1

    .line 154
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method private checkPhoneNumber(Landroid/content/Context;)Z
    .locals 5

    const-string v0, "phone"

    .line 183
    invoke-virtual {p1, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/telephony/TelephonyManager;

    .line 184
    invoke-virtual {p1}, Landroid/telephony/TelephonyManager;->getLine1Number()Ljava/lang/String;

    move-result-object p1

    .line 185
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "phonenumber = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 186
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/CheckEmulatorUtils;->known_numbers:[Ljava/lang/String;

    array-length v1, v0

    const/4 v2, 0x0

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v1, :cond_1

    aget-object v4, v0, v3

    .line 187
    invoke-virtual {v4, p1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    return v2
.end method

.method private checkQEmuDriverFile()Z
    .locals 3

    .line 82
    new-instance v0, Ljava/io/File;

    const-string v1, "/proc/tty/drivers"

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 83
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {v0}, Ljava/io/File;->canRead()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 84
    invoke-virtual {v0}, Ljava/io/File;->length()J

    move-result-wide v1

    long-to-int v2, v1

    new-array v1, v2, [B

    .line 86
    :try_start_0
    new-instance v2, Ljava/io/FileInputStream;

    invoke-direct {v2, v0}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    .line 87
    invoke-virtual {v2, v1}, Ljava/io/InputStream;->read([B)I

    .line 88
    invoke-virtual {v2}, Ljava/io/InputStream;->close()V
    :try_end_0
    .catch Ljava/io/FileNotFoundException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 92
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    goto :goto_0

    :catch_1
    move-exception v0

    .line 90
    invoke-virtual {v0}, Ljava/io/FileNotFoundException;->printStackTrace()V

    .line 94
    :goto_0
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, v1}, Ljava/lang/String;-><init>([B)V

    const-string v1, "goldfish"

    .line 95
    invoke-virtual {v0, v1}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v0

    const/4 v1, -0x1

    if-eq v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static getInstance()Lcom/bianfeng/ymnsdk/sysfunc/CheckEmulatorUtils;
    .locals 2

    .line 26
    sget-object v0, Lcom/bianfeng/ymnsdk/sysfunc/CheckEmulatorUtils;->utils:Lcom/bianfeng/ymnsdk/sysfunc/CheckEmulatorUtils;

    if-nez v0, :cond_1

    .line 27
    const-class v0, Lcom/bianfeng/ymnsdk/sysfunc/CheckEmulatorUtils;

    monitor-enter v0

    .line 28
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/sysfunc/CheckEmulatorUtils;->utils:Lcom/bianfeng/ymnsdk/sysfunc/CheckEmulatorUtils;

    if-nez v1, :cond_0

    .line 29
    new-instance v1, Lcom/bianfeng/ymnsdk/sysfunc/CheckEmulatorUtils;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/sysfunc/CheckEmulatorUtils;-><init>()V

    sput-object v1, Lcom/bianfeng/ymnsdk/sysfunc/CheckEmulatorUtils;->utils:Lcom/bianfeng/ymnsdk/sysfunc/CheckEmulatorUtils;

    .line 31
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 33
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/ymnsdk/sysfunc/CheckEmulatorUtils;->utils:Lcom/bianfeng/ymnsdk/sysfunc/CheckEmulatorUtils;

    return-object v0
.end method

.method private notHasBlueTooth()Z
    .locals 2

    .line 66
    invoke-static {}, Landroid/bluetooth/BluetoothAdapter;->getDefaultAdapter()Landroid/bluetooth/BluetoothAdapter;

    move-result-object v0

    const/4 v1, 0x1

    if-nez v0, :cond_0

    return v1

    .line 71
    :cond_0
    invoke-virtual {v0}, Landroid/bluetooth/BluetoothAdapter;->getName()Ljava/lang/String;

    move-result-object v0

    .line 72
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    return v1

    :cond_1
    const/4 v0, 0x0

    return v0
.end method


# virtual methods
.method public checkEmulator(Landroid/content/Context;)Z
    .locals 3

    .line 42
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/CheckEmulatorUtils;->checkImsiIDS(Landroid/content/Context;)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    const-string p1, "CheckImsiIDS"

    .line 43
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    return v1

    .line 46
    :cond_0
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/sysfunc/CheckEmulatorUtils;->checkQEmuDriverFile()Z

    move-result v0

    const-string v2, "CheckQEmuDriverFile"

    if-eqz v0, :cond_1

    .line 47
    invoke-static {v2}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    return v1

    .line 50
    :cond_1
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/CheckEmulatorUtils;->checkPhoneNumber(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 51
    invoke-static {v2}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    return v1

    .line 54
    :cond_2
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/CheckEmulatorUtils;->checkOperatorNameAndroid(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_3

    const-string p1, "CheckOperatorNameAndroid"

    .line 55
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    return v1

    .line 58
    :cond_3
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/CheckEmulatorUtils;->checkCpuInfo(Landroid/content/Context;)Z

    move-result p1

    if-eqz p1, :cond_4

    const-string p1, "CheckCpuInfo"

    .line 59
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    return v1

    :cond_4
    const/4 p1, 0x0

    return p1
.end method
