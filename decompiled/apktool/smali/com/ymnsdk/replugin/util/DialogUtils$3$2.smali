.class Lcom/ymnsdk/replugin/util/DialogUtils$3$2;
.super Ljava/lang/Object;
.source "DialogUtils.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/util/DialogUtils$3;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/ymnsdk/replugin/util/DialogUtils$3;


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/util/DialogUtils$3;)V
    .locals 0

    .line 166
    iput-object p1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$3$2;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$3;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 4

    .line 169
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object p1

    new-instance p2, Lcom/ymnsdk/replugin/event/ui/StartCancelEvent;

    iget-object v0, p0, Lcom/ymnsdk/replugin/util/DialogUtils$3$2;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$3;

    iget-object v0, v0, Lcom/ymnsdk/replugin/util/DialogUtils$3;->val$activity:Landroid/app/Activity;

    iget-object v1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$3$2;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$3;

    iget-object v1, v1, Lcom/ymnsdk/replugin/util/DialogUtils$3;->val$pluginId:Ljava/lang/String;

    invoke-direct {p2, v0, v1}, Lcom/ymnsdk/replugin/event/ui/StartCancelEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;)V

    invoke-virtual {p1, p2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 170
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object p1

    new-instance p2, Lcom/ymnsdk/replugin/event/allowstartplugin/AllowStartPluginResponseEvent;

    iget-object v0, p0, Lcom/ymnsdk/replugin/util/DialogUtils$3$2;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$3;

    iget-object v0, v0, Lcom/ymnsdk/replugin/util/DialogUtils$3;->val$activity:Landroid/app/Activity;

    iget-object v1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$3$2;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$3;

    iget-object v1, v1, Lcom/ymnsdk/replugin/util/DialogUtils$3;->val$pluginId:Ljava/lang/String;

    const-string v2, "\u63d2\u4ef6\u6253\u5f00\u5931\u8d25:\u7528\u6237\u53d6\u6d88\u542f\u52a8"

    const/16 v3, 0x415

    invoke-direct {p2, v0, v1, v3, v2}, Lcom/ymnsdk/replugin/event/allowstartplugin/AllowStartPluginResponseEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;ILjava/lang/String;)V

    invoke-virtual {p1, p2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 171
    iget-object p1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$3$2;->this$1:Lcom/ymnsdk/replugin/util/DialogUtils$3;

    iget-object p1, p1, Lcom/ymnsdk/replugin/util/DialogUtils$3;->val$listener:Lcom/ymnsdk/replugin/listener/AllowStartPluginListener;

    invoke-interface {p1, v2}, Lcom/ymnsdk/replugin/listener/AllowStartPluginListener;->openFail(Ljava/lang/String;)V

    return-void
.end method
