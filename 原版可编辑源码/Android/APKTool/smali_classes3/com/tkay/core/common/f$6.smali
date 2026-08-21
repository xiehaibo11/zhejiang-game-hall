.class final Lcom/tkay/core/common/f$6;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/f;->d(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/tkay/core/common/f;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/f;Ljava/lang/String;)V
    .locals 0

    .line 1547
    iput-object p1, p0, Lcom/tkay/core/common/f$6;->b:Lcom/tkay/core/common/f;

    iput-object p2, p0, Lcom/tkay/core/common/f$6;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 1550
    iget-object v0, p0, Lcom/tkay/core/common/f$6;->b:Lcom/tkay/core/common/f;

    iget-object v0, v0, Lcom/tkay/core/common/f;->d:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object v1, p0, Lcom/tkay/core/common/f$6;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/h;

    if-eqz v0, :cond_0

    .line 1552
    invoke-virtual {v0}, Lcom/tkay/core/common/h;->i()V

    :cond_0
    return-void
.end method
