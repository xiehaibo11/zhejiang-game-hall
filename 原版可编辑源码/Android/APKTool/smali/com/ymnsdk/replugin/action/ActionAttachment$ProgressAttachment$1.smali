.class Lcom/ymnsdk/replugin/action/ActionAttachment$ProgressAttachment$1;
.super Ljava/lang/Object;
.source "ActionAttachment.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/action/ActionAttachment$ProgressAttachment;->onStart(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ymnsdk/replugin/action/ActionAttachment$ProgressAttachment;

.field final synthetic val$context:Landroid/content/Context;


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/action/ActionAttachment$ProgressAttachment;Landroid/content/Context;)V
    .locals 0

    .line 54
    iput-object p1, p0, Lcom/ymnsdk/replugin/action/ActionAttachment$ProgressAttachment$1;->this$0:Lcom/ymnsdk/replugin/action/ActionAttachment$ProgressAttachment;

    iput-object p2, p0, Lcom/ymnsdk/replugin/action/ActionAttachment$ProgressAttachment$1;->val$context:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 57
    iget-object v0, p0, Lcom/ymnsdk/replugin/action/ActionAttachment$ProgressAttachment$1;->val$context:Landroid/content/Context;

    check-cast v0, Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->isFinishing()Z

    move-result v0

    if-nez v0, :cond_0

    .line 58
    iget-object v0, p0, Lcom/ymnsdk/replugin/action/ActionAttachment$ProgressAttachment$1;->this$0:Lcom/ymnsdk/replugin/action/ActionAttachment$ProgressAttachment;

    iget-object v1, p0, Lcom/ymnsdk/replugin/action/ActionAttachment$ProgressAttachment$1;->val$context:Landroid/content/Context;

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/action/ActionAttachment$ProgressAttachment;->showProgressDialog(Landroid/content/Context;)V

    :cond_0
    return-void
.end method
