.class final Lcom/loc/by$a;
.super Lcom/loc/cs;
.source "OfflineLocManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/loc/by;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# instance fields
.field private a:I

.field private b:Landroid/content/Context;

.field private c:Lcom/loc/bx;


# direct methods
.method constructor <init>(Landroid/content/Context;I)V
    .locals 0

    invoke-direct {p0}, Lcom/loc/cs;-><init>()V

    iput-object p1, p0, Lcom/loc/by$a;->b:Landroid/content/Context;

    iput p2, p0, Lcom/loc/by$a;->a:I

    return-void
.end method

.method constructor <init>(Landroid/content/Context;Lcom/loc/bx;)V
    .locals 1

    const/4 v0, 0x1

    invoke-direct {p0, p1, v0}, Lcom/loc/by$a;-><init>(Landroid/content/Context;I)V

    iput-object p2, p0, Lcom/loc/by$a;->c:Lcom/loc/bx;

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 13

    iget v0, p0, Lcom/loc/by$a;->a:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_1

    :try_start_0
    const-class v0, Lcom/loc/by;

    monitor-enter v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->toString(J)Ljava/lang/String;

    move-result-object v1

    invoke-static {}, Lcom/loc/by;->a()Ljava/lang/ref/WeakReference;

    move-result-object v2

    invoke-static {v2}, Lcom/loc/cb;->a(Ljava/lang/ref/WeakReference;)Lcom/loc/bv;

    move-result-object v2

    iget-object v3, p0, Lcom/loc/by$a;->b:Landroid/content/Context;

    sget-object v5, Lcom/loc/at;->i:Ljava/lang/String;

    sget v6, Lcom/loc/by;->a:I

    const/high16 v7, 0x200000

    const-string v8, "6"

    move-object v4, v2

    invoke-static/range {v3 .. v8}, Lcom/loc/cb;->a(Landroid/content/Context;Lcom/loc/bv;Ljava/lang/String;IILjava/lang/String;)V

    iget-object v3, v2, Lcom/loc/bv;->e:Lcom/loc/bh;

    if-nez v3, :cond_0

    new-instance v3, Lcom/loc/bg;

    new-instance v4, Lcom/loc/bi;

    new-instance v5, Lcom/loc/bj;

    new-instance v6, Lcom/loc/bi;

    invoke-direct {v6}, Lcom/loc/bi;-><init>()V

    invoke-direct {v5, v6}, Lcom/loc/bj;-><init>(Lcom/loc/bh;)V

    invoke-direct {v4, v5}, Lcom/loc/bi;-><init>(Lcom/loc/bh;)V

    invoke-direct {v3, v4}, Lcom/loc/bg;-><init>(Lcom/loc/bh;)V

    iput-object v3, v2, Lcom/loc/bv;->e:Lcom/loc/bh;

    :cond_0
    iget-object v3, p0, Lcom/loc/by$a;->c:Lcom/loc/bx;

    invoke-virtual {v3}, Lcom/loc/bx;->a()[B

    move-result-object v3

    invoke-static {v1, v3, v2}, Lcom/loc/bw;->a(Ljava/lang/String;[BLcom/loc/bv;)V

    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw v1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    move-exception v0

    const-string v1, "ofm"

    const-string v2, "aple"

    invoke-static {v0, v1, v2}, Lcom/loc/av;->b(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_1
    const/4 v2, 0x2

    if-ne v0, v2, :cond_4

    :try_start_3
    invoke-static {}, Lcom/loc/by;->a()Ljava/lang/ref/WeakReference;

    move-result-object v0

    invoke-static {v0}, Lcom/loc/cb;->a(Ljava/lang/ref/WeakReference;)Lcom/loc/bv;

    move-result-object v0

    iget-object v3, p0, Lcom/loc/by$a;->b:Landroid/content/Context;

    sget-object v5, Lcom/loc/at;->i:Ljava/lang/String;

    sget v6, Lcom/loc/by;->a:I

    const/high16 v7, 0x200000

    const-string v8, "6"

    move-object v4, v0

    invoke-static/range {v3 .. v8}, Lcom/loc/cb;->a(Landroid/content/Context;Lcom/loc/bv;Ljava/lang/String;IILjava/lang/String;)V

    const v3, 0xdbba00

    iput v3, v0, Lcom/loc/bv;->h:I

    iget-object v3, v0, Lcom/loc/bv;->g:Lcom/loc/ci;

    if-nez v3, :cond_2

    new-instance v7, Lcom/loc/bg;

    new-instance v3, Lcom/loc/bi;

    new-instance v4, Lcom/loc/bj;

    invoke-direct {v4}, Lcom/loc/bj;-><init>()V

    invoke-direct {v3, v4}, Lcom/loc/bi;-><init>(Lcom/loc/bh;)V

    invoke-direct {v7, v3}, Lcom/loc/bg;-><init>(Lcom/loc/bh;)V

    new-instance v3, Lcom/loc/cf;

    new-instance v10, Lcom/loc/ce;

    iget-object v5, p0, Lcom/loc/by$a;->b:Landroid/content/Context;

    new-instance v6, Lcom/loc/cj;

    invoke-direct {v6}, Lcom/loc/cj;-><init>()V

    new-instance v8, Ljava/lang/String;

    invoke-static {}, Lcom/loc/ag;->a()[B

    move-result-object v4

    invoke-direct {v8, v4}, Ljava/lang/String;-><init>([B)V

    const/16 v4, 0x10

    new-array v9, v4, [Ljava/lang/Object;

    const/4 v4, 0x0

    iget-object v11, p0, Lcom/loc/by$a;->b:Landroid/content/Context;

    invoke-static {v11}, Lcom/loc/l;->f(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v11

    aput-object v11, v9, v4

    invoke-static {}, Lcom/loc/o;->k()Ljava/lang/String;

    move-result-object v4

    aput-object v4, v9, v1

    invoke-static {}, Lcom/loc/o;->h()Ljava/lang/String;

    move-result-object v1

    aput-object v1, v9, v2

    const/4 v1, 0x3

    iget-object v2, p0, Lcom/loc/by$a;->b:Landroid/content/Context;

    invoke-static {v2}, Lcom/loc/o;->f(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    aput-object v2, v9, v1

    const/4 v1, 0x4

    invoke-static {}, Lcom/loc/o;->a()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v9, v1

    const/4 v1, 0x5

    sget-object v2, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    aput-object v2, v9, v1

    const/4 v1, 0x6

    sget-object v2, Landroid/os/Build;->DEVICE:Ljava/lang/String;

    aput-object v2, v9, v1

    const/4 v1, 0x7

    invoke-static {}, Lcom/loc/o;->n()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v9, v1

    const/16 v1, 0x8

    iget-object v2, p0, Lcom/loc/by$a;->b:Landroid/content/Context;

    invoke-static {v2}, Lcom/loc/l;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    aput-object v2, v9, v1

    const/16 v1, 0x9

    sget-object v2, Landroid/os/Build;->MODEL:Ljava/lang/String;

    aput-object v2, v9, v1

    const/16 v1, 0xa

    iget-object v2, p0, Lcom/loc/by$a;->b:Landroid/content/Context;

    invoke-static {v2}, Lcom/loc/l;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    aput-object v2, v9, v1

    const/16 v1, 0xb

    iget-object v2, p0, Lcom/loc/by$a;->b:Landroid/content/Context;

    invoke-static {v2}, Lcom/loc/l;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    aput-object v2, v9, v1

    const/16 v1, 0xc

    iget-object v2, p0, Lcom/loc/by$a;->b:Landroid/content/Context;

    invoke-static {v2}, Lcom/loc/o;->e(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    aput-object v2, v9, v1

    const/16 v1, 0xd

    iget-object v2, p0, Lcom/loc/by$a;->b:Landroid/content/Context;

    invoke-static {v2}, Lcom/loc/o;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    aput-object v2, v9, v1

    const/16 v1, 0xe

    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    aput-object v2, v9, v1

    const/16 v1, 0xf

    iget-object v2, p0, Lcom/loc/by$a;->b:Landroid/content/Context;

    invoke-static {v2}, Lcom/loc/ac;->a(Landroid/content/Context;)Lcom/loc/ac;

    move-result-object v2

    invoke-virtual {v2}, Lcom/loc/ac;->a()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v9, v1

    move-object v4, v10

    invoke-direct/range {v4 .. v9}, Lcom/loc/ce;-><init>(Landroid/content/Context;Lcom/loc/ci;Lcom/loc/bh;Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-direct {v3, v10}, Lcom/loc/cf;-><init>(Lcom/loc/ci;)V

    iput-object v3, v0, Lcom/loc/bv;->g:Lcom/loc/ci;

    :cond_2
    iget-object v1, v0, Lcom/loc/bv;->i:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_3

    const-string v1, "fKey"

    iput-object v1, v0, Lcom/loc/bv;->i:Ljava/lang/String;

    :cond_3
    new-instance v1, Lcom/loc/cn;

    iget-object v2, p0, Lcom/loc/by$a;->b:Landroid/content/Context;

    iget v3, v0, Lcom/loc/bv;->h:I

    iget-object v4, v0, Lcom/loc/bv;->i:Ljava/lang/String;

    new-instance v12, Lcom/loc/cl;

    iget-object v6, p0, Lcom/loc/by$a;->b:Landroid/content/Context;

    sget-boolean v7, Lcom/loc/by;->b:Z

    invoke-static {}, Lcom/loc/by;->b()I

    move-result v5

    mul-int/lit16 v8, v5, 0x400

    sget v5, Lcom/loc/by;->c:I

    mul-int/lit16 v9, v5, 0x400

    const-string v10, "offLocKey"

    sget v5, Lcom/loc/by;->d:I

    mul-int/lit16 v11, v5, 0x400

    move-object v5, v12

    invoke-direct/range {v5 .. v11}, Lcom/loc/cl;-><init>(Landroid/content/Context;ZIILjava/lang/String;I)V

    invoke-direct {v1, v2, v3, v4, v12}, Lcom/loc/cn;-><init>(Landroid/content/Context;ILjava/lang/String;Lcom/loc/co;)V

    iput-object v1, v0, Lcom/loc/bv;->f:Lcom/loc/co;

    invoke-static {v0}, Lcom/loc/bw;->a(Lcom/loc/bv;)I
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    return-void

    :catchall_2
    move-exception v0

    const-string v1, "ofm"

    const-string v2, "uold"

    invoke-static {v0, v1, v2}, Lcom/loc/av;->b(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    return-void
.end method
