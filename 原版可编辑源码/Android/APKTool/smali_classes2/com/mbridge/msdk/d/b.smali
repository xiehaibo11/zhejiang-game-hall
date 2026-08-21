.class public Lcom/mbridge/msdk/d/b;
.super Ljava/lang/Object;
.source "ShortCutsManager.java"


# static fields
.field private static volatile b:Lcom/mbridge/msdk/d/b;


# instance fields
.field private a:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/content/Context;",
            ">;"
        }
    .end annotation
.end field

.field private c:Landroid/os/Handler;


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 147
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 697
    new-instance v0, Lcom/mbridge/msdk/d/b$3;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/mbridge/msdk/d/b$3;-><init>(Lcom/mbridge/msdk/d/b;Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/mbridge/msdk/d/b;->c:Landroid/os/Handler;

    .line 148
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/mbridge/msdk/d/b;->a:Ljava/lang/ref/WeakReference;

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;)Landroid/database/Cursor;
    .locals 6

    .line 420
    invoke-virtual {p3}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    .line 421
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    const-string p1, "title"

    .line 422
    filled-new-array {p1}, [Ljava/lang/String;

    move-result-object v2

    const/4 p1, 0x1

    new-array v4, p1, [Ljava/lang/String;

    const/4 p1, 0x0

    aput-object p2, v4, p1

    const-string v3, "title=?"

    const/4 v5, 0x0

    invoke-virtual/range {v0 .. v5}, Landroid/content/ContentResolver;->query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1

    return-object p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/d/b;)Landroid/os/Handler;
    .locals 0

    .line 51
    iget-object p0, p0, Lcom/mbridge/msdk/d/b;->c:Landroid/os/Handler;

    return-object p0
.end method

.method public static a(Landroid/content/Context;)Lcom/mbridge/msdk/d/b;
    .locals 2

    .line 156
    sget-object v0, Lcom/mbridge/msdk/d/b;->b:Lcom/mbridge/msdk/d/b;

    if-nez v0, :cond_1

    .line 157
    const-class v0, Lcom/mbridge/msdk/d/b;

    monitor-enter v0

    .line 158
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/d/b;->b:Lcom/mbridge/msdk/d/b;

    if-nez v1, :cond_0

    .line 159
    new-instance v1, Lcom/mbridge/msdk/d/b;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/d/b;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/mbridge/msdk/d/b;->b:Lcom/mbridge/msdk/d/b;

    .line 161
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    .line 163
    :cond_1
    :goto_0
    sget-object p0, Lcom/mbridge/msdk/d/b;->b:Lcom/mbridge/msdk/d/b;

    return-object p0
.end method

.method private a(Landroid/app/Activity;)V
    .locals 0

    if-eqz p1, :cond_0

    .line 854
    invoke-virtual {p1}, Landroid/app/Activity;->finish()V

    :cond_0
    return-void
.end method

.method private a(Landroid/content/Context;Lcom/mbridge/msdk/c/a;)V
    .locals 4

    .line 873
    invoke-virtual {p2}, Lcom/mbridge/msdk/c/a;->D()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 874
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/f;

    move-result-object p1

    .line 875
    invoke-virtual {p2}, Lcom/mbridge/msdk/c/a;->D()Ljava/lang/String;

    move-result-object p2

    const/4 v0, 0x0

    invoke-virtual {p1, p2, v0}, Lcom/mbridge/msdk/foundation/db/f;->a(Ljava/lang/String;I)Ljava/util/List;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 876
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p2

    if-lez p2, :cond_3

    const-string p2, "com.android.launcher.permission.UNINSTALL_SHORTCUT"

    invoke-direct {p0, p2}, Lcom/mbridge/msdk/d/b;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 877
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 878
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/d/b;->b(Ljava/lang/String;)I

    move-result v1

    .line 4314
    iget-object v2, p0, Lcom/mbridge/msdk/d/b;->a:Ljava/lang/ref/WeakReference;

    invoke-virtual {v2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/content/Context;

    if-eqz v2, :cond_0

    const-string v3, "com.android.launcher.permission.READ_SETTINGS"

    .line 4316
    invoke-direct {p0, v3}, Lcom/mbridge/msdk/d/b;->a(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_2

    const-string v3, "com.google.android.launcher.permission.READ_SETTINGS"

    invoke-direct {p0, v3}, Lcom/mbridge/msdk/d/b;->a(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_1

    goto :goto_1

    .line 4320
    :cond_1
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/d/b;->a(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 4321
    invoke-direct {p0, v2, v0, v1}, Lcom/mbridge/msdk/d/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    goto :goto_0

    .line 4317
    :cond_2
    :goto_1
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v3

    invoke-direct {p0, v2, v3}, Lcom/mbridge/msdk/d/b;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 4318
    invoke-direct {p0, v2, v0, v1}, Lcom/mbridge/msdk/d/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    goto :goto_0

    :cond_3
    return-void
.end method

.method private a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 6

    .line 333
    new-instance v0, Landroid/content/Intent;

    const-string v1, "com.android.launcher.action.UNINSTALL_SHORTCUT"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 334
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v1

    const-string v2, "android.intent.extra.shortcut.NAME"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 335
    new-instance v1, Landroid/content/Intent;

    const-class v2, Lcom/mbridge/msdk/activity/MBCommonActivity;

    invoke-direct {v1, p1, v2}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string v2, "android.intent.action.VIEW"

    .line 336
    invoke-virtual {v1, v2}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    const-string v2, "android.intent.extra.shortcut.INTENT"

    .line 337
    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Parcelable;)Landroid/content/Intent;

    .line 338
    invoke-virtual {p1, v0}, Landroid/content/Context;->sendBroadcast(Landroid/content/Intent;)V

    .line 339
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/f;

    move-result-object p1

    .line 340
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v0

    if-nez v0, :cond_0

    .line 342
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v0

    .line 344
    :cond_0
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->D()Ljava/lang/String;

    move-result-object v0

    const-string v1, "com.android.launcher.permission.READ_SETTINGS"

    .line 345
    invoke-direct {p0, v1}, Lcom/mbridge/msdk/d/b;->a(Ljava/lang/String;)Z

    move-result v1

    const-string v2, "is_deleted"

    const/4 v3, 0x2

    const/4 v4, 0x1

    if-nez v1, :cond_2

    const-string v1, "com.google.android.launcher.permission.READ_SETTINGS"

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/d/b;->a(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    goto :goto_0

    :cond_1
    const/4 p3, -0x1

    .line 356
    invoke-direct {p0, p2, v3, p3}, Lcom/mbridge/msdk/d/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;II)V

    .line 357
    new-instance p3, Landroid/content/ContentValues;

    invoke-direct {p3}, Landroid/content/ContentValues;-><init>()V

    .line 358
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {p3, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 359
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2, p3}, Lcom/mbridge/msdk/foundation/db/f;->a(Ljava/lang/String;Landroid/content/ContentValues;)V

    goto :goto_2

    .line 346
    :cond_2
    :goto_0
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v1

    .line 1583
    invoke-direct {p0, v1}, Lcom/mbridge/msdk/d/b;->b(Ljava/lang/String;)I

    move-result v1

    const/4 v5, 0x0

    if-ge v1, p3, :cond_3

    move p3, v4

    goto :goto_1

    :cond_3
    move p3, v5

    :goto_1
    if-eqz p3, :cond_4

    .line 347
    invoke-direct {p0, p2, v3, v4}, Lcom/mbridge/msdk/d/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;II)V

    .line 348
    invoke-virtual {p2, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIsDeleted(I)V

    .line 349
    new-instance p3, Landroid/content/ContentValues;

    invoke-direct {p3}, Landroid/content/ContentValues;-><init>()V

    .line 350
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {p3, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 351
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2, p3}, Lcom/mbridge/msdk/foundation/db/f;->a(Ljava/lang/String;Landroid/content/ContentValues;)V

    goto :goto_2

    .line 353
    :cond_4
    invoke-direct {p0, p2, v3, v5}, Lcom/mbridge/msdk/d/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;II)V

    .line 361
    :goto_2
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/db/f;->d(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/d/b;ILjava/lang/String;)V
    .locals 8

    const-string v0, "mb_shortcuts_ctime"

    .line 6722
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/d/b;->a:Ljava/lang/ref/WeakReference;

    invoke-virtual {v1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/content/Context;

    if-nez v1, :cond_0

    goto :goto_2

    :cond_0
    const/4 v2, 0x0

    if-eqz p2, :cond_1

    .line 6728
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v2

    invoke-virtual {v2, p2}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v2

    :cond_1
    if-nez v2, :cond_2

    .line 6731
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v2

    :cond_2
    if-nez v2, :cond_3

    goto :goto_0

    .line 6782
    :cond_3
    invoke-virtual {v2}, Lcom/mbridge/msdk/c/a;->B()I

    move-result p2

    .line 6783
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    const-wide/16 v4, 0x0

    .line 6785
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v6

    invoke-virtual {v6, v0}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    const-string v7, ""

    invoke-virtual {v6, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-nez v6, :cond_4

    .line 6786
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v4

    invoke-virtual {v4, v0}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v4

    :cond_4
    sub-long/2addr v2, v4

    const-wide/16 v4, 0x3e8

    .line 6788
    div-long/2addr v2, v4

    int-to-long v4, p2

    cmp-long p2, v2, v4

    if-lez p2, :cond_5

    const/4 p2, 0x1

    goto :goto_1

    :cond_5
    :goto_0
    const/4 p2, 0x0

    :goto_1
    if-eqz p2, :cond_6

    .line 6734
    new-instance p2, Landroid/os/Handler;

    invoke-direct {p2}, Landroid/os/Handler;-><init>()V

    new-instance v0, Lcom/mbridge/msdk/d/b$4;

    invoke-direct {v0, p0, v1}, Lcom/mbridge/msdk/d/b$4;-><init>(Lcom/mbridge/msdk/d/b;Landroid/content/Context;)V

    int-to-long p0, p1

    invoke-virtual {p2, v0, p0, p1}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception p0

    .line 6767
    sget-boolean p1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p1, :cond_6

    .line 6768
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_6
    :goto_2
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/d/b;Landroid/app/Activity;)V
    .locals 0

    .line 51
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/d/b;->a(Landroid/app/Activity;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/d/b;Landroid/content/Context;Landroid/graphics/Bitmap;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/app/Activity;)V
    .locals 3

    .line 5278
    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    if-eqz p2, :cond_1

    .line 5280
    :try_start_0
    new-instance v0, Landroid/content/Intent;

    const-string v1, "com.android.launcher.action.INSTALL_SHORTCUT"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v1, "android.intent.extra.shortcut.NAME"

    .line 5281
    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v1, "duplicate"

    const/4 v2, 0x0

    .line 5282
    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    const/4 v1, 0x1

    const/16 v2, 0x8c

    .line 5283
    invoke-static {p2, v2, v2, v1}, Landroid/graphics/Bitmap;->createScaledBitmap(Landroid/graphics/Bitmap;IIZ)Landroid/graphics/Bitmap;

    move-result-object p2

    const-string v1, "android.intent.extra.shortcut.ICON"

    .line 5284
    invoke-virtual {v0, v1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Parcelable;)Landroid/content/Intent;

    .line 5285
    new-instance p2, Landroid/content/Intent;

    const-class v1, Lcom/mbridge/msdk/activity/MBCommonActivity;

    invoke-direct {p2, p1, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string v1, "intent_flag"

    const-string v2, "shortcuts"

    .line 5286
    invoke-virtual {p2, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    const/4 v1, 0x0

    .line 5289
    :try_start_1
    invoke-static {p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->campaignToJsonObject(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lorg/json/JSONObject;

    move-result-object v1
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_0

    :catch_0
    move-exception p3

    .line 5291
    :try_start_2
    invoke-virtual {p3}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    if-eqz v1, :cond_0

    const-string p3, "intent_jsonobject"

    .line 5294
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, p3, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    :cond_0
    const p3, 0x8000

    .line 5296
    invoke-virtual {p2, p3}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    const-string p3, "android.intent.extra.shortcut.INTENT"

    .line 5297
    invoke-virtual {v0, p3, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Parcelable;)Landroid/content/Intent;

    .line 5298
    invoke-virtual {p1, v0}, Landroid/content/Context;->sendBroadcast(Landroid/content/Intent;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_1

    :catch_1
    move-exception p1

    .line 5300
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 5303
    :cond_1
    :goto_1
    invoke-direct {p0, p4}, Lcom/mbridge/msdk/d/b;->a(Landroid/app/Activity;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/d/b;Landroid/content/Context;Lcom/mbridge/msdk/c/a;)V
    .locals 0

    .line 51
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/d/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/c/a;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/d/b;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/c/a;Lcom/mbridge/msdk/foundation/db/f;I)V
    .locals 5

    const-wide/16 v0, 0x0

    .line 6248
    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setTimestamp(J)V

    const-string v0, "com.android.launcher.permission.READ_SETTINGS"

    .line 6249
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/d/b;->a(Ljava/lang/String;)Z

    move-result v0

    const-string v1, "mb_shortcuts_ctime"

    const/4 v2, -0x1

    const/4 v3, 0x0

    const/4 v4, 0x1

    if-nez v0, :cond_1

    const-string v0, "com.google.android.launcher.permission.READ_SETTINGS"

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/d/b;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 6262
    :cond_0
    invoke-virtual {p1, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIsAddSuccesful(I)V

    .line 6263
    invoke-direct {p0, p1, v4, v2}, Lcom/mbridge/msdk/d/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;II)V

    .line 6264
    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIsAddSuccesful(I)V

    .line 6265
    invoke-virtual {p2}, Lcom/mbridge/msdk/c/a;->D()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p3, p1, p0, v3}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)J

    .line 6266
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object p0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    invoke-static {p1, p2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, v1, p1}, Lcom/mbridge/msdk/foundation/a/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 6250
    :cond_1
    :goto_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v0

    .line 6575
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/d/b;->b(Ljava/lang/String;)I

    move-result v0

    if-le v0, p4, :cond_2

    move p4, v4

    goto :goto_1

    :cond_2
    move p4, v3

    :goto_1
    if-eqz p4, :cond_3

    .line 6251
    invoke-virtual {p1, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIsAddSuccesful(I)V

    .line 6252
    invoke-virtual {p2}, Lcom/mbridge/msdk/c/a;->D()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p3, p1, p2, v3}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)J

    .line 6253
    invoke-direct {p0, p1, v4, v4}, Lcom/mbridge/msdk/d/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;II)V

    .line 6254
    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIsAddSuccesful(I)V

    .line 6255
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object p0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    invoke-static {p1, p2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, v1, p1}, Lcom/mbridge/msdk/foundation/a/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 6257
    :cond_3
    invoke-virtual {p1, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIsAddSuccesful(I)V

    .line 6258
    invoke-virtual {p2}, Lcom/mbridge/msdk/c/a;->D()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p3, p1, p0, v3}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)J

    .line 6259
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object p0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    invoke-static {p1, p2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, v1, p1}, Lcom/mbridge/msdk/foundation/a/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_2
    return-void
.end method

.method private a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;II)V
    .locals 2

    .line 621
    iget-object v0, p0, Lcom/mbridge/msdk/d/b;->a:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 622
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIsDeleted()I

    move-result v0

    const/4 v1, 0x1

    if-eq v0, v1, :cond_0

    .line 623
    iget-object v0, p0, Lcom/mbridge/msdk/d/b;->a:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/Context;

    invoke-static {v0, p1, p2, p3}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;II)V

    :cond_0
    return-void
.end method

.method private a(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 3

    const/4 v0, 0x0

    if-eqz p1, :cond_3

    .line 393
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    .line 395
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 396
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/d/b;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    .line 397
    :cond_1
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    .line 399
    :try_start_0
    invoke-direct {p0, v1, p2, p1}, Lcom/mbridge/msdk/d/b;->a(Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;)Landroid/database/Cursor;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 400
    invoke-interface {p1}, Landroid/database/Cursor;->getCount()I

    move-result p2

    if-lez p2, :cond_2

    const/4 p2, 0x1

    move v0, p2

    :cond_2
    if-eqz p1, :cond_3

    .line 403
    invoke-interface {p1}, Landroid/database/Cursor;->isClosed()Z

    move-result p2

    if-nez p2, :cond_3

    .line 404
    invoke-interface {p1}, Landroid/database/Cursor;->close()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 406
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_3
    :goto_0
    return v0
.end method

.method static synthetic a(Lcom/mbridge/msdk/d/b;Ljava/lang/String;)Z
    .locals 0

    .line 51
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/d/b;->a(Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method private a(Ljava/lang/String;)Z
    .locals 3

    .line 171
    iget-object v0, p0, Lcom/mbridge/msdk/d/b;->a:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/Context;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 173
    invoke-virtual {v0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v2

    .line 174
    invoke-virtual {v0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, p1, v0}, Landroid/content/pm/PackageManager;->checkPermission(Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    if-nez p1, :cond_0

    const/4 v1, 0x1

    :cond_0
    return v1
.end method

.method static synthetic b(Lcom/mbridge/msdk/d/b;Ljava/lang/String;)I
    .locals 0

    .line 51
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/d/b;->b(Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method private b(Ljava/lang/String;)I
    .locals 4

    .line 433
    iget-object v0, p0, Lcom/mbridge/msdk/d/b;->a:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/Context;

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    const-string v2, "com.android.launcher.permission.READ_SETTINGS"

    .line 434
    invoke-direct {p0, v2}, Lcom/mbridge/msdk/d/b;->a(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_0

    const-string v2, "com.google.android.launcher.permission.READ_SETTINGS"

    invoke-direct {p0, v2}, Lcom/mbridge/msdk/d/b;->a(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_0

    goto :goto_0

    .line 435
    :cond_0
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/d/b;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    .line 436
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_2

    .line 438
    :try_start_0
    invoke-direct {p0, v2, p1, v0}, Lcom/mbridge/msdk/d/b;->a(Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;)Landroid/database/Cursor;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 439
    invoke-interface {p1}, Landroid/database/Cursor;->getCount()I

    move-result v0

    if-lez v0, :cond_1

    .line 440
    invoke-interface {p1}, Landroid/database/Cursor;->getCount()I

    move-result p1

    return p1

    :cond_1
    if-eqz p1, :cond_2

    .line 442
    invoke-interface {p1}, Landroid/database/Cursor;->isClosed()Z

    move-result v0

    if-nez v0, :cond_2

    .line 443
    invoke-interface {p1}, Landroid/database/Cursor;->close()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 445
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_0
    return v1
.end method

.method private b(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    const-string p1, ""

    return-object p1
.end method

.method static synthetic b(Lcom/mbridge/msdk/d/b;Landroid/content/Context;Lcom/mbridge/msdk/c/a;)V
    .locals 0

    .line 6864
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/d/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/c/a;)V

    return-void
.end method

.method private c(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    .line 548
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/d/b;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    const-string v0, ""

    if-eqz p1, :cond_0

    .line 550
    invoke-virtual {p1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 551
    :cond_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/d/b;->b()Ljava/lang/String;

    move-object p1, v0

    .line 555
    :cond_1
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 556
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v0, 0x8

    if-ge p1, v0, :cond_2

    const-string p1, "com.android.launcher.settings"

    goto :goto_0

    :cond_2
    const/16 v0, 0x13

    if-ge p1, v0, :cond_3

    const-string p1, "com.android.launcher2.settings"

    goto :goto_0

    :cond_3
    const-string p1, "com.android.launcher3.settings"

    .line 565
    :cond_4
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "content://"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "/favorites?notify=true"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method


# virtual methods
.method public final a()I
    .locals 4

    .line 369
    iget-object v0, p0, Lcom/mbridge/msdk/d/b;->a:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/Context;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 373
    :cond_0
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/f;

    move-result-object v0

    .line 374
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v2

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v2

    if-nez v2, :cond_1

    .line 376
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v2

    .line 378
    :cond_1
    invoke-virtual {v2}, Lcom/mbridge/msdk/c/a;->D()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2, v1}, Lcom/mbridge/msdk/foundation/db/f;->a(Ljava/lang/String;I)Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 379
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_2

    .line 380
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    return v0

    :cond_2
    return v1
.end method

.method public final a(ILjava/lang/String;)V
    .locals 2

    .line 667
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/d/b;->a:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/Context;

    if-nez v0, :cond_0

    return-void

    .line 671
    :cond_0
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/mbridge/msdk/d/b$2;

    invoke-direct {v1, p0, p2, p1}, Lcom/mbridge/msdk/d/b$2;-><init>(Lcom/mbridge/msdk/d/b;Ljava/lang/String;I)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 687
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 689
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_1

    .line 690
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/c/a;)V
    .locals 7

    .line 635
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/d/b;->a:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/Context;

    if-nez v0, :cond_0

    return-void

    .line 637
    :cond_0
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/f;

    move-result-object v0

    .line 638
    invoke-virtual {p1}, Lcom/mbridge/msdk/c/a;->D()Ljava/lang/String;

    move-result-object p1

    const/4 v1, 0x0

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/foundation/db/f;->a(Ljava/lang/String;I)Ljava/util/List;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 639
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_3

    .line 640
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_1
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 641
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIsAddSuccesful()I

    move-result v3

    if-nez v3, :cond_1

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIsDeleted()I

    move-result v3

    if-nez v3, :cond_1

    .line 642
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v3

    invoke-direct {p0, v3}, Lcom/mbridge/msdk/d/b;->b(Ljava/lang/String;)I

    move-result v3

    const/4 v4, 0x1

    if-eqz v3, :cond_2

    .line 644
    invoke-direct {p0, v2, v4, v4}, Lcom/mbridge/msdk/d/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;II)V

    .line 645
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v3

    const-string v4, "mb_shortcuts_ctime"

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    invoke-static {v5, v6}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v4, v5}, Lcom/mbridge/msdk/foundation/a/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 647
    :cond_2
    invoke-direct {p0, v2, v4, v1}, Lcom/mbridge/msdk/d/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;II)V

    :goto_1
    const/4 v3, -0x1

    .line 649
    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIsAddSuccesful(I)V

    .line 650
    new-instance v3, Landroid/content/ContentValues;

    invoke-direct {v3}, Landroid/content/ContentValues;-><init>()V

    const-string v4, "is_add_sucesful"

    .line 651
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIsAddSuccesful()I

    move-result v5

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v3, v4, v5}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 652
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2, v3}, Lcom/mbridge/msdk/foundation/db/f;->a(Ljava/lang/String;Landroid/content/ContentValues;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 657
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_3
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/app/Activity;)V
    .locals 6

    .line 185
    iget-object v0, p0, Lcom/mbridge/msdk/d/b;->a:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/Context;

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v1, 0x0

    if-nez v0, :cond_1

    goto :goto_0

    .line 1226
    :cond_1
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/f;

    move-result-object v2

    .line 1227
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v3

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v3

    if-nez v3, :cond_2

    .line 1229
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v3

    .line 1231
    :cond_2
    invoke-virtual {v3}, Lcom/mbridge/msdk/c/a;->D()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3, v1}, Lcom/mbridge/msdk/foundation/db/f;->a(Ljava/lang/String;I)Ljava/util/List;

    move-result-object v2

    if-eqz v2, :cond_4

    .line 1232
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_4

    .line 1233
    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_3
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_4

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 1234
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_3

    const/4 v1, 0x1

    :cond_4
    :goto_0
    if-eqz v1, :cond_5

    .line 188
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/d/b;->a(Landroid/app/Activity;)V

    return-void

    .line 191
    :cond_5
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_6

    .line 192
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object v2

    new-instance v3, Lcom/mbridge/msdk/d/b$1;

    invoke-direct {v3, p0, p2, v0, p1}, Lcom/mbridge/msdk/d/b$1;-><init>(Lcom/mbridge/msdk/d/b;Landroid/app/Activity;Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    invoke-virtual {v1, v2, v3}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V

    goto :goto_1

    .line 214
    :cond_6
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/d/b;->a(Landroid/app/Activity;)V

    :goto_1
    return-void
.end method

.method public final b()Ljava/lang/String;
    .locals 4

    .line 455
    new-instance v0, Landroid/content/Intent;

    const-string v1, "android.intent.action.MAIN"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v1, "android.intent.category.HOME"

    .line 456
    invoke-virtual {v0, v1}, Landroid/content/Intent;->addCategory(Ljava/lang/String;)Landroid/content/Intent;

    .line 457
    iget-object v1, p0, Lcom/mbridge/msdk/d/b;->a:Ljava/lang/ref/WeakReference;

    invoke-virtual {v1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/content/Context;

    const-string v2, ""

    if-nez v1, :cond_0

    return-object v2

    .line 459
    :cond_0
    invoke-virtual {v1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    const/4 v3, 0x0

    invoke-virtual {v1, v0, v3}, Landroid/content/pm/PackageManager;->resolveActivity(Landroid/content/Intent;I)Landroid/content/pm/ResolveInfo;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 460
    iget-object v1, v0, Landroid/content/pm/ResolveInfo;->activityInfo:Landroid/content/pm/ActivityInfo;

    if-nez v1, :cond_1

    goto :goto_0

    .line 463
    :cond_1
    iget-object v1, v0, Landroid/content/pm/ResolveInfo;->activityInfo:Landroid/content/pm/ActivityInfo;

    iget-object v1, v1, Landroid/content/pm/ActivityInfo;->packageName:Ljava/lang/String;

    const-string v3, "android"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    return-object v2

    .line 466
    :cond_2
    iget-object v0, v0, Landroid/content/pm/ResolveInfo;->activityInfo:Landroid/content/pm/ActivityInfo;

    iget-object v0, v0, Landroid/content/pm/ActivityInfo;->packageName:Ljava/lang/String;

    return-object v0

    :cond_3
    :goto_0
    return-object v2
.end method

.method public final c()Ljava/lang/String;
    .locals 5

    const-string v0, "com.android.launcher.permission.INSTALL_SHORTCUT"

    .line 594
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/d/b;->a(Ljava/lang/String;)Z

    move-result v0

    const-string v1, "1"

    const-string v2, "0"

    if-eqz v0, :cond_0

    move-object v0, v1

    goto :goto_0

    :cond_0
    move-object v0, v2

    :goto_0
    const-string v3, "com.android.launcher.permission.UNINSTALL_SHORTCUT"

    .line 600
    invoke-direct {p0, v3}, Lcom/mbridge/msdk/d/b;->a(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_1

    move-object v3, v1

    goto :goto_1

    :cond_1
    move-object v3, v2

    :goto_1
    const-string v4, "com.android.launcher.permission.READ_SETTINGS"

    .line 606
    invoke-direct {p0, v4}, Lcom/mbridge/msdk/d/b;->a(Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_3

    const-string v4, "com.google.android.launcher.permission.READ_SETTINGS"

    invoke-direct {p0, v4}, Lcom/mbridge/msdk/d/b;->a(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_2

    goto :goto_2

    :cond_2
    move-object v1, v2

    .line 611
    :cond_3
    :goto_2
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "["

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ","

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "]"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
