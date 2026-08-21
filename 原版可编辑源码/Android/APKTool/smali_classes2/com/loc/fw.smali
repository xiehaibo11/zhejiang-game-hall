.class public final Lcom/loc/fw;
.super Ljava/lang/Object;
.source "ReportRecorder.java"


# static fields
.field private static f:Lcom/loc/fw;

.field private static i:J


# instance fields
.field a:Ljava/lang/String;

.field b:Ljava/lang/String;

.field private c:Ljava/util/LinkedHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation
.end field

.field private d:Ljava/io/File;

.field private e:Ljava/lang/String;

.field private g:Landroid/content/Context;

.field private h:Z


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    iput-object v0, p0, Lcom/loc/fw;->c:Ljava/util/LinkedHashMap;

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/loc/fw;->e:Ljava/lang/String;

    const-string v1, ""

    iput-object v1, p0, Lcom/loc/fw;->a:Ljava/lang/String;

    iput-object v0, p0, Lcom/loc/fw;->b:Ljava/lang/String;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/loc/fw;->g:Landroid/content/Context;

    invoke-virtual {p1}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object p1

    invoke-virtual {p1}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object p1

    iget-object v0, p0, Lcom/loc/fw;->e:Ljava/lang/String;

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/loc/fw;->g:Landroid/content/Context;

    invoke-static {v0}, Lcom/loc/fz;->l(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/loc/fw;->e:Ljava/lang/String;

    :cond_0
    :try_start_0
    new-instance v0, Ljava/io/File;

    const-string v1, "reportRecorder"

    invoke-direct {v0, p1, v1}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/loc/fw;->d:Ljava/io/File;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-static {p1}, Lcom/loc/ej;->a(Ljava/lang/Throwable;)V

    :goto_0
    invoke-direct {p0}, Lcom/loc/fw;->c()V

    return-void
.end method

.method public static declared-synchronized a(Landroid/content/Context;)Lcom/loc/fw;
    .locals 2

    const-class v0, Lcom/loc/fw;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/loc/fw;->f:Lcom/loc/fw;

    if-nez v1, :cond_0

    new-instance v1, Lcom/loc/fw;

    invoke-direct {v1, p0}, Lcom/loc/fw;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/loc/fw;->f:Lcom/loc/fw;

    :cond_0
    sget-object p0, Lcom/loc/fw;->f:Lcom/loc/fw;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object p0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method private b(Landroid/content/Context;)Z
    .locals 4

    iget-object v0, p0, Lcom/loc/fw;->b:Ljava/lang/String;

    const-string v1, "lastavedate"

    const-string v2, "pref"

    if-nez v0, :cond_0

    const-string v0, "0"

    invoke-static {p1, v2, v1, v0}, Lcom/loc/fy;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/loc/fw;->b:Ljava/lang/String;

    :cond_0
    iget-object v0, p0, Lcom/loc/fw;->b:Ljava/lang/String;

    iget-object v3, p0, Lcom/loc/fw;->a:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 p1, 0x0

    return p1

    :cond_1
    invoke-static {p1, v2}, Lcom/loc/fy;->a(Landroid/content/Context;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p1

    iget-object v0, p0, Lcom/loc/fw;->a:Ljava/lang/String;

    invoke-static {p1, v1, v0}, Lcom/loc/fy;->a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p1}, Lcom/loc/fy;->a(Landroid/content/SharedPreferences$Editor;)V

    iget-object p1, p0, Lcom/loc/fw;->a:Ljava/lang/String;

    iput-object p1, p0, Lcom/loc/fw;->b:Ljava/lang/String;

    const/4 p1, 0x1

    return p1
.end method

.method private declared-synchronized c()V
    .locals 7

    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/loc/fw;->c:Ljava/util/LinkedHashMap;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/loc/fw;->c:Ljava/util/LinkedHashMap;

    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->size()I

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    if-lez v0, :cond_0

    monitor-exit p0

    return-void

    :cond_0
    :try_start_1
    new-instance v0, Ljava/text/SimpleDateFormat;

    const-string v1, "yyyyMMdd"

    invoke-direct {v0, v1}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    new-instance v1, Ljava/util/Date;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-direct {v1, v2, v3}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v0, v1}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/loc/fw;->a:Ljava/lang/String;

    iget-object v0, p0, Lcom/loc/fw;->d:Ljava/io/File;

    invoke-static {v0}, Lcom/loc/fz;->a(Ljava/io/File;)Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :try_start_2
    new-instance v2, Ljava/lang/String;

    invoke-static {v1}, Lcom/loc/p;->b(Ljava/lang/String;)[B

    move-result-object v1

    iget-object v3, p0, Lcom/loc/fw;->e:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/loc/fg;->b([BLjava/lang/String;)[B

    move-result-object v1

    const-string v3, "UTF-8"

    invoke-direct {v2, v1, v3}, Ljava/lang/String;-><init>([BLjava/lang/String;)V

    const-string v1, ","

    invoke-virtual {v2, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_1

    array-length v2, v1

    const/4 v3, 0x1

    if-le v2, v3, :cond_1

    iget-object v2, p0, Lcom/loc/fw;->c:Ljava/util/LinkedHashMap;

    const/4 v4, 0x0

    aget-object v4, v1, v4

    aget-object v1, v1, v3

    invoke-static {v1}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v5

    invoke-static {v5, v6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    invoke-virtual {v2, v4, v1}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_2
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    :try_start_3
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_0

    :catch_0
    move-exception v1

    invoke-virtual {v1}, Ljava/io/UnsupportedEncodingException;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    goto :goto_0

    :cond_2
    monitor-exit p0

    return-void

    :catchall_1
    move-exception v0

    :try_start_4
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    monitor-exit p0

    return-void

    :catchall_2
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private d()V
    .locals 5

    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/loc/fw;->c:Ljava/util/LinkedHashMap;

    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->entrySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :try_start_1
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-interface {v2}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ","

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "UTF-8"

    invoke-virtual {v2, v4}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v2

    iget-object v4, p0, Lcom/loc/fw;->e:Ljava/lang/String;

    invoke-static {v2, v4}, Lcom/loc/fg;->a([BLjava/lang/String;)[B

    move-result-object v2

    invoke-static {v2}, Lcom/loc/p;->b([B)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "\n"

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_1
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catch_0
    move-exception v2

    :try_start_2
    invoke-virtual {v2}, Ljava/io/UnsupportedEncodingException;->printStackTrace()V

    goto :goto_0

    :cond_0
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    iget-object v1, p0, Lcom/loc/fw;->d:Ljava/io/File;

    invoke-static {v1, v0}, Lcom/loc/fz;->a(Ljava/io/File;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :cond_1
    return-void

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method


# virtual methods
.method public final declared-synchronized a()V
    .locals 1

    monitor-enter p0

    :try_start_0
    iget-boolean v0, p0, Lcom/loc/fw;->h:Z

    if-eqz v0, :cond_0

    invoke-direct {p0}, Lcom/loc/fw;->d()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/loc/fw;->h:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final declared-synchronized a(Lcom/amap/api/location/AMapLocation;)V
    .locals 6

    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/loc/fw;->c:Ljava/util/LinkedHashMap;

    iget-object v1, p0, Lcom/loc/fw;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/loc/fw;->c:Ljava/util/LinkedHashMap;

    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->size()I

    move-result v0

    const/16 v1, 0x8

    if-ge v0, v1, :cond_1

    :cond_0
    iget-object v0, p0, Lcom/loc/fw;->c:Ljava/util/LinkedHashMap;

    iget-object v1, p0, Lcom/loc/fw;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/loc/fw;->c:Ljava/util/LinkedHashMap;

    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->size()I

    move-result v0

    const/16 v1, 0x9

    if-lt v0, v1, :cond_4

    :cond_1
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iget-object v1, p0, Lcom/loc/fw;->c:Ljava/util/LinkedHashMap;

    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->entrySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_2
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    invoke-interface {v2}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    iget-object v3, p0, Lcom/loc/fw;->c:Ljava/util/LinkedHashMap;

    invoke-virtual {v3}, Ljava/util/LinkedHashMap;->size()I

    move-result v3
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    add-int/lit8 v3, v3, -0x7

    if-ne v2, v3, :cond_2

    goto :goto_1

    :catchall_0
    move-exception v2

    :try_start_2
    invoke-virtual {v2}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_0

    :cond_3
    :goto_1
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_2
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_4

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    iget-object v2, p0, Lcom/loc/fw;->c:Ljava/util/LinkedHashMap;

    invoke-virtual {v2, v1}, Ljava/util/LinkedHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_2

    :cond_4
    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getErrorCode()I

    move-result v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    if-eqz v0, :cond_5

    monitor-exit p0

    return-void

    :cond_5
    :try_start_3
    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getLocationType()I

    move-result v0

    const/4 v1, 0x6

    if-eq v0, v1, :cond_9

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getLocationType()I

    move-result p1

    const/4 v0, 0x5

    if-ne p1, v0, :cond_6

    goto :goto_4

    :cond_6
    iget-object p1, p0, Lcom/loc/fw;->c:Ljava/util/LinkedHashMap;

    iget-object v0, p0, Lcom/loc/fw;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    const-wide/16 v0, 0x1

    if-eqz p1, :cond_7

    iget-object p1, p0, Lcom/loc/fw;->c:Ljava/util/LinkedHashMap;

    iget-object v2, p0, Lcom/loc/fw;->a:Ljava/lang/String;

    invoke-virtual {p1, v2}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Long;

    invoke-virtual {p1}, Ljava/lang/Long;->longValue()J

    move-result-wide v2

    add-long/2addr v2, v0

    sput-wide v2, Lcom/loc/fw;->i:J

    iget-object p1, p0, Lcom/loc/fw;->c:Ljava/util/LinkedHashMap;

    iget-object v0, p0, Lcom/loc/fw;->a:Ljava/lang/String;

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    invoke-virtual {p1, v0, v1}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_3

    :cond_7
    iget-object p1, p0, Lcom/loc/fw;->c:Ljava/util/LinkedHashMap;

    iget-object v2, p0, Lcom/loc/fw;->a:Ljava/lang/String;

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-virtual {p1, v2, v3}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sput-wide v0, Lcom/loc/fw;->i:J

    :goto_3
    sget-wide v0, Lcom/loc/fw;->i:J

    const-wide/16 v2, 0x0

    cmp-long p1, v0, v2

    if-eqz p1, :cond_8

    sget-wide v0, Lcom/loc/fw;->i:J

    const-wide/16 v4, 0x64

    rem-long/2addr v0, v4

    cmp-long p1, v0, v2

    if-nez p1, :cond_8

    invoke-virtual {p0}, Lcom/loc/fw;->a()V

    :cond_8
    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/loc/fw;->h:Z
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    monitor-exit p0

    return-void

    :cond_9
    :goto_4
    monitor-exit p0

    return-void

    :catchall_1
    move-exception p1

    :try_start_4
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    monitor-exit p0

    return-void

    :catchall_2
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized b()V
    .locals 5

    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/loc/fw;->g:Landroid/content/Context;

    invoke-direct {p0, v0}, Lcom/loc/fw;->b(Landroid/content/Context;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v0, :cond_0

    monitor-exit p0

    return-void

    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/loc/fw;->c:Ljava/util/LinkedHashMap;

    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :try_start_2
    iget-object v2, p0, Lcom/loc/fw;->a:Ljava/lang/String;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    goto :goto_0

    :cond_1
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "param_long_first"

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "param_long_second"

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v2, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    iget-object v1, p0, Lcom/loc/fw;->g:Landroid/content/Context;

    const-string v3, "O023"

    invoke-static {v1, v3, v2}, Lcom/loc/fx;->a(Landroid/content/Context;Ljava/lang/String;Lorg/json/JSONObject;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    :try_start_3
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    goto :goto_0

    :cond_2
    monitor-exit p0

    return-void

    :catchall_1
    move-exception v0

    :try_start_4
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    monitor-exit p0

    return-void

    :catchall_2
    move-exception v0

    monitor-exit p0

    throw v0
.end method
