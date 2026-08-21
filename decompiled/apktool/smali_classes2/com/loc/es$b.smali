.class final Lcom/loc/es$b;
.super Lcom/loc/cs;
.source "CollectionManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/loc/es;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "b"
.end annotation


# instance fields
.field final synthetic a:Lcom/loc/es;

.field private b:I

.field private c:Landroid/location/Location;


# direct methods
.method constructor <init>(Lcom/loc/es;I)V
    .locals 0

    iput-object p1, p0, Lcom/loc/es$b;->a:Lcom/loc/es;

    invoke-direct {p0}, Lcom/loc/cs;-><init>()V

    const/4 p1, 0x0

    iput p1, p0, Lcom/loc/es$b;->b:I

    iput p2, p0, Lcom/loc/es$b;->b:I

    return-void
.end method

.method constructor <init>(Lcom/loc/es;Landroid/location/Location;)V
    .locals 1

    const/4 v0, 0x1

    invoke-direct {p0, p1, v0}, Lcom/loc/es$b;-><init>(Lcom/loc/es;I)V

    iput-object p2, p0, Lcom/loc/es$b;->c:Landroid/location/Location;

    return-void
.end method

.method private b()V
    .locals 7

    const/4 v0, 0x1

    :try_start_0
    new-array v1, v0, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    iget-object v1, p0, Lcom/loc/es$b;->c:Landroid/location/Location;

    if-nez v1, :cond_0

    return-void

    :cond_0
    iget-object v1, p0, Lcom/loc/es$b;->a:Lcom/loc/es;

    invoke-static {v1}, Lcom/loc/es;->a(Lcom/loc/es;)Z

    move-result v1

    if-nez v1, :cond_1

    return-void

    :cond_1
    iget-object v1, p0, Lcom/loc/es$b;->a:Lcom/loc/es;

    iget-object v1, v1, Lcom/loc/es;->a:Landroid/content/Context;

    invoke-static {v1}, Lcom/loc/fz;->m(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_2

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    return-void

    :cond_2
    iget-object v0, p0, Lcom/loc/es$b;->c:Landroid/location/Location;

    invoke-virtual {v0}, Landroid/location/Location;->getExtras()Landroid/os/Bundle;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_3

    const-string v1, "satellites"

    invoke-virtual {v0, v1}, Landroid/os/Bundle;->getInt(Ljava/lang/String;)I

    move-result v1

    :cond_3
    iget-object v0, p0, Lcom/loc/es$b;->c:Landroid/location/Location;

    invoke-static {v0, v1}, Lcom/loc/fz;->a(Landroid/location/Location;I)Z

    move-result v0

    if-eqz v0, :cond_4

    return-void

    :cond_4
    iget-object v0, p0, Lcom/loc/es$b;->a:Lcom/loc/es;

    iget-object v0, v0, Lcom/loc/es;->b:Lcom/loc/ff;

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/loc/es$b;->a:Lcom/loc/es;

    iget-object v0, v0, Lcom/loc/es;->b:Lcom/loc/ff;

    iget-boolean v0, v0, Lcom/loc/ff;->s:Z

    if-nez v0, :cond_5

    iget-object v0, p0, Lcom/loc/es$b;->a:Lcom/loc/es;

    iget-object v0, v0, Lcom/loc/es;->b:Lcom/loc/ff;

    invoke-virtual {v0}, Lcom/loc/ff;->f()V

    :cond_5
    iget-object v0, p0, Lcom/loc/es$b;->a:Lcom/loc/es;

    iget-object v0, v0, Lcom/loc/es;->b:Lcom/loc/ff;

    invoke-virtual {v0}, Lcom/loc/ff;->a()Ljava/util/ArrayList;

    move-result-object v0

    iget-object v2, p0, Lcom/loc/es$b;->a:Lcom/loc/es;

    iget-object v2, v2, Lcom/loc/es;->c:Lcom/loc/fb;

    invoke-virtual {v2}, Lcom/loc/fb;->a()Ljava/util/List;

    move-result-object v2

    new-instance v3, Lcom/loc/da$a;

    invoke-direct {v3}, Lcom/loc/da$a;-><init>()V

    new-instance v4, Lcom/loc/ef;

    invoke-direct {v4}, Lcom/loc/ef;-><init>()V

    iget-object v5, p0, Lcom/loc/es$b;->c:Landroid/location/Location;

    invoke-virtual {v5}, Landroid/location/Location;->getAccuracy()F

    move-result v5

    iput v5, v4, Lcom/loc/ef;->i:F

    iget-object v5, p0, Lcom/loc/es$b;->c:Landroid/location/Location;

    invoke-virtual {v5}, Landroid/location/Location;->getAltitude()D

    move-result-wide v5

    iput-wide v5, v4, Lcom/loc/ef;->f:D

    iget-object v5, p0, Lcom/loc/es$b;->c:Landroid/location/Location;

    invoke-virtual {v5}, Landroid/location/Location;->getLatitude()D

    move-result-wide v5

    iput-wide v5, v4, Lcom/loc/ef;->d:D

    iget-object v5, p0, Lcom/loc/es$b;->c:Landroid/location/Location;

    invoke-virtual {v5}, Landroid/location/Location;->getBearing()F

    move-result v5

    iput v5, v4, Lcom/loc/ef;->h:F

    iget-object v5, p0, Lcom/loc/es$b;->c:Landroid/location/Location;

    invoke-virtual {v5}, Landroid/location/Location;->getLongitude()D

    move-result-wide v5

    iput-wide v5, v4, Lcom/loc/ef;->e:D

    iget-object v5, p0, Lcom/loc/es$b;->c:Landroid/location/Location;

    invoke-virtual {v5}, Landroid/location/Location;->isFromMockProvider()Z

    move-result v5

    iput-boolean v5, v4, Lcom/loc/ef;->j:Z

    iget-object v5, p0, Lcom/loc/es$b;->c:Landroid/location/Location;

    invoke-virtual {v5}, Landroid/location/Location;->getProvider()Ljava/lang/String;

    move-result-object v5

    iput-object v5, v4, Lcom/loc/ef;->a:Ljava/lang/String;

    iget-object v5, p0, Lcom/loc/es$b;->c:Landroid/location/Location;

    invoke-virtual {v5}, Landroid/location/Location;->getSpeed()F

    move-result v5

    iput v5, v4, Lcom/loc/ef;->g:F

    int-to-byte v1, v1

    iput-byte v1, v4, Lcom/loc/ef;->l:B

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    iput-wide v5, v4, Lcom/loc/ef;->b:J

    iget-object v1, p0, Lcom/loc/es$b;->c:Landroid/location/Location;

    invoke-virtual {v1}, Landroid/location/Location;->getTime()J

    move-result-wide v5

    iput-wide v5, v4, Lcom/loc/ef;->c:J

    iget-object v1, p0, Lcom/loc/es$b;->c:Landroid/location/Location;

    invoke-virtual {v1}, Landroid/location/Location;->getTime()J

    move-result-wide v5

    iput-wide v5, v4, Lcom/loc/ef;->k:J

    iput-object v4, v3, Lcom/loc/da$a;->a:Lcom/loc/ef;

    iput-object v0, v3, Lcom/loc/da$a;->b:Ljava/util/List;

    iget-object v0, p0, Lcom/loc/es$b;->a:Lcom/loc/es;

    iget-object v0, v0, Lcom/loc/es;->b:Lcom/loc/ff;

    invoke-virtual {v0}, Lcom/loc/ff;->c()Landroid/net/wifi/WifiInfo;

    move-result-object v0

    if-eqz v0, :cond_6

    invoke-virtual {v0}, Landroid/net/wifi/WifiInfo;->getBSSID()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/loc/eg;->a(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, v3, Lcom/loc/da$a;->c:J

    :cond_6
    sget-wide v0, Lcom/loc/ff;->A:J

    iput-wide v0, v3, Lcom/loc/da$a;->d:J

    iget-object v0, p0, Lcom/loc/es$b;->c:Landroid/location/Location;

    invoke-virtual {v0}, Landroid/location/Location;->getTime()J

    move-result-wide v0

    iput-wide v0, v3, Lcom/loc/da$a;->f:J

    iget-object v0, p0, Lcom/loc/es$b;->a:Lcom/loc/es;

    iget-object v0, v0, Lcom/loc/es;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/loc/o;->i(Landroid/content/Context;)I

    move-result v0

    int-to-byte v0, v0

    iput-byte v0, v3, Lcom/loc/da$a;->g:B

    iget-object v0, p0, Lcom/loc/es$b;->a:Lcom/loc/es;

    iget-object v0, v0, Lcom/loc/es;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/loc/o;->n(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, v3, Lcom/loc/da$a;->h:Ljava/lang/String;

    iget-object v0, p0, Lcom/loc/es$b;->a:Lcom/loc/es;

    iget-object v0, v0, Lcom/loc/es;->b:Lcom/loc/ff;

    invoke-virtual {v0}, Lcom/loc/ff;->k()Z

    move-result v0

    iput-boolean v0, v3, Lcom/loc/da$a;->e:Z

    iget-object v0, p0, Lcom/loc/es$b;->a:Lcom/loc/es;

    iget-object v0, v0, Lcom/loc/es;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/loc/fz;->a(Landroid/content/Context;)Z

    move-result v0

    iput-boolean v0, v3, Lcom/loc/da$a;->j:Z

    iput-object v2, v3, Lcom/loc/da$a;->i:Ljava/util/List;

    invoke-static {v3}, Lcom/loc/dw;->a(Lcom/loc/da$a;)Lcom/loc/dc;

    move-result-object v0

    if-nez v0, :cond_7

    return-void

    :cond_7
    iget-object v1, p0, Lcom/loc/es$b;->a:Lcom/loc/es;

    invoke-static {v1}, Lcom/loc/es;->b(Lcom/loc/es;)Ljava/util/ArrayList;

    move-result-object v1

    monitor-enter v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    iget-object v2, p0, Lcom/loc/es$b;->a:Lcom/loc/es;

    invoke-static {v2}, Lcom/loc/es;->b(Lcom/loc/es;)Ljava/util/ArrayList;

    move-result-object v2

    invoke-virtual {v2, v0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    iget-object v0, p0, Lcom/loc/es$b;->a:Lcom/loc/es;

    invoke-static {v0}, Lcom/loc/es;->b(Lcom/loc/es;)Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    const/4 v2, 0x5

    if-lt v0, v2, :cond_8

    iget-object v0, p0, Lcom/loc/es$b;->a:Lcom/loc/es;

    invoke-virtual {v0}, Lcom/loc/es;->e()V

    :cond_8
    monitor-exit v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    iget-object v0, p0, Lcom/loc/es$b;->a:Lcom/loc/es;

    invoke-virtual {v0}, Lcom/loc/es;->d()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    return-void

    :catchall_0
    move-exception v0

    :try_start_3
    monitor-exit v1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    :try_start_4
    throw v0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    :catchall_1
    move-exception v0

    const-string v1, "cl"

    const-string v2, "coll"

    invoke-static {v0, v1, v2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private c()V
    .locals 6

    const/4 v0, 0x1

    new-array v1, v0, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    iget-object v1, p0, Lcom/loc/es$b;->a:Lcom/loc/es;

    iget-object v1, v1, Lcom/loc/es;->a:Landroid/content/Context;

    invoke-static {v1}, Lcom/loc/fz;->m(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_0

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    return-void

    :cond_0
    const/4 v1, 0x0

    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-static {v2, v3}, Lcom/loc/es;->a(J)J

    iget-object v2, p0, Lcom/loc/es$b;->a:Lcom/loc/es;

    iget-object v2, v2, Lcom/loc/es;->e:Lcom/loc/bv;

    iget-object v2, v2, Lcom/loc/bv;->f:Lcom/loc/co;

    invoke-virtual {v2}, Lcom/loc/co;->c()Z

    move-result v2

    if-eqz v2, :cond_4

    new-instance v2, Ljava/io/File;

    iget-object v3, p0, Lcom/loc/es$b;->a:Lcom/loc/es;

    iget-object v3, v3, Lcom/loc/es;->e:Lcom/loc/bv;

    iget-object v3, v3, Lcom/loc/bv;->a:Ljava/lang/String;

    invoke-direct {v2, v3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    iget-object v3, p0, Lcom/loc/es$b;->a:Lcom/loc/es;

    iget-object v3, v3, Lcom/loc/es;->e:Lcom/loc/bv;

    iget-wide v3, v3, Lcom/loc/bv;->b:J

    invoke-static {v2, v3, v4}, Lcom/loc/bl;->a(Ljava/io/File;J)Lcom/loc/bl;

    move-result-object v1

    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    invoke-static {}, Lcom/loc/es;->f()[B

    move-result-object v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    if-nez v3, :cond_1

    :try_start_1
    invoke-virtual {v1}, Lcom/loc/bl;->close()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    return-void

    :cond_1
    :try_start_2
    iget-object v4, p0, Lcom/loc/es$b;->a:Lcom/loc/es;

    iget-object v4, v4, Lcom/loc/es;->e:Lcom/loc/bv;

    invoke-static {v1, v4, v2, v3}, Lcom/loc/es;->a(Lcom/loc/bl;Lcom/loc/bv;Ljava/util/List;[B)Ljava/util/List;

    move-result-object v4

    if-eqz v4, :cond_3

    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v5

    if-nez v5, :cond_2

    goto :goto_0

    :cond_2
    iget-object v5, p0, Lcom/loc/es$b;->a:Lcom/loc/es;

    iget-object v5, v5, Lcom/loc/es;->e:Lcom/loc/bv;

    iget-object v5, v5, Lcom/loc/bv;->f:Lcom/loc/co;

    invoke-virtual {v5, v0}, Lcom/loc/co;->a(Z)V

    invoke-static {}, Lcom/loc/dw;->a()[B

    move-result-object v0

    invoke-static {}, Lcom/loc/x;->c()[B

    move-result-object v5

    invoke-static {v3, v0, v5}, Lcom/loc/p;->b([B[B[B)[B

    move-result-object v0

    invoke-static {v3}, Lcom/loc/fg;->a([B)[B

    move-result-object v3

    invoke-static {v3, v0, v4}, Lcom/loc/dw;->a([B[BLjava/util/List;)[B

    move-result-object v0

    invoke-static {v0}, Lcom/loc/x;->b([B)[B

    move-result-object v0

    invoke-static {v0}, Lcom/loc/dw;->a([B)Z

    move-result v0

    if-eqz v0, :cond_4

    invoke-static {v1, v2}, Lcom/loc/es;->a(Lcom/loc/bl;Ljava/util/List;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    goto :goto_1

    :cond_3
    :goto_0
    :try_start_3
    invoke-virtual {v1}, Lcom/loc/bl;->close()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :catchall_1
    return-void

    :cond_4
    :goto_1
    if-eqz v1, :cond_5

    :try_start_4
    invoke-virtual {v1}, Lcom/loc/bl;->close()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    :catchall_2
    return-void

    :catchall_3
    move-exception v0

    :try_start_5
    const-string v2, "leg"

    const-string v3, "uts"

    invoke-static {v0, v2, v3}, Lcom/loc/av;->b(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_5

    if-eqz v1, :cond_5

    :try_start_6
    invoke-virtual {v1}, Lcom/loc/bl;->close()V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_4

    :catchall_4
    :cond_5
    return-void

    :catchall_5
    move-exception v0

    if-eqz v1, :cond_6

    :try_start_7
    invoke-virtual {v1}, Lcom/loc/bl;->close()V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_6

    :catchall_6
    :cond_6
    throw v0
.end method


# virtual methods
.method public final a()V
    .locals 2

    iget v0, p0, Lcom/loc/es$b;->b:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    invoke-direct {p0}, Lcom/loc/es$b;->b()V

    return-void

    :cond_0
    const/4 v1, 0x2

    if-ne v0, v1, :cond_1

    invoke-direct {p0}, Lcom/loc/es$b;->c()V

    return-void

    :cond_1
    const/4 v1, 0x3

    if-ne v0, v1, :cond_2

    iget-object v0, p0, Lcom/loc/es$b;->a:Lcom/loc/es;

    invoke-static {v0}, Lcom/loc/es;->c(Lcom/loc/es;)V

    :cond_2
    return-void
.end method
