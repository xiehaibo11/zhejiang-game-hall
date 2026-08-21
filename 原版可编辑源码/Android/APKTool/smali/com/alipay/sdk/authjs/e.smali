.class Lcom/alipay/sdk/authjs/e;
.super Ljava/lang/Object;
.source "SourceFile"

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/alipay/sdk/authjs/a;

.field final synthetic b:Lcom/alipay/sdk/authjs/d;


# direct methods
.method constructor <init>(Lcom/alipay/sdk/authjs/d;Lcom/alipay/sdk/authjs/a;)V
    .locals 0

    .line 86
    iput-object p1, p0, Lcom/alipay/sdk/authjs/e;->b:Lcom/alipay/sdk/authjs/d;

    iput-object p2, p0, Lcom/alipay/sdk/authjs/e;->a:Lcom/alipay/sdk/authjs/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    .line 89
    iget-object v0, p0, Lcom/alipay/sdk/authjs/e;->b:Lcom/alipay/sdk/authjs/d;

    iget-object v1, p0, Lcom/alipay/sdk/authjs/e;->a:Lcom/alipay/sdk/authjs/a;

    invoke-static {v0, v1}, Lcom/alipay/sdk/authjs/d;->a(Lcom/alipay/sdk/authjs/d;Lcom/alipay/sdk/authjs/a;)Lcom/alipay/sdk/authjs/a$a;

    move-result-object v0

    .line 90
    sget-object v1, Lcom/alipay/sdk/authjs/a$a;->a:Lcom/alipay/sdk/authjs/a$a;

    if-eq v0, v1, :cond_0

    .line 92
    :try_start_0
    iget-object v1, p0, Lcom/alipay/sdk/authjs/e;->b:Lcom/alipay/sdk/authjs/d;

    iget-object v2, p0, Lcom/alipay/sdk/authjs/e;->a:Lcom/alipay/sdk/authjs/a;

    invoke-virtual {v2}, Lcom/alipay/sdk/authjs/a;->b()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x1

    invoke-static {v1, v2, v0, v3}, Lcom/alipay/sdk/authjs/d;->a(Lcom/alipay/sdk/authjs/d;Ljava/lang/String;Lcom/alipay/sdk/authjs/a$a;Z)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    return-void
.end method
