.class Lcom/sigmob/sdk/nativead/b$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/z$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/nativead/b;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;III)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:I

.field final synthetic c:I

.field final synthetic d:Lcom/sigmob/sdk/nativead/b;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/nativead/b;III)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/b$2;->d:Lcom/sigmob/sdk/nativead/b;

    iput p2, p0, Lcom/sigmob/sdk/nativead/b$2;->a:I

    iput p3, p0, Lcom/sigmob/sdk/nativead/b$2;->b:I

    iput p4, p0, Lcom/sigmob/sdk/nativead/b$2;->c:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/Object;)V
    .locals 5

    instance-of v0, p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    if-eqz v0, :cond_2

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iget v1, p0, Lcom/sigmob/sdk/nativead/b$2;->a:I

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    const-string v2, "video_time"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget v1, p0, Lcom/sigmob/sdk/nativead/b$2;->b:I

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    const-string v2, "begin_time"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget v1, p0, Lcom/sigmob/sdk/nativead/b$2;->c:I

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    const-string v2, "end_time"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget v1, p0, Lcom/sigmob/sdk/nativead/b$2;->b:I

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-nez v1, :cond_0

    move v1, v2

    goto :goto_0

    :cond_0
    move v1, v3

    :goto_0
    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    const-string v4, "is_first"

    invoke-virtual {v0, v4, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget v1, p0, Lcom/sigmob/sdk/nativead/b$2;->c:I

    iget v4, p0, Lcom/sigmob/sdk/nativead/b$2;->a:I

    add-int/lit16 v4, v4, -0x3e8

    if-lt v1, v4, :cond_1

    goto :goto_1

    :cond_1
    move v2, v3

    :goto_1
    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    const-string v2, "is_last"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    check-cast p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setOptions(Ljava/util/Map;)V

    :cond_2
    return-void
.end method
