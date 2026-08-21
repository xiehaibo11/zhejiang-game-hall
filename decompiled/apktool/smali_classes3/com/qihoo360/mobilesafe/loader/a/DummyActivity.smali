.class public Lcom/qihoo360/mobilesafe/loader/a/DummyActivity;
.super Landroid/app/Activity;
.source "DummyActivity.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 30
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 1

    const-string p1, "ws001"

    const-string v0, "d a o c f m"

    .line 36
    invoke-static {p1, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->i(Ljava/lang/String;Ljava/lang/String;)I

    const/4 p1, 0x0

    .line 42
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 44
    invoke-virtual {p0}, Lcom/qihoo360/mobilesafe/loader/a/DummyActivity;->finish()V

    return-void
.end method
