.class public Lcom/bianfeng/ymnsdk/sysfunc/helpers/CNAdidHelper;
.super Ljava/lang/Object;
.source "CNAdidHelper.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/ymnsdk/sysfunc/helpers/CNAdidHelper$Inner;
    }
.end annotation


# instance fields
.field private TAG:Ljava/lang/String;

.field private mPath:Ljava/lang/String;


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 22
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "CNAdidHelper"

    .line 19
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/CNAdidHelper;->TAG:Ljava/lang/String;

    const-string v0, "/sdcard/Android/ZHVzY2Lk"

    .line 20
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/CNAdidHelper;->mPath:Ljava/lang/String;

    return-void
.end method

.method synthetic constructor <init>(Lcom/bianfeng/ymnsdk/sysfunc/helpers/CNAdidHelper$1;)V
    .locals 0

    .line 17
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/CNAdidHelper;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/ymnsdk/sysfunc/helpers/CNAdidHelper;
    .locals 1

    .line 26
    invoke-static {}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/CNAdidHelper$Inner;->access$000()Lcom/bianfeng/ymnsdk/sysfunc/helpers/CNAdidHelper;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public readCNAdid()Ljava/lang/String;
    .locals 7

    .line 35
    new-instance v0, Ljava/io/File;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/CNAdidHelper;->mPath:Ljava/lang/String;

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 36
    invoke-virtual {v0}, Ljava/io/File;->isDirectory()Z

    move-result v1

    const-string v2, "The File doesn\'t not exist."

    const-string v3, "\n"

    const-string v4, ""

    if-nez v1, :cond_2

    invoke-virtual {v0}, Ljava/io/File;->isFile()Z

    move-result v1

    if-nez v1, :cond_0

    goto :goto_1

    .line 43
    :cond_0
    :try_start_0
    new-instance v1, Ljava/io/FileInputStream;

    invoke-direct {v1, v0}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    .line 45
    new-instance v0, Ljava/io/InputStreamReader;

    invoke-direct {v0, v1}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V

    .line 46
    new-instance v5, Ljava/io/BufferedReader;

    invoke-direct {v5, v0}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V

    .line 49
    :goto_0
    invoke-virtual {v5}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 50
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    goto :goto_0

    .line 52
    :cond_1
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_0
    .catch Ljava/io/FileNotFoundException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception v0

    .line 59
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/CNAdidHelper;->TAG:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_2

    .line 56
    :catch_1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/CNAdidHelper;->TAG:Ljava/lang/String;

    invoke-static {v0, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_2

    .line 37
    :cond_2
    :goto_1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/CNAdidHelper;->TAG:Ljava/lang/String;

    invoke-static {v0, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    const-string v0, "/sdcard/Android/Data/System/local/.ZHVzY2Lk"

    .line 38
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/CNAdidHelper;->mPath:Ljava/lang/String;

    .line 39
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/CNAdidHelper;->readCNAdid()Ljava/lang/String;

    .line 62
    :goto_2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/CNAdidHelper;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u672c\u5730\u6587\u4ef6\u8bfb\u53d6 \u516c\u5171 mCNADID=="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v2

    const/4 v5, 0x0

    aget-object v2, v2, v5

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 63
    invoke-virtual {v4, v3}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    aget-object v0, v0, v5

    return-object v0
.end method
