.class Lcom/sigmob/sdk/base/common/z$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/z$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/windad/WindAdRequest;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/common/z$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/common/z$a;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/common/z$a;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/z$1;->a:Lcom/sigmob/sdk/base/common/z$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/Object;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/z$1;->a:Lcom/sigmob/sdk/base/common/z$a;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/sigmob/sdk/base/common/z$a;->a(Ljava/lang/Object;)V

    :cond_0
    return-void
.end method
