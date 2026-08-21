.class public final Lcom/loc/da;
.super Ljava/lang/Object;
.source "FpsCollector.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/loc/da$a;
    }
.end annotation


# static fields
.field private static volatile g:Lcom/loc/da;

.field private static h:Ljava/lang/Object;


# instance fields
.field private a:Lcom/loc/cz;

.field private b:Lcom/loc/db;

.field private c:J

.field private d:Lcom/loc/ef;

.field private e:Lcom/loc/cw;

.field private f:Lcom/loc/ef;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    sput-object v0, Lcom/loc/da;->h:Ljava/lang/Object;

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lcom/loc/ef;

    invoke-direct {v0}, Lcom/loc/ef;-><init>()V

    iput-object v0, p0, Lcom/loc/da;->f:Lcom/loc/ef;

    new-instance v0, Lcom/loc/cz;

    invoke-direct {v0}, Lcom/loc/cz;-><init>()V

    iput-object v0, p0, Lcom/loc/da;->a:Lcom/loc/cz;

    new-instance v0, Lcom/loc/db;

    invoke-direct {v0}, Lcom/loc/db;-><init>()V

    iput-object v0, p0, Lcom/loc/da;->b:Lcom/loc/db;

    new-instance v0, Lcom/loc/cw;

    invoke-direct {v0}, Lcom/loc/cw;-><init>()V

    iput-object v0, p0, Lcom/loc/da;->e:Lcom/loc/cw;

    return-void
.end method

.method public static a()Lcom/loc/da;
    .locals 2

    sget-object v0, Lcom/loc/da;->g:Lcom/loc/da;

    if-nez v0, :cond_1

    sget-object v0, Lcom/loc/da;->h:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/loc/da;->g:Lcom/loc/da;

    if-nez v1, :cond_0

    new-instance v1, Lcom/loc/da;

    invoke-direct {v1}, Lcom/loc/da;-><init>()V

    sput-object v1, Lcom/loc/da;->g:Lcom/loc/da;

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    :cond_1
    :goto_0
    sget-object v0, Lcom/loc/da;->g:Lcom/loc/da;

    return-object v0
.end method


# virtual methods
.method public final a(Lcom/loc/da$a;)Lcom/loc/dc;
    .locals 22

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    const/4 v2, 0x0

    if-nez v1, :cond_0

    return-object v2

    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v11

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v13

    iget-object v3, v0, Lcom/loc/da;->d:Lcom/loc/ef;

    if-eqz v3, :cond_1

    iget-object v3, v1, Lcom/loc/da$a;->a:Lcom/loc/ef;

    iget-object v4, v0, Lcom/loc/da;->d:Lcom/loc/ef;

    invoke-virtual {v3, v4}, Lcom/loc/ef;->a(Lcom/loc/ee;)D

    move-result-wide v3

    const-wide/high16 v5, 0x4024000000000000L    # 10.0

    cmpl-double v7, v3, v5

    if-ltz v7, :cond_4

    :cond_1
    iget-object v15, v0, Lcom/loc/da;->a:Lcom/loc/cz;

    iget-object v3, v1, Lcom/loc/da$a;->a:Lcom/loc/ef;

    iget-boolean v4, v1, Lcom/loc/da$a;->j:Z

    iget-byte v5, v1, Lcom/loc/da$a;->g:B

    iget-object v6, v1, Lcom/loc/da$a;->h:Ljava/lang/String;

    iget-object v7, v1, Lcom/loc/da$a;->i:Ljava/util/List;

    move-object/from16 v16, v3

    move/from16 v17, v4

    move/from16 v18, v5

    move-object/from16 v19, v6

    move-object/from16 v20, v7

    invoke-virtual/range {v15 .. v20}, Lcom/loc/cz;->a(Lcom/loc/ef;ZBLjava/lang/String;Ljava/util/List;)Lcom/loc/cz$a;

    move-result-object v18

    iget-object v3, v0, Lcom/loc/da;->b:Lcom/loc/db;

    iget-object v4, v1, Lcom/loc/da$a;->a:Lcom/loc/ef;

    iget-object v5, v1, Lcom/loc/da$a;->b:Ljava/util/List;

    iget-boolean v6, v1, Lcom/loc/da$a;->e:Z

    iget-wide v7, v1, Lcom/loc/da$a;->d:J

    move-wide v9, v11

    invoke-virtual/range {v3 .. v10}, Lcom/loc/db;->a(Lcom/loc/ef;Ljava/util/List;ZJJ)Ljava/util/List;

    move-result-object v21

    if-nez v18, :cond_2

    if-eqz v21, :cond_3

    :cond_2
    iget-object v3, v0, Lcom/loc/da;->f:Lcom/loc/ef;

    iget-object v4, v1, Lcom/loc/da$a;->a:Lcom/loc/ef;

    iget-wide v5, v1, Lcom/loc/da$a;->f:J

    move-wide v7, v11

    invoke-static/range {v3 .. v8}, Lcom/loc/dx;->a(Lcom/loc/ef;Lcom/loc/ef;JJ)V

    new-instance v2, Lcom/loc/dc;

    const/4 v3, 0x0

    iget-object v4, v0, Lcom/loc/da;->e:Lcom/loc/cw;

    iget-object v5, v0, Lcom/loc/da;->f:Lcom/loc/ef;

    iget-wide v6, v1, Lcom/loc/da$a;->c:J

    move-object/from16 v16, v4

    move-object/from16 v17, v5

    move-wide/from16 v19, v6

    invoke-virtual/range {v16 .. v21}, Lcom/loc/cw;->a(Lcom/loc/ef;Lcom/loc/cz$a;JLjava/util/List;)[B

    move-result-object v4

    invoke-direct {v2, v3, v4}, Lcom/loc/dc;-><init>(I[B)V

    :cond_3
    iget-object v1, v1, Lcom/loc/da$a;->a:Lcom/loc/ef;

    iput-object v1, v0, Lcom/loc/da;->d:Lcom/loc/ef;

    iput-wide v13, v0, Lcom/loc/da;->c:J

    :cond_4
    return-object v2
.end method
