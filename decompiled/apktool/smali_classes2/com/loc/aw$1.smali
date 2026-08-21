.class final Lcom/loc/aw$1;
.super Lcom/loc/cs;
.source "ErrorLogManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/loc/aw;->a(Landroid/content/Context;Lcom/loc/co;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/loc/co;


# direct methods
.method constructor <init>(Landroid/content/Context;Ljava/lang/String;Lcom/loc/co;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/aw$1;->a:Landroid/content/Context;

    iput-object p2, p0, Lcom/loc/aw$1;->b:Ljava/lang/String;

    iput-object p3, p0, Lcom/loc/aw$1;->c:Lcom/loc/co;

    invoke-direct {p0}, Lcom/loc/cs;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 11

    :try_start_0
    const-class v0, Lcom/loc/aw;

    monitor-enter v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    invoke-static {}, Lcom/loc/aw;->a()Ljava/lang/ref/WeakReference;

    move-result-object v1

    invoke-static {v1}, Lcom/loc/cb;->a(Ljava/lang/ref/WeakReference;)Lcom/loc/bv;

    move-result-object v1

    iget-object v2, p0, Lcom/loc/aw$1;->a:Landroid/content/Context;

    iget-object v4, p0, Lcom/loc/aw$1;->b:Ljava/lang/String;

    const/16 v5, 0x3e8

    const v6, 0x3e8000

    const-string v7, "1"

    move-object v3, v1

    invoke-static/range {v2 .. v7}, Lcom/loc/cb;->a(Landroid/content/Context;Lcom/loc/bv;Ljava/lang/String;IILjava/lang/String;)V

    iget-object v2, p0, Lcom/loc/aw$1;->c:Lcom/loc/co;

    iput-object v2, v1, Lcom/loc/bv;->f:Lcom/loc/co;

    iget-object v2, v1, Lcom/loc/bv;->g:Lcom/loc/ci;

    if-nez v2, :cond_0

    new-instance v2, Lcom/loc/cf;

    new-instance v9, Lcom/loc/ce;

    iget-object v4, p0, Lcom/loc/aw$1;->a:Landroid/content/Context;

    new-instance v5, Lcom/loc/cj;

    invoke-direct {v5}, Lcom/loc/cj;-><init>()V

    new-instance v6, Lcom/loc/bg;

    new-instance v3, Lcom/loc/bi;

    new-instance v7, Lcom/loc/bj;

    invoke-direct {v7}, Lcom/loc/bj;-><init>()V

    invoke-direct {v3, v7}, Lcom/loc/bi;-><init>(Lcom/loc/bh;)V

    invoke-direct {v6, v3}, Lcom/loc/bg;-><init>(Lcom/loc/bh;)V

    const-string v7, "QImtleSI6IiVzIiwicGxhdGZvcm0iOiJhbmRyb2lkIiwiZGl1IjoiJXMiLCJhZGl1IjoiJXMiLCJwa2ciOiIlcyIsIm1vZGVsIjoiJXMiLCJhcHBuYW1lIjoiJXMiLCJhcHB2ZXJzaW9uIjoiJXMiLCJzeXN2ZXJzaW9uIjoiJXMi"

    const/16 v3, 0x8

    new-array v8, v3, [Ljava/lang/Object;

    const/4 v3, 0x0

    iget-object v10, p0, Lcom/loc/aw$1;->a:Landroid/content/Context;

    invoke-static {v10}, Lcom/loc/l;->f(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v10

    aput-object v10, v8, v3

    const/4 v3, 0x1

    invoke-static {}, Lcom/loc/o;->k()Ljava/lang/String;

    move-result-object v10

    aput-object v10, v8, v3

    const/4 v3, 0x2

    iget-object v10, p0, Lcom/loc/aw$1;->a:Landroid/content/Context;

    invoke-static {v10}, Lcom/loc/o;->p(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v10

    aput-object v10, v8, v3

    const/4 v3, 0x3

    iget-object v10, p0, Lcom/loc/aw$1;->a:Landroid/content/Context;

    invoke-static {v10}, Lcom/loc/l;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v10

    aput-object v10, v8, v3

    const/4 v3, 0x4

    sget-object v10, Landroid/os/Build;->MODEL:Ljava/lang/String;

    aput-object v10, v8, v3

    const/4 v3, 0x5

    iget-object v10, p0, Lcom/loc/aw$1;->a:Landroid/content/Context;

    invoke-static {v10}, Lcom/loc/l;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v10

    aput-object v10, v8, v3

    const/4 v3, 0x6

    iget-object v10, p0, Lcom/loc/aw$1;->a:Landroid/content/Context;

    invoke-static {v10}, Lcom/loc/l;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v10

    aput-object v10, v8, v3

    const/4 v3, 0x7

    sget-object v10, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    aput-object v10, v8, v3

    move-object v3, v9

    invoke-direct/range {v3 .. v8}, Lcom/loc/ce;-><init>(Landroid/content/Context;Lcom/loc/ci;Lcom/loc/bh;Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-direct {v2, v9}, Lcom/loc/cf;-><init>(Lcom/loc/ci;)V

    iput-object v2, v1, Lcom/loc/bv;->g:Lcom/loc/ci;

    :cond_0
    const v2, 0x36ee80

    iput v2, v1, Lcom/loc/bv;->h:I

    invoke-static {v1}, Lcom/loc/bw;->a(Lcom/loc/bv;)I

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

    const-string v1, "lg"

    const-string v2, "pul"

    invoke-static {v0, v1, v2}, Lcom/loc/av;->b(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
