.class public Lcom/igexin/push/core/a/i;
.super Lcom/igexin/push/core/a/a;


# static fields
.field private static final a:Ljava/lang/String;

.field private static b:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/igexin/push/core/a/b;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    sget-object v0, Lcom/igexin/push/config/i;->a:Ljava/lang/String;

    sput-object v0, Lcom/igexin/push/core/a/i;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 3

    invoke-direct {p0}, Lcom/igexin/push/core/a/a;-><init>()V

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/igexin/push/core/a/i;->b:Ljava/util/Map;

    new-instance v1, Lcom/igexin/push/core/a/q;

    invoke-direct {v1}, Lcom/igexin/push/core/a/q;-><init>()V

    const-string v2, "redirect_server"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/igexin/push/core/a/i;->b:Ljava/util/Map;

    new-instance v1, Lcom/igexin/push/core/a/t;

    invoke-direct {v1}, Lcom/igexin/push/core/a/t;-><init>()V

    const-string v2, "response_deviceid"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/igexin/push/core/a/i;->b:Ljava/util/Map;

    new-instance v1, Lcom/igexin/push/core/a/o;

    invoke-direct {v1}, Lcom/igexin/push/core/a/o;-><init>()V

    const-string v2, "pushmessage"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/igexin/push/core/a/i;->b:Ljava/util/Map;

    new-instance v1, Lcom/igexin/push/core/a/p;

    invoke-direct {v1}, Lcom/igexin/push/core/a/p;-><init>()V

    const-string v2, "received"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/igexin/push/core/a/i;->b:Ljava/util/Map;

    new-instance v1, Lcom/igexin/push/core/a/u;

    invoke-direct {v1}, Lcom/igexin/push/core/a/u;-><init>()V

    const-string v2, "sendmessage_feedback"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/igexin/push/core/a/i;->b:Ljava/util/Map;

    new-instance v1, Lcom/igexin/push/core/a/d;

    invoke-direct {v1}, Lcom/igexin/push/core/a/d;-><init>()V

    const-string v2, "block_client"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/igexin/push/core/a/i;->b:Ljava/util/Map;

    new-instance v1, Lcom/igexin/push/core/a/v;

    invoke-direct {v1}, Lcom/igexin/push/core/a/v;-><init>()V

    const-string v2, "settag_result"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/igexin/push/core/a/i;->b:Ljava/util/Map;

    new-instance v1, Lcom/igexin/push/core/a/c;

    invoke-direct {v1}, Lcom/igexin/push/core/a/c;-><init>()V

    const-string v2, "response_bind"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/igexin/push/core/a/i;->b:Ljava/util/Map;

    new-instance v1, Lcom/igexin/push/core/a/w;

    invoke-direct {v1}, Lcom/igexin/push/core/a/w;-><init>()V

    const-string v2, "response_unbind"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method


# virtual methods
.method public a(Lcom/igexin/b/a/d/e;)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method public a(Ljava/lang/Object;)Z
    .locals 4

    const-string v0, "id"

    instance-of v1, p1, Lcom/igexin/push/d/c/m;

    if-eqz v1, :cond_1

    move-object v1, p1

    check-cast v1, Lcom/igexin/push/d/c/m;

    invoke-virtual {v1}, Lcom/igexin/push/d/c/m;->b()Z

    move-result v2

    if-eqz v2, :cond_1

    iget-object v2, v1, Lcom/igexin/push/d/c/m;->e:Ljava/lang/Object;

    if-eqz v2, :cond_1

    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    iget-object v1, v1, Lcom/igexin/push/d/c/m;->e:Ljava/lang/Object;

    check-cast v1, Ljava/lang/String;

    invoke-direct {v2, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v1, "action"

    invoke-virtual {v2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v3, "received"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_0

    const-string v3, "redirect_server"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_0

    invoke-virtual {v2, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-virtual {v2, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object v3

    invoke-virtual {v3, v0}, Lcom/igexin/push/core/a/e;->a(Ljava/lang/String;)V

    :cond_0
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    sget-object v0, Lcom/igexin/push/core/a/i;->b:Ljava/util/Map;

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/igexin/push/core/a/b;

    if-eqz v0, :cond_1

    invoke-virtual {v0, p1, v2}, Lcom/igexin/push/core/a/b;->a(Ljava/lang/Object;Lorg/json/JSONObject;)Z

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    :cond_1
    const/4 p1, 0x0

    return p1
.end method
