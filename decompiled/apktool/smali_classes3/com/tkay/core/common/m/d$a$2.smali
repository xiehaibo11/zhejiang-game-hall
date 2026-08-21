.class final Lcom/tkay/core/common/m/d$a$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/m/d$a;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:[Lcom/tkay/core/api/BaseAd;

.field final synthetic b:Lcom/tkay/core/common/m/d$a;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/m/d$a;[Lcom/tkay/core/api/BaseAd;)V
    .locals 0

    .line 503
    iput-object p1, p0, Lcom/tkay/core/common/m/d$a$2;->b:Lcom/tkay/core/common/m/d$a;

    iput-object p2, p0, Lcom/tkay/core/common/m/d$a$2;->a:[Lcom/tkay/core/api/BaseAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 506
    iget-object v0, p0, Lcom/tkay/core/common/m/d$a$2;->b:Lcom/tkay/core/common/m/d$a;

    monitor-enter v0

    .line 507
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/common/m/d$a$2;->b:Lcom/tkay/core/common/m/d$a;

    iget-object v1, v1, Lcom/tkay/core/common/m/d$a;->b:Lcom/tkay/core/common/m/d;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/tkay/core/common/m/d$a$2;->b:Lcom/tkay/core/common/m/d$a;

    iget-object v1, v1, Lcom/tkay/core/common/m/d$a;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    if-eqz v1, :cond_0

    .line 508
    iget-object v1, p0, Lcom/tkay/core/common/m/d$a$2;->b:Lcom/tkay/core/common/m/d$a;

    iget-object v1, v1, Lcom/tkay/core/common/m/d$a;->b:Lcom/tkay/core/common/m/d;

    iget-object v2, p0, Lcom/tkay/core/common/m/d$a$2;->b:Lcom/tkay/core/common/m/d$a;

    iget-object v2, v2, Lcom/tkay/core/common/m/d$a;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    iget-object v3, p0, Lcom/tkay/core/common/m/d$a$2;->a:[Lcom/tkay/core/api/BaseAd;

    invoke-static {v1, v2, v3}, Lcom/tkay/core/common/m/d;->a(Lcom/tkay/core/common/m/d;Lcom/tkay/core/api/TYBaseAdAdapter;[Lcom/tkay/core/api/BaseAd;)V

    .line 509
    iget-object v1, p0, Lcom/tkay/core/common/m/d$a$2;->b:Lcom/tkay/core/common/m/d$a;

    const/4 v2, 0x0

    iput-object v2, v1, Lcom/tkay/core/common/m/d$a;->b:Lcom/tkay/core/common/m/d;

    .line 510
    iget-object v1, p0, Lcom/tkay/core/common/m/d$a$2;->b:Lcom/tkay/core/common/m/d$a;

    iput-object v2, v1, Lcom/tkay/core/common/m/d$a;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    .line 512
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method
