.class public Lcom/tkay/basead/handler/OfferClickHandler;
.super Lcom/tkay/core/api/IOfferClickHandler;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 25
    invoke-direct {p0}, Lcom/tkay/core/api/IOfferClickHandler;-><init>()V

    return-void
.end method

.method private static a(Lcom/tkay/core/common/f/h;)Lcom/tkay/basead/c/d;
    .locals 2

    .line 33
    invoke-static {}, Lcom/tkay/basead/a/d;->a()Lcom/tkay/basead/a/d;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/core/common/f/h;->d()I

    move-result v1

    invoke-virtual {p0}, Lcom/tkay/core/common/f/h;->p()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, v1, p0}, Lcom/tkay/basead/a/d;->a(ILjava/lang/String;)Lcom/tkay/basead/c/d;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public startDownloadApp(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;Ljava/lang/String;)Z
    .locals 9

    .line 1033
    invoke-static {}, Lcom/tkay/basead/a/d;->a()Lcom/tkay/basead/a/d;

    move-result-object v0

    invoke-virtual {p2}, Lcom/tkay/core/common/f/h;->d()I

    move-result v1

    invoke-virtual {p2}, Lcom/tkay/core/common/f/h;->p()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/tkay/basead/a/d;->a(ILjava/lang/String;)Lcom/tkay/basead/c/d;

    move-result-object v6

    .line 29
    new-instance v8, Lcom/tkay/basead/a/i;

    invoke-direct {v8}, Lcom/tkay/basead/a/i;-><init>()V

    move-object v3, p1

    move-object v4, p3

    move-object v5, p2

    move-object v7, p4

    invoke-static/range {v3 .. v8}, Lcom/tkay/basead/a/b;->a(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/c/d;Ljava/lang/String;Lcom/tkay/core/common/g/b;)Z

    move-result p1

    return p1
.end method
