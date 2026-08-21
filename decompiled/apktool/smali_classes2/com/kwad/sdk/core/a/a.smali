.class public final Lcom/kwad/sdk/core/a/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/a/f;


# static fields
.field private static aof:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static AI()Ljava/lang/String;
    .locals 3

    sget-object v0, Lcom/kwad/sdk/core/a/a;->aof:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/kwad/sdk/core/a/a;->aof:Ljava/lang/String;

    return-object v0

    :cond_0
    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->getContext()Landroid/content/Context;

    move-result-object v0

    if-nez v0, :cond_1

    const-string v0, ""

    return-object v0

    :cond_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v0}, Lcom/kwad/sdk/utils/ay;->cW(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/core/a/a;->aof:Ljava/lang/String;

    return-object v0
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    invoke-static {p1, p2, p3}, Lcom/kwad/sdk/core/a/e;->a(Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    return-void
.end method

.method public final cQ(Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    const-string v0, "UTF-8"

    const/4 v1, 0x0

    :try_start_0
    invoke-static {v1}, Lcom/kwad/sdk/utils/p;->db(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/core/a/b;->f([B)[B

    move-result-object v2

    invoke-virtual {v1, v0}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v1

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/a/b;->d([B[B)[B

    move-result-object v1

    new-instance v2, Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/core/a/c;->AJ()Lcom/kwad/sdk/core/a/c$b;

    move-result-object v3

    invoke-virtual {v3, v1}, Lcom/kwad/sdk/core/a/c$b;->encode([B)[B

    move-result-object v1

    invoke-direct {v2, v1, v0}, Ljava/lang/String;-><init>([BLjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v2

    :catch_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    return-object p1
.end method

.method public final e(Ljava/util/Map;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    invoke-static {}, Lcom/kwad/sdk/core/a/a;->AI()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Ks-PkgId"

    invoke-interface {p1, v1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "Ks-Encoding"

    const-string v1, "2"

    invoke-interface {p1, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final getResponseData(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    const/4 v0, 0x0

    :try_start_0
    invoke-static {v0}, Lcom/kwad/sdk/utils/p;->db(I)Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Lcom/kwad/sdk/core/a/c;->AL()Lcom/kwad/sdk/core/a/c$a;

    move-result-object v1

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/a/c$a;->decode([B)[B

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/a/b;->a(Ljava/lang/String;[B)[B

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/a/b;->g([B)[B

    move-result-object v0

    new-instance v1, Ljava/lang/String;

    const-string v2, "UTF-8"

    invoke-direct {v1, v0, v2}, Ljava/lang/String;-><init>([BLjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v1

    :catch_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    return-object p1
.end method
