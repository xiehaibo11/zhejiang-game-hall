.class Lcom/sigmob/sdk/nativead/d$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/z$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/nativead/d;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Ljava/util/HashMap;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/util/HashMap;

.field final synthetic b:Lcom/sigmob/sdk/nativead/d;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/nativead/d;Ljava/util/HashMap;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/d$1;->b:Lcom/sigmob/sdk/nativead/d;

    iput-object p2, p0, Lcom/sigmob/sdk/nativead/d$1;->a:Ljava/util/HashMap;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/Object;)V
    .locals 1

    instance-of v0, p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    if-eqz v0, :cond_0

    check-cast p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/d$1;->a:Ljava/util/HashMap;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setOptions(Ljava/util/Map;)V

    :cond_0
    return-void
.end method
