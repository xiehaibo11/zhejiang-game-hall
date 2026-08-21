.class final Lcom/tkay/core/common/l/a/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/l/a/f$d;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/l/a/c;-><init>(Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/common/l/a/f$b;Lcom/tkay/core/common/l/a/f;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/l/a/c;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/l/a/c;)V
    .locals 0

    .line 75
    iput-object p1, p0, Lcom/tkay/core/common/l/a/c$1;->a:Lcom/tkay/core/common/l/a/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;)V"
        }
    .end annotation

    .line 78
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/View;

    .line 82
    iget-object v1, p0, Lcom/tkay/core/common/l/a/c$1;->a:Lcom/tkay/core/common/l/a/c;

    invoke-static {v1}, Lcom/tkay/core/common/l/a/c;->a(Lcom/tkay/core/common/l/a/c;)Ljava/util/Map;

    move-result-object v1

    invoke-interface {v1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/l/a/b;

    if-nez v1, :cond_0

    .line 84
    iget-object v1, p0, Lcom/tkay/core/common/l/a/c$1;->a:Lcom/tkay/core/common/l/a/c;

    invoke-virtual {v1, v0}, Lcom/tkay/core/common/l/a/c;->a(Landroid/view/View;)V

    goto :goto_0

    .line 88
    :cond_0
    invoke-interface {v1, v0}, Lcom/tkay/core/common/l/a/b;->recordImpression(Landroid/view/View;)V

    .line 89
    invoke-interface {v1}, Lcom/tkay/core/common/l/a/b;->setImpressionRecorded()V

    goto :goto_0

    :cond_1
    return-void
.end method
