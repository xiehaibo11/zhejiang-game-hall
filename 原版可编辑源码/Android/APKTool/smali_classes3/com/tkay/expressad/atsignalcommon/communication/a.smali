.class public Lcom/tkay/expressad/atsignalcommon/communication/a;
.super Ljava/lang/Object;


# static fields
.field public static final a:Ljava/lang/String;

.field public static b:I

.field public static c:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 18
    const-class v0, Lcom/tkay/expressad/atsignalcommon/communication/a;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/atsignalcommon/communication/a;->a:Ljava/lang/String;

    const/4 v0, 0x0

    .line 20
    sput v0, Lcom/tkay/expressad/atsignalcommon/communication/a;->b:I

    const/4 v0, 0x1

    .line 21
    sput v0, Lcom/tkay/expressad/atsignalcommon/communication/a;->c:I

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 16
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(FF)Ljava/lang/String;
    .locals 4

    .line 78
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 80
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 81
    sget-object v2, Lcom/tkay/expressad/foundation/g/a;->cc:Ljava/lang/String;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3, p0}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;F)I

    move-result p0

    invoke-virtual {v1, v2, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 82
    sget-object p0, Lcom/tkay/expressad/foundation/g/a;->cd:Ljava/lang/String;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, p1}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;F)I

    move-result p1

    invoke-virtual {v1, p0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 83
    sget-object p0, Lcom/tkay/expressad/foundation/g/a;->cf:Ljava/lang/String;

    const/4 p1, 0x0

    invoke-virtual {v1, p0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 84
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object p0

    iget p0, p0, Landroid/content/res/Configuration;->orientation:I

    .line 85
    sget-object p1, Lcom/tkay/expressad/foundation/g/a;->cg:Ljava/lang/String;

    invoke-virtual {v1, p1, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 86
    sget-object p0, Lcom/tkay/expressad/foundation/g/a;->ch:Ljava/lang/String;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/t;->c(Landroid/content/Context;)F

    move-result p1

    float-to-double v2, p1

    invoke-virtual {v1, p0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    .line 88
    sget-object p0, Lcom/tkay/expressad/foundation/g/a;->ce:Ljava/lang/String;

    invoke-virtual {v0, p0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 90
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    .line 93
    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static a(I)Ljava/lang/String;
    .locals 3

    const-string v0, ""

    .line 99
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "code"

    .line 100
    invoke-virtual {v1, v2, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 101
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    .line 102
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 103
    invoke-virtual {p0}, Ljava/lang/String;->getBytes()[B

    move-result-object p0

    const/4 v1, 0x2

    invoke-static {p0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-object v0, p0

    :catchall_0
    :cond_0
    return-object v0
.end method

.method private static a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 2

    .line 43
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/tkay/expressad/atsignalcommon/communication/a$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/atsignalcommon/communication/a$1;-><init>(Lcom/tkay/expressad/foundation/d/c;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 68
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    return-void
.end method

.method private static a(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    .line 114
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "code"

    .line 115
    sget v2, Lcom/tkay/expressad/atsignalcommon/communication/a;->c:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "message"

    .line 116
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "data"

    .line 117
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 118
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p1

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, p0, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p0

    .line 120
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private static a(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 4

    const-string v0, "data"

    .line 25
    :try_start_0
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    if-nez p1, :cond_0

    const-string p1, "data is empty"

    .line 27
    invoke-static {p0, p1}, Lcom/tkay/expressad/atsignalcommon/communication/a;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 30
    :cond_0
    invoke-static {p1}, Lcom/tkay/expressad/foundation/d/c;->b(Lorg/json/JSONObject;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object p1

    if-nez p1, :cond_1

    const-string p1, "data camapign is empty"

    .line 32
    invoke-static {p0, p1}, Lcom/tkay/expressad/atsignalcommon/communication/a;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1043
    :cond_1
    new-instance v1, Ljava/lang/Thread;

    new-instance v2, Lcom/tkay/expressad/atsignalcommon/communication/a$1;

    invoke-direct {v2, p1}, Lcom/tkay/expressad/atsignalcommon/communication/a$1;-><init>(Lcom/tkay/expressad/foundation/d/c;)V

    invoke-direct {v1, v2}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 1068
    invoke-virtual {v1}, Ljava/lang/Thread;->start()V

    const-string p1, ""
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1126
    :try_start_1
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "code"

    .line 1127
    sget v3, Lcom/tkay/expressad/atsignalcommon/communication/a;->b:I

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 1128
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "id"

    .line 1129
    invoke-virtual {v2, v3, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1130
    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1131
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p1

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, p0, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :catch_0
    move-exception p1

    .line 1133
    :try_start_2
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/tkay/expressad/atsignalcommon/communication/a;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1134
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 38
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/tkay/expressad/atsignalcommon/communication/a;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 1

    .line 2072
    sget-object v0, Lcom/tkay/expressad/foundation/g/a/f;->n:Ljava/util/Map;

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "banner"

    .line 2073
    invoke-static {p0, p1, v0}, Lcom/tkay/expressad/foundation/g/a/f;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method private static b(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    .line 126
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "code"

    .line 127
    sget v2, Lcom/tkay/expressad/atsignalcommon/communication/a;->b:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 128
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "id"

    .line 129
    invoke-virtual {v1, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "data"

    .line 130
    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 131
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p1

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, p0, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 133
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/tkay/expressad/atsignalcommon/communication/a;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 134
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private static b(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 1

    .line 72
    sget-object v0, Lcom/tkay/expressad/foundation/g/a/f;->n:Ljava/util/Map;

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "banner"

    .line 73
    invoke-static {p0, p1, v0}, Lcom/tkay/expressad/foundation/g/a/f;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
