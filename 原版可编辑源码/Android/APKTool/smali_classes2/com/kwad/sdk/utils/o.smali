.class public final Lcom/kwad/sdk/utils/o;
.super Ljava/lang/Object;


# static fields
.field private static aIk:Z

.field private static aIl:Z


# direct methods
.method public static HX()Z
    .locals 3

    const-class v0, Lcom/kwad/sdk/service/a/f;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/f;

    const-wide/16 v1, 0x2

    invoke-interface {v0, v1, v2}, Lcom/kwad/sdk/service/a/f;->R(J)Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    sget-boolean v1, Lcom/kwad/sdk/utils/o;->aIk:Z

    and-int/2addr v0, v1

    return v0
.end method

.method public static HY()Z
    .locals 3

    const-class v0, Lcom/kwad/sdk/service/a/f;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/f;

    const-wide/16 v1, 0x4

    invoke-interface {v0, v1, v2}, Lcom/kwad/sdk/service/a/f;->R(J)Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    sget-boolean v1, Lcom/kwad/sdk/utils/o;->aIk:Z

    and-int/2addr v0, v1

    return v0
.end method

.method public static HZ()Z
    .locals 1

    const-class v0, Lcom/kwad/sdk/service/a/f;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/f;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/f;->xv()Z

    move-result v0

    if-eqz v0, :cond_0

    sget-boolean v0, Lcom/kwad/sdk/utils/o;->aIk:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static Ia()Z
    .locals 3

    const-class v0, Lcom/kwad/sdk/service/a/f;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/f;

    const-wide/16 v1, 0x10

    invoke-interface {v0, v1, v2}, Lcom/kwad/sdk/service/a/f;->R(J)Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    sget-boolean v1, Lcom/kwad/sdk/utils/o;->aIk:Z

    and-int/2addr v0, v1

    return v0
.end method

.method public static Ib()Z
    .locals 3

    const-class v0, Lcom/kwad/sdk/service/a/f;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/f;

    const-wide/16 v1, 0x1000

    invoke-interface {v0, v1, v2}, Lcom/kwad/sdk/service/a/f;->R(J)Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    sget-boolean v1, Lcom/kwad/sdk/utils/o;->aIk:Z

    and-int/2addr v0, v1

    return v0
.end method

.method public static Ic()Z
    .locals 3

    const-class v0, Lcom/kwad/sdk/service/a/f;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/f;

    const-wide/16 v1, 0x1

    invoke-interface {v0, v1, v2}, Lcom/kwad/sdk/service/a/f;->R(J)Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    sget-boolean v1, Lcom/kwad/sdk/utils/o;->aIk:Z

    and-int/2addr v0, v1

    return v0
.end method

.method public static Id()Z
    .locals 3

    const-class v0, Lcom/kwad/sdk/service/a/f;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/f;

    const-wide/16 v1, 0x80

    invoke-interface {v0, v1, v2}, Lcom/kwad/sdk/service/a/f;->R(J)Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    sget-boolean v1, Lcom/kwad/sdk/utils/o;->aIk:Z

    and-int/2addr v0, v1

    return v0
.end method

.method public static Ie()Z
    .locals 3

    const-class v0, Lcom/kwad/sdk/service/a/f;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/f;

    const-wide/16 v1, 0x80

    invoke-interface {v0, v1, v2}, Lcom/kwad/sdk/service/a/f;->R(J)Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    sget-boolean v1, Lcom/kwad/sdk/utils/o;->aIk:Z

    and-int/2addr v0, v1

    return v0
.end method

.method public static declared-synchronized bE(Z)V
    .locals 1

    const-class p0, Lcom/kwad/sdk/utils/o;

    monitor-enter p0

    :try_start_0
    sget-boolean v0, Lcom/kwad/sdk/utils/o;->aIl:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    monitor-exit p0

    return-void

    :cond_0
    const/4 v0, 0x1

    :try_start_1
    sput-boolean v0, Lcom/kwad/sdk/utils/o;->aIl:Z

    sput-boolean v0, Lcom/kwad/sdk/utils/o;->aIk:Z

    const-class v0, Lcom/kwad/sdk/service/a/b;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/b;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/b;->xq()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method
