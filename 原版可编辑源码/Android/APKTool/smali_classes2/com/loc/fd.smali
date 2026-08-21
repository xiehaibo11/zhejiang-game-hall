.class public final Lcom/loc/fd;
.super Ljava/lang/Object;
.source "HistoryLocationRecorder.java"


# instance fields
.field private a:Ljava/util/LinkedList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/LinkedList<",
            "Lcom/loc/fc;",
            ">;"
        }
    .end annotation
.end field

.field private b:Ljava/io/File;

.field private c:Z

.field private d:Landroid/os/Handler;

.field private e:Ljava/lang/String;

.field private f:Z

.field private g:Ljava/lang/Runnable;


# direct methods
.method public constructor <init>(Landroid/content/Context;Landroid/os/Handler;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/LinkedList;

    invoke-direct {v0}, Ljava/util/LinkedList;-><init>()V

    iput-object v0, p0, Lcom/loc/fd;->a:Ljava/util/LinkedList;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/loc/fd;->c:Z

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/loc/fd;->e:Ljava/lang/String;

    new-instance v0, Lcom/loc/fd$1;

    invoke-direct {v0, p0}, Lcom/loc/fd$1;-><init>(Lcom/loc/fd;)V

    iput-object v0, p0, Lcom/loc/fd;->g:Ljava/lang/Runnable;

    iput-object p2, p0, Lcom/loc/fd;->d:Landroid/os/Handler;

    invoke-virtual {p1}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object p2

    invoke-virtual {p2}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object p2

    iget-object v0, p0, Lcom/loc/fd;->e:Ljava/lang/String;

    if-nez v0, :cond_0

    invoke-static {p1}, Lcom/loc/fz;->l(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/loc/fd;->e:Ljava/lang/String;

    :cond_0
    :try_start_0
    new-instance p1, Ljava/io/File;

    const-string v0, "hisloc"

    invoke-direct {p1, p2, v0}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    iput-object p1, p0, Lcom/loc/fd;->b:Ljava/io/File;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-static {p1}, Lcom/loc/ej;->a(Ljava/lang/Throwable;)V

    :goto_0
    invoke-direct {p0}, Lcom/loc/fd;->a()V

    iget-object p1, p0, Lcom/loc/fd;->d:Landroid/os/Handler;

    if-eqz p1, :cond_1

    iget-object p2, p0, Lcom/loc/fd;->g:Ljava/lang/Runnable;

    invoke-virtual {p1, p2}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    iget-object p1, p0, Lcom/loc/fd;->d:Landroid/os/Handler;

    iget-object p2, p0, Lcom/loc/fd;->g:Ljava/lang/Runnable;

    const-wide/32 v0, 0xea60

    invoke-virtual {p1, p2, v0, v1}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_1
    return-void
.end method

.method private a()V
    .locals 4

    iget-object v0, p0, Lcom/loc/fd;->a:Ljava/util/LinkedList;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/util/LinkedList;->size()I

    move-result v0

    if-lez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/loc/fd;->b:Ljava/io/File;

    invoke-static {v0}, Lcom/loc/fz;->a(Ljava/io/File;)Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    :try_start_0
    new-instance v2, Ljava/lang/String;

    invoke-static {v1}, Lcom/loc/p;->b(Ljava/lang/String;)[B

    move-result-object v1

    iget-object v3, p0, Lcom/loc/fd;->e:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/loc/fg;->b([BLjava/lang/String;)[B

    move-result-object v1

    const-string v3, "UTF-8"

    invoke-direct {v2, v1, v3}, Ljava/lang/String;-><init>([BLjava/lang/String;)V

    new-instance v1, Lcom/loc/fc;

    invoke-direct {v1}, Lcom/loc/fc;-><init>()V

    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v3}, Lcom/loc/fc;->a(Lorg/json/JSONObject;)V

    iget-object v2, p0, Lcom/loc/fd;->a:Ljava/util/LinkedList;

    invoke-virtual {v2, v1}, Ljava/util/LinkedList;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    goto :goto_0

    :catch_1
    move-exception v1

    invoke-virtual {v1}, Ljava/io/UnsupportedEncodingException;->printStackTrace()V

    goto :goto_0

    :cond_1
    return-void
.end method

.method static synthetic a(Lcom/loc/fd;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/loc/fd;->c:Z

    return p0
.end method

.method private b()V
    .locals 5

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/loc/fd;->a:Ljava/util/LinkedList;

    invoke-virtual {v1}, Ljava/util/LinkedList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/loc/fc;

    :try_start_0
    invoke-virtual {v2}, Lcom/loc/fc;->a()Ljava/lang/String;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "UTF-8"

    invoke-virtual {v2, v4}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v2

    iget-object v4, p0, Lcom/loc/fd;->e:Ljava/lang/String;

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
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v2

    invoke-virtual {v2}, Ljava/io/UnsupportedEncodingException;->printStackTrace()V

    goto :goto_0

    :cond_0
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    iget-object v1, p0, Lcom/loc/fd;->b:Ljava/io/File;

    invoke-static {v1, v0}, Lcom/loc/fz;->a(Ljava/io/File;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method static synthetic b(Lcom/loc/fd;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/loc/fd;->f:Z

    return p0
.end method

.method private static b(Ljava/util/ArrayList;Ljava/util/ArrayList;)Z
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Lcom/loc/fa;",
            ">;",
            "Ljava/util/ArrayList<",
            "Lcom/loc/eg;",
            ">;)Z"
        }
    .end annotation

    const/4 v0, 0x1

    if-eqz p0, :cond_3

    invoke-virtual {p0}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-gtz v1, :cond_0

    goto :goto_0

    :cond_0
    if-eqz p1, :cond_3

    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-gtz v1, :cond_1

    goto :goto_0

    :cond_1
    invoke-virtual {p0}, Ljava/util/ArrayList;->size()I

    move-result p0

    int-to-long v1, p0

    const-wide/16 v3, 0x4

    const/4 p0, 0x0

    cmp-long v5, v1, v3

    if-ltz v5, :cond_2

    return p0

    :cond_2
    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result p1

    int-to-long v1, p1

    const-wide/16 v3, 0x14

    cmp-long p1, v1, v3

    if-ltz p1, :cond_3

    return p0

    :cond_3
    :goto_0
    return v0
.end method

.method static synthetic c(Lcom/loc/fd;)V
    .locals 0

    invoke-direct {p0}, Lcom/loc/fd;->b()V

    return-void
.end method

.method static synthetic d(Lcom/loc/fd;)Z
    .locals 1

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/loc/fd;->f:Z

    return v0
.end method

.method static synthetic e(Lcom/loc/fd;)Landroid/os/Handler;
    .locals 0

    iget-object p0, p0, Lcom/loc/fd;->d:Landroid/os/Handler;

    return-object p0
.end method

.method static synthetic f(Lcom/loc/fd;)Ljava/lang/Runnable;
    .locals 0

    iget-object p0, p0, Lcom/loc/fd;->g:Ljava/lang/Runnable;

    return-object p0
.end method


# virtual methods
.method public final a(Ljava/util/ArrayList;Ljava/util/ArrayList;)Ljava/util/List;
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Lcom/loc/fa;",
            ">;",
            "Ljava/util/ArrayList<",
            "Lcom/loc/eg;",
            ">;)",
            "Ljava/util/List<",
            "Lcom/loc/fc;",
            ">;"
        }
    .end annotation

    invoke-static {p1, p2}, Lcom/loc/fd;->b(Ljava/util/ArrayList;Ljava/util/ArrayList;)Z

    move-result p1

    if-eqz p1, :cond_3

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const/4 v1, 0x0

    iget-object v2, p0, Lcom/loc/fd;->a:Ljava/util/LinkedList;

    invoke-virtual {v2}, Ljava/util/LinkedList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/loc/fc;

    iget-wide v4, v3, Lcom/loc/fc;->d:J

    sub-long v4, p1, v4

    const-wide v6, 0x50775d800L

    cmp-long v8, v4, v6

    if-gez v8, :cond_1

    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    :cond_1
    const/16 v3, 0xa

    if-ne v1, v3, :cond_0

    :cond_2
    return-object v0

    :cond_3
    const/4 p1, 0x0

    return-object p1
.end method

.method public final a(Lcom/loc/fc;)V
    .locals 11

    iget-object v0, p0, Lcom/loc/fd;->a:Ljava/util/LinkedList;

    invoke-virtual {v0}, Ljava/util/LinkedList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    const/4 v1, 0x0

    const/4 v2, 0x0

    move-object v3, v2

    const/4 v4, 0x0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    const/4 v6, 0x1

    if-eqz v5, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/loc/fc;

    iget v7, v5, Lcom/loc/fc;->a:I

    if-ne v7, v6, :cond_0

    if-nez v3, :cond_1

    move-object v3, v5

    :cond_1
    add-int/lit8 v4, v4, 0x1

    move-object v2, v5

    goto :goto_0

    :cond_2
    if-eqz v2, :cond_3

    new-instance v0, Landroid/location/Location;

    const-string v5, "gps"

    invoke-direct {v0, v5}, Landroid/location/Location;-><init>(Ljava/lang/String;)V

    iget-wide v7, p1, Lcom/loc/fc;->d:J

    iget-wide v9, v2, Lcom/loc/fc;->d:J

    sub-long/2addr v7, v9

    const-wide/16 v9, 0x4e20

    cmp-long v0, v7, v9

    if-gez v0, :cond_3

    const/4 v0, 0x4

    new-array v0, v0, [D

    iget-wide v7, p1, Lcom/loc/fc;->b:D

    aput-wide v7, v0, v1

    iget-wide v7, p1, Lcom/loc/fc;->c:D

    aput-wide v7, v0, v6

    const/4 v1, 0x2

    iget-wide v7, v2, Lcom/loc/fc;->b:D

    aput-wide v7, v0, v1

    const/4 v1, 0x3

    iget-wide v7, v2, Lcom/loc/fc;->c:D

    aput-wide v7, v0, v1

    invoke-static {v0}, Lcom/loc/fz;->a([D)F

    move-result v0

    const/high16 v1, 0x41a00000    # 20.0f

    cmpg-float v0, v0, v1

    if-gez v0, :cond_3

    return-void

    :cond_3
    int-to-long v0, v4

    const-wide/16 v4, 0x5

    cmp-long v2, v0, v4

    if-ltz v2, :cond_4

    iget-object v0, p0, Lcom/loc/fd;->a:Ljava/util/LinkedList;

    invoke-virtual {v0, v3}, Ljava/util/LinkedList;->remove(Ljava/lang/Object;)Z

    :cond_4
    iget-object v0, p0, Lcom/loc/fd;->a:Ljava/util/LinkedList;

    invoke-virtual {v0}, Ljava/util/LinkedList;->size()I

    move-result v0

    int-to-long v0, v0

    const-wide/16 v2, 0xa

    cmp-long v4, v0, v2

    if-ltz v4, :cond_5

    iget-object v0, p0, Lcom/loc/fd;->a:Ljava/util/LinkedList;

    invoke-virtual {v0}, Ljava/util/LinkedList;->removeFirst()Ljava/lang/Object;

    :cond_5
    iget-object v0, p0, Lcom/loc/fd;->a:Ljava/util/LinkedList;

    invoke-virtual {v0, p1}, Ljava/util/LinkedList;->add(Ljava/lang/Object;)Z

    iput-boolean v6, p0, Lcom/loc/fd;->f:Z

    return-void
.end method

.method public final a(Z)V
    .locals 1

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/loc/fd;->g:Ljava/lang/Runnable;

    invoke-interface {p1}, Ljava/lang/Runnable;->run()V

    :cond_0
    iget-object p1, p0, Lcom/loc/fd;->d:Landroid/os/Handler;

    if-eqz p1, :cond_1

    iget-object v0, p0, Lcom/loc/fd;->g:Ljava/lang/Runnable;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    :cond_1
    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/loc/fd;->c:Z

    return-void
.end method

.method public final b(Lcom/loc/fc;)V
    .locals 9

    iget-object v0, p0, Lcom/loc/fd;->a:Ljava/util/LinkedList;

    invoke-virtual {v0}, Ljava/util/LinkedList;->size()I

    move-result v0

    if-lez v0, :cond_5

    iget v0, p1, Lcom/loc/fc;->a:I

    const/4 v1, 0x6

    const/4 v2, 0x1

    const-wide/16 v3, 0xa

    if-eq v0, v1, :cond_2

    iget v0, p1, Lcom/loc/fc;->a:I

    const/4 v1, 0x5

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/loc/fd;->a:Ljava/util/LinkedList;

    invoke-virtual {v0, p1}, Ljava/util/LinkedList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    iget-object v0, p0, Lcom/loc/fd;->a:Ljava/util/LinkedList;

    invoke-virtual {v0}, Ljava/util/LinkedList;->size()I

    move-result v0

    int-to-long v0, v0

    cmp-long v5, v0, v3

    if-ltz v5, :cond_1

    iget-object v0, p0, Lcom/loc/fd;->a:Ljava/util/LinkedList;

    invoke-virtual {v0}, Ljava/util/LinkedList;->removeFirst()Ljava/lang/Object;

    :cond_1
    iget-object v0, p0, Lcom/loc/fd;->a:Ljava/util/LinkedList;

    invoke-virtual {v0, p1}, Ljava/util/LinkedList;->add(Ljava/lang/Object;)Z

    iput-boolean v2, p0, Lcom/loc/fd;->f:Z

    goto :goto_1

    :cond_2
    :goto_0
    iget-object v0, p0, Lcom/loc/fd;->a:Ljava/util/LinkedList;

    invoke-virtual {v0}, Ljava/util/LinkedList;->getLast()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/loc/fc;

    iget-wide v5, v0, Lcom/loc/fc;->c:D

    iget-wide v7, p1, Lcom/loc/fc;->c:D

    cmpl-double v1, v5, v7

    if-nez v1, :cond_3

    iget-wide v5, v0, Lcom/loc/fc;->b:D

    iget-wide v7, p1, Lcom/loc/fc;->b:D

    cmpl-double v1, v5, v7

    if-nez v1, :cond_3

    iget v0, v0, Lcom/loc/fc;->e:I

    iget v1, p1, Lcom/loc/fc;->e:I

    if-eq v0, v1, :cond_5

    :cond_3
    iget-object v0, p0, Lcom/loc/fd;->a:Ljava/util/LinkedList;

    invoke-virtual {v0}, Ljava/util/LinkedList;->size()I

    move-result v0

    int-to-long v0, v0

    cmp-long v5, v0, v3

    if-ltz v5, :cond_4

    iget-object v0, p0, Lcom/loc/fd;->a:Ljava/util/LinkedList;

    invoke-virtual {v0}, Ljava/util/LinkedList;->removeFirst()Ljava/lang/Object;

    :cond_4
    iget-object v0, p0, Lcom/loc/fd;->a:Ljava/util/LinkedList;

    invoke-virtual {v0, p1}, Ljava/util/LinkedList;->add(Ljava/lang/Object;)Z

    iput-boolean v2, p0, Lcom/loc/fd;->f:Z

    :cond_5
    :goto_1
    return-void
.end method
