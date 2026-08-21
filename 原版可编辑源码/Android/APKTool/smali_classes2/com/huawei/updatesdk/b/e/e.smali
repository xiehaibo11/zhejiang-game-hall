.class public Lcom/huawei/updatesdk/b/e/e;
.super Ljava/lang/Object;
.source ""


# static fields
.field private static final a:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/huawei/updatesdk/b/e/a;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    sput-object v0, Lcom/huawei/updatesdk/b/e/e;->a:Ljava/util/Map;

    return-void
.end method

.method public static a(Ljava/lang/String;)Lcom/huawei/updatesdk/b/e/a;
    .locals 2

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    new-instance p0, Lcom/huawei/updatesdk/b/e/c;

    invoke-direct {p0}, Lcom/huawei/updatesdk/b/e/c;-><init>()V

    return-object p0

    :cond_0
    sget-object v0, Lcom/huawei/updatesdk/b/e/e;->a:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    sget-object v0, Lcom/huawei/updatesdk/b/e/e;->a:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/huawei/updatesdk/b/e/a;

    return-object p0

    :cond_1
    const-string v0, "apptouch"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    sget-object v0, Lcom/huawei/updatesdk/b/e/e;->a:Ljava/util/Map;

    new-instance v1, Lcom/huawei/updatesdk/b/e/b;

    invoke-direct {v1}, Lcom/huawei/updatesdk/b/e/b;-><init>()V

    goto :goto_0

    :cond_2
    sget-object v0, Lcom/huawei/updatesdk/b/e/e;->a:Ljava/util/Map;

    new-instance v1, Lcom/huawei/updatesdk/b/e/c;

    invoke-direct {v1}, Lcom/huawei/updatesdk/b/e/c;-><init>()V

    :goto_0
    invoke-interface {v0, p0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/huawei/updatesdk/b/e/e;->a:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/huawei/updatesdk/b/e/a;

    return-object p0
.end method
