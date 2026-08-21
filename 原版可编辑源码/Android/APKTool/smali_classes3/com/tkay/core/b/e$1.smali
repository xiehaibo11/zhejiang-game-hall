.class final Lcom/tkay/core/b/e$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/MediationBidManager$BidListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/b/e;->a(Lcom/tkay/core/b/b/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/b/b/a;

.field final synthetic b:Lcom/tkay/core/b/e;


# direct methods
.method constructor <init>(Lcom/tkay/core/b/e;Lcom/tkay/core/b/b/a;)V
    .locals 0

    .line 81
    iput-object p1, p0, Lcom/tkay/core/b/e$1;->b:Lcom/tkay/core/b/e;

    iput-object p2, p0, Lcom/tkay/core/b/e$1;->a:Lcom/tkay/core/b/b/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onBidFail(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final onBidStart(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/api/TYBaseAdAdapter;)V
    .locals 1

    .line 85
    iget-object v0, p0, Lcom/tkay/core/b/e$1;->a:Lcom/tkay/core/b/b/a;

    if-eqz v0, :cond_0

    .line 86
    invoke-interface {v0, p1, p2}, Lcom/tkay/core/b/b/a;->a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/api/TYBaseAdAdapter;)V

    :cond_0
    return-void
.end method

.method public final onBidSuccess(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)V"
        }
    .end annotation

    .line 92
    iget-object v0, p0, Lcom/tkay/core/b/e$1;->b:Lcom/tkay/core/b/e;

    invoke-static {v0, p1}, Lcom/tkay/core/b/e;->a(Lcom/tkay/core/b/e;Ljava/util/List;)V

    return-void
.end method
