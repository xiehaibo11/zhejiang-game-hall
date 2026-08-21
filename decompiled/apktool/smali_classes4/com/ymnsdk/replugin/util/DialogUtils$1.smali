.class Lcom/ymnsdk/replugin/util/DialogUtils$1;
.super Ljava/lang/Object;
.source "DialogUtils.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/util/DialogUtils;->showMaintainDialog(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/OpenListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ymnsdk/replugin/util/DialogUtils;

.field final synthetic val$activity:Landroid/app/Activity;

.field final synthetic val$listener:Lcom/ymnsdk/replugin/listener/OpenListener;

.field final synthetic val$reason:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/util/DialogUtils;Landroid/app/Activity;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/OpenListener;)V
    .locals 0

    .line 51
    iput-object p1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$1;->this$0:Lcom/ymnsdk/replugin/util/DialogUtils;

    iput-object p2, p0, Lcom/ymnsdk/replugin/util/DialogUtils$1;->val$activity:Landroid/app/Activity;

    iput-object p3, p0, Lcom/ymnsdk/replugin/util/DialogUtils$1;->val$reason:Ljava/lang/String;

    iput-object p4, p0, Lcom/ymnsdk/replugin/util/DialogUtils$1;->val$listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 54
    new-instance v0, Lcom/ymnsdk/replugin/ui/TipDialog;

    iget-object v1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$1;->val$activity:Landroid/app/Activity;

    invoke-direct {v0, v1}, Lcom/ymnsdk/replugin/ui/TipDialog;-><init>(Landroid/app/Activity;)V

    .line 55
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/ui/TipDialog;->show()V

    const-string v1, "\u6e38\u620f\u7ef4\u62a4"

    .line 56
    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/ui/TipDialog;->setTitle(Ljava/lang/String;)V

    .line 57
    iget-object v1, p0, Lcom/ymnsdk/replugin/util/DialogUtils$1;->val$reason:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/ui/TipDialog;->setContent(Ljava/lang/String;)V

    .line 58
    iget-object v0, p0, Lcom/ymnsdk/replugin/util/DialogUtils$1;->val$listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    const-string v1, "\u63d2\u4ef6\u5904\u4e8e\u4e0d\u53ef\u7528\u4e2d:"

    invoke-interface {v0, v1}, Lcom/ymnsdk/replugin/listener/OpenListener;->openFail(Ljava/lang/String;)V

    return-void
.end method
