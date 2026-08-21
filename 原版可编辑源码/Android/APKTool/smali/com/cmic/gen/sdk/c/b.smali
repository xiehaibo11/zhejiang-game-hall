.class public Lcom/cmic/gen/sdk/c/b;
.super Ljava/lang/Object;
.source "RedirectHandler.java"


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 23
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/c/b/g;)Lcom/cmic/gen/sdk/c/c/c;
    .locals 1

    .line 100
    new-instance v0, Lcom/cmic/gen/sdk/c/c/c;

    invoke-direct {v0, p1, p4, p3, p2}, Lcom/cmic/gen/sdk/c/c/c;-><init>(Ljava/lang/String;Lcom/cmic/gen/sdk/c/b/g;Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "GET"

    .line 101
    invoke-virtual {p3, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const-string p1, "Content-Type"

    const-string p2, "application/x-www-form-urlencoded"

    .line 102
    invoke-virtual {v0, p1, p2}, Lcom/cmic/gen/sdk/c/c/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-object v0
.end method


# virtual methods
.method public a(Lcom/cmic/gen/sdk/c/c/c;Lcom/cmic/gen/sdk/c/d/b;Lcom/cmic/gen/sdk/a;)Lcom/cmic/gen/sdk/c/c/c;
    .locals 4

    .line 33
    invoke-virtual {p2}, Lcom/cmic/gen/sdk/c/d/b;->b()Ljava/util/Map;

    move-result-object v0

    .line 34
    iget-object v1, p0, Lcom/cmic/gen/sdk/c/b;->a:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    const-string v1, "pplocation"

    .line 35
    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/List;

    if-eqz v1, :cond_0

    .line 36
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_0

    .line 37
    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    iput-object v1, p0, Lcom/cmic/gen/sdk/c/b;->a:Ljava/lang/String;

    .line 40
    :cond_0
    invoke-virtual {p2}, Lcom/cmic/gen/sdk/c/d/b;->a()I

    move-result p2

    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p2

    invoke-static {p3, p2}, Lcom/cmic/gen/sdk/e/q;->b(Lcom/cmic/gen/sdk/a;Ljava/lang/String;)V

    const-string p2, "Location"

    .line 42
    invoke-interface {v0, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/List;

    if-eqz v1, :cond_1

    .line 43
    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v3

    if-eqz v3, :cond_2

    .line 44
    :cond_1
    invoke-virtual {p2}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    move-object v1, v0

    check-cast v1, Ljava/util/List;

    :cond_2
    if-eqz v1, :cond_5

    .line 46
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_5

    .line 47
    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    iput-object v0, p0, Lcom/cmic/gen/sdk/c/b;->b:Ljava/lang/String;

    .line 48
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    const-string v0, "operatortype"

    const-string v1, "0"

    .line 49
    invoke-virtual {p3, v0, v1}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "2"

    .line 50
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    const-string v0, "getUnicomMobile"

    .line 51
    invoke-static {p3, v0}, Lcom/cmic/gen/sdk/e/q;->a(Lcom/cmic/gen/sdk/a;Ljava/lang/String;)V

    goto :goto_0

    :cond_3
    const-string v1, "3"

    .line 52
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    const-string v0, "getTelecomMobile"

    .line 53
    invoke-static {p3, v0}, Lcom/cmic/gen/sdk/e/q;->a(Lcom/cmic/gen/sdk/a;Ljava/lang/String;)V

    goto :goto_0

    :cond_4
    const-string v0, "NONE"

    .line 55
    invoke-static {p3, v0}, Lcom/cmic/gen/sdk/e/q;->a(Lcom/cmic/gen/sdk/a;Ljava/lang/String;)V

    .line 60
    :cond_5
    :goto_0
    iget-object p3, p0, Lcom/cmic/gen/sdk/c/b;->b:Ljava/lang/String;

    invoke-static {p2, p3}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 61
    new-instance p2, Lcom/cmic/gen/sdk/c/b/c;

    invoke-virtual {p1}, Lcom/cmic/gen/sdk/c/c/c;->k()Lcom/cmic/gen/sdk/c/b/g;

    move-result-object p3

    invoke-virtual {p3}, Lcom/cmic/gen/sdk/c/b/g;->a()Ljava/lang/String;

    move-result-object p3

    invoke-direct {p2, p3}, Lcom/cmic/gen/sdk/c/b/c;-><init>(Ljava/lang/String;)V

    .line 62
    iget-object p3, p0, Lcom/cmic/gen/sdk/c/b;->b:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/cmic/gen/sdk/c/c/c;->f()Ljava/lang/String;

    move-result-object v0

    const-string v1, "GET"

    invoke-direct {p0, p3, v0, v1, p2}, Lcom/cmic/gen/sdk/c/b;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/c/b/g;)Lcom/cmic/gen/sdk/c/c/c;

    move-result-object p2

    .line 63
    invoke-virtual {p1}, Lcom/cmic/gen/sdk/c/c/c;->h()Landroid/net/Network;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/cmic/gen/sdk/c/c/c;->a(Landroid/net/Network;)V

    return-object p2
.end method

.method public a()Ljava/lang/String;
    .locals 1

    .line 109
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/b;->a:Ljava/lang/String;

    return-object v0
.end method

.method public b(Lcom/cmic/gen/sdk/c/c/c;Lcom/cmic/gen/sdk/c/d/b;Lcom/cmic/gen/sdk/a;)Lcom/cmic/gen/sdk/c/c/c;
    .locals 3

    const-string v0, "operatortype"

    const-string v1, "0"

    .line 68
    invoke-virtual {p3, v0, v1}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "2"

    .line 69
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v0, "getNewUnicomPhoneNumberNotify"

    .line 70
    invoke-static {p3, v0}, Lcom/cmic/gen/sdk/e/q;->a(Lcom/cmic/gen/sdk/a;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const-string v1, "3"

    .line 71
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string v0, "getNewTelecomPhoneNumberNotify"

    .line 72
    invoke-static {p3, v0}, Lcom/cmic/gen/sdk/e/q;->a(Lcom/cmic/gen/sdk/a;Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    const-string v0, "NONE"

    .line 74
    invoke-static {p3, v0}, Lcom/cmic/gen/sdk/e/q;->a(Lcom/cmic/gen/sdk/a;Ljava/lang/String;)V

    .line 76
    :goto_0
    invoke-virtual {p2}, Lcom/cmic/gen/sdk/c/d/b;->a()I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-static {p3, v0}, Lcom/cmic/gen/sdk/e/q;->b(Lcom/cmic/gen/sdk/a;Ljava/lang/String;)V

    .line 78
    new-instance v0, Lcom/cmic/gen/sdk/c/b/d;

    invoke-virtual {p1}, Lcom/cmic/gen/sdk/c/c/c;->k()Lcom/cmic/gen/sdk/c/b/g;

    move-result-object v1

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/c/b/g;->a()Ljava/lang/String;

    move-result-object v1

    .line 79
    invoke-virtual {p2}, Lcom/cmic/gen/sdk/c/d/b;->c()Ljava/lang/String;

    move-result-object p2

    const-string v2, "1.0"

    invoke-direct {v0, v1, v2, p2}, Lcom/cmic/gen/sdk/c/b/d;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    const-string p2, "userCapaid"

    .line 81
    invoke-virtual {p3, p2}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Lcom/cmic/gen/sdk/c/b/d;->c(Ljava/lang/String;)V

    const-string p2, "logintype"

    .line 83
    invoke-virtual {p3, p2}, Lcom/cmic/gen/sdk/a;->c(Ljava/lang/String;)I

    move-result p2

    const/4 v1, 0x3

    const-string v2, "pre"

    if-eq p2, v1, :cond_3

    const/4 p2, 0x0

    const-string v1, "isRisk"

    .line 84
    invoke-virtual {p3, v1, p2}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Z)Z

    move-result p2

    if-eqz p2, :cond_2

    .line 85
    invoke-virtual {v0, v2}, Lcom/cmic/gen/sdk/c/b/d;->b(Ljava/lang/String;)V

    goto :goto_1

    :cond_2
    const-string p2, "authz"

    .line 87
    invoke-virtual {v0, p2}, Lcom/cmic/gen/sdk/c/b/d;->b(Ljava/lang/String;)V

    goto :goto_1

    .line 90
    :cond_3
    invoke-virtual {v0, v2}, Lcom/cmic/gen/sdk/c/b/d;->b(Ljava/lang/String;)V

    .line 93
    :goto_1
    iget-object p2, p0, Lcom/cmic/gen/sdk/c/b;->a:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/cmic/gen/sdk/c/c/c;->f()Ljava/lang/String;

    move-result-object p3

    const-string v1, "POST"

    invoke-direct {p0, p2, p3, v1, v0}, Lcom/cmic/gen/sdk/c/b;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/c/b/g;)Lcom/cmic/gen/sdk/c/c/c;

    move-result-object p2

    .line 94
    invoke-virtual {p1}, Lcom/cmic/gen/sdk/c/c/c;->h()Landroid/net/Network;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/cmic/gen/sdk/c/c/c;->a(Landroid/net/Network;)V

    const/4 p1, 0x0

    .line 95
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/b;->a:Ljava/lang/String;

    return-object p2
.end method
