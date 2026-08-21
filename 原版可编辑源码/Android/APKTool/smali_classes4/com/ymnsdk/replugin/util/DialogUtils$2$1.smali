.class Lcom/ymnsdk/replugin/util/DialogUtils$2$1;
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

    .line 78
    iput-object p1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$1;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 6

    .line 81
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object p1

    new-instance p2, Lcom/ymnsdk/replugin/event/ui/UpdateConfirmEvent;

    iget-object v0, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$1;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$2;

    iget-object v0, v0, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$activity:Landroid/app/Activity;

    iget-object v1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$1;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$2;

    iget-object v1, v1, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$pluginId:Ljava/lang/String;

    invoke-direct {p2, v0, v1}, Lcom/ymnsdk/replugin/event/ui/UpdateConfirmEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;)V

    invoke-virtual {p1, p2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 82
    iget-object p1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$1;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$2;

    iget-object p1, p1, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$pluginId:Ljava/lang/String;

    invoke-static {p1}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getPluginMode(Ljava/lang/String;)I

    move-result p1

    const/4 p2, 0x1

    if-eq p1, p2, :cond_1

    const/4 p2, 0x2

    if-eq p1, p2, :cond_0

    goto :goto_0

    .line 88
    :cond_0
    new-instance v0, Lcom/ymnsdk/replugin/mode/PluginModeTwo;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/mode/PluginModeTwo;-><init>()V

    .line 89
    iget-object p1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$1;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$2;

    iget-object v1, p1, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$activity:Landroid/app/Activity;

    iget-object p1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$1;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$2;

    iget-object v2, p1, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$pluginId:Ljava/lang/String;

    iget-object p1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$1;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$2;

    iget-object v3, p1, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$loginJsonStr:Ljava/lang/String;

    iget-object p1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$1;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$2;

    iget v4, p1, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$updateType:I

    iget-object p1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$1;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$2;

    iget-object v5, p1, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    invoke-virtual/range {v0 .. v5}, Lcom/ymnsdk/replugin/mode/PluginModeTwo;->installPlugin(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;ILcom/ymnsdk/replugin/listener/OpenListener;)V

    goto :goto_0

    .line 84
    :cond_1
    new-instance p1, Lcom/ymnsdk/replugin/mode/PluginModeOne;

    invoke-direct {p1}, Lcom/ymnsdk/replugin/mode/PluginModeOne;-><init>()V

    .line 85
    iget-object p2, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$1;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$2;

    iget-object p2, p2, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$activity:Landroid/app/Activity;

    iget-object v0, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$1;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$2;

    iget-object v0, v0, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$pluginId:Ljava/lang/String;

    iget-object v1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2$1;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$2;

    iget-object v1, v1, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    invoke-virtual {p1, p2, v0, v1}, Lcom/ymnsdk/replugin/mode/PluginModeOne;->installPlugin(Landroid/app/Activity;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/OpenListener;)V

    :goto_0
    return-void
.end method
