.class public final Lcom/mbridge/msdk/mbdownload/j;
.super Ljava/lang/Object;
.source "NotificationUtils.java"


# direct methods
.method public static a(Landroid/content/Context;Ljava/lang/String;)Landroid/app/PendingIntent;
    .locals 2

    .line 79
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/mbridge/msdk/shell/MBService;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string v1, "com.mbridge.msdk.broadcast.download.msg"

    .line 80
    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 82
    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result p1

    const/high16 v1, 0x8000000

    .line 81
    invoke-static {p0, p1, v0, v1}, Landroid/app/PendingIntent;->getService(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object p0

    return-object p0
.end method

.method public static a(ILjava/lang/String;)Ljava/lang/String;
    .locals 2

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 46
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p0, ""

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, p0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const-string p0, ":"

    .line 47
    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 48
    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 50
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static a()V
    .locals 5

    .line 101
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 104
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->w(Landroid/content/Context;)I

    move-result v1

    const/16 v2, 0x1a

    if-lt v1, v2, :cond_0

    .line 108
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v1, v2, :cond_0

    const/4 v1, 0x2

    const-string v2, "notification"

    .line 1117
    invoke-virtual {v0, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/NotificationManager;

    .line 1118
    new-instance v2, Landroid/app/NotificationChannel;

    const-string v3, "\u4e0b\u8f7d\u8fdb\u5ea6"

    const-string v4, "download"

    invoke-direct {v2, v4, v3, v1}, Landroid/app/NotificationChannel;-><init>(Ljava/lang/String;Ljava/lang/CharSequence;I)V

    .line 1119
    invoke-virtual {v0, v2}, Landroid/app/NotificationManager;->createNotificationChannel(Landroid/app/NotificationChannel;)V

    :cond_0
    return-void
.end method
