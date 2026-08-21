.class public Lcom/qihoo360/replugin/packages/PluginManagerServer;
.super Ljava/lang/Object;
.source "PluginManagerServer.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/replugin/packages/PluginManagerServer$Stub;
    }
.end annotation


# static fields
.field private static final LOCKER:[B

.field private static final LOCKER_PROCESS_KILLED:[B

.field private static final STEP_DIVIDER:Ljava/lang/String; = "------------------------------------------------"

.field private static final STEP_FIVE_INFO:Ljava/lang/String; = "step 5 :\u4ece\u63d2\u4ef6\u4e2d\u91ca\u653e So \u6587\u4ef6\n"

.field private static final STEP_FOUR_INFO:Ljava/lang/String; = "step 4 :\u5c06\u5408\u6cd5\u7684APK\u6539\u540d\u540e\uff0c\u79fb\u52a8\u6216\u590d\u5236\n"

.field private static final STEP_ONE_INFO:Ljava/lang/String; = "step 1 :\u8bfb\u53d6APK\u5185\u5bb9\n"

.field private static final STEP_SEVEN_INFO:Ljava/lang/String; = "step 7 :\u4fdd\u5b58\u63d2\u4ef6\u4fe1\u606f\u5230\u6587\u4ef6\u4e2d\uff0c\u4e0b\u6b21\u53ef\u76f4\u63a5\u4f7f\u7528\n"

.field private static final STEP_SIX_INFO:Ljava/lang/String; = "step 6 :\u8bfb\u53d6APK\u5185\u5bb9\n"

.field private static final STEP_THREE_INFO:Ljava/lang/String; = "step 3 :\u89e3\u6790\u51fa\u540d\u5b57\u548c\u4e09\u5143\u7ec4\n"

.field private static final STEP_TWO_1_INFO:Ljava/lang/String; = "step 2 :\u6821\u9a8c\u63d2\u4ef6\u7b7e\u540d\n"

.field private static final STEP_TWO_2_INFO:Ljava/lang/String; = "step 2 :\u7b7e\u540d\u4e0d\u53ef\u7528\n"

.field private static final TAG:Ljava/lang/String; = "PluginManagerServer:"


# instance fields
.field private mContext:Landroid/content/Context;

.field private mList:Lcom/qihoo360/replugin/model/PluginInfoList;

.field private mProcess2PluginsMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/qihoo360/replugin/packages/PluginRunningList;",
            ">;"
        }
    .end annotation
.end field

.field private mStub:Lcom/qihoo360/replugin/packages/IPluginManagerServer;

.field private traceInstallPluginSb:Ljava/lang/StringBuilder;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    const/4 v0, 0x0

    new-array v1, v0, [B

    .line 71
    sput-object v1, Lcom/qihoo360/replugin/packages/PluginManagerServer;->LOCKER_PROCESS_KILLED:[B

    new-array v0, v0, [B

    .line 72
    sput-object v0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->LOCKER:[B

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 85
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 78
    new-instance v0, Lcom/qihoo360/replugin/model/PluginInfoList;

    invoke-direct {v0}, Lcom/qihoo360/replugin/model/PluginInfoList;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mList:Lcom/qihoo360/replugin/model/PluginInfoList;

    .line 80
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mProcess2PluginsMap:Ljava/util/Map;

    .line 86
    iput-object p1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mContext:Landroid/content/Context;

    .line 87
    new-instance p1, Lcom/qihoo360/replugin/packages/PluginManagerServer$Stub;

    const/4 v0, 0x0

    invoke-direct {p1, p0, v0}, Lcom/qihoo360/replugin/packages/PluginManagerServer$Stub;-><init>(Lcom/qihoo360/replugin/packages/PluginManagerServer;Lcom/qihoo360/replugin/packages/PluginManagerServer$1;)V

    iput-object p1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mStub:Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    .line 89
    invoke-direct {p0}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->initTraceBaseInfo()V

    return-void
.end method

.method static synthetic access$100(Lcom/qihoo360/replugin/packages/PluginManagerServer;Ljava/lang/String;Z)V
    .locals 0

    .line 57
    invoke-direct {p0, p1, p2}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->traceInstallPlugin(Ljava/lang/String;Z)V

    return-void
.end method

.method static synthetic access$1000(Lcom/qihoo360/replugin/packages/PluginManagerServer;Lcom/qihoo360/replugin/packages/PluginRunningList;)V
    .locals 0

    .line 57
    invoke-direct {p0, p1}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->syncRunningPluginsLocked(Lcom/qihoo360/replugin/packages/PluginRunningList;)V

    return-void
.end method

.method static synthetic access$1100(Lcom/qihoo360/replugin/packages/PluginManagerServer;Ljava/lang/String;ILjava/lang/String;)V
    .locals 0

    .line 57
    invoke-direct {p0, p1, p2, p3}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->addToRunningPluginsLocked(Ljava/lang/String;ILjava/lang/String;)V

    return-void
.end method

.method static synthetic access$1200(Lcom/qihoo360/replugin/packages/PluginManagerServer;Ljava/lang/String;)[Ljava/lang/String;
    .locals 0

    .line 57
    invoke-direct {p0, p1}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->getRunningProcessesByPluginLocked(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic access$200()[B
    .locals 1

    .line 57
    sget-object v0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->LOCKER:[B

    return-object v0
.end method

.method static synthetic access$300(Lcom/qihoo360/replugin/packages/PluginManagerServer;Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 0

    .line 57
    invoke-direct {p0, p1, p2}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->installLocked(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object p0

    return-object p0
.end method

.method static synthetic access$400(Lcom/qihoo360/replugin/packages/PluginManagerServer;)Ljava/util/List;
    .locals 0

    .line 57
    invoke-direct {p0}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->loadLocked()Ljava/util/List;

    move-result-object p0

    return-object p0
.end method

.method static synthetic access$500(Lcom/qihoo360/replugin/packages/PluginManagerServer;)Ljava/util/List;
    .locals 0

    .line 57
    invoke-direct {p0}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->updateAllLocked()Ljava/util/List;

    move-result-object p0

    return-object p0
.end method

.method static synthetic access$600(Lcom/qihoo360/replugin/packages/PluginManagerServer;Ljava/lang/String;Z)V
    .locals 0

    .line 57
    invoke-direct {p0, p1, p2}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->updateUsedLocked(Ljava/lang/String;Z)V

    return-void
.end method

.method static synthetic access$700(Lcom/qihoo360/replugin/packages/PluginManagerServer;Lcom/qihoo360/replugin/model/PluginInfo;)Z
    .locals 0

    .line 57
    invoke-direct {p0, p1}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->uninstallLocked(Lcom/qihoo360/replugin/model/PluginInfo;)Z

    move-result p0

    return p0
.end method

.method static synthetic access$800(Lcom/qihoo360/replugin/packages/PluginManagerServer;)Lcom/qihoo360/replugin/packages/PluginRunningList;
    .locals 0

    .line 57
    invoke-direct {p0}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->getRunningPluginsLocked()Lcom/qihoo360/replugin/packages/PluginRunningList;

    move-result-object p0

    return-object p0
.end method

.method static synthetic access$900(Lcom/qihoo360/replugin/packages/PluginManagerServer;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 0

    .line 57
    invoke-direct {p0, p1, p2}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->isPluginRunningLocked(Ljava/lang/String;Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method private addToRunningPluginsLocked(Ljava/lang/String;ILjava/lang/String;)V
    .locals 2

    .line 629
    iget-object v0, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mProcess2PluginsMap:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/qihoo360/replugin/packages/PluginRunningList;

    if-nez v0, :cond_0

    .line 631
    new-instance v0, Lcom/qihoo360/replugin/packages/PluginRunningList;

    invoke-direct {v0}, Lcom/qihoo360/replugin/packages/PluginRunningList;-><init>()V

    .line 632
    iget-object v1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mProcess2PluginsMap:Ljava/util/Map;

    invoke-interface {v1, p1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 636
    :cond_0
    invoke-virtual {v0, p1, p2}, Lcom/qihoo360/replugin/packages/PluginRunningList;->setProcessInfo(Ljava/lang/String;I)V

    .line 637
    invoke-virtual {v0, p3}, Lcom/qihoo360/replugin/packages/PluginRunningList;->add(Ljava/lang/String;)V

    .line 639
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_1

    .line 640
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "addToRunningPluginsLocked: Added! pl ="

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p2, "; map="

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mProcess2PluginsMap:Ljava/util/Map;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "PluginManagerServer:"

    invoke-static {p2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    return-void
.end method

.method private checkVersion(Lcom/qihoo360/replugin/model/PluginInfo;Lcom/qihoo360/replugin/model/PluginInfo;)I
    .locals 6

    .line 259
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v0

    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v1

    const-string v2, "; cur_ver="

    const-string v3, "PluginManagerServer:"

    if-ne v0, v1, :cond_1

    .line 260
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 261
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "isSameVersion: same version. inst_ver="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 262
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 261
    invoke-static {v3, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    const/4 p1, 0x0

    return p1

    .line 268
    :cond_1
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v0

    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v1

    const/4 v4, -0x1

    if-ge v0, v1, :cond_3

    .line 269
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_2

    .line 270
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "checkVersion: Older than current, install fail. pn="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "; inst_ver="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 271
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 270
    invoke-static {v3, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return v4

    .line 278
    :cond_3
    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getPendingUpdate()Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v0

    if-eqz v0, :cond_5

    .line 279
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v1

    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v5

    if-ge v1, v5, :cond_5

    .line 280
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_4

    .line 281
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "checkVersion: Older than updating plugin. Ignore. pn="

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 282
    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result p2

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, "; old_ver="

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result p2

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, "; new_ver="

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 281
    invoke-static {v3, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_4
    return v4

    :cond_5
    const/4 p1, 0x1

    return p1
.end method

.method private copyOrMoveApk(Ljava/lang/String;Lcom/qihoo360/replugin/model/PluginInfo;Z)Z
    .locals 2

    const-string v0, "step 4 :\u5c06\u5408\u6cd5\u7684APK\u6539\u540d\u540e\uff0c\u79fb\u52a8\u6216\u590d\u5236\n"

    .line 290
    invoke-direct {p0, v0, p3}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->traceInstallPlugin(Ljava/lang/String;Z)V

    .line 291
    new-instance p3, Ljava/io/File;

    invoke-direct {p3, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 292
    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getApkFile()Ljava/io/File;

    move-result-object p1

    .line 296
    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 297
    invoke-static {p1}, Lcom/qihoo360/replugin/utils/FileUtils;->deleteQuietly(Ljava/io/File;)Z

    .line 302
    :cond_0
    :try_start_0
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v0

    invoke-virtual {v0}, Lcom/qihoo360/replugin/RePluginConfig;->isMoveFileWhenInstalling()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 303
    invoke-static {p3, p1}, Lcom/qihoo360/replugin/utils/FileUtils;->moveFile(Ljava/io/File;Ljava/io/File;)V

    goto :goto_0

    .line 305
    :cond_1
    invoke-static {p3, p1}, Lcom/qihoo360/replugin/utils/FileUtils;->copyFile(Ljava/io/File;Ljava/io/File;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    .line 314
    :goto_0
    invoke-virtual {p1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->setPath(Ljava/lang/String;)V

    const/16 p1, 0xb

    .line 315
    invoke-virtual {p2, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->setType(I)V

    const/4 p1, 0x1

    return p1

    :catch_0
    move-exception p2

    .line 309
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "copyOrMoveApk: Copy/Move Failed! src="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p3, "; dest="

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p3, "PluginManagerServer:"

    invoke-static {p3, p1, p2}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    const/4 p1, 0x0

    return p1
.end method

.method private delete(Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 2

    .line 511
    :try_start_0
    new-instance v0, Ljava/io/File;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getPath()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/qihoo360/replugin/utils/FileUtils;->forceDelete(Ljava/io/File;)V

    .line 512
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getDexFile()Ljava/io/File;

    move-result-object v0

    invoke-static {v0}, Lcom/qihoo360/replugin/utils/FileUtils;->forceDelete(Ljava/io/File;)V

    .line 513
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x15

    if-ge v0, v1, :cond_0

    .line 514
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getExtraOdexDir()Ljava/io/File;

    move-result-object v0

    invoke-static {v0}, Lcom/qihoo360/replugin/utils/FileUtils;->forceDelete(Ljava/io/File;)V

    .line 516
    :cond_0
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getNativeLibsDir()Ljava/io/File;

    move-result-object p1

    invoke-static {p1}, Lcom/qihoo360/replugin/utils/FileUtils;->forceDelete(Ljava/io/File;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/IllegalArgumentException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 523
    invoke-virtual {p1}, Ljava/lang/IllegalArgumentException;->printStackTrace()V

    goto :goto_0

    :catch_1
    move-exception p1

    .line 519
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private getRunningPluginsLocked()Lcom/qihoo360/replugin/packages/PluginRunningList;
    .locals 5

    .line 587
    new-instance v0, Lcom/qihoo360/replugin/packages/PluginRunningList;

    invoke-direct {v0}, Lcom/qihoo360/replugin/packages/PluginRunningList;-><init>()V

    .line 588
    iget-object v1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mProcess2PluginsMap:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/qihoo360/replugin/packages/PluginRunningList;

    .line 589
    invoke-virtual {v2}, Lcom/qihoo360/replugin/packages/PluginRunningList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_1
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 590
    invoke-virtual {v0, v3}, Lcom/qihoo360/replugin/packages/PluginRunningList;->isRunning(Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_1

    .line 591
    invoke-virtual {v0, v3}, Lcom/qihoo360/replugin/packages/PluginRunningList;->add(Ljava/lang/String;)V

    goto :goto_0

    :cond_2
    return-object v0
.end method

.method private getRunningProcessesByPluginLocked(Ljava/lang/String;)[Ljava/lang/String;
    .locals 4

    .line 645
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 646
    iget-object v1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mProcess2PluginsMap:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/qihoo360/replugin/packages/PluginRunningList;

    .line 647
    invoke-virtual {v2, p1}, Lcom/qihoo360/replugin/packages/PluginRunningList;->isRunning(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 648
    iget-object v2, v2, Lcom/qihoo360/replugin/packages/PluginRunningList;->mProcessName:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_1
    const/4 p1, 0x0

    new-array p1, p1, [Ljava/lang/String;

    .line 651
    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object p1

    check-cast p1, [Ljava/lang/String;

    return-object p1
.end method

.method private initTraceBaseInfo()V
    .locals 6

    .line 93
    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result v0

    .line 95
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x15

    if-lt v1, v2, :cond_0

    .line 96
    invoke-static {}, Landroid/system/Os;->getppid()I

    move-result v1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    .line 98
    :goto_0
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Thread;->getName()Ljava/lang/String;

    move-result-object v2

    .line 99
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iput-object v3, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->traceInstallPluginSb:Ljava/lang/StringBuilder;

    const-string v4, "####\u5b89\u88c5\u63d2\u4ef6###"

    .line 100
    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "\n"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 101
    iget-object v3, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->traceInstallPluginSb:Ljava/lang/StringBuilder;

    const-string v5, " ppid : "

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 102
    iget-object v1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->traceInstallPluginSb:Ljava/lang/StringBuilder;

    const-string v3, " pid  : "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 103
    iget-object v0, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->traceInstallPluginSb:Ljava/lang/StringBuilder;

    const-string v1, " currentThreadName : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method private installLocked(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 6

    const-string v0, "PluginManagerServer:"

    const-string v1, " invoke install Locked"

    .line 159
    invoke-static {v0, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 160
    iget-object v1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->traceInstallPluginSb:Ljava/lang/StringBuilder;

    const-string v2, "path : "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "\n"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 161
    iget-object v1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->traceInstallPluginSb:Ljava/lang/StringBuilder;

    const-string v3, "------------------------------------------------"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 162
    iget-object v1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->traceInstallPluginSb:Ljava/lang/StringBuilder;

    const-string v2, "\u6838\u5fc3\u6b65\u9aa4\uff1a\n"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 164
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v1

    invoke-virtual {v1}, Lcom/qihoo360/replugin/RePluginConfig;->getVerifySign()Z

    move-result v1

    if-eqz v1, :cond_0

    const/16 v2, 0xc0

    goto :goto_0

    :cond_0
    const/16 v2, 0x80

    :goto_0
    const-string v3, "step 1 :\u8bfb\u53d6APK\u5185\u5bb9\n"

    .line 167
    invoke-direct {p0, v3, p2}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->traceInstallPlugin(Ljava/lang/String;Z)V

    .line 169
    iget-object v3, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mContext:Landroid/content/Context;

    invoke-virtual {v3}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v3

    invoke-virtual {v3, p1, v2}, Landroid/content/pm/PackageManager;->getPackageArchiveInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v2

    const/4 v3, 0x0

    if-nez v2, :cond_1

    .line 171
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "installLocked: Not a valid apk. path="

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0, p2}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 173
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object p2

    invoke-virtual {p2}, Lcom/qihoo360/replugin/RePluginConfig;->getEventCallbacks()Lcom/qihoo360/replugin/RePluginEventCallbacks;

    move-result-object p2

    sget-object v0, Lcom/qihoo360/replugin/RePluginEventCallbacks$InstallResult;->READ_PKG_INFO_FAIL:Lcom/qihoo360/replugin/RePluginEventCallbacks$InstallResult;

    invoke-virtual {p2, p1, v0}, Lcom/qihoo360/replugin/RePluginEventCallbacks;->onInstallPluginFailed(Ljava/lang/String;Lcom/qihoo360/replugin/RePluginEventCallbacks$InstallResult;)V

    return-object v3

    :cond_1
    if-eqz v1, :cond_2

    .line 179
    invoke-direct {p0, v2, p1, p2}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->verifySignature(Landroid/content/pm/PackageInfo;Ljava/lang/String;Z)Z

    move-result v1

    if-nez v1, :cond_3

    const-string p1, "\u7b7e\u540d\u6821\u9a8c\u4e0d\u901a\u8fc7"

    .line 180
    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-object v3

    :cond_2
    const-string v1, "step 2 :\u7b7e\u540d\u4e0d\u53ef\u7528\n"

    .line 185
    invoke-direct {p0, v1, p2}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->traceInstallPlugin(Ljava/lang/String;Z)V

    :cond_3
    const-string v1, "step 3 :\u89e3\u6790\u51fa\u540d\u5b57\u548c\u4e09\u5143\u7ec4\n"

    .line 189
    invoke-direct {p0, v1, p2}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->traceInstallPlugin(Ljava/lang/String;Z)V

    .line 191
    invoke-static {v2, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->parseFromPackageInfo(Landroid/content/pm/PackageInfo;Ljava/lang/String;)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v1

    .line 192
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_4

    .line 193
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "installLocked: Info="

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_4
    const/16 v2, 0xa

    .line 195
    invoke-virtual {v1, v2}, Lcom/qihoo360/replugin/model/PluginInfo;->setType(I)V

    .line 202
    invoke-virtual {v1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v2

    const/4 v4, 0x0

    invoke-static {v2, v4}, Lcom/qihoo360/loader2/MP;->getPlugin(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v2

    if-eqz v2, :cond_5

    .line 204
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "installLocked: Has installed plugin. current="

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 207
    invoke-direct {p0, v1, v2}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->checkVersion(Lcom/qihoo360/replugin/model/PluginInfo;Lcom/qihoo360/replugin/model/PluginInfo;)I

    move-result v4

    if-nez v4, :cond_5

    const/4 v4, 0x1

    .line 209
    invoke-virtual {v1, v4}, Lcom/qihoo360/replugin/model/PluginInfo;->setIsPendingCover(Z)V

    .line 215
    :cond_5
    invoke-direct {p0, p1, v1, p2}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->copyOrMoveApk(Ljava/lang/String;Lcom/qihoo360/replugin/model/PluginInfo;Z)Z

    move-result v4

    if-nez v4, :cond_6

    const-string p2, "\u62f7\u8d1d\u6587\u4ef6\u5931\u8d25"

    .line 216
    invoke-static {v0, p2}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 217
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object p2

    invoke-virtual {p2}, Lcom/qihoo360/replugin/RePluginConfig;->getEventCallbacks()Lcom/qihoo360/replugin/RePluginEventCallbacks;

    move-result-object p2

    sget-object v0, Lcom/qihoo360/replugin/RePluginEventCallbacks$InstallResult;->COPY_APK_FAIL:Lcom/qihoo360/replugin/RePluginEventCallbacks$InstallResult;

    invoke-virtual {p2, p1, v0}, Lcom/qihoo360/replugin/RePluginEventCallbacks;->onInstallPluginFailed(Ljava/lang/String;Lcom/qihoo360/replugin/RePluginEventCallbacks$InstallResult;)V

    return-object v3

    :cond_6
    const-string p1, "step 5 :\u4ece\u63d2\u4ef6\u4e2d\u91ca\u653e So \u6587\u4ef6\n"

    .line 221
    invoke-direct {p0, p1, p2}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->traceInstallPlugin(Ljava/lang/String;Z)V

    .line 223
    invoke-virtual {v1}, Lcom/qihoo360/replugin/model/PluginInfo;->getPath()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1}, Lcom/qihoo360/replugin/model/PluginInfo;->getNativeLibsDir()Ljava/io/File;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/qihoo360/loader2/PluginNativeLibsHelper;->install(Ljava/lang/String;Ljava/io/File;)Z

    const-string p1, "step 6 :\u8bfb\u53d6APK\u5185\u5bb9\n"

    .line 226
    invoke-direct {p0, p1, p2}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->traceInstallPlugin(Ljava/lang/String;Z)V

    if-eqz v2, :cond_7

    .line 228
    invoke-direct {p0, v2, v1}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->updateOrLater(Lcom/qihoo360/replugin/model/PluginInfo;Lcom/qihoo360/replugin/model/PluginInfo;)V

    goto :goto_1

    .line 230
    :cond_7
    iget-object p1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mList:Lcom/qihoo360/replugin/model/PluginInfoList;

    invoke-virtual {p1, v1}, Lcom/qihoo360/replugin/model/PluginInfoList;->add(Lcom/qihoo360/replugin/model/PluginInfo;)V

    :goto_1
    const-string p1, "step 7 :\u4fdd\u5b58\u63d2\u4ef6\u4fe1\u606f\u5230\u6587\u4ef6\u4e2d\uff0c\u4e0b\u6b21\u53ef\u76f4\u63a5\u4f7f\u7528\n"

    .line 234
    invoke-direct {p0, p1, p2}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->traceInstallPlugin(Ljava/lang/String;Z)V

    .line 235
    iget-object p1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mList:Lcom/qihoo360/replugin/model/PluginInfoList;

    iget-object p2, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mContext:Landroid/content/Context;

    invoke-virtual {p1, p2}, Lcom/qihoo360/replugin/model/PluginInfoList;->save(Landroid/content/Context;)Z

    return-object v1
.end method

.method private isPluginRunningLocked(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 2

    .line 599
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_1

    .line 601
    iget-object p2, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mProcess2PluginsMap:Ljava/util/Map;

    invoke-interface {p2}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object p2

    invoke-interface {p2}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :cond_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/qihoo360/replugin/packages/PluginRunningList;

    .line 602
    invoke-virtual {v0, p1}, Lcom/qihoo360/replugin/packages/PluginRunningList;->isRunning(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    return v1

    .line 608
    :cond_1
    iget-object v0, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mProcess2PluginsMap:Ljava/util/Map;

    invoke-interface {v0, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/qihoo360/replugin/packages/PluginRunningList;

    if-eqz p2, :cond_2

    .line 610
    invoke-virtual {p2, p1}, Lcom/qihoo360/replugin/packages/PluginRunningList;->isRunning(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_2

    return v1

    :cond_2
    const/4 p1, 0x0

    return p1
.end method

.method private loadLocked()Ljava/util/List;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ">;"
        }
    .end annotation

    .line 126
    iget-object v0, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mList:Lcom/qihoo360/replugin/model/PluginInfoList;

    iget-object v1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mContext:Landroid/content/Context;

    invoke-virtual {v0, v1}, Lcom/qihoo360/replugin/model/PluginInfoList;->load(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    .line 131
    :cond_0
    invoke-direct {p0}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->updateAllLocked()Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method private move(Lcom/qihoo360/replugin/model/PluginInfo;Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 2

    .line 471
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 472
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "move. curPi="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getPath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "; newPi="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getPath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "PluginManagerServer:"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 475
    :cond_0
    :try_start_0
    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getApkFile()Ljava/io/File;

    move-result-object v0

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getApkFile()Ljava/io/File;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/qihoo360/replugin/utils/FileUtils;->copyFile(Ljava/io/File;Ljava/io/File;)V

    .line 477
    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getDexFile()Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 478
    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getDexFile()Ljava/io/File;

    move-result-object v0

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getDexFile()Ljava/io/File;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/qihoo360/replugin/utils/FileUtils;->copyFile(Ljava/io/File;Ljava/io/File;)V

    .line 481
    :cond_1
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x15

    if-ge v0, v1, :cond_2

    .line 482
    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getExtraOdexDir()Ljava/io/File;

    move-result-object v0

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getExtraOdexDir()Ljava/io/File;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/qihoo360/replugin/utils/FileUtils;->copyDir(Ljava/io/File;Ljava/io/File;)V

    .line 485
    :cond_2
    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getNativeLibsDir()Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 486
    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getNativeLibsDir()Ljava/io/File;

    move-result-object v0

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getNativeLibsDir()Ljava/io/File;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/utils/FileUtils;->copyDir(Ljava/io/File;Ljava/io/File;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 495
    :cond_3
    :try_start_1
    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getApkFile()Ljava/io/File;

    move-result-object p1

    invoke-virtual {p1}, Ljava/io/File;->getParentFile()Ljava/io/File;

    move-result-object p1

    .line 496
    invoke-static {p1}, Lcom/qihoo360/replugin/utils/FileUtils;->forceDelete(Ljava/io/File;)V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_2
    .catch Ljava/lang/IllegalArgumentException; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_0

    :catchall_0
    move-exception p1

    goto :goto_1

    :catch_0
    move-exception p1

    .line 491
    :try_start_2
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 495
    :try_start_3
    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getApkFile()Ljava/io/File;

    move-result-object p1

    invoke-virtual {p1}, Ljava/io/File;->getParentFile()Ljava/io/File;

    move-result-object p1

    .line 496
    invoke-static {p1}, Lcom/qihoo360/replugin/utils/FileUtils;->forceDelete(Ljava/io/File;)V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_2
    .catch Ljava/lang/IllegalArgumentException; {:try_start_3 .. :try_end_3} :catch_1

    goto :goto_0

    :catch_1
    move-exception p1

    .line 503
    invoke-virtual {p1}, Ljava/lang/IllegalArgumentException;->printStackTrace()V

    goto :goto_0

    :catch_2
    move-exception p1

    .line 499
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V

    :goto_0
    return-void

    .line 495
    :goto_1
    :try_start_4
    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getApkFile()Ljava/io/File;

    move-result-object p2

    invoke-virtual {p2}, Ljava/io/File;->getParentFile()Ljava/io/File;

    move-result-object p2

    .line 496
    invoke-static {p2}, Lcom/qihoo360/replugin/utils/FileUtils;->forceDelete(Ljava/io/File;)V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_4
    .catch Ljava/lang/IllegalArgumentException; {:try_start_4 .. :try_end_4} :catch_3

    goto :goto_2

    :catch_3
    move-exception p2

    .line 503
    invoke-virtual {p2}, Ljava/lang/IllegalArgumentException;->printStackTrace()V

    goto :goto_2

    :catch_4
    move-exception p2

    .line 499
    invoke-virtual {p2}, Ljava/io/IOException;->printStackTrace()V

    .line 505
    :goto_2
    throw p1
.end method

.method private syncRunningPluginsLocked(Lcom/qihoo360/replugin/packages/PluginRunningList;)V
    .locals 3

    .line 620
    new-instance v0, Lcom/qihoo360/replugin/packages/PluginRunningList;

    invoke-direct {v0, p1}, Lcom/qihoo360/replugin/packages/PluginRunningList;-><init>(Lcom/qihoo360/replugin/packages/PluginRunningList;)V

    .line 621
    iget-object v1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mProcess2PluginsMap:Ljava/util/Map;

    iget-object v2, p1, Lcom/qihoo360/replugin/packages/PluginRunningList;->mProcessName:Ljava/lang/String;

    invoke-interface {v1, v2, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 623
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 624
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "syncRunningPluginsLocked: Synced! pl="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, "; map="

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mProcess2PluginsMap:Ljava/util/Map;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "PluginManagerServer:"

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-void
.end method

.method private traceInstallPlugin(Ljava/lang/String;Z)V
    .locals 2

    .line 144
    iget-object v0, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->traceInstallPluginSb:Ljava/lang/StringBuilder;

    const-string v1, "     "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 145
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, ""

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->traceInstallPluginSb:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "PluginManagerServer:"

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 146
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object p1

    invoke-virtual {p1}, Lcom/qihoo360/replugin/RePluginConfig;->getEventCallbacks()Lcom/qihoo360/replugin/RePluginEventCallbacks;

    move-result-object p1

    iget-object v0, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->traceInstallPluginSb:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0, p2}, Lcom/qihoo360/replugin/RePluginEventCallbacks;->onInstallPluginStepInfo(Ljava/lang/String;Z)V

    return-void
.end method

.method private uninstallLater(Lcom/qihoo360/replugin/model/PluginInfo;)Z
    .locals 2

    .line 557
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 558
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Is running. Uninstall later! pn="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "PluginManagerServer:"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 560
    :cond_0
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/qihoo360/loader2/MP;->getPlugin(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v0

    if-nez v0, :cond_1

    return v1

    .line 564
    :cond_1
    invoke-virtual {v0, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->setPendingDelete(Lcom/qihoo360/replugin/model/PluginInfo;)V

    .line 567
    iget-object p1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mList:Lcom/qihoo360/replugin/model/PluginInfoList;

    iget-object v0, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mContext:Landroid/content/Context;

    invoke-virtual {p1, v0}, Lcom/qihoo360/replugin/model/PluginInfoList;->save(Landroid/content/Context;)Z

    return v1
.end method

.method private uninstallLocked(Lcom/qihoo360/replugin/model/PluginInfo;)Z
    .locals 1

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return p1

    .line 548
    :cond_0
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/qihoo360/replugin/RePlugin;->isPluginRunning(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 549
    invoke-direct {p0, p1}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->uninstallLater(Lcom/qihoo360/replugin/model/PluginInfo;)Z

    move-result p1

    return p1

    .line 553
    :cond_1
    invoke-direct {p0, p1}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->uninstallNow(Lcom/qihoo360/replugin/model/PluginInfo;)Z

    move-result p1

    return p1
.end method

.method private uninstallNow(Lcom/qihoo360/replugin/model/PluginInfo;)Z
    .locals 2

    .line 572
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 573
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Not running. Uninstall now! pn="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "PluginManagerServer:"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 577
    :cond_0
    invoke-static {p1}, Lcom/qihoo360/replugin/utils/pkg/PackageFilesUtil;->forceDelete(Lcom/qihoo360/replugin/model/PluginInfo;)V

    .line 580
    iget-object v0, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mList:Lcom/qihoo360/replugin/model/PluginInfoList;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/qihoo360/replugin/model/PluginInfoList;->remove(Ljava/lang/String;)V

    .line 581
    iget-object p1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mList:Lcom/qihoo360/replugin/model/PluginInfoList;

    iget-object v0, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mContext:Landroid/content/Context;

    invoke-virtual {p1, v0}, Lcom/qihoo360/replugin/model/PluginInfoList;->save(Landroid/content/Context;)Z

    const/4 p1, 0x1

    return p1
.end method

.method private updateAllIfNeeded()V
    .locals 3

    .line 395
    iget-object v0, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mList:Lcom/qihoo360/replugin/model/PluginInfoList;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfoList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    const/4 v1, 0x0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/qihoo360/replugin/model/PluginInfo;

    .line 396
    invoke-direct {p0, v2}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->updateIfNeeded(Lcom/qihoo360/replugin/model/PluginInfo;)Z

    move-result v2

    if-eqz v2, :cond_0

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 401
    :cond_1
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_2

    .line 402
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "updateAllIfNeeded: Updated "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " plugins"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "PluginManagerServer:"

    invoke-static {v2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    if-lez v1, :cond_3

    .line 405
    iget-object v0, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mList:Lcom/qihoo360/replugin/model/PluginInfoList;

    iget-object v1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mContext:Landroid/content/Context;

    invoke-virtual {v0, v1}, Lcom/qihoo360/replugin/model/PluginInfoList;->save(Landroid/content/Context;)Z

    :cond_3
    return-void
.end method

.method private updateAllLocked()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ">;"
        }
    .end annotation

    .line 136
    invoke-direct {p0}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->updateAllIfNeeded()V

    .line 139
    iget-object v0, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mList:Lcom/qihoo360/replugin/model/PluginInfoList;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfoList;->cloneList()Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method private updateIfNeeded(Lcom/qihoo360/replugin/model/PluginInfo;)Z
    .locals 4

    .line 411
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    invoke-direct {p0, v0, v1}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->isPluginRunningLocked(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    const/4 v1, 0x0

    const-string v2, "PluginManagerServer:"

    if-eqz v0, :cond_1

    .line 413
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 414
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "updateIfNeeded: Plugin is running. pn="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->w(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return v1

    .line 420
    :cond_1
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->isNeedUninstall()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 421
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_2

    .line 422
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "updateIfNeeded: delete plugin. pn="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 426
    :cond_2
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getPendingDelete()Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->uninstallNow(Lcom/qihoo360/replugin/model/PluginInfo;)Z

    move-result p1

    return p1

    .line 428
    :cond_3
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->isNeedUpdate()Z

    move-result v0

    const/4 v3, 0x1

    if-eqz v0, :cond_4

    .line 430
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getPendingUpdate()Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v0

    invoke-direct {p0, p1, v0}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->updateNow(Lcom/qihoo360/replugin/model/PluginInfo;Lcom/qihoo360/replugin/model/PluginInfo;)V

    return v3

    .line 432
    :cond_4
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->isNeedCover()Z

    move-result v0

    if-eqz v0, :cond_5

    .line 433
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getPendingCover()Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v0

    invoke-direct {p0, p1, v0}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->updateNow(Lcom/qihoo360/replugin/model/PluginInfo;Lcom/qihoo360/replugin/model/PluginInfo;)V

    return v3

    .line 437
    :cond_5
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_6

    .line 438
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "updateIfNeeded: Not need to update. pn="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_6
    return v1
.end method

.method private updateNow(Lcom/qihoo360/replugin/model/PluginInfo;Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 3

    .line 445
    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getIsPendingCover()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 447
    invoke-direct {p0, p1, p2}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->move(Lcom/qihoo360/replugin/model/PluginInfo;Lcom/qihoo360/replugin/model/PluginInfo;)V

    goto :goto_0

    .line 450
    :cond_0
    invoke-direct {p0, p1}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->delete(Lcom/qihoo360/replugin/model/PluginInfo;)V

    :goto_0
    const/16 v1, 0xb

    .line 453
    invoke-virtual {p2, v1}, Lcom/qihoo360/replugin/model/PluginInfo;->setType(I)V

    .line 454
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_1

    .line 455
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "updateNow: Update. pn="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "; cur_ver="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 456
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "; update_ver="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "PluginManagerServer:"

    .line 455
    invoke-static {v2, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    const/4 v1, 0x0

    if-eqz v0, :cond_2

    .line 460
    invoke-virtual {p1, v1}, Lcom/qihoo360/replugin/model/PluginInfo;->setPendingCover(Lcom/qihoo360/replugin/model/PluginInfo;)V

    const/4 p1, 0x0

    .line 461
    invoke-virtual {p2, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->setIsPendingCover(Z)V

    .line 463
    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getApkFile()Ljava/io/File;

    move-result-object p1

    invoke-virtual {p1}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->setPath(Ljava/lang/String;)V

    goto :goto_1

    .line 465
    :cond_2
    invoke-virtual {p1, p2}, Lcom/qihoo360/replugin/model/PluginInfo;->update(Lcom/qihoo360/replugin/model/PluginInfo;)V

    .line 466
    invoke-virtual {p1, v1}, Lcom/qihoo360/replugin/model/PluginInfo;->setPendingUpdate(Lcom/qihoo360/replugin/model/PluginInfo;)V

    :goto_1
    return-void
.end method

.method private updateOrLater(Lcom/qihoo360/replugin/model/PluginInfo;Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 4

    .line 320
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "updateOrLater: Need update. pn="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "; cur_ver="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 321
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "; update_ver="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "PluginManagerServer:"

    .line 320
    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 324
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->isPnPlugin()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 325
    iget-object v0, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mList:Lcom/qihoo360/replugin/model/PluginInfoList;

    invoke-virtual {v0, p1}, Lcom/qihoo360/replugin/model/PluginInfoList;->add(Lcom/qihoo360/replugin/model/PluginInfo;)V

    .line 329
    :cond_0
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getPendingUpdate()Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 331
    invoke-direct {p0, p1, p2, v0}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->updatePendingUpdate(Lcom/qihoo360/replugin/model/PluginInfo;Lcom/qihoo360/replugin/model/PluginInfo;Lcom/qihoo360/replugin/model/PluginInfo;)V

    return-void

    .line 339
    :cond_1
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/qihoo360/replugin/RePlugin;->isPluginRunning(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 340
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "updateOrLater: Plugin is running. Later. pn="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 341
    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v0

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v2

    const/4 v3, 0x0

    if-eq v0, v2, :cond_2

    .line 343
    invoke-virtual {p1, p2}, Lcom/qihoo360/replugin/model/PluginInfo;->setPendingUpdate(Lcom/qihoo360/replugin/model/PluginInfo;)V

    .line 344
    invoke-virtual {p1, v3}, Lcom/qihoo360/replugin/model/PluginInfo;->setPendingDelete(Lcom/qihoo360/replugin/model/PluginInfo;)V

    .line 345
    invoke-virtual {p1, v3}, Lcom/qihoo360/replugin/model/PluginInfo;->setPendingCover(Lcom/qihoo360/replugin/model/PluginInfo;)V

    const-string v0, "updateOrLater: Plugin need update high version. clear PendingDelete and PendingCover."

    .line 346
    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->w(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 347
    :cond_2
    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v0

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v2

    if-ne v0, v2, :cond_3

    .line 349
    invoke-virtual {p1, p2}, Lcom/qihoo360/replugin/model/PluginInfo;->setPendingCover(Lcom/qihoo360/replugin/model/PluginInfo;)V

    .line 350
    invoke-virtual {p1, v3}, Lcom/qihoo360/replugin/model/PluginInfo;->setPendingDelete(Lcom/qihoo360/replugin/model/PluginInfo;)V

    const-string v0, "updateOrLater: Plugin need update same version. clear PendingDelete."

    .line 352
    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 356
    :cond_3
    :goto_0
    invoke-virtual {p2, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->setParentInfo(Lcom/qihoo360/replugin/model/PluginInfo;)V

    goto :goto_1

    .line 358
    :cond_4
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "updateOrLater: Not running. Update now! pn="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 359
    invoke-direct {p0, p1, p2}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->updateNow(Lcom/qihoo360/replugin/model/PluginInfo;Lcom/qihoo360/replugin/model/PluginInfo;)V

    :goto_1
    return-void
.end method

.method private updatePendingUpdate(Lcom/qihoo360/replugin/model/PluginInfo;Lcom/qihoo360/replugin/model/PluginInfo;Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 3

    .line 364
    invoke-virtual {p3}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v0

    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v1

    const-string v2, "PluginManagerServer:"

    if-eq v0, v1, :cond_1

    .line 367
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 368
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "updatePendingUpdate: Found newer plugin, replace. pn="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "; cur_ver="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 369
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "; old_ver="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "; new_ver="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 368
    invoke-static {v2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 373
    :cond_0
    invoke-virtual {p1, p2}, Lcom/qihoo360/replugin/model/PluginInfo;->setPendingUpdate(Lcom/qihoo360/replugin/model/PluginInfo;)V

    .line 374
    invoke-virtual {p2, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->setParentInfo(Lcom/qihoo360/replugin/model/PluginInfo;)V

    .line 378
    :try_start_0
    new-instance p1, Ljava/io/File;

    invoke-virtual {p3}, Lcom/qihoo360/replugin/model/PluginInfo;->getPath()Ljava/lang/String;

    move-result-object p2

    invoke-direct {p1, p2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {p1}, Lcom/qihoo360/replugin/utils/FileUtils;->forceDelete(Ljava/io/File;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 381
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V

    goto :goto_0

    .line 386
    :cond_1
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_2

    const-string p1, "updatePendingUpdate: Older than updating plugin. But..."

    .line 387
    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    :goto_0
    return-void
.end method

.method private updateUsedLocked(Ljava/lang/String;Z)V
    .locals 2

    const/4 v0, 0x0

    .line 529
    invoke-static {p1, v0}, Lcom/qihoo360/loader2/MP;->getPlugin(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 535
    :cond_0
    invoke-virtual {v0, p2}, Lcom/qihoo360/replugin/model/PluginInfo;->setIsUsed(Z)V

    .line 536
    iget-object v0, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mList:Lcom/qihoo360/replugin/model/PluginInfoList;

    iget-object v1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mContext:Landroid/content/Context;

    invoke-virtual {v0, v1}, Lcom/qihoo360/replugin/model/PluginInfoList;->save(Landroid/content/Context;)Z

    .line 539
    invoke-static {}, Lcom/qihoo360/replugin/RePluginInternal;->getAppContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p1, p2}, Lcom/qihoo360/replugin/packages/PluginInfoUpdater;->updateIsUsed(Landroid/content/Context;Ljava/lang/String;Z)V

    return-void
.end method

.method private verifySignature(Landroid/content/pm/PackageInfo;Ljava/lang/String;Z)Z
    .locals 2

    const-string v0, "step 2 :\u6821\u9a8c\u63d2\u4ef6\u7b7e\u540d\n"

    .line 241
    invoke-direct {p0, v0, p3}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->traceInstallPlugin(Ljava/lang/String;Z)V

    .line 242
    invoke-static {p1}, Lcom/qihoo360/loader2/CertUtils;->isPluginSignatures(Landroid/content/pm/PackageInfo;)Z

    move-result p3

    const-string v0, "PluginManagerServer:"

    if-nez p3, :cond_1

    .line 243
    sget-boolean p3, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p3, :cond_0

    .line 244
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "verifySignature: invalid cert:  name="

    invoke-virtual {p3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 247
    :cond_0
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object p1

    invoke-virtual {p1}, Lcom/qihoo360/replugin/RePluginConfig;->getEventCallbacks()Lcom/qihoo360/replugin/RePluginEventCallbacks;

    move-result-object p1

    sget-object p3, Lcom/qihoo360/replugin/RePluginEventCallbacks$InstallResult;->VERIFY_SIGN_FAIL:Lcom/qihoo360/replugin/RePluginEventCallbacks$InstallResult;

    invoke-virtual {p1, p2, p3}, Lcom/qihoo360/replugin/RePluginEventCallbacks;->onInstallPluginFailed(Ljava/lang/String;Lcom/qihoo360/replugin/RePluginEventCallbacks$InstallResult;)V

    const/4 p1, 0x0

    return p1

    .line 250
    :cond_1
    sget-boolean p2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p2, :cond_2

    .line 251
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "verifySignature: valid cert:  name="

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    const/4 p1, 0x1

    return p1
.end method


# virtual methods
.method public getService()Lcom/qihoo360/replugin/packages/IPluginManagerServer;
    .locals 1

    .line 107
    iget-object v0, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mStub:Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    return-object v0
.end method

.method public onClientProcessKilled(Ljava/lang/String;)V
    .locals 4

    .line 116
    sget-object v0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->LOCKER_PROCESS_KILLED:[B

    monitor-enter v0

    .line 117
    :try_start_0
    iget-object v1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mProcess2PluginsMap:Ljava/util/Map;

    invoke-interface {v1, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 119
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_0

    const-string v1, "PluginManagerServer:"

    .line 120
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "onClientProcessKilled: Killed! process="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "; remains="

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/qihoo360/replugin/packages/PluginManagerServer;->mProcess2PluginsMap:Ljava/util/Map;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 122
    :cond_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method
