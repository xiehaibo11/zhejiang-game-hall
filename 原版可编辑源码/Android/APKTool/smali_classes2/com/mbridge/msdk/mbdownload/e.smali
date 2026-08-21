.class Lcom/mbridge/msdk/mbdownload/e;
.super Ljava/lang/Object;
.source "DownloadTool.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/mbdownload/e$c;,
        Lcom/mbridge/msdk/mbdownload/e$a;,
        Lcom/mbridge/msdk/mbdownload/e$b;
    }
.end annotation


# static fields
.field private static final a:Ljava/lang/String;


# instance fields
.field private b:Landroid/util/SparseArray;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/util/SparseArray<",
            "Lcom/mbridge/msdk/mbdownload/e$b;",
            ">;"
        }
    .end annotation
.end field

.field private c:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Lcom/mbridge/msdk/mbdownload/b$a;",
            "Landroid/os/Messenger;",
            ">;"
        }
    .end annotation
.end field

.field private d:Lcom/mbridge/msdk/mbdownload/i;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 76
    const-class v0, Lcom/mbridge/msdk/mbdownload/e;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/mbdownload/e;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/util/SparseArray;Ljava/util/Map;Lcom/mbridge/msdk/mbdownload/i;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/util/SparseArray<",
            "Lcom/mbridge/msdk/mbdownload/e$b;",
            ">;",
            "Ljava/util/Map<",
            "Lcom/mbridge/msdk/mbdownload/b$a;",
            "Landroid/os/Messenger;",
            ">;",
            "Lcom/mbridge/msdk/mbdownload/i;",
            ")V"
        }
    .end annotation

    .line 94
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 95
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/e;->b:Landroid/util/SparseArray;

    .line 96
    iput-object p2, p0, Lcom/mbridge/msdk/mbdownload/e;->c:Ljava/util/Map;

    .line 97
    iput-object p3, p0, Lcom/mbridge/msdk/mbdownload/e;->d:Lcom/mbridge/msdk/mbdownload/i;

    return-void
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;Landroid/app/PendingIntent;)Landroid/app/Notification;
    .locals 4

    if-eqz p0, :cond_0

    .line 1264
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/v;->w(Landroid/content/Context;)I

    move-result v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    const/16 v1, 0x1a

    if-lt v0, v1, :cond_2

    .line 1267
    :try_start_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v0, v1, :cond_2

    .line 1268
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v1, "download"

    const v2, 0x1080082

    if-nez v0, :cond_1

    .line 1270
    :try_start_1
    new-instance v0, Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-direct {v0, p0, v1}, Landroid/support/v4/app/NotificationCompat$Builder;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 1271
    invoke-virtual {v0, v2}, Landroid/support/v4/app/NotificationCompat$Builder;->setSmallIcon(I)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p0

    .line 1272
    invoke-virtual {p0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setTicker(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p0

    .line 1273
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-virtual {p0, v0, v1}, Landroid/support/v4/app/NotificationCompat$Builder;->setWhen(J)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p0

    .line 1274
    invoke-virtual {p0, p2}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentIntent(Landroid/app/PendingIntent;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p0

    .line 1275
    invoke-virtual {p0}, Landroid/support/v4/app/NotificationCompat$Builder;->build()Landroid/app/Notification;

    move-result-object p0

    goto/16 :goto_1

    .line 1277
    :cond_1
    new-instance v3, Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-direct {v3, p0, v1}, Landroid/support/v4/app/NotificationCompat$Builder;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 1278
    invoke-virtual {v3, v2}, Landroid/support/v4/app/NotificationCompat$Builder;->setSmallIcon(I)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p0

    .line 1279
    invoke-static {v0, v2}, Landroid/graphics/BitmapFactory;->decodeResource(Landroid/content/res/Resources;I)Landroid/graphics/Bitmap;

    move-result-object v0

    invoke-virtual {p0, v0}, Landroid/support/v4/app/NotificationCompat$Builder;->setLargeIcon(Landroid/graphics/Bitmap;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p0

    .line 1280
    invoke-virtual {p0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setTicker(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p0

    .line 1281
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-virtual {p0, v0, v1}, Landroid/support/v4/app/NotificationCompat$Builder;->setWhen(J)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p0

    .line 1282
    invoke-virtual {p0, p2}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentIntent(Landroid/app/PendingIntent;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p0

    .line 1283
    invoke-virtual {p0}, Landroid/support/v4/app/NotificationCompat$Builder;->build()Landroid/app/Notification;

    move-result-object p0

    goto :goto_1

    .line 1285
    :cond_2
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x10

    const v2, 0x1080081

    if-ge v0, v1, :cond_3

    .line 1286
    new-instance v0, Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-direct {v0, p0}, Landroid/support/v4/app/NotificationCompat$Builder;-><init>(Landroid/content/Context;)V

    .line 1287
    invoke-virtual {v0, v2}, Landroid/support/v4/app/NotificationCompat$Builder;->setSmallIcon(I)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p0

    .line 1288
    invoke-virtual {p0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setTicker(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p0

    .line 1289
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-virtual {p0, v0, v1}, Landroid/support/v4/app/NotificationCompat$Builder;->setWhen(J)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p0

    .line 1290
    invoke-virtual {p0, p2}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentIntent(Landroid/app/PendingIntent;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object p0

    .line 1291
    invoke-virtual {p0}, Landroid/support/v4/app/NotificationCompat$Builder;->build()Landroid/app/Notification;

    move-result-object p0

    goto :goto_1

    .line 1293
    :cond_3
    new-instance v0, Landroid/app/Notification$Builder;

    invoke-direct {v0, p0}, Landroid/app/Notification$Builder;-><init>(Landroid/content/Context;)V

    .line 1294
    invoke-virtual {v0, v2}, Landroid/app/Notification$Builder;->setSmallIcon(I)Landroid/app/Notification$Builder;

    move-result-object p0

    .line 1295
    invoke-virtual {p0, p1}, Landroid/app/Notification$Builder;->setTicker(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;

    move-result-object p0

    .line 1296
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-virtual {p0, v0, v1}, Landroid/app/Notification$Builder;->setWhen(J)Landroid/app/Notification$Builder;

    move-result-object p0

    .line 1297
    invoke-virtual {p0, p2}, Landroid/app/Notification$Builder;->setContentIntent(Landroid/app/PendingIntent;)Landroid/app/Notification$Builder;

    move-result-object p0

    .line 1298
    invoke-virtual {p0}, Landroid/app/Notification$Builder;->build()Landroid/app/Notification;

    move-result-object p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p0

    .line 1301
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string p1, "DownloadTool"

    invoke-static {p1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p0, 0x0

    :goto_1
    return-object p0
.end method

.method public static a(Ljava/lang/String;Landroid/content/Context;[Z)Ljava/io/File;
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 4145
    invoke-static {}, Landroid/os/Environment;->getExternalStorageState()Ljava/lang/String;

    move-result-object v0

    const-string v1, "mounted"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 1119
    sget-object v0, Lcom/mbridge/msdk/foundation/same/b/c;->h:Lcom/mbridge/msdk/foundation/same/b/c;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/b/e;->b(Lcom/mbridge/msdk/foundation/same/b/c;)Ljava/lang/String;

    move-result-object v0

    .line 1120
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "/download/.mb"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 1121
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 1122
    invoke-virtual {v0}, Ljava/io/File;->mkdirs()Z

    .line 1123
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    .line 1124
    aput-boolean p0, p2, v1

    return-object v0

    .line 1128
    :cond_0
    invoke-virtual {p1}, Landroid/content/Context;->getCacheDir()Ljava/io/File;

    move-result-object p0

    invoke-virtual {p0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p0

    .line 1129
    new-instance p1, Ljava/io/File;

    invoke-direct {p1, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/io/File;->mkdir()Z

    const/16 p1, 0x1f9

    const/4 v0, -0x1

    .line 1130
    invoke-static {p0, p1, v0, v0}, Lcom/mbridge/msdk/mbdownload/e;->a(Ljava/lang/String;III)Z

    .line 1131
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "/mbdownload"

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 1132
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/io/File;->mkdir()Z

    .line 1133
    invoke-static {p0, p1, v0, v0}, Lcom/mbridge/msdk/mbdownload/e;->a(Ljava/lang/String;III)Z

    .line 1134
    new-instance p1, Ljava/io/File;

    invoke-direct {p1, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 1135
    aput-boolean v1, p2, v1

    return-object p1
.end method

.method public static a()Ljava/lang/String;
    .locals 4

    .line 1101
    new-instance v0, Ljava/util/Date;

    invoke-direct {v0}, Ljava/util/Date;-><init>()V

    .line 1102
    new-instance v1, Ljava/text/SimpleDateFormat;

    sget-object v2, Ljava/util/Locale;->US:Ljava/util/Locale;

    const-string v3, "yyyy-MM-dd HH:mm:ss"

    invoke-direct {v1, v3, v2}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;Ljava/util/Locale;)V

    .line 1103
    invoke-virtual {v1, v0}, Ljava/text/DateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 7

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 1078
    :cond_0
    :try_start_0
    invoke-virtual {p0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const-string v1, "MD5"

    .line 1079
    invoke-static {v1}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object v1

    .line 1080
    invoke-virtual {v1}, Ljava/security/MessageDigest;->reset()V

    .line 1081
    invoke-virtual {v1, v0}, Ljava/security/MessageDigest;->update([B)V

    .line 1082
    invoke-virtual {v1}, Ljava/security/MessageDigest;->digest()[B

    move-result-object v0

    .line 1083
    new-instance v1, Ljava/lang/StringBuffer;

    invoke-direct {v1}, Ljava/lang/StringBuffer;-><init>()V

    const/4 v2, 0x0

    move v3, v2

    .line 1084
    :goto_0
    array-length v4, v0

    if-ge v3, v4, :cond_1

    const-string v4, "%02X"

    const/4 v5, 0x1

    new-array v5, v5, [Ljava/lang/Object;

    .line 1085
    aget-byte v6, v0, v3

    invoke-static {v6}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object v6

    aput-object v6, v5, v2

    invoke-static {v4, v5}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 1088
    :cond_1
    invoke-virtual {v1}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    const-string v0, "[^[a-z][A-Z][0-9][.][_]]"

    const-string v1, ""

    .line 1091
    invoke-virtual {p0, v0, v1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbdownload/e;)Ljava/util/Map;
    .locals 0

    .line 75
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/e;->c:Ljava/util/Map;

    return-object p0
.end method

.method private a(Landroid/content/Context;Lcom/mbridge/msdk/mbdownload/e$a;II)V
    .locals 5

    .line 351
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x10

    if-lt v0, v1, :cond_3

    const-string v0, "continue"

    .line 353
    invoke-static {p3, v0}, Lcom/mbridge/msdk/mbdownload/j;->a(ILjava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 352
    invoke-static {p1, v1}, Lcom/mbridge/msdk/mbdownload/j;->a(Landroid/content/Context;Ljava/lang/String;)Landroid/app/PendingIntent;

    move-result-object v1

    const-string v2, "install or active"

    .line 357
    invoke-static {p3, v2}, Lcom/mbridge/msdk/mbdownload/j;->a(ILjava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 356
    invoke-static {p1, v2}, Lcom/mbridge/msdk/mbdownload/j;->a(Landroid/content/Context;Ljava/lang/String;)Landroid/app/PendingIntent;

    move-result-object v2

    .line 360
    invoke-static {p3, v0}, Lcom/mbridge/msdk/mbdownload/j;->a(ILjava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 359
    invoke-static {p1, v0}, Lcom/mbridge/msdk/mbdownload/j;->a(Landroid/content/Context;Ljava/lang/String;)Landroid/app/PendingIntent;

    move-result-object v0

    const-string v3, "parent_view_click"

    .line 363
    invoke-static {p3, v3}, Lcom/mbridge/msdk/mbdownload/j;->a(ILjava/lang/String;)Ljava/lang/String;

    move-result-object p3

    .line 362
    invoke-static {p1, p3}, Lcom/mbridge/msdk/mbdownload/j;->a(Landroid/content/Context;Ljava/lang/String;)Landroid/app/PendingIntent;

    move-result-object p3

    const/4 v3, 0x1

    const-string v4, "id"

    if-eq p4, v3, :cond_2

    const/4 v1, 0x2

    if-eq p4, v1, :cond_1

    const/4 v0, 0x3

    if-eq p4, v0, :cond_0

    goto :goto_0

    .line 378
    :cond_0
    iget-object p4, p2, Lcom/mbridge/msdk/mbdownload/e$a;->j:Landroid/widget/RemoteViews;

    const-string v0, "mbridge_download_notify_progress_status"

    invoke-static {p1, v0, v4}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p4, v0, v2}, Landroid/widget/RemoteViews;->setOnClickPendingIntent(ILandroid/app/PendingIntent;)V

    goto :goto_0

    .line 373
    :cond_1
    iget-object p4, p2, Lcom/mbridge/msdk/mbdownload/e$a;->j:Landroid/widget/RemoteViews;

    const-string v1, "mbridge_download_notify_pause"

    invoke-static {p1, v1, v4}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p4, v1, v0}, Landroid/widget/RemoteViews;->setOnClickPendingIntent(ILandroid/app/PendingIntent;)V

    goto :goto_0

    .line 367
    :cond_2
    iget-object p4, p2, Lcom/mbridge/msdk/mbdownload/e$a;->j:Landroid/widget/RemoteViews;

    const-string v0, "mbridge_download_notify_continue"

    invoke-static {p1, v0, v4}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p4, v0, v1}, Landroid/widget/RemoteViews;->setOnClickPendingIntent(ILandroid/app/PendingIntent;)V

    .line 382
    :goto_0
    iget-object p2, p2, Lcom/mbridge/msdk/mbdownload/e$a;->j:Landroid/widget/RemoteViews;

    const-string p4, "mbridge_download_notify_parent_view"

    invoke-static {p1, p4, v4}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p2, p1, p3}, Landroid/widget/RemoteViews;->setOnClickPendingIntent(ILandroid/app/PendingIntent;)V

    :cond_3
    return-void
.end method

.method private static a(Ljava/lang/String;III)Z
    .locals 8

    const-string p2, "error when set permissions:"

    const/4 p3, 0x0

    :try_start_0
    const-string v0, "android.os.FileUtils"

    .line 1163
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "setPermissions"

    const/4 v2, 0x4

    new-array v3, v2, [Ljava/lang/Class;

    .line 1164
    const-class v4, Ljava/lang/String;

    aput-object v4, v3, p3

    sget-object v4, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    const/4 v5, 0x1

    aput-object v4, v3, v5

    sget-object v4, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    const/4 v6, 0x2

    aput-object v4, v3, v6

    sget-object v4, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    const/4 v7, 0x3

    aput-object v4, v3, v7

    invoke-virtual {v0, v1, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    const/4 v1, 0x0

    new-array v2, v2, [Ljava/lang/Object;

    aput-object p0, v2, p3

    .line 1165
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, v2, v5

    const/4 p0, -0x1

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v2, v6

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, v2, v7

    invoke-virtual {v0, v1, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_4
    .catch Ljava/lang/NoSuchMethodException; {:try_start_0 .. :try_end_0} :catch_3
    .catch Ljava/lang/IllegalArgumentException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_0 .. :try_end_0} :catch_0

    return v5

    :catch_0
    move-exception p0

    .line 1176
    sget-object p1, Lcom/mbridge/msdk/mbdownload/e;->a:Ljava/lang/String;

    invoke-static {p1, p2, p0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    goto :goto_0

    :catch_1
    move-exception p0

    .line 1174
    sget-object p1, Lcom/mbridge/msdk/mbdownload/e;->a:Ljava/lang/String;

    invoke-static {p1, p2, p0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    goto :goto_0

    :catch_2
    move-exception p0

    .line 1172
    sget-object p1, Lcom/mbridge/msdk/mbdownload/e;->a:Ljava/lang/String;

    invoke-static {p1, p2, p0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    goto :goto_0

    :catch_3
    move-exception p0

    .line 1170
    sget-object p1, Lcom/mbridge/msdk/mbdownload/e;->a:Ljava/lang/String;

    invoke-static {p1, p2, p0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    goto :goto_0

    :catch_4
    move-exception p0

    .line 1168
    sget-object p1, Lcom/mbridge/msdk/mbdownload/e;->a:Ljava/lang/String;

    invoke-static {p1, p2, p0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return p3
.end method

.method static synthetic b()Ljava/lang/String;
    .locals 1

    .line 75
    sget-object v0, Lcom/mbridge/msdk/mbdownload/e;->a:Ljava/lang/String;

    return-object v0
.end method

.method private b(Landroid/content/Context;I)V
    .locals 4

    .line 467
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    const-string v0, "notification"

    .line 469
    invoke-virtual {p1, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/NotificationManager;

    .line 470
    invoke-static {}, Lcom/mbridge/msdk/mbdownload/j;->a()V

    .line 471
    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/e;->b:Landroid/util/SparseArray;

    invoke-virtual {v1, p2}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/mbdownload/e$b;

    .line 472
    iget-object v2, v1, Lcom/mbridge/msdk/mbdownload/e$b;->b:Lcom/mbridge/msdk/mbdownload/e$a;

    invoke-virtual {v2}, Lcom/mbridge/msdk/mbdownload/e$a;->e()V

    .line 473
    iget-object v2, v1, Lcom/mbridge/msdk/mbdownload/e$b;->b:Lcom/mbridge/msdk/mbdownload/e$a;

    const/4 v3, 0x1

    invoke-direct {p0, p1, v2, p2, v3}, Lcom/mbridge/msdk/mbdownload/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/mbdownload/e$a;II)V

    .line 474
    iget-object p1, v1, Lcom/mbridge/msdk/mbdownload/e$b;->b:Lcom/mbridge/msdk/mbdownload/e$a;

    iget-object v2, v1, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    iget-object v2, v2, Lcom/mbridge/msdk/mbdownload/b$a;->c:Ljava/lang/String;

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/mbdownload/e$a;->c(Ljava/lang/CharSequence;)Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object p1

    iget-object v2, v1, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    iget-boolean v2, v2, Lcom/mbridge/msdk/mbdownload/b$a;->h:Z

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/mbdownload/e$a;->a(Z)Lcom/mbridge/msdk/mbdownload/h;

    move-result-object p1

    .line 475
    invoke-virtual {p1, v3}, Lcom/mbridge/msdk/mbdownload/h;->b(Z)Lcom/mbridge/msdk/mbdownload/h;

    .line 476
    iget-object p1, v1, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    iget-boolean p1, p1, Lcom/mbridge/msdk/mbdownload/b$a;->i:Z

    if-eqz p1, :cond_0

    .line 477
    iget-object p1, v1, Lcom/mbridge/msdk/mbdownload/e$b;->b:Lcom/mbridge/msdk/mbdownload/e$a;

    invoke-virtual {p1}, Lcom/mbridge/msdk/mbdownload/e$a;->c()Lcom/mbridge/msdk/mbdownload/e$a;

    .line 479
    :cond_0
    iget-object p1, v1, Lcom/mbridge/msdk/mbdownload/e$b;->b:Lcom/mbridge/msdk/mbdownload/e$a;

    invoke-virtual {p1}, Lcom/mbridge/msdk/mbdownload/e$a;->d()Landroid/app/Notification;

    move-result-object p1

    invoke-virtual {v0, p2, p1}, Landroid/app/NotificationManager;->notify(ILandroid/app/Notification;)V

    return-void
.end method

.method public static b(Landroid/content/Context;)Z
    .locals 4

    const/4 v0, 0x0

    .line 981
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    const-string v2, "android.permission.ACCESS_NETWORK_STATE"

    .line 982
    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Landroid/content/pm/PackageManager;->checkPermission(Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    const-string v2, "connectivity"

    .line 983
    invoke-virtual {p0, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/net/ConnectivityManager;

    .line 984
    invoke-virtual {p0}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object p0

    .line 985
    invoke-virtual {p0}, Landroid/net/NetworkInfo;->isConnectedOrConnecting()Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v1, :cond_0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :catch_0
    :cond_0
    return v0
.end method


# virtual methods
.method final a(Lcom/mbridge/msdk/mbdownload/b$a;)I
    .locals 4

    const/4 v0, 0x0

    .line 452
    :goto_0
    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/e;->b:Landroid/util/SparseArray;

    invoke-virtual {v1}, Landroid/util/SparseArray;->size()I

    move-result v1

    if-ge v0, v1, :cond_2

    .line 453
    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/e;->b:Landroid/util/SparseArray;

    invoke-virtual {v1, v0}, Landroid/util/SparseArray;->keyAt(I)I

    move-result v1

    .line 454
    iget-object v2, p1, Lcom/mbridge/msdk/mbdownload/b$a;->f:Ljava/lang/String;

    if-eqz v2, :cond_0

    iget-object v2, p1, Lcom/mbridge/msdk/mbdownload/b$a;->f:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/mbdownload/e;->b:Landroid/util/SparseArray;

    .line 456
    invoke-virtual {v3, v1}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/mbdownload/e$b;

    iget-object v3, v3, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    iget-object v3, v3, Lcom/mbridge/msdk/mbdownload/b$a;->f:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 457
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/e;->b:Landroid/util/SparseArray;

    invoke-virtual {p1, v1}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/mbdownload/e$b;

    iget p1, p1, Lcom/mbridge/msdk/mbdownload/e$b;->c:I

    return p1

    .line 459
    :cond_0
    iget-object v2, p0, Lcom/mbridge/msdk/mbdownload/e;->b:Landroid/util/SparseArray;

    invoke-virtual {v2, v1}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/mbdownload/e$b;

    iget-object v2, v2, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    iget-object v2, v2, Lcom/mbridge/msdk/mbdownload/b$a;->d:Ljava/lang/String;

    iget-object v3, p1, Lcom/mbridge/msdk/mbdownload/b$a;->d:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 460
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/e;->b:Landroid/util/SparseArray;

    invoke-virtual {p1, v1}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/mbdownload/e$b;

    iget p1, p1, Lcom/mbridge/msdk/mbdownload/e$b;->c:I

    return p1

    :cond_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_2
    const/4 p1, -0x1

    return p1
.end method

.method final a(Landroid/content/Context;Lcom/mbridge/msdk/mbdownload/b$a;II)Lcom/mbridge/msdk/mbdownload/e$a;
    .locals 5

    .line 321
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    .line 322
    new-instance v0, Lcom/mbridge/msdk/mbdownload/e$a;

    invoke-direct {v0, p1}, Lcom/mbridge/msdk/mbdownload/e$a;-><init>(Landroid/content/Context;)V

    .line 323
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    const/4 v2, 0x0

    const/high16 v3, 0x8000000

    invoke-static {p1, v2, v1, v3}, Landroid/app/PendingIntent;->getActivity(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    .line 325
    iget-boolean v1, p2, Lcom/mbridge/msdk/mbdownload/b$a;->q:Z

    if-eqz v1, :cond_0

    .line 326
    invoke-virtual {v0}, Lcom/mbridge/msdk/mbdownload/e$a;->e()V

    const/4 v1, 0x2

    .line 327
    invoke-direct {p0, p1, v0, p3, v1}, Lcom/mbridge/msdk/mbdownload/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/mbdownload/e$a;II)V

    :cond_0
    const/4 v1, 0x3

    .line 329
    invoke-direct {p0, p1, v0, p3, v1}, Lcom/mbridge/msdk/mbdownload/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/mbdownload/e$a;II)V

    .line 330
    iget-object p3, p2, Lcom/mbridge/msdk/mbdownload/b$a;->j:Ljava/lang/String;

    invoke-virtual {v0, p3}, Lcom/mbridge/msdk/mbdownload/e$a;->a(Ljava/lang/String;)Lcom/mbridge/msdk/mbdownload/e$a;

    .line 331
    invoke-static {p1}, Lcom/mbridge/msdk/mbdownload/g;->f(Landroid/content/Context;)Ljava/lang/String;

    const p1, 0x1080081

    .line 332
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbdownload/h;->a(I)Lcom/mbridge/msdk/mbdownload/h;

    move-result-object p1

    .line 335
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-virtual {p1, v3, v4}, Lcom/mbridge/msdk/mbdownload/h;->a(J)Lcom/mbridge/msdk/mbdownload/h;

    .line 337
    iget-boolean p1, p2, Lcom/mbridge/msdk/mbdownload/b$a;->i:Z

    if-eqz p1, :cond_1

    .line 338
    invoke-virtual {v0}, Lcom/mbridge/msdk/mbdownload/e$a;->a()Lcom/mbridge/msdk/mbdownload/e$a;

    .line 341
    :cond_1
    iget-object p1, p2, Lcom/mbridge/msdk/mbdownload/b$a;->c:Ljava/lang/String;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbdownload/e$a;->c(Ljava/lang/CharSequence;)Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object p1

    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "%"

    invoke-virtual {p3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    .line 342
    invoke-virtual {p1, p3}, Lcom/mbridge/msdk/mbdownload/e$a;->a(Ljava/lang/CharSequence;)Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object p1

    const/16 p3, 0x64

    .line 343
    invoke-virtual {p1, p3, p4, v2}, Lcom/mbridge/msdk/mbdownload/e$a;->a(IIZ)Lcom/mbridge/msdk/mbdownload/e$a;

    .line 345
    iget-boolean p1, p2, Lcom/mbridge/msdk/mbdownload/b$a;->h:Z

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbdownload/e$a;->a(Z)Lcom/mbridge/msdk/mbdownload/h;

    move-result-object p1

    const/4 p2, 0x1

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/mbdownload/h;->b(Z)Lcom/mbridge/msdk/mbdownload/h;

    return-object v0
.end method

.method final a(Landroid/content/Context;I)V
    .locals 4

    .line 483
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    const-string v0, "notification"

    .line 485
    invoke-virtual {p1, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/app/NotificationManager;

    .line 486
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e;->b:Landroid/util/SparseArray;

    invoke-virtual {v0, p2}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/mbdownload/e$b;

    if-eqz v0, :cond_3

    .line 488
    sget-object v1, Lcom/mbridge/msdk/mbdownload/e;->a:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "download service clear cache "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v0, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    iget-object v3, v3, Lcom/mbridge/msdk/mbdownload/b$a;->c:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 489
    iget-object v1, v0, Lcom/mbridge/msdk/mbdownload/e$b;->a:Lcom/mbridge/msdk/mbdownload/k;

    if-eqz v1, :cond_0

    .line 490
    iget-object v1, v0, Lcom/mbridge/msdk/mbdownload/e$b;->a:Lcom/mbridge/msdk/mbdownload/k;

    const/4 v2, 0x2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/mbdownload/k;->a(I)V

    .line 491
    :cond_0
    iget v1, v0, Lcom/mbridge/msdk/mbdownload/e$b;->c:I

    invoke-virtual {p1, v1}, Landroid/app/NotificationManager;->cancel(I)V

    .line 492
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/e;->c:Ljava/util/Map;

    iget-object v1, v0, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    invoke-interface {p1, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 493
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/e;->c:Ljava/util/Map;

    iget-object v1, v0, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    invoke-interface {p1, v1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 494
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/e;->b:Landroid/util/SparseArray;

    .line 3124
    iget v1, v0, Lcom/mbridge/msdk/mbdownload/e$b;->c:I

    invoke-virtual {p1, v1}, Landroid/util/SparseArray;->indexOfKey(I)I

    move-result v1

    if-ltz v1, :cond_2

    .line 3125
    iget v0, v0, Lcom/mbridge/msdk/mbdownload/e$b;->c:I

    invoke-virtual {p1, v0}, Landroid/util/SparseArray;->remove(I)V

    .line 495
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/e;->d:Lcom/mbridge/msdk/mbdownload/i;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/mbdownload/i;->b(I)V

    :cond_3
    return-void
.end method

.method final a(Landroid/content/Context;)Z
    .locals 5

    const-string v0, "activity"

    .line 398
    invoke-virtual {p1, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/ActivityManager;

    .line 400
    invoke-virtual {v0}, Landroid/app/ActivityManager;->getRunningAppProcesses()Ljava/util/List;

    move-result-object v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 404
    :cond_0
    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p1

    .line 405
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/app/ActivityManager$RunningAppProcessInfo;

    .line 406
    iget v3, v2, Landroid/app/ActivityManager$RunningAppProcessInfo;->importance:I

    const/16 v4, 0x64

    if-ne v3, v4, :cond_1

    iget-object v2, v2, Landroid/app/ActivityManager$RunningAppProcessInfo;->processName:Ljava/lang/String;

    .line 407
    invoke-virtual {v2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    const/4 p1, 0x1

    return p1

    :cond_2
    return v1
.end method

.method final a(Lcom/mbridge/msdk/mbdownload/b$a;ZLandroid/os/Messenger;)Z
    .locals 6

    if-eqz p2, :cond_1

    .line 423
    new-instance p2, Ljava/util/Random;

    invoke-direct {p2}, Ljava/util/Random;-><init>()V

    const/16 v0, 0x3e8

    invoke-virtual {p2, v0}, Ljava/util/Random;->nextInt(I)I

    move-result p2

    .line 424
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e;->c:Ljava/util/Map;

    const-string v1, "_"

    if-eqz v0, :cond_0

    .line 425
    invoke-interface {v0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/mbdownload/b$a;

    .line 426
    sget-object v3, Lcom/mbridge/msdk/mbdownload/e;->a:Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, " downling  "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, v2, Lcom/mbridge/msdk/mbdownload/b$a;->c:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "   "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, v2, Lcom/mbridge/msdk/mbdownload/b$a;->d:Ljava/lang/String;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 430
    :cond_0
    sget-object v0, Lcom/mbridge/msdk/mbdownload/e;->a:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, "downling  null"

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 433
    :cond_1
    iget-object p2, p0, Lcom/mbridge/msdk/mbdownload/e;->c:Ljava/util/Map;

    const/4 v0, 0x0

    if-nez p2, :cond_2

    return v0

    .line 435
    :cond_2
    invoke-interface {p2}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object p2

    invoke-interface {p2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :cond_3
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_5

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/mbdownload/b$a;

    .line 437
    iget-object v2, p1, Lcom/mbridge/msdk/mbdownload/b$a;->f:Ljava/lang/String;

    const/4 v3, 0x1

    if-eqz v2, :cond_4

    iget-object v2, p1, Lcom/mbridge/msdk/mbdownload/b$a;->f:Ljava/lang/String;

    iget-object v4, v1, Lcom/mbridge/msdk/mbdownload/b$a;->f:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_4

    .line 438
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/e;->c:Ljava/util/Map;

    invoke-interface {p1, v1, p3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return v3

    .line 442
    :cond_4
    iget-object v2, v1, Lcom/mbridge/msdk/mbdownload/b$a;->d:Ljava/lang/String;

    iget-object v4, p1, Lcom/mbridge/msdk/mbdownload/b$a;->d:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 443
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/e;->c:Ljava/util/Map;

    invoke-interface {p1, v1, p3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return v3

    :cond_5
    return v0
.end method

.method final a(Lcom/mbridge/msdk/mbdownload/c;Landroid/content/Intent;)Z
    .locals 16

    move-object/from16 v1, p0

    move-object/from16 v0, p1

    const/4 v2, 0x0

    .line 592
    :try_start_0
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/mbdownload/c;->c()Landroid/app/Service;

    move-result-object v3

    invoke-virtual {v3}, Landroid/app/Service;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    .line 593
    invoke-virtual/range {p2 .. p2}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v4

    const-string v5, "com.mbridge.msdk.broadcast.download.msg"

    invoke-virtual {v4, v5}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    if-nez v4, :cond_0

    return v2

    :cond_0
    const-string v5, ":"

    .line 597
    invoke-virtual {v4, v5}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v4

    .line 599
    aget-object v5, v4, v2

    invoke-static {v5}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v5

    const/4 v6, 0x1

    .line 600
    aget-object v4, v4, v6

    invoke-virtual {v4}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v4

    if-eqz v5, :cond_16

    .line 601
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_16

    iget-object v7, v1, Lcom/mbridge/msdk/mbdownload/e;->b:Landroid/util/SparseArray;

    .line 602
    invoke-virtual {v7, v5}, Landroid/util/SparseArray;->indexOfKey(I)I

    move-result v7

    if-ltz v7, :cond_16

    .line 603
    iget-object v7, v1, Lcom/mbridge/msdk/mbdownload/e;->b:Landroid/util/SparseArray;

    invoke-virtual {v7, v5}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/mbridge/msdk/mbdownload/e$b;

    .line 604
    iget-object v8, v7, Lcom/mbridge/msdk/mbdownload/e$b;->a:Lcom/mbridge/msdk/mbdownload/k;

    .line 605
    iget-object v9, v7, Lcom/mbridge/msdk/mbdownload/e$b;->f:[J

    aget-wide v10, v9, v2

    .line 606
    iget-object v9, v7, Lcom/mbridge/msdk/mbdownload/e$b;->f:[J

    aget-wide v10, v9, v6

    .line 607
    iget-object v9, v7, Lcom/mbridge/msdk/mbdownload/e$b;->f:[J

    const/4 v10, 0x2

    aget-wide v11, v9, v10

    const-string v9, "continue"

    .line 609
    invoke-virtual {v9, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v9
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_a

    const-string v11, "Receive action do pause click."

    const/4 v12, 0x6

    const-string v13, "Receive action do play click."

    const/4 v14, 0x7

    const-string v15, ""

    if-eqz v9, :cond_8

    if-nez v8, :cond_3

    .line 611
    :try_start_1
    sget-object v4, Lcom/mbridge/msdk/mbdownload/e;->a:Ljava/lang/String;

    const-string v8, "Receive action do play click new thread."

    invoke-static {v4, v8}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 616
    invoke-static {v3}, Lcom/mbridge/msdk/mbdownload/e;->b(Landroid/content/Context;)Z

    move-result v4

    if-nez v4, :cond_1

    .line 617
    sget-object v0, Lcom/mbridge/msdk/mbdownload/g;->d:Ljava/lang/String;

    invoke-static {v3, v0, v6}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 619
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    return v2

    .line 623
    :cond_1
    new-instance v3, Lcom/mbridge/msdk/mbdownload/k;

    iget-object v4, v7, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    iget v8, v7, Lcom/mbridge/msdk/mbdownload/e$b;->d:I

    invoke-direct {v3, v0, v4, v5, v8}, Lcom/mbridge/msdk/mbdownload/k;-><init>(Lcom/mbridge/msdk/mbdownload/c;Lcom/mbridge/msdk/mbdownload/b$a;II)V

    .line 624
    iput-object v3, v7, Lcom/mbridge/msdk/mbdownload/e$b;->a:Lcom/mbridge/msdk/mbdownload/k;

    .line 625
    invoke-virtual {v3}, Lcom/mbridge/msdk/mbdownload/k;->start()V

    .line 628
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 629
    iput v10, v0, Landroid/os/Message;->what:I

    .line 630
    iput v14, v0, Landroid/os/Message;->arg1:I

    .line 631
    iput v5, v0, Landroid/os/Message;->arg2:I
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_a

    .line 634
    :try_start_2
    iget-object v3, v1, Lcom/mbridge/msdk/mbdownload/e;->c:Ljava/util/Map;

    iget-object v4, v7, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    invoke-interface {v3, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    if-eqz v3, :cond_2

    .line 635
    iget-object v3, v1, Lcom/mbridge/msdk/mbdownload/e;->c:Ljava/util/Map;

    iget-object v4, v7, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    invoke-interface {v3, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/os/Messenger;

    invoke-virtual {v3, v0}, Landroid/os/Messenger;->send(Landroid/os/Message;)V
    :try_end_2
    .catch Landroid/os/RemoteException; {:try_start_2 .. :try_end_2} :catch_0
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_a

    goto :goto_0

    :catch_0
    move-exception v0

    .line 638
    :try_start_3
    sget-object v3, Lcom/mbridge/msdk/mbdownload/e;->a:Ljava/lang/String;

    invoke-static {v3, v15, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_2
    :goto_0
    return v6

    .line 643
    :cond_3
    invoke-virtual {v8}, Lcom/mbridge/msdk/mbdownload/k;->c()I

    move-result v0

    sget v4, Lcom/mbridge/msdk/mbdownload/k;->b:I

    if-ne v0, v4, :cond_6

    .line 644
    sget-object v0, Lcom/mbridge/msdk/mbdownload/e;->a:Ljava/lang/String;

    invoke-static {v0, v13}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 649
    invoke-static {v3}, Lcom/mbridge/msdk/mbdownload/e;->b(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_4

    .line 650
    sget-object v0, Lcom/mbridge/msdk/mbdownload/g;->d:Ljava/lang/String;

    invoke-static {v3, v0, v6}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 652
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    return v2

    .line 656
    :cond_4
    invoke-virtual {v8}, Lcom/mbridge/msdk/mbdownload/k;->b()V

    .line 659
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 660
    iput v10, v0, Landroid/os/Message;->what:I

    .line 661
    iput v14, v0, Landroid/os/Message;->arg1:I

    .line 662
    iput v5, v0, Landroid/os/Message;->arg2:I
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_a

    .line 665
    :try_start_4
    iget-object v3, v1, Lcom/mbridge/msdk/mbdownload/e;->c:Ljava/util/Map;

    iget-object v4, v7, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    invoke-interface {v3, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    if-eqz v3, :cond_5

    .line 666
    iget-object v3, v1, Lcom/mbridge/msdk/mbdownload/e;->c:Ljava/util/Map;

    iget-object v4, v7, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    invoke-interface {v3, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/os/Messenger;

    invoke-virtual {v3, v0}, Landroid/os/Messenger;->send(Landroid/os/Message;)V
    :try_end_4
    .catch Landroid/os/RemoteException; {:try_start_4 .. :try_end_4} :catch_1
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_a

    goto :goto_1

    :catch_1
    move-exception v0

    .line 669
    :try_start_5
    sget-object v3, Lcom/mbridge/msdk/mbdownload/e;->a:Ljava/lang/String;

    invoke-static {v3, v15, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_5
    :goto_1
    return v6

    .line 673
    :cond_6
    sget-object v0, Lcom/mbridge/msdk/mbdownload/e;->a:Ljava/lang/String;

    invoke-static {v0, v11}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 674
    invoke-virtual {v8}, Lcom/mbridge/msdk/mbdownload/k;->a()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_a

    .line 676
    :try_start_6
    invoke-virtual {v8}, Lcom/mbridge/msdk/mbdownload/k;->interrupt()V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_2

    goto :goto_2

    :catch_2
    move-exception v0

    move-object v4, v0

    .line 678
    :try_start_7
    invoke-virtual {v4}, Ljava/lang/Exception;->printStackTrace()V

    .line 680
    :goto_2
    invoke-direct {v1, v3, v5}, Lcom/mbridge/msdk/mbdownload/e;->b(Landroid/content/Context;I)V

    .line 683
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 684
    iput v10, v0, Landroid/os/Message;->what:I

    .line 685
    iput v12, v0, Landroid/os/Message;->arg1:I

    .line 686
    iput v5, v0, Landroid/os/Message;->arg2:I
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_a

    .line 689
    :try_start_8
    iget-object v3, v1, Lcom/mbridge/msdk/mbdownload/e;->c:Ljava/util/Map;

    iget-object v4, v7, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    invoke-interface {v3, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    if-eqz v3, :cond_7

    .line 690
    iget-object v3, v1, Lcom/mbridge/msdk/mbdownload/e;->c:Ljava/util/Map;

    iget-object v4, v7, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    invoke-interface {v3, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/os/Messenger;

    invoke-virtual {v3, v0}, Landroid/os/Messenger;->send(Landroid/os/Message;)V
    :try_end_8
    .catch Landroid/os/RemoteException; {:try_start_8 .. :try_end_8} :catch_3
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_a

    goto :goto_3

    :catch_3
    move-exception v0

    .line 693
    :try_start_9
    sget-object v3, Lcom/mbridge/msdk/mbdownload/e;->a:Ljava/lang/String;

    invoke-static {v3, v15, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_7
    :goto_3
    return v6

    :cond_8
    const-string v9, "cancel"

    .line 697
    invoke-virtual {v9, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v9

    const/4 v2, 0x5

    if-eqz v9, :cond_c

    .line 698
    sget-object v0, Lcom/mbridge/msdk/mbdownload/e;->a:Ljava/lang/String;

    const-string v4, "Receive action do stop click."

    invoke-static {v0, v4}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_9
    .catch Ljava/lang/Exception; {:try_start_9 .. :try_end_9} :catch_a

    if-eqz v8, :cond_a

    .line 701
    :try_start_a
    invoke-virtual {v8, v10}, Lcom/mbridge/msdk/mbdownload/k;->a(I)V
    :try_end_a
    .catch Ljava/lang/Exception; {:try_start_a .. :try_end_a} :catch_5
    .catchall {:try_start_a .. :try_end_a} :catchall_0

    goto :goto_5

    :catchall_0
    move-exception v0

    move-object v4, v0

    .line 708
    :try_start_b
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 709
    iput v2, v0, Landroid/os/Message;->what:I

    .line 710
    iput v2, v0, Landroid/os/Message;->arg1:I

    .line 711
    iput v5, v0, Landroid/os/Message;->arg2:I
    :try_end_b
    .catch Ljava/lang/Exception; {:try_start_b .. :try_end_b} :catch_a

    .line 714
    :try_start_c
    iget-object v2, v1, Lcom/mbridge/msdk/mbdownload/e;->c:Ljava/util/Map;

    iget-object v6, v7, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    invoke-interface {v2, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_9

    .line 715
    iget-object v2, v1, Lcom/mbridge/msdk/mbdownload/e;->c:Ljava/util/Map;

    iget-object v6, v7, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    invoke-interface {v2, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/os/Messenger;

    invoke-virtual {v2, v0}, Landroid/os/Messenger;->send(Landroid/os/Message;)V
    :try_end_c
    .catch Landroid/os/RemoteException; {:try_start_c .. :try_end_c} :catch_4
    .catch Ljava/lang/Exception; {:try_start_c .. :try_end_c} :catch_a

    goto :goto_4

    .line 719
    :catch_4
    :try_start_d
    invoke-virtual {v1, v3, v5}, Lcom/mbridge/msdk/mbdownload/e;->a(Landroid/content/Context;I)V

    .line 721
    :cond_9
    :goto_4
    throw v4

    .line 708
    :catch_5
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 709
    iput v2, v0, Landroid/os/Message;->what:I

    .line 710
    iput v2, v0, Landroid/os/Message;->arg1:I

    .line 711
    iput v5, v0, Landroid/os/Message;->arg2:I
    :try_end_d
    .catch Ljava/lang/Exception; {:try_start_d .. :try_end_d} :catch_a

    .line 714
    :try_start_e
    iget-object v2, v1, Lcom/mbridge/msdk/mbdownload/e;->c:Ljava/util/Map;

    iget-object v4, v7, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    invoke-interface {v2, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_b

    .line 715
    iget-object v2, v1, Lcom/mbridge/msdk/mbdownload/e;->c:Ljava/util/Map;

    iget-object v4, v7, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    invoke-interface {v2, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/os/Messenger;

    invoke-virtual {v2, v0}, Landroid/os/Messenger;->send(Landroid/os/Message;)V
    :try_end_e
    .catch Landroid/os/RemoteException; {:try_start_e .. :try_end_e} :catch_6
    .catch Ljava/lang/Exception; {:try_start_e .. :try_end_e} :catch_a

    goto :goto_6

    .line 719
    :catch_6
    :try_start_f
    invoke-virtual {v1, v3, v5}, Lcom/mbridge/msdk/mbdownload/e;->a(Landroid/content/Context;I)V

    goto :goto_6

    .line 708
    :cond_a
    :goto_5
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 709
    iput v2, v0, Landroid/os/Message;->what:I

    .line 710
    iput v2, v0, Landroid/os/Message;->arg1:I

    .line 711
    iput v5, v0, Landroid/os/Message;->arg2:I
    :try_end_f
    .catch Ljava/lang/Exception; {:try_start_f .. :try_end_f} :catch_a

    .line 714
    :try_start_10
    iget-object v2, v1, Lcom/mbridge/msdk/mbdownload/e;->c:Ljava/util/Map;

    iget-object v4, v7, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    invoke-interface {v2, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_b

    .line 715
    iget-object v2, v1, Lcom/mbridge/msdk/mbdownload/e;->c:Ljava/util/Map;

    iget-object v4, v7, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    invoke-interface {v2, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/os/Messenger;

    invoke-virtual {v2, v0}, Landroid/os/Messenger;->send(Landroid/os/Message;)V
    :try_end_10
    .catch Landroid/os/RemoteException; {:try_start_10 .. :try_end_10} :catch_6
    .catch Ljava/lang/Exception; {:try_start_10 .. :try_end_10} :catch_a

    :cond_b
    :goto_6
    return v6

    :cond_c
    :try_start_11
    const-string v9, "install or active"

    .line 723
    invoke-virtual {v9, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v9

    if-eqz v9, :cond_e

    if-eqz v8, :cond_d

    .line 725
    invoke-virtual {v8}, Lcom/mbridge/msdk/mbdownload/k;->d()V

    goto/16 :goto_8

    .line 727
    :cond_d
    invoke-virtual {v1, v3, v5}, Lcom/mbridge/msdk/mbdownload/e;->a(Landroid/content/Context;I)V

    goto/16 :goto_8

    :cond_e
    const-string v5, "parent_view_click"

    .line 729
    invoke-virtual {v5, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_16

    const-string v4, "workthread"

    const-string v5, "clickParentView"

    .line 3743
    invoke-static {v4, v5}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 3744
    invoke-static {v3}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v4

    .line 3745
    invoke-static {v4}, Lcom/mbridge/msdk/foundation/db/e;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/e;

    move-result-object v4

    .line 3746
    iget-object v5, v7, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    iget-object v5, v5, Lcom/mbridge/msdk/mbdownload/b$a;->g:Ljava/lang/String;

    .line 3747
    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/foundation/db/e;->c(Ljava/lang/String;)I

    move-result v4

    if-eq v4, v2, :cond_11

    if-ne v4, v12, :cond_f

    goto :goto_7

    :cond_f
    if-eq v4, v6, :cond_10

    const/16 v0, 0x9

    if-eq v4, v0, :cond_10

    const/16 v0, 0xa

    if-eq v4, v0, :cond_10

    const/16 v0, 0xb

    if-ne v4, v0, :cond_16

    :cond_10
    if-eqz v8, :cond_16

    .line 3833
    invoke-virtual {v8}, Lcom/mbridge/msdk/mbdownload/k;->d()V

    goto/16 :goto_8

    .line 3749
    :cond_11
    :goto_7
    sget-object v2, Lcom/mbridge/msdk/mbdownload/e;->a:Ljava/lang/String;

    const-string v4, "Receive action clickParentView to do play click."

    invoke-static {v2, v4}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    if-nez v8, :cond_13

    .line 3751
    sget-object v2, Lcom/mbridge/msdk/mbdownload/e;->a:Ljava/lang/String;

    invoke-static {v2, v13}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 3756
    invoke-static {v3}, Lcom/mbridge/msdk/mbdownload/e;->b(Landroid/content/Context;)Z

    move-result v2

    if-nez v2, :cond_12

    .line 3757
    sget-object v0, Lcom/mbridge/msdk/mbdownload/g;->d:Ljava/lang/String;

    invoke-static {v3, v0, v6}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 3759
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    goto/16 :goto_8

    .line 3763
    :cond_12
    new-instance v2, Lcom/mbridge/msdk/mbdownload/k;

    iget-object v3, v7, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    iget v4, v7, Lcom/mbridge/msdk/mbdownload/e$b;->c:I

    iget v5, v7, Lcom/mbridge/msdk/mbdownload/e$b;->d:I

    invoke-direct {v2, v0, v3, v4, v5}, Lcom/mbridge/msdk/mbdownload/k;-><init>(Lcom/mbridge/msdk/mbdownload/c;Lcom/mbridge/msdk/mbdownload/b$a;II)V

    .line 3764
    iput-object v2, v7, Lcom/mbridge/msdk/mbdownload/e$b;->a:Lcom/mbridge/msdk/mbdownload/k;

    .line 3765
    invoke-virtual {v2}, Lcom/mbridge/msdk/mbdownload/k;->start()V

    .line 3768
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 3769
    iput v10, v0, Landroid/os/Message;->what:I

    .line 3770
    iput v14, v0, Landroid/os/Message;->arg1:I

    .line 3771
    iget v2, v7, Lcom/mbridge/msdk/mbdownload/e$b;->c:I

    iput v2, v0, Landroid/os/Message;->arg2:I
    :try_end_11
    .catch Ljava/lang/Exception; {:try_start_11 .. :try_end_11} :catch_a

    .line 3774
    :try_start_12
    iget-object v2, v1, Lcom/mbridge/msdk/mbdownload/e;->c:Ljava/util/Map;

    iget-object v3, v7, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    invoke-interface {v2, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_16

    .line 3775
    iget-object v2, v1, Lcom/mbridge/msdk/mbdownload/e;->c:Ljava/util/Map;

    iget-object v3, v7, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    invoke-interface {v2, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/os/Messenger;

    invoke-virtual {v2, v0}, Landroid/os/Messenger;->send(Landroid/os/Message;)V
    :try_end_12
    .catch Landroid/os/RemoteException; {:try_start_12 .. :try_end_12} :catch_7
    .catch Ljava/lang/Exception; {:try_start_12 .. :try_end_12} :catch_a

    goto/16 :goto_8

    :catch_7
    move-exception v0

    .line 3778
    :try_start_13
    sget-object v2, Lcom/mbridge/msdk/mbdownload/e;->a:Ljava/lang/String;

    invoke-static {v2, v15, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    goto/16 :goto_8

    .line 3783
    :cond_13
    invoke-virtual {v8}, Lcom/mbridge/msdk/mbdownload/k;->c()I

    move-result v0

    sget v2, Lcom/mbridge/msdk/mbdownload/k;->b:I

    if-ne v0, v2, :cond_15

    .line 3784
    sget-object v0, Lcom/mbridge/msdk/mbdownload/e;->a:Ljava/lang/String;

    invoke-static {v0, v13}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 3789
    invoke-static {v3}, Lcom/mbridge/msdk/mbdownload/e;->b(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_14

    .line 3790
    sget-object v0, Lcom/mbridge/msdk/mbdownload/g;->d:Ljava/lang/String;

    invoke-static {v3, v0, v6}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 3792
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    goto :goto_8

    .line 3796
    :cond_14
    invoke-virtual {v8}, Lcom/mbridge/msdk/mbdownload/k;->b()V

    .line 3799
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 3800
    iput v10, v0, Landroid/os/Message;->what:I

    .line 3801
    iput v14, v0, Landroid/os/Message;->arg1:I

    .line 3802
    iget v2, v7, Lcom/mbridge/msdk/mbdownload/e$b;->c:I

    iput v2, v0, Landroid/os/Message;->arg2:I
    :try_end_13
    .catch Ljava/lang/Exception; {:try_start_13 .. :try_end_13} :catch_a

    .line 3805
    :try_start_14
    iget-object v2, v1, Lcom/mbridge/msdk/mbdownload/e;->c:Ljava/util/Map;

    iget-object v3, v7, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    invoke-interface {v2, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_16

    .line 3806
    iget-object v2, v1, Lcom/mbridge/msdk/mbdownload/e;->c:Ljava/util/Map;

    iget-object v3, v7, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    invoke-interface {v2, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/os/Messenger;

    invoke-virtual {v2, v0}, Landroid/os/Messenger;->send(Landroid/os/Message;)V
    :try_end_14
    .catch Landroid/os/RemoteException; {:try_start_14 .. :try_end_14} :catch_8
    .catch Ljava/lang/Exception; {:try_start_14 .. :try_end_14} :catch_a

    goto :goto_8

    :catch_8
    move-exception v0

    .line 3809
    :try_start_15
    sget-object v2, Lcom/mbridge/msdk/mbdownload/e;->a:Ljava/lang/String;

    invoke-static {v2, v15, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    goto :goto_8

    .line 3813
    :cond_15
    sget-object v0, Lcom/mbridge/msdk/mbdownload/e;->a:Ljava/lang/String;

    invoke-static {v0, v11}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 3814
    invoke-virtual {v8}, Lcom/mbridge/msdk/mbdownload/k;->a()V

    .line 3815
    iget v0, v7, Lcom/mbridge/msdk/mbdownload/e$b;->c:I

    invoke-direct {v1, v3, v0}, Lcom/mbridge/msdk/mbdownload/e;->b(Landroid/content/Context;I)V

    .line 3818
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 3819
    iput v10, v0, Landroid/os/Message;->what:I

    .line 3820
    iput v12, v0, Landroid/os/Message;->arg1:I

    .line 3821
    iget v2, v7, Lcom/mbridge/msdk/mbdownload/e$b;->c:I

    iput v2, v0, Landroid/os/Message;->arg2:I
    :try_end_15
    .catch Ljava/lang/Exception; {:try_start_15 .. :try_end_15} :catch_a

    .line 3824
    :try_start_16
    iget-object v2, v1, Lcom/mbridge/msdk/mbdownload/e;->c:Ljava/util/Map;

    iget-object v3, v7, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    invoke-interface {v2, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_16

    .line 3825
    iget-object v2, v1, Lcom/mbridge/msdk/mbdownload/e;->c:Ljava/util/Map;

    iget-object v3, v7, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    invoke-interface {v2, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/os/Messenger;

    invoke-virtual {v2, v0}, Landroid/os/Messenger;->send(Landroid/os/Message;)V
    :try_end_16
    .catch Landroid/os/RemoteException; {:try_start_16 .. :try_end_16} :catch_9
    .catch Ljava/lang/Exception; {:try_start_16 .. :try_end_16} :catch_a

    goto :goto_8

    :catch_9
    move-exception v0

    .line 3828
    :try_start_17
    sget-object v2, Lcom/mbridge/msdk/mbdownload/e;->a:Ljava/lang/String;

    invoke-static {v2, v15, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    :try_end_17
    .catch Ljava/lang/Exception; {:try_start_17 .. :try_end_17} :catch_a

    goto :goto_8

    :catch_a
    move-exception v0

    .line 737
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_16
    :goto_8
    const/4 v2, 0x0

    return v2
.end method
