.class public Lcom/cmic/gen/sdk/auth/c$a;
.super Ljava/lang/Object;
.source "AuthnHelperCore.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/cmic/gen/sdk/auth/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/cmic/gen/sdk/auth/c;

.field private final b:Lcom/cmic/gen/sdk/a;


# direct methods
.method constructor <init>(Lcom/cmic/gen/sdk/auth/c;Lcom/cmic/gen/sdk/a;)V
    .locals 0

    .line 211
    iput-object p1, p0, Lcom/cmic/gen/sdk/auth/c$a;->a:Lcom/cmic/gen/sdk/auth/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 212
    iput-object p2, p0, Lcom/cmic/gen/sdk/auth/c$a;->b:Lcom/cmic/gen/sdk/a;

    return-void
.end method


# virtual methods
.method public run()V
    .locals 5

    const-string v0, "200023"

    const-string v1, "\u767b\u5f55\u8d85\u65f6"

    .line 217
    invoke-static {v0, v1}, Lcom/cmic/gen/sdk/auth/d;->a(Ljava/lang/String;Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v2

    .line 218
    iget-object v3, p0, Lcom/cmic/gen/sdk/auth/c$a;->a:Lcom/cmic/gen/sdk/auth/c;

    const-string v4, "resultCode"

    invoke-virtual {v2, v4, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v4, "desc"

    invoke-virtual {v2, v4, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iget-object v4, p0, Lcom/cmic/gen/sdk/auth/c$a;->b:Lcom/cmic/gen/sdk/a;

    invoke-virtual {v3, v0, v1, v4, v2}, Lcom/cmic/gen/sdk/auth/c;->callBackResult(Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/a;Lorg/json/JSONObject;)V

    return-void
.end method
