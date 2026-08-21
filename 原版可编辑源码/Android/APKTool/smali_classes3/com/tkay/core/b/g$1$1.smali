.class final Lcom/tkay/core/b/g$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/b/g$1;->a(Lcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/b/c/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/api/TYBiddingResult;

.field final synthetic b:Lcom/tkay/core/b/c/a;

.field final synthetic c:Lcom/tkay/core/b/g$1;


# direct methods
.method constructor <init>(Lcom/tkay/core/b/g$1;Lcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/b/c/a;)V
    .locals 0

    .line 103
    iput-object p1, p0, Lcom/tkay/core/b/g$1$1;->c:Lcom/tkay/core/b/g$1;

    iput-object p2, p0, Lcom/tkay/core/b/g$1$1;->a:Lcom/tkay/core/api/TYBiddingResult;

    iput-object p3, p0, Lcom/tkay/core/b/g$1$1;->b:Lcom/tkay/core/b/c/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 7

    .line 106
    iget-object v0, p0, Lcom/tkay/core/b/g$1$1;->a:Lcom/tkay/core/api/TYBiddingResult;

    invoke-virtual {v0}, Lcom/tkay/core/api/TYBiddingResult;->isSuccessWithUseType()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    goto :goto_0

    :cond_0
    const/4 v0, -0x1

    :goto_0
    move v5, v0

    .line 108
    iget-object v0, p0, Lcom/tkay/core/b/g$1$1;->c:Lcom/tkay/core/b/g$1;

    iget-object v1, v0, Lcom/tkay/core/b/g$1;->b:Lcom/tkay/core/b/g;

    iget-object v0, p0, Lcom/tkay/core/b/g$1$1;->a:Lcom/tkay/core/api/TYBiddingResult;

    invoke-virtual {v0}, Lcom/tkay/core/api/TYBiddingResult;->isSuccessWithUseType()Z

    move-result v2

    iget-object v3, p0, Lcom/tkay/core/b/g$1$1;->a:Lcom/tkay/core/api/TYBiddingResult;

    iget-object v0, p0, Lcom/tkay/core/b/g$1$1;->c:Lcom/tkay/core/b/g$1;

    iget-object v4, v0, Lcom/tkay/core/b/g$1;->a:Lcom/tkay/core/common/f/aj;

    iget-object v6, p0, Lcom/tkay/core/b/g$1$1;->b:Lcom/tkay/core/b/c/a;

    invoke-static/range {v1 .. v6}, Lcom/tkay/core/b/g;->a(Lcom/tkay/core/b/g;ZLcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/common/f/aj;ILcom/tkay/core/b/c/a;)V

    return-void
.end method
