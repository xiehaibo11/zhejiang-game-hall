.class public Lcom/cmic/gen/sdk/c/b/b;
.super Lcom/cmic/gen/sdk/c/b/g;
.source "GetConfigParameter.java"


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:Ljava/lang/String;

.field private g:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 13
    invoke-direct {p0}, Lcom/cmic/gen/sdk/c/b/g;-><init>()V

    return-void
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 1

    .line 24
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/b/b;->f:Ljava/lang/String;

    return-object v0
.end method

.method protected a_(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 47
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v0, p0, Lcom/cmic/gen/sdk/c/b/b;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/cmic/gen/sdk/c/b/b;->e:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/cmic/gen/sdk/c/b/b;->f:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "iYm0HAnkxQtpvN44"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public b()Lorg/json/JSONObject;
    .locals 3

    .line 29
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "version"

    .line 31
    iget-object v2, p0, Lcom/cmic/gen/sdk/c/b/b;->a:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "apptype"

    .line 32
    iget-object v2, p0, Lcom/cmic/gen/sdk/c/b/b;->b:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "phone_ID"

    .line 33
    iget-object v2, p0, Lcom/cmic/gen/sdk/c/b/b;->c:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "certflag"

    .line 34
    iget-object v2, p0, Lcom/cmic/gen/sdk/c/b/b;->d:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "sdkversion"

    .line 35
    iget-object v2, p0, Lcom/cmic/gen/sdk/c/b/b;->e:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "appid"

    .line 36
    iget-object v2, p0, Lcom/cmic/gen/sdk/c/b/b;->f:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "expandparams"

    const-string v2, ""

    .line 37
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "sign"

    .line 38
    iget-object v2, p0, Lcom/cmic/gen/sdk/c/b/b;->g:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 40
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-object v0
.end method

.method public b(Ljava/lang/String;)V
    .locals 0

    .line 51
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/b/b;->a:Ljava/lang/String;

    return-void
.end method

.method public c(Ljava/lang/String;)V
    .locals 0

    .line 55
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/b/b;->b:Ljava/lang/String;

    return-void
.end method

.method public d(Ljava/lang/String;)V
    .locals 0

    .line 59
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/b/b;->c:Ljava/lang/String;

    return-void
.end method

.method public e(Ljava/lang/String;)V
    .locals 0

    .line 63
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/b/b;->d:Ljava/lang/String;

    return-void
.end method

.method public f(Ljava/lang/String;)V
    .locals 0

    .line 67
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/b/b;->e:Ljava/lang/String;

    return-void
.end method

.method public g(Ljava/lang/String;)V
    .locals 0

    .line 71
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/b/b;->f:Ljava/lang/String;

    return-void
.end method

.method public h(Ljava/lang/String;)V
    .locals 0

    .line 79
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/b/b;->g:Ljava/lang/String;

    return-void
.end method
