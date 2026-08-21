.class final Lcom/tkay/core/common/h$8;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/k$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/h;->a(ILjava/util/List;Lcom/tkay/core/common/k$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/k$a;

.field final synthetic b:Lcom/tkay/core/common/h;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/h;Lcom/tkay/core/common/k$a;)V
    .locals 0

    .line 1775
    iput-object p1, p0, Lcom/tkay/core/common/h$8;->b:Lcom/tkay/core/common/h;

    iput-object p2, p0, Lcom/tkay/core/common/h$8;->a:Lcom/tkay/core/common/k$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 1785
    iget-object v0, p0, Lcom/tkay/core/common/h$8;->a:Lcom/tkay/core/common/k$a;

    if-eqz v0, :cond_0

    .line 1786
    invoke-interface {v0, p1}, Lcom/tkay/core/common/k$a;->a(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/util/List;Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)V"
        }
    .end annotation

    .line 1778
    iget-object v0, p0, Lcom/tkay/core/common/h$8;->a:Lcom/tkay/core/common/k$a;

    if-eqz v0, :cond_0

    .line 1779
    invoke-interface {v0, p1, p2, p3}, Lcom/tkay/core/common/k$a;->a(Ljava/lang/String;Ljava/util/List;Ljava/util/List;)V

    :cond_0
    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 1

    .line 1792
    iget-object v0, p0, Lcom/tkay/core/common/h$8;->a:Lcom/tkay/core/common/k$a;

    if-eqz v0, :cond_0

    .line 1793
    invoke-interface {v0, p1}, Lcom/tkay/core/common/k$a;->b(Ljava/lang/String;)V

    :cond_0
    return-void
.end method
