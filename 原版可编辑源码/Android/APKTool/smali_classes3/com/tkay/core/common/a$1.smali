.class final Lcom/tkay/core/common/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/a;->a(Landroid/content/Context;Lcom/tkay/core/common/f/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Lcom/tkay/core/common/f/d;

.field final synthetic c:Lcom/tkay/core/common/f/a;

.field final synthetic d:Lcom/tkay/core/api/TYBaseAdAdapter;

.field final synthetic e:Lcom/tkay/core/common/a;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/a;Landroid/content/Context;Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/a;Lcom/tkay/core/api/TYBaseAdAdapter;)V
    .locals 0

    .line 763
    iput-object p1, p0, Lcom/tkay/core/common/a$1;->e:Lcom/tkay/core/common/a;

    iput-object p2, p0, Lcom/tkay/core/common/a$1;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/core/common/a$1;->b:Lcom/tkay/core/common/f/d;

    iput-object p4, p0, Lcom/tkay/core/common/a$1;->c:Lcom/tkay/core/common/f/a;

    iput-object p5, p0, Lcom/tkay/core/common/a$1;->d:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 769
    iget-object v0, p0, Lcom/tkay/core/common/a$1;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/a/a;->a(Landroid/content/Context;)Lcom/tkay/core/a/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/a$1;->b:Lcom/tkay/core/common/f/d;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->Y()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/common/a$1;->b:Lcom/tkay/core/common/f/d;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/core/common/a$1;->b:Lcom/tkay/core/common/f/d;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/d;->x()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/core/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 771
    invoke-static {}, Lcom/tkay/core/a/c;->a()Lcom/tkay/core/a/c;

    iget-object v0, p0, Lcom/tkay/core/common/a$1;->b:Lcom/tkay/core/common/f/d;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/a/c;->a(Ljava/lang/String;)V

    .line 772
    invoke-static {}, Lcom/tkay/core/a/c;->a()Lcom/tkay/core/a/c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/a$1;->b:Lcom/tkay/core/common/f/d;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/common/a$1;->b:Lcom/tkay/core/common/f/d;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/d;->x()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/a/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 775
    iget-object v0, p0, Lcom/tkay/core/common/a$1;->e:Lcom/tkay/core/common/a;

    iget-object v1, p0, Lcom/tkay/core/common/a$1;->b:Lcom/tkay/core/common/f/d;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/common/a$1;->b:Lcom/tkay/core/common/f/d;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/d;->x()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/core/common/a$1;->c:Lcom/tkay/core/common/f/a;

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/core/common/a;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/a;)V

    .line 780
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/b/c;->b()Lcom/tkay/core/api/MediationBidManager;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 782
    iget-object v1, p0, Lcom/tkay/core/common/a$1;->b:Lcom/tkay/core/common/f/d;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/common/a$1;->d:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-virtual {v2}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/api/MediationBidManager;->notifyWinnerDisplay(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)V

    :cond_0
    return-void
.end method
