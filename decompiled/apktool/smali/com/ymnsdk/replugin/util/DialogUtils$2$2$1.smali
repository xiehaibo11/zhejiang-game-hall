.class Lcom/ymnsdk/replugin/util/DialogUtils$2$2$1;
.super Ljava/lang/Object;
.source "DialogUtils.java"

# interfaces
.implements Lcom/ymnsdk/replugin/listener/IsInstallPluginStatusListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/util/DialogUtils$2$2;->onClick(Landroid/content/DialogInterface;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$2:Lcom/ymnsdk/replugin/util/DialogUtils$2$2;

.field final synthetic val$pluginManager:Lcom/ymnsdk/replugin/feature/PluginManager;


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/util/DialogUtils$2$2;Lcom/ymnsdk/replugin/feature/PluginManager;)V
    .locals 0

    .line 99
    iput-object p1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$2$1;->this$2:Lcom/ymnsdk/replugin/util/DialogUtils$2$2;

    iput-object p2, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$2$1;->val$pluginManager:Lcom/ymnsdk/replugin/feature/PluginManager;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onInstalled()V
    .locals 6

    .line 102
    iget-object v0, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$2$1;->this$2:Lcom/ymnsdk/replugin/util/DialogUtils$2$2;

    iget-object v0, v0, Lcom/ymnsdk/replugin/util/DialogUtils$2$2;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$2;

    iget v0, v0, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$updateType:I

    if-nez v0, :cond_0

    .line 103
    iget-object v0, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$2$1;->val$pluginManager:Lcom/ymnsdk/replugin/feature/PluginManager;

    iget-object v1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$2$1;->this$2:Lcom/ymnsdk/replugin/util/DialogUtils$2$2;

    iget-object v1, v1, Lcom/ymnsdk/replugin/util/DialogUtils$2$2;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$2;

    iget-object v1, v1, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$pluginId:Ljava/lang/String;

    iget-object v2, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$2$1;->this$2:Lcom/ymnsdk/replugin/util/DialogUtils$2$2;

    iget-object v2, v2, Lcom/ymnsdk/replugin/util/DialogUtils$2$2;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$2;

    iget-object v2, v2, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$loginJsonStr:Ljava/lang/String;

    new-instance v3, Lcom/ymnsdk/replugin/util/DialogUtils$2$2$1$1;

    invoke-direct {v3, p0}, Lcom/ymnsdk/replugin/util/DialogUtils$2$2$1$1;-><init>(Lcom/ymnsdk/replugin/util/DialogUtils$2$2$1;)V

    invoke-virtual {v0, v1, v2, v3}, Lcom/ymnsdk/replugin/feature/PluginManager;->startApk(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/StartPluginStatusListener;)V

    goto :goto_0

    .line 117
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/openplugin/OpenPluginResponseEvent;

    iget-object v2, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$2$1;->this$2:Lcom/ymnsdk/replugin/util/DialogUtils$2$2;

    iget-object v2, v2, Lcom/ymnsdk/replugin/util/DialogUtils$2$2;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$2;

    iget-object v2, v2, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$activity:Landroid/app/Activity;

    iget-object v3, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$2$1;->this$2:Lcom/ymnsdk/replugin/util/DialogUtils$2$2;

    iget-object v3, v3, Lcom/ymnsdk/replugin/util/DialogUtils$2$2;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$2;

    iget-object v3, v3, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$pluginId:Ljava/lang/String;

    const/16 v4, 0x415

    const-string v5, "\u63d2\u4ef6\u6253\u5f00\u5931\u8d25:\u7528\u6237\u53d6\u6d88\u66f4\u65b0"

    invoke-direct {v1, v2, v3, v4, v5}, Lcom/ymnsdk/replugin/event/openplugin/OpenPluginResponseEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;ILjava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 118
    iget-object v0, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$2$1;->this$2:Lcom/ymnsdk/replugin/util/DialogUtils$2$2;

    iget-object v0, v0, Lcom/ymnsdk/replugin/util/DialogUtils$2$2;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$2;

    iget-object v0, v0, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    invoke-interface {v0, v5}, Lcom/ymnsdk/replugin/listener/OpenListener;->openFail(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public onNotInstall()V
    .locals 6

    .line 124
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/openplugin/OpenPluginResponseEvent;

    iget-object v2, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$2$1;->this$2:Lcom/ymnsdk/replugin/util/DialogUtils$2$2;

    iget-object v2, v2, Lcom/ymnsdk/replugin/util/DialogUtils$2$2;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$2;

    iget-object v2, v2, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$activity:Landroid/app/Activity;

    iget-object v3, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$2$1;->this$2:Lcom/ymnsdk/replugin/util/DialogUtils$2$2;

    iget-object v3, v3, Lcom/ymnsdk/replugin/util/DialogUtils$2$2;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$2;

    iget-object v3, v3, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$pluginId:Ljava/lang/String;

    const-string v4, "\u63d2\u4ef6\u6253\u5f00\u5931\u8d25:\u7528\u6237\u53d6\u6d88\u66f4\u65b0"

    const/16 v5, 0x415

    invoke-direct {v1, v2, v3, v5, v4}, Lcom/ymnsdk/replugin/event/openplugin/OpenPluginResponseEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;ILjava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 125
    iget-object v0, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$2$1;->this$2:Lcom/ymnsdk/replugin/util/DialogUtils$2$2;

    iget-object v0, v0, Lcom/ymnsdk/replugin/util/DialogUtils$2$2;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$2;

    iget-object v0, v0, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    invoke-interface {v0, v4}, Lcom/ymnsdk/replugin/listener/OpenListener;->openFail(Ljava/lang/String;)V

    return-void
.end method
