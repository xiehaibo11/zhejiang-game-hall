.class public Lcom/igexin/push/core/c/a;
.super Lcom/igexin/push/f/a/b;


# static fields
.field public static a:Lorg/json/JSONArray;


# direct methods
.method public constructor <init>(Ljava/lang/String;Lorg/json/JSONArray;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/igexin/push/f/a/b;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0, p2}, Lcom/igexin/push/core/c/a;->a(Lorg/json/JSONArray;)V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/Exception;)V
    .locals 3

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lcom/igexin/push/core/b/i;->b(J)Z

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "-> get idc config "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {p1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-void
.end method

.method public a(Lorg/json/JSONArray;)V
    .locals 0

    sput-object p1, Lcom/igexin/push/core/c/a;->a:Lorg/json/JSONArray;

    return-void
.end method

.method public a([B)V
    .locals 3

    if-eqz p1, :cond_0

    const/4 v0, 0x0

    :try_start_0
    invoke-static {p1, v0}, Lcom/igexin/push/util/d;->a([BI)[B

    move-result-object p1

    invoke-static {p1}, Lcom/igexin/b/b/a;->c([B)[B

    move-result-object p1

    new-instance v1, Ljava/lang/String;

    invoke-direct {v1, p1}, Ljava/lang/String;-><init>([B)V

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "->get idc config server resp data : "

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {p1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/push/config/a;->a()Lcom/igexin/push/config/a;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/igexin/push/config/a;->b(Ljava/lang/String;)V

    const/4 p1, 0x1

    invoke-static {v1, p1}, Lcom/igexin/push/config/l;->a(Ljava/lang/String;Z)V

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object p1

    const-wide/16 v0, 0x0

    invoke-virtual {p1, v0, v1}, Lcom/igexin/push/core/b/i;->b(J)Z

    invoke-static {}, Lcom/igexin/push/config/a;->a()Lcom/igexin/push/config/a;

    move-result-object p1

    sget-object v0, Lcom/igexin/push/core/c/a;->a:Lorg/json/JSONArray;

    invoke-virtual {v0}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/igexin/push/config/a;->a(Ljava/lang/String;)V

    sget-object p1, Lcom/igexin/push/core/c/a;->a:Lorg/json/JSONArray;

    invoke-static {p1}, Lcom/igexin/push/core/a/q;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/igexin/push/config/SDKUrlConfig;->setIdcConfigUrl([Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lcom/igexin/push/core/b/i;->b(J)Z

    throw p1

    :cond_0
    :goto_0
    return-void
.end method

.method public b_()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method
