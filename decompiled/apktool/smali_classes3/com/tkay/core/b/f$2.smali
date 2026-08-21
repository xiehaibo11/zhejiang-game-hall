.class final Lcom/tkay/core/b/f$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/TYBidRequestInfoListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/b/f;->a(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/aj;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f/aj;

.field final synthetic b:Lcom/tkay/core/b/f;


# direct methods
.method constructor <init>(Lcom/tkay/core/b/f;Lcom/tkay/core/common/f/aj;)V
    .locals 0

    .line 85
    iput-object p1, p0, Lcom/tkay/core/b/f$2;->b:Lcom/tkay/core/b/f;

    iput-object p2, p0, Lcom/tkay/core/b/f$2;->a:Lcom/tkay/core/common/f/aj;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailed(Ljava/lang/String;)V
    .locals 2

    .line 93
    iget-object v0, p0, Lcom/tkay/core/b/f$2;->b:Lcom/tkay/core/b/f;

    iget-object v0, v0, Lcom/tkay/core/b/f;->d:Lcom/tkay/core/b/f$a;

    if-eqz v0, :cond_0

    .line 94
    iget-object v0, p0, Lcom/tkay/core/b/f$2;->b:Lcom/tkay/core/b/f;

    iget-object v0, v0, Lcom/tkay/core/b/f;->d:Lcom/tkay/core/b/f$a;

    iget-object v1, p0, Lcom/tkay/core/b/f$2;->a:Lcom/tkay/core/common/f/aj;

    invoke-interface {v0, p1, v1}, Lcom/tkay/core/b/f$a;->a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)V

    :cond_0
    return-void
.end method

.method public final onSuccess(Lcom/tkay/core/api/TYBidRequestInfo;)V
    .locals 2

    .line 88
    iget-object v0, p0, Lcom/tkay/core/b/f$2;->b:Lcom/tkay/core/b/f;

    iget-object v1, p0, Lcom/tkay/core/b/f$2;->a:Lcom/tkay/core/common/f/aj;

    invoke-static {v0, v1, p1}, Lcom/tkay/core/b/f;->a(Lcom/tkay/core/b/f;Lcom/tkay/core/common/f/aj;Lcom/tkay/core/api/TYBidRequestInfo;)V

    return-void
.end method
