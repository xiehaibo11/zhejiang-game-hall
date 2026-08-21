.class Lcom/ymnsdk/replugin/mode/PluginModeTwo$1;
.super Ljava/lang/Object;
.source "PluginModeTwo.java"

# interfaces
.implements Lcom/ymnsdk/replugin/listener/StartPluginStatusListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/mode/PluginModeTwo;->installPlugin(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;ILcom/ymnsdk/replugin/listener/OpenListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ymnsdk/replugin/mode/PluginModeTwo;

.field final synthetic val$activity:Landroid/app/Activity;

.field final synthetic val$listener:Lcom/ymnsdk/replugin/listener/OpenListener;

.field final synthetic val$pluginId:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/mode/PluginModeTwo;Landroid/app/Activity;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/OpenListener;)V
    .locals 0

    .line 44
    iput-object p1, p0, Lcom/ymnsdk/replugin/mode/PluginModeTwo$1;->this$0:Lcom/ymnsdk/replugin/mode/PluginModeTwo;

    iput-object p2, p0, Lcom/ymnsdk/replugin/mode/PluginModeTwo$1;->val$activity:Landroid/app/Activity;

    iput-object p3, p0, Lcom/ymnsdk/replugin/mode/PluginModeTwo$1;->val$pluginId:Ljava/lang/String;

    iput-object p4, p0, Lcom/ymnsdk/replugin/mode/PluginModeTwo$1;->val$listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onFailure(Ljava/lang/String;)V
    .locals 5

    .line 53
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/openplugin/OpenPluginResponseEvent;

    iget-object v2, p0, Lcom/ymnsdk/replugin/mode/PluginModeTwo$1;->val$activity:Landroid/app/Activity;

    iget-object v3, p0, Lcom/ymnsdk/replugin/mode/PluginModeTwo$1;->val$pluginId:Ljava/lang/String;

    const/16 v4, 0x415

    invoke-direct {v1, v2, v3, v4, p1}, Lcom/ymnsdk/replugin/event/openplugin/OpenPluginResponseEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;ILjava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 54
    iget-object v0, p0, Lcom/ymnsdk/replugin/mode/PluginModeTwo$1;->val$listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    invoke-interface {v0, p1}, Lcom/ymnsdk/replugin/listener/OpenListener;->openFail(Ljava/lang/String;)V

    return-void
.end method

.method public onSuccess()V
    .locals 6

    .line 47
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/openplugin/OpenPluginResponseEvent;

    iget-object v2, p0, Lcom/ymnsdk/replugin/mode/PluginModeTwo$1;->val$activity:Landroid/app/Activity;

    iget-object v3, p0, Lcom/ymnsdk/replugin/mode/PluginModeTwo$1;->val$pluginId:Ljava/lang/String;

    const/16 v4, 0x414

    const-string v5, "\u6253\u5f00\u6210\u529f"

    invoke-direct {v1, v2, v3, v4, v5}, Lcom/ymnsdk/replugin/event/openplugin/OpenPluginResponseEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;ILjava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 48
    iget-object v0, p0, Lcom/ymnsdk/replugin/mode/PluginModeTwo$1;->val$listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    invoke-interface {v0}, Lcom/ymnsdk/replugin/listener/OpenListener;->openSuccess()V

    return-void
.end method
