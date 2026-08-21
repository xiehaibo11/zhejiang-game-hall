.class public Lcom/alipay/sdk/tid/b;
.super Ljava/lang/Object;
.source "SourceFile"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/alipay/sdk/tid/b$a;
    }
.end annotation


# static fields
.field public static final a:Ljava/lang/String; = "alipay_tid_storage"

.field public static final b:Ljava/lang/String; = "tidinfo"

.field public static final c:Ljava/lang/String; = "upgraded_from_db"

.field public static final d:Ljava/lang/String; = "tid"

.field public static final e:Ljava/lang/String; = "client_key"

.field public static final f:Ljava/lang/String; = "timestamp"

.field public static final g:Ljava/lang/String; = "vimei"

.field public static final h:Ljava/lang/String; = "vimsi"

.field private static i:Landroid/content/Context;

.field private static o:Lcom/alipay/sdk/tid/b;


# instance fields
.field private j:Ljava/lang/String;

.field private k:Ljava/lang/String;

.field private l:J

.field private m:Ljava/lang/String;

.field private n:Ljava/lang/String;

.field private p:Z


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 26
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 58
    iput-boolean v0, p0, Lcom/alipay/sdk/tid/b;->p:Z

    return-void
.end method

.method public static declared-synchronized a(Landroid/content/Context;)Lcom/alipay/sdk/tid/b;
    .locals 3

    const-class v0, Lcom/alipay/sdk/tid/b;

    monitor-enter v0

    .line 48
    :try_start_0
    sget-object v1, Lcom/alipay/sdk/tid/b;->o:Lcom/alipay/sdk/tid/b;

    if-nez v1, :cond_0

    const-string v1, "TidStorage"

    const-string v2, "getInstance"

    .line 49
    invoke-static {v1, v2}, Lcom/alipay/sdk/util/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 50
    new-instance v1, Lcom/alipay/sdk/tid/b;

    invoke-direct {v1}, Lcom/alipay/sdk/tid/b;-><init>()V

    sput-object v1, Lcom/alipay/sdk/tid/b;->o:Lcom/alipay/sdk/tid/b;

    .line 52
    :cond_0
    sget-object v1, Lcom/alipay/sdk/tid/b;->i:Landroid/content/Context;

    if-nez v1, :cond_1

    .line 53
    sget-object v1, Lcom/alipay/sdk/tid/b;->o:Lcom/alipay/sdk/tid/b;

    invoke-direct {v1, p0}, Lcom/alipay/sdk/tid/b;->b(Landroid/content/Context;)V

    .line 55
    :cond_1
    sget-object p0, Lcom/alipay/sdk/tid/b;->o:Lcom/alipay/sdk/tid/b;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object p0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Long;)V
    .locals 1

    .line 298
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/alipay/sdk/tid/b;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 302
    :cond_0
    iput-object p1, p0, Lcom/alipay/sdk/tid/b;->j:Ljava/lang/String;

    .line 303
    iput-object p2, p0, Lcom/alipay/sdk/tid/b;->k:Ljava/lang/String;

    .line 304
    iput-object p3, p0, Lcom/alipay/sdk/tid/b;->m:Ljava/lang/String;

    .line 305
    iput-object p4, p0, Lcom/alipay/sdk/tid/b;->n:Ljava/lang/String;

    if-nez p5, :cond_1

    .line 307
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    iput-wide p1, p0, Lcom/alipay/sdk/tid/b;->l:J

    goto :goto_0

    .line 309
    :cond_1
    invoke-virtual {p5}, Ljava/lang/Long;->longValue()J

    move-result-wide p1

    iput-wide p1, p0, Lcom/alipay/sdk/tid/b;->l:J

    .line 311
    :goto_0
    invoke-direct {p0}, Lcom/alipay/sdk/tid/b;->p()V

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 0

    .line 206
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 207
    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 p1, 0x1

    :goto_1
    return p1
.end method

.method private b(Landroid/content/Context;)V
    .locals 2

    if-eqz p1, :cond_0

    const-string v0, "TidStorage"

    const-string v1, "TidStorage.initialize context != null"

    .line 66
    invoke-static {v0, v1}, Lcom/alipay/sdk/util/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 67
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    sput-object p1, Lcom/alipay/sdk/tid/b;->i:Landroid/content/Context;

    .line 70
    :cond_0
    iget-boolean p1, p0, Lcom/alipay/sdk/tid/b;->p:Z

    if-eqz p1, :cond_1

    return-void

    :cond_1
    const/4 p1, 0x1

    .line 73
    iput-boolean p1, p0, Lcom/alipay/sdk/tid/b;->p:Z

    .line 75
    invoke-direct {p0}, Lcom/alipay/sdk/tid/b;->k()V

    .line 77
    invoke-direct {p0}, Lcom/alipay/sdk/tid/b;->l()V

    return-void
.end method

.method static synthetic j()Landroid/content/Context;
    .locals 1

    .line 26
    sget-object v0, Lcom/alipay/sdk/tid/b;->i:Landroid/content/Context;

    return-object v0
.end method

.method private k()V
    .locals 10

    .line 86
    sget-object v0, Lcom/alipay/sdk/tid/b;->i:Landroid/content/Context;

    if-nez v0, :cond_0

    return-void

    :cond_0
    const-string v1, "upgraded_from_db"

    const-string v2, "alipay_tid_storage"

    .line 93
    invoke-static {v2, v1}, Lcom/alipay/sdk/tid/b$a;->d(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v3

    const-string v4, "TidStorage"

    if-eqz v3, :cond_1

    const-string v0, "transferTidFromOldDb: already migrated. returning"

    .line 94
    invoke-static {v4, v0}, Lcom/alipay/sdk/util/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_1
    const/4 v3, 0x0

    :try_start_0
    const-string v5, "transferTidFromOldDb: tid from db: "

    .line 102
    invoke-static {v4, v5}, Lcom/alipay/sdk/util/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 103
    new-instance v5, Lcom/alipay/sdk/tid/a;

    invoke-direct {v5, v0}, Lcom/alipay/sdk/tid/a;-><init>(Landroid/content/Context;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 104
    :try_start_1
    invoke-static {v0}, Lcom/alipay/sdk/util/a;->a(Landroid/content/Context;)Lcom/alipay/sdk/util/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/alipay/sdk/util/a;->b()Ljava/lang/String;

    move-result-object v3

    .line 105
    invoke-static {v0}, Lcom/alipay/sdk/util/a;->a(Landroid/content/Context;)Lcom/alipay/sdk/util/a;

    move-result-object v6

    invoke-virtual {v6}, Lcom/alipay/sdk/util/a;->a()Ljava/lang/String;

    move-result-object v6

    .line 106
    invoke-virtual {v5, v3, v6}, Lcom/alipay/sdk/tid/a;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    .line 107
    invoke-virtual {v5, v3, v6}, Lcom/alipay/sdk/tid/a;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 108
    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_2

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_2

    .line 109
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "transferTidFromOldDb: tid from db is "

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, ", "

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v4, v6}, Lcom/alipay/sdk/util/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 110
    invoke-virtual {p0, v7, v3}, Lcom/alipay/sdk/tid/b;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 116
    :cond_2
    :goto_0
    invoke-virtual {v5}, Lcom/alipay/sdk/tid/a;->close()V

    goto :goto_2

    :catchall_0
    move-exception v3

    goto :goto_1

    :catchall_1
    move-exception v5

    move-object v9, v5

    move-object v5, v3

    move-object v3, v9

    .line 113
    :goto_1
    :try_start_2
    invoke-static {v3}, Lcom/alipay/sdk/util/c;->a(Ljava/lang/Throwable;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_5

    if-eqz v5, :cond_3

    goto :goto_0

    :cond_3
    :goto_2
    :try_start_3
    const-string v3, "transferTidFromOldDb: removing database table"

    .line 122
    invoke-static {v4, v3}, Lcom/alipay/sdk/util/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 123
    new-instance v3, Lcom/alipay/sdk/tid/a;

    invoke-direct {v3, v0}, Lcom/alipay/sdk/tid/a;-><init>(Landroid/content/Context;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    .line 124
    :try_start_4
    invoke-virtual {v3}, Lcom/alipay/sdk/tid/a;->a()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    .line 129
    invoke-virtual {v3}, Lcom/alipay/sdk/tid/a;->close()V

    goto :goto_4

    :catchall_2
    move-exception v0

    move-object v5, v3

    goto :goto_3

    :catchall_3
    move-exception v0

    .line 126
    :goto_3
    :try_start_5
    invoke-static {v0}, Lcom/alipay/sdk/util/c;->a(Ljava/lang/Throwable;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_4

    if-eqz v5, :cond_4

    .line 129
    invoke-virtual {v5}, Lcom/alipay/sdk/tid/a;->close()V

    :cond_4
    :goto_4
    const/4 v0, 0x0

    const-string v3, "updated"

    .line 134
    invoke-static {v2, v1, v3, v0}, Lcom/alipay/sdk/tid/b$a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    return-void

    :catchall_4
    move-exception v0

    if-eqz v5, :cond_5

    .line 129
    invoke-virtual {v5}, Lcom/alipay/sdk/tid/a;->close()V

    :cond_5
    throw v0

    :catchall_5
    move-exception v0

    if-eqz v5, :cond_6

    .line 116
    invoke-virtual {v5}, Lcom/alipay/sdk/tid/a;->close()V

    :cond_6
    goto :goto_6

    :goto_5
    throw v0

    :goto_6
    goto :goto_5
.end method

.method private l()V
    .locals 9

    const-string v0, ""

    .line 163
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const/4 v2, 0x0

    :try_start_0
    const-string v3, "alipay_tid_storage"

    const-string v4, "tidinfo"

    const/4 v5, 0x1

    .line 168
    invoke-static {v3, v4, v5}, Lcom/alipay/sdk/tid/b$a;->a(Ljava/lang/String;Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object v3

    .line 170
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    .line 171
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4, v3}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v3, "tid"

    .line 172
    invoke-virtual {v4, v3, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_3

    :try_start_1
    const-string v5, "client_key"

    .line 173
    invoke-virtual {v4, v5, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2

    :try_start_2
    const-string v6, "timestamp"

    .line 174
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    invoke-virtual {v4, v6, v7, v8}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v6

    invoke-static {v6, v7}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const-string v6, "vimei"

    .line 175
    invoke-virtual {v4, v6, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    :try_start_3
    const-string v7, "vimsi"

    .line 176
    invoke-virtual {v4, v7, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0

    goto :goto_2

    :catch_0
    move-exception v0

    goto :goto_1

    :catch_1
    move-exception v0

    move-object v6, v2

    goto :goto_1

    :catch_2
    move-exception v0

    move-object v5, v2

    goto :goto_0

    :cond_0
    move-object v0, v2

    move-object v5, v0

    move-object v6, v5

    goto :goto_3

    :catch_3
    move-exception v0

    move-object v3, v2

    move-object v5, v3

    :goto_0
    move-object v6, v5

    .line 179
    :goto_1
    invoke-static {v0}, Lcom/alipay/sdk/util/c;->a(Ljava/lang/Throwable;)V

    move-object v0, v2

    :goto_2
    move-object v2, v3

    .line 182
    :goto_3
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "TidStorage.load "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, " "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "TidStorage"

    invoke-static {v4, v3}, Lcom/alipay/sdk/util/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 185
    invoke-direct {p0, v2, v5, v6, v0}, Lcom/alipay/sdk/tid/b;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 186
    invoke-direct {p0}, Lcom/alipay/sdk/tid/b;->m()V

    goto :goto_4

    .line 188
    :cond_1
    iput-object v2, p0, Lcom/alipay/sdk/tid/b;->j:Ljava/lang/String;

    .line 189
    iput-object v5, p0, Lcom/alipay/sdk/tid/b;->k:Ljava/lang/String;

    .line 190
    invoke-virtual {v1}, Ljava/lang/Long;->longValue()J

    move-result-wide v1

    iput-wide v1, p0, Lcom/alipay/sdk/tid/b;->l:J

    .line 191
    iput-object v6, p0, Lcom/alipay/sdk/tid/b;->m:Ljava/lang/String;

    .line 192
    iput-object v0, p0, Lcom/alipay/sdk/tid/b;->n:Ljava/lang/String;

    :goto_4
    return-void
.end method

.method private m()V
    .locals 2

    const-string v0, ""

    .line 216
    iput-object v0, p0, Lcom/alipay/sdk/tid/b;->j:Ljava/lang/String;

    .line 217
    invoke-virtual {p0}, Lcom/alipay/sdk/tid/b;->f()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/alipay/sdk/tid/b;->k:Ljava/lang/String;

    .line 218
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/alipay/sdk/tid/b;->l:J

    .line 219
    invoke-direct {p0}, Lcom/alipay/sdk/tid/b;->n()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/alipay/sdk/tid/b;->m:Ljava/lang/String;

    .line 220
    invoke-direct {p0}, Lcom/alipay/sdk/tid/b;->n()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/alipay/sdk/tid/b;->n:Ljava/lang/String;

    const-string v0, "alipay_tid_storage"

    const-string v1, "tidinfo"

    .line 221
    invoke-static {v0, v1}, Lcom/alipay/sdk/tid/b$a;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private n()Ljava/lang/String;
    .locals 3

    .line 230
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 231
    invoke-static {v0, v1}, Ljava/lang/Long;->toHexString(J)Ljava/lang/String;

    move-result-object v0

    .line 232
    new-instance v1, Ljava/util/Random;

    invoke-direct {v1}, Ljava/util/Random;-><init>()V

    .line 233
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v0, 0x2328

    invoke-virtual {v1, v0}, Ljava/util/Random;->nextInt(I)I

    move-result v0

    add-int/lit16 v0, v0, 0x3e8

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private o()V
    .locals 0

    return-void
.end method

.method private p()V
    .locals 4

    .line 316
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "tid"

    .line 317
    iget-object v2, p0, Lcom/alipay/sdk/tid/b;->j:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "client_key"

    .line 318
    iget-object v2, p0, Lcom/alipay/sdk/tid/b;->k:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "timestamp"

    .line 319
    iget-wide v2, p0, Lcom/alipay/sdk/tid/b;->l:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "vimei"

    .line 320
    iget-object v2, p0, Lcom/alipay/sdk/tid/b;->m:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "vimsi"

    .line 321
    iget-object v2, p0, Lcom/alipay/sdk/tid/b;->n:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "alipay_tid_storage"

    const-string v2, "tidinfo"

    .line 323
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v3, 0x1

    invoke-static {v1, v2, v0, v3}, Lcom/alipay/sdk/tid/b$a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 325
    invoke-static {v0}, Lcom/alipay/sdk/util/c;->a(Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 2

    .line 138
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "TidStorage.getTid "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/alipay/sdk/tid/b;->j:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "TidStorage"

    invoke-static {v1, v0}, Lcom/alipay/sdk/util/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 139
    iget-object v0, p0, Lcom/alipay/sdk/tid/b;->j:Ljava/lang/String;

    return-object v0
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 279
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "tid="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ",clientKey="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 280
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "TidStorage.save "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "TidStorage"

    invoke-static {v1, v0}, Lcom/alipay/sdk/util/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 282
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 286
    :cond_0
    iput-object p1, p0, Lcom/alipay/sdk/tid/b;->j:Ljava/lang/String;

    .line 287
    iput-object p2, p0, Lcom/alipay/sdk/tid/b;->k:Ljava/lang/String;

    .line 288
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    iput-wide p1, p0, Lcom/alipay/sdk/tid/b;->l:J

    .line 289
    invoke-direct {p0}, Lcom/alipay/sdk/tid/b;->p()V

    .line 290
    invoke-direct {p0}, Lcom/alipay/sdk/tid/b;->o()V

    :cond_1
    :goto_0
    return-void
.end method

.method public b()Ljava/lang/String;
    .locals 2

    .line 143
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "TidStorage.getClientKey "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/alipay/sdk/tid/b;->k:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "TidStorage"

    invoke-static {v1, v0}, Lcom/alipay/sdk/util/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 144
    iget-object v0, p0, Lcom/alipay/sdk/tid/b;->k:Ljava/lang/String;

    return-object v0
.end method

.method public c()Ljava/lang/String;
    .locals 2

    .line 148
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "TidStorage.getVirtualImei "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/alipay/sdk/tid/b;->m:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "TidStorage"

    invoke-static {v1, v0}, Lcom/alipay/sdk/util/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 149
    iget-object v0, p0, Lcom/alipay/sdk/tid/b;->m:Ljava/lang/String;

    return-object v0
.end method

.method public d()Ljava/lang/String;
    .locals 2

    .line 153
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "TidStorage.getVirtualImsi "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/alipay/sdk/tid/b;->n:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "TidStorage"

    invoke-static {v1, v0}, Lcom/alipay/sdk/util/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 154
    iget-object v0, p0, Lcom/alipay/sdk/tid/b;->n:Ljava/lang/String;

    return-object v0
.end method

.method public e()Z
    .locals 1

    .line 211
    iget-object v0, p0, Lcom/alipay/sdk/tid/b;->j:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/alipay/sdk/tid/b;->k:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/alipay/sdk/tid/b;->m:Ljava/lang/String;

    .line 212
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/alipay/sdk/tid/b;->n:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    return v0
.end method

.method public f()Ljava/lang/String;
    .locals 3

    .line 243
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/Long;->toHexString(J)Ljava/lang/String;

    move-result-object v0

    .line 244
    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v1

    const/16 v2, 0xa

    if-le v1, v2, :cond_0

    .line 245
    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v1

    sub-int/2addr v1, v2

    invoke-virtual {v0, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v0

    :cond_0
    return-object v0
.end method

.method public g()V
    .locals 3

    const/4 v0, 0x5

    new-array v0, v0, [Ljava/lang/Object;

    .line 255
    iget-object v1, p0, Lcom/alipay/sdk/tid/b;->j:Ljava/lang/String;

    const/4 v2, 0x0

    aput-object v1, v0, v2

    iget-object v1, p0, Lcom/alipay/sdk/tid/b;->k:Ljava/lang/String;

    const/4 v2, 0x1

    aput-object v1, v0, v2

    iget-wide v1, p0, Lcom/alipay/sdk/tid/b;->l:J

    .line 256
    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const/4 v2, 0x2

    aput-object v1, v0, v2

    iget-object v1, p0, Lcom/alipay/sdk/tid/b;->m:Ljava/lang/String;

    const/4 v2, 0x3

    aput-object v1, v0, v2

    iget-object v1, p0, Lcom/alipay/sdk/tid/b;->n:Ljava/lang/String;

    const/4 v2, 0x4

    aput-object v1, v0, v2

    const-string v1, "TidStorage::delete > %s\uff0c%s\uff0c%s\uff0c%s\uff0c%s"

    .line 255
    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    .line 257
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "TidStorage.delete "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "TidStorage"

    invoke-static {v1, v0}, Lcom/alipay/sdk/util/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 258
    invoke-direct {p0}, Lcom/alipay/sdk/tid/b;->m()V

    return-void
.end method

.method public h()Z
    .locals 1

    .line 266
    invoke-virtual {p0}, Lcom/alipay/sdk/tid/b;->e()Z

    move-result v0

    return v0
.end method

.method public i()Ljava/lang/Long;
    .locals 2

    .line 274
    iget-wide v0, p0, Lcom/alipay/sdk/tid/b;->l:J

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    return-object v0
.end method
