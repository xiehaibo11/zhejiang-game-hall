.class final Lcom/tkay/core/b/h$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/b/b/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/b/h$2;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/b/h$2;


# direct methods
.method constructor <init>(Lcom/tkay/core/b/h$2;)V
    .locals 0

    .line 209
    iput-object p1, p0, Lcom/tkay/core/b/h$2$1;->a:Lcom/tkay/core/b/h$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/api/TYBaseAdAdapter;)V
    .locals 1

    .line 212
    iget-object v0, p0, Lcom/tkay/core/b/h$2$1;->a:Lcom/tkay/core/b/h$2;

    iget-object v0, v0, Lcom/tkay/core/b/h$2;->c:Lcom/tkay/core/b/h;

    invoke-static {v0, p1, p2}, Lcom/tkay/core/b/h;->a(Lcom/tkay/core/b/h;Lcom/tkay/core/common/f/aj;Lcom/tkay/core/api/TYBaseAdAdapter;)V

    return-void
.end method

.method public final a(Ljava/util/List;Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)V"
        }
    .end annotation

    .line 217
    iget-object v0, p0, Lcom/tkay/core/b/h$2$1;->a:Lcom/tkay/core/b/h$2;

    iget-object v0, v0, Lcom/tkay/core/b/h$2;->c:Lcom/tkay/core/b/h;

    iget-object v1, p0, Lcom/tkay/core/b/h$2$1;->a:Lcom/tkay/core/b/h$2;

    iget-object v1, v1, Lcom/tkay/core/b/h$2;->b:Ljava/lang/Integer;

    invoke-static {v0, v1, p1, p2}, Lcom/tkay/core/b/h;->a(Lcom/tkay/core/b/h;Ljava/lang/Integer;Ljava/util/List;Ljava/util/List;)V

    return-void
.end method
