.class public Lcom/bianfeng/ymnsdk/sysfunc/SysfuncNotificationReceiver;
.super Landroid/content/BroadcastReceiver;
.source "SysfuncNotificationReceiver.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 9
    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 1

    const/4 p2, 0x1

    new-array p2, p2, [Ljava/lang/String;

    .line 12
    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p1

    const/4 v0, 0x0

    aput-object p1, p2, v0

    const-string p1, "sysfunc_open_app"

    invoke-static {p1, p2}, Lcom/bianfeng/ymnsdk/YmnSdk;->callFunction(Ljava/lang/String;[Ljava/lang/String;)V

    return-void
.end method
