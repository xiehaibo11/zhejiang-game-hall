.class public Lcom/bianfeng/paylib/action/ActionAttachment$ProgressAttachment;
.super Ljava/lang/Object;
.source "ActionAttachment.java"

# interfaces
.implements Lcom/bianfeng/paylib/action/ActionAttachment;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/paylib/action/ActionAttachment;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "ProgressAttachment"
.end annotation


# instance fields
.field progressDialog:Landroid/app/ProgressDialog;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method protected dismissProgressDialog()V
    .locals 1

    .line 18
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/paylib/action/ActionAttachment$ProgressAttachment;->progressDialog:Landroid/app/ProgressDialog;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/bianfeng/paylib/action/ActionAttachment$ProgressAttachment;->progressDialog:Landroid/app/ProgressDialog;

    invoke-virtual {v0}, Landroid/app/ProgressDialog;->isShowing()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 19
    iget-object v0, p0, Lcom/bianfeng/paylib/action/ActionAttachment$ProgressAttachment;->progressDialog:Landroid/app/ProgressDialog;

    invoke-virtual {v0}, Landroid/app/ProgressDialog;->dismiss()V

    const/4 v0, 0x0

    .line 20
    iput-object v0, p0, Lcom/bianfeng/paylib/action/ActionAttachment$ProgressAttachment;->progressDialog:Landroid/app/ProgressDialog;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    return-void
.end method

.method public onEnd(Landroid/content/Context;)V
    .locals 1

    .line 46
    invoke-virtual {p0}, Lcom/bianfeng/paylib/action/ActionAttachment$ProgressAttachment;->dismissProgressDialog()V

    .line 47
    instance-of v0, p1, Landroid/app/Activity;

    if-eqz v0, :cond_0

    .line 48
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getSystemUtil()Lcom/bianfeng/utilslib/SystemUtil;

    move-result-object v0

    check-cast p1, Landroid/app/Activity;

    invoke-virtual {v0, p1}, Lcom/bianfeng/utilslib/SystemUtil;->hideVirtualKey(Landroid/app/Activity;)V

    :cond_0
    return-void
.end method

.method public onStart(Landroid/content/Context;)V
    .locals 2

    .line 32
    instance-of v0, p1, Landroid/app/Activity;

    if-eqz v0, :cond_0

    .line 33
    move-object v0, p1

    check-cast v0, Landroid/app/Activity;

    new-instance v1, Lcom/bianfeng/paylib/action/ActionAttachment$ProgressAttachment$1;

    invoke-direct {v1, p0, p1}, Lcom/bianfeng/paylib/action/ActionAttachment$ProgressAttachment$1;-><init>(Lcom/bianfeng/paylib/action/ActionAttachment$ProgressAttachment;Landroid/content/Context;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    goto :goto_0

    .line 40
    :cond_0
    invoke-virtual {p0, p1}, Lcom/bianfeng/paylib/action/ActionAttachment$ProgressAttachment;->showProgressDialog(Landroid/content/Context;)V

    :goto_0
    return-void
.end method

.method protected showProgressDialog(Landroid/content/Context;)V
    .locals 2

    .line 26
    invoke-virtual {p0}, Lcom/bianfeng/paylib/action/ActionAttachment$ProgressAttachment;->dismissProgressDialog()V

    const/4 v0, 0x0

    const-string v1, "  \u52a0\u8f7d\u4e2d\u00b7\u00b7\u00b7  "

    .line 27
    invoke-static {p1, v0, v1}, Landroid/app/ProgressDialog;->show(Landroid/content/Context;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/app/ProgressDialog;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/paylib/action/ActionAttachment$ProgressAttachment;->progressDialog:Landroid/app/ProgressDialog;

    return-void
.end method
