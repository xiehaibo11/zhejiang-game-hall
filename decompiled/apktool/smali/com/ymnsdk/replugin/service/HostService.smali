.class public Lcom/ymnsdk/replugin/service/HostService;
.super Landroid/app/Service;
.source "HostService.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ymnsdk/replugin/service/HostService$HostStub;
    }
.end annotation


# static fields
.field public static HOSTServiceID:I = 0x3ed


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 19
    invoke-direct {p0}, Landroid/app/Service;-><init>()V

    return-void
.end method


# virtual methods
.method public onBind(Landroid/content/Intent;)Landroid/os/IBinder;
    .locals 0

    .line 43
    new-instance p1, Lcom/ymnsdk/replugin/service/HostService$HostStub;

    invoke-direct {p1, p0}, Lcom/ymnsdk/replugin/service/HostService$HostStub;-><init>(Lcom/ymnsdk/replugin/service/HostService;)V

    return-object p1
.end method

.method public onCreate()V
    .locals 4

    .line 23
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1a

    if-lt v0, v1, :cond_0

    const-string v0, "replugin_host_channel"

    .line 25
    new-instance v1, Landroid/app/NotificationChannel;

    const/4 v2, 0x3

    const-string v3, "Channel human readable title"

    invoke-direct {v1, v0, v3, v2}, Landroid/app/NotificationChannel;-><init>(Ljava/lang/String;Ljava/lang/CharSequence;I)V

    const-string v2, "notification"

    .line 29
    invoke-virtual {p0, v2}, Lcom/ymnsdk/replugin/service/HostService;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/app/NotificationManager;

    invoke-virtual {v2, v1}, Landroid/app/NotificationManager;->createNotificationChannel(Landroid/app/NotificationChannel;)V

    .line 31
    new-instance v1, Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-direct {v1, p0, v0}, Landroid/support/v4/app/NotificationCompat$Builder;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    const-string v0, ""

    .line 32
    invoke-virtual {v1, v0}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentTitle(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object v1

    .line 33
    invoke-virtual {v1, v0}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentText(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object v0

    invoke-virtual {v0}, Landroid/support/v4/app/NotificationCompat$Builder;->build()Landroid/app/Notification;

    move-result-object v0

    .line 35
    sget v1, Lcom/ymnsdk/replugin/service/HostService;->HOSTServiceID:I

    invoke-virtual {p0, v1, v0}, Lcom/ymnsdk/replugin/service/HostService;->startForeground(ILandroid/app/Notification;)V

    .line 37
    :cond_0
    invoke-super {p0}, Landroid/app/Service;->onCreate()V

    return-void
.end method

.method public onDestroy()V
    .locals 1

    const/4 v0, 0x1

    .line 57
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/service/HostService;->stopForeground(Z)V

    .line 58
    invoke-super {p0}, Landroid/app/Service;->onDestroy()V

    return-void
.end method

.method public onStartCommand(Landroid/content/Intent;II)I
    .locals 0

    .line 50
    invoke-super {p0, p1, p2, p3}, Landroid/app/Service;->onStartCommand(Landroid/content/Intent;II)I

    move-result p1

    return p1
.end method
