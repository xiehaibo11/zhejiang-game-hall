.class Lcom/ymnsdk/replugin/util/DialogUtils$4;
.super Ljava/lang/Object;
.source "DialogUtils.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/util/DialogUtils;->showErrorDialog(Landroid/app/Activity;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ymnsdk/replugin/util/DialogUtils;

.field final synthetic val$activity:Landroid/app/Activity;

.field final synthetic val$pluginId:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/util/DialogUtils;Landroid/app/Activity;Ljava/lang/String;)V
    .locals 0

    .line 182
    iput-object p1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$4;->this$0:Lcom/ymnsdk/replugin/util/DialogUtils;

    iput-object p2, p0, Lcom/ymnsdk/replugin/util/DialogUtils$4;->val$activity:Landroid/app/Activity;

    iput-object p3, p0, Lcom/ymnsdk/replugin/util/DialogUtils$4;->val$pluginId:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    .line 186
    new-instance v0, Lcom/ymnsdk/replugin/ui/TipDialog;

    iget-object v1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$4;->val$activity:Landroid/app/Activity;

    invoke-direct {v0, v1}, Lcom/ymnsdk/replugin/ui/TipDialog;-><init>(Landroid/app/Activity;)V

    .line 187
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/ui/TipDialog;->show()V

    const-string v1, "\u5b89\u88c5\u5931\u8d25"

    .line 188
    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/ui/TipDialog;->setTitle(Ljava/lang/String;)V

    .line 189
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u70b9\u51fb\u684c\u9762\u5e94\u7528\u56fe\u6807\u91cd\u8bd5\uff0c\u539f\u56e0\u662f"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/ymnsdk/replugin/entity/PluginFailInfo;->getInstance()Lcom/ymnsdk/replugin/entity/PluginFailInfo;

    move-result-object v2

    iget-object v3, p0, Lcom/ymnsdk/replugin/util/DialogUtils$4;->val$pluginId:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/ymnsdk/replugin/entity/PluginFailInfo;->getPluginFailInfo(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/ui/TipDialog;->setContent(Ljava/lang/String;)V

    return-void
.end method
