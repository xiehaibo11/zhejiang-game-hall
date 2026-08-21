.class public Lcom/loc/af;
.super Lcom/loc/r;
.source "BaseAAIDRequest.java"


# instance fields
.field public k:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0}, Lcom/loc/r;-><init>()V

    iput-object p1, p0, Lcom/loc/af;->k:Landroid/content/Context;

    const/16 p1, 0x1388

    invoke-virtual {p0, p1}, Lcom/loc/af;->a(I)V

    invoke-virtual {p0, p1}, Lcom/loc/af;->b(I)V

    return-void
.end method


# virtual methods
.method public final a()Ljava/util/Map;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v1, "Content-Type"

    const-string v2, "application/json"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "Accept-Encoding"

    const-string v2, "gzip"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "User-Agent"

    const-string v2, "AMAP SDK Android core 4.3.6"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    const-string v3, "4.3.6"

    aput-object v3, v1, v2

    const/4 v2, 0x1

    const-string v3, "core"

    aput-object v3, v1, v2

    const-string v2, "platform=Android&sdkversion=%s&product=%s"

    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "platinfo"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "logversion"

    const-string v2, "2.1"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object v0
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    invoke-static {}, Lcom/loc/q;->a()Lcom/loc/q;

    move-result-object v0

    invoke-virtual {v0}, Lcom/loc/q;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "https://restapi.amap.com/rest/aaid/get"

    return-object v0

    :cond_0
    const-string v0, "http://restapi.amap.com/rest/aaid/get"

    return-object v0
.end method

.method public final c_()Ljava/lang/String;
    .locals 1

    const-string v0, "core"

    return-object v0
.end method

.method public final e()Ljava/util/Map;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iget-object v1, p0, Lcom/loc/af;->k:Landroid/content/Context;

    invoke-static {v1}, Lcom/loc/l;->f(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "key"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/loc/n;->a()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/loc/af;->k:Landroid/content/Context;

    invoke-static {v0}, Lcom/loc/x;->b(Ljava/util/Map;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v1, v3}, Lcom/loc/n;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "ts"

    invoke-interface {v0, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "scode"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object v0
.end method
