.class Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4$1;
.super Ljava/lang/Object;
.source "SilentDownloadApi.java"

# interfaces
.implements Lcom/ymnsdk/replugin/listener/MergeCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->downloadSuccess(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;

.field final synthetic val$mergeStartTime:J


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;J)V
    .locals 0

    .line 307
    iput-object p1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4$1;->this$1:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;

    iput-wide p2, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4$1;->val$mergeStartTime:J

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public mergeFail(Ljava/lang/String;)V
    .locals 12

    .line 316
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v9, Lcom/ymnsdk/replugin/event/installplugin/MergePatchResponseEvent;

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4$1;->this$1:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;

    iget-object v2, v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$activity:Landroid/app/Activity;

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4$1;->this$1:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;

    iget-object v4, v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "patch\u5408\u5305\u5931\u8d25|"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    iget-wide v10, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4$1;->val$mergeStartTime:J

    sub-long/2addr v7, v10

    const/16 v3, 0x41b

    const/4 v5, -0x1

    move-object v1, v9

    invoke-direct/range {v1 .. v8}, Lcom/ymnsdk/replugin/event/installplugin/MergePatchResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;ILjava/lang/String;J)V

    invoke-virtual {v0, v9}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 317
    iget-object p1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4$1;->this$1:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;

    iget-object p1, p1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4$1;->this$1:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;

    iget-object v0, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$activity:Landroid/app/Activity;

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4$1;->this$1:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;

    iget v1, v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$currentNum:I

    const/4 v2, 0x1

    add-int/2addr v1, v2

    invoke-virtual {p1, v0, v2, v1}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->downloadOnePlugin(Landroid/app/Activity;ZI)V

    return-void
.end method

.method public mergeSuccess()V
    .locals 10

    .line 310
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v9, Lcom/ymnsdk/replugin/event/installplugin/MergePatchResponseEvent;

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4$1;->this$1:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;

    iget-object v2, v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$activity:Landroid/app/Activity;

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4$1;->this$1:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;

    iget-object v4, v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    iget-wide v7, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4$1;->val$mergeStartTime:J

    sub-long v7, v5, v7

    const/16 v3, 0x41a

    const/4 v5, 0x0

    const-string v6, "\u5408\u5305\u6210\u529f"

    move-object v1, v9

    invoke-direct/range {v1 .. v8}, Lcom/ymnsdk/replugin/event/installplugin/MergePatchResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;ILjava/lang/String;J)V

    invoke-virtual {v0, v9}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 311
    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4$1;->this$1:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;

    iget-object v0, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4$1;->this$1:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;

    iget-object v1, v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    iget-object v2, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4$1;->this$1:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;

    iget-object v2, v2, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    iget-object v3, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4$1;->this$1:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;

    iget v3, v3, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$downloadType:I

    iget-object v4, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4$1;->this$1:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;

    iget v4, v4, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$currentNum:I

    add-int/lit8 v4, v4, 0x1

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->saveDownload(Ljava/lang/String;Lcom/ymnsdk/replugin/entity/PluginInfo;II)V

    return-void
.end method
