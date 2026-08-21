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

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method protected a()V
    .locals 1

    .line 26
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;->a:Landroid/app/ProgressDialog;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/app/ProgressDialog;->isShowing()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 27
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;->a:Landroid/app/ProgressDialog;

    invoke-virtual {v0}, Landroid/app/ProgressDialog;->dismiss()V

    .line 28
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;->a:Landroid/app/ProgressDialog;

    .line 30
    :cond_0
    return-void
.end method

.method protected a(Landroid/content/Context;)V
    .locals 3
    .param p1, "context"    # Landroid/content/Context;

    .line 33
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;->a()V

    .line 34
    const-string v0, ""

    .line 35
    .local v0, "loadingStr":Ljava/lang/String;
    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v1

    invoke-virtual {v1}, Ljava/util/Locale;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v1

    .line 36
    .local v1, "locale":Ljava/lang/String;
    const-string v2, "ZH_TW"

    invoke-virtual {v1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_5

    const-string v2, "ZH_HK"

    invoke-virtual {v1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    goto :goto_1

    .line 38
    :cond_0
    const-string v2, "ZH"

    invoke-virtual {v1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_4

    const-string v2, "zh"

    invoke-virtual {v1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    goto :goto_0

    .line 40
    :cond_1
    const-string v2, "VN"

    invoke-virtual {v1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 41
    const-string v0, " \u0110ang t\u1ea3i ... "

    goto :goto_2

    .line 42
    :cond_2
    const-string v2, "TH"

    invoke-virtual {v1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 43
    const-string v0, " \u0e01\u0e33\u0e25\u0e31\u0e07\u0e42\u0e2b\u0e25\u0e14 ... "

    goto :goto_2

    .line 45
    :cond_3
    const-string v0, " Loading... "

    goto :goto_2

    .line 39
    :cond_4
    :goto_0
    const-string v0, " \u52a0\u8f7d\u4e2d... "

    goto :goto_2

    .line 37
    :cond_5
    :goto_1
    const-string v0, " \u52a0\u8f09\u4e2d... "

    .line 48
    :goto_2
    const/4 v2, 0x0

    invoke-static {p1, v2, v0}, Landroid/app/ProgressDialog;->show(Landroid/content/Context;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/app/ProgressDialog;

    move-result-object v2

    iput-object v2, p0, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;->a:Landroid/app/ProgressDialog;

    .line 49
    return-void
.end method

.method public onEnd(Landroid/content/Context;)V
    .locals 1
    .param p1, "context"    # Landroid/content/Context;

    .line 69
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;->a()V

    .line 70
    instance-of v0, p1, Landroid/app/Activity;

    if-eqz v0, :cond_0

    .line 71
    move-object v0, p1

    check-cast v0, Landroid/app/Activity;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/SystemUtil;->hideVirtualKey(Landroid/app/Activity;)V

    .line 73
    :cond_0
    return-void
.end method

.method public onStart(Landroid/content/Context;)V
    .locals 2
    .param p1, "context"    # Landroid/content/Context;

    .line 53
    instance-of v0, p1, Landroid/app/Activity;

    if-eqz v0, :cond_0

    .line 54
    move-object v0, p1

    check-cast v0, Landroid/app/Activity;

    new-instance v1, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a$a;

    invoke-direct {v1, p0, p1}, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a$a;-><init>(Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;Landroid/content/Context;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    goto :goto_0

    .line 63
    :cond_0
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;->a(Landroid/content/Context;)V

    .line 65
    :goto_0
    return-void
.end method
