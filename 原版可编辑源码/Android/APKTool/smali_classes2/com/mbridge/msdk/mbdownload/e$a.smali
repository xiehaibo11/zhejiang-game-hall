.class final Lcom/mbridge/msdk/mbdownload/e$a;
.super Lcom/mbridge/msdk/mbdownload/h;
.source "DownloadTool.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbdownload/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# instance fields
.field a:Ljava/lang/String;

.field b:Ljava/lang/String;

.field c:Ljava/lang/String;

.field d:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 136
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbdownload/h;-><init>(Landroid/content/Context;)V

    .line 137
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/e$a;->d:Landroid/content/Context;

    return-void
.end method


# virtual methods
.method public final a()Lcom/mbridge/msdk/mbdownload/e$a;
    .locals 5

    .line 222
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$a;->j:Landroid/widget/RemoteViews;

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/e$a;->d:Landroid/content/Context;

    const-string v2, "id"

    const-string v3, "mbridge_download_notify_pause"

    invoke-static {v1, v3, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v3}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    .line 223
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$a;->j:Landroid/widget/RemoteViews;

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/e$a;->d:Landroid/content/Context;

    const-string v3, "mbridge_download_notify_continue"

    invoke-static {v1, v3, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    const/16 v3, 0x8

    invoke-virtual {v0, v1, v3}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    .line 224
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$a;->j:Landroid/widget/RemoteViews;

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/e$a;->d:Landroid/content/Context;

    const-string v4, "mbridge_download_notify_progress_status"

    invoke-static {v1, v4, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, v3}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    return-object p0
.end method

.method public final a(IIZ)Lcom/mbridge/msdk/mbdownload/e$a;
    .locals 4

    .line 257
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x10

    if-lt v0, v1, :cond_0

    .line 259
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$a;->j:Landroid/widget/RemoteViews;

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/e$a;->e:Landroid/content/Context;

    const-string v2, "mbridge_download_notify_progress"

    const-string v3, "id"

    invoke-static {v1, v2, v3}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, p1, p2, p3}, Landroid/widget/RemoteViews;->setProgressBar(IIIZ)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 261
    invoke-static {}, Lcom/mbridge/msdk/mbdownload/e;->b()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 265
    :cond_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, "%"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/e$a;->c:Ljava/lang/String;

    :goto_0
    return-object p0
.end method

.method public final a(Ljava/lang/CharSequence;)Lcom/mbridge/msdk/mbdownload/e$a;
    .locals 6

    .line 142
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$a;->d:Landroid/content/Context;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 143
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->w(Landroid/content/Context;)I

    move-result v0

    goto :goto_0

    :cond_0
    move v0, v1

    .line 145
    :goto_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    const-string v3, "id"

    if-nez v2, :cond_1

    invoke-interface {p1}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v4, "%"

    invoke-virtual {v2, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 146
    iget-object v2, p0, Lcom/mbridge/msdk/mbdownload/e$a;->j:Landroid/widget/RemoteViews;

    iget-object v4, p0, Lcom/mbridge/msdk/mbdownload/e$a;->d:Landroid/content/Context;

    const-string v5, "mbridge_download_notify_progress_status"

    invoke-static {v4, v5, v3}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    const/16 v5, 0x8

    invoke-virtual {v2, v4, v5}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    .line 148
    :cond_1
    iget-object v2, p0, Lcom/mbridge/msdk/mbdownload/e$a;->j:Landroid/widget/RemoteViews;

    iget-object v4, p0, Lcom/mbridge/msdk/mbdownload/e$a;->d:Landroid/content/Context;

    const-string v5, "mbridge_download_notify_progress_progess"

    invoke-static {v4, v5, v3}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v2, v4, v1}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    const/16 v1, 0x1a

    if-lt v0, v1, :cond_2

    .line 149
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v0, v1, :cond_2

    .line 151
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$a;->j:Landroid/widget/RemoteViews;

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/e$a;->e:Landroid/content/Context;

    invoke-static {v1, v5, v3}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, p1}, Landroid/widget/RemoteViews;->setTextViewText(ILjava/lang/CharSequence;)V

    goto :goto_1

    .line 152
    :cond_2
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x10

    if-lt v0, v1, :cond_3

    .line 154
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$a;->j:Landroid/widget/RemoteViews;

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/e$a;->e:Landroid/content/Context;

    invoke-static {v1, v5, v3}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, p1}, Landroid/widget/RemoteViews;->setTextViewText(ILjava/lang/CharSequence;)V

    goto :goto_1

    .line 156
    :cond_3
    invoke-interface {p1}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/e$a;->b:Ljava/lang/String;

    :goto_1
    return-object p0
.end method

.method public final a(Ljava/lang/String;)Lcom/mbridge/msdk/mbdownload/e$a;
    .locals 2

    .line 199
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$a;->d:Landroid/content/Context;

    if-eqz v0, :cond_0

    .line 200
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->w(Landroid/content/Context;)I

    .line 202
    :cond_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 203
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$a;->d:Landroid/content/Context;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v0

    new-instance v1, Lcom/mbridge/msdk/mbdownload/e$a$1;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/mbdownload/e$a$1;-><init>(Lcom/mbridge/msdk/mbdownload/e$a;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V

    :cond_1
    return-object p0
.end method

.method public final b()Lcom/mbridge/msdk/mbdownload/e$a;
    .locals 5

    .line 228
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$a;->j:Landroid/widget/RemoteViews;

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/e$a;->d:Landroid/content/Context;

    const-string v2, "id"

    const-string v3, "mbridge_download_notify_pause"

    invoke-static {v1, v3, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    const/16 v3, 0x8

    invoke-virtual {v0, v1, v3}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    .line 229
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$a;->j:Landroid/widget/RemoteViews;

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/e$a;->d:Landroid/content/Context;

    const-string v4, "mbridge_download_notify_continue"

    invoke-static {v1, v4, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, v3}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    return-object p0
.end method

.method public final b(Ljava/lang/CharSequence;)Lcom/mbridge/msdk/mbdownload/e$a;
    .locals 6

    .line 163
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$a;->d:Landroid/content/Context;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 164
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->w(Landroid/content/Context;)I

    move-result v0

    goto :goto_0

    :cond_0
    move v0, v1

    .line 166
    :goto_0
    iget-object v2, p0, Lcom/mbridge/msdk/mbdownload/e$a;->j:Landroid/widget/RemoteViews;

    iget-object v3, p0, Lcom/mbridge/msdk/mbdownload/e$a;->d:Landroid/content/Context;

    const-string v4, "mbridge_download_notify_progress_status"

    const-string v5, "id"

    invoke-static {v3, v4, v5}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3, v1}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    .line 167
    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/e$a;->j:Landroid/widget/RemoteViews;

    iget-object v2, p0, Lcom/mbridge/msdk/mbdownload/e$a;->d:Landroid/content/Context;

    const-string v3, "mbridge_download_notify_progress_progess"

    invoke-static {v2, v3, v5}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    const/16 v3, 0x8

    invoke-virtual {v1, v2, v3}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    const/16 v1, 0x1a

    if-lt v0, v1, :cond_1

    .line 168
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v0, v1, :cond_1

    .line 170
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$a;->j:Landroid/widget/RemoteViews;

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/e$a;->e:Landroid/content/Context;

    invoke-static {v1, v4, v5}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, p1}, Landroid/widget/RemoteViews;->setTextViewText(ILjava/lang/CharSequence;)V

    goto :goto_1

    .line 171
    :cond_1
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x10

    if-lt v0, v1, :cond_2

    .line 173
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$a;->j:Landroid/widget/RemoteViews;

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/e$a;->e:Landroid/content/Context;

    invoke-static {v1, v4, v5}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, p1}, Landroid/widget/RemoteViews;->setTextViewText(ILjava/lang/CharSequence;)V

    goto :goto_1

    .line 175
    :cond_2
    invoke-interface {p1}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/e$a;->b:Ljava/lang/String;

    :goto_1
    return-object p0
.end method

.method public final c()Lcom/mbridge/msdk/mbdownload/e$a;
    .locals 5

    .line 235
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$a;->j:Landroid/widget/RemoteViews;

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/e$a;->d:Landroid/content/Context;

    const-string v2, "id"

    const-string v3, "mbridge_download_notify_pause"

    invoke-static {v1, v3, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    const/16 v3, 0x8

    invoke-virtual {v0, v1, v3}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    .line 236
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$a;->j:Landroid/widget/RemoteViews;

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/e$a;->d:Landroid/content/Context;

    const-string v4, "mbridge_download_notify_continue"

    invoke-static {v1, v4, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    const/4 v4, 0x0

    invoke-virtual {v0, v1, v4}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    .line 237
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$a;->j:Landroid/widget/RemoteViews;

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/e$a;->d:Landroid/content/Context;

    const-string v4, "mbridge_download_notify_progress_status"

    invoke-static {v1, v4, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, v3}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    return-object p0
.end method

.method public final c(Ljava/lang/CharSequence;)Lcom/mbridge/msdk/mbdownload/e$a;
    .locals 4

    .line 183
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$a;->d:Landroid/content/Context;

    if-eqz v0, :cond_0

    .line 184
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->w(Landroid/content/Context;)I

    move-result v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    const-string v1, "id"

    const-string v2, "mbridge_download_notify_target_name"

    const/16 v3, 0x1a

    if-lt v0, v3, :cond_1

    .line 186
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v0, v3, :cond_1

    .line 188
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$a;->j:Landroid/widget/RemoteViews;

    iget-object v3, p0, Lcom/mbridge/msdk/mbdownload/e$a;->e:Landroid/content/Context;

    invoke-static {v3, v2, v1}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, p1}, Landroid/widget/RemoteViews;->setTextViewText(ILjava/lang/CharSequence;)V

    goto :goto_1

    .line 189
    :cond_1
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x10

    if-lt v0, v3, :cond_2

    .line 191
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$a;->j:Landroid/widget/RemoteViews;

    iget-object v3, p0, Lcom/mbridge/msdk/mbdownload/e$a;->e:Landroid/content/Context;

    invoke-static {v3, v2, v1}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, p1}, Landroid/widget/RemoteViews;->setTextViewText(ILjava/lang/CharSequence;)V

    goto :goto_1

    .line 193
    :cond_2
    invoke-interface {p1}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/e$a;->a:Ljava/lang/String;

    :goto_1
    return-object p0
.end method

.method public final d()Landroid/app/Notification;
    .locals 2

    .line 273
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$a;->d:Landroid/content/Context;

    if-eqz v0, :cond_0

    .line 274
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->w(Landroid/content/Context;)I

    move-result v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    const/16 v1, 0x1a

    if-lt v0, v1, :cond_1

    .line 276
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v0, v1, :cond_1

    .line 277
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$a;->h:Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-virtual {v0}, Landroid/support/v4/app/NotificationCompat$Builder;->build()Landroid/app/Notification;

    move-result-object v0

    return-object v0

    .line 278
    :cond_1
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x10

    if-lt v0, v1, :cond_2

    .line 279
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$a;->g:Landroid/app/Notification$Builder;

    invoke-virtual {v0}, Landroid/app/Notification$Builder;->build()Landroid/app/Notification;

    move-result-object v0

    return-object v0

    .line 281
    :cond_2
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-ge v0, v1, :cond_3

    .line 282
    new-instance v0, Landroid/support/v4/app/NotificationCompat$Builder;

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/e$a;->e:Landroid/content/Context;

    invoke-direct {v0, v1}, Landroid/support/v4/app/NotificationCompat$Builder;-><init>(Landroid/content/Context;)V

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/e$a;->a:Ljava/lang/String;

    .line 283
    invoke-virtual {v0, v1}, Landroid/support/v4/app/NotificationCompat$Builder;->setTicker(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/e$a;->i:Landroid/app/PendingIntent;

    .line 284
    invoke-virtual {v0, v1}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentIntent(Landroid/app/PendingIntent;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object v0

    .line 285
    invoke-virtual {v0}, Landroid/support/v4/app/NotificationCompat$Builder;->build()Landroid/app/Notification;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$a;->f:Landroid/app/Notification;

    goto :goto_1

    .line 287
    :cond_3
    new-instance v0, Landroid/app/Notification$Builder;

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/e$a;->e:Landroid/content/Context;

    invoke-direct {v0, v1}, Landroid/app/Notification$Builder;-><init>(Landroid/content/Context;)V

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/e$a;->a:Ljava/lang/String;

    .line 288
    invoke-virtual {v0, v1}, Landroid/app/Notification$Builder;->setTicker(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/e$a;->i:Landroid/app/PendingIntent;

    .line 289
    invoke-virtual {v0, v1}, Landroid/app/Notification$Builder;->setContentIntent(Landroid/app/PendingIntent;)Landroid/app/Notification$Builder;

    move-result-object v0

    .line 290
    invoke-virtual {v0}, Landroid/app/Notification$Builder;->build()Landroid/app/Notification;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$a;->f:Landroid/app/Notification;

    .line 292
    :goto_1
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$a;->f:Landroid/app/Notification;

    return-object v0
.end method
