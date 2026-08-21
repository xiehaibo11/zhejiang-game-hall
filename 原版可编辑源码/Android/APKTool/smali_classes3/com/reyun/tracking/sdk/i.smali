.class final Lcom/reyun/tracking/sdk/i;
.super Landroid/os/Handler;


# direct methods
.method constructor <init>(Landroid/os/Looper;)V
    .locals 0

    invoke-direct {p0, p1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 4

    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Lcom/reyun/tracking/utils/k;

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "from"

    const-string v2, "tkio"

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "data"

    new-instance v2, Lorg/json/JSONArray;

    iget-object v3, p1, Lcom/reyun/tracking/utils/k;->b:Ljava/lang/String;

    invoke-direct {v2, v3}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    new-instance v1, Lcom/reyun/tracking/sdk/j;

    invoke-direct {v1, p0, p1}, Lcom/reyun/tracking/sdk/j;-><init>(Lcom/reyun/tracking/sdk/i;Lcom/reyun/tracking/utils/k;)V

    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->access$000()Landroid/content/Context;

    move-result-object p1

    const-string v2, "batch"

    const-string v3, "receive/batch"

    invoke-static {p1, v2, v3, v0, v1}, Lcom/reyun/tracking/utils/d;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Lcom/reyun/tracking/utils/n;)V

    return-void
.end method
