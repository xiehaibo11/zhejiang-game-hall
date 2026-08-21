.class public Lcom/tkay/basead/g/e;
.super Lcom/tkay/core/common/h/a;


# static fields
.field private static f:Ljava/lang/String;


# instance fields
.field a:I

.field b:Ljava/lang/String;

.field c:Lcom/tkay/core/common/f/z;

.field d:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field e:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 33
    const-class v0, Lcom/tkay/basead/g/e;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/basead/g/e;->f:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(ILjava/lang/String;Lcom/tkay/core/common/f/z;Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/f/z;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 42
    invoke-direct {p0}, Lcom/tkay/core/common/h/a;-><init>()V

    const/4 v0, 0x0

    .line 40
    iput-boolean v0, p0, Lcom/tkay/basead/g/e;->e:Z

    .line 43
    iput p1, p0, Lcom/tkay/basead/g/e;->a:I

    .line 44
    iput-object p2, p0, Lcom/tkay/basead/g/e;->b:Ljava/lang/String;

    .line 45
    iput-object p3, p0, Lcom/tkay/basead/g/e;->c:Lcom/tkay/core/common/f/z;

    .line 46
    iput-object p4, p0, Lcom/tkay/basead/g/e;->d:Ljava/util/Map;

    return-void
.end method

.method private p()V
    .locals 5

    .line 168
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-virtual {p0}, Lcom/tkay/basead/g/e;->c()Ljava/util/Map;

    move-result-object v1

    invoke-direct {v0, v1}, Lorg/json/JSONObject;-><init>(Ljava/util/Map;)V

    .line 169
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 171
    :catchall_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    .line 176
    :goto_0
    invoke-static {}, Lcom/tkay/core/common/t;->a()Lcom/tkay/core/common/t;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/basead/g/e;->o:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/basead/g/e;->c:Lcom/tkay/core/common/f/z;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/z;->O()J

    move-result-wide v3

    invoke-virtual {v1, v2, v0, v3, v4}, Lcom/tkay/core/common/t;->a(Ljava/lang/String;Ljava/lang/String;J)V

    return-void
.end method


# virtual methods
.method protected final a()I
    .locals 1

    const/4 v0, 0x2

    return v0
.end method

.method protected final a(Ljava/lang/String;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/lang/Object;"
        }
    .end annotation

    const/4 p1, 0x0

    return-object p1
.end method

.method protected final a(Lcom/tkay/core/api/AdError;)V
    .locals 0

    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 50
    iput-boolean p1, p0, Lcom/tkay/basead/g/e;->e:Z

    return-void
.end method

.method protected final a(I)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method protected final b()Ljava/lang/String;
    .locals 6

    .line 61
    iget-object v0, p0, Lcom/tkay/basead/g/e;->d:Ljava/util/Map;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/basead/g/e;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 63
    :try_start_0
    iget-object v0, p0, Lcom/tkay/basead/g/e;->d:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    .line 65
    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 66
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 67
    iget-object v3, p0, Lcom/tkay/basead/g/e;->b:Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "\\{"

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "\\}"

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v3, v2, v1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/basead/g/e;->b:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 70
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 73
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/g/e;->b:Ljava/lang/String;

    return-object v0
.end method

.method protected final b(I)V
    .locals 4

    .line 152
    iget-boolean v0, p0, Lcom/tkay/basead/g/e;->e:Z

    if-eqz v0, :cond_0

    .line 153
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "handleErrorStatusCode, start to check, url: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/basead/g/e;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 155
    invoke-static {}, Lcom/tkay/core/common/t;->a()Lcom/tkay/core/common/t;

    invoke-static {p1}, Lcom/tkay/core/common/t;->a(I)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 1168
    :try_start_0
    new-instance p1, Lorg/json/JSONObject;

    invoke-virtual {p0}, Lcom/tkay/basead/g/e;->c()Ljava/util/Map;

    move-result-object v0

    invoke-direct {p1, v0}, Lorg/json/JSONObject;-><init>(Ljava/util/Map;)V

    .line 1169
    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 1171
    :catchall_0
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    .line 1176
    :goto_0
    invoke-static {}, Lcom/tkay/core/common/t;->a()Lcom/tkay/core/common/t;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/g/e;->o:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/basead/g/e;->c:Lcom/tkay/core/common/f/z;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/z;->O()J

    move-result-wide v2

    invoke-virtual {v0, v1, p1, v2, v3}, Lcom/tkay/core/common/t;->a(Ljava/lang/String;Ljava/lang/String;J)V

    :cond_0
    return-void
.end method

.method protected final b(Lcom/tkay/core/api/AdError;)V
    .locals 0

    return-void
.end method

.method protected final c()Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 78
    iget-object v0, p0, Lcom/tkay/basead/g/e;->c:Lcom/tkay/core/common/f/z;

    if-eqz v0, :cond_1

    .line 79
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 81
    iget-object v1, p0, Lcom/tkay/basead/g/e;->c:Lcom/tkay/core/common/f/z;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/z;->k()Lcom/tkay/core/common/f/j;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 83
    iget v2, p0, Lcom/tkay/basead/g/e;->a:I

    invoke-static {v2, v1}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/j;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 84
    invoke-static {}, Lcom/tkay/core/common/l/d;->i()Ljava/lang/String;

    move-result-object v1

    .line 85
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    const-string v2, "User-Agent"

    .line 86
    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-object v0

    :cond_1
    const/4 v0, 0x0

    return-object v0
.end method

.method protected final d()[B
    .locals 1

    const/4 v0, 0x0

    new-array v0, v0, [B

    return-object v0
.end method

.method protected final g()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method protected final h()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method protected final i()Landroid/content/Context;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method protected final j()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method protected final k()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method protected final l()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    return-object v0
.end method
