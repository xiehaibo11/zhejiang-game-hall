.class public Lcom/cmic/gen/sdk/c/b/e;
.super Lcom/cmic/gen/sdk/c/b/g;
.source "GetPrePhoneScripParameter.java"


# instance fields
.field private a:Lcom/cmic/gen/sdk/c/b/a;

.field private b:[B

.field private c:Ljava/lang/String;

.field private d:[B

.field private e:Ljava/lang/String;

.field private f:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 19
    invoke-direct {p0}, Lcom/cmic/gen/sdk/c/b/g;-><init>()V

    const/4 v0, 0x0

    .line 25
    iput-boolean v0, p0, Lcom/cmic/gen/sdk/c/b/e;->f:Z

    return-void
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 1

    .line 57
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/b/e;->a:Lcom/cmic/gen/sdk/c/b/a;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/c/b/a;->a()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public a(Lcom/cmic/gen/sdk/c/b/a;)V
    .locals 0

    .line 48
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/b/e;->a:Lcom/cmic/gen/sdk/c/b/a;

    return-void
.end method

.method public a(Z)V
    .locals 0

    .line 28
    iput-boolean p1, p0, Lcom/cmic/gen/sdk/c/b/e;->f:Z

    return-void
.end method

.method public a([B)V
    .locals 0

    .line 36
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/b/e;->b:[B

    return-void
.end method

.method protected a_(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    const/4 p1, 0x0

    return-object p1
.end method

.method public b()Lorg/json/JSONObject;
    .locals 5

    .line 62
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 63
    iget-boolean v1, p0, Lcom/cmic/gen/sdk/c/b/e;->f:Z

    if-eqz v1, :cond_0

    :try_start_0
    const-string v1, "encrypted"

    .line 65
    iget-object v2, p0, Lcom/cmic/gen/sdk/c/b/e;->c:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "encryptedIV"

    .line 66
    iget-object v2, p0, Lcom/cmic/gen/sdk/c/b/e;->d:[B

    const/4 v3, 0x0

    invoke-static {v2, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "reqdata"

    .line 70
    iget-object v2, p0, Lcom/cmic/gen/sdk/c/b/e;->b:[B

    iget-object v3, p0, Lcom/cmic/gen/sdk/c/b/e;->a:Lcom/cmic/gen/sdk/c/b/a;

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/cmic/gen/sdk/c/b/e;->d:[B

    invoke-static {v2, v3, v4}, Lcom/cmic/gen/sdk/e/a;->a([BLjava/lang/String;[B)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "securityreinforce"

    .line 72
    iget-object v2, p0, Lcom/cmic/gen/sdk/c/b/e;->e:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 75
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    :cond_0
    :goto_0
    return-object v0
.end method

.method public b(Ljava/lang/String;)V
    .locals 0

    .line 32
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/b/e;->e:Ljava/lang/String;

    return-void
.end method

.method public b([B)V
    .locals 0

    .line 44
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/b/e;->d:[B

    return-void
.end method

.method public c()Lcom/cmic/gen/sdk/c/b/a;
    .locals 1

    .line 52
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/b/e;->a:Lcom/cmic/gen/sdk/c/b/a;

    return-object v0
.end method

.method public c(Ljava/lang/String;)V
    .locals 0

    .line 40
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/b/e;->c:Ljava/lang/String;

    return-void
.end method
