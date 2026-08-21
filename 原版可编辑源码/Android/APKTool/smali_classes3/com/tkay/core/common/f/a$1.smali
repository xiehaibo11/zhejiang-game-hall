.class final Lcom/tkay/core/common/f/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/f/a;->k()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f/a;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/f/a;)V
    .locals 0

    .line 168
    iput-object p1, p0, Lcom/tkay/core/common/f/a$1;->a:Lcom/tkay/core/common/f/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 172
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/f/a$1;->a:Lcom/tkay/core/common/f/a;

    invoke-static {v0}, Lcom/tkay/core/common/f/a;->a(Lcom/tkay/core/common/f/a;)Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 173
    iget-object v0, p0, Lcom/tkay/core/common/f/a$1;->a:Lcom/tkay/core/common/f/a;

    invoke-static {v0}, Lcom/tkay/core/common/f/a;->a(Lcom/tkay/core/common/f/a;)Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/api/TYBaseAdAdapter;->destory()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method
