.class public final Lcom/qihoo360/loader/utils/SysUtils;
.super Ljava/lang/Object;
.source "SysUtils.java"


# static fields
.field private static final TAG:Ljava/lang/String; = "Plugin.SysUtils"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 29
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getCurrentProcessName()Ljava/lang/String;
    .locals 8

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "/proc/self/cmdline"

    .line 42
    new-instance v2, Ljava/io/FileInputStream;

    invoke-direct {v2, v1}, Ljava/io/FileInputStream;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/16 v1, 0x100

    :try_start_1
    new-array v3, v1, [B

    const/4 v4, 0x0

    move v5, v4

    .line 46
    :goto_0
    invoke-virtual {v2}, Ljava/io/FileInputStream;->read()I

    move-result v6

    if-lez v6, :cond_0

    if-ge v5, v1, :cond_0

    add-int/lit8 v7, v5, 0x1

    int-to-byte v6, v6

    .line 47
    aput-byte v6, v3, v5

    move v5, v7

    goto :goto_0

    :cond_0
    if-lez v5, :cond_1

    .line 50
    new-instance v1, Ljava/lang/String;

    const-string v6, "UTF-8"

    invoke-direct {v1, v3, v4, v5, v6}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 58
    invoke-static {v2}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    return-object v1

    :catchall_0
    move-exception v1

    goto :goto_1

    :catchall_1
    move-exception v1

    move-object v2, v0

    :goto_1
    :try_start_2
    const-string v3, "Plugin.SysUtils"

    .line 55
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4, v1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    .line 58
    :cond_1
    invoke-static {v2}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    return-object v0

    :catchall_2
    move-exception v0

    invoke-static {v2}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    throw v0
.end method
