.class public Lcom/ymnsdk/replugin/util/DownloadUtils;
.super Ljava/lang/Object;
.source "DownloadUtils.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ymnsdk/replugin/util/DownloadUtils$Factory;
    }
.end annotation


# static fields
.field public static volatile downloadRecord:Ljava/util/Map; = null
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation
.end field

.field public static volatile isUserDownload:Z = false

.field private static final mPluginDir:Ljava/lang/String; = "plugin"

.field public static volatile mergeing:Z


# instance fields
.field private mWriteablePath:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 56
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/ymnsdk/replugin/util/DownloadUtils;->downloadRecord:Ljava/util/Map;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 38
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$100(Lcom/ymnsdk/replugin/util/DownloadUtils;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/MergeCallback;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 38
    invoke-direct/range {p0 .. p9}, Lcom/ymnsdk/replugin/util/DownloadUtils;->handleMergeApk(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/MergeCallback;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;
    .locals 1

    .line 40
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils$Factory;->access$000()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v0

    return-object v0
.end method

.method private handleMergeApk(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/MergeCallback;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V
    .locals 14

    move-object v6, p0

    move-object v0, p1

    move-object/from16 v1, p2

    move-object/from16 v2, p3

    const-wide/32 v10, 0x3b9aca00

    const/4 v13, 0x5

    move-object v7, p1

    move-object/from16 v8, p2

    move-object/from16 v9, p3

    move-object/from16 v12, p4

    .line 211
    invoke-static/range {v7 .. v13}, Lcom/github/sisong/ApkPatch;->patch(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;JLjava/lang/String;I)I

    move-result v3

    if-nez v3, :cond_0

    .line 214
    invoke-static {}, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->getInstance()Lcom/ymnsdk/replugin/trace/PluginTraceManager;

    move-result-object v4

    invoke-virtual {v4}, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->deleteMergeApkLog()V

    :cond_0
    move-object/from16 v4, p5

    .line 216
    invoke-virtual {p0, v2, v4}, Lcom/ymnsdk/replugin/util/DownloadUtils;->checkMd5(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v5

    const/4 v7, 0x0

    if-eqz v5, :cond_1

    .line 218
    new-instance v3, Ljava/io/File;

    invoke-direct {v3, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 219
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 220
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 222
    invoke-virtual {v1}, Ljava/io/File;->delete()Z

    .line 223
    invoke-virtual {v3, v1}, Ljava/io/File;->renameTo(Ljava/io/File;)Z

    .line 224
    invoke-virtual {v2}, Ljava/io/File;->delete()Z

    .line 225
    invoke-static/range {p4 .. p4}, Lcom/ymnsdk/replugin/util/ResourceUtil;->deleteDirectory(Ljava/lang/String;)Z

    .line 226
    sput v7, Lcom/ymnsdk/replugin/patch/download/DownloadState;->remerge_num:I

    .line 227
    invoke-interface/range {p6 .. p6}, Lcom/ymnsdk/replugin/listener/MergeCallback;->mergeSuccess()V

    .line 228
    sput-boolean v7, Lcom/ymnsdk/replugin/util/DownloadUtils;->mergeing:Z

    goto :goto_0

    .line 231
    :cond_1
    new-instance v5, Ljava/io/File;

    invoke-direct {v5, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 232
    invoke-virtual {v5}, Ljava/io/File;->delete()Z

    .line 233
    invoke-static/range {p4 .. p4}, Lcom/ymnsdk/replugin/util/ResourceUtil;->deleteDirectory(Ljava/lang/String;)Z

    .line 234
    sget v2, Lcom/ymnsdk/replugin/patch/download/DownloadState;->remerge_num:I

    const/4 v5, 0x3

    if-ge v2, v5, :cond_2

    .line 236
    sget v0, Lcom/ymnsdk/replugin/patch/download/DownloadState;->remerge_num:I

    add-int/lit8 v0, v0, 0x1

    sput v0, Lcom/ymnsdk/replugin/patch/download/DownloadState;->remerge_num:I

    .line 237
    sput-boolean v7, Lcom/ymnsdk/replugin/util/DownloadUtils;->mergeing:Z

    move-object v0, p0

    move-object/from16 v1, p7

    move-object/from16 v2, p8

    move-object/from16 v3, p9

    move-object/from16 v4, p5

    move-object/from16 v5, p6

    .line 238
    invoke-virtual/range {v0 .. v5}, Lcom/ymnsdk/replugin/util/DownloadUtils;->mergeApk(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/MergeCallback;)V

    goto :goto_0

    .line 240
    :cond_2
    sput-boolean v7, Lcom/ymnsdk/replugin/util/DownloadUtils;->mergeing:Z

    move-object/from16 v2, p8

    .line 241
    invoke-virtual {p0, v2, p1, v1}, Lcom/ymnsdk/replugin/util/DownloadUtils;->clearPluginResource(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 242
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u5408\u5e76\u9519\u8bef\u7801\u4e3a:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    move-object/from16 v1, p6

    invoke-interface {v1, v0}, Lcom/ymnsdk/replugin/listener/MergeCallback;->mergeFail(Ljava/lang/String;)V

    :goto_0
    return-void
.end method


# virtual methods
.method public addMd5(Lcom/ymnsdk/replugin/entity/PluginInfo;Ljava/lang/String;)Ljava/util/List;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/ymnsdk/replugin/entity/PluginInfo;",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    .line 303
    :goto_0
    invoke-virtual {p1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getMd5List()Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_1

    .line 305
    invoke-virtual {p1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getMd5List()Ljava/util/List;

    move-result-object v1

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getMd5List()Ljava/util/List;

    move-result-object p1

    return-object p1

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 307
    :cond_1
    invoke-virtual {p1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getMd5List()Ljava/util/List;

    move-result-object p1

    .line 308
    invoke-interface {p1, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-object p1
.end method

.method public checkDirectories(Ljava/lang/String;)V
    .locals 1

    .line 142
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 143
    invoke-virtual {v0}, Ljava/io/File;->isDirectory()Z

    move-result p1

    if-eqz p1, :cond_0

    return-void

    .line 147
    :cond_0
    new-instance p1, Ljava/io/File;

    invoke-virtual {v0}, Ljava/io/File;->getParent()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 148
    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result v0

    if-nez v0, :cond_1

    .line 149
    invoke-virtual {p1}, Ljava/io/File;->mkdirs()Z

    :cond_1
    return-void
.end method

.method public checkMd5(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 2

    .line 249
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 250
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 254
    :cond_0
    invoke-static {p1}, Lcom/ymnsdk/replugin/download/CodecUtil;->md5File(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 256
    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 p1, 0x1

    return p1

    :cond_1
    return v1
.end method

.method public checkMemory(JD)Z
    .locals 5

    const-string v0, "ymn"

    const-string v1, "\u5230\u4e86\u6821\u9a8c\u5b58\u50a8"

    .line 314
    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 315
    invoke-static {}, Lcom/ymnsdk/replugin/util/ApkUtils;->getSDAvailableSize()J

    move-result-wide v1

    .line 316
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "\u53ef\u7528\u5927\u5c0f\u4e3a:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    long-to-double p1, p1

    mul-double/2addr p3, p1

    .line 318
    new-instance p1, Ljava/lang/Double;

    invoke-direct {p1, p3, p4}, Ljava/lang/Double;-><init>(D)V

    invoke-virtual {p1}, Ljava/lang/Double;->longValue()J

    move-result-wide p1

    .line 319
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string p4, "\u9700\u8981\u4e0b\u8f7d\u7684\u5927\u5c0f\u4e3a:"

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {v0, p3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    const-wide/16 p3, 0x1

    add-long/2addr p1, p3

    cmp-long p1, v1, p1

    if-ltz p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public checkSilentMemory(JD)Z
    .locals 7

    const-string v0, "ymn"

    const-string v1, "\u5230\u4e86\u9759\u9ed8\u4e0b\u8f7d\u6821\u9a8c\u5b58\u50a8"

    .line 329
    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 330
    invoke-static {}, Lcom/ymnsdk/replugin/util/ApkUtils;->getSDAvailableSize()J

    move-result-wide v1

    .line 331
    invoke-static {}, Lcom/ymnsdk/replugin/util/ApkUtils;->getSDTotailSize()J

    move-result-wide v3

    .line 332
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "\u53ef\u7528\u5927\u5c0f\u4e3a:"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v0, v5}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 333
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "\u603b\u5927\u5c0f\u4e3a:"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v0, v5}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    sub-long/2addr v1, p1

    .line 335
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "\u4e0b\u8f7d\u540e\u5269\u4f59\u7684\u5927\u5c0f\u4e3a:"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    long-to-double p1, v3

    mul-double/2addr p3, p1

    .line 337
    new-instance p1, Ljava/lang/Double;

    invoke-direct {p1, p3, p4}, Ljava/lang/Double;-><init>(D)V

    invoke-virtual {p1}, Ljava/lang/Double;->longValue()J

    move-result-wide p1

    .line 338
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string p4, "\u4e0b\u8f7d\u540e\u9650\u5236\u7684\u5927\u5c0f"

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {v0, p3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    cmp-long p1, v1, p1

    if-ltz p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public clearPluginResource(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 412
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 413
    new-instance p2, Ljava/io/File;

    invoke-direct {p2, p3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 414
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object p3

    invoke-virtual {p3}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalGetPlugin()Ljava/util/Map;

    move-result-object p3

    .line 415
    invoke-interface {p3, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    return-void

    .line 416
    :cond_0
    invoke-interface {p3, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ymnsdk/replugin/entity/PluginInfo;

    .line 417
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object p3

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_md5()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p3, p1}, Lcom/ymnsdk/replugin/util/DownloadUtils;->joinPluginPath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 418
    new-instance p3, Ljava/io/File;

    invoke-direct {p3, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 419
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p1

    if-eqz p1, :cond_1

    invoke-virtual {v0}, Ljava/io/File;->delete()Z

    .line 420
    :cond_1
    invoke-virtual {p2}, Ljava/io/File;->exists()Z

    move-result p1

    if-eqz p1, :cond_2

    invoke-virtual {p2}, Ljava/io/File;->delete()Z

    .line 421
    :cond_2
    invoke-virtual {p3}, Ljava/io/File;->exists()Z

    move-result p1

    if-eqz p1, :cond_3

    invoke-virtual {p3}, Ljava/io/File;->delete()Z

    :cond_3
    const-string p1, ""

    .line 422
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/util/DownloadUtils;->joinPluginPath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 423
    new-instance p2, Ljava/io/File;

    invoke-direct {p2, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 424
    invoke-virtual {p2}, Ljava/io/File;->exists()Z

    move-result p1

    if-eqz p1, :cond_6

    invoke-virtual {p2}, Ljava/io/File;->isDirectory()Z

    move-result p1

    if-eqz p1, :cond_6

    .line 425
    invoke-virtual {p2}, Ljava/io/File;->listFiles()[Ljava/io/File;

    move-result-object p1

    const/4 p2, 0x0

    .line 426
    :goto_0
    array-length p3, p1

    if-ge p2, p3, :cond_6

    .line 428
    aget-object p3, p1, p2

    .line 429
    invoke-virtual {p3}, Ljava/io/File;->exists()Z

    move-result v0

    if-nez v0, :cond_4

    return-void

    .line 430
    :cond_4
    invoke-virtual {p3}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v0

    const-string v1, ".cache"

    .line 431
    invoke-virtual {v0, v1}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_5

    invoke-virtual {p3}, Ljava/io/File;->delete()Z

    :cond_5
    add-int/lit8 p2, p2, 0x1

    goto :goto_0

    :cond_6
    return-void
.end method

.method public clrarPatchResource(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;)V
    .locals 2

    .line 439
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalSilentDowningPlugin()Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 440
    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 441
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->putLocalSilentDowningPlugin(Ljava/util/Map;)V

    .line 442
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalUserDowningPlugin()Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 443
    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 444
    :cond_1
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->putLocalUserDowningPlugin(Ljava/util/Map;)V

    .line 446
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->removeTaskHistory(Ljava/lang/String;)Z

    if-eqz p3, :cond_3

    .line 450
    invoke-virtual {p3}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getSaveCachePath()Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 451
    invoke-virtual {p1}, Ljava/lang/String;->isEmpty()Z

    move-result p2

    if-eqz p2, :cond_2

    goto :goto_0

    .line 452
    :cond_2
    new-instance p2, Ljava/io/File;

    invoke-direct {p2, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 453
    invoke-virtual {p2}, Ljava/io/File;->delete()Z

    nop

    :cond_3
    :goto_0
    return-void
.end method

.method public copy(Ljava/lang/String;Ljava/lang/String;)V
    .locals 5

    .line 266
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 267
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    .line 269
    :try_start_0
    new-instance v1, Ljava/io/FileInputStream;

    invoke-direct {v1, p1}, Ljava/io/FileInputStream;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    .line 270
    :try_start_1
    new-instance p1, Ljava/io/FileOutputStream;

    invoke-direct {p1, p2}, Ljava/io/FileOutputStream;-><init>(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 271
    :try_start_2
    invoke-virtual {v1}, Ljava/io/InputStream;->available()I

    move-result p2

    .line 272
    rem-int/lit16 v0, p2, 0x400

    const/16 v2, 0x400

    if-nez v0, :cond_1

    div-int/2addr p2, v2

    goto :goto_0

    :cond_1
    div-int/2addr p2, v2

    add-int/lit8 p2, p2, 0x1

    :goto_0
    new-array v0, v2, [B

    const/4 v2, 0x0

    move v3, v2

    :goto_1
    if-ge v3, p2, :cond_2

    .line 275
    invoke-virtual {v1, v0}, Ljava/io/InputStream;->read([B)I

    move-result v4

    .line 276
    invoke-virtual {p1, v0, v2, v4}, Ljava/io/OutputStream;->write([BII)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    .line 283
    :cond_2
    :try_start_3
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V

    .line 286
    :goto_2
    invoke-virtual {p1}, Ljava/io/OutputStream;->close()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_3

    goto :goto_6

    :catchall_0
    move-exception p2

    goto :goto_3

    :catch_0
    move-exception p2

    goto :goto_4

    :catchall_1
    move-exception p2

    move-object p1, v0

    :goto_3
    move-object v0, v1

    goto :goto_7

    :catch_1
    move-exception p2

    move-object p1, v0

    :goto_4
    move-object v0, v1

    goto :goto_5

    :catchall_2
    move-exception p2

    move-object p1, v0

    goto :goto_7

    :catch_2
    move-exception p2

    move-object p1, v0

    .line 279
    :goto_5
    :try_start_4
    invoke-virtual {p2}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    if-eqz v0, :cond_3

    .line 283
    :try_start_5
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_3

    :cond_3
    if-eqz p1, :cond_4

    goto :goto_2

    :catch_3
    :cond_4
    :goto_6
    return-void

    :catchall_3
    move-exception p2

    :goto_7
    if-eqz v0, :cond_5

    :try_start_6
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V

    :cond_5
    if-eqz p1, :cond_6

    .line 286
    invoke-virtual {p1}, Ljava/io/OutputStream;->close()V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_4

    .line 291
    :catch_4
    :cond_6
    throw p2
.end method

.method public getConfigPath()Ljava/lang/String;
    .locals 2

    .line 77
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/ymnsdk/replugin/util/DownloadUtils;->mWriteablePath:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "sync.cfg"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getCurrentData()J
    .locals 2

    .line 81
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    return-wide v0
.end method

.method public getDownSize(Ljava/lang/String;JLjava/lang/String;Ljava/lang/String;)J
    .locals 4

    .line 348
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u539f\u59cb\u5305\u5927\u5c0f\u4e3a\uff1a"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2, p3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ymn"

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 349
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object v0

    invoke-virtual {v0, p1, p4, p5}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->syncDownloadStatus(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    .line 350
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object p4

    invoke-virtual {p4, p1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getDownloadFileInfo(Ljava/lang/String;)Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 353
    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    const-string p5, "\u9700\u8981\u4e0b\u8f7d\u7684\u5927\u5c0f\u4e3a\uff1a"

    invoke-virtual {p4, p5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getSavedSize()J

    move-result-wide v2

    sub-long v2, p2, v2

    invoke-virtual {p4, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p4

    invoke-static {v1, p4}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 354
    invoke-virtual {p1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getSavedSize()J

    move-result-wide p4

    sub-long/2addr p2, p4

    :cond_0
    return-wide p2
.end method

.method public getFileRange(Ljava/io/File;)Ljava/lang/String;
    .locals 4

    .line 297
    sget-object v0, Ljava/util/Locale;->CHINESE:Ljava/util/Locale;

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    invoke-virtual {p1}, Ljava/io/File;->length()J

    move-result-wide v2

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    const/4 v2, 0x0

    aput-object p1, v1, v2

    const-string p1, "bytes=%d-"

    invoke-static {v0, p1, v1}, Ljava/lang/String;->format(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public getPluginPath(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 157
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object p1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "plugin"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 158
    new-instance p2, Ljava/io/File;

    invoke-direct {p2, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 159
    invoke-virtual {p2}, Ljava/io/File;->exists()Z

    move-result v0

    if-nez v0, :cond_0

    .line 160
    invoke-virtual {p2}, Ljava/io/File;->mkdir()Z

    :cond_0
    return-object p1
.end method

.method public getWriteablePath()Ljava/lang/String;
    .locals 1

    .line 73
    iget-object v0, p0, Lcom/ymnsdk/replugin/util/DownloadUtils;->mWriteablePath:Ljava/lang/String;

    return-object v0
.end method

.method public hasOldApk(Ljava/lang/String;)Z
    .locals 4

    .line 399
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "old.apk"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/util/DownloadUtils;->joinPluginPath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 400
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 401
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v1

    const/4 v2, 0x0

    if-nez v1, :cond_0

    return v2

    .line 402
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalDownedPlugin()Ljava/util/Map;

    move-result-object v1

    .line 403
    invoke-interface {v1, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 405
    invoke-interface {v1, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_md5()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, v0, p1}, Lcom/ymnsdk/replugin/util/DownloadUtils;->checkMd5(Ljava/lang/String;Ljava/lang/String;)Z

    move-result p1

    return p1

    :cond_1
    return v2
.end method

.method public isExperiencedDownload(Ljava/lang/String;)Z
    .locals 2

    .line 386
    sget-object v0, Lcom/ymnsdk/replugin/util/DownloadUtils;->downloadRecord:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 388
    sget-object v0, Lcom/ymnsdk/replugin/util/DownloadUtils;->downloadRecord:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 390
    sget-object v0, Lcom/ymnsdk/replugin/util/DownloadUtils;->downloadRecord:Ljava/util/Map;

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-interface {v0, p1, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const/4 p1, 0x1

    return p1

    :cond_0
    return v1
.end method

.method public joinPluginPath(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 166
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/ymnsdk/replugin/util/DownloadUtils;->mWriteablePath:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "plugin"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 167
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/util/DownloadUtils;->checkDirectories(Ljava/lang/String;)V

    .line 169
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v0, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public mergeApk(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/MergeCallback;)V
    .locals 14

    move-object v11, p0

    move-object/from16 v9, p2

    .line 173
    invoke-static {}, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->getInstance()Lcom/ymnsdk/replugin/trace/PluginTraceManager;

    .line 174
    sget-boolean v0, Lcom/ymnsdk/replugin/util/DownloadUtils;->mergeing:Z

    if-eqz v0, :cond_0

    const-string v0, "\u5408\u5e76\u4e2d"

    move-object/from16 v7, p5

    .line 176
    invoke-interface {v7, v0}, Lcom/ymnsdk/replugin/listener/MergeCallback;->mergeFail(Ljava/lang/String;)V

    return-void

    :cond_0
    move-object/from16 v7, p5

    const/4 v0, 0x1

    .line 179
    sput-boolean v0, Lcom/ymnsdk/replugin/util/DownloadUtils;->mergeing:Z

    .line 180
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "old.apk"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/util/DownloadUtils;->joinPluginPath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 181
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "new.apk"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/util/DownloadUtils;->joinPluginPath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 182
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "workspace"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/util/DownloadUtils;->joinPluginPath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 183
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, v5}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 184
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {v5}, Lcom/ymnsdk/replugin/util/ResourceUtil;->deleteDirectory(Ljava/lang/String;)Z

    .line 187
    :cond_1
    new-instance v12, Ljava/lang/Thread;

    new-instance v13, Lcom/ymnsdk/replugin/util/DownloadUtils$1;

    move-object v0, v13

    move-object v1, p0

    move-object/from16 v3, p3

    move-object/from16 v6, p4

    move-object/from16 v7, p5

    move-object v8, p1

    move-object/from16 v9, p2

    move-object/from16 v10, p3

    invoke-direct/range {v0 .. v10}, Lcom/ymnsdk/replugin/util/DownloadUtils$1;-><init>(Lcom/ymnsdk/replugin/util/DownloadUtils;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/MergeCallback;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {v12, v13}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 205
    invoke-virtual {v12}, Ljava/lang/Thread;->start()V

    return-void
.end method

.method public moveFile(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 5

    .line 117
    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    return v1

    .line 118
    :cond_0
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 119
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, p2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    const/4 v3, 0x0

    .line 121
    :try_start_0
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v4

    if-nez v4, :cond_1

    return v3

    .line 124
    :cond_1
    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v4

    if-eqz v4, :cond_2

    .line 125
    invoke-virtual {v2}, Ljava/io/File;->delete()Z

    .line 127
    :cond_2
    invoke-virtual {v2}, Ljava/io/File;->getParent()Ljava/lang/String;

    move-result-object v2

    .line 128
    invoke-virtual {p0, v2}, Lcom/ymnsdk/replugin/util/DownloadUtils;->checkDirectories(Ljava/lang/String;)V

    .line 129
    invoke-virtual {p0, p1, p2}, Lcom/ymnsdk/replugin/util/DownloadUtils;->copy(Ljava/lang/String;Ljava/lang/String;)V

    .line 130
    invoke-virtual {v0}, Ljava/io/File;->delete()Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v1

    :catch_0
    move-exception p1

    .line 133
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return v3
.end method

.method public postDownloadErrorEvent(Landroid/app/Activity;Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;)V
    .locals 3

    .line 362
    invoke-virtual {p2}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getRoadmap()Ljava/util/ArrayList;

    move-result-object p2

    .line 363
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    if-eqz p2, :cond_2

    .line 364
    invoke-virtual {p2}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-nez v1, :cond_0

    goto :goto_1

    :cond_0
    const/4 v1, 0x0

    .line 365
    invoke-virtual {p2, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    const/4 v1, 0x1

    .line 366
    :goto_0
    invoke-virtual {p2}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-ge v1, v2, :cond_2

    .line 368
    rem-int/lit8 v2, v1, 0x64

    if-nez v2, :cond_1

    .line 370
    invoke-virtual {p0, p1, v0}, Lcom/ymnsdk/replugin/util/DownloadUtils;->postOneDownloadErrorEvent(Landroid/app/Activity;Ljava/util/ArrayList;)V

    .line 371
    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    .line 373
    :cond_1
    invoke-virtual {p2, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_2
    :goto_1
    return-void
.end method

.method public postOneDownloadErrorEvent(Landroid/app/Activity;Ljava/util/ArrayList;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/app/Activity;",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Integer;",
            ">;)V"
        }
    .end annotation

    .line 379
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, p2}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    .line 380
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/other/DownloadErrorCodeEvent;

    invoke-direct {v1, p1, p2}, Lcom/ymnsdk/replugin/event/other/DownloadErrorCodeEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    return-void
.end method

.method public removeFile(Ljava/lang/String;)Z
    .locals 1

    .line 98
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 99
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 100
    invoke-virtual {v0}, Ljava/io/File;->delete()Z

    .line 102
    :cond_0
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p1

    xor-int/lit8 p1, p1, 0x1

    return p1
.end method

.method public removeRecursive(Ljava/lang/String;)V
    .locals 7

    .line 106
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 107
    invoke-virtual {v0}, Ljava/io/File;->isDirectory()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 108
    invoke-virtual {v0}, Ljava/io/File;->list()[Ljava/lang/String;

    move-result-object v1

    .line 109
    array-length v2, v1

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v2, :cond_0

    aget-object v4, v1, v3

    .line 110
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v6, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p0, v4}, Lcom/ymnsdk/replugin/util/DownloadUtils;->removeRecursive(Ljava/lang/String;)V

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 113
    :cond_0
    invoke-virtual {v0}, Ljava/io/File;->delete()Z

    return-void
.end method

.method public renameFile(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 1

    .line 85
    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, 0x1

    return p1

    .line 86
    :cond_0
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 87
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p1

    if-eqz p1, :cond_2

    .line 88
    new-instance p1, Ljava/io/File;

    invoke-direct {p1, p2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 89
    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result p2

    if-eqz p2, :cond_1

    .line 90
    invoke-virtual {p1}, Ljava/io/File;->delete()Z

    .line 92
    :cond_1
    invoke-virtual {v0, p1}, Ljava/io/File;->renameTo(Ljava/io/File;)Z

    move-result p1

    return p1

    :cond_2
    const/4 p1, 0x0

    return p1
.end method

.method public setWriteablePath(Ljava/lang/String;)V
    .locals 1

    .line 61
    :try_start_0
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 62
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p1

    if-nez p1, :cond_0

    .line 63
    invoke-virtual {v0}, Ljava/io/File;->mkdirs()Z

    .line 65
    :cond_0
    invoke-virtual {v0}, Ljava/io/File;->getCanonicalPath()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/ymnsdk/replugin/util/DownloadUtils;->mWriteablePath:Ljava/lang/String;
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 68
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V

    :goto_0
    return-void
.end method
