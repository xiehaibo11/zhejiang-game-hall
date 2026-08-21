.class public final Lcom/kwad/sdk/api/c;
.super Ljava/lang/Object;


# static fields
.field private static aia:Lcom/kwad/sdk/api/core/IKsAdSDK;


# direct methods
.method public static a(Lcom/kwad/sdk/api/core/IKsAdSDK;)V
    .locals 0

    sput-object p0, Lcom/kwad/sdk/api/c;->aia:Lcom/kwad/sdk/api/core/IKsAdSDK;

    return-void
.end method

.method public static bU(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p0, v0, v1

    const-string p0, "TRANSFORM_API_HOST"

    invoke-static {p0, v0}, Lcom/kwad/sdk/api/c;->c(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    return-object p0
.end method

.method public static varargs c(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/String;",
            "[",
            "Ljava/lang/Object;",
            ")TT;"
        }
    .end annotation

    :try_start_0
    sget-object v0, Lcom/kwad/sdk/api/c;->aia:Lcom/kwad/sdk/api/core/IKsAdSDK;

    invoke-interface {v0, p0, p1}, Lcom/kwad/sdk/api/core/IKsAdSDK;->dM(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p0, :cond_0

    return-object p0

    :catchall_0
    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static yk()Lcom/kwad/sdk/api/core/IKsAdSDK;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/api/c;->aia:Lcom/kwad/sdk/api/core/IKsAdSDK;

    return-object v0
.end method

.method public static yl()Z
    .locals 3

    const/4 v0, 0x0

    new-array v1, v0, [Ljava/lang/Object;

    const-string v2, "enableDynamic"

    invoke-static {v2, v1}, Lcom/kwad/sdk/api/c;->c(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Boolean;

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-nez v1, :cond_0

    const/4 v0, 0x1

    :cond_0
    return v0
.end method

.method public static ym()I
    .locals 2

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/Object;

    const-string v1, "getAutoRevertTime"

    invoke-static {v1, v0}, Lcom/kwad/sdk/api/c;->c(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, -0x1

    return v0
.end method
