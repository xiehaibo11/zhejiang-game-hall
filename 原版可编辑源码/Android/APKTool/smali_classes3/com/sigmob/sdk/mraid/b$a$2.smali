.class Lcom/sigmob/sdk/mraid/b$a$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/mraid/b$a;->postMessage(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/sigmob/sdk/mraid/b;

.field final synthetic c:Lcom/sigmob/sdk/mraid/b$a;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid/b$a;Ljava/lang/String;Lcom/sigmob/sdk/mraid/b;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/b$a$2;->c:Lcom/sigmob/sdk/mraid/b$a;

    iput-object p2, p0, Lcom/sigmob/sdk/mraid/b$a$2;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/sigmob/sdk/mraid/b$a$2;->b:Lcom/sigmob/sdk/mraid/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/b$a$2;->a:Ljava/lang/String;

    invoke-direct {v0, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v1, "event"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "subEvent"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "args"

    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    iget-object v3, p0, Lcom/sigmob/sdk/mraid/b$a$2;->b:Lcom/sigmob/sdk/mraid/b;

    invoke-static {v3, v1, v2, v0}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/mraid/b;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b$a$2;->b:Lcom/sigmob/sdk/mraid/b;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/b$a$2;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid/b;->e(Ljava/lang/String;)V

    return-void
.end method
