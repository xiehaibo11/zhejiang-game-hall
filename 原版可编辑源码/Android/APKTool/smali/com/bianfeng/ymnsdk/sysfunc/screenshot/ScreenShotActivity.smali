.class public Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotActivity;
.super Landroid/app/Activity;
.source "ScreenShotActivity.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 8
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method

.method public static start(Landroid/content/Context;)V
    .locals 2

    .line 11
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotActivity;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/high16 v1, 0x10000000

    .line 12
    invoke-virtual {v0, v1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 13
    invoke-virtual {p0, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 0

    .line 18
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 19
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotActivity;->finish()V

    return-void
.end method
