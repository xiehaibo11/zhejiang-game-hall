.class final Lcom/tkay/expressad/mbbanner/a/d/b$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/mbbanner/a/d/b;->b(Lcom/tkay/expressad/foundation/d/d;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/foundation/d/d;

.field final synthetic b:Lcom/tkay/expressad/mbbanner/a/d/b;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/mbbanner/a/d/b;Lcom/tkay/expressad/foundation/d/d;)V
    .locals 0

    .line 415
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/b$2;->b:Lcom/tkay/expressad/mbbanner/a/d/b;

    iput-object p2, p0, Lcom/tkay/expressad/mbbanner/a/d/b$2;->a:Lcom/tkay/expressad/foundation/d/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 419
    invoke-static {}, Lcom/tkay/expressad/mbbanner/a/d/b;->a()Ljava/lang/String;

    .line 435
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b$2;->a:Lcom/tkay/expressad/foundation/d/d;

    if-eqz v0, :cond_0

    .line 1374
    iget-object v0, v0, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    if-eqz v0, :cond_0

    .line 435
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b$2;->a:Lcom/tkay/expressad/foundation/d/d;

    .line 2374
    iget-object v0, v0, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    .line 435
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 436
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b$2;->b:Lcom/tkay/expressad/mbbanner/a/d/b;

    invoke-static {v0}, Lcom/tkay/expressad/mbbanner/a/d/b;->c(Lcom/tkay/expressad/mbbanner/a/d/b;)Landroid/content/Context;

    invoke-static {}, Lcom/tkay/expressad/mbbanner/a/e/b;->a()V

    .line 439
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/mbbanner/a/d/b;->a()Ljava/lang/String;

    return-void
.end method
