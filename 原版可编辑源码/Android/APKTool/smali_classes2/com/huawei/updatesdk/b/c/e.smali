.class public Lcom/huawei/updatesdk/b/c/e;
.super Lcom/huawei/updatesdk/b/c/c;
.source ""


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/huawei/updatesdk/b/c/c;-><init>()V

    return-void
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 1

    const-string v0, "com.huawei.appmarket.tv"

    return-object v0
.end method

.method public b()I
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method c()Ljava/lang/String;
    .locals 2

    const-string v0, "ro.product.manufacturer"

    const-string v1, ""

    invoke-static {v0, v1}, Lcom/huawei/updatesdk/a/a/d/h/c;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method d()Ljava/lang/String;
    .locals 2

    const-string v0, "ro.product.hw_model"

    const-string v1, ""

    invoke-static {v0, v1}, Lcom/huawei/updatesdk/a/a/d/h/c;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public g()Ljava/util/List;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const-string v1, "CE1EF7188F820973C191227D95D54311ED3A65EC83E37009E898A1C058BBC775"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-object v0
.end method
