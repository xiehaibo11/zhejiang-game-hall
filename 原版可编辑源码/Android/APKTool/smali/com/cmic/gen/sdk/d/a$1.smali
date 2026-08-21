.class Lcom/cmic/gen/sdk/d/a$1;
.super Lcom/cmic/gen/sdk/e/n$a;
.source "EventUtils.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/cmic/gen/sdk/d/a;->a(Landroid/content/Context;Lcom/cmic/gen/sdk/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/cmic/gen/sdk/d/c;

.field final synthetic b:Lcom/cmic/gen/sdk/a;


# direct methods
.method constructor <init>(Lcom/cmic/gen/sdk/d/c;Lcom/cmic/gen/sdk/a;)V
    .locals 0

    .line 109
    iput-object p1, p0, Lcom/cmic/gen/sdk/d/a$1;->a:Lcom/cmic/gen/sdk/d/c;

    iput-object p2, p0, Lcom/cmic/gen/sdk/d/a$1;->b:Lcom/cmic/gen/sdk/a;

    invoke-direct {p0}, Lcom/cmic/gen/sdk/e/n$a;-><init>()V

    return-void
.end method


# virtual methods
.method protected a()V
    .locals 3

    .line 112
    new-instance v0, Lcom/cmic/gen/sdk/d/d;

    invoke-direct {v0}, Lcom/cmic/gen/sdk/d/d;-><init>()V

    iget-object v1, p0, Lcom/cmic/gen/sdk/d/a$1;->a:Lcom/cmic/gen/sdk/d/c;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/d/c;->b()Lorg/json/JSONObject;

    move-result-object v1

    iget-object v2, p0, Lcom/cmic/gen/sdk/d/a$1;->b:Lcom/cmic/gen/sdk/a;

    invoke-virtual {v0, v1, v2}, Lcom/cmic/gen/sdk/d/d;->a(Lorg/json/JSONObject;Lcom/cmic/gen/sdk/a;)V

    return-void
.end method
