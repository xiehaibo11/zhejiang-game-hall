.class public Lcom/alipay/sdk/authjs/a;
.super Ljava/lang/Object;
.source "SourceFile"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/alipay/sdk/authjs/a$a;
    }
.end annotation


# static fields
.field public static final a:Ljava/lang/String; = "call"

.field public static final b:Ljava/lang/String; = "callback"

.field public static final c:Ljava/lang/String; = "bundleName"

.field public static final d:Ljava/lang/String; = "clientId"

.field public static final e:Ljava/lang/String; = "param"

.field public static final f:Ljava/lang/String; = "func"

.field public static final g:Ljava/lang/String; = "msgType"


# instance fields
.field private h:Ljava/lang/String;

.field private i:Ljava/lang/String;

.field private j:Ljava/lang/String;

.field private k:Ljava/lang/String;

.field private l:Lorg/json/JSONObject;

.field private m:Z


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 1

    .line 66
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 56
    iput-boolean v0, p0, Lcom/alipay/sdk/authjs/a;->m:Z

    .line 67
    invoke-virtual {p0, p1}, Lcom/alipay/sdk/authjs/a;->d(Ljava/lang/String;)V

    return-void
.end method

.method public static final a(Lcom/alipay/sdk/authjs/a$a;)Ljava/lang/String;
    .locals 1

    .line 28
    sget-object v0, Lcom/alipay/sdk/authjs/b;->a:[I

    invoke-virtual {p0}, Lcom/alipay/sdk/authjs/a$a;->ordinal()I

    move-result p0

    aget p0, v0, p0

    const/4 v0, 0x1

    if-eq p0, v0, :cond_2

    const/4 v0, 0x2

    if-eq p0, v0, :cond_1

    const/4 v0, 0x3

    if-eq p0, v0, :cond_0

    const-string p0, "none"

    goto :goto_0

    :cond_0
    const-string p0, "runtime error"

    goto :goto_0

    :cond_1
    const-string p0, "invalid parameter"

    goto :goto_0

    :cond_2
    const-string p0, "function not found"

    :goto_0
    return-object p0
.end method


# virtual methods
.method public a(Ljava/lang/String;)V
    .locals 0

    .line 75
    iput-object p1, p0, Lcom/alipay/sdk/authjs/a;->h:Ljava/lang/String;

    return-void
.end method

.method public a(Lorg/json/JSONObject;)V
    .locals 0

    .line 107
    iput-object p1, p0, Lcom/alipay/sdk/authjs/a;->l:Lorg/json/JSONObject;

    return-void
.end method

.method public a(Z)V
    .locals 0

    .line 63
    iput-boolean p1, p0, Lcom/alipay/sdk/authjs/a;->m:Z

    return-void
.end method

.method public a()Z
    .locals 1

    .line 59
    iget-boolean v0, p0, Lcom/alipay/sdk/authjs/a;->m:Z

    return v0
.end method

.method public b()Ljava/lang/String;
    .locals 1

    .line 71
    iget-object v0, p0, Lcom/alipay/sdk/authjs/a;->h:Ljava/lang/String;

    return-object v0
.end method

.method public b(Ljava/lang/String;)V
    .locals 0

    .line 83
    iput-object p1, p0, Lcom/alipay/sdk/authjs/a;->i:Ljava/lang/String;

    return-void
.end method

.method public c()Ljava/lang/String;
    .locals 1

    .line 79
    iget-object v0, p0, Lcom/alipay/sdk/authjs/a;->i:Ljava/lang/String;

    return-object v0
.end method

.method public c(Ljava/lang/String;)V
    .locals 0

    .line 91
    iput-object p1, p0, Lcom/alipay/sdk/authjs/a;->j:Ljava/lang/String;

    return-void
.end method

.method public d()Ljava/lang/String;
    .locals 1

    .line 87
    iget-object v0, p0, Lcom/alipay/sdk/authjs/a;->j:Ljava/lang/String;

    return-object v0
.end method

.method public d(Ljava/lang/String;)V
    .locals 0

    .line 99
    iput-object p1, p0, Lcom/alipay/sdk/authjs/a;->k:Ljava/lang/String;

    return-void
.end method

.method public e()Ljava/lang/String;
    .locals 1

    .line 95
    iget-object v0, p0, Lcom/alipay/sdk/authjs/a;->k:Ljava/lang/String;

    return-object v0
.end method

.method public f()Lorg/json/JSONObject;
    .locals 1

    .line 103
    iget-object v0, p0, Lcom/alipay/sdk/authjs/a;->l:Lorg/json/JSONObject;

    return-object v0
.end method

.method public g()Ljava/lang/String;
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 111
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 112
    iget-object v1, p0, Lcom/alipay/sdk/authjs/a;->h:Ljava/lang/String;

    const-string v2, "clientId"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 113
    iget-object v1, p0, Lcom/alipay/sdk/authjs/a;->j:Ljava/lang/String;

    const-string v2, "func"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 114
    iget-object v1, p0, Lcom/alipay/sdk/authjs/a;->l:Lorg/json/JSONObject;

    const-string v2, "param"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 115
    iget-object v1, p0, Lcom/alipay/sdk/authjs/a;->k:Ljava/lang/String;

    const-string v2, "msgType"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 116
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
