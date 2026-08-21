.class public Lcom/cmic/gen/sdk/d/d;
.super Ljava/lang/Object;
.source "SendLog.java"


# instance fields
.field private a:Lcom/cmic/gen/sdk/a;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 27
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/cmic/gen/sdk/d/d;)Lcom/cmic/gen/sdk/a;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/cmic/gen/sdk/d/d;->a:Lcom/cmic/gen/sdk/a;

    return-object p0
.end method

.method private static a(Lcom/cmic/gen/sdk/d/b;Lcom/cmic/gen/sdk/a;)V
    .locals 8

    if-eqz p0, :cond_1

    if-nez p1, :cond_0

    goto/16 :goto_0

    :cond_0
    const-string v0, "appid"

    const-string v1, ""

    .line 35
    invoke-virtual {p1, v0, v1}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/cmic/gen/sdk/d/b;->b(Ljava/lang/String;)V

    .line 36
    invoke-static {}, Lcom/cmic/gen/sdk/e/m;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/cmic/gen/sdk/d/b;->e(Ljava/lang/String;)V

    const-string v0, "interfaceType"

    .line 37
    invoke-virtual {p1, v0, v1}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/cmic/gen/sdk/d/b;->h(Ljava/lang/String;)V

    const-string v0, "interfaceCode"

    .line 38
    invoke-virtual {p1, v0, v1}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/cmic/gen/sdk/d/b;->g(Ljava/lang/String;)V

    const-string v0, "interfaceElasped"

    .line 39
    invoke-virtual {p1, v0, v1}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/cmic/gen/sdk/d/b;->f(Ljava/lang/String;)V

    const-string v0, "timeOut"

    .line 40
    invoke-virtual {p1, v0}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/cmic/gen/sdk/d/b;->k(Ljava/lang/String;)V

    const-string v0, "traceId"

    .line 41
    invoke-virtual {p1, v0}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/cmic/gen/sdk/d/b;->r(Ljava/lang/String;)V

    const-string v2, "simCardNum"

    .line 42
    invoke-virtual {p1, v2}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/cmic/gen/sdk/d/b;->m(Ljava/lang/String;)V

    const-string v2, "operatortype"

    .line 43
    invoke-virtual {p1, v2}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v3}, Lcom/cmic/gen/sdk/d/b;->n(Ljava/lang/String;)V

    .line 44
    invoke-static {}, Lcom/cmic/gen/sdk/e/m;->b()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v3}, Lcom/cmic/gen/sdk/d/b;->o(Ljava/lang/String;)V

    .line 45
    invoke-static {}, Lcom/cmic/gen/sdk/e/m;->c()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v3}, Lcom/cmic/gen/sdk/d/b;->p(Ljava/lang/String;)V

    const/4 v3, 0x0

    const-string v4, "networktype"

    .line 46
    invoke-virtual {p1, v4, v3}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;I)I

    move-result v3

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v3}, Lcom/cmic/gen/sdk/d/b;->w(Ljava/lang/String;)V

    const-string v3, "starttime"

    .line 47
    invoke-virtual {p1, v3}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v3}, Lcom/cmic/gen/sdk/d/b;->s(Ljava/lang/String;)V

    const-string v3, "endtime"

    .line 48
    invoke-virtual {p1, v3}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v3}, Lcom/cmic/gen/sdk/d/b;->t(Ljava/lang/String;)V

    const-string v3, "systemEndTime"

    const-wide/16 v4, 0x0

    .line 49
    invoke-virtual {p1, v3, v4, v5}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;J)J

    move-result-wide v6

    const-string v3, "systemStartTime"

    invoke-virtual {p1, v3, v4, v5}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;J)J

    move-result-wide v3

    sub-long/2addr v6, v3

    invoke-static {v6, v7}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v3}, Lcom/cmic/gen/sdk/d/b;->l(Ljava/lang/String;)V

    const-string v3, "imsiState"

    .line 50
    invoke-virtual {p1, v3}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v3}, Lcom/cmic/gen/sdk/d/b;->c(Ljava/lang/String;)V

    const-string v3, "AID"

    .line 51
    invoke-static {v3, v1}, Lcom/cmic/gen/sdk/e/k;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Lcom/cmic/gen/sdk/d/b;->x(Ljava/lang/String;)V

    .line 52
    invoke-virtual {p1, v2}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Lcom/cmic/gen/sdk/d/b;->y(Ljava/lang/String;)V

    const-string v1, "scripType"

    .line 53
    invoke-virtual {p1, v1}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Lcom/cmic/gen/sdk/d/b;->z(Ljava/lang/String;)V

    const-string v1, "networkTypeByAPI"

    .line 54
    invoke-virtual {p1, v1}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Lcom/cmic/gen/sdk/d/b;->A(Ljava/lang/String;)V

    .line 55
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "SendLog"

    invoke-static {p1, p0}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method private a(Lorg/json/JSONObject;)V
    .locals 3

    .line 109
    invoke-static {}, Lcom/cmic/gen/sdk/c/c/a;->a()Lcom/cmic/gen/sdk/c/c/a;

    move-result-object v0

    iget-object v1, p0, Lcom/cmic/gen/sdk/d/d;->a:Lcom/cmic/gen/sdk/a;

    new-instance v2, Lcom/cmic/gen/sdk/d/d$1;

    invoke-direct {v2, p0}, Lcom/cmic/gen/sdk/d/d$1;-><init>(Lcom/cmic/gen/sdk/d/d;)V

    invoke-virtual {v0, p1, v1, v2}, Lcom/cmic/gen/sdk/c/c/a;->a(Lorg/json/JSONObject;Lcom/cmic/gen/sdk/a;Lcom/cmic/gen/sdk/c/c/d;)V

    return-void
.end method


# virtual methods
.method public a(Landroid/content/Context;Ljava/lang/String;Lcom/cmic/gen/sdk/a;)V
    .locals 10

    const-string v0, ""

    .line 61
    :try_start_0
    invoke-virtual {p3}, Lcom/cmic/gen/sdk/a;->a()Lcom/cmic/gen/sdk/d/b;

    move-result-object v1

    .line 62
    invoke-static {p1}, Lcom/cmic/gen/sdk/e/f;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    .line 63
    invoke-virtual {v1, p2}, Lcom/cmic/gen/sdk/d/b;->d(Ljava/lang/String;)V

    const-string p2, "loginMethod"

    .line 64
    invoke-virtual {p3, p2, v0}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v1, p2}, Lcom/cmic/gen/sdk/d/b;->u(Ljava/lang/String;)V

    const-string p2, "isCacheScrip"

    const/4 v3, 0x0

    .line 65
    invoke-virtual {p3, p2, v3}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Z)Z

    move-result p2

    if-eqz p2, :cond_0

    const-string p2, "scrip"

    .line 66
    invoke-virtual {v1, p2}, Lcom/cmic/gen/sdk/d/b;->q(Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const-string p2, "pgw"

    .line 68
    invoke-virtual {v1, p2}, Lcom/cmic/gen/sdk/d/b;->q(Ljava/lang/String;)V

    .line 70
    :goto_0
    invoke-static {p1}, Lcom/cmic/gen/sdk/e/f;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Lcom/cmic/gen/sdk/d/b;->i(Ljava/lang/String;)V

    .line 71
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_1

    goto :goto_1

    :cond_1
    move-object v0, v2

    :goto_1
    invoke-virtual {v1, v0}, Lcom/cmic/gen/sdk/d/b;->j(Ljava/lang/String;)V

    .line 72
    invoke-static {v1, p3}, Lcom/cmic/gen/sdk/d/d;->a(Lcom/cmic/gen/sdk/d/b;Lcom/cmic/gen/sdk/a;)V

    const/4 p1, 0x0

    .line 77
    iget-object p2, v1, Lcom/cmic/gen/sdk/d/b;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p2}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result p2

    if-lez p2, :cond_4

    .line 78
    new-instance p1, Lorg/json/JSONArray;

    invoke-direct {p1}, Lorg/json/JSONArray;-><init>()V

    .line 79
    iget-object p2, v1, Lcom/cmic/gen/sdk/d/b;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p2}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :goto_2
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Throwable;

    .line 80
    new-instance v2, Ljava/lang/StringBuffer;

    invoke-direct {v2}, Ljava/lang/StringBuffer;-><init>()V

    .line 81
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    .line 82
    invoke-virtual {v0}, Ljava/lang/Throwable;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object v5

    .line 83
    array-length v6, v5

    const/4 v7, 0x0

    :goto_3
    if-ge v7, v6, :cond_2

    aget-object v8, v5, v7

    const-string v9, "\n"

    .line 84
    invoke-virtual {v2, v9}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v8}, Ljava/lang/StackTraceElement;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v2, v8}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    add-int/lit8 v7, v7, 0x1

    goto :goto_3

    :cond_2
    const-string v5, "message"

    .line 86
    invoke-virtual {v0}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v4, v5, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "stack"

    .line 87
    invoke-virtual {v2}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 88
    invoke-virtual {p1, v4}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_2

    .line 90
    :cond_3
    iget-object p2, v1, Lcom/cmic/gen/sdk/d/b;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p2}, Ljava/util/concurrent/CopyOnWriteArrayList;->clear()V

    :cond_4
    if-eqz p1, :cond_5

    .line 92
    invoke-virtual {p1}, Lorg/json/JSONArray;->length()I

    move-result p2

    if-lez p2, :cond_5

    .line 93
    invoke-virtual {v1, p1}, Lcom/cmic/gen/sdk/d/b;->a(Lorg/json/JSONArray;)V

    :cond_5
    const-string p1, "SendLog"

    const-string p2, "\u767b\u5f55\u65e5\u5fd7"

    .line 95
    invoke-static {p1, p2}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 96
    invoke-virtual {v1}, Lcom/cmic/gen/sdk/d/b;->b()Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p0, p1, p3}, Lcom/cmic/gen/sdk/d/d;->a(Lorg/json/JSONObject;Lcom/cmic/gen/sdk/a;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_4

    :catch_0
    move-exception p1

    .line 98
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_4
    return-void
.end method

.method protected a(Lorg/json/JSONObject;Lcom/cmic/gen/sdk/a;)V
    .locals 0

    .line 103
    iput-object p2, p0, Lcom/cmic/gen/sdk/d/d;->a:Lcom/cmic/gen/sdk/a;

    .line 104
    invoke-direct {p0, p1}, Lcom/cmic/gen/sdk/d/d;->a(Lorg/json/JSONObject;)V

    return-void
.end method
