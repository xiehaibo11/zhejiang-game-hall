.class Lcom/ymnsdk/replugin/util/DialogUtils$2$2;
.super Ljava/lang/Object;
.source "DialogUtils.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/util/DialogUtils$2;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/ymnsdk/replugin/util/DialogUtils$2;


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/util/DialogUtils$2;)V
    .locals 0

    .line 94
    iput-object p1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$2;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 2

    .line 97
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object p1

    new-instance p2, Lcom/ymnsdk/replugin/event/ui/UpdateCancelEvent;

    iget-object v0, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$2;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$2;

    iget-object v0, v0, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$activity:Landroid/app/Activity;

    iget-object v1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$2;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$2;

    iget-object v1, v1, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$pluginId:Ljava/lang/String;

    invoke-direct {p2, v0, v1}, Lcom/ymnsdk/replugin/event/ui/UpdateCancelEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;)V

    invoke-virtual {p1, p2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 98
    new-instance p1, Lcom/ymnsdk/replugin/feature/PluginManager;

    iget-object p2, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$2;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$2;

    iget-object p2, p2, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$activity:Landroid/app/Activity;

    invoke-direct {p1, p2}, Lcom/ymnsdk/replugin/feature/PluginManager;-><init>(Landroid/app/Activity;)V

    .line 99
    iget-object p2, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$2;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$2;

    iget-object p2, p2, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$pluginId:Ljava/lang/String;

    new-instance v0, Lcom/ymnsdk/replugin/util/DialogUtils$2$2$1;

    invoke-direct {v0, p0, p1}, Lcom/ymnsdk/replugin/util/DialogUtils$2$2$1;-><init>(Lcom/ymnsdk/replugin/util/DialogUtils$2$2;Lcom/ymnsdk/replugin/feature/PluginManager;)V

    invoke-virtual {p1, p2, v0}, Lcom/ymnsdk/replugin/feature/PluginManager;->isInstallPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/IsInstallPluginStatusListener;)V

    return-void
.end method
