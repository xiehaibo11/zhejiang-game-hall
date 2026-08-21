.class public final Lcom/tkay/expressad/video/bt/a/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/video/bt/a/b$a;
    }
.end annotation


# static fields
.field private static final c:Ljava/lang/String; = "HandlerH5MessageManager"


# instance fields
.field a:I

.field b:I

.field private d:Ljava/lang/String;


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 22
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "handlerNativeResult"

    .line 17
    iput-object v0, p0, Lcom/tkay/expressad/video/bt/a/b;->d:Ljava/lang/String;

    const/4 v0, 0x0

    .line 19
    iput v0, p0, Lcom/tkay/expressad/video/bt/a/b;->a:I

    const/4 v0, 0x1

    .line 20
    iput v0, p0, Lcom/tkay/expressad/video/bt/a/b;->b:I

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    .line 13
    invoke-direct {p0}, Lcom/tkay/expressad/video/bt/a/b;-><init>()V

    return-void
.end method

.method public static a()Lcom/tkay/expressad/video/bt/a/b;
    .locals 1

    .line 30
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/b$a;->a()Lcom/tkay/expressad/video/bt/a/b;

    move-result-object v0

    return-object v0
.end method

.method private static a(ILjava/lang/String;Ljava/lang/Object;)V
    .locals 2

    .line 68
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "code"

    .line 69
    invoke-virtual {v0, v1, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p0, "message"

    .line 70
    invoke-virtual {v0, p0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 71
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    const/4 v0, 0x2

    invoke-static {p1, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p2, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p0

    .line 75
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void

    :catch_0
    move-exception p0

    .line 73
    invoke-virtual {p0}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 5

    .line 35
    :try_start_0
    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 36
    iget p2, p0, Lcom/tkay/expressad/video/bt/a/b;->b:I

    const-string v0, "params is null"

    invoke-static {p2, v0, p1}, Lcom/tkay/expressad/video/bt/a/b;->a(ILjava/lang/String;Ljava/lang/Object;)V

    return-void

    :cond_0
    const-string v0, "uniqueIdentifier"

    .line 39
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "name"

    .line 40
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 41
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_4

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    goto :goto_0

    :cond_1
    const-string v2, "parameters"

    .line 46
    invoke-virtual {p2, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    const-string v3, "result"

    .line 47
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-eqz p2, :cond_2

    .line 48
    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_2

    const-string v3, "type"

    const/4 v4, 0x0

    .line 49
    invoke-virtual {p2, v3, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    .line 51
    :cond_2
    iget p2, p0, Lcom/tkay/expressad/video/bt/a/b;->a:I

    const-string v3, "receivedMessage"

    invoke-static {p2, v3, p1}, Lcom/tkay/expressad/video/bt/a/b;->a(ILjava/lang/String;Ljava/lang/Object;)V

    const-string p2, "reporter"

    .line 52
    invoke-virtual {v0, p2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p2

    if-nez p2, :cond_3

    const-string p2, "MediaPlayer"

    .line 54
    invoke-virtual {v0, p2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_3

    .line 55
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/a;->a()Lcom/tkay/expressad/video/bt/a/a;

    move-result-object p2

    invoke-virtual {p2, p1, v1, v2}, Lcom/tkay/expressad/video/bt/a/a;->a(Ljava/lang/Object;Ljava/lang/String;Lorg/json/JSONArray;)V

    :cond_3
    return-void

    .line 42
    :cond_4
    :goto_0
    iget p2, p0, Lcom/tkay/expressad/video/bt/a/b;->b:I

    const-string v0, "module or method is null"

    invoke-static {p2, v0, p1}, Lcom/tkay/expressad/video/bt/a/b;->a(ILjava/lang/String;Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 61
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 62
    iget v0, p0, Lcom/tkay/expressad/video/bt/a/b;->b:I

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0, p2, p1}, Lcom/tkay/expressad/video/bt/a/b;->a(ILjava/lang/String;Ljava/lang/Object;)V

    return-void

    :catch_0
    move-exception p2

    .line 58
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    .line 59
    iget v0, p0, Lcom/tkay/expressad/video/bt/a/b;->b:I

    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0, p2, p1}, Lcom/tkay/expressad/video/bt/a/b;->a(ILjava/lang/String;Ljava/lang/Object;)V

    return-void
.end method
