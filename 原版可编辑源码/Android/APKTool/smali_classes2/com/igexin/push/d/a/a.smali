.class public Lcom/igexin/push/d/a/a;
.super Lcom/igexin/b/a/b/b;


# direct methods
.method public constructor <init>(Ljava/lang/String;Lcom/igexin/b/a/b/b;)V
    .locals 1

    const/4 v0, 0x1

    invoke-direct {p0, p1, v0}, Lcom/igexin/b/a/b/b;-><init>(Ljava/lang/String;Z)V

    invoke-virtual {p0, p2}, Lcom/igexin/push/d/a/a;->a(Lcom/igexin/b/a/b/b;)V

    return-void
.end method

.method private a(Lcom/igexin/push/d/c/a;Lcom/igexin/push/d/c/c;)Z
    .locals 3

    const-string v0, "action"

    iget-byte p1, p1, Lcom/igexin/push/d/c/a;->b:B

    const/4 v1, 0x0

    const/16 v2, 0x1a

    if-eq p1, v2, :cond_0

    return v1

    :cond_0
    check-cast p2, Lcom/igexin/push/d/c/m;

    invoke-virtual {p2}, Lcom/igexin/push/d/c/m;->b()Z

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p2, Lcom/igexin/push/d/c/m;->e:Ljava/lang/Object;

    if-eqz p1, :cond_1

    :try_start_0
    new-instance p1, Lorg/json/JSONObject;

    iget-object p2, p2, Lcom/igexin/push/d/c/m;->e:Ljava/lang/Object;

    check-cast p2, Ljava/lang/String;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_1

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_1

    const-string p2, "redirect_server"

    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz p1, :cond_1

    const/4 p1, 0x1

    return p1

    :catch_0
    move-exception p1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "CommandFilter|"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array p2, v1, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_1
    return v1
.end method


# virtual methods
.method public a(Lcom/igexin/b/a/b/e;Lcom/igexin/b/a/b/d;Ljava/lang/Object;)Ljava/lang/Object;
    .locals 2

    instance-of p1, p3, Lcom/igexin/push/d/c/c;

    if-eqz p1, :cond_0

    check-cast p3, Lcom/igexin/push/d/c/c;

    new-instance p1, Lcom/igexin/push/d/c/a;

    invoke-direct {p1}, Lcom/igexin/push/d/c/a;-><init>()V

    iget p2, p3, Lcom/igexin/push/d/c/c;->i:I

    int-to-byte p2, p2

    iput-byte p2, p1, Lcom/igexin/push/d/c/a;->b:B

    invoke-virtual {p3}, Lcom/igexin/push/d/c/c;->c()[B

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/igexin/push/d/c/a;->a([B)V

    iget-byte p2, p3, Lcom/igexin/push/d/c/c;->j:B

    iput-byte p2, p1, Lcom/igexin/push/d/c/a;->c:B

    iget-byte p2, p3, Lcom/igexin/push/d/c/c;->k:B

    iput-byte p2, p1, Lcom/igexin/push/d/c/a;->d:B

    return-object p1

    :cond_0
    instance-of p1, p3, [Lcom/igexin/push/d/c/c;

    if-eqz p1, :cond_2

    check-cast p3, [Lcom/igexin/push/d/c/c;

    check-cast p3, [Lcom/igexin/push/d/c/c;

    array-length p1, p3

    new-array p1, p1, [Lcom/igexin/push/d/c/a;

    const/4 p2, 0x0

    :goto_0
    array-length v0, p3

    if-ge p2, v0, :cond_1

    new-instance v0, Lcom/igexin/push/d/c/a;

    invoke-direct {v0}, Lcom/igexin/push/d/c/a;-><init>()V

    aput-object v0, p1, p2

    aget-object v0, p1, p2

    aget-object v1, p3, p2

    iget v1, v1, Lcom/igexin/push/d/c/c;->i:I

    int-to-byte v1, v1

    iput-byte v1, v0, Lcom/igexin/push/d/c/a;->b:B

    aget-object v0, p1, p2

    aget-object v1, p3, p2

    invoke-virtual {v1}, Lcom/igexin/push/d/c/c;->c()[B

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/igexin/push/d/c/a;->a([B)V

    add-int/lit8 p2, p2, 0x1

    goto :goto_0

    :cond_1
    return-object p1

    :cond_2
    const/4 p1, 0x0

    return-object p1
.end method

.method public b(Lcom/igexin/b/a/b/e;Lcom/igexin/b/a/b/d;Ljava/lang/Object;)Lcom/igexin/b/a/d/a/e;
    .locals 3

    const/4 p1, 0x0

    if-nez p3, :cond_0

    return-object p1

    :cond_0
    instance-of p2, p3, Lcom/igexin/push/d/c/f;

    if-eqz p2, :cond_1

    check-cast p3, Lcom/igexin/b/a/d/a/e;

    return-object p3

    :cond_1
    check-cast p3, Lcom/igexin/push/d/c/a;

    iget-byte p2, p3, Lcom/igexin/push/d/c/a;->b:B

    const/4 v0, 0x5

    if-eq p2, v0, :cond_7

    const/16 v0, 0x9

    if-eq p2, v0, :cond_6

    const/16 v0, 0x14

    if-eq p2, v0, :cond_5

    const/16 v0, 0x1a

    if-eq p2, v0, :cond_4

    const/16 v0, 0x25

    if-eq p2, v0, :cond_3

    const/16 v0, 0x61

    if-eq p2, v0, :cond_2

    move-object p2, p1

    goto :goto_0

    :cond_2
    new-instance p2, Lcom/igexin/push/d/c/h;

    invoke-direct {p2}, Lcom/igexin/push/d/c/h;-><init>()V

    goto :goto_0

    :cond_3
    new-instance p2, Lcom/igexin/push/d/c/l;

    invoke-direct {p2}, Lcom/igexin/push/d/c/l;-><init>()V

    goto :goto_0

    :cond_4
    new-instance p2, Lcom/igexin/push/d/c/m;

    invoke-direct {p2}, Lcom/igexin/push/d/c/m;-><init>()V

    goto :goto_0

    :cond_5
    new-instance p2, Lcom/igexin/push/d/c/p;

    invoke-direct {p2}, Lcom/igexin/push/d/c/p;-><init>()V

    goto :goto_0

    :cond_6
    new-instance p2, Lcom/igexin/push/d/c/o;

    invoke-direct {p2}, Lcom/igexin/push/d/c/o;-><init>()V

    goto :goto_0

    :cond_7
    new-instance p2, Lcom/igexin/push/d/c/k;

    invoke-direct {p2}, Lcom/igexin/push/d/c/k;-><init>()V

    :goto_0
    iget v0, p3, Lcom/igexin/push/d/c/a;->f:I

    const/4 v1, 0x1

    const/4 v2, 0x7

    if-eq v0, v1, :cond_8

    iget v0, p3, Lcom/igexin/push/d/c/a;->f:I

    if-ne v0, v2, :cond_9

    :cond_8
    if-nez p2, :cond_a

    :cond_9
    return-object p1

    :cond_a
    iget-object v0, p3, Lcom/igexin/push/d/c/a;->e:[B

    invoke-virtual {p2, v0}, Lcom/igexin/push/d/c/c;->a([B)V

    iget v0, p3, Lcom/igexin/push/d/c/a;->f:I

    if-ne v0, v2, :cond_c

    iget-byte v0, p3, Lcom/igexin/push/d/c/a;->g:B

    const/16 v1, 0x20

    if-ne v0, v1, :cond_b

    invoke-direct {p0, p3, p2}, Lcom/igexin/push/d/a/a;->a(Lcom/igexin/push/d/c/a;Lcom/igexin/push/d/c/c;)Z

    move-result p3

    if-nez p3, :cond_b

    return-object p1

    :cond_b
    return-object p2

    :cond_c
    invoke-direct {p0, p3, p2}, Lcom/igexin/push/d/a/a;->a(Lcom/igexin/push/d/c/a;Lcom/igexin/push/d/c/c;)Z

    move-result p3

    if-eqz p3, :cond_d

    move-object p1, p2

    :cond_d
    return-object p1
.end method

.method public synthetic c(Lcom/igexin/b/a/b/e;Lcom/igexin/b/a/b/d;Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    invoke-virtual {p0, p1, p2, p3}, Lcom/igexin/push/d/a/a;->b(Lcom/igexin/b/a/b/e;Lcom/igexin/b/a/b/d;Ljava/lang/Object;)Lcom/igexin/b/a/d/a/e;

    move-result-object p1

    return-object p1
.end method
