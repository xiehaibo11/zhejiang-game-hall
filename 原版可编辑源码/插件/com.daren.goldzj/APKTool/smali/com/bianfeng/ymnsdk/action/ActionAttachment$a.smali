.class public Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;
.super Ljava/lang/Object;
.source "ActionAttachment.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/action/ActionAttachment;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/action/ActionAttachment;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field a:Landroid/app/ProgressDialog;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method protected a()V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;->a:Landroid/app/ProgressDialog;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/app/ProgressDialog;->isShowing()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;->a:Landroid/app/ProgressDialog;

    invoke-virtual {v0}, Landroid/app/ProgressDialog;->dismiss()V

    const/4 v0, 0x0

    .line 3
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;->a:Landroid/app/ProgressDialog;

    :cond_0
    return-void
.end method

.method protected a(Landroid/content/Context;)V
    .locals 2

    .line 4
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;->a()V

    .line 6
    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/Locale;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ZH_TW"

    .line 7
    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    const-string v1, "ZH_HK"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_1

    :cond_0
    const-string v1, "ZH"

    .line 9
    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    const-string v1, "zh"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    goto :goto_0

    :cond_1
    const-string v1, "VN"

    .line 11
    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_2

    const-string v0, " \u0110ang t\u1ea3i ... "

    goto :goto_2

    :cond_2
    const-string v1, "TH"

    .line 13
    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    const-string v0, " \u0e01\u0e33\u0e25\u0e31\u0e07\u0e42\u0e2b\u0e25\u0e14 ... "

    goto :goto_2

    :cond_3
    const-string v0, " Loading... "

    goto :goto_2

    :cond_4
    :goto_0
    const-string v0, " \u52a0\u8f7d\u4e2d... "

    goto :goto_2

    :cond_5
    :goto_1
    const-string v0, " \u52a0\u8f09\u4e2d... "

    :goto_2
    const/4 v1, 0x0

    .line 19
    invoke-static {p1, v1, v0}, Landroid/app/ProgressDialog;->show(Landroid/content/Context;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/app/ProgressDialog;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;->a:Landroid/app/ProgressDialog;

    return-void
.end method

.method public onEnd(Landroid/content/Context;)V
    .locals 1

    .line 1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;->a()V

    .line 2
    instance-of v0, p1, Landroid/app/Activity;

    if-eqz v0, :cond_0

    .line 3
    check-cast p1, Landroid/app/Activity;

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/SystemUtil;->hideVirtualKey(Landroid/app/Activity;)V

    :cond_0
    return-void
.end method

.method public onStart(Landroid/content/Context;)V
    .locals 2

    .line 1
    instance-of v0, p1, Landroid/app/Activity;

    if-eqz v0, :cond_0

    .line 2
    move-object v0, p1

    check-cast v0, Landroid/app/Activity;

    new-instance v1, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a$a;

    invoke-direct {v1, p0, p1}, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a$a;-><init>(Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;Landroid/content/Context;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    goto :goto_0

    .line 11
    :cond_0
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;->a(Landroid/content/Context;)V

    :goto_0
    return-void
.end method
