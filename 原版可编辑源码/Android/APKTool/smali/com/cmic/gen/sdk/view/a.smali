.class public Lcom/cmic/gen/sdk/view/a;
.super Ljava/lang/Object;
.source "LoginAuthParameter.java"


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 6
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a()Lorg/json/JSONObject;
    .locals 3

    .line 50
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "authPageOut"

    .line 52
    iget-object v2, p0, Lcom/cmic/gen/sdk/view/a;->b:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "authPageIn"

    .line 53
    iget-object v2, p0, Lcom/cmic/gen/sdk/view/a;->a:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "authClickSuccess"

    .line 55
    iget-object v2, p0, Lcom/cmic/gen/sdk/view/a;->d:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "timeOnAuthPage"

    .line 56
    iget-object v2, p0, Lcom/cmic/gen/sdk/view/a;->e:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "authClickFailed"

    .line 57
    iget-object v2, p0, Lcom/cmic/gen/sdk/view/a;->c:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "authPrivacyState"

    .line 58
    iget-object v2, p0, Lcom/cmic/gen/sdk/view/a;->f:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 60
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-object v0
.end method

.method public a(Ljava/lang/String;)V
    .locals 0

    .line 19
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/a;->f:Ljava/lang/String;

    return-void
.end method

.method public b(Ljava/lang/String;)V
    .locals 0

    .line 23
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/a;->c:Ljava/lang/String;

    return-void
.end method

.method public c(Ljava/lang/String;)V
    .locals 0

    .line 27
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/a;->d:Ljava/lang/String;

    return-void
.end method

.method public d(Ljava/lang/String;)V
    .locals 0

    .line 31
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/a;->e:Ljava/lang/String;

    return-void
.end method

.method public e(Ljava/lang/String;)V
    .locals 0

    .line 42
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/a;->a:Ljava/lang/String;

    return-void
.end method

.method public f(Ljava/lang/String;)V
    .locals 0

    .line 46
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/a;->b:Ljava/lang/String;

    return-void
.end method
