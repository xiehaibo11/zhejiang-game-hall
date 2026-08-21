.class public final Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
.super Ljava/lang/Object;


# annotations
.annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
.end annotation

.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/api/push/KsNotificationCompat;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation


# instance fields
.field private mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    :try_start_0
    new-instance v0, Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-direct {v0, p1, p2}, Landroid/support/v4/app/NotificationCompat$Builder;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    new-instance p2, Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-direct {p2, p1}, Landroid/support/v4/app/NotificationCompat$Builder;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    return-void
.end method


# virtual methods
.method public final addAction(ILjava/lang/CharSequence;Landroid/app/PendingIntent;)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1, p2, p3}, Landroid/support/v4/app/NotificationCompat$Builder;->addAction(ILjava/lang/CharSequence;Landroid/app/PendingIntent;)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final addExtras(Landroid/os/Bundle;)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->addExtras(Landroid/os/Bundle;)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final addPerson(Ljava/lang/String;)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->addPerson(Ljava/lang/String;)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final build()Landroid/app/Notification;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0}, Landroid/support/v4/app/NotificationCompat$Builder;->build()Landroid/app/Notification;

    move-result-object v0

    return-object v0
.end method

.method public final getExtras()Landroid/os/Bundle;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0}, Landroid/support/v4/app/NotificationCompat$Builder;->getExtras()Landroid/os/Bundle;

    move-result-object v0

    return-object v0
.end method

.method public final getNotification()Landroid/app/Notification;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    invoke-virtual {p0}, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->build()Landroid/app/Notification;

    move-result-object v0

    return-object v0
.end method

.method public final setAutoCancel(Z)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setAutoCancel(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setBadgeIconType(I)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setBadgeIconType(I)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setCategory(Ljava/lang/String;)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setCategory(Ljava/lang/String;)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setChannelId(Ljava/lang/String;)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setChannelId(Ljava/lang/String;)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setColor(I)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setColor(I)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setColorized(Z)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setColorized(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setContent(Landroid/widget/RemoteViews;)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setContent(Landroid/widget/RemoteViews;)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setContentInfo(Ljava/lang/CharSequence;)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentInfo(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setContentIntent(Landroid/app/PendingIntent;)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentIntent(Landroid/app/PendingIntent;)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setContentText(Ljava/lang/CharSequence;)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentText(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setContentTitle(Ljava/lang/CharSequence;)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentTitle(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setCustomBigContentView(Landroid/widget/RemoteViews;)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setCustomBigContentView(Landroid/widget/RemoteViews;)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setCustomContentView(Landroid/widget/RemoteViews;)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setCustomContentView(Landroid/widget/RemoteViews;)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setCustomHeadsUpContentView(Landroid/widget/RemoteViews;)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setCustomHeadsUpContentView(Landroid/widget/RemoteViews;)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setDefaults(I)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setDefaults(I)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setDeleteIntent(Landroid/app/PendingIntent;)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setDeleteIntent(Landroid/app/PendingIntent;)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setExtras(Landroid/os/Bundle;)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setExtras(Landroid/os/Bundle;)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setFullScreenIntent(Landroid/app/PendingIntent;Z)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1, p2}, Landroid/support/v4/app/NotificationCompat$Builder;->setFullScreenIntent(Landroid/app/PendingIntent;Z)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setGroup(Ljava/lang/String;)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setGroup(Ljava/lang/String;)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setGroupAlertBehavior(I)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setGroupAlertBehavior(I)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setGroupSummary(Z)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setGroupSummary(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setLargeIcon(Landroid/graphics/Bitmap;)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setLargeIcon(Landroid/graphics/Bitmap;)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setLights(III)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1, p2, p3}, Landroid/support/v4/app/NotificationCompat$Builder;->setLights(III)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setLocalOnly(Z)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setLocalOnly(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setNumber(I)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setNumber(I)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setOngoing(Z)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setOngoing(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setOnlyAlertOnce(Z)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setOnlyAlertOnce(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setPriority(I)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setPriority(I)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setProgress(IIZ)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1, p2, p3}, Landroid/support/v4/app/NotificationCompat$Builder;->setProgress(IIZ)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setPublicVersion(Landroid/app/Notification;)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setPublicVersion(Landroid/app/Notification;)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setRemoteInputHistory([Ljava/lang/CharSequence;)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setRemoteInputHistory([Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setShortcutId(Ljava/lang/String;)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setShortcutId(Ljava/lang/String;)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setShowWhen(Z)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setShowWhen(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setSmallIcon(I)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setSmallIcon(I)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setSmallIcon(II)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1, p2}, Landroid/support/v4/app/NotificationCompat$Builder;->setSmallIcon(II)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setSortKey(Ljava/lang/String;)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setSortKey(Ljava/lang/String;)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setSound(Landroid/net/Uri;)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setSound(Landroid/net/Uri;)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setSound(Landroid/net/Uri;I)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1, p2}, Landroid/support/v4/app/NotificationCompat$Builder;->setSound(Landroid/net/Uri;I)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setSubText(Ljava/lang/CharSequence;)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setSubText(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setTicker(Ljava/lang/CharSequence;)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setTicker(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setTicker(Ljava/lang/CharSequence;Landroid/widget/RemoteViews;)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1, p2}, Landroid/support/v4/app/NotificationCompat$Builder;->setTicker(Ljava/lang/CharSequence;Landroid/widget/RemoteViews;)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setTimeoutAfter(J)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1, p2}, Landroid/support/v4/app/NotificationCompat$Builder;->setTimeoutAfter(J)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setUsesChronometer(Z)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setUsesChronometer(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setVibrate([J)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setVibrate([J)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setVisibility(I)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setVisibility(I)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method

.method public final setWhen(J)Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/push/KsNotificationCompat$Builder;->mBuilder:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0, p1, p2}, Landroid/support/v4/app/NotificationCompat$Builder;->setWhen(J)Landroid/support/v4/app/NotificationCompat$Builder;

    return-object p0
.end method
