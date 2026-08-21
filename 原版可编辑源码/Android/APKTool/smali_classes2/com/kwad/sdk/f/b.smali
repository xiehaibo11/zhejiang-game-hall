.class public Lcom/kwad/sdk/f/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/f/a;


# static fields
.field private static volatile aBX:Lcom/kwad/sdk/f/b;

.field private static aBY:Lcom/kwad/sdk/f/c;


# direct methods
.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static declared-synchronized FA()Lcom/kwad/sdk/f/b;
    .locals 2

    const-class v0, Lcom/kwad/sdk/f/b;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/sdk/f/b;->aBX:Lcom/kwad/sdk/f/b;

    if-nez v1, :cond_1

    monitor-enter v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    sget-object v1, Lcom/kwad/sdk/f/b;->aBX:Lcom/kwad/sdk/f/b;

    if-nez v1, :cond_0

    new-instance v1, Lcom/kwad/sdk/f/b;

    invoke-direct {v1}, Lcom/kwad/sdk/f/b;-><init>()V

    sput-object v1, Lcom/kwad/sdk/f/b;->aBX:Lcom/kwad/sdk/f/b;

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw v1

    :cond_1
    :goto_0
    sget-object v1, Lcom/kwad/sdk/f/b;->aBX:Lcom/kwad/sdk/f/b;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    monitor-exit v0

    return-object v1

    :catchall_1
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method private static FB()Ljava/lang/String;
    .locals 3

    const/4 v0, 0x0

    const-string v1, ""

    const/4 v2, 0x2

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static a(ZLjava/lang/Object;I)Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    invoke-static {p0}, Ljava/lang/String;->valueOf(Z)Ljava/lang/String;

    move-result-object p0

    const-string v1, "userSet"

    invoke-virtual {v0, v1, p0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p0, "value"

    invoke-virtual {v0, p0, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    const-string p1, "errorCode"

    invoke-virtual {v0, p1, p0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    new-instance p0, Lorg/json/JSONObject;

    invoke-direct {p0, v0}, Lorg/json/JSONObject;-><init>(Ljava/util/Map;)V

    invoke-virtual {p0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static a(Lcom/kwad/sdk/f/c;)V
    .locals 0

    sput-object p0, Lcom/kwad/sdk/f/b;->aBY:Lcom/kwad/sdk/f/c;

    return-void
.end method


# virtual methods
.method public final Fo()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/f/b;->aBY:Lcom/kwad/sdk/f/c;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/f/c;->Fo()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/f/b;->FB()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final Fp()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/f/b;->aBY:Lcom/kwad/sdk/f/c;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/f/c;->Fp()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/f/b;->FB()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final Fq()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/f/b;->aBY:Lcom/kwad/sdk/f/c;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/f/c;->Fq()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/f/b;->FB()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final Fr()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/f/b;->aBY:Lcom/kwad/sdk/f/c;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/f/c;->Fr()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/f/b;->FB()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final Fs()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/f/b;->aBY:Lcom/kwad/sdk/f/c;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/f/c;->Fs()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/f/b;->FB()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final Ft()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/f/b;->aBY:Lcom/kwad/sdk/f/c;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/f/c;->Ft()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/f/b;->FB()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final Fu()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/f/b;->aBY:Lcom/kwad/sdk/f/c;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/f/c;->Fu()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/f/b;->FB()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final Fv()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/f/b;->aBY:Lcom/kwad/sdk/f/c;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/f/c;->Fv()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/f/b;->FB()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final Fw()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/f/b;->aBY:Lcom/kwad/sdk/f/c;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/f/c;->Fw()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/f/b;->FB()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final Fx()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/f/b;->aBY:Lcom/kwad/sdk/f/c;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/f/c;->Fx()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/f/b;->FB()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final Fy()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/f/b;->aBY:Lcom/kwad/sdk/f/c;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/f/c;->Fy()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/f/b;->FB()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final Fz()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/f/b;->aBY:Lcom/kwad/sdk/f/c;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/f/c;->Fz()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/f/b;->FB()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getAppId()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/f/b;->aBY:Lcom/kwad/sdk/f/c;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/f/c;->getAppId()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/f/b;->FB()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getDeviceId()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/f/b;->aBY:Lcom/kwad/sdk/f/c;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/f/c;->getDeviceId()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/f/b;->FB()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getIccId()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/f/b;->aBY:Lcom/kwad/sdk/f/c;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/f/c;->getIccId()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/f/b;->FB()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getIp()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/f/b;->aBY:Lcom/kwad/sdk/f/c;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/f/c;->getIp()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/f/b;->FB()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getLocation()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/f/b;->aBY:Lcom/kwad/sdk/f/c;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/f/c;->getLocation()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/f/b;->FB()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getOaid()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/f/b;->aBY:Lcom/kwad/sdk/f/c;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/f/c;->getOaid()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/f/b;->FB()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getSdkVersion()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/f/b;->aBY:Lcom/kwad/sdk/f/c;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/f/c;->getSdkVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/f/b;->FB()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
