.class Lcom/ymnsdk/replugin/feature/PluginManager$2;
.super Ljava/lang/Object;
.source "PluginManager.java"

# interfaces
.implements Lcom/ymnsdk/replugin/listener/QueryPluginStatusListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/feature/PluginManager;->openPlugin(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/OpenListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ymnsdk/replugin/feature/PluginManager;

.field final synthetic val$listener:Lcom/ymnsdk/replugin/listener/OpenListener;

.field final synthetic val$loginJsonStr:Ljava/lang/String;

.field final synthetic val$pluginId:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/feature/PluginManager;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/OpenListener;Ljava/lang/String;)V
    .locals 0

    .line 242
    iput-object p1, p0, Lcom/ymnsdk/replugin/feature/PluginManager$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginManager;

    iput-object p2, p0, Lcom/ymnsdk/replugin/feature/PluginManager$2;->val$pluginId:Ljava/lang/String;

    iput-object p3, p0, Lcom/ymnsdk/replugin/feature/PluginManager$2;->val$listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    iput-object p4, p0, Lcom/ymnsdk/replugin/feature/PluginManager$2;->val$loginJsonStr:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onFailure(ILjava/lang/String;)V
    .locals 8

    .line 307
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/openplugin/OpenPluginResponseEvent;

    iget-object v2, p0, Lcom/ymnsdk/replugin/feature/PluginManager$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginManager;

    iget-object v2, v2, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    iget-object v3, p0, Lcom/ymnsdk/replugin/feature/PluginManager$2;->val$pluginId:Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "\u83b7\u53d6\u63d2\u4ef6\u72b6\u6001\u5931\u8d25:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, "|"

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/16 v7, 0x415

    invoke-direct {v1, v2, v3, v7, v4}, Lcom/ymnsdk/replugin/event/openplugin/OpenPluginResponseEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;ILjava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 308
    iget-object v0, p0, Lcom/ymnsdk/replugin/feature/PluginManager$2;->val$listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/ymnsdk/replugin/listener/OpenListener;->openFail(Ljava/lang/String;)V

    return-void
.end method

.method public onSuccessAvailable(Ljava/lang/String;)V
    .locals 14

    .line 252
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p1, "plugin_current_version"

    .line 253
    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v1, "plugin_current_download_version"

    .line 254
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    const-string v1, "plugin_last_version"

    .line 255
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "update_type"

    .line 256
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v12

    const-string v0, "ymn"

    .line 257
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\u5f53\u524d\u7248\u672c---"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "\u6700\u65b0\u7248\u672c----"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 258
    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 261
    iget-object p1, p0, Lcom/ymnsdk/replugin/feature/PluginManager$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginManager;

    iget-object v0, p0, Lcom/ymnsdk/replugin/feature/PluginManager$2;->val$pluginId:Ljava/lang/String;

    iget-object v1, p0, Lcom/ymnsdk/replugin/feature/PluginManager$2;->val$loginJsonStr:Ljava/lang/String;

    new-instance v2, Lcom/ymnsdk/replugin/feature/PluginManager$2$1;

    invoke-direct {v2, p0}, Lcom/ymnsdk/replugin/feature/PluginManager$2$1;-><init>(Lcom/ymnsdk/replugin/feature/PluginManager$2;)V

    invoke-virtual {p1, v0, v1, v2}, Lcom/ymnsdk/replugin/feature/PluginManager;->startApk(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/StartPluginStatusListener;)V

    goto :goto_0

    .line 275
    :cond_0
    iget-object p1, p0, Lcom/ymnsdk/replugin/feature/PluginManager$2;->val$pluginId:Ljava/lang/String;

    invoke-static {p1}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getIsShowUpdateDialog(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 277
    invoke-static {}, Lcom/ymnsdk/replugin/util/DialogUtils;->getInstance()Lcom/ymnsdk/replugin/util/DialogUtils;

    move-result-object v2

    iget-object p1, p0, Lcom/ymnsdk/replugin/feature/PluginManager$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginManager;

    iget-object v3, p1, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    iget-object v4, p0, Lcom/ymnsdk/replugin/feature/PluginManager$2;->val$pluginId:Ljava/lang/String;

    iget-object v5, p0, Lcom/ymnsdk/replugin/feature/PluginManager$2;->val$loginJsonStr:Ljava/lang/String;

    iget-object v8, p0, Lcom/ymnsdk/replugin/feature/PluginManager$2;->val$listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    move v6, v12

    invoke-virtual/range {v2 .. v8}, Lcom/ymnsdk/replugin/util/DialogUtils;->showUpdateDialog(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Lcom/ymnsdk/replugin/listener/OpenListener;)V

    goto :goto_0

    .line 280
    :cond_1
    iget-object p1, p0, Lcom/ymnsdk/replugin/feature/PluginManager$2;->val$pluginId:Ljava/lang/String;

    invoke-static {p1}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getPluginMode(Ljava/lang/String;)I

    move-result p1

    const/4 v0, 0x1

    if-eq p1, v0, :cond_3

    const/4 v0, 0x2

    if-eq p1, v0, :cond_2

    goto :goto_0

    .line 287
    :cond_2
    new-instance v8, Lcom/ymnsdk/replugin/mode/PluginModeTwo;

    invoke-direct {v8}, Lcom/ymnsdk/replugin/mode/PluginModeTwo;-><init>()V

    .line 288
    iget-object p1, p0, Lcom/ymnsdk/replugin/feature/PluginManager$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginManager;

    iget-object v9, p1, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    iget-object v10, p0, Lcom/ymnsdk/replugin/feature/PluginManager$2;->val$pluginId:Ljava/lang/String;

    iget-object v11, p0, Lcom/ymnsdk/replugin/feature/PluginManager$2;->val$loginJsonStr:Ljava/lang/String;

    iget-object v13, p0, Lcom/ymnsdk/replugin/feature/PluginManager$2;->val$listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    invoke-virtual/range {v8 .. v13}, Lcom/ymnsdk/replugin/mode/PluginModeTwo;->installPlugin(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;ILcom/ymnsdk/replugin/listener/OpenListener;)V

    goto :goto_0

    .line 282
    :cond_3
    new-instance p1, Lcom/ymnsdk/replugin/mode/PluginModeOne;

    invoke-direct {p1}, Lcom/ymnsdk/replugin/mode/PluginModeOne;-><init>()V

    .line 283
    iget-object v0, p0, Lcom/ymnsdk/replugin/feature/PluginManager$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginManager;

    iget-object v0, v0, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    iget-object v1, p0, Lcom/ymnsdk/replugin/feature/PluginManager$2;->val$pluginId:Ljava/lang/String;

    iget-object v2, p0, Lcom/ymnsdk/replugin/feature/PluginManager$2;->val$listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    invoke-virtual {p1, v0, v1, v2}, Lcom/ymnsdk/replugin/mode/PluginModeOne;->installPlugin(Landroid/app/Activity;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/OpenListener;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 300
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public onSuccessUnAvailable(Ljava/lang/String;)V
    .locals 5

    .line 245
    invoke-static {}, Lcom/ymnsdk/replugin/util/DialogUtils;->getInstance()Lcom/ymnsdk/replugin/util/DialogUtils;

    move-result-object v0

    iget-object v1, p0, Lcom/ymnsdk/replugin/feature/PluginManager$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginManager;

    iget-object v1, v1, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    iget-object v2, p0, Lcom/ymnsdk/replugin/feature/PluginManager$2;->val$pluginId:Ljava/lang/String;

    iget-object v3, p0, Lcom/ymnsdk/replugin/feature/PluginManager$2;->val$listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    invoke-virtual {v0, v1, v2, p1, v3}, Lcom/ymnsdk/replugin/util/DialogUtils;->showMaintainDialog(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/OpenListener;)V

    .line 246
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object p1

    new-instance v0, Lcom/ymnsdk/replugin/event/openplugin/OpenPluginResponseEvent;

    iget-object v1, p0, Lcom/ymnsdk/replugin/feature/PluginManager$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginManager;

    iget-object v1, v1, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    iget-object v2, p0, Lcom/ymnsdk/replugin/feature/PluginManager$2;->val$pluginId:Ljava/lang/String;

    const/16 v3, 0x415

    const-string v4, "\u63d2\u4ef6\u7ef4\u62a4\u4e2d"

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/ymnsdk/replugin/event/openplugin/OpenPluginResponseEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;ILjava/lang/String;)V

    invoke-virtual {p1, v0}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    return-void
.end method
