.class public final Lcom/mbridge/msdk/foundation/tools/b;
.super Ljava/lang/Object;
.source "CommonBatteryStatusUtil.java"


# static fields
.field private static a:I = -0x1

.field private static b:I = -0x1

.field private static c:I = -0x1

.field private static d:Z

.field private static e:I

.field private static f:Z

.field private static g:Z


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public static a()I
    .locals 6

    .line 101
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    const/4 v1, 0x0

    const/16 v2, 0x32

    .line 104
    :try_start_0
    new-instance v3, Landroid/content/IntentFilter;

    const-string v4, "android.intent.action.BATTERY_CHANGED"

    invoke-direct {v3, v4}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1, v3}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    move-result-object v0

    const/4 v1, 0x2

    new-array v1, v1, [I

    const/4 v3, 0x1

    const/4 v4, 0x0

    if-eqz v0, :cond_1

    const-string v5, "level"

    .line 1118
    invoke-virtual {v0, v5, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v5

    aput v5, v1, v4

    const-string v5, "plugged"

    .line 1119
    invoke-virtual {v0, v5, v4}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v0

    aput v0, v1, v3

    .line 1120
    aget v0, v1, v3

    if-eqz v0, :cond_0

    move v0, v3

    goto :goto_0

    :cond_0
    move v0, v4

    :goto_0
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/b;->a(Z)V

    .line 1121
    aget v0, v1, v4

    aget v3, v1, v3

    invoke-static {v0, v3}, Lcom/mbridge/msdk/foundation/tools/b;->a(II)I

    move-result v0

    aput v0, v1, v4

    .line 1122
    aget v0, v1, v4

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/b;->a(I)V

    goto :goto_1

    :cond_1
    aput v2, v1, v4

    aput v4, v1, v3

    .line 106
    :goto_1
    aget v0, v1, v4
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    .line 108
    :catch_0
    sget v0, Lcom/mbridge/msdk/foundation/tools/b;->a:I

    const/4 v1, -0x1

    if-eq v0, v1, :cond_2

    move v2, v0

    :cond_2
    return v2
.end method

.method private static a(II)I
    .locals 4

    .line 151
    sget-object v0, Landroid/os/Build;->MODEL:Ljava/lang/String;

    const-string v1, "SCH-i909"

    .line 152
    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    const/16 v2, 0x64

    if-nez v1, :cond_8

    const-string v1, "SCH-I535"

    .line 153
    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_8

    const-string v1, "SCH-W899"

    .line 154
    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto/16 :goto_1

    .line 156
    :cond_0
    invoke-virtual {v0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v1

    const-string v3, "XT702"

    invoke-virtual {v1, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    goto/16 :goto_2

    .line 158
    :cond_1
    invoke-virtual {v0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v1

    const-string v3, "XT907"

    invoke-virtual {v1, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_2

    goto/16 :goto_2

    .line 160
    :cond_2
    invoke-virtual {v0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v1

    const-string v3, "XT1058"

    invoke-virtual {v1, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_3

    goto :goto_2

    .line 162
    :cond_3
    invoke-virtual {v0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v0

    const-string v1, "XT1080"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_4

    goto :goto_2

    .line 164
    :cond_4
    sget-object v0, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    const-string v1, "motorola"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_9

    .line 165
    new-instance v0, Ljava/io/File;

    const-string v1, "/sys/class/power_supply/battery/charge_counter"

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 166
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_5

    .line 167
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/b;->a(Ljava/io/File;)Ljava/lang/String;

    move-result-object v0

    .line 168
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    goto :goto_0

    :cond_5
    const/4 v0, 0x0

    :goto_0
    if-gtz v0, :cond_6

    .line 171
    new-instance v1, Ljava/io/File;

    const-string v3, "/sys/class/power_supply/battery/capacity"

    invoke-direct {v1, v3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 172
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v3

    if-eqz v3, :cond_6

    .line 173
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/b;->a(Ljava/io/File;)Ljava/lang/String;

    move-result-object v1

    .line 174
    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    :cond_6
    if-gt v0, v2, :cond_9

    if-gtz v0, :cond_7

    goto :goto_2

    .line 179
    :cond_7
    rem-int/lit8 v1, p0, 0xa

    if-nez v1, :cond_9

    move p0, v0

    goto :goto_2

    :cond_8
    :goto_1
    if-le p0, v2, :cond_9

    .line 155
    div-int/lit8 p0, p0, 0xa

    :cond_9
    :goto_2
    if-le p0, v2, :cond_b

    if-eqz p1, :cond_a

    const/16 p1, 0x6e

    if-ge p0, p1, :cond_a

    return v2

    .line 187
    :cond_a
    :goto_3
    div-int/lit8 p0, p0, 0xa

    if-le p0, v2, :cond_b

    goto :goto_3

    :cond_b
    return p0
.end method

.method private static a(Ljava/io/File;)Ljava/lang/String;
    .locals 4

    .line 339
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const/16 v1, 0x400

    new-array v1, v1, [C

    const/4 v2, 0x0

    .line 345
    :try_start_0
    new-instance v3, Ljava/io/FileInputStream;

    invoke-direct {v3, p0}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 346
    :try_start_1
    new-instance p0, Ljava/io/InputStreamReader;

    invoke-direct {p0, v3}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V

    .line 347
    :goto_0
    invoke-virtual {p0, v1}, Ljava/io/InputStreamReader;->read([C)I

    move-result v2

    if-ltz v2, :cond_0

    .line 348
    invoke-static {v2, v1, v0}, Lcom/mbridge/msdk/foundation/tools/b;->a(I[CLjava/lang/StringBuilder;)V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    .line 355
    :cond_0
    :try_start_2
    invoke-virtual {v3}, Ljava/io/FileInputStream;->close()V
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_3

    goto :goto_3

    :catchall_0
    move-exception p0

    move-object v2, v3

    goto :goto_1

    :catch_0
    move-object v2, v3

    goto :goto_2

    :catchall_1
    move-exception p0

    :goto_1
    if-eqz v2, :cond_1

    :try_start_3
    invoke-virtual {v2}, Ljava/io/FileInputStream;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_1

    .line 359
    :catch_1
    :cond_1
    throw p0

    :catch_2
    :goto_2
    if-eqz v2, :cond_2

    .line 355
    :try_start_4
    invoke-virtual {v2}, Ljava/io/FileInputStream;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_3

    .line 360
    :catch_3
    :cond_2
    :goto_3
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 361
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    const-string p0, "0"

    :cond_3
    return-object p0
.end method

.method private static declared-synchronized a(I)V
    .locals 1

    const-class v0, Lcom/mbridge/msdk/foundation/tools/b;

    monitor-enter v0

    .line 418
    :try_start_0
    sput p0, Lcom/mbridge/msdk/foundation/tools/b;->e:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 419
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method private static a(I[CLjava/lang/StringBuilder;)V
    .locals 3

    const/4 v0, 0x0

    :goto_0
    if-ge v0, p0, :cond_1

    .line 370
    aget-char v1, p1, v0

    const/16 v2, 0xa

    if-eq v1, v2, :cond_0

    aget-char v1, p1, v0

    const/16 v2, 0xd

    if-eq v1, v2, :cond_0

    .line 371
    aget-char v1, p1, v0

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method private static declared-synchronized a(Z)V
    .locals 1

    const-class v0, Lcom/mbridge/msdk/foundation/tools/b;

    monitor-enter v0

    .line 431
    :try_start_0
    sput-boolean p0, Lcom/mbridge/msdk/foundation/tools/b;->f:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 432
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static b()I
    .locals 6

    .line 235
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    const/4 v3, 0x0

    .line 238
    :try_start_0
    new-instance v4, Landroid/content/IntentFilter;

    const-string v5, "android.intent.action.BATTERY_CHANGED"

    invoke-direct {v4, v5}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1, v4}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    move-result-object v0

    const-string v1, "status"

    .line 239
    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 241
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    const-string v4, "BatteryStatusUtil"

    invoke-static {v4, v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    move v0, v3

    :goto_0
    const/4 v1, 0x2

    if-eq v0, v1, :cond_1

    const/4 v1, 0x5

    if-ne v0, v1, :cond_0

    goto :goto_1

    :cond_0
    move v2, v3

    :cond_1
    :goto_1
    return v2
.end method
