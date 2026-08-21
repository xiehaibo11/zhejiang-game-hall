.class public Lcom/igexin/push/c/j;
.super Ljava/lang/Object;


# static fields
.field private static final a:Ljava/lang/String;


# instance fields
.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:I

.field private e:J

.field private f:J

.field private g:Z

.field private h:I

.field private i:I

.field private final j:I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "DT_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-class v1, Lcom/igexin/push/c/j;

    invoke-virtual {v1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/c/j;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/32 v0, 0x7fffffff

    iput-wide v0, p0, Lcom/igexin/push/c/j;->e:J

    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/igexin/push/c/j;->f:J

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/igexin/push/c/j;->g:Z

    iput v0, p0, Lcom/igexin/push/c/j;->j:I

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;I)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/32 v0, 0x7fffffff

    iput-wide v0, p0, Lcom/igexin/push/c/j;->e:J

    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/igexin/push/c/j;->f:J

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/igexin/push/c/j;->g:Z

    iput v0, p0, Lcom/igexin/push/c/j;->j:I

    iput-object p1, p0, Lcom/igexin/push/c/j;->b:Ljava/lang/String;

    iput p2, p0, Lcom/igexin/push/c/j;->d:I

    return-void
.end method

.method private i()V
    .locals 1

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/igexin/push/c/j;->c:Ljava/lang/String;

    const/4 v0, 0x0

    iput v0, p0, Lcom/igexin/push/c/j;->h:I

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/igexin/push/c/j;->g:Z

    return-void
.end method

.method private j()Z
    .locals 6

    iget-object v0, p0, Lcom/igexin/push/c/j;->c:Ljava/lang/String;

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iget-wide v4, p0, Lcom/igexin/push/c/j;->f:J

    sub-long/2addr v2, v4

    sget-wide v4, Lcom/igexin/push/c/f;->b:J

    cmp-long v0, v2, v4

    if-lez v0, :cond_0

    goto :goto_0

    :cond_0
    iget v0, p0, Lcom/igexin/push/c/j;->h:I

    const/4 v2, 0x1

    if-ge v0, v2, :cond_1

    move v1, v2

    :cond_1
    :goto_0
    return v1
.end method


# virtual methods
.method public declared-synchronized a()Ljava/lang/String;
    .locals 1

    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/igexin/push/c/j;->b:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public a(I)V
    .locals 0

    iput p1, p0, Lcom/igexin/push/c/j;->d:I

    return-void
.end method

.method public a(J)V
    .locals 0

    iput-wide p1, p0, Lcom/igexin/push/c/j;->e:J

    return-void
.end method

.method public declared-synchronized a(Ljava/lang/String;)V
    .locals 0

    monitor-enter p0

    :try_start_0
    iput-object p1, p0, Lcom/igexin/push/c/j;->b:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public declared-synchronized a(Ljava/lang/String;JJ)V
    .locals 0

    monitor-enter p0

    :try_start_0
    iput-object p1, p0, Lcom/igexin/push/c/j;->c:Ljava/lang/String;

    iput-wide p2, p0, Lcom/igexin/push/c/j;->e:J

    iput-wide p4, p0, Lcom/igexin/push/c/j;->f:J

    const/4 p1, 0x0

    iput p1, p0, Lcom/igexin/push/c/j;->h:I

    iput p1, p0, Lcom/igexin/push/c/j;->i:I

    iput-boolean p1, p0, Lcom/igexin/push/c/j;->g:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public a(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/igexin/push/c/j;->g:Z

    return-void
.end method

.method public declared-synchronized b(Z)Ljava/lang/String;
    .locals 3

    monitor-enter p0

    :try_start_0
    invoke-direct {p0}, Lcom/igexin/push/c/j;->j()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    if-eqz p1, :cond_0

    iget p1, p0, Lcom/igexin/push/c/j;->h:I

    add-int/lit8 p1, p1, 0x1

    iput p1, p0, Lcom/igexin/push/c/j;->h:I

    :cond_0
    iput-boolean v1, p0, Lcom/igexin/push/c/j;->g:Z

    iget-object p1, p0, Lcom/igexin/push/c/j;->c:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object p1

    :cond_1
    :try_start_1
    invoke-direct {p0}, Lcom/igexin/push/c/j;->i()V

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/c/j;->a:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|disc, ip is invalid, use domain = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/igexin/push/c/j;->b:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    if-eqz p1, :cond_2

    iget p1, p0, Lcom/igexin/push/c/j;->i:I

    add-int/lit8 p1, p1, 0x1

    iput p1, p0, Lcom/igexin/push/c/j;->i:I

    :cond_2
    iget-object p1, p0, Lcom/igexin/push/c/j;->b:Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-object p1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public declared-synchronized b()V
    .locals 2

    monitor-enter p0

    const/4 v0, 0x0

    :try_start_0
    iput-object v0, p0, Lcom/igexin/push/c/j;->c:Ljava/lang/String;

    const-wide/32 v0, 0x7fffffff

    iput-wide v0, p0, Lcom/igexin/push/c/j;->e:J

    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/igexin/push/c/j;->f:J

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/igexin/push/c/j;->g:Z

    const/4 v0, 0x0

    iput v0, p0, Lcom/igexin/push/c/j;->h:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public b(J)V
    .locals 0

    iput-wide p1, p0, Lcom/igexin/push/c/j;->f:J

    return-void
.end method

.method public b(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/c/j;->c:Ljava/lang/String;

    return-void
.end method

.method public c()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/c/j;->c:Ljava/lang/String;

    return-object v0
.end method

.method public d()I
    .locals 1

    iget v0, p0, Lcom/igexin/push/c/j;->d:I

    return v0
.end method

.method public declared-synchronized e()J
    .locals 2

    monitor-enter p0

    :try_start_0
    iget-wide v0, p0, Lcom/igexin/push/c/j;->e:J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-wide v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public declared-synchronized f()Z
    .locals 2

    monitor-enter p0

    :try_start_0
    invoke-direct {p0}, Lcom/igexin/push/c/j;->j()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    monitor-exit p0

    return v1

    :cond_0
    :try_start_1
    iget v0, p0, Lcom/igexin/push/c/j;->i:I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-ge v0, v1, :cond_1

    monitor-exit p0

    return v1

    :cond_1
    const/4 v0, 0x0

    :try_start_2
    iput v0, p0, Lcom/igexin/push/c/j;->i:I
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    monitor-exit p0

    return v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public declared-synchronized g()V
    .locals 1

    monitor-enter p0

    const/4 v0, 0x0

    :try_start_0
    iput v0, p0, Lcom/igexin/push/c/j;->h:I

    iput v0, p0, Lcom/igexin/push/c/j;->i:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public h()Lorg/json/JSONObject;
    .locals 6

    iget-object v0, p0, Lcom/igexin/push/c/j;->b:Ljava/lang/String;

    const/4 v1, 0x0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/igexin/push/c/j;->c:Ljava/lang/String;

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "domain"

    iget-object v3, p0, Lcom/igexin/push/c/j;->b:Ljava/lang/String;

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "ip"

    iget-object v3, p0, Lcom/igexin/push/c/j;->c:Ljava/lang/String;

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    iget-wide v2, p0, Lcom/igexin/push/c/j;->e:J

    const-wide/32 v4, 0x7fffffff

    cmp-long v2, v2, v4

    if-eqz v2, :cond_1

    const-string v2, "consumeTime"

    iget-wide v3, p0, Lcom/igexin/push/c/j;->e:J

    invoke-virtual {v0, v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    :cond_1
    const-string v2, "port"

    iget v3, p0, Lcom/igexin/push/c/j;->d:I

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    iget-wide v2, p0, Lcom/igexin/push/c/j;->f:J

    const-wide/16 v4, -0x1

    cmp-long v2, v2, v4

    if-eqz v2, :cond_2

    const-string v2, "detectSuccessTime"

    iget-wide v3, p0, Lcom/igexin/push/c/j;->f:J

    invoke-virtual {v0, v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    :cond_2
    const-string v2, "isDomain"

    iget-boolean v3, p0, Lcom/igexin/push/c/j;->g:Z

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v2, "connectTryCnt"

    const/4 v3, 0x1

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    :cond_3
    :goto_0
    return-object v1
.end method
