.class public Lcom/ymnsdk/replugin/action/ActionAttachment$ProgressAttachment;
.super Ljava/lang/Object;
.source "ActionAttachment.java"

# interfaces
.implements Lcom/ymnsdk/replugin/action/ActionAttachment;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ymnsdk/replugin/action/ActionAttachment;
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

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static hideVirtualKey(Landroid/app/Activity;)V
    .locals 3

    .line 75
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    const/16 v2, 0xb

    if-le v0, v2, :cond_0

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-ge v0, v1, :cond_0

    .line 76
    invoke-virtual {p0}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p0

    invoke-virtual {p0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object p0

    const/16 v0, 0x8

    invoke-virtual {p0, v0}, Landroid/view/View;->setSystemUiVisibility(I)V

    goto :goto_0

    .line 77
    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v0, v1, :cond_1

    const/16 v0, 0x1006

    .line 79
    invoke-virtual {p0}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p0

    invoke-virtual {p0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/view/View;->setSystemUiVisibility(I)V

    :cond_1
    :goto_0
    return-void
.end method


# virtual methods
.method protected dismissProgressDialog()V
    .locals 1

    .line 26
    iget-object v0, p0, Lcom/ymnsdk/replugin/action/ActionAttachment$ProgressAttachment;->progressDialog:Landroid/app/ProgressDialog;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/app/ProgressDialog;->isShowing()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 27
    iget-object v0, p0, Lcom/ymnsdk/replugin/action/ActionAttachment$ProgressAttachment;->progressDialog:Landroid/app/ProgressDialog;

    invoke-virtual {v0}, Landroid/app/ProgressDialog;->dismiss()V

    const/4 v0, 0x0

    .line 28
    iput-object v0, p0, Lcom/ymnsdk/replugin/action/ActionAttachment$ProgressAttachment;->progressDialog:Landroid/app/ProgressDialog;

    :cond_0
    return-void
.end method

.method public onEnd(Landroid/content/Context;)V
    .locals 1

    .line 69
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/action/ActionAttachment$ProgressAttachment;->dismissProgressDialog()V

    .line 70
    instance-of v0, p1, Landroid/app/Activity;

    if-eqz v0, :cond_0

    .line 71
    check-cast p1, Landroid/app/Activity;

    invoke-static {p1}, Lcom/ymnsdk/replugin/action/ActionAttachment$ProgressAttachment;->hideVirtualKey(Landroid/app/Activity;)V

    :cond_0
    return-void
.end method

.method public onStart(Landroid/content/Context;)V
    .locals 2

    .line 53
    instance-of v0, p1, Landroid/app/Activity;

    if-eqz v0, :cond_0

    .line 54
    move-object v0, p1

    check-cast v0, Landroid/app/Activity;

    new-instance v1, Lcom/ymnsdk/replugin/action/ActionAttachment$ProgressAttachment$1;

    invoke-direct {v1, p0, p1}, Lcom/ymnsdk/replugin/action/ActionAttachment$ProgressAttachment$1;-><init>(Lcom/ymnsdk/replugin/action/ActionAttachment$ProgressAttachment;Landroid/content/Context;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    goto :goto_0

    .line 63
    :cond_0
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/action/ActionAttachment$ProgressAttachment;->showProgressDialog(Landroid/content/Context;)V

    :goto_0
    return-void
.end method

.method protected showProgressDialog(Landroid/content/Context;)V
    .locals 2

    .line 33
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/action/ActionAttachment$ProgressAttachment;->dismissProgressDialog()V

    .line 35
    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/Locale;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ZH_TW"

    .line 36
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

    .line 38
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

    .line 40
    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_2

    const-string v0, " \u0110ang t\u1ea3i ... "

    goto :goto_2

    :cond_2
    const-string v1, "TH"

    .line 42
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

    .line 48
    invoke-static {p1, v1, v0}, Landroid/app/ProgressDialog;->show(Landroid/content/Context;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/app/ProgressDialog;

    move-result-object p1

    iput-object p1, p0, Lcom/ymnsdk/replugin/action/ActionAttachment$ProgressAttachment;->progressDialog:Landroid/app/ProgressDialog;

    return-void
.end method
