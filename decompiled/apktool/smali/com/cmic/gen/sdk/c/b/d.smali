.class public Lcom/cmic/gen/sdk/c/b/d;
.super Lcom/cmic/gen/sdk/c/b/g;
.source "GetPhoneNubmerNotify.java"


# instance fields
.field private final a:Ljava/lang/String;

.field private final b:Ljava/lang/String;

.field private final c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 23
    invoke-direct {p0}, Lcom/cmic/gen/sdk/c/b/g;-><init>()V

    const-string v0, "authz"

    .line 20
    iput-object v0, p0, Lcom/cmic/gen/sdk/c/b/d;->d:Ljava/lang/String;

    .line 24
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/b/d;->a:Ljava/lang/String;

    .line 25
    iput-object p2, p0, Lcom/cmic/gen/sdk/c/b/d;->b:Ljava/lang/String;

    .line 26
    iput-object p3, p0, Lcom/cmic/gen/sdk/c/b/d;->c:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 1

    .line 39
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/b/d;->a:Ljava/lang/String;

    return-object v0
.end method

.method protected a_(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    const/4 p1, 0x0

    return-object p1
.end method

.method public b()Lorg/json/JSONObject;
    .locals 3

    .line 44
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "ver"

    .line 46
    iget-object v2, p0, Lcom/cmic/gen/sdk/c/b/d;->b:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "data"

    .line 47
    iget-object v2, p0, Lcom/cmic/gen/sdk/c/b/d;->c:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "userCapaid"

    .line 48
    iget-object v2, p0, Lcom/cmic/gen/sdk/c/b/d;->e:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "funcType"

    .line 49
    iget-object v2, p0, Lcom/cmic/gen/sdk/c/b/d;->d:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 51
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-object v0
.end method

.method public b(Ljava/lang/String;)V
    .locals 0

    .line 30
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/b/d;->d:Ljava/lang/String;

    return-void
.end method

.method public c(Ljava/lang/String;)V
    .locals 0

    .line 34
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/b/d;->e:Ljava/lang/String;

    return-void
.end method
