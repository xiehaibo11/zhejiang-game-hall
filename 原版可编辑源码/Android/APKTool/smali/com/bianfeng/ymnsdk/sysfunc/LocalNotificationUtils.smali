.class public Lcom/bianfeng/ymnsdk/sysfunc/LocalNotificationUtils;
.super Ljava/lang/Object;
.source "LocalNotificationUtils.java"


# static fields
.field private static volatile utils:Lcom/bianfeng/ymnsdk/sysfunc/LocalNotificationUtils;


# instance fields
.field private index:I


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 20
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 38
    iput v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/LocalNotificationUtils;->index:I

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/ymnsdk/sysfunc/LocalNotificationUtils;
    .locals 2

    .line 23
    sget-object v0, Lcom/bianfeng/ymnsdk/sysfunc/LocalNotificationUtils;->utils:Lcom/bianfeng/ymnsdk/sysfunc/LocalNotificationUtils;

    if-nez v0, :cond_1

    .line 24
    const-class v0, Lcom/bianfeng/ymnsdk/sysfunc/LocalNotificationUtils;

    monitor-enter v0

    .line 25
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/sysfunc/LocalNotificationUtils;->utils:Lcom/bianfeng/ymnsdk/sysfunc/LocalNotificationUtils;

    if-nez v1, :cond_0

    .line 26
    new-instance v1, Lcom/bianfeng/ymnsdk/sysfunc/LocalNotificationUtils;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/sysfunc/LocalNotificationUtils;-><init>()V

    sput-object v1, Lcom/bianfeng/ymnsdk/sysfunc/LocalNotificationUtils;->utils:Lcom/bianfeng/ymnsdk/sysfunc/LocalNotificationUtils;

    .line 28
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 30
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/ymnsdk/sysfunc/LocalNotificationUtils;->utils:Lcom/bianfeng/ymnsdk/sysfunc/LocalNotificationUtils;

    return-object v0
.end method


# virtual methods
.method public sendNotification(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V
    .locals 7

    .line 41
    iget v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/LocalNotificationUtils;->index:I

    const/4 v1, 0x1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/LocalNotificationUtils;->index:I

    const-string v0, "sendNotification----sendNotification"

    .line 42
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    const-string v0, "notification"

    .line 43
    invoke-virtual {p1, v0}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/NotificationManager;

    .line 45
    new-instance v2, Landroid/content/Intent;

    const-class v3, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncNotificationReceiver;

    invoke-direct {v2, p1, v3}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string v3, "com.bianfeng.ymnsdk.sysfunc.click"

    .line 46
    invoke-virtual {v2, v3}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    const/high16 v3, 0x10000000

    .line 48
    invoke-static {p1, v1, v2, v3}, Landroid/app/PendingIntent;->getBroadcast(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object v2

    .line 53
    new-instance v3, Landroid/support/v4/app/NotificationCompat$Builder;

    const-string v4, "1"

    invoke-direct {v3, p1, v4}, Landroid/support/v4/app/NotificationCompat$Builder;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 54
    invoke-virtual {v3, v1}, Landroid/support/v4/app/NotificationCompat$Builder;->setAutoCancel(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object v5

    .line 55
    invoke-virtual {p1}, Landroid/app/Activity;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v6

    iget v6, v6, Landroid/content/pm/ApplicationInfo;->icon:I

    invoke-virtual {v5, v6}, Landroid/support/v4/app/NotificationCompat$Builder;->setSmallIcon(I)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object v5

    .line 56
    invoke-virtual {v5, p2}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentTitle(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object v5

    .line 57
    invoke-virtual {v5, p3}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentText(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p3

    .line 58
    invoke-virtual {p3, v2}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentIntent(Landroid/app/PendingIntent;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p3

    .line 59
    invoke-virtual {p3, v1}, Landroid/support/v4/app/NotificationCompat$Builder;->setAutoCancel(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p3

    const/4 v2, 0x0

    .line 60
    invoke-virtual {p3, v2}, Landroid/support/v4/app/NotificationCompat$Builder;->setOnlyAlertOnce(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p3

    .line 61
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    invoke-virtual {p3, v5, v6}, Landroid/support/v4/app/NotificationCompat$Builder;->setWhen(J)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p3

    .line 62
    invoke-virtual {p3, p2}, Landroid/support/v4/app/NotificationCompat$Builder;->setTicker(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p2

    const/4 p3, 0x2

    .line 63
    invoke-virtual {p2, p3}, Landroid/support/v4/app/NotificationCompat$Builder;->setDefaults(I)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p2

    .line 64
    invoke-virtual {p2, p3}, Landroid/support/v4/app/NotificationCompat$Builder;->setPriority(I)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p2

    .line 65
    invoke-virtual {p2, v1}, Landroid/support/v4/app/NotificationCompat$Builder;->setLocalOnly(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p2

    .line 66
    invoke-virtual {p2, v1}, Landroid/support/v4/app/NotificationCompat$Builder;->setShowWhen(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p2

    .line 67
    invoke-virtual {p2, v1}, Landroid/support/v4/app/NotificationCompat$Builder;->setVisibility(I)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 68
    sget p2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 p3, 0x1a

    if-lt p2, p3, :cond_0

    .line 70
    new-instance p2, Landroid/app/NotificationChannel;

    const/4 p3, 0x4

    const-string v2, "\u8fb9\u950b\u6e38\u620f"

    invoke-direct {p2, v4, v2, p3}, Landroid/app/NotificationChannel;-><init>(Ljava/lang/String;Ljava/lang/CharSequence;I)V

    .line 71
    invoke-virtual {p2, v1}, Landroid/app/NotificationChannel;->enableLights(Z)V

    .line 72
    invoke-virtual {p2, v1}, Landroid/app/NotificationChannel;->enableVibration(Z)V

    .line 73
    invoke-virtual {p2, v2}, Landroid/app/NotificationChannel;->setDescription(Ljava/lang/String;)V

    .line 74
    invoke-virtual {p1}, Landroid/app/Activity;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object p1

    iget-object p1, p1, Landroid/content/pm/ApplicationInfo;->name:Ljava/lang/String;

    invoke-virtual {p2, p1}, Landroid/app/NotificationChannel;->setName(Ljava/lang/CharSequence;)V

    const/4 p1, 0x6

    new-array p1, p1, [J

    .line 75
    fill-array-data p1, :array_0

    invoke-virtual {p2, p1}, Landroid/app/NotificationChannel;->setVibrationPattern([J)V

    .line 76
    invoke-virtual {v0, p2}, Landroid/app/NotificationManager;->createNotificationChannel(Landroid/app/NotificationChannel;)V

    .line 78
    invoke-virtual {v3, v4}, Landroid/support/v4/app/NotificationCompat$Builder;->setChannelId(Ljava/lang/String;)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 81
    :cond_0
    invoke-virtual {v3}, Landroid/support/v4/app/NotificationCompat$Builder;->build()Landroid/app/Notification;

    move-result-object p1

    .line 83
    invoke-virtual {v3, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setPublicVersion(Landroid/app/Notification;)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 84
    iget p2, p0, Lcom/bianfeng/ymnsdk/sysfunc/LocalNotificationUtils;->index:I

    invoke-virtual {v0, p2, p1}, Landroid/app/NotificationManager;->notify(ILandroid/app/Notification;)V

    return-void

    nop

    :array_0
    .array-data 8
        0xc8
        0xc8
        0x3e8
        0xc8
        0x3e8
        0xc8
    .end array-data
.end method

.method public sysMessageBox(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V
    .locals 0

    return-void
.end method
