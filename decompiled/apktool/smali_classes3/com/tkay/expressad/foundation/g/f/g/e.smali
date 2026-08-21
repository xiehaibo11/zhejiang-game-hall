.class public Lcom/tkay/expressad/foundation/g/f/g/e;
.super Ljava/lang/Object;


# static fields
.field private static final a:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 12
    const-class v0, Lcom/tkay/expressad/foundation/g/f/g/e;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/foundation/g/f/g/e;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Ljava/util/List;)Ljava/lang/String;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/g/f/c/c;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    const-string v0, "Content-Type"

    .line 17
    invoke-static {p0, v0}, Lcom/tkay/expressad/foundation/g/f/g/e;->b(Ljava/util/List;Ljava/lang/String;)Lcom/tkay/expressad/foundation/g/f/c/c;

    move-result-object p0

    if-eqz p0, :cond_1

    .line 19
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/g/f/c/c;->b()Ljava/lang/String;

    move-result-object p0

    .line 20
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, ";"

    .line 21
    invoke-virtual {p0, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    const/4 v0, 0x1

    move v1, v0

    .line 22
    :goto_0
    array-length v2, p0

    if-ge v1, v2, :cond_1

    .line 23
    aget-object v2, p0, v1

    invoke-virtual {v2}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v2

    const-string v3, "="

    invoke-virtual {v2, v3}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v2

    .line 24
    array-length v3, v2

    const/4 v4, 0x2

    if-ne v3, v4, :cond_0

    const/4 v3, 0x0

    aget-object v3, v2, v3

    const-string v4, "charset"

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 25
    aget-object p0, v2, v0

    goto :goto_1

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    const-string p0, "UTF-8"

    :goto_1
    return-object p0
.end method

.method public static a(Ljava/util/List;Ljava/lang/String;)Ljava/lang/String;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/g/f/c/c;",
            ">;",
            "Ljava/lang/String;",
            ")",
            "Ljava/lang/String;"
        }
    .end annotation

    .line 53
    invoke-static {p0, p1}, Lcom/tkay/expressad/foundation/g/f/g/e;->b(Ljava/util/List;Ljava/lang/String;)Lcom/tkay/expressad/foundation/g/f/c/c;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 55
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/g/f/c/c;->b()Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    :cond_0
    const-string p0, ""

    :goto_0
    return-object p0
.end method

.method private static a(Lcom/tkay/expressad/foundation/g/f/h/b;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    if-eqz p0, :cond_1

    .line 74
    :try_start_0
    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/w;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {p2}, Lcom/tkay/expressad/foundation/h/w;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 77
    :cond_0
    invoke-virtual {p0, p1, p2}, Lcom/tkay/expressad/foundation/g/f/h/b;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p0

    .line 79
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method

.method private static b(Ljava/util/List;Ljava/lang/String;)Lcom/tkay/expressad/foundation/g/f/c/c;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/g/f/c/c;",
            ">;",
            "Ljava/lang/String;",
            ")",
            "Lcom/tkay/expressad/foundation/g/f/c/c;"
        }
    .end annotation

    if-eqz p0, :cond_1

    const/4 v0, 0x0

    .line 37
    :goto_0
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_1

    .line 38
    invoke-interface {p0, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/g/f/c/c;

    if-eqz v1, :cond_0

    .line 40
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/g/f/c/c;->a()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    goto :goto_1

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    const/4 v1, 0x0

    :goto_1
    return-object v1
.end method

.method public static b(Ljava/util/List;)Z
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/g/f/c/c;",
            ">;)Z"
        }
    .end annotation

    const-string v0, "Content-Encoding"

    .line 69
    invoke-static {p0, v0}, Lcom/tkay/expressad/foundation/g/f/g/e;->a(Ljava/util/List;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const-string v0, "gzip"

    invoke-static {p0, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p0

    return p0
.end method

.method private static c(Ljava/util/List;)Z
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/g/f/c/c;",
            ">;)Z"
        }
    .end annotation

    const-string v0, "Accept-Ranges"

    .line 61
    invoke-static {p0, v0}, Lcom/tkay/expressad/foundation/g/f/g/e;->a(Ljava/util/List;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "bytes"

    invoke-static {v0, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v2, 0x1

    if-eqz v0, :cond_0

    return v2

    :cond_0
    const-string v0, "Content-Range"

    .line 64
    invoke-static {p0, v0}, Lcom/tkay/expressad/foundation/g/f/g/e;->a(Ljava/util/List;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    if-eqz p0, :cond_1

    .line 65
    invoke-virtual {p0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_1

    return v2

    :cond_1
    const/4 p0, 0x0

    return p0
.end method
