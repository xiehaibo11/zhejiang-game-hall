.class Lcom/ymnsdk/replugin/util/DialogUtils$3;
.super Ljava/lang/Object;
.source "DialogUtils.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/util/DialogUtils;->showStartDialog(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/AllowStartPluginListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ymnsdk/replugin/util/DialogUtils;

.field final synthetic val$activity:Landroid/app/Activity;

.field final synthetic val$listener:Lcom/ymnsdk/replugin/listener/AllowStartPluginListener;

.field final synthetic val$loginJsonStr:Ljava/lang/String;

.field final synthetic val$pluginId:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/util/DialogUtils;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/AllowStartPluginListener;)V
    .locals 0

    .line 137
    iput-object p1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$3;->this$0:Lcom/ymnsdk/replugin/util/DialogUtils;

    iput-object p2, p0, Lcom/ymnsdk/replugin/util/DialogUtils$3;->val$activity:Landroid/app/Activity;

    iput-object p3, p0, Lcom/ymnsdk/replugin/util/DialogUtils$3;->val$pluginId:Ljava/lang/String;

    iput-object p4, p0, Lcom/ymnsdk/replugin/util/DialogUtils$3;->val$loginJsonStr:Ljava/lang/String;

    iput-object p5, p0, Lcom/ymnsdk/replugin/util/DialogUtils$3;->val$listener:Lcom/ymnsdk/replugin/listener/AllowStartPluginListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    .line 140
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/ui/StartDialogShowEvent;

    iget-object v2, p0, Lcom/ymnsdk/replugin/util/DialogUtils$3;->val$activity:Landroid/app/Activity;

    iget-object v3, p0, Lcom/ymnsdk/replugin/util/DialogUtils$3;->val$pluginId:Ljava/lang/String;

    invoke-direct {v1, v2, v3}, Lcom/ymnsdk/replugin/event/ui/StartDialogShowEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 141
    new-instance v0, Lcom/ymnsdk/replugin/ui/TipDialog;

    iget-object v1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$3;->val$activity:Landroid/app/Activity;

    invoke-direct {v0, v1}, Lcom/ymnsdk/replugin/ui/TipDialog;-><init>(Landroid/app/Activity;)V

    .line 142
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/ui/TipDialog;->show()V

    const-string v1, "\u6e38\u620f\u66f4\u65b0"

    .line 143
    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/ui/TipDialog;->setTitle(Ljava/lang/String;)V

    const-string v1, "\u65b0\u7248\u6765\u88ad\uff0c\u70b9\u51fb\u7acb\u5373\u4f53\u9a8c"

    .line 144
    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/ui/TipDialog;->setContent(Ljava/lang/String;)V

    const-string v1, "\u786e\u5b9a"

    .line 145
    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/ui/TipDialog;->setPosBtTx(Ljava/lang/String;)V

    .line 146
    new-instance v1, Lcom/ymnsdk/replugin/util/DialogUtils$3$1;

    invoke-direct {v1, p0}, Lcom/ymnsdk/replugin/util/DialogUtils$3$1;-><init>(Lcom/ymnsdk/replugin/util/DialogUtils$3;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/ui/TipDialog;->setPositiveButton(Landroid/content/DialogInterface$OnClickListener;)V

    .line 166
    new-instance v1, Lcom/ymnsdk/replugin/util/DialogUtils$3$2;

    invoke-direct {v1, p0}, Lcom/ymnsdk/replugin/util/DialogUtils$3$2;-><init>(Lcom/ymnsdk/replugin/util/DialogUtils$3;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/ui/TipDialog;->setNegativeButton(Landroid/content/DialogInterface$OnClickListener;)V

    return-void
.end method
