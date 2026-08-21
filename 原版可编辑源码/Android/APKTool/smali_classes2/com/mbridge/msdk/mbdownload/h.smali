.class public Lcom/mbridge/msdk/mbdownload/h;
.super Ljava/lang/Object;
.source "NotificationBuilder.java"


# instance fields
.field protected e:Landroid/content/Context;

.field protected f:Landroid/app/Notification;

.field protected g:Landroid/app/Notification$Builder;

.field protected h:Landroid/support/v4/app/NotificationCompat$Builder;

.field protected i:Landroid/app/PendingIntent;

.field protected j:Landroid/widget/RemoteViews;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 5

    .line 27
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 28
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/h;->e:Landroid/content/Context;

    .line 29
    new-instance v0, Landroid/widget/RemoteViews;

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/h;->e:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/mbdownload/h;->e:Landroid/content/Context;

    const-string v3, "mbridge_download_notify_layout"

    const-string v4, "layout"

    invoke-static {v2, v3, v4}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-direct {v0, v1, v2}, Landroid/widget/RemoteViews;-><init>(Ljava/lang/String;I)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/h;->j:Landroid/widget/RemoteViews;

    if-eqz p1, :cond_0

    .line 33
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/h;->e:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    iget v0, v0, Landroid/content/pm/ApplicationInfo;->targetSdkVersion:I

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    const/16 v1, 0x1a

    if-lt v0, v1, :cond_1

    .line 35
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v0, v1, :cond_1

    .line 36
    new-instance p1, Landroid/support/v4/app/NotificationCompat$Builder;

    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/h;->e:Landroid/content/Context;

    const-string v1, "download"

    invoke-direct {p1, v0, v1}, Landroid/support/v4/app/NotificationCompat$Builder;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/h;->h:Landroid/support/v4/app/NotificationCompat$Builder;

    .line 37
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/h;->j:Landroid/widget/RemoteViews;

    invoke-virtual {p1, v0}, Landroid/support/v4/app/NotificationCompat$Builder;->setCustomContentView(Landroid/widget/RemoteViews;)Landroid/support/v4/app/NotificationCompat$Builder;

    goto :goto_1

    .line 38
    :cond_1
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x10

    if-lt v0, v1, :cond_2

    .line 39
    new-instance v0, Landroid/app/Notification$Builder;

    invoke-direct {v0, p1}, Landroid/app/Notification$Builder;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/h;->g:Landroid/app/Notification$Builder;

    .line 40
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/h;->j:Landroid/widget/RemoteViews;

    invoke-virtual {v0, p1}, Landroid/app/Notification$Builder;->setContent(Landroid/widget/RemoteViews;)Landroid/app/Notification$Builder;

    goto :goto_1

    .line 42
    :cond_2
    new-instance p1, Landroid/app/Notification;

    invoke-direct {p1}, Landroid/app/Notification;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/h;->f:Landroid/app/Notification;

    :goto_1
    return-void
.end method


# virtual methods
.method public final a(I)Lcom/mbridge/msdk/mbdownload/h;
    .locals 2

    .line 129
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/h;->e:Landroid/content/Context;

    if-eqz v0, :cond_0

    .line 130
    invoke-virtual {v0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    iget v0, v0, Landroid/content/pm/ApplicationInfo;->targetSdkVersion:I

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    const/16 v1, 0x1a

    if-lt v0, v1, :cond_1

    .line 132
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v0, v1, :cond_1

    .line 133
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/h;->h:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setSmallIcon(I)Landroid/support/v4/app/NotificationCompat$Builder;

    goto :goto_1

    .line 135
    :cond_1
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x10

    if-lt v0, v1, :cond_2

    .line 136
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/h;->g:Landroid/app/Notification$Builder;

    invoke-virtual {v0, p1}, Landroid/app/Notification$Builder;->setSmallIcon(I)Landroid/app/Notification$Builder;

    goto :goto_1

    .line 139
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/h;->f:Landroid/app/Notification;

    iput p1, v0, Landroid/app/Notification;->icon:I

    :goto_1
    return-object p0
.end method

.method public final a(J)Lcom/mbridge/msdk/mbdownload/h;
    .locals 2

    .line 173
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/h;->e:Landroid/content/Context;

    if-eqz v0, :cond_0

    .line 174
    invoke-virtual {v0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    iget v0, v0, Landroid/content/pm/ApplicationInfo;->targetSdkVersion:I

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    const/16 v1, 0x1a

    if-lt v0, v1, :cond_1

    .line 176
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v0, v1, :cond_1

    .line 177
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/h;->h:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1, p2}, Landroid/support/v4/app/NotificationCompat$Builder;->setWhen(J)Landroid/support/v4/app/NotificationCompat$Builder;

    goto :goto_1

    .line 178
    :cond_1
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x10

    if-lt v0, v1, :cond_2

    .line 179
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/h;->g:Landroid/app/Notification$Builder;

    invoke-virtual {v0, p1, p2}, Landroid/app/Notification$Builder;->setWhen(J)Landroid/app/Notification$Builder;

    goto :goto_1

    .line 181
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/h;->f:Landroid/app/Notification;

    iput-wide p1, v0, Landroid/app/Notification;->when:J

    :goto_1
    return-object p0
.end method

.method public final a(Z)Lcom/mbridge/msdk/mbdownload/h;
    .locals 2

    .line 91
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/h;->e:Landroid/content/Context;

    if-eqz v0, :cond_0

    .line 92
    invoke-virtual {v0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    iget v0, v0, Landroid/content/pm/ApplicationInfo;->targetSdkVersion:I

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    const/16 v1, 0x1a

    if-lt v0, v1, :cond_1

    .line 94
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v0, v1, :cond_1

    .line 95
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/h;->h:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setOngoing(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    goto :goto_1

    .line 96
    :cond_1
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x10

    if-lt v0, v1, :cond_2

    .line 97
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/h;->g:Landroid/app/Notification$Builder;

    invoke-virtual {v0, p1}, Landroid/app/Notification$Builder;->setOngoing(Z)Landroid/app/Notification$Builder;

    goto :goto_1

    :cond_2
    if-eqz p1, :cond_3

    .line 100
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/h;->f:Landroid/app/Notification;

    iget v0, p1, Landroid/app/Notification;->flags:I

    or-int/lit8 v0, v0, 0x2

    iput v0, p1, Landroid/app/Notification;->flags:I

    goto :goto_1

    .line 102
    :cond_3
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/h;->f:Landroid/app/Notification;

    iget v0, p1, Landroid/app/Notification;->flags:I

    and-int/lit8 v0, v0, -0x3

    iput v0, p1, Landroid/app/Notification;->flags:I

    :goto_1
    return-object p0
.end method

.method public final b(Z)Lcom/mbridge/msdk/mbdownload/h;
    .locals 2

    .line 110
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/h;->e:Landroid/content/Context;

    if-eqz v0, :cond_0

    .line 111
    invoke-virtual {v0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    iget v0, v0, Landroid/content/pm/ApplicationInfo;->targetSdkVersion:I

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    const/16 v1, 0x1a

    if-lt v0, v1, :cond_1

    .line 113
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v0, v1, :cond_1

    .line 114
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/h;->h:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setAutoCancel(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    goto :goto_1

    .line 115
    :cond_1
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x10

    if-lt v0, v1, :cond_2

    .line 116
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/h;->g:Landroid/app/Notification$Builder;

    invoke-virtual {v0, p1}, Landroid/app/Notification$Builder;->setAutoCancel(Z)Landroid/app/Notification$Builder;

    goto :goto_1

    :cond_2
    if-eqz p1, :cond_3

    .line 119
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/h;->f:Landroid/app/Notification;

    iget v0, p1, Landroid/app/Notification;->flags:I

    or-int/2addr v0, v1

    iput v0, p1, Landroid/app/Notification;->flags:I

    goto :goto_1

    .line 121
    :cond_3
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/h;->f:Landroid/app/Notification;

    iget v0, p1, Landroid/app/Notification;->flags:I

    and-int/lit8 v0, v0, -0x11

    iput v0, p1, Landroid/app/Notification;->flags:I

    :goto_1
    return-object p0
.end method

.method public final e()V
    .locals 4

    .line 48
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/h;->e:Landroid/content/Context;

    if-eqz v0, :cond_0

    .line 49
    invoke-virtual {v0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    iget v0, v0, Landroid/content/pm/ApplicationInfo;->targetSdkVersion:I

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    const/4 v1, 0x1

    const-string v2, "mActions"

    const/16 v3, 0x1a

    if-lt v0, v3, :cond_1

    .line 51
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v0, v3, :cond_1

    .line 53
    :try_start_0
    const-class v0, Landroid/support/v4/app/NotificationCompat$Builder;

    .line 54
    invoke-virtual {v0, v2}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v0

    .line 55
    invoke-virtual {v0, v1}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    .line 56
    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/h;->h:Landroid/support/v4/app/NotificationCompat$Builder;

    iget-object v2, p0, Lcom/mbridge/msdk/mbdownload/h;->h:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, v2}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    .line 57
    invoke-virtual {v2}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v2

    .line 56
    invoke-virtual {v0, v1, v2}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    .line 61
    :cond_1
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x10

    if-lt v0, v3, :cond_2

    .line 63
    :try_start_1
    const-class v0, Landroid/app/Notification$Builder;

    .line 64
    invoke-virtual {v0, v2}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v0

    .line 65
    invoke-virtual {v0, v1}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    .line 66
    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/h;->g:Landroid/app/Notification$Builder;

    iget-object v2, p0, Lcom/mbridge/msdk/mbdownload/h;->g:Landroid/app/Notification$Builder;

    invoke-virtual {v0, v2}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    .line 67
    invoke-virtual {v2}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v2

    .line 66
    invoke-virtual {v0, v1, v2}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    :cond_2
    :goto_1
    return-void
.end method
