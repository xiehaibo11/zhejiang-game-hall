.class Lcom/sigmob/sdk/base/g$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/z$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/g;->b()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/g;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/g;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/g$2;->a:Lcom/sigmob/sdk/base/g;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/Object;)V
    .locals 5

    instance-of v0, p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmobRequest;

    if-eqz v0, :cond_2

    check-cast p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmobRequest;

    iget-object v0, p0, Lcom/sigmob/sdk/base/g$2;->a:Lcom/sigmob/sdk/base/g;

    invoke-static {v0}, Lcom/sigmob/sdk/base/g;->a(Lcom/sigmob/sdk/base/g;)Lcom/sigmob/sdk/base/b;

    move-result-object v0

    iget v0, v0, Lcom/sigmob/sdk/base/b;->b:I

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobRequest;->setLoad_count(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/g$2;->a:Lcom/sigmob/sdk/base/g;

    invoke-static {v0}, Lcom/sigmob/sdk/base/g;->a(Lcom/sigmob/sdk/base/g;)Lcom/sigmob/sdk/base/b;

    move-result-object v0

    iget v0, v0, Lcom/sigmob/sdk/base/b;->a:I

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobRequest;->setInvalid_load_count(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/g$2;->a:Lcom/sigmob/sdk/base/g;

    invoke-static {v0}, Lcom/sigmob/sdk/base/g;->a(Lcom/sigmob/sdk/base/g;)Lcom/sigmob/sdk/base/b;

    move-result-object v0

    iget v0, v0, Lcom/sigmob/sdk/base/b;->c:I

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobRequest;->setGdpr_filters(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/g$2;->a:Lcom/sigmob/sdk/base/g;

    invoke-static {v0}, Lcom/sigmob/sdk/base/g;->a(Lcom/sigmob/sdk/base/g;)Lcom/sigmob/sdk/base/b;

    move-result-object v0

    iget v0, v0, Lcom/sigmob/sdk/base/b;->d:I

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobRequest;->setInterval_filters(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/g$2;->a:Lcom/sigmob/sdk/base/g;

    iget v0, v0, Lcom/sigmob/sdk/base/g;->pIdEmpty_filters:I

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobRequest;->setPldempty_filters(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/g$2;->a:Lcom/sigmob/sdk/base/g;

    invoke-static {v0}, Lcom/sigmob/sdk/base/g;->a(Lcom/sigmob/sdk/base/g;)Lcom/sigmob/sdk/base/b;

    move-result-object v0

    iget v0, v0, Lcom/sigmob/sdk/base/b;->e:I

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobRequest;->setInit_filters(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/g$2;->a:Lcom/sigmob/sdk/base/g;

    invoke-static {v0}, Lcom/sigmob/sdk/base/g;->a(Lcom/sigmob/sdk/base/g;)Lcom/sigmob/sdk/base/b;

    move-result-object v0

    iget v0, v0, Lcom/sigmob/sdk/base/b;->g:I

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobRequest;->setLoading_filters(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/g$2;->a:Lcom/sigmob/sdk/base/g;

    invoke-static {v0}, Lcom/sigmob/sdk/base/g;->a(Lcom/sigmob/sdk/base/g;)Lcom/sigmob/sdk/base/b;

    move-result-object v0

    iget v0, v0, Lcom/sigmob/sdk/base/b;->f:I

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobRequest;->setProguard_filters(Ljava/lang/String;)V

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    invoke-static {}, Lcom/sigmob/sdk/base/c;->a()Lcom/sigmob/sdk/base/c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/c;->d()Z

    move-result v1

    const-string v2, "0"

    const-string v3, "1"

    if-eqz v1, :cond_0

    move-object v1, v2

    goto :goto_0

    :cond_0
    move-object v1, v3

    :goto_0
    const-string v4, "is_minor"

    invoke-virtual {v0, v4, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/sigmob/sdk/base/c;->a()Lcom/sigmob/sdk/base/c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/c;->e()Z

    move-result v1

    if-eqz v1, :cond_1

    goto :goto_1

    :cond_1
    move-object v2, v3

    :goto_1
    const-string v1, "is_unpersonalized"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobRequest;->setOptions(Ljava/util/Map;)V

    :cond_2
    iget-object p1, p0, Lcom/sigmob/sdk/base/g$2;->a:Lcom/sigmob/sdk/base/g;

    invoke-static {p1}, Lcom/sigmob/sdk/base/g;->b(Lcom/sigmob/sdk/base/g;)V

    return-void
.end method
