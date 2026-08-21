.class public final Lcom/alipay/sdk/m/a0/d;
.super Ljava/lang/Object;
.source "SourceFile"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/alipay/sdk/m/a0/d$a;
    }
.end annotation


# static fields
.field public static final a:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/alipay/sdk/m/a0/d$a;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    sput-object v0, Lcom/alipay/sdk/m/a0/d;->a:Ljava/util/Map;

    return-void
.end method

.method public static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 8

    sget-object v0, Lcom/alipay/sdk/m/a0/d;->a:Ljava/util/Map;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    :cond_0
    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/alipay/sdk/m/a0/d$a;

    if-nez v0, :cond_1

    return-object v1

    :cond_1
    iget-wide v2, v0, Lcom/alipay/sdk/m/a0/d$a;->b:J

    iget-wide v4, v0, Lcom/alipay/sdk/m/a0/d$a;->c:J

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    sub-long/2addr v6, v2

    cmp-long v2, v6, v4

    if-gez v2, :cond_2

    const/4 v2, 0x1

    goto :goto_0

    :cond_2
    const/4 v2, 0x0

    :goto_0
    if-eqz v2, :cond_3

    iget-object v0, v0, Lcom/alipay/sdk/m/a0/d$a;->a:Ljava/lang/String;

    if-eqz v0, :cond_3

    return-object v0

    :cond_3
    sget-object v0, Lcom/alipay/sdk/m/a0/d;->a:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    return-object v1
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    if-nez p1, :cond_0

    const-string p1, ""

    :cond_0
    sget-object v0, Lcom/alipay/sdk/m/a0/d;->a:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/alipay/sdk/m/a0/d$a;

    if-nez v0, :cond_1

    new-instance v0, Lcom/alipay/sdk/m/a0/d$a;

    invoke-direct {v0}, Lcom/alipay/sdk/m/a0/d$a;-><init>()V

    :cond_1
    iput-object p1, v0, Lcom/alipay/sdk/m/a0/d$a;->a:Ljava/lang/String;

    const-wide/32 v1, 0x5265c00

    iput-wide v1, v0, Lcom/alipay/sdk/m/a0/d$a;->c:J

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iput-wide v1, v0, Lcom/alipay/sdk/m/a0/d$a;->b:J

    sget-object p1, Lcom/alipay/sdk/m/a0/d;->a:Ljava/util/Map;

    invoke-interface {p1, p0, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method
