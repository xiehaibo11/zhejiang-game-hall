.class final Lcom/tkay/expressad/reward/a/d$5;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/reward/a/d;->e(Lcom/tkay/expressad/foundation/d/d;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/foundation/d/d;

.field final synthetic b:Lcom/tkay/expressad/reward/a/d;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/reward/a/d;Lcom/tkay/expressad/foundation/d/d;)V
    .locals 0

    .line 3600
    iput-object p1, p0, Lcom/tkay/expressad/reward/a/d$5;->b:Lcom/tkay/expressad/reward/a/d;

    iput-object p2, p0, Lcom/tkay/expressad/reward/a/d$5;->a:Lcom/tkay/expressad/foundation/d/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 3612
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$5;->a:Lcom/tkay/expressad/foundation/d/d;

    if-eqz v0, :cond_0

    .line 4374
    iget-object v0, v0, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    if-eqz v0, :cond_0

    .line 3612
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$5;->a:Lcom/tkay/expressad/foundation/d/d;

    .line 5374
    iget-object v0, v0, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    .line 3612
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 3613
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$5;->b:Lcom/tkay/expressad/reward/a/d;

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$5;->a:Lcom/tkay/expressad/foundation/d/d;

    .line 6374
    iget-object v1, v1, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    .line 3613
    invoke-static {v0, v1}, Lcom/tkay/expressad/reward/a/d;->a(Lcom/tkay/expressad/reward/a/d;Ljava/util/List;)V

    :cond_0
    return-void
.end method
