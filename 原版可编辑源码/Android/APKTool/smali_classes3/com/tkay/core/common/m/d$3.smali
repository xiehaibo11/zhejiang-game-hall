.class final Lcom/tkay/core/common/m/d$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/m/d;->a(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/m/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/api/TYBaseAdAdapter;

.field final synthetic b:Lcom/tkay/core/common/m/d;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/m/d;Lcom/tkay/core/api/TYBaseAdAdapter;)V
    .locals 0

    .line 641
    iput-object p1, p0, Lcom/tkay/core/common/m/d$3;->b:Lcom/tkay/core/common/m/d;

    iput-object p2, p0, Lcom/tkay/core/common/m/d$3;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 645
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/m/d$3;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    if-eqz v0, :cond_0

    .line 646
    iget-object v0, p0, Lcom/tkay/core/common/m/d$3;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-virtual {v0}, Lcom/tkay/core/api/TYBaseAdAdapter;->destory()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception v0

    .line 649
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method
