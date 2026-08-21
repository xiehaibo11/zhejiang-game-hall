.class Lcom/ymnsdk/replugin/feature/PluginManager$3$1;
.super Ljava/lang/Object;
.source "PluginManager.java"

# interfaces
.implements Lcom/ymnsdk/replugin/listener/StartPluginStatusListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/feature/PluginManager$3;->onInstalled()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/ymnsdk/replugin/feature/PluginManager$3;


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/feature/PluginManager$3;)V
    .locals 0

    .line 331
    iput-object p1, p0, Lcom/ymnsdk/replugin/feature/PluginManager$3$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginManager$3;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onFailure(Ljava/lang/String;)V
    .locals 7

    .line 340
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/allowstartplugin/AllowStartPluginResponseEvent;

    iget-object v2, p0, Lcom/ymnsdk/replugin/feature/PluginManager$3$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginManager$3;

    iget-object v2, v2, Lcom/ymnsdk/replugin/feature/PluginManager$3;->this$0:Lcom/ymnsdk/replugin/feature/PluginManager;

    iget-object v2, v2, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    iget-object v3, p0, Lcom/ymnsdk/replugin/feature/PluginManager$3$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginManager$3;

    iget-object v3, v3, Lcom/ymnsdk/replugin/feature/PluginManager$3;->val$pluginId:Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "\u63d2\u4ef6\u6253\u5f00\u5931\u8d25:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/16 v6, 0x415

    invoke-direct {v1, v2, v3, v6, v4}, Lcom/ymnsdk/replugin/event/allowstartplugin/AllowStartPluginResponseEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;ILjava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 341
    iget-object v0, p0, Lcom/ymnsdk/replugin/feature/PluginManager$3$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginManager$3;

    iget-object v0, v0, Lcom/ymnsdk/replugin/feature/PluginManager$3;->val$listener:Lcom/ymnsdk/replugin/listener/AllowStartPluginListener;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/ymnsdk/replugin/listener/AllowStartPluginListener;->openFail(Ljava/lang/String;)V

    return-void
.end method

.method public onSuccess()V
    .locals 6

    .line 334
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/allowstartplugin/AllowStartPluginResponseEvent;

    iget-object v2, p0, Lcom/ymnsdk/replugin/feature/PluginManager$3$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginManager$3;

    iget-object v2, v2, Lcom/ymnsdk/replugin/feature/PluginManager$3;->this$0:Lcom/ymnsdk/replugin/feature/PluginManager;

    iget-object v2, v2, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    iget-object v3, p0, Lcom/ymnsdk/replugin/feature/PluginManager$3$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginManager$3;

    iget-object v3, v3, Lcom/ymnsdk/replugin/feature/PluginManager$3;->val$pluginId:Ljava/lang/String;

    const/16 v4, 0x414

    const-string v5, "\u63d2\u4ef6\u6253\u5f00\u6210\u529f"

    invoke-direct {v1, v2, v3, v4, v5}, Lcom/ymnsdk/replugin/event/allowstartplugin/AllowStartPluginResponseEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;ILjava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 335
    iget-object v0, p0, Lcom/ymnsdk/replugin/feature/PluginManager$3$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginManager$3;

    iget-object v0, v0, Lcom/ymnsdk/replugin/feature/PluginManager$3;->val$listener:Lcom/ymnsdk/replugin/listener/AllowStartPluginListener;

    invoke-interface {v0}, Lcom/ymnsdk/replugin/listener/AllowStartPluginListener;->openSuccess()V

    return-void
.end method
