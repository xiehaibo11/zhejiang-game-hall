.class Lcom/ymnsdk/replugin/util/DownloadUtils$1;
.super Ljava/lang/Object;
.source "DownloadUtils.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/util/DownloadUtils;->mergeApk(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/MergeCallback;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ymnsdk/replugin/util/DownloadUtils;

.field final synthetic val$activity:Landroid/app/Activity;

.field final synthetic val$apkMd5:Ljava/lang/String;

.field final synthetic val$apkPatchPath:Ljava/lang/String;

.field final synthetic val$callback:Lcom/ymnsdk/replugin/listener/MergeCallback;

.field final synthetic val$newApkPath:Ljava/lang/String;

.field final synthetic val$oldApkPath:Ljava/lang/String;

.field final synthetic val$patchPath:Ljava/lang/String;

.field final synthetic val$pluginId:Ljava/lang/String;

.field final synthetic val$workPath:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/util/DownloadUtils;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/MergeCallback;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 187
    iput-object p1, p0, Lcom/ymnsdk/replugin/util/DownloadUtils$1;->this$0:Lcom/ymnsdk/replugin/util/DownloadUtils;

    iput-object p2, p0, Lcom/ymnsdk/replugin/util/DownloadUtils$1;->val$oldApkPath:Ljava/lang/String;

    iput-object p3, p0, Lcom/ymnsdk/replugin/util/DownloadUtils$1;->val$apkPatchPath:Ljava/lang/String;

    iput-object p4, p0, Lcom/ymnsdk/replugin/util/DownloadUtils$1;->val$newApkPath:Ljava/lang/String;

    iput-object p5, p0, Lcom/ymnsdk/replugin/util/DownloadUtils$1;->val$workPath:Ljava/lang/String;

    iput-object p6, p0, Lcom/ymnsdk/replugin/util/DownloadUtils$1;->val$apkMd5:Ljava/lang/String;

    iput-object p7, p0, Lcom/ymnsdk/replugin/util/DownloadUtils$1;->val$callback:Lcom/ymnsdk/replugin/listener/MergeCallback;

    iput-object p8, p0, Lcom/ymnsdk/replugin/util/DownloadUtils$1;->val$activity:Landroid/app/Activity;

    iput-object p9, p0, Lcom/ymnsdk/replugin/util/DownloadUtils$1;->val$pluginId:Ljava/lang/String;

    iput-object p10, p0, Lcom/ymnsdk/replugin/util/DownloadUtils$1;->val$patchPath:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 12

    .line 191
    :try_start_0
    invoke-static {}, Lcom/ymnsdk/replugin/util/LogUtils;->isLogOpen()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    .line 193
    sget-boolean v1, Lcom/github/sisong/ApkPatch;->isDebug:Z

    invoke-static {v0, v1}, Lcom/github/sisong/ApkPatch;->initApkDiff(ZZ)V

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 195
    sget-boolean v1, Lcom/github/sisong/ApkPatch;->isDebug:Z

    invoke-static {v0, v1}, Lcom/github/sisong/ApkPatch;->initApkDiff(ZZ)V

    .line 197
    :goto_0
    iget-object v2, p0, Lcom/ymnsdk/replugin/util/DownloadUtils$1;->this$0:Lcom/ymnsdk/replugin/util/DownloadUtils;

    iget-object v3, p0, Lcom/ymnsdk/replugin/util/DownloadUtils$1;->val$oldApkPath:Ljava/lang/String;

    iget-object v4, p0, Lcom/ymnsdk/replugin/util/DownloadUtils$1;->val$apkPatchPath:Ljava/lang/String;

    iget-object v5, p0, Lcom/ymnsdk/replugin/util/DownloadUtils$1;->val$newApkPath:Ljava/lang/String;

    iget-object v6, p0, Lcom/ymnsdk/replugin/util/DownloadUtils$1;->val$workPath:Ljava/lang/String;

    iget-object v7, p0, Lcom/ymnsdk/replugin/util/DownloadUtils$1;->val$apkMd5:Ljava/lang/String;

    iget-object v8, p0, Lcom/ymnsdk/replugin/util/DownloadUtils$1;->val$callback:Lcom/ymnsdk/replugin/listener/MergeCallback;

    iget-object v9, p0, Lcom/ymnsdk/replugin/util/DownloadUtils$1;->val$activity:Landroid/app/Activity;

    iget-object v10, p0, Lcom/ymnsdk/replugin/util/DownloadUtils$1;->val$pluginId:Ljava/lang/String;

    iget-object v11, p0, Lcom/ymnsdk/replugin/util/DownloadUtils$1;->val$patchPath:Ljava/lang/String;

    invoke-static/range {v2 .. v11}, Lcom/ymnsdk/replugin/util/DownloadUtils;->access$100(Lcom/ymnsdk/replugin/util/DownloadUtils;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/MergeCallback;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 201
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    return-void
.end method
