.class public Lcom/igexin/push/c/k;
.super Lcom/igexin/push/f/b/g;


# static fields
.field public static final a:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private static final b:Ljava/lang/String;

.field private static c:Lcom/igexin/push/c/k;


# instance fields
.field private e:Z


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "DT_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-class v1, Lcom/igexin/push/c/k;

    invoke-virtual {v1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/c/k;->b:Ljava/lang/String;

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    sput-object v0, Lcom/igexin/push/c/k;->a:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-void
.end method

.method private constructor <init>()V
    .locals 2

    const-wide/16 v0, 0xa

    invoke-direct {p0, v0, v1}, Lcom/igexin/push/f/b/g;-><init>(J)V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/igexin/push/c/k;->o:Z

    return-void
.end method

.method public static declared-synchronized c_()Lcom/igexin/push/c/k;
    .locals 2

    const-class v0, Lcom/igexin/push/c/k;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/igexin/push/c/k;->c:Lcom/igexin/push/c/k;

    if-nez v1, :cond_0

    new-instance v1, Lcom/igexin/push/c/k;

    invoke-direct {v1}, Lcom/igexin/push/c/k;-><init>()V

    sput-object v1, Lcom/igexin/push/c/k;->c:Lcom/igexin/push/c/k;

    :cond_0
    sget-object v1, Lcom/igexin/push/c/k;->c:Lcom/igexin/push/c/k;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method


# virtual methods
.method public a(J)V
    .locals 1

    sget-object v0, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    invoke-virtual {p0, p1, p2, v0}, Lcom/igexin/push/c/k;->a(JLjava/util/concurrent/TimeUnit;)I

    return-void
.end method

.method public b_()I
    .locals 1

    const v0, 0x133794f

    return v0
.end method

.method protected d_()V
    .locals 7

    sget-wide v0, Lcom/igexin/push/c/f;->a:J

    sget-object v2, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    invoke-virtual {p0, v0, v1, v2}, Lcom/igexin/push/c/k;->a(JLjava/util/concurrent/TimeUnit;)I

    iget-boolean v0, p0, Lcom/igexin/push/c/k;->e:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/c/k;->b:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|detect task already stop"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-void

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/c/k;->b:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-wide v3, Lcom/igexin/push/c/f;->a:J

    const-wide/16 v5, 0x3e8

    div-long/2addr v3, v5

    invoke-virtual {v0, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v3, "s passed, do task method, start redect ~~~~"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v3, v1, [Ljava/lang/Object;

    invoke-static {v0, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/push/util/a;->f()Z

    move-result v0

    sput-boolean v0, Lcom/igexin/push/core/d;->i:Z

    sget-boolean v0, Lcom/igexin/push/core/d;->i:Z

    if-eqz v0, :cond_1

    invoke-static {}, Lcom/igexin/push/c/i;->a()Lcom/igexin/push/c/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/c/i;->c()V

    goto :goto_0

    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/igexin/push/c/k;->b:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-wide v2, Lcom/igexin/push/c/f;->a:J

    div-long/2addr v2, v5

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v2, "s passed, network is unavailable, stop ###"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :goto_0
    return-void
.end method

.method public h()V
    .locals 1

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/igexin/push/c/k;->o:Z

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/igexin/push/c/k;->e:Z

    invoke-virtual {p0}, Lcom/igexin/push/c/k;->p()V

    return-void
.end method
