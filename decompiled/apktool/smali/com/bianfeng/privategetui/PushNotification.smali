.class public Lcom/bianfeng/privategetui/PushNotification;
.super Landroid/app/Notification;
.source "PushNotification.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/privategetui/PushNotification$PeriodType;
    }
.end annotation


# static fields
.field private static final INTERVALS:[J

.field private static final TAG:Ljava/lang/String; = "PushNotification"


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const/4 v0, 0x3

    new-array v0, v0, [J

    .line 30
    fill-array-data v0, :array_0

    sput-object v0, Lcom/bianfeng/privategetui/PushNotification;->INTERVALS:[J

    return-void

    nop

    :array_0
    .array-data 8
        0x36ee80
        0x5265c00
        -0x65813800
    .end array-data
.end method

.method public constructor <init>()V
    .locals 0

    .line 20
    invoke-direct {p0}, Landroid/app/Notification;-><init>()V

    return-void
.end method

.method public static cancelRepeating(Landroid/content/Context;Ljava/lang/String;)V
    .locals 2

    .line 68
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/bianfeng/privategetui/PushReceiver;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string v1, "com.bianfeng.push.action.local"

    .line 69
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 72
    invoke-static {p1}, Lcom/bianfeng/privategetui/PushNotification;->generateNotifyId(Ljava/lang/String;)I

    move-result p1

    const/high16 v1, 0x8000000

    .line 71
    invoke-static {p0, p1, v0, v1}, Landroid/app/PendingIntent;->getBroadcast(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object p1

    const-string v0, "alarm"

    .line 73
    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/app/AlarmManager;

    .line 74
    invoke-virtual {p0, p1}, Landroid/app/AlarmManager;->cancel(Landroid/app/PendingIntent;)V

    return-void
.end method

.method private static generateNotifyId(Ljava/lang/String;)I
    .locals 0

    .line 154
    invoke-virtual {p0}, Ljava/lang/String;->hashCode()I

    move-result p0

    return p0
.end method

.method private static getDefaultIcon(Landroid/content/Context;)I
    .locals 2

    .line 137
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    .line 138
    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/4 v1, 0x1

    invoke-virtual {v0, p0, v1}, Landroid/content/pm/PackageManager;->getApplicationInfo(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;

    move-result-object p0

    .line 139
    iget p0, p0, Landroid/content/pm/ApplicationInfo;->icon:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 141
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    const p0, 0x1080093

    return p0
.end method

.method private static getTargetIntent(Landroid/content/Context;)Landroid/content/Intent;
    .locals 1

    .line 147
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    .line 148
    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Landroid/content/pm/PackageManager;->getLaunchIntentForPackage(Ljava/lang/String;)Landroid/content/Intent;

    move-result-object p0

    const/high16 v0, 0x20000000

    .line 149
    invoke-virtual {p0, v0}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    return-object p0
.end method

.method public static repeating(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;JJ)V
    .locals 7

    .line 54
    invoke-static {p0, p1, p2, p3}, Lcom/bianfeng/privategetui/PushReceiver;->createLocalAction(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    move-result-object p1

    .line 56
    invoke-static {p2}, Lcom/bianfeng/privategetui/PushNotification;->generateNotifyId(Ljava/lang/String;)I

    move-result p2

    const/high16 p3, 0x8000000

    .line 55
    invoke-static {p0, p2, p1, p3}, Landroid/app/PendingIntent;->getBroadcast(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object v6

    const-string p1, "alarm"

    .line 57
    invoke-virtual {p0, p1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    move-object v0, p0

    check-cast v0, Landroid/app/AlarmManager;

    const-wide/16 p0, 0x1f4

    add-long v2, p4, p0

    const/4 v1, 0x0

    move-wide v4, p6

    .line 58
    invoke-virtual/range {v0 .. v6}, Landroid/app/AlarmManager;->setRepeating(IJJLandroid/app/PendingIntent;)V

    return-void
.end method

.method public static repeating(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;JLcom/bianfeng/privategetui/PushNotification$PeriodType;)V
    .locals 9

    .line 37
    sget-object v0, Lcom/bianfeng/privategetui/PushNotification;->INTERVALS:[J

    invoke-virtual {p6}, Lcom/bianfeng/privategetui/PushNotification$PeriodType;->ordinal()I

    move-result p6

    aget-wide v7, v0, p6

    move-object v1, p0

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-wide v5, p4

    .line 38
    invoke-static/range {v1 .. v8}, Lcom/bianfeng/privategetui/PushNotification;->repeating(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;JJ)V

    return-void
.end method

.method public static show(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 86
    invoke-static {p0, p1, p2, p3}, Lcom/bianfeng/privategetui/PushNotification;->showImmediately(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static show(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V
    .locals 4

    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p2, v0, v1

    const/4 v2, 0x1

    aput-object p3, v0, v2

    .line 100
    invoke-static {p4, p5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    const/4 v3, 0x2

    aput-object v2, v0, v3

    const-string v2, "try show notification (%s, %s)->%d"

    invoke-static {v2, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    const-string v2, "PushNotification"

    invoke-static {v2, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 101
    invoke-static {p0, p1, p2, p3}, Lcom/bianfeng/privategetui/PushReceiver;->createLocalAction(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    move-result-object p1

    .line 102
    invoke-static {p2}, Lcom/bianfeng/privategetui/PushNotification;->generateNotifyId(Ljava/lang/String;)I

    move-result p2

    const/high16 p3, 0x8000000

    invoke-static {p0, p2, p1, p3}, Landroid/app/PendingIntent;->getBroadcast(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object p1

    const-string p2, "alarm"

    .line 103
    invoke-virtual {p0, p2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/app/AlarmManager;

    const-wide/16 p2, 0x1f4

    add-long/2addr p4, p2

    .line 104
    invoke-virtual {p0, v1, p4, p5, p1}, Landroid/app/AlarmManager;->set(IJLandroid/app/PendingIntent;)V

    return-void
.end method

.method public static showImmediately(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 7

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p2, v0, v1

    const/4 v1, 0x1

    aput-object p3, v0, v1

    const-string v2, "try show notification (%s, %s)"

    .line 110
    invoke-static {v2, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    const-string v2, "PushNotification"

    invoke-static {v2, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 112
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    .line 113
    invoke-static {p2}, Lcom/bianfeng/privategetui/PushNotification;->generateNotifyId(Ljava/lang/String;)I

    move-result v2

    const-string v3, "notification"

    .line 114
    invoke-virtual {p0, v3}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/app/NotificationManager;

    .line 119
    invoke-static {p0}, Lcom/bianfeng/privategetui/PushNotification;->getTargetIntent(Landroid/content/Context;)Landroid/content/Intent;

    move-result-object v4

    const v5, 0x186aa

    const/high16 v6, 0x8000000

    .line 116
    invoke-static {p0, v5, v4, v6}, Landroid/app/PendingIntent;->getActivity(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object v4

    .line 122
    new-instance v5, Landroid/app/Notification$Builder;

    invoke-direct {v5, p0}, Landroid/app/Notification$Builder;-><init>(Landroid/content/Context;)V

    .line 123
    invoke-static {p0}, Lcom/bianfeng/privategetui/PushNotification;->getDefaultIcon(Landroid/content/Context;)I

    move-result p0

    invoke-virtual {v5, p0}, Landroid/app/Notification$Builder;->setSmallIcon(I)Landroid/app/Notification$Builder;

    .line 124
    invoke-virtual {v5, p1}, Landroid/app/Notification$Builder;->setTicker(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;

    .line 125
    invoke-virtual {v5, p2}, Landroid/app/Notification$Builder;->setContentTitle(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;

    .line 126
    invoke-virtual {v5, p3}, Landroid/app/Notification$Builder;->setContentText(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;

    .line 127
    invoke-virtual {v5, v4}, Landroid/app/Notification$Builder;->setContentIntent(Landroid/app/PendingIntent;)Landroid/app/Notification$Builder;

    .line 128
    invoke-virtual {v5, v1}, Landroid/app/Notification$Builder;->setNumber(I)Landroid/app/Notification$Builder;

    const/16 p0, 0x10

    if-ge v0, p0, :cond_0

    .line 130
    invoke-virtual {v5}, Landroid/app/Notification$Builder;->getNotification()Landroid/app/Notification;

    move-result-object p1

    goto :goto_0

    :cond_0
    invoke-virtual {v5}, Landroid/app/Notification$Builder;->build()Landroid/app/Notification;

    move-result-object p1

    .line 131
    :goto_0
    iget p2, p1, Landroid/app/Notification;->flags:I

    or-int/2addr p0, p2

    iput p0, p1, Landroid/app/Notification;->flags:I

    .line 132
    invoke-virtual {v3, v2, p1}, Landroid/app/NotificationManager;->notify(ILandroid/app/Notification;)V

    return-void
.end method

.method public static showLoacl(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    const-string v0, ""

    .line 158
    invoke-static {p0, p1, p2, p3, v0}, Lcom/bianfeng/privategetui/PushNotification;->showLoacl(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static showLoacl(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 10

    const-string v0, "notification"

    .line 162
    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/NotificationManager;

    .line 163
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x1a

    if-lt v1, v2, :cond_0

    .line 164
    new-instance v1, Landroid/app/NotificationChannel;

    const/4 v2, 0x4

    invoke-direct {v1, p1, p2, v2}, Landroid/app/NotificationChannel;-><init>(Ljava/lang/String;Ljava/lang/CharSequence;I)V

    if-eqz v0, :cond_0

    .line 166
    invoke-virtual {v0, v1}, Landroid/app/NotificationManager;->createNotificationChannel(Landroid/app/NotificationChannel;)V

    .line 169
    :cond_0
    new-instance v1, Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-direct {v1, p0}, Landroid/support/v4/app/NotificationCompat$Builder;-><init>(Landroid/content/Context;)V

    const-string v2, "PUSH_APP_MAIN_ACTIVITY"

    .line 170
    invoke-static {v2}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 171
    invoke-virtual {v2}, Ljava/lang/String;->isEmpty()Z

    move-result v2

    const/4 v3, -0x1

    const-string v4, "R.drawable.push_small"

    const/high16 v5, 0x24000000

    const-wide/16 v6, 0x3e8

    if-nez v2, :cond_2

    .line 173
    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    div-long/2addr v8, v6

    long-to-int v2, v8

    .line 174
    new-instance v6, Landroid/content/Intent;

    const-class v7, Lcom/bianfeng/privategetui/ToMainActivityBroadcastReceiver;

    invoke-direct {v6, p0, v7}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string v7, "notificationId"

    .line 175
    invoke-virtual {v6, v7, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 176
    invoke-virtual {p4}, Ljava/lang/String;->isEmpty()Z

    move-result v7

    if-nez v7, :cond_1

    const-string v7, "click"

    .line 178
    invoke-virtual {v6, v7, p4}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 180
    :cond_1
    invoke-virtual {v6, v5}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    const/high16 p4, 0x8000000

    .line 182
    invoke-static {p0, v2, v6, p4}, Landroid/app/PendingIntent;->getBroadcast(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object p4

    .line 183
    invoke-virtual {v1, p2}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentTitle(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p2

    .line 184
    invoke-virtual {p2, p4}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentIntent(Landroid/app/PendingIntent;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p2

    .line 185
    invoke-virtual {p2, p3}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentText(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p2

    .line 186
    invoke-virtual {p2, p3}, Landroid/support/v4/app/NotificationCompat$Builder;->setTicker(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p2

    .line 187
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p3

    invoke-virtual {p2, p3, p4}, Landroid/support/v4/app/NotificationCompat$Builder;->setWhen(J)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p2

    .line 188
    invoke-static {p0, v4}, Lcom/bianfeng/privategetui/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p0

    invoke-virtual {p2, p0}, Landroid/support/v4/app/NotificationCompat$Builder;->setSmallIcon(I)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p0

    .line 189
    invoke-virtual {p0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setChannelId(Ljava/lang/String;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p0

    .line 190
    invoke-virtual {p0, v3}, Landroid/support/v4/app/NotificationCompat$Builder;->setDefaults(I)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 192
    invoke-virtual {v1}, Landroid/support/v4/app/NotificationCompat$Builder;->build()Landroid/app/Notification;

    move-result-object p0

    .line 193
    iget p1, p0, Landroid/app/Notification;->flags:I

    or-int/lit8 p1, p1, 0x10

    iput p1, p0, Landroid/app/Notification;->flags:I

    if-eqz v0, :cond_3

    .line 195
    invoke-virtual {v0, v2, p0}, Landroid/app/NotificationManager;->notify(ILandroid/app/Notification;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 198
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_0

    .line 202
    :cond_2
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    div-long/2addr v8, v6

    long-to-int p4, v8

    .line 203
    new-instance v2, Landroid/content/Intent;

    invoke-direct {v2}, Landroid/content/Intent;-><init>()V

    .line 204
    invoke-virtual {v2, p0, p1}, Landroid/content/Intent;->setClassName(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;

    .line 205
    invoke-virtual {v2, v5}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    const/4 v5, 0x0

    .line 206
    invoke-static {p0, v5, v2, v5}, Landroid/app/PendingIntent;->getActivity(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object v2

    .line 207
    invoke-virtual {v1, p2}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentTitle(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p2

    .line 208
    invoke-virtual {p2, v2}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentIntent(Landroid/app/PendingIntent;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p2

    .line 209
    invoke-virtual {p2, p3}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentText(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p2

    .line 210
    invoke-virtual {p2, p3}, Landroid/support/v4/app/NotificationCompat$Builder;->setTicker(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p2

    .line 211
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    invoke-virtual {p2, v5, v6}, Landroid/support/v4/app/NotificationCompat$Builder;->setWhen(J)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p2

    .line 212
    invoke-static {p0, v4}, Lcom/bianfeng/privategetui/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p0

    invoke-virtual {p2, p0}, Landroid/support/v4/app/NotificationCompat$Builder;->setSmallIcon(I)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p0

    .line 213
    invoke-virtual {p0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setChannelId(Ljava/lang/String;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p0

    .line 214
    invoke-virtual {p0, v3}, Landroid/support/v4/app/NotificationCompat$Builder;->setDefaults(I)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 216
    invoke-virtual {v1}, Landroid/support/v4/app/NotificationCompat$Builder;->build()Landroid/app/Notification;

    move-result-object p0

    .line 217
    iget p1, p0, Landroid/app/Notification;->flags:I

    or-int/lit8 p1, p1, 0x10

    iput p1, p0, Landroid/app/Notification;->flags:I

    if-eqz v0, :cond_3

    .line 219
    invoke-virtual {v0, p4, p0}, Landroid/app/NotificationManager;->notify(ILandroid/app/Notification;)V

    :cond_3
    :goto_0
    return-void
.end method
