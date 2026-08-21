.class public Lcom/bianfeng/privategetui/GetuiActivity;
.super Landroid/app/Activity;
.source "GetuiActivity.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 10
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3

    .line 13
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 15
    invoke-virtual {p0}, Lcom/bianfeng/privategetui/GetuiActivity;->getIntent()Landroid/content/Intent;

    move-result-object p1

    .line 16
    invoke-static {p0}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->init(Landroid/content/Context;)V

    const-string v0, "pkgName"

    .line 17
    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 18
    new-instance v1, Lcom/bianfeng/privategetui/GetuiActivity$1;

    invoke-direct {v1, p0, p1}, Lcom/bianfeng/privategetui/GetuiActivity$1;-><init>(Lcom/bianfeng/privategetui/GetuiActivity;Landroid/content/Intent;)V

    invoke-virtual {p0, v1}, Lcom/bianfeng/privategetui/GetuiActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    .line 38
    new-instance p1, Landroid/content/Intent;

    invoke-direct {p1}, Landroid/content/Intent;-><init>()V

    .line 39
    invoke-virtual {p1, p0, v0}, Landroid/content/Intent;->setClassName(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;

    .line 40
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "pkgName is "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ymnsdk"

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 41
    invoke-virtual {p0, p1}, Lcom/bianfeng/privategetui/GetuiActivity;->startActivity(Landroid/content/Intent;)V

    .line 42
    invoke-virtual {p0}, Lcom/bianfeng/privategetui/GetuiActivity;->finish()V

    return-void
.end method
