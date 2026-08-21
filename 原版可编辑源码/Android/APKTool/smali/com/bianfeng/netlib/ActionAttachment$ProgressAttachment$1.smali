.class Lcom/bianfeng/netlib/ActionAttachment$ProgressAttachment$1;
.super Ljava/lang/Object;
.source "ActionAttachment.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/netlib/ActionAttachment$ProgressAttachment;->onStart(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/netlib/ActionAttachment$ProgressAttachment;

.field final synthetic val$context:Landroid/content/Context;


# direct methods
.method constructor <init>(Lcom/bianfeng/netlib/ActionAttachment$ProgressAttachment;Landroid/content/Context;)V
    .locals 0

    .line 39
    iput-object p1, p0, Lcom/bianfeng/netlib/ActionAttachment$ProgressAttachment$1;->this$0:Lcom/bianfeng/netlib/ActionAttachment$ProgressAttachment;

    iput-object p2, p0, Lcom/bianfeng/netlib/ActionAttachment$ProgressAttachment$1;->val$context:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 42
    iget-object v0, p0, Lcom/bianfeng/netlib/ActionAttachment$ProgressAttachment$1;->this$0:Lcom/bianfeng/netlib/ActionAttachment$ProgressAttachment;

    iget-object v1, p0, Lcom/bianfeng/netlib/ActionAttachment$ProgressAttachment$1;->val$context:Landroid/content/Context;

    invoke-virtual {v0, v1}, Lcom/bianfeng/netlib/ActionAttachment$ProgressAttachment;->showProgressDialog(Landroid/content/Context;)V

    return-void
.end method
