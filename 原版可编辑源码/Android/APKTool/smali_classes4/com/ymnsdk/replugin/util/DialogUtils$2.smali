.class Lcom/ymnsdk/replugin/util/DialogUtils$2;
.super Ljava/lang/Object;
.source "DialogUtils.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/util/DialogUtils;->showUpdateDialog(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Lcom/ymnsdk/replugin/listener/OpenListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ymnsdk/replugin/util/DialogUtils;

.field final synthetic val$activity:Landroid/app/Activity;

.field final synthetic val$fromVersion:Ljava/lang/String;

.field final synthetic val$isComplete:Z

.field final synthetic val$listener:Lcom/ymnsdk/replugin/listener/OpenListener;

.field final synthetic val$loginJsonStr:Ljava/lang/String;

.field final synthetic val$pluginId:Ljava/lang/String;

.field final synthetic val$updateType:I


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/util/DialogUtils;Landroid/app/Activity;Ljava/lang/String;ZLjava/lang/String;Lcom/ymnsdk/replugin/listener/OpenListener;Ljava/lang/String;I)V
    .locals 0

    .line 66
    iput-object p1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2;->this$0:Lcom/ymnsdk/replugin/util/DialogUtils;

    iput-object p2, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$activity:Landroid/app/Activity;

    iput-object p3, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$pluginId:Ljava/lang/String;

    iput-boolean p4, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$isComplete:Z

    iput-object p5, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$fromVersion:Ljava/lang/String;

    iput-object p6, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    iput-object p7, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$loginJsonStr:Ljava/lang/String;

    iput p8, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$updateType:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 5

    .line 69
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/ui/UpdateDialogShowEvent;

    iget-object v2, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$activity:Landroid/app/Activity;

    iget-object v3, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$pluginId:Ljava/lang/String;

    invoke-direct {v1, v2, v3}, Lcom/ymnsdk/replugin/event/ui/UpdateDialogShowEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 70
    new-instance v0, Lcom/ymnsdk/replugin/ui/TipDialog;

    iget-object v1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$activity:Landroid/app/Activity;

    invoke-direct {v0, v1}, Lcom/ymnsdk/replugin/ui/TipDialog;-><init>(Landroid/app/Activity;)V

    .line 71
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/ui/TipDialog;->show()V

    .line 72
    iget-object v1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2;->this$0:Lcom/ymnsdk/replugin/util/DialogUtils;

    iget-object v2, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$pluginId:Ljava/lang/String;

    iget-boolean v3, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$isComplete:Z

    invoke-virtual {v1, v2, v3}, Lcom/ymnsdk/replugin/util/DialogUtils;->getUpdateTitle(Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/ui/TipDialog;->setTitle(Ljava/lang/String;)V

    .line 73
    iget-object v1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2;->this$0:Lcom/ymnsdk/replugin/util/DialogUtils;

    iget-object v2, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$pluginId:Ljava/lang/String;

    iget-object v3, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$fromVersion:Ljava/lang/String;

    iget-boolean v4, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$isComplete:Z

    invoke-virtual {v1, v2, v3, v4}, Lcom/ymnsdk/replugin/util/DialogUtils;->getUpdateContent(Ljava/lang/String;Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/ui/TipDialog;->setContent(Ljava/lang/String;)V

    .line 74
    iget-object v1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2;->this$0:Lcom/ymnsdk/replugin/util/DialogUtils;

    iget-object v2, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$pluginId:Ljava/lang/String;

    iget-boolean v3, p0, Lcom/ymnsdk/replugin/util/DialogUtils$2;->val$isComplete:Z

    invoke-virtual {v1, v2, v3}, Lcom/ymnsdk/replugin/util/DialogUtils;->getUpdateBtnTitle(Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/ui/TipDialog;->setPosBtTx(Ljava/lang/String;)V

    .line 78
    new-instance v1, Lcom/ymnsdk/replugin/util/DialogUtils$2$1;

    invoke-direct {v1, p0}, Lcom/ymnsdk/replugin/util/DialogUtils$2$1;-><init>(Lcom/ymnsdk/replugin/util/DialogUtils$2;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/ui/TipDialog;->setPositiveButton(Landroid/content/DialogInterface$OnClickListener;)V

    .line 94
    new-instance v1, Lcom/ymnsdk/replugin/util/DialogUtils$2$2;

    invoke-direct {v1, p0}, Lcom/ymnsdk/replugin/util/DialogUtils$2$2;-><init>(Lcom/ymnsdk/replugin/util/DialogUtils$2;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/ui/TipDialog;->setNegativeButton(Landroid/content/DialogInterface$OnClickListener;)V

    return-void
.end method
