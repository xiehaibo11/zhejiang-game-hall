.class Lcom/cmic/gen/sdk/auth/GenAuthnHelper$4;
.super Ljava/lang/Object;
.source "GenAuthnHelper.java"

# interfaces
.implements Lcom/cmic/gen/sdk/auth/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->a(Lcom/cmic/gen/sdk/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/cmic/gen/sdk/auth/c$a;

.field final synthetic b:Lcom/cmic/gen/sdk/auth/GenAuthnHelper;


# direct methods
.method constructor <init>(Lcom/cmic/gen/sdk/auth/GenAuthnHelper;Lcom/cmic/gen/sdk/auth/c$a;)V
    .locals 0

    .line 194
    iput-object p1, p0, Lcom/cmic/gen/sdk/auth/GenAuthnHelper$4;->b:Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    iput-object p2, p0, Lcom/cmic/gen/sdk/auth/GenAuthnHelper$4;->a:Lcom/cmic/gen/sdk/auth/c$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/a;Lorg/json/JSONObject;)V
    .locals 2

    const-string v0, "onBusinessComplete"

    .line 197
    invoke-static {v0, v0}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 198
    iget-object v0, p0, Lcom/cmic/gen/sdk/auth/GenAuthnHelper$4;->b:Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    iget-object v0, v0, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->d:Landroid/os/Handler;

    iget-object v1, p0, Lcom/cmic/gen/sdk/auth/GenAuthnHelper$4;->a:Lcom/cmic/gen/sdk/auth/c$a;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    const-string v0, "103000"

    .line 199
    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "traceId"

    .line 200
    invoke-virtual {p3, v0}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/cmic/gen/sdk/e/e;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 201
    iget-object p1, p0, Lcom/cmic/gen/sdk/auth/GenAuthnHelper$4;->b:Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    iget-object p1, p1, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->b:Landroid/content/Context;

    invoke-static {p1, p3}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->a(Landroid/content/Context;Lcom/cmic/gen/sdk/a;)V

    return-void

    .line 204
    :cond_0
    iget-object v0, p0, Lcom/cmic/gen/sdk/auth/GenAuthnHelper$4;->b:Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->callBackResult(Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/a;Lorg/json/JSONObject;)V

    return-void
.end method
