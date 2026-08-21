.class final Lcom/tkay/core/b/f$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/b/f;->a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/b/f$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/api/TYBaseAdAdapter;

.field final synthetic b:Lcom/tkay/core/common/f/aj;

.field final synthetic c:Lcom/tkay/core/b/f;


# direct methods
.method constructor <init>(Lcom/tkay/core/b/f;Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/aj;)V
    .locals 0

    .line 60
    iput-object p1, p0, Lcom/tkay/core/b/f$1;->c:Lcom/tkay/core/b/f;

    iput-object p2, p0, Lcom/tkay/core/b/f$1;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    iput-object p3, p0, Lcom/tkay/core/b/f$1;->b:Lcom/tkay/core/common/f/aj;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 63
    iget-object v0, p0, Lcom/tkay/core/b/f$1;->c:Lcom/tkay/core/b/f;

    iget-object v1, p0, Lcom/tkay/core/b/f$1;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    iget-object v2, p0, Lcom/tkay/core/b/f$1;->b:Lcom/tkay/core/common/f/aj;

    invoke-static {v0, v1, v2}, Lcom/tkay/core/b/f;->a(Lcom/tkay/core/b/f;Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/aj;)V

    return-void
.end method
