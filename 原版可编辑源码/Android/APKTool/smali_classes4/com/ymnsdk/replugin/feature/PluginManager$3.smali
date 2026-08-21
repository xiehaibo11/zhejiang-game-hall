.class Lcom/ymnsdk/replugin/feature/PluginManager$3;
.super Ljava/lang/Object;
.source "PluginManager.java"

# interfaces
.implements Lcom/ymnsdk/replugin/listener/IsInstallPluginStatusListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/feature/PluginManager;->allowStartPlugin(Ljava/lang/String;Ljava/lang/String;ZLcom/ymnsdk/replugin/listener/AllowStartPluginListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ymnsdk/replugin/feature/PluginManager;

.field final synthetic val$listener:Lcom/ymnsdk/replugin/listener/AllowStartPluginListener;

.field final synthetic val$loginJsonStr:Ljava/lang/String;

.field final synthetic val$pluginId:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/feature/PluginManager;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/AllowStartPluginListener;)V
    .locals 0

    .line 322
    iput-object p1, p0, Lcom/ymnsdk/replugin/feature/PluginManager$3;->this$0:Lcom/ymnsdk/replugin/feature/PluginManager;

    iput-object p2, p0, Lcom/ymnsdk/replugin/feature/PluginManager$3;->val$pluginId:Ljava/lang/String;

    iput-object p3, p0, Lcom/ymnsdk/replugin/feature/PluginManager$3;->val$loginJsonStr:Ljava/lang/String;

    iput-object p4, p0, Lcom/ymnsdk/replugin/feature/PluginManager$3;->val$listener:Lcom/ymnsdk/replugin/listener/AllowStartPluginListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onInstalled()V
    .locals 5

    .line 325
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v0

    iget-object v1, p0, Lcom/ymnsdk/replugin/feature/PluginManager$3;->val$pluginId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/util/DownloadUtils;->isExperiencedDownload(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/ymnsdk/replugin/feature/PluginManager$3;->val$pluginId:Ljava/lang/String;

    invoke-static {v0}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getIsShowStartDialog(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 327
    invoke-static {}, Lcom/ymnsdk/replugin/util/DialogUtils;->getInstance()Lcom/ymnsdk/replugin/util/DialogUtils;

    move-result-object v0

    iget-object v1, p0, Lcom/ymnsdk/replugin/feature/PluginManager$3;->this$0:Lcom/ymnsdk/replugin/feature/PluginManager;

    iget-object v1, v1, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    iget-object v2, p0, Lcom/ymnsdk/replugin/feature/PluginManager$3;->val$pluginId:Ljava/lang/String;

    iget-object v3, p0, Lcom/ymnsdk/replugin/feature/PluginManager$3;->val$loginJsonStr:Ljava/lang/String;

    iget-object v4, p0, Lcom/ymnsdk/replugin/feature/PluginManager$3;->val$listener:Lcom/ymnsdk/replugin/listener/AllowStartPluginListener;

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/ymnsdk/replugin/util/DialogUtils;->showStartDialog(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/AllowStartPluginListener;)V

    goto :goto_0

    .line 331
    :cond_0
    iget-object v0, p0, Lcom/ymnsdk/replugin/feature/PluginManager$3;->this$0:Lcom/ymnsdk/replugin/feature/PluginManager;

    iget-object v1, p0, Lcom/ymnsdk/replugin/feature/PluginManager$3;->val$pluginId:Ljava/lang/String;

    iget-object v2, p0, Lcom/ymnsdk/replugin/feature/PluginManager$3;->val$loginJsonStr:Ljava/lang/String;

    new-instance v3, Lcom/ymnsdk/replugin/feature/PluginManager$3$1;

    invoke-direct {v3, p0}, Lcom/ymnsdk/replugin/feature/PluginManager$3$1;-><init>(Lcom/ymnsdk/replugin/feature/PluginManager$3;)V

    invoke-virtual {v0, v1, v2, v3}, Lcom/ymnsdk/replugin/feature/PluginManager;->startApk(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/StartPluginStatusListener;)V

    :goto_0
    return-void
.end method

.method public onNotInstall()V
    .locals 8

    .line 349
    invoke-static {}, Lcom/ymnsdk/replugin/util/DialogUtils;->getInstance()Lcom/ymnsdk/replugin/util/DialogUtils;

    move-result-object v0

    iget-object v1, p0, Lcom/ymnsdk/replugin/feature/PluginManager$3;->this$0:Lcom/ymnsdk/replugin/feature/PluginManager;

    iget-object v1, v1, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    iget-object v2, p0, Lcom/ymnsdk/replugin/feature/PluginManager$3;->val$pluginId:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/ymnsdk/replugin/util/DialogUtils;->showErrorDialog(Landroid/app/Activity;Ljava/lang/String;)V

    .line 350
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/allowstartplugin/AllowStartPluginResponseEvent;

    iget-object v2, p0, Lcom/ymnsdk/replugin/feature/PluginManager$3;->this$0:Lcom/ymnsdk/replugin/feature/PluginManager;

    iget-object v2, v2, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    iget-object v3, p0, Lcom/ymnsdk/replugin/feature/PluginManager$3;->val$pluginId:Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "\u6e38\u620f\u5b89\u88c5\u63d2\u4ef6\u5931\u8d25,\u539f\u56e0\u662f:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/ymnsdk/replugin/entity/PluginFailInfo;->getInstance()Lcom/ymnsdk/replugin/entity/PluginFailInfo;

    move-result-object v6

    iget-object v7, p0, Lcom/ymnsdk/replugin/feature/PluginManager$3;->val$pluginId:Ljava/lang/String;

    invoke-virtual {v6, v7}, Lcom/ymnsdk/replugin/entity/PluginFailInfo;->getPluginFailInfo(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/16 v6, 0x415

    invoke-direct {v1, v2, v3, v6, v4}, Lcom/ymnsdk/replugin/event/allowstartplugin/AllowStartPluginResponseEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;ILjava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 351
    iget-object v0, p0, Lcom/ymnsdk/replugin/feature/PluginManager$3;->val$listener:Lcom/ymnsdk/replugin/listener/AllowStartPluginListener;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/ymnsdk/replugin/entity/PluginFailInfo;->getInstance()Lcom/ymnsdk/replugin/entity/PluginFailInfo;

    move-result-object v2

    iget-object v3, p0, Lcom/ymnsdk/replugin/feature/PluginManager$3;->val$pluginId:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/ymnsdk/replugin/entity/PluginFailInfo;->getPluginFailInfo(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/ymnsdk/replugin/listener/AllowStartPluginListener;->openFail(Ljava/lang/String;)V

    return-void
.end method
