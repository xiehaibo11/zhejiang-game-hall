.class Lcom/sigmob/sdk/mraid2/b$a$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/mraid2/j$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/mraid2/b$a;->storage(Ljava/lang/String;)Ljava/lang/String;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/mraid2/b$a;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid2/b$a;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/b$a$2;->a:Lcom/sigmob/sdk/mraid2/b$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Lorg/json/JSONObject;)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b$a$2;->a:Lcom/sigmob/sdk/mraid2/b$a;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid2/b$a;->a()Lcom/sigmob/sdk/mraid2/b;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b$a$2;->a:Lcom/sigmob/sdk/mraid2/b$a;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid2/b$a;->a()Lcom/sigmob/sdk/mraid2/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid2/b;->a()Lcom/sigmob/sdk/mraid2/e;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b$a$2;->a:Lcom/sigmob/sdk/mraid2/b$a;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid2/b$a;->a()Lcom/sigmob/sdk/mraid2/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid2/b;->a()Lcom/sigmob/sdk/mraid2/e;

    move-result-object v0

    new-instance v1, Lcom/sigmob/sdk/mraid2/b$a$2$1;

    invoke-direct {v1, p0, p1}, Lcom/sigmob/sdk/mraid2/b$a$2$1;-><init>(Lcom/sigmob/sdk/mraid2/b$a$2;Lorg/json/JSONObject;)V

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid2/e;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method
