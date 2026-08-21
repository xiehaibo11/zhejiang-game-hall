.class final Lcom/loc/ca$a;
.super Lcom/loc/cs;
.source "StatisticsManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/loc/ca;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# static fields
.field static a:I = 0x1

.field static b:I = 0x2

.field static c:I = 0x3


# instance fields
.field private d:Landroid/content/Context;

.field private f:Lcom/loc/bz;

.field private g:I

.field private h:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/loc/bz;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method constructor <init>(Landroid/content/Context;I)V
    .locals 0

    invoke-direct {p0}, Lcom/loc/cs;-><init>()V

    iput-object p1, p0, Lcom/loc/ca$a;->d:Landroid/content/Context;

    iput p2, p0, Lcom/loc/ca$a;->g:I

    return-void
.end method

.method constructor <init>(Landroid/content/Context;ILcom/loc/bz;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/loc/ca$a;-><init>(Landroid/content/Context;I)V

    iput-object p3, p0, Lcom/loc/ca$a;->f:Lcom/loc/bz;

    return-void
.end method

.method constructor <init>(Landroid/content/Context;ILjava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "I",
            "Ljava/util/List<",
            "Lcom/loc/bz;",
            ">;)V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Lcom/loc/ca$a;-><init>(Landroid/content/Context;I)V

    iput-object p3, p0, Lcom/loc/ca$a;->h:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 16

    move-object/from16 v1, p0

    iget v0, v1, Lcom/loc/ca$a;->g:I

    const/4 v2, 0x1

    if-ne v0, v2, :cond_4

    :try_start_0
    iget-object v0, v1, Lcom/loc/ca$a;->d:Landroid/content/Context;

    if-eqz v0, :cond_3

    iget-object v0, v1, Lcom/loc/ca$a;->f:Lcom/loc/bz;

    if-nez v0, :cond_0

    goto :goto_1

    :cond_0
    const-class v2, Lcom/loc/ca;

    monitor-enter v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    iget-object v0, v1, Lcom/loc/ca$a;->d:Landroid/content/Context;

    if-eqz v0, :cond_2

    iget-object v0, v1, Lcom/loc/ca$a;->f:Lcom/loc/bz;

    if-nez v0, :cond_1

    goto :goto_0

    :cond_1
    iget-object v0, v1, Lcom/loc/ca$a;->d:Landroid/content/Context;

    iget-object v3, v1, Lcom/loc/ca$a;->f:Lcom/loc/bz;

    invoke-virtual {v3}, Lcom/loc/bz;->a()[B

    move-result-object v3

    invoke-static {v0, v3}, Lcom/loc/ca;->a(Landroid/content/Context;[B)V

    monitor-exit v2

    return-void

    :cond_2
    :goto_0
    monitor-exit v2

    return-void

    :catchall_0
    move-exception v0

    monitor-exit v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :cond_3
    :goto_1
    return-void

    :catchall_1
    move-exception v0

    const-string v2, "stm"

    const-string v3, "as"

    :goto_2
    invoke-static {v0, v2, v3}, Lcom/loc/av;->b(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_4
    const/4 v2, 0x2

    if-ne v0, v2, :cond_b

    :try_start_3
    const-class v2, Lcom/loc/ca;

    monitor-enter v2
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_9

    :try_start_4
    iget-object v0, v1, Lcom/loc/ca$a;->h:Ljava/util/List;

    if-eqz v0, :cond_a

    iget-object v0, v1, Lcom/loc/ca$a;->d:Landroid/content/Context;

    if-nez v0, :cond_5

    goto :goto_8

    :cond_5
    const/4 v3, 0x0

    const/4 v0, 0x0

    new-array v4, v0, [B
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_8

    :try_start_5
    new-instance v5, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v5}, Ljava/io/ByteArrayOutputStream;-><init>()V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_4

    :try_start_6
    iget-object v0, v1, Lcom/loc/ca$a;->h:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_6
    :goto_3
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_7

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/loc/bz;

    if-eqz v3, :cond_6

    invoke-virtual {v3}, Lcom/loc/bz;->a()[B

    move-result-object v3

    invoke-virtual {v5, v3}, Ljava/io/ByteArrayOutputStream;->write([B)V

    goto :goto_3

    :cond_7
    invoke-virtual {v5}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object v4
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_3

    :try_start_7
    invoke-virtual {v5}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_2

    goto :goto_6

    :catchall_2
    move-exception v0

    move-object v3, v0

    :goto_4
    :try_start_8
    invoke-virtual {v3}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_8

    goto :goto_6

    :catchall_3
    move-exception v0

    move-object v3, v5

    goto :goto_5

    :catchall_4
    move-exception v0

    :goto_5
    :try_start_9
    const-string v5, "stm"

    const-string v6, "aStB"

    invoke-static {v0, v5, v6}, Lcom/loc/av;->b(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_6

    if-eqz v3, :cond_8

    :try_start_a
    invoke-virtual {v3}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_5

    goto :goto_6

    :catchall_5
    move-exception v0

    move-object v3, v0

    goto :goto_4

    :cond_8
    :goto_6
    :try_start_b
    iget-object v0, v1, Lcom/loc/ca$a;->d:Landroid/content/Context;

    invoke-static {v0, v4}, Lcom/loc/ca;->a(Landroid/content/Context;[B)V

    monitor-exit v2
    :try_end_b
    .catchall {:try_start_b .. :try_end_b} :catchall_8

    return-void

    :catchall_6
    move-exception v0

    move-object v4, v0

    if-eqz v3, :cond_9

    :try_start_c
    invoke-virtual {v3}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_c
    .catchall {:try_start_c .. :try_end_c} :catchall_7

    goto :goto_7

    :catchall_7
    move-exception v0

    move-object v3, v0

    :try_start_d
    invoke-virtual {v3}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_9
    :goto_7
    throw v4

    :cond_a
    :goto_8
    monitor-exit v2

    return-void

    :catchall_8
    move-exception v0

    monitor-exit v2
    :try_end_d
    .catchall {:try_start_d .. :try_end_d} :catchall_8

    :try_start_e
    throw v0
    :try_end_e
    .catchall {:try_start_e .. :try_end_e} :catchall_9

    :catchall_9
    move-exception v0

    const-string v2, "stm"

    const-string v3, "apb"

    goto :goto_2

    :cond_b
    const/4 v2, 0x3

    if-ne v0, v2, :cond_10

    :try_start_f
    iget-object v0, v1, Lcom/loc/ca$a;->d:Landroid/content/Context;

    if-nez v0, :cond_c

    return-void

    :cond_c
    invoke-static {}, Lcom/loc/ca;->a()Ljava/lang/ref/WeakReference;

    move-result-object v0

    invoke-static {v0}, Lcom/loc/cb;->a(Ljava/lang/ref/WeakReference;)Lcom/loc/bv;

    move-result-object v0

    iget-object v2, v1, Lcom/loc/ca$a;->d:Landroid/content/Context;

    sget-object v4, Lcom/loc/at;->h:Ljava/lang/String;

    const/16 v5, 0x3e8

    const v6, 0x4b000

    const-string v7, "2"

    move-object v3, v0

    invoke-static/range {v2 .. v7}, Lcom/loc/cb;->a(Landroid/content/Context;Lcom/loc/bv;Ljava/lang/String;IILjava/lang/String;)V

    iget-object v2, v0, Lcom/loc/bv;->g:Lcom/loc/ci;

    if-nez v2, :cond_d

    new-instance v2, Lcom/loc/cc;

    new-instance v3, Lcom/loc/cg;

    iget-object v4, v1, Lcom/loc/ca$a;->d:Landroid/content/Context;

    new-instance v5, Lcom/loc/cd;

    new-instance v6, Lcom/loc/ch;

    new-instance v7, Lcom/loc/cj;

    invoke-direct {v7}, Lcom/loc/cj;-><init>()V

    invoke-direct {v6, v7}, Lcom/loc/ch;-><init>(Lcom/loc/ci;)V

    invoke-direct {v5, v6}, Lcom/loc/cd;-><init>(Lcom/loc/ci;)V

    invoke-direct {v3, v4, v5}, Lcom/loc/cg;-><init>(Landroid/content/Context;Lcom/loc/ci;)V

    invoke-direct {v2, v3}, Lcom/loc/cc;-><init>(Lcom/loc/ci;)V

    iput-object v2, v0, Lcom/loc/bv;->g:Lcom/loc/ci;

    :cond_d
    const v2, 0x36ee80

    iput v2, v0, Lcom/loc/bv;->h:I

    iget-object v2, v0, Lcom/loc/bv;->i:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_e

    const-string v2, "cKey"

    iput-object v2, v0, Lcom/loc/bv;->i:Ljava/lang/String;

    :cond_e
    iget-object v2, v0, Lcom/loc/bv;->f:Lcom/loc/co;

    if-nez v2, :cond_f

    new-instance v2, Lcom/loc/cn;

    iget-object v3, v1, Lcom/loc/ca$a;->d:Landroid/content/Context;

    iget v4, v0, Lcom/loc/bv;->h:I

    iget-object v5, v0, Lcom/loc/bv;->i:Ljava/lang/String;

    new-instance v6, Lcom/loc/ck;

    iget-object v7, v0, Lcom/loc/bv;->a:Ljava/lang/String;

    new-instance v15, Lcom/loc/cl;

    iget-object v9, v1, Lcom/loc/ca$a;->d:Landroid/content/Context;

    sget-boolean v10, Lcom/loc/ca;->a:Z

    invoke-static {}, Lcom/loc/ca;->b()I

    move-result v8

    mul-int/lit16 v11, v8, 0x400

    sget v8, Lcom/loc/ca;->b:I

    mul-int/lit16 v12, v8, 0x400

    const-string v13, "staticUpdate"

    invoke-static {}, Lcom/loc/ca;->c()I

    move-result v8

    mul-int/lit16 v14, v8, 0x400

    move-object v8, v15

    invoke-direct/range {v8 .. v14}, Lcom/loc/cl;-><init>(Landroid/content/Context;ZIILjava/lang/String;I)V

    invoke-direct {v6, v7, v15}, Lcom/loc/ck;-><init>(Ljava/lang/String;Lcom/loc/co;)V

    invoke-direct {v2, v3, v4, v5, v6}, Lcom/loc/cn;-><init>(Landroid/content/Context;ILjava/lang/String;Lcom/loc/co;)V

    iput-object v2, v0, Lcom/loc/bv;->f:Lcom/loc/co;

    :cond_f
    invoke-static {v0}, Lcom/loc/bw;->a(Lcom/loc/bv;)I
    :try_end_f
    .catchall {:try_start_f .. :try_end_f} :catchall_a

    return-void

    :catchall_a
    move-exception v0

    const-string v2, "stm"

    const-string v3, "usd"

    invoke-static {v0, v2, v3}, Lcom/loc/av;->b(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_10
    return-void
.end method
