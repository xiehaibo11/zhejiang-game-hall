.class public Lcom/qihoo360/replugin/utils/AssetsUtils;
.super Ljava/lang/Object;
.source "AssetsUtils.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;
    }
.end annotation


# static fields
.field private static final TAG:Ljava/lang/String; = "ws001"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 37
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static final extractTo(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 2

    .line 49
    new-instance v0, Ljava/io/File;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "/"

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-direct {v0, p2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 50
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/utils/FileUtils;->openInputStreamFromAssetsQuietly(Landroid/content/Context;Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object p0

    const/4 p2, 0x0

    if-nez p0, :cond_1

    .line 52
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_0

    .line 53
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "extractTo: Fail to open "

    invoke-virtual {p0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "from Assets"

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "ws001"

    invoke-static {p1, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return p2

    .line 59
    :cond_1
    :try_start_0
    invoke-static {p0, v0}, Lcom/qihoo360/replugin/utils/FileUtils;->copyInputStreamToFile(Ljava/io/InputStream;Ljava/io/File;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 p1, 0x1

    .line 66
    invoke-static {p0}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    return p1

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 63
    :try_start_1
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 66
    invoke-static {p0}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    return p2

    :goto_0
    invoke-static {p0}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    throw p1
.end method

.method public static final quickExtractTo(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;
    .locals 3

    .line 113
    new-instance p4, Ljava/io/File;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "/"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p4, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 116
    invoke-virtual {p4}, Ljava/io/File;->getParentFile()Ljava/io/File;

    move-result-object v0

    .line 117
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    const-string v2, "ws001"

    if-nez v1, :cond_0

    .line 118
    invoke-virtual {v0}, Ljava/io/File;->mkdirs()Z

    move-result v1

    if-nez v1, :cond_0

    .line 120
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p1, "can\'t create: "

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 122
    sget-object p0, Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;->FAIL:Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;

    return-object p0

    .line 127
    :cond_0
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_6

    invoke-virtual {v0}, Ljava/io/File;->isDirectory()Z

    move-result v1

    if-nez v1, :cond_1

    goto :goto_1

    .line 135
    :cond_1
    invoke-virtual {p4}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 136
    sget-object p0, Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;->EXISTED:Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;

    return-object p0

    .line 139
    :cond_2
    invoke-static {p0, p1, p2, p3}, Lcom/qihoo360/replugin/utils/AssetsUtils;->extractTo(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    move-result p0

    .line 140
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_4

    .line 141
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "create new: "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-eqz p0, :cond_3

    const-string p2, " ok"

    goto :goto_0

    :cond_3
    const-string p2, " error"

    :goto_0
    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_4
    if-nez p0, :cond_5

    .line 145
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p1, "a u e rc f "

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 147
    sget-object p0, Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;->FAIL:Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;

    return-object p0

    .line 149
    :cond_5
    sget-object p0, Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;->SUCCESS:Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;

    return-object p0

    .line 129
    :cond_6
    :goto_1
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p1, "can\'t create dir: "

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 131
    sget-object p0, Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;->FAIL:Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;

    return-object p0
.end method

.method public static final quickExtractTo(Landroid/content/Context;Lcom/qihoo360/replugin/model/PluginInfo;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 1

    .line 81
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getPath()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0, p2, p3, p4}, Lcom/qihoo360/replugin/utils/AssetsUtils;->quickExtractTo(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;

    move-result-object p0

    .line 83
    sget-object p4, Lcom/qihoo360/replugin/utils/AssetsUtils$1;->$SwitchMap$com$qihoo360$replugin$utils$AssetsUtils$QuickExtractResult:[I

    invoke-virtual {p0}, Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;->ordinal()I

    move-result p0

    aget p0, p4, p0

    const/4 p4, 0x1

    if-eq p0, p4, :cond_1

    const/4 v0, 0x2

    if-eq p0, v0, :cond_0

    .line 91
    new-instance p0, Ljava/io/File;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "/"

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-direct {p0, p2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 92
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getNativeLibsDir()Ljava/io/File;

    move-result-object p1

    .line 93
    invoke-virtual {p0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2, p1}, Lcom/qihoo360/loader2/PluginNativeLibsHelper;->install(Ljava/lang/String;Ljava/io/File;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 96
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "a u e rc f so "

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p2, "ws001"

    invoke-static {p2, p0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return p1

    :cond_0
    return p4

    :cond_1
    const/4 p0, 0x0

    return p0
.end method
