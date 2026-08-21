.class public Lcom/cmic/gen/sdk/c/c/c;
.super Ljava/lang/Object;
.source "HttpRequest.java"


# instance fields
.field a:Ljava/lang/String;

.field private final b:Ljava/lang/String;

.field private final c:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private final d:Ljava/lang/String;

.field private e:Z

.field private final f:Ljava/lang/String;

.field private g:Landroid/net/Network;

.field private h:J

.field private final i:Ljava/lang/String;

.field private j:I

.field private final k:Lcom/cmic/gen/sdk/c/b/g;


# direct methods
.method public constructor <init>(Ljava/lang/String;Lcom/cmic/gen/sdk/c/b/g;Ljava/lang/String;Ljava/lang/String;)V
    .locals 6

    const/4 v2, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v3, p2

    move-object v4, p3

    move-object v5, p4

    .line 52
    invoke-direct/range {v0 .. v5}, Lcom/cmic/gen/sdk/c/c/c;-><init>(Ljava/lang/String;Ljava/util/Map;Lcom/cmic/gen/sdk/c/b/g;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;Ljava/util/Map;Lcom/cmic/gen/sdk/c/b/g;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Lcom/cmic/gen/sdk/c/b/g;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    .line 40
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 27
    iput-boolean v0, p0, Lcom/cmic/gen/sdk/c/c/c;->e:Z

    .line 41
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/c/c;->b:Ljava/lang/String;

    .line 42
    iput-object p3, p0, Lcom/cmic/gen/sdk/c/c/c;->k:Lcom/cmic/gen/sdk/c/b/g;

    if-nez p2, :cond_0

    .line 43
    new-instance p2, Ljava/util/HashMap;

    invoke-direct {p2}, Ljava/util/HashMap;-><init>()V

    :cond_0
    iput-object p2, p0, Lcom/cmic/gen/sdk/c/c/c;->c:Ljava/util/Map;

    const-string p1, ""

    if-nez p3, :cond_1

    move-object p2, p1

    goto :goto_0

    .line 44
    :cond_1
    invoke-virtual {p3}, Lcom/cmic/gen/sdk/c/b/g;->b()Lorg/json/JSONObject;

    move-result-object p2

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    :goto_0
    iput-object p2, p0, Lcom/cmic/gen/sdk/c/c/c;->a:Ljava/lang/String;

    .line 45
    iput-object p4, p0, Lcom/cmic/gen/sdk/c/c/c;->d:Ljava/lang/String;

    .line 46
    iput-object p5, p0, Lcom/cmic/gen/sdk/c/c/c;->f:Ljava/lang/String;

    if-nez p3, :cond_2

    goto :goto_1

    .line 47
    :cond_2
    invoke-virtual {p3}, Lcom/cmic/gen/sdk/c/b/g;->a()Ljava/lang/String;

    move-result-object p1

    :goto_1
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/c/c;->i:Ljava/lang/String;

    .line 48
    invoke-direct {p0}, Lcom/cmic/gen/sdk/c/c/c;->l()V

    return-void
.end method

.method private l()V
    .locals 3

    .line 60
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/c/c;->c:Ljava/util/Map;

    const-string v1, "sdkVersion"

    const-string v2, "quick_login_android_5.9.6"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 61
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/c/c;->c:Ljava/util/Map;

    const-string v1, "Content-Type"

    const-string v2, "application/json"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 63
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/c/c;->c:Ljava/util/Map;

    const-string v1, "CMCC-EncryptType"

    const-string v2, "STD"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 64
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/c/c;->c:Ljava/util/Map;

    iget-object v1, p0, Lcom/cmic/gen/sdk/c/c/c;->f:Ljava/lang/String;

    const-string v2, "traceId"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 65
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/c/c;->c:Ljava/util/Map;

    iget-object v1, p0, Lcom/cmic/gen/sdk/c/c/c;->i:Ljava/lang/String;

    const-string v2, "appid"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 66
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/c/c;->c:Ljava/util/Map;

    const-string v1, "connection"

    const-string v2, "Keep-Alive"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 1

    .line 74
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/c/c;->b:Ljava/lang/String;

    return-object v0
.end method

.method a(J)V
    .locals 0

    .line 114
    iput-wide p1, p0, Lcom/cmic/gen/sdk/c/c/c;->h:J

    return-void
.end method

.method public a(Landroid/net/Network;)V
    .locals 0

    .line 110
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/c/c;->g:Landroid/net/Network;

    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 70
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/c/c;->c:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method a(Z)V
    .locals 0

    .line 82
    iput-boolean p1, p0, Lcom/cmic/gen/sdk/c/c/c;->e:Z

    return-void
.end method

.method public b()Z
    .locals 1

    .line 78
    iget-boolean v0, p0, Lcom/cmic/gen/sdk/c/c/c;->e:Z

    return v0
.end method

.method public c()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 86
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/c/c;->c:Ljava/util/Map;

    return-object v0
.end method

.method public d()Ljava/lang/String;
    .locals 1

    .line 90
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/c/c;->a:Ljava/lang/String;

    return-object v0
.end method

.method public e()Ljava/lang/String;
    .locals 1

    .line 94
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/c/c;->d:Ljava/lang/String;

    return-object v0
.end method

.method public f()Ljava/lang/String;
    .locals 1

    .line 98
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/c/c;->f:Ljava/lang/String;

    return-object v0
.end method

.method public g()Z
    .locals 2

    .line 102
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/c/c;->f:Ljava/lang/String;

    invoke-static {v0}, Lcom/cmic/gen/sdk/e/e;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/cmic/gen/sdk/c/c/c;->b:Ljava/lang/String;

    const-string v1, "logReport"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/cmic/gen/sdk/c/c/c;->b:Ljava/lang/String;

    const-string v1, "uniConfig"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    return v0
.end method

.method public h()Landroid/net/Network;
    .locals 1

    .line 106
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/c/c;->g:Landroid/net/Network;

    return-object v0
.end method

.method i()J
    .locals 2

    .line 118
    iget-wide v0, p0, Lcom/cmic/gen/sdk/c/c/c;->h:J

    return-wide v0
.end method

.method public j()Z
    .locals 2

    .line 122
    iget v0, p0, Lcom/cmic/gen/sdk/c/c/c;->j:I

    add-int/lit8 v1, v0, 0x1

    iput v1, p0, Lcom/cmic/gen/sdk/c/c/c;->j:I

    const/4 v1, 0x2

    if-ge v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public k()Lcom/cmic/gen/sdk/c/b/g;
    .locals 1

    .line 126
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/c/c;->k:Lcom/cmic/gen/sdk/c/b/g;

    return-object v0
.end method
