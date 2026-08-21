.class public Lcom/qihoo360/replugin/component/dummy/DummyReceiver;
.super Landroid/content/BroadcastReceiver;
.source "DummyReceiver.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 36
    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 0

    const-string p1, "ws001"

    const-string p2, "d.r o.c f"

    .line 42
    invoke-static {p1, p2}, Lcom/qihoo360/replugin/helper/LogRelease;->i(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method
