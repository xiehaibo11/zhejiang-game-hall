.class public Lcom/qihoo360/replugin/component/dummy/ForwardActivity;
.super Landroid/app/Activity;
.source "ForwardActivity.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 34
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 2

    const/4 p1, 0x0

    .line 38
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    const-string p1, "ws001"

    const-string v0, "f.a: o.c"

    .line 42
    invoke-static {p1, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 45
    invoke-virtual {p0}, Lcom/qihoo360/replugin/component/dummy/ForwardActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    if-nez v0, :cond_0

    const-string v1, "f.a: nul i"

    .line 48
    invoke-static {p1, v1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 52
    :cond_0
    invoke-static {p0, v0}, Lcom/qihoo360/loader2/PMF;->forward(Landroid/app/Activity;Landroid/content/Intent;)V

    return-void
.end method
