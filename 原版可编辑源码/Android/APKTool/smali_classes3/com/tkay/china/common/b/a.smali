.class public Lcom/tkay/china/common/b/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/china/common/b/b;


# static fields
.field public static final a:Ljava/lang/String;

.field public static final b:Ljava/lang/String; = "tkay_action_notification_click"

.field public static final c:Ljava/lang/String; = "tkay_action_notification_cannel"

.field public static final d:Ljava/lang/String; = "tkay_broadcast_receiver_extra_url"

.field public static final e:Ljava/lang/String; = "tkay_broadcast_receiver_extra_unique_id"

.field public static final f:Ljava/lang/String; = "tkay_broadcast_receiver_extra_request_status"

.field public static final g:Ljava/lang/String; = "tkay_broadcast_receiver_extra_notification_id"

.field private static volatile j:Lcom/tkay/china/common/b/a;


# instance fields
.field h:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/china/common/b/c;",
            ">;"
        }
    .end annotation
.end field

.field private i:Landroid/app/NotificationManager;

.field private k:Landroid/content/Context;

.field private l:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 30
    const-class v0, Lcom/tkay/china/common/b/a;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/china/common/b/a;->a:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 59
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 60
    iput-object p1, p0, Lcom/tkay/china/common/b/a;->k:Landroid/content/Context;

    .line 62
    invoke-virtual {p0, p1}, Lcom/tkay/china/common/b/a;->b(Landroid/content/Context;)Landroid/app/NotificationManager;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/china/common/b/a;->i:Landroid/app/NotificationManager;

    .line 63
    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    iput-object p1, p0, Lcom/tkay/china/common/b/a;->h:Ljava/util/Map;

    return-void
.end method

.method private static a(JJ)I
    .locals 0

    long-to-float p0, p0

    const/high16 p1, 0x3f800000    # 1.0f

    mul-float/2addr p0, p1

    long-to-float p1, p2

    div-float/2addr p0, p1

    const/high16 p1, 0x42c80000    # 100.0f

    mul-float/2addr p0, p1

    float-to-int p0, p0

    return p0
.end method

.method public static a(Landroid/content/Context;)Lcom/tkay/china/common/b/a;
    .locals 2

    .line 50
    sget-object v0, Lcom/tkay/china/common/b/a;->j:Lcom/tkay/china/common/b/a;

    if-nez v0, :cond_1

    .line 51
    const-class v0, Lcom/tkay/china/common/b/a;

    monitor-enter v0

    .line 52
    :try_start_0
    sget-object v1, Lcom/tkay/china/common/b/a;->j:Lcom/tkay/china/common/b/a;

    if-nez v1, :cond_0

    .line 53
    new-instance v1, Lcom/tkay/china/common/b/a;

    invoke-direct {v1, p0}, Lcom/tkay/china/common/b/a;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/tkay/china/common/b/a;->j:Lcom/tkay/china/common/b/a;

    .line 54
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    .line 56
    :cond_1
    :goto_0
    sget-object p0, Lcom/tkay/china/common/b/a;->j:Lcom/tkay/china/common/b/a;

    return-object p0
.end method

.method private a(Lcom/tkay/china/common/a/e;Landroid/support/v4/app/NotificationCompat$Builder;Lcom/tkay/china/common/b/c;)V
    .locals 8

    .line 239
    iget-object v0, p3, Lcom/tkay/china/common/b/c;->d:Lcom/tkay/china/common/a/e$a;

    if-eqz v0, :cond_0

    iget-object v0, p3, Lcom/tkay/china/common/b/c;->d:Lcom/tkay/china/common/a/e$a;

    invoke-virtual {p1}, Lcom/tkay/china/common/a/e;->a()Lcom/tkay/china/common/a/e$a;

    move-result-object v1

    if-ne v0, v1, :cond_0

    return-void

    .line 243
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/china/common/a/e;->a()Lcom/tkay/china/common/a/e$a;

    move-result-object v0

    iput-object v0, p3, Lcom/tkay/china/common/b/c;->d:Lcom/tkay/china/common/a/e$a;

    .line 246
    new-instance v0, Landroid/content/Intent;

    const-string v1, "tkay_action_notification_click"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 247
    iget-object v1, p1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    const-string v2, "tkay_broadcast_receiver_extra_unique_id"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 248
    iget-object v1, p1, Lcom/tkay/china/common/a/e;->b:Ljava/lang/String;

    const-string v3, "tkay_broadcast_receiver_extra_url"

    invoke-virtual {v0, v3, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 249
    invoke-virtual {p1}, Lcom/tkay/china/common/a/e;->a()Lcom/tkay/china/common/a/e$a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/china/common/a/e$a;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v4, "tkay_broadcast_receiver_extra_request_status"

    invoke-virtual {v0, v4, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 250
    iget v1, p3, Lcom/tkay/china/common/b/c;->a:I

    const-string v5, "tkay_broadcast_receiver_extra_notification_id"

    invoke-virtual {v0, v5, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 251
    iget-object v1, p0, Lcom/tkay/china/common/b/a;->k:Landroid/content/Context;

    const-class v6, Lcom/tkay/china/common/NotificationBroadcaseReceiver;

    invoke-virtual {v0, v1, v6}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    .line 253
    iget-object v1, p0, Lcom/tkay/china/common/b/a;->k:Landroid/content/Context;

    iget v6, p3, Lcom/tkay/china/common/b/c;->a:I

    const/high16 v7, 0x8000000

    invoke-static {v1, v6, v0, v7}, Landroid/app/PendingIntent;->getBroadcast(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object v0

    .line 255
    new-instance v1, Landroid/content/Intent;

    const-string v6, "tkay_action_notification_cannel"

    invoke-direct {v1, v6}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 256
    iget-object v6, p1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {v1, v2, v6}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 257
    iget-object v2, p1, Lcom/tkay/china/common/a/e;->b:Ljava/lang/String;

    invoke-virtual {v1, v3, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 258
    invoke-virtual {p1}, Lcom/tkay/china/common/a/e;->a()Lcom/tkay/china/common/a/e$a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/china/common/a/e$a;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, v4, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 259
    iget p1, p3, Lcom/tkay/china/common/b/c;->a:I

    invoke-virtual {v1, v5, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 260
    iget-object p1, p0, Lcom/tkay/china/common/b/a;->k:Landroid/content/Context;

    const-class v2, Lcom/tkay/china/common/NotificationBroadcaseReceiver;

    invoke-virtual {v1, p1, v2}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    .line 261
    iget-object p1, p0, Lcom/tkay/china/common/b/a;->k:Landroid/content/Context;

    iget p3, p3, Lcom/tkay/china/common/b/c;->a:I

    invoke-static {p1, p3, v1, v7}, Landroid/app/PendingIntent;->getBroadcast(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object p1

    .line 263
    invoke-virtual {p2, v0}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentIntent(Landroid/app/PendingIntent;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p2

    .line 264
    invoke-virtual {p2, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setDeleteIntent(Landroid/app/PendingIntent;)Landroid/support/v4/app/NotificationCompat$Builder;

    return-void
.end method

.method private d(Lcom/tkay/china/common/a/e;)V
    .locals 7

    const-wide/16 v2, 0x0

    const-wide/16 v4, 0x64

    const/4 v6, 0x1

    move-object v0, p0

    move-object v1, p1

    .line 171
    invoke-virtual/range {v0 .. v6}, Lcom/tkay/china/common/b/a;->a(Lcom/tkay/china/common/a/e;JJZ)V

    return-void
.end method

.method private e(Lcom/tkay/china/common/a/e;)V
    .locals 7

    const-wide/16 v2, 0x0

    const-wide/16 v4, 0x64

    const/4 v6, 0x1

    move-object v0, p0

    move-object v1, p1

    .line 175
    invoke-virtual/range {v0 .. v6}, Lcom/tkay/china/common/b/a;->a(Lcom/tkay/china/common/a/e;JJZ)V

    return-void
.end method

.method private f(Lcom/tkay/china/common/a/e;)Lcom/tkay/china/common/b/c;
    .locals 5

    .line 2269
    iget-object v0, p1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    .line 185
    iget-object v1, p0, Lcom/tkay/china/common/b/a;->h:Ljava/util/Map;

    invoke-interface {v1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/china/common/b/c;

    if-eqz v1, :cond_0

    return-object v1

    .line 190
    :cond_0
    new-instance v1, Landroid/support/v4/app/NotificationCompat$Builder;

    iget-object v2, p0, Lcom/tkay/china/common/b/a;->k:Landroid/content/Context;

    invoke-direct {v1, v2, v0}, Landroid/support/v4/app/NotificationCompat$Builder;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 193
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x18

    const/4 v4, 0x0

    if-lt v2, v3, :cond_1

    .line 195
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x1a

    if-lt v2, v3, :cond_1

    .line 197
    new-instance v2, Landroid/app/NotificationChannel;

    const/4 v3, 0x3

    invoke-direct {v2, v0, v0, v3}, Landroid/app/NotificationChannel;-><init>(Ljava/lang/String;Ljava/lang/CharSequence;I)V

    .line 199
    invoke-virtual {v2, v4, v4}, Landroid/app/NotificationChannel;->setSound(Landroid/net/Uri;Landroid/media/AudioAttributes;)V

    .line 200
    iget-object v3, p0, Lcom/tkay/china/common/b/a;->i:Landroid/app/NotificationManager;

    invoke-virtual {v3, v2}, Landroid/app/NotificationManager;->createNotificationChannel(Landroid/app/NotificationChannel;)V

    .line 204
    :cond_1
    iget v2, p0, Lcom/tkay/china/common/b/a;->l:I

    const/4 v3, 0x1

    add-int/2addr v2, v3

    iput v2, p0, Lcom/tkay/china/common/b/a;->l:I

    .line 207
    invoke-virtual {v1, v3}, Landroid/support/v4/app/NotificationCompat$Builder;->setOngoing(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object v2

    .line 208
    invoke-virtual {v2, v4}, Landroid/support/v4/app/NotificationCompat$Builder;->setSound(Landroid/net/Uri;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object v2

    const/4 v4, 0x0

    .line 209
    invoke-virtual {v2, v4}, Landroid/support/v4/app/NotificationCompat$Builder;->setPriority(I)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object v2

    .line 210
    invoke-virtual {v2, v3}, Landroid/support/v4/app/NotificationCompat$Builder;->setOnlyAlertOnce(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object v2

    .line 211
    invoke-virtual {v2, v4}, Landroid/support/v4/app/NotificationCompat$Builder;->setAutoCancel(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 216
    :try_start_0
    iget-object v2, p0, Lcom/tkay/china/common/b/a;->k:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/china/common/b/a;->k:Landroid/content/Context;

    invoke-virtual {v3}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v3

    const/16 v4, 0x80

    invoke-virtual {v2, v3, v4}, Landroid/content/pm/PackageManager;->getApplicationInfo(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;

    move-result-object v2

    .line 217
    iget v2, v2, Landroid/content/pm/ApplicationInfo;->icon:I

    invoke-virtual {v1, v2}, Landroid/support/v4/app/NotificationCompat$Builder;->setSmallIcon(I)Landroid/support/v4/app/NotificationCompat$Builder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v2

    .line 219
    invoke-virtual {v2}, Ljava/lang/Throwable;->printStackTrace()V

    .line 220
    iget-object v2, p0, Lcom/tkay/china/common/b/a;->k:Landroid/content/Context;

    const-string v3, "core_icon_close"

    const-string v4, "drawable"

    invoke-static {v2, v3, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/support/v4/app/NotificationCompat$Builder;->setSmallIcon(I)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 224
    :goto_0
    iget-object v2, p1, Lcom/tkay/china/common/a/e;->c:Ljava/lang/String;

    invoke-virtual {v1, v2}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentTitle(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object v2

    iget-object p1, p1, Lcom/tkay/china/common/a/e;->d:Landroid/graphics/Bitmap;

    .line 225
    invoke-virtual {v2, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setLargeIcon(Landroid/graphics/Bitmap;)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 227
    new-instance p1, Lcom/tkay/china/common/b/c;

    invoke-direct {p1}, Lcom/tkay/china/common/b/c;-><init>()V

    .line 229
    iget v2, p0, Lcom/tkay/china/common/b/a;->l:I

    iput v2, p1, Lcom/tkay/china/common/b/c;->a:I

    .line 230
    iput-object v1, p1, Lcom/tkay/china/common/b/c;->b:Landroid/support/v4/app/NotificationCompat$Builder;

    const/4 v1, -0x1

    .line 231
    iput v1, p1, Lcom/tkay/china/common/b/c;->c:I

    .line 233
    iget-object v1, p0, Lcom/tkay/china/common/b/a;->h:Ljava/util/Map;

    invoke-interface {v1, v0, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object p1
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 295
    iget-object v0, p0, Lcom/tkay/china/common/b/a;->i:Landroid/app/NotificationManager;

    if-eqz v0, :cond_0

    .line 296
    invoke-virtual {v0}, Landroid/app/NotificationManager;->cancelAll()V

    :cond_0
    return-void
.end method

.method public final a(I)V
    .locals 1

    if-gez p1, :cond_0

    return-void

    .line 286
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/tkay/china/common/b/a;->i:Landroid/app/NotificationManager;

    invoke-virtual {v0, p1}, Landroid/app/NotificationManager;->cancel(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 288
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public final a(Lcom/tkay/china/common/a/e;)V
    .locals 7

    const-wide/16 v2, 0x64

    const-wide/16 v4, 0x64

    const/4 v6, 0x1

    move-object v0, p0

    move-object v1, p1

    .line 167
    invoke-virtual/range {v0 .. v6}, Lcom/tkay/china/common/b/a;->a(Lcom/tkay/china/common/a/e;JJZ)V

    return-void
.end method

.method public final a(Lcom/tkay/china/common/a/e;JJ)V
    .locals 7

    const/4 v6, 0x0

    move-object v0, p0

    move-object v1, p1

    move-wide v2, p2

    move-wide v4, p4

    .line 163
    invoke-virtual/range {v0 .. v6}, Lcom/tkay/china/common/b/a;->a(Lcom/tkay/china/common/a/e;JJZ)V

    return-void
.end method

.method public final declared-synchronized a(Lcom/tkay/china/common/a/e;JJZ)V
    .locals 14

    move-object v1, p0

    move-object v0, p1

    monitor-enter p0

    if-eqz v0, :cond_10

    .line 77
    :try_start_0
    iget-object v2, v0, Lcom/tkay/china/common/a/e;->b:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-eqz v2, :cond_0

    goto/16 :goto_5

    .line 81
    :cond_0
    :try_start_1
    iget-object v2, v1, Lcom/tkay/china/common/b/a;->i:Landroid/app/NotificationManager;

    if-nez v2, :cond_1

    .line 82
    iget-object v2, v1, Lcom/tkay/china/common/b/a;->k:Landroid/content/Context;

    invoke-virtual {p0, v2}, Lcom/tkay/china/common/b/a;->b(Landroid/content/Context;)Landroid/app/NotificationManager;

    move-result-object v2

    iput-object v2, v1, Lcom/tkay/china/common/b/a;->i:Landroid/app/NotificationManager;

    .line 85
    :cond_1
    invoke-direct {p0, p1}, Lcom/tkay/china/common/b/a;->f(Lcom/tkay/china/common/a/e;)Lcom/tkay/china/common/b/c;

    move-result-object v2

    .line 87
    iget-object v3, v2, Lcom/tkay/china/common/b/c;->b:Landroid/support/v4/app/NotificationCompat$Builder;

    .line 1239
    iget-object v4, v2, Lcom/tkay/china/common/b/c;->d:Lcom/tkay/china/common/a/e$a;

    if-eqz v4, :cond_2

    iget-object v4, v2, Lcom/tkay/china/common/b/c;->d:Lcom/tkay/china/common/a/e$a;

    invoke-virtual {p1}, Lcom/tkay/china/common/a/e;->a()Lcom/tkay/china/common/a/e$a;

    move-result-object v5

    if-eq v4, v5, :cond_3

    .line 1243
    :cond_2
    invoke-virtual {p1}, Lcom/tkay/china/common/a/e;->a()Lcom/tkay/china/common/a/e$a;

    move-result-object v4

    iput-object v4, v2, Lcom/tkay/china/common/b/c;->d:Lcom/tkay/china/common/a/e$a;

    .line 1246
    new-instance v4, Landroid/content/Intent;

    const-string v5, "tkay_action_notification_click"

    invoke-direct {v4, v5}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v5, "tkay_broadcast_receiver_extra_unique_id"

    .line 1247
    iget-object v6, v0, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {v4, v5, v6}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v5, "tkay_broadcast_receiver_extra_url"

    .line 1248
    iget-object v6, v0, Lcom/tkay/china/common/a/e;->b:Ljava/lang/String;

    invoke-virtual {v4, v5, v6}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v5, "tkay_broadcast_receiver_extra_request_status"

    .line 1249
    invoke-virtual {p1}, Lcom/tkay/china/common/a/e;->a()Lcom/tkay/china/common/a/e$a;

    move-result-object v6

    invoke-virtual {v6}, Lcom/tkay/china/common/a/e$a;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v5, v6}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v5, "tkay_broadcast_receiver_extra_notification_id"

    .line 1250
    iget v6, v2, Lcom/tkay/china/common/b/c;->a:I

    invoke-virtual {v4, v5, v6}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 1251
    iget-object v5, v1, Lcom/tkay/china/common/b/a;->k:Landroid/content/Context;

    const-class v6, Lcom/tkay/china/common/NotificationBroadcaseReceiver;

    invoke-virtual {v4, v5, v6}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    .line 1253
    iget-object v5, v1, Lcom/tkay/china/common/b/a;->k:Landroid/content/Context;

    iget v6, v2, Lcom/tkay/china/common/b/c;->a:I

    const/high16 v7, 0x8000000

    invoke-static {v5, v6, v4, v7}, Landroid/app/PendingIntent;->getBroadcast(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object v4

    .line 1255
    new-instance v5, Landroid/content/Intent;

    const-string v6, "tkay_action_notification_cannel"

    invoke-direct {v5, v6}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v6, "tkay_broadcast_receiver_extra_unique_id"

    .line 1256
    iget-object v8, v0, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {v5, v6, v8}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v6, "tkay_broadcast_receiver_extra_url"

    .line 1257
    iget-object v8, v0, Lcom/tkay/china/common/a/e;->b:Ljava/lang/String;

    invoke-virtual {v5, v6, v8}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v6, "tkay_broadcast_receiver_extra_request_status"

    .line 1258
    invoke-virtual {p1}, Lcom/tkay/china/common/a/e;->a()Lcom/tkay/china/common/a/e$a;

    move-result-object v8

    invoke-virtual {v8}, Lcom/tkay/china/common/a/e$a;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v5, v6, v8}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v6, "tkay_broadcast_receiver_extra_notification_id"

    .line 1259
    iget v8, v2, Lcom/tkay/china/common/b/c;->a:I

    invoke-virtual {v5, v6, v8}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 1260
    iget-object v6, v1, Lcom/tkay/china/common/b/a;->k:Landroid/content/Context;

    const-class v8, Lcom/tkay/china/common/NotificationBroadcaseReceiver;

    invoke-virtual {v5, v6, v8}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    .line 1261
    iget-object v6, v1, Lcom/tkay/china/common/b/a;->k:Landroid/content/Context;

    iget v8, v2, Lcom/tkay/china/common/b/c;->a:I

    invoke-static {v6, v8, v5, v7}, Landroid/app/PendingIntent;->getBroadcast(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object v5

    .line 1263
    invoke-virtual {v3, v4}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentIntent(Landroid/app/PendingIntent;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object v4

    .line 1264
    invoke-virtual {v4, v5}, Landroid/support/v4/app/NotificationCompat$Builder;->setDeleteIntent(Landroid/app/PendingIntent;)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 91
    :cond_3
    iget v4, v2, Lcom/tkay/china/common/b/c;->c:I

    .line 94
    iget v5, v0, Lcom/tkay/china/common/a/e;->p:I

    const/4 v6, 0x2

    const/4 v7, 0x1

    const/4 v8, 0x0

    if-ne v5, v6, :cond_4

    move v5, v7

    goto :goto_0

    :cond_4
    move v5, v8

    :goto_0
    const-string v9, "default"

    .line 97
    invoke-virtual {p1}, Lcom/tkay/china/common/a/e;->f()Z

    move-result v10

    const/16 v11, 0x64

    if-eqz v10, :cond_5

    const-string v9, "\u70b9\u51fb\u6253\u5f00"

    :goto_1
    move v5, v7

    move v10, v8

    goto/16 :goto_3

    .line 100
    :cond_5
    invoke-virtual {p1}, Lcom/tkay/china/common/a/e;->g()Z

    move-result v10

    if-eqz v10, :cond_6

    const-string v9, "\u70b9\u51fb\u5b89\u88c5"

    move v10, v11

    goto/16 :goto_3

    .line 103
    :cond_6
    invoke-virtual {p1}, Lcom/tkay/china/common/a/e;->h()Z

    move-result v10

    if-eqz v10, :cond_7

    const-string v9, "\u4e0b\u8f7d\u5931\u8d25\uff0c\u53ef\u70b9\u51fb\u91cd\u8bd5"
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :cond_7
    move-wide/from16 v12, p2

    long-to-float v10, v12

    const/high16 v12, 0x3f800000    # 1.0f

    mul-float/2addr v10, v12

    move-wide/from16 v12, p4

    long-to-float v12, v12

    div-float/2addr v10, v12

    const/high16 v12, 0x42c80000    # 100.0f

    mul-float/2addr v10, v12

    float-to-int v10, v10

    if-nez p6, :cond_8

    if-ne v4, v10, :cond_8

    .line 110
    monitor-exit p0

    return-void

    .line 113
    :cond_8
    :try_start_2
    iput v10, v2, Lcom/tkay/china/common/b/c;->c:I

    .line 115
    invoke-virtual {p1}, Lcom/tkay/china/common/a/e;->b()Z

    move-result v4

    if-eqz v4, :cond_a

    .line 117
    iget v4, v0, Lcom/tkay/china/common/a/e;->q:I

    if-ne v4, v6, :cond_9

    const-string v9, "\u7b49\u5f85\u4e0b\u8f7d\u4e2d"

    goto :goto_2

    :cond_9
    const-string v9, "\u7b49\u5f85\u4e0b\u8f7d\u4e2d\uff08\u70b9\u51fb\u53ef\u6682\u505c\uff09"

    :goto_2
    move v5, v8

    goto :goto_3

    .line 122
    :cond_a
    invoke-virtual {p1}, Lcom/tkay/china/common/a/e;->c()Z

    move-result v4

    if-eqz v4, :cond_b

    const-string v9, "\u70b9\u51fb\u7ee7\u7eed\u4e0b\u8f7d"

    goto :goto_3

    .line 124
    :cond_b
    invoke-virtual {p1}, Lcom/tkay/china/common/a/e;->d()Z

    move-result v4

    if-eqz v4, :cond_d

    .line 126
    iget v4, v0, Lcom/tkay/china/common/a/e;->q:I

    if-ne v4, v6, :cond_c

    .line 127
    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "\uff08\u4e0b\u8f7d\u4e2d\uff1a"

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, "%)"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    goto :goto_2

    .line 129
    :cond_c
    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "\u70b9\u51fb\u6682\u505c\u4e0b\u8f7d\uff08\u4e0b\u8f7d\u4e2d\uff1a"

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, "%)"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    goto :goto_2

    .line 139
    :cond_d
    :goto_3
    invoke-virtual {p1}, Lcom/tkay/china/common/a/e;->d()Z

    move-result v0

    if-eqz v0, :cond_e

    .line 140
    invoke-virtual {v3, v11, v10, v8}, Landroid/support/v4/app/NotificationCompat$Builder;->setProgress(IIZ)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object v3

    .line 143
    :cond_e
    invoke-virtual {v3, v9}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentText(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object v0

    new-instance v4, Landroid/support/v4/app/NotificationCompat$BigTextStyle;

    invoke-direct {v4}, Landroid/support/v4/app/NotificationCompat$BigTextStyle;-><init>()V

    .line 144
    invoke-virtual {v4, v9}, Landroid/support/v4/app/NotificationCompat$BigTextStyle;->bigText(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$BigTextStyle;

    move-result-object v4

    invoke-virtual {v0, v4}, Landroid/support/v4/app/NotificationCompat$Builder;->setStyle(Landroid/support/v4/app/NotificationCompat$Style;)Landroid/support/v4/app/NotificationCompat$Builder;

    if-eqz v5, :cond_f

    .line 147
    invoke-virtual {v3, v8}, Landroid/support/v4/app/NotificationCompat$Builder;->setOngoing(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object v0

    .line 148
    invoke-virtual {v0, v7}, Landroid/support/v4/app/NotificationCompat$Builder;->setAutoCancel(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    goto :goto_4

    .line 150
    :cond_f
    invoke-virtual {v3, v7}, Landroid/support/v4/app/NotificationCompat$Builder;->setOngoing(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object v0

    .line 151
    invoke-virtual {v0, v8}, Landroid/support/v4/app/NotificationCompat$Builder;->setAutoCancel(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 156
    :goto_4
    iget-object v0, v1, Lcom/tkay/china/common/b/a;->i:Landroid/app/NotificationManager;

    iget v2, v2, Lcom/tkay/china/common/b/c;->a:I

    invoke-virtual {v3}, Landroid/support/v4/app/NotificationCompat$Builder;->build()Landroid/app/Notification;

    move-result-object v3

    invoke-virtual {v0, v2, v3}, Landroid/app/NotificationManager;->notify(ILandroid/app/Notification;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 159
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    .line 158
    :try_start_3
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    .line 160
    monitor-exit p0

    return-void

    :catchall_1
    move-exception v0

    monitor-exit p0

    throw v0

    .line 78
    :cond_10
    :goto_5
    monitor-exit p0

    return-void
.end method

.method public final b(Landroid/content/Context;)Landroid/app/NotificationManager;
    .locals 1

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return-object p1

    :cond_0
    const-string v0, "notification"

    .line 72
    invoke-virtual {p1, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/app/NotificationManager;

    return-object p1
.end method

.method public final b(Lcom/tkay/china/common/a/e;)Ljava/lang/String;
    .locals 0

    .line 269
    iget-object p1, p1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    return-object p1
.end method

.method public final c(Lcom/tkay/china/common/a/e;)V
    .locals 2

    if-eqz p1, :cond_1

    .line 273
    iget-object v0, p1, Lcom/tkay/china/common/a/e;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/tkay/china/common/b/a;->i:Landroid/app/NotificationManager;

    if-nez v0, :cond_0

    goto :goto_0

    .line 276
    :cond_0
    invoke-direct {p0, p1}, Lcom/tkay/china/common/b/a;->f(Lcom/tkay/china/common/a/e;)Lcom/tkay/china/common/b/c;

    move-result-object v0

    .line 277
    iget-object v1, p0, Lcom/tkay/china/common/b/a;->i:Landroid/app/NotificationManager;

    iget v0, v0, Lcom/tkay/china/common/b/c;->a:I

    invoke-virtual {v1, v0}, Landroid/app/NotificationManager;->cancel(I)V

    .line 278
    iget-object v0, p0, Lcom/tkay/china/common/b/a;->h:Ljava/util/Map;

    .line 3269
    iget-object p1, p1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    .line 278
    invoke-interface {v0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_1
    :goto_0
    return-void
.end method
