.class public Lcom/sigmob/sdk/mraid2/j;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/mraid2/j$a;
    }
.end annotation


# static fields
.field private static a:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private b:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/sigmob/sdk/mraid2/j$a;",
            ">;"
        }
    .end annotation
.end field

.field private c:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/sigmob/sdk/mraid2/j$a;",
            ">;"
        }
    .end annotation
.end field

.field private d:Landroid/content/Context;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/mraid2/j;->a:Ljava/util/Map;

    return-void
.end method

.method constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/mraid2/j;->b:Ljava/util/Map;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/mraid2/j;->c:Ljava/util/Map;

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/j;->d:Landroid/content/Context;

    return-void
.end method


# virtual methods
.method public a(ILjava/lang/String;)Ljava/lang/String;
    .locals 2

    const-string v0, ""

    const/4 v1, 0x1

    if-ne p1, v1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/j;->d:Landroid/content/Context;

    invoke-static {p1, p2, v0}, Lcom/sigmob/sdk/mraid2/h;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    return-object p1

    :cond_0
    sget-object p1, Lcom/sigmob/sdk/mraid2/j;->a:Ljava/util/Map;

    invoke-interface {p1, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    if-nez p1, :cond_1

    goto :goto_0

    :cond_1
    sget-object p1, Lcom/sigmob/sdk/mraid2/j;->a:Ljava/util/Map;

    invoke-interface {p1, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    move-object v0, p1

    check-cast v0, Ljava/lang/String;

    :goto_0
    return-object v0
.end method

.method public a(I)V
    .locals 8

    const-string v0, "oldValue"

    const-string v1, ""

    const-string v2, "newValue"

    const-string v3, "key"

    const/4 v4, 0x1

    if-ne p1, v4, :cond_2

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/j;->d:Landroid/content/Context;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/h;->a(Landroid/content/Context;)Ljava/util/Map;

    move-result-object p1

    if-eqz p1, :cond_1

    invoke-interface {p1}, Ljava/util/Map;->size()I

    move-result v4

    if-lez v4, :cond_1

    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/Map$Entry;

    iget-object v5, p0, Lcom/sigmob/sdk/mraid2/j;->b:Ljava/util/Map;

    invoke-interface {v4}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v6

    invoke-interface {v5, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/sigmob/sdk/mraid2/j$a;

    if-eqz v5, :cond_0

    new-instance v6, Lorg/json/JSONObject;

    invoke-direct {v6}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    invoke-interface {v4}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v7

    invoke-virtual {v6, v3, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v6, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-interface {v4}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {v6, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v4

    invoke-virtual {v4}, Lorg/json/JSONException;->printStackTrace()V

    :goto_1
    invoke-interface {v5, v6}, Lcom/sigmob/sdk/mraid2/j$a;->a(Lorg/json/JSONObject;)V

    goto :goto_0

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/j;->d:Landroid/content/Context;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/h;->b(Landroid/content/Context;)V

    goto :goto_4

    :cond_2
    sget-object p1, Lcom/sigmob/sdk/mraid2/j;->a:Ljava/util/Map;

    if-eqz p1, :cond_5

    invoke-interface {p1}, Ljava/util/Map;->size()I

    move-result p1

    if-lez p1, :cond_5

    sget-object p1, Lcom/sigmob/sdk/mraid2/j;->a:Ljava/util/Map;

    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_3
    :goto_2
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_4

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/Map$Entry;

    iget-object v5, p0, Lcom/sigmob/sdk/mraid2/j;->c:Ljava/util/Map;

    invoke-interface {v4}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v6

    invoke-interface {v5, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/sigmob/sdk/mraid2/j$a;

    if-eqz v5, :cond_3

    new-instance v6, Lorg/json/JSONObject;

    invoke-direct {v6}, Lorg/json/JSONObject;-><init>()V

    :try_start_1
    invoke-interface {v4}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v7

    invoke-virtual {v6, v3, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v6, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-interface {v4}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {v6, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_3

    :catch_1
    move-exception v4

    invoke-virtual {v4}, Lorg/json/JSONException;->printStackTrace()V

    :goto_3
    invoke-interface {v5, v6}, Lcom/sigmob/sdk/mraid2/j$a;->a(Lorg/json/JSONObject;)V

    goto :goto_2

    :cond_4
    sget-object p1, Lcom/sigmob/sdk/mraid2/j;->a:Ljava/util/Map;

    invoke-interface {p1}, Ljava/util/Map;->clear()V

    :cond_5
    :goto_4
    return-void
.end method

.method public a(ILjava/lang/String;Lcom/sigmob/sdk/mraid2/j$a;)V
    .locals 1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/j;->b:Ljava/util/Map;

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/j;->c:Ljava/util/Map;

    :goto_0
    invoke-interface {p1, p2, p3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public a(ILjava/lang/String;Ljava/lang/String;)V
    .locals 5

    const-string v0, "oldValue"

    const-string v1, "newValue"

    const-string v2, "key"

    const-string v3, ""

    const/4 v4, 0x1

    if-ne p1, v4, :cond_1

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/j;->d:Landroid/content/Context;

    invoke-static {p1, p2, v3}, Lcom/sigmob/sdk/mraid2/h;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    invoke-virtual {p1, p3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_0

    iget-object v3, p0, Lcom/sigmob/sdk/mraid2/j;->b:Ljava/util/Map;

    invoke-interface {v3, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/sigmob/sdk/mraid2/j$a;

    if-eqz v3, :cond_0

    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    invoke-virtual {v4, v2, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v4, v1, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v4, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    invoke-interface {v3, v4}, Lcom/sigmob/sdk/mraid2/j$a;->a(Lorg/json/JSONObject;)V

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/j;->d:Landroid/content/Context;

    invoke-static {p1, p2, p3}, Lcom/sigmob/sdk/mraid2/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    goto :goto_3

    :cond_1
    sget-object p1, Lcom/sigmob/sdk/mraid2/j;->a:Ljava/util/Map;

    invoke-interface {p1, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    if-nez p1, :cond_2

    goto :goto_1

    :cond_2
    sget-object p1, Lcom/sigmob/sdk/mraid2/j;->a:Ljava/util/Map;

    invoke-interface {p1, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    move-object v3, p1

    check-cast v3, Ljava/lang/String;

    :goto_1
    invoke-virtual {v3, p3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_3

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/j;->c:Ljava/util/Map;

    invoke-interface {p1, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/sigmob/sdk/mraid2/j$a;

    if-eqz p1, :cond_3

    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    :try_start_1
    invoke-virtual {v4, v2, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v4, v1, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v4, v0, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_2

    :catch_1
    move-exception v0

    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    :goto_2
    invoke-interface {p1, v4}, Lcom/sigmob/sdk/mraid2/j$a;->a(Lorg/json/JSONObject;)V

    :cond_3
    sget-object p1, Lcom/sigmob/sdk/mraid2/j;->a:Ljava/util/Map;

    invoke-interface {p1, p2, p3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :goto_3
    return-void
.end method

.method public b(I)I
    .locals 1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/j;->d:Landroid/content/Context;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/h;->a(Landroid/content/Context;)Ljava/util/Map;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Map;->size()I

    move-result p1

    return p1

    :cond_0
    sget-object p1, Lcom/sigmob/sdk/mraid2/j;->a:Ljava/util/Map;

    goto :goto_0
.end method

.method public b(ILjava/lang/String;)V
    .locals 6

    const-string v0, "oldValue"

    const-string v1, "newValue"

    const-string v2, "key"

    const-string v3, ""

    const/4 v4, 0x1

    if-ne p1, v4, :cond_1

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/j;->d:Landroid/content/Context;

    invoke-static {p1, p2, v3}, Lcom/sigmob/sdk/mraid2/h;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    iget-object v4, p0, Lcom/sigmob/sdk/mraid2/j;->b:Ljava/util/Map;

    invoke-interface {v4, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/sigmob/sdk/mraid2/j$a;

    if-eqz v4, :cond_0

    new-instance v5, Lorg/json/JSONObject;

    invoke-direct {v5}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    invoke-virtual {v5, v2, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v5, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v5, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    invoke-interface {v4, v5}, Lcom/sigmob/sdk/mraid2/j$a;->a(Lorg/json/JSONObject;)V

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/j;->d:Landroid/content/Context;

    invoke-static {p1, p2}, Lcom/sigmob/sdk/mraid2/h;->b(Landroid/content/Context;Ljava/lang/String;)V

    goto :goto_2

    :cond_1
    sget-object p1, Lcom/sigmob/sdk/mraid2/j;->a:Ljava/util/Map;

    invoke-interface {p1, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_2

    iget-object v4, p0, Lcom/sigmob/sdk/mraid2/j;->c:Ljava/util/Map;

    invoke-interface {v4, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/sigmob/sdk/mraid2/j$a;

    if-eqz v4, :cond_2

    new-instance v5, Lorg/json/JSONObject;

    invoke-direct {v5}, Lorg/json/JSONObject;-><init>()V

    :try_start_1
    invoke-virtual {v5, v2, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v5, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v5, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_1
    invoke-interface {v4, v5}, Lcom/sigmob/sdk/mraid2/j$a;->a(Lorg/json/JSONObject;)V

    :cond_2
    sget-object p1, Lcom/sigmob/sdk/mraid2/j;->a:Ljava/util/Map;

    invoke-interface {p1, p2}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :goto_2
    return-void
.end method
