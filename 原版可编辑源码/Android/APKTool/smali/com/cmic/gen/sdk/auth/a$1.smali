.class Lcom/cmic/gen/sdk/auth/a$1;
.super Ljava/lang/Object;
.source "AuthnBusiness.java"

# interfaces
.implements Lcom/cmic/gen/sdk/c/c/d;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/cmic/gen/sdk/auth/a;->b(Lcom/cmic/gen/sdk/a;Lcom/cmic/gen/sdk/auth/b;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/cmic/gen/sdk/a;

.field final synthetic b:Lcom/cmic/gen/sdk/auth/b;

.field final synthetic c:Lcom/cmic/gen/sdk/auth/a;


# direct methods
.method constructor <init>(Lcom/cmic/gen/sdk/auth/a;Lcom/cmic/gen/sdk/a;Lcom/cmic/gen/sdk/auth/b;)V
    .locals 0

    .line 101
    iput-object p1, p0, Lcom/cmic/gen/sdk/auth/a$1;->c:Lcom/cmic/gen/sdk/auth/a;

    iput-object p2, p0, Lcom/cmic/gen/sdk/auth/a$1;->a:Lcom/cmic/gen/sdk/a;

    iput-object p3, p0, Lcom/cmic/gen/sdk/auth/a$1;->b:Lcom/cmic/gen/sdk/auth/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 6

    .line 104
    iget-object v0, p0, Lcom/cmic/gen/sdk/auth/a$1;->c:Lcom/cmic/gen/sdk/auth/a;

    iget-object v1, p0, Lcom/cmic/gen/sdk/auth/a$1;->a:Lcom/cmic/gen/sdk/a;

    iget-object v2, p0, Lcom/cmic/gen/sdk/auth/a$1;->b:Lcom/cmic/gen/sdk/auth/b;

    move-object v3, p1

    move-object v4, p2

    move-object v5, p3

    invoke-static/range {v0 .. v5}, Lcom/cmic/gen/sdk/auth/a;->a(Lcom/cmic/gen/sdk/auth/a;Lcom/cmic/gen/sdk/a;Lcom/cmic/gen/sdk/auth/b;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method
