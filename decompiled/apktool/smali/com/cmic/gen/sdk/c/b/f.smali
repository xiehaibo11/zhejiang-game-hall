.class public Lcom/cmic/gen/sdk/c/b/f;
.super Lcom/cmic/gen/sdk/c/b/g;
.source "LogReportParameter.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/cmic/gen/sdk/c/b/f$a;,
        Lcom/cmic/gen/sdk/c/b/f$b;
    }
.end annotation


# instance fields
.field private a:Lcom/cmic/gen/sdk/c/b/f$b;

.field private b:Lcom/cmic/gen/sdk/c/b/f$a;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 12
    invoke-direct {p0}, Lcom/cmic/gen/sdk/c/b/g;-><init>()V

    return-void
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 1

    .line 124
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/b/f;->a:Lcom/cmic/gen/sdk/c/b/f$b;

    invoke-static {v0}, Lcom/cmic/gen/sdk/c/b/f$b;->a(Lcom/cmic/gen/sdk/c/b/f$b;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public a(Lcom/cmic/gen/sdk/c/b/f$a;)V
    .locals 0

    .line 39
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/b/f;->b:Lcom/cmic/gen/sdk/c/b/f$a;

    return-void
.end method

.method public a(Lcom/cmic/gen/sdk/c/b/f$b;)V
    .locals 0

    .line 31
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/b/f;->a:Lcom/cmic/gen/sdk/c/b/f$b;

    return-void
.end method

.method protected a_(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    const/4 p1, 0x0

    return-object p1
.end method

.method public b()Lorg/json/JSONObject;
    .locals 5

    .line 128
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 129
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 130
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v3, "sign"

    .line 132
    iget-object v4, p0, Lcom/cmic/gen/sdk/c/b/f;->a:Lcom/cmic/gen/sdk/c/b/f$b;

    invoke-virtual {v4}, Lcom/cmic/gen/sdk/c/b/f$b;->d()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "msgid"

    .line 133
    iget-object v4, p0, Lcom/cmic/gen/sdk/c/b/f;->a:Lcom/cmic/gen/sdk/c/b/f$b;

    invoke-virtual {v4}, Lcom/cmic/gen/sdk/c/b/f$b;->e()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "systemtime"

    .line 134
    iget-object v4, p0, Lcom/cmic/gen/sdk/c/b/f;->a:Lcom/cmic/gen/sdk/c/b/f$b;

    invoke-virtual {v4}, Lcom/cmic/gen/sdk/c/b/f$b;->f()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "appid"

    .line 135
    iget-object v4, p0, Lcom/cmic/gen/sdk/c/b/f;->a:Lcom/cmic/gen/sdk/c/b/f$b;

    invoke-virtual {v4}, Lcom/cmic/gen/sdk/c/b/f$b;->a()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "version"

    .line 136
    iget-object v4, p0, Lcom/cmic/gen/sdk/c/b/f;->a:Lcom/cmic/gen/sdk/c/b/f$b;

    invoke-virtual {v4}, Lcom/cmic/gen/sdk/c/b/f$b;->c()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "header"

    .line 137
    invoke-virtual {v0, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "log"

    .line 138
    iget-object v3, p0, Lcom/cmic/gen/sdk/c/b/f;->b:Lcom/cmic/gen/sdk/c/b/f$a;

    invoke-virtual {v3}, Lcom/cmic/gen/sdk/c/b/f$a;->a()Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v2, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "body"

    .line 139
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 141
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-object v0
.end method
