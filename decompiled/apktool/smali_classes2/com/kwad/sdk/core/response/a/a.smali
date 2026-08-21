.class public Lcom/kwad/sdk/core/response/a/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/b;


# static fields
.field private static final WHITE_LIST:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private mHolders:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/d<",
            "Lcom/kwad/sdk/core/response/a/a;",
            ">;>;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    sput-object v0, Lcom/kwad/sdk/core/response/a/a;->WHITE_LIST:Ljava/util/List;

    const-string v1, "com.kwad.sdk.core.report.BaseReportAction"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private getHolder(Ljava/lang/Class;)Lcom/kwad/sdk/core/d;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class<",
            "+",
            "Lcom/kwad/sdk/core/response/a/a;",
            ">;)",
            "Lcom/kwad/sdk/core/d<",
            "Lcom/kwad/sdk/core/response/a/a;",
            ">;"
        }
    .end annotation

    const-class v0, Lcom/kwad/sdk/core/response/a/a;

    invoke-virtual {v0, p1}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    sget-object v0, Lcom/kwad/sdk/core/response/a/a;->WHITE_LIST:Ljava/util/List;

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-static {p1}, Lcom/kwad/sdk/core/b/a/ex;->getHolder(Ljava/lang/Class;)Lcom/kwad/sdk/core/d;

    move-result-object p1

    return-object p1

    :cond_1
    :goto_0
    const/4 p1, 0x0

    return-object p1
.end method

.method private getHolders()Ljava/util/List;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/d<",
            "Lcom/kwad/sdk/core/response/a/a;",
            ">;>;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/core/response/a/a;->mHolders:Ljava/util/List;

    if-nez v0, :cond_1

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/a/a;->mHolders:Ljava/util/List;

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    :goto_0
    if-eqz v0, :cond_1

    const-class v1, Lcom/kwad/sdk/core/response/a/a;

    invoke-virtual {v1, v0}, Ljava/lang/Class;->isAssignableFrom(Ljava/lang/Class;)Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-direct {p0, v0}, Lcom/kwad/sdk/core/response/a/a;->getHolder(Ljava/lang/Class;)Lcom/kwad/sdk/core/d;

    move-result-object v1

    if-eqz v1, :cond_0

    iget-object v2, p0, Lcom/kwad/sdk/core/response/a/a;->mHolders:Ljava/util/List;

    const/4 v3, 0x0

    invoke-interface {v2, v3, v1}, Ljava/util/List;->add(ILjava/lang/Object;)V

    :cond_0
    invoke-virtual {v0}, Ljava/lang/Class;->getSuperclass()Ljava/lang/Class;

    move-result-object v0

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/kwad/sdk/core/response/a/a;->mHolders:Ljava/util/List;

    if-eqz v0, :cond_2

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_3

    :cond_2
    new-instance v0, Ljava/lang/IllegalStateException;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "no holders for class: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :cond_3
    iget-object v0, p0, Lcom/kwad/sdk/core/response/a/a;->mHolders:Ljava/util/List;

    return-object v0
.end method


# virtual methods
.method public afterParseJson(Lorg/json/JSONObject;)V
    .locals 0

    return-void
.end method

.method public afterToJson(Lorg/json/JSONObject;)V
    .locals 0

    return-void
.end method

.method public beforeToJson(Lorg/json/JSONObject;)V
    .locals 0

    return-void
.end method

.method public parseJson(Lorg/json/JSONObject;)V
    .locals 3

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;->getHolders()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    add-int/lit8 v1, v1, -0x1

    :goto_0
    if-ltz v1, :cond_0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/sdk/core/d;

    invoke-interface {v2, p0, p1}, Lcom/kwad/sdk/core/d;->a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V

    add-int/lit8 v1, v1, -0x1

    goto :goto_0

    :cond_0
    invoke-virtual {p0, p1}, Lcom/kwad/sdk/core/response/a/a;->afterParseJson(Lorg/json/JSONObject;)V

    return-void
.end method

.method public toJson()Lorg/json/JSONObject;
    .locals 4

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;->getHolders()Ljava/util/List;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    invoke-virtual {p0, v1}, Lcom/kwad/sdk/core/response/a/a;->beforeToJson(Lorg/json/JSONObject;)V

    if-nez v0, :cond_0

    return-object v1

    :cond_0
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    add-int/lit8 v2, v2, -0x1

    :goto_0
    if-ltz v2, :cond_2

    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/kwad/sdk/core/d;

    if-eqz v3, :cond_1

    invoke-interface {v3, p0, v1}, Lcom/kwad/sdk/core/d;->b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    :cond_1
    add-int/lit8 v2, v2, -0x1

    goto :goto_0

    :cond_2
    invoke-virtual {p0, v1}, Lcom/kwad/sdk/core/response/a/a;->afterToJson(Lorg/json/JSONObject;)V

    return-object v1
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    invoke-super {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
